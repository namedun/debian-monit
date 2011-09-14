/*
 * Copyright (C) Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 *
 * You must obey the GNU Affero General Public License in all respects
 * for all of the code used other than OpenSSL.  
 */

#include "config.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#ifdef HAVE_REGEX_H
#include <regex.h>
#endif

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#ifdef HAVE_LIBNET_LIBNET_TYPES_H
#include <libnet/libnet-types.h>
#endif

#include "md5.h"
#include "sha1.h"
#include "base64.h"
#include "protocol.h"
#include "httpstatus.h"
#include "util/Str.h"


/**
 *  A HTTP test.
 *
 *  We send the following request to the server:
 *  'GET / HTTP/1.1'             ... if request statement isn't defined
 *  'GET /custom/page  HTTP/1.1' ... if request statement is defined
 *  and check the server's status code.
 *
 *  If the statement defines hostname, it's used in the 'Host:' header
 * otherwise a default (empty) Host header is set.
 *
 *  If the status code is >= 400, an error has occurred.
 *  Return TRUE if the status code is OK, otherwise FALSE.
 *  @file
 */



/* ------------------------------------------------------------- Definitions */


#undef   READ_SIZE
#define  READ_SIZE  8192
#define  LINE_SIZE  512


/* -------------------------------------------------------------- Prototypes */


static int check_request(Socket_T s, Port_T P);
static char *get_auth_header(Port_T P, char *auth, int l);
static int do_regex(Socket_T s, int content_length, Request_T R);
static int check_request_checksum(Socket_T s, int content_length, char *checksum, int hashtype);


/* ------------------------------------------------------------------ Public */


int check_http(Socket_T socket) {
        
        Port_T P;
        char host[STRLEN];
        char auth[STRLEN]= {0};
        const char *request= NULL;
        const char *hostheader= NULL;
        
        ASSERT(socket);
        
        P = socket_get_Port(socket);
        
        ASSERT(P);
        
        request= P->request?P->request:"/";
        
        Util_getHTTPHostHeader(socket, host, STRLEN);
        hostheader= P->request_hostheader?P->request_hostheader:host;
        
        if (socket_print(socket, 
                         "GET %s HTTP/1.1\r\n"
                         "Host: %s\r\n"
                         "Accept: */*\r\n"
                         "Connection: close\r\n"
                         "User-Agent: %s/%s\r\n"
                         "%s\r\n",
                         request, hostheader, prog, VERSION,
                         get_auth_header(P, auth, STRLEN)) < 0) {
                socket_setError(socket, "HTTP: error sending data -- %s\n", STRERROR);
                return FALSE;
        }
        
        return check_request(socket, P);
        
}


/* ----------------------------------------------------------------- Private */


/**
 * Check that the server returns a valid HTTP response as well as checksum
 * or content regex if required
 * @param s A socket
 * @return TRUE if the response is valid otherwise FALSE
 */
static int check_request(Socket_T socket, Port_T P) {
        int status;
        char buf[LINE_SIZE];
        int content_length = -1;
        if(! socket_readln(socket, buf, LINE_SIZE)) {
                socket_setError(socket, "HTTP: error receiving data -- %s\n", STRERROR);
                return FALSE;
        }
        Util_chomp(buf);
        if(! sscanf(buf, "%*s %d", &status)) {
                socket_setError(socket, "HTTP error: cannot parse HTTP status in response: %s\n", buf);
                return FALSE;
        }
        if(status >= 400) {
                socket_setError(socket, "HTTP error: Server returned status %d\n", status);
                return FALSE;
        }
        /* Get Content-Length header value */
        while (NULL != socket_readln(socket, buf, LINE_SIZE)) {
                if((buf[0] == '\r' && buf[1] == '\n') || (buf[0] == '\n'))
                        break;
                Util_chomp(buf);
                if(Util_startsWith(buf, "Content-Length")) {
                        if(! sscanf(buf, "%*s%*[: ]%d", &content_length)) {
                                socket_setError(socket, "HTTP error: parsing Content-Length response header '%s'\n", buf);
                                return FALSE;
                        }
                        if(content_length < 0) {
                                socket_setError(socket, "HTTP error: Illegal Content-Length response header '%s'\n", buf);
                                return FALSE;
                        }
                }
        }
        if(P->url_request && P->url_request->regex) {
                if(! do_regex(socket, content_length, P->url_request)) {
                        socket_setError(socket, "HTTP error: Failed regular expression test on content returned from server\n");
                        return FALSE;
                }
        }
        if(P->request_checksum)
                return check_request_checksum(socket, content_length, P->request_checksum, P->request_hashtype); 
        return TRUE;
}


static int check_request_checksum(Socket_T socket, int content_length, char *checksum, int hashtype) {
        int n;
        MD_T result, hash;
        md5_context_t ctx_md5;
        sha1_context_t ctx_sha1;
        char buf[READ_SIZE];
        int keylength = 0;
        
        if(content_length <= 0) {
                DEBUG("HTTP warning: Response does not contain a valid Content-Length -- cannot compute checksum\n");
                return TRUE;
        }
        
        switch (hashtype) {
                case HASH_MD5:
                        md5_init(&ctx_md5);
                        for (n = 0; content_length > 0; content_length -= n) {
                                if ((n = socket_read(socket, buf, content_length > sizeof(buf) ? sizeof(buf) : content_length)) < 0)
                                        break;
                                md5_append(&ctx_md5, (const md5_byte_t *)buf, n);
                        }
                        md5_finish(&ctx_md5, (md5_byte_t *)hash);
                        keylength = 16; /* Raw key bytes not string chars! */
                        break;
                case HASH_SHA1: 
                        sha1_init(&ctx_sha1);
                        for (n = 0; content_length > 0; content_length -= n) {
                                if ((n = socket_read(socket, buf, content_length > sizeof(buf) ? sizeof(buf) : content_length)) < 0)
                                        break;
                                sha1_append(&ctx_sha1, (md5_byte_t *)buf, n);
                        }
                        sha1_finish(&ctx_sha1, (md5_byte_t *)hash);
                        keylength = 20; /* Raw key bytes not string chars! */
                        break;
                default:
                        socket_setError(socket, "HTTP checksum error: Unknown hash type\n");
                        return FALSE;
        }          
        
        if (strncasecmp(Util_digest2Bytes((unsigned char *)hash, keylength, result), checksum, keylength * 2) != 0) {
                socket_setError(socket, "HTTP checksum error: Document checksum mismatch\n");
                return FALSE;
        } else {
                DEBUG("HTTP: Succeeded testing document checksum\n");
        }
        return TRUE;
}


static int do_regex(Socket_T socket, int content_length, Request_T R) {
        int n;
        int size= 0;
        int rv= TRUE;
        int length= 0;
        char *buf= NULL;
#ifdef HAVE_REGEX_H
        int regex_return;
#else
        char *regex_return;
#endif
        
        if(R->regex == NULL) {
                return TRUE;
        }
        
        if(content_length == 0) {
                socket_setError(socket, "HTTP error: Cannot test regex -- No content returned from server\n");
                return FALSE;
        }
        
        if(content_length < 0) /* Not defined in response */
                content_length= HTTP_CONTENT_MAX;
        else if(content_length > HTTP_CONTENT_MAX)
                content_length= HTTP_CONTENT_MAX;
        
        size= 0;
        length= content_length;
        buf= xmalloc(content_length + 1);
        
        do {
                n= socket_read(socket, &buf[size], length);
                if(n<=0)
                        break;
                size+= n;
                length-= n;
        } while(length>0);
        
        if(size==0) {
                rv= FALSE;
                socket_setError(socket, "HTTP: error receiving data -- %s\n", STRERROR);
                goto error;
        }
        buf[size] = 0;
        
#ifdef HAVE_REGEX_H
        
        regex_return = regexec(R->regex, buf, 0, NULL, 0);
        switch (R->operator) {
                        
                case OPERATOR_EQUAL:
                        if(regex_return!=0) {
                                rv= FALSE;
                        } else {
                                DEBUG("HTTP: Regular expression test succeeded\n");
                                
                        }
                        break;
                        
                case OPERATOR_NOTEQUAL:
                        if(regex_return == 0) {
                                rv= FALSE;
                        } else {
                                DEBUG("HTTP: Regular expression test succeeded\n");
                                
                        }
                        break;
                        
                default:
                        socket_setError(socket, "HTTP error: Invalid content operator\n");
        }
	
#else
        /* w/o regex support */
        
        regex_return= strstr(buf, R->regex);
        switch(R->operator) {
                        
                case OPERATOR_EQUAL:
                        if(!regex_return) {
                                rv= FALSE;
                                DEBUG("HTTP: Regular expression does not match\n");
                        }
                        break;
                        
                case OPERATOR_NOTEQUAL:
                        if(regex_return) {
                                rv= FALSE;
                                DEBUG("HTTP: Regular expression match\n");
                        }
                        break;
                        
                default:
                        socket_setError(socket, "HTTP error: Invalid content operator\n");
        }
        
#endif
        
error:
        FREE(buf);
        return rv;
        
}


static char *get_auth_header(Port_T P, char *auth, int l) {
        
        char *b64;
        char buf[STRLEN];
        char *username= NULL;
        char *password= NULL;
        
        if(P->url_request) {
                URL_T U=  P->url_request->url;
                if(U) {
                        username= U->user;
                        password= U->password;
                }
        }
        
        if(! (username && password)) {
                return auth;
        } 
        
        snprintf(buf, STRLEN, "%s:%s", username, password);
        if(! (b64= encode_base64(strlen(buf), (unsigned char *)buf)) ) {
                return auth;
        }
        
        snprintf(auth, l, "Authorization: Basic %s\r\n", b64);
        FREE(b64);
        
        return auth;
        
}
