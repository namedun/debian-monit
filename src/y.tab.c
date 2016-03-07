#include <config.h>
/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 26 "src/p.y" /* yacc.c:339  */


/*
 * DESCRIPTION
 *   Simple context-free grammar for parsing the control file.
 *
 */

#include "config.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif

#ifdef HAVE_CTYPE_H
#include <ctype.h>
#endif

#ifdef HAVE_PWD_H
#include <pwd.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif

#ifdef HAVE_TIME_H
#include <time.h>
#endif

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#ifdef HAVE_ASM_PARAM_H
#include <asm/param.h>
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif

#ifdef HAVE_NETDB_H
#include <netdb.h>
#endif

#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

#ifdef HAVE_NETINET_IN_SYSTM_H
#include <netinet/in_systm.h>
#endif

#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#ifdef HAVE_NETINET_IP_H
#include <netinet/ip.h>
#endif

#ifdef HAVE_NETINET_IP_ICMP_H
#include <netinet/ip_icmp.h>
#endif

#ifdef HAVE_REGEX_H
#include <regex.h>
#endif

#include "net.h"
#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "process.h"
#include "device.h"
#include "processor.h"

// libmonit
#include "io/File.h"
#include "util/Str.h"
#include "thread/Thread.h"


/* ------------------------------------------------------------- Definitions */


struct IHavePrecedence {
        boolean_t daemon;
        boolean_t logfile;
        boolean_t pidfile;
};


struct myrate {
        unsigned count;
        unsigned cycles;
};


/* yacc interface */
void  yyerror(const char *,...);
void  yyerror2(const char *,...);
void  yywarning(const char *,...);
void  yywarning2(const char *,...);

/* lexer interface */
int yylex(void);
extern FILE *yyin;
extern int lineno;
extern int arglineno;
extern char *yytext;
extern char *argyytext;
extern char *currentfile;
extern char *argcurrentfile;
extern int buffer_stack_ptr;

List_T included = NULL;

/* Local variables */
static int cfg_errflag = 0;
static Service_T tail = NULL;
static Service_T current = NULL;
static Request_T urlrequest = NULL;
static command_t command = NULL;
static command_t command1 = NULL;
static command_t command2 = NULL;
static Service_T depend_list = NULL;
static struct myuid uidset;
static struct mygid gidset;
static struct mypid pidset;
static struct mypid ppidset;
static struct myfsflag fsflagset;
static struct mynonexist nonexistset;
static struct mystatus statusset;
static struct myperm permset;
static struct mysize sizeset;
static struct myuptime uptimeset;
static struct mylinkstatus linkstatusset;
static struct mylinkspeed linkspeedset;
static struct mylinksaturation linksaturationset;
static struct mybandwidth bandwidthset;
static struct mymatch matchset;
static struct myicmp icmpset;
static struct mymail mailset;
static struct SslOptions_T sslset;
static struct myport portset;
static struct mymailserver mailserverset;
static struct mymmonit mmonitset;
static struct myfilesystem filesystemset;
static struct myresource resourceset;
static struct mychecksum checksumset;
static struct mytimestamp timestampset;
static struct myactionrate actionrateset;
static struct IHavePrecedence ihp = {false, false, false};
static struct myrate rate = {1, 1};
static struct myrate rate1 = {1, 1};
static struct myrate rate2 = {1, 1};
static char * htpasswd_file = NULL;
static unsigned repeat = 0;
static unsigned repeat1 = 0;
static unsigned repeat2 = 0;
static Digest_Type digesttype = Digest_Cleartext;

#define BITMAP_MAX (sizeof(long long) * 8)


/* -------------------------------------------------------------- Prototypes */

static void  preparse();
static void  postparse();
static boolean_t _parseOutgoingAddress(const char *ip, Outgoing_T *outgoing);
static void  addmail(char *, Mail_T, Mail_T *);
static Service_T createservice(Service_Type, char *, char *, State_Type (*)(Service_T));
static void  addservice(Service_T);
static void  adddependant(char *);
static void  addservicegroup(char *);
static void  addport(Port_T *, Port_T);
static void  addhttpheader(Port_T, const char *);
static void  addresource(Resource_T);
static void  addtimestamp(Timestamp_T);
static void  addactionrate(ActionRate_T);
static void  addsize(Size_T);
static void  adduptime(Uptime_T);
static void  addpid(Pid_T);
static void  addppid(Pid_T);
static void  addfsflag(Fsflag_T);
static void  addnonexist(Nonexist_T);
static void  addlinkstatus(Service_T, LinkStatus_T);
static void  addlinkspeed(Service_T, LinkSpeed_T);
static void  addlinksaturation(Service_T, LinkSaturation_T);
static void  addbandwidth(Bandwidth_T *, Bandwidth_T);
static void  addfilesystem(Filesystem_T);
static void  addicmp(Icmp_T);
static void  addgeneric(Port_T, char*, char*);
static void  addcommand(int, unsigned);
static void  addargument(char *);
static void  addmmonit(Mmonit_T);
static void  addmailserver(MailServer_T);
static boolean_t addcredentials(char *, char *, Digest_Type, boolean_t);
#ifdef HAVE_LIBPAM
static void  addpamauth(char *, int);
#endif
static void  addhtpasswdentry(char *, char *, Digest_Type);
static uid_t get_uid(char *, uid_t);
static gid_t get_gid(char *, gid_t);
static void  addchecksum(Checksum_T);
static void  addperm(Perm_T);
static void  addmatch(Match_T, int, int);
static void  addmatchpath(Match_T, Action_Type);
static void  addstatus(Status_T);
static Uid_T adduid(Uid_T);
static Gid_T addgid(Gid_T);
static void  addeuid(uid_t);
static void  addegid(gid_t);
static void  addeventaction(EventAction_T *, Action_Type, Action_Type);
static void  prepare_urlrequest(URL_T U);
static void  seturlrequest(int, char *);
static void  setlogfile(char *);
static void  setpidfile(char *);
static void  reset_sslset();
static void  reset_mailset();
static void  reset_mailserverset();
static void  reset_mmonitset();
static void  reset_portset();
static void  reset_resourceset();
static void  reset_timestampset();
static void  reset_actionrateset();
static void  reset_sizeset();
static void  reset_uptimeset();
static void  reset_pidset();
static void  reset_ppidset();
static void  reset_fsflagset();
static void  reset_nonexistset();
static void  reset_linkstatusset();
static void  reset_linkspeedset();
static void  reset_linksaturationset();
static void  reset_bandwidthset();
static void  reset_checksumset();
static void  reset_permset();
static void  reset_uidset();
static void  reset_gidset();
static void  reset_statusset();
static void  reset_filesystemset();
static void  reset_icmpset();
static void  reset_rateset(struct myrate *);
static void  check_name(char *);
static int   check_perm(int);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend();
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);


#line 344 "src/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    THEN = 260,
    OR = 261,
    FAILED = 262,
    SET = 263,
    LOGFILE = 264,
    FACILITY = 265,
    DAEMON = 266,
    SYSLOG = 267,
    MAILSERVER = 268,
    HTTPD = 269,
    ALLOW = 270,
    REJECTOPT = 271,
    ADDRESS = 272,
    INIT = 273,
    READONLY = 274,
    CLEARTEXT = 275,
    MD5HASH = 276,
    SHA1HASH = 277,
    CRYPT = 278,
    DELAY = 279,
    PEMFILE = 280,
    ENABLE = 281,
    DISABLE = 282,
    SSL = 283,
    CLIENTPEMFILE = 284,
    ALLOWSELFCERTIFICATION = 285,
    SELFSIGNED = 286,
    VERIFY = 287,
    CERTIFICATE = 288,
    CACERTIFICATEFILE = 289,
    CACERTIFICATEPATH = 290,
    VALID = 291,
    INTERFACE = 292,
    LINK = 293,
    PACKET = 294,
    BYTEIN = 295,
    BYTEOUT = 296,
    PACKETIN = 297,
    PACKETOUT = 298,
    SPEED = 299,
    SATURATION = 300,
    UPLOAD = 301,
    DOWNLOAD = 302,
    TOTAL = 303,
    IDFILE = 304,
    STATEFILE = 305,
    SEND = 306,
    EXPECT = 307,
    CYCLE = 308,
    COUNT = 309,
    REMINDER = 310,
    REPEAT = 311,
    LIMITS = 312,
    SENDEXPECTBUFFER = 313,
    EXPECTBUFFER = 314,
    FILECONTENTBUFFER = 315,
    HTTPCONTENTBUFFER = 316,
    PROGRAMOUTPUT = 317,
    NETWORKTIMEOUT = 318,
    PIDFILE = 319,
    START = 320,
    STOP = 321,
    PATHTOK = 322,
    HOST = 323,
    HOSTNAME = 324,
    PORT = 325,
    IPV4 = 326,
    IPV6 = 327,
    TYPE = 328,
    UDP = 329,
    TCP = 330,
    TCPSSL = 331,
    PROTOCOL = 332,
    CONNECTION = 333,
    ALERT = 334,
    NOALERT = 335,
    MAILFORMAT = 336,
    UNIXSOCKET = 337,
    SIGNATURE = 338,
    TIMEOUT = 339,
    RETRY = 340,
    RESTART = 341,
    CHECKSUM = 342,
    EVERY = 343,
    NOTEVERY = 344,
    DEFAULT = 345,
    HTTP = 346,
    HTTPS = 347,
    APACHESTATUS = 348,
    FTP = 349,
    SMTP = 350,
    SMTPS = 351,
    POP = 352,
    POPS = 353,
    IMAP = 354,
    IMAPS = 355,
    CLAMAV = 356,
    NNTP = 357,
    NTP3 = 358,
    MYSQL = 359,
    DNS = 360,
    WEBSOCKET = 361,
    SSH = 362,
    DWP = 363,
    LDAP2 = 364,
    LDAP3 = 365,
    RDATE = 366,
    RSYNC = 367,
    TNS = 368,
    PGSQL = 369,
    POSTFIXPOLICY = 370,
    SIP = 371,
    LMTP = 372,
    GPS = 373,
    RADIUS = 374,
    MEMCACHE = 375,
    REDIS = 376,
    MONGODB = 377,
    SIEVE = 378,
    STRING = 379,
    PATH = 380,
    MAILADDR = 381,
    MAILFROM = 382,
    MAILSENDER = 383,
    MAILREPLYTO = 384,
    MAILSUBJECT = 385,
    MAILBODY = 386,
    SERVICENAME = 387,
    STRINGNAME = 388,
    NUMBER = 389,
    PERCENT = 390,
    LOGLIMIT = 391,
    CLOSELIMIT = 392,
    DNSLIMIT = 393,
    KEEPALIVELIMIT = 394,
    REPLYLIMIT = 395,
    REQUESTLIMIT = 396,
    STARTLIMIT = 397,
    WAITLIMIT = 398,
    GRACEFULLIMIT = 399,
    CLEANUPLIMIT = 400,
    REAL = 401,
    CHECKPROC = 402,
    CHECKFILESYS = 403,
    CHECKFILE = 404,
    CHECKDIR = 405,
    CHECKHOST = 406,
    CHECKSYSTEM = 407,
    CHECKFIFO = 408,
    CHECKPROGRAM = 409,
    CHECKNET = 410,
    THREADS = 411,
    CHILDREN = 412,
    STATUS = 413,
    ORIGIN = 414,
    VERSIONOPT = 415,
    RESOURCE = 416,
    MEMORY = 417,
    TOTALMEMORY = 418,
    LOADAVG1 = 419,
    LOADAVG5 = 420,
    LOADAVG15 = 421,
    SWAP = 422,
    MODE = 423,
    ACTIVE = 424,
    PASSIVE = 425,
    MANUAL = 426,
    CPU = 427,
    TOTALCPU = 428,
    CPUUSER = 429,
    CPUSYSTEM = 430,
    CPUWAIT = 431,
    GROUP = 432,
    REQUEST = 433,
    DEPENDS = 434,
    BASEDIR = 435,
    SLOT = 436,
    EVENTQUEUE = 437,
    SECRET = 438,
    HOSTHEADER = 439,
    UID = 440,
    EUID = 441,
    GID = 442,
    MMONIT = 443,
    INSTANCE = 444,
    USERNAME = 445,
    PASSWORD = 446,
    TIMESTAMP = 447,
    CHANGED = 448,
    MILLISECOND = 449,
    SECOND = 450,
    MINUTE = 451,
    HOUR = 452,
    DAY = 453,
    MONTH = 454,
    SSLAUTO = 455,
    SSLV2 = 456,
    SSLV3 = 457,
    TLSV1 = 458,
    TLSV11 = 459,
    TLSV12 = 460,
    CERTMD5 = 461,
    AUTO = 462,
    BYTE = 463,
    KILOBYTE = 464,
    MEGABYTE = 465,
    GIGABYTE = 466,
    INODE = 467,
    SPACE = 468,
    TFREE = 469,
    PERMISSION = 470,
    SIZE = 471,
    MATCH = 472,
    NOT = 473,
    IGNORE = 474,
    ACTION = 475,
    UPTIME = 476,
    EXEC = 477,
    UNMONITOR = 478,
    PING = 479,
    PING4 = 480,
    PING6 = 481,
    ICMP = 482,
    ICMPECHO = 483,
    NONEXIST = 484,
    EXIST = 485,
    INVALID = 486,
    DATA = 487,
    RECOVERED = 488,
    PASSED = 489,
    SUCCEEDED = 490,
    URL = 491,
    CONTENT = 492,
    PID = 493,
    PPID = 494,
    FSFLAG = 495,
    REGISTER = 496,
    CREDENTIALS = 497,
    URLOBJECT = 498,
    ADDRESSOBJECT = 499,
    TARGET = 500,
    TIMESPEC = 501,
    HTTPHEADER = 502,
    MAXFORWARD = 503,
    FIPS = 504,
    GREATER = 505,
    LESS = 506,
    EQUAL = 507,
    NOTEQUAL = 508
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define THEN 260
#define OR 261
#define FAILED 262
#define SET 263
#define LOGFILE 264
#define FACILITY 265
#define DAEMON 266
#define SYSLOG 267
#define MAILSERVER 268
#define HTTPD 269
#define ALLOW 270
#define REJECTOPT 271
#define ADDRESS 272
#define INIT 273
#define READONLY 274
#define CLEARTEXT 275
#define MD5HASH 276
#define SHA1HASH 277
#define CRYPT 278
#define DELAY 279
#define PEMFILE 280
#define ENABLE 281
#define DISABLE 282
#define SSL 283
#define CLIENTPEMFILE 284
#define ALLOWSELFCERTIFICATION 285
#define SELFSIGNED 286
#define VERIFY 287
#define CERTIFICATE 288
#define CACERTIFICATEFILE 289
#define CACERTIFICATEPATH 290
#define VALID 291
#define INTERFACE 292
#define LINK 293
#define PACKET 294
#define BYTEIN 295
#define BYTEOUT 296
#define PACKETIN 297
#define PACKETOUT 298
#define SPEED 299
#define SATURATION 300
#define UPLOAD 301
#define DOWNLOAD 302
#define TOTAL 303
#define IDFILE 304
#define STATEFILE 305
#define SEND 306
#define EXPECT 307
#define CYCLE 308
#define COUNT 309
#define REMINDER 310
#define REPEAT 311
#define LIMITS 312
#define SENDEXPECTBUFFER 313
#define EXPECTBUFFER 314
#define FILECONTENTBUFFER 315
#define HTTPCONTENTBUFFER 316
#define PROGRAMOUTPUT 317
#define NETWORKTIMEOUT 318
#define PIDFILE 319
#define START 320
#define STOP 321
#define PATHTOK 322
#define HOST 323
#define HOSTNAME 324
#define PORT 325
#define IPV4 326
#define IPV6 327
#define TYPE 328
#define UDP 329
#define TCP 330
#define TCPSSL 331
#define PROTOCOL 332
#define CONNECTION 333
#define ALERT 334
#define NOALERT 335
#define MAILFORMAT 336
#define UNIXSOCKET 337
#define SIGNATURE 338
#define TIMEOUT 339
#define RETRY 340
#define RESTART 341
#define CHECKSUM 342
#define EVERY 343
#define NOTEVERY 344
#define DEFAULT 345
#define HTTP 346
#define HTTPS 347
#define APACHESTATUS 348
#define FTP 349
#define SMTP 350
#define SMTPS 351
#define POP 352
#define POPS 353
#define IMAP 354
#define IMAPS 355
#define CLAMAV 356
#define NNTP 357
#define NTP3 358
#define MYSQL 359
#define DNS 360
#define WEBSOCKET 361
#define SSH 362
#define DWP 363
#define LDAP2 364
#define LDAP3 365
#define RDATE 366
#define RSYNC 367
#define TNS 368
#define PGSQL 369
#define POSTFIXPOLICY 370
#define SIP 371
#define LMTP 372
#define GPS 373
#define RADIUS 374
#define MEMCACHE 375
#define REDIS 376
#define MONGODB 377
#define SIEVE 378
#define STRING 379
#define PATH 380
#define MAILADDR 381
#define MAILFROM 382
#define MAILSENDER 383
#define MAILREPLYTO 384
#define MAILSUBJECT 385
#define MAILBODY 386
#define SERVICENAME 387
#define STRINGNAME 388
#define NUMBER 389
#define PERCENT 390
#define LOGLIMIT 391
#define CLOSELIMIT 392
#define DNSLIMIT 393
#define KEEPALIVELIMIT 394
#define REPLYLIMIT 395
#define REQUESTLIMIT 396
#define STARTLIMIT 397
#define WAITLIMIT 398
#define GRACEFULLIMIT 399
#define CLEANUPLIMIT 400
#define REAL 401
#define CHECKPROC 402
#define CHECKFILESYS 403
#define CHECKFILE 404
#define CHECKDIR 405
#define CHECKHOST 406
#define CHECKSYSTEM 407
#define CHECKFIFO 408
#define CHECKPROGRAM 409
#define CHECKNET 410
#define THREADS 411
#define CHILDREN 412
#define STATUS 413
#define ORIGIN 414
#define VERSIONOPT 415
#define RESOURCE 416
#define MEMORY 417
#define TOTALMEMORY 418
#define LOADAVG1 419
#define LOADAVG5 420
#define LOADAVG15 421
#define SWAP 422
#define MODE 423
#define ACTIVE 424
#define PASSIVE 425
#define MANUAL 426
#define CPU 427
#define TOTALCPU 428
#define CPUUSER 429
#define CPUSYSTEM 430
#define CPUWAIT 431
#define GROUP 432
#define REQUEST 433
#define DEPENDS 434
#define BASEDIR 435
#define SLOT 436
#define EVENTQUEUE 437
#define SECRET 438
#define HOSTHEADER 439
#define UID 440
#define EUID 441
#define GID 442
#define MMONIT 443
#define INSTANCE 444
#define USERNAME 445
#define PASSWORD 446
#define TIMESTAMP 447
#define CHANGED 448
#define MILLISECOND 449
#define SECOND 450
#define MINUTE 451
#define HOUR 452
#define DAY 453
#define MONTH 454
#define SSLAUTO 455
#define SSLV2 456
#define SSLV3 457
#define TLSV1 458
#define TLSV11 459
#define TLSV12 460
#define CERTMD5 461
#define AUTO 462
#define BYTE 463
#define KILOBYTE 464
#define MEGABYTE 465
#define GIGABYTE 466
#define INODE 467
#define SPACE 468
#define TFREE 469
#define PERMISSION 470
#define SIZE 471
#define MATCH 472
#define NOT 473
#define IGNORE 474
#define ACTION 475
#define UPTIME 476
#define EXEC 477
#define UNMONITOR 478
#define PING 479
#define PING4 480
#define PING6 481
#define ICMP 482
#define ICMPECHO 483
#define NONEXIST 484
#define EXIST 485
#define INVALID 486
#define DATA 487
#define RECOVERED 488
#define PASSED 489
#define SUCCEEDED 490
#define URL 491
#define CONTENT 492
#define PID 493
#define PPID 494
#define FSFLAG 495
#define REGISTER 496
#define CREDENTIALS 497
#define URLOBJECT 498
#define ADDRESSOBJECT 499
#define TARGET 500
#define TIMESPEC 501
#define HTTPHEADER 502
#define MAXFORWARD 503
#define FIPS 504
#define GREATER 505
#define LESS 506
#define EQUAL 507
#define NOTEQUAL 508

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 304 "src/p.y" /* yacc.c:355  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 898 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 913 "src/y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  260
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  227
/* YYNRULES -- Number of rules.  */
#define YYNRULES  702
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1296

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   508

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   256,     2,
       2,     2,     2,     2,   257,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   258,     2,   259,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   254,     2,   255,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   354,   354,   355,   358,   359,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   389,   390,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   415,   416,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   438,   439,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   459,
     460,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   479,   480,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   497,
     498,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   516,   517,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   531,   532,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   551,   552,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   566,   570,   573,   579,   589,   590,   593,   598,
     604,   607,   608,   611,   614,   617,   620,   623,   626,   631,
     636,   644,   647,   652,   655,   659,   665,   670,   675,   683,
     686,   687,   690,   696,   697,   700,   703,   704,   705,   706,
     709,   710,   715,   732,   735,   738,   739,   742,   746,   750,
     754,   758,   761,   771,   783,   795,   801,   802,   805,   819,
     826,   835,   836,   839,   843,   847,   851,   859,   867,   871,
     877,   886,   893,   908,   909,   912,   921,   932,   933,   936,
     939,   942,   943,   944,   945,   948,   952,   958,   959,   962,
     963,   964,   965,   968,   969,   972,   973,   976,   979,   992,
     993,   996,   997,   998,  1001,  1002,  1005,  1006,  1009,  1012,
    1017,  1018,  1021,  1022,  1025,  1030,  1035,  1042,  1047,  1050,
    1058,  1062,  1066,  1070,  1074,  1074,  1081,  1081,  1088,  1088,
    1095,  1095,  1102,  1109,  1110,  1113,  1119,  1120,  1123,  1126,
    1129,  1136,  1145,  1150,  1153,  1158,  1163,  1168,  1176,  1182,
    1194,  1199,  1206,  1215,  1218,  1223,  1226,  1232,  1235,  1240,
    1241,  1244,  1245,  1248,  1251,  1256,  1260,  1264,  1267,  1272,
    1275,  1280,  1285,  1288,  1293,  1302,  1303,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1319,  1326,
    1327,  1330,  1331,  1332,  1333,  1334,  1335,  1338,  1344,  1345,
    1348,  1349,  1350,  1351,  1352,  1355,  1361,  1366,  1371,  1378,
    1379,  1382,  1383,  1384,  1385,  1388,  1391,  1396,  1401,  1407,
    1410,  1415,  1418,  1422,  1427,  1428,  1431,  1432,  1435,  1440,
    1443,  1446,  1449,  1452,  1455,  1458,  1463,  1466,  1471,  1474,
    1477,  1480,  1483,  1486,  1489,  1492,  1496,  1499,  1502,  1507,
    1510,  1513,  1518,  1521,  1524,  1527,  1530,  1533,  1536,  1539,
    1542,  1545,  1548,  1553,  1557,  1563,  1564,  1567,  1570,  1573,
    1576,  1581,  1582,  1585,  1588,  1593,  1594,  1597,  1605,  1610,
    1613,  1618,  1623,  1624,  1627,  1630,  1635,  1636,  1639,  1640,
    1641,  1642,  1643,  1646,  1652,  1658,  1663,  1669,  1670,  1675,
    1680,  1681,  1684,  1689,  1690,  1693,  1696,  1700,  1704,  1708,
    1712,  1716,  1720,  1724,  1728,  1732,  1738,  1745,  1751,  1757,
    1764,  1769,  1774,  1779,  1784,  1787,  1792,  1795,  1800,  1803,
    1808,  1813,  1818,  1824,  1832,  1838,  1839,  1842,  1846,  1849,
    1853,  1858,  1861,  1864,  1865,  1868,  1869,  1870,  1871,  1872,
    1873,  1874,  1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,
    1893,  1894,  1895,  1896,  1899,  1900,  1903,  1904,  1907,  1908,
    1909,  1910,  1913,  1917,  1921,  1927,  1930,  1933,  1939,  1946,
    1949,  1950,  1953,  1956,  1963,  1972,  1978,  1979,  1982,  1983,
    1984,  1985,  1986,  1989,  1995,  1996,  1999,  2000,  2001,  2002,
    2005,  2010,  2017,  2024,  2025,  2026,  2027,  2030,  2035,  2040,
    2045,  2052,  2057,  2064,  2071,  2078,  2085,  2086,  2087,  2090,
    2091,  2094,  2100,  2107,  2108,  2109,  2110,  2111,  2112,  2115,
    2116,  2117,  2118,  2119,  2120,  2123,  2124,  2125,  2127,  2128,
    2130,  2133,  2136,  2144,  2147,  2150,  2154,  2157,  2160,  2163,
    2168,  2179,  2190,  2200,  2212,  2213,  2218,  2225,  2226,  2231,
    2238,  2241,  2244,  2247,  2252,  2256,  2263,  2269,  2270,  2271,
    2274,  2281,  2288,  2295,  2304,  2313,  2320,  2329,  2338,  2344,
    2345,  2346,  2347,  2348,  2351,  2356,  2363,  2371,  2378,  2386,
    2394,  2401,  2407,  2414,  2422,  2425,  2431,  2437,  2444,  2450,
    2457,  2463,  2470,  2476,  2483,  2489,  2494,  2502,  2510,  2518,
    2526,  2534,  2542,  2552,  2560,  2568,  2576,  2584,  2592,  2602,
    2605,  2606,  2607
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "THEN", "OR", "FAILED",
  "SET", "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER", "HTTPD",
  "ALLOW", "REJECTOPT", "ADDRESS", "INIT", "READONLY", "CLEARTEXT",
  "MD5HASH", "SHA1HASH", "CRYPT", "DELAY", "PEMFILE", "ENABLE", "DISABLE",
  "SSL", "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "SELFSIGNED", "VERIFY",
  "CERTIFICATE", "CACERTIFICATEFILE", "CACERTIFICATEPATH", "VALID",
  "INTERFACE", "LINK", "PACKET", "BYTEIN", "BYTEOUT", "PACKETIN",
  "PACKETOUT", "SPEED", "SATURATION", "UPLOAD", "DOWNLOAD", "TOTAL",
  "IDFILE", "STATEFILE", "SEND", "EXPECT", "CYCLE", "COUNT", "REMINDER",
  "REPEAT", "LIMITS", "SENDEXPECTBUFFER", "EXPECTBUFFER",
  "FILECONTENTBUFFER", "HTTPCONTENTBUFFER", "PROGRAMOUTPUT",
  "NETWORKTIMEOUT", "PIDFILE", "START", "STOP", "PATHTOK", "HOST",
  "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE", "UDP", "TCP", "TCPSSL",
  "PROTOCOL", "CONNECTION", "ALERT", "NOALERT", "MAILFORMAT", "UNIXSOCKET",
  "SIGNATURE", "TIMEOUT", "RETRY", "RESTART", "CHECKSUM", "EVERY",
  "NOTEVERY", "DEFAULT", "HTTP", "HTTPS", "APACHESTATUS", "FTP", "SMTP",
  "SMTPS", "POP", "POPS", "IMAP", "IMAPS", "CLAMAV", "NNTP", "NTP3",
  "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP", "LDAP2", "LDAP3", "RDATE",
  "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS",
  "MEMCACHE", "REDIS", "MONGODB", "SIEVE", "STRING", "PATH", "MAILADDR",
  "MAILFROM", "MAILSENDER", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY",
  "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS",
  "CHILDREN", "STATUS", "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY",
  "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE",
  "ACTIVE", "PASSIVE", "MANUAL", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM",
  "CPUWAIT", "GROUP", "REQUEST", "DEPENDS", "BASEDIR", "SLOT",
  "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID", "GID", "MMONIT",
  "INSTANCE", "USERNAME", "PASSWORD", "TIMESTAMP", "CHANGED",
  "MILLISECOND", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "SSLAUTO",
  "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "CERTMD5", "AUTO", "BYTE",
  "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE", "TFREE",
  "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE", "ACTION", "UPTIME",
  "EXEC", "UNMONITOR", "PING", "PING4", "PING6", "ICMP", "ICMPECHO",
  "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED", "PASSED",
  "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG", "REGISTER",
  "CREDENTIALS", "URLOBJECT", "ADDRESSOBJECT", "TARGET", "TIMESPEC",
  "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER", "LESS", "EQUAL",
  "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept",
  "cfgfile", "statement_list", "statement", "optproclist", "optproc",
  "optfilelist", "optfile", "optfilesyslist", "optfilesys", "optdirlist",
  "optdir", "opthostlist", "opthost", "optnetlist", "optnet",
  "optsystemlist", "optsystem", "optfifolist", "optfifo", "optstatuslist",
  "optstatus", "setalert", "setdaemon", "startdelay", "setinit",
  "setexpectbuffer", "setlimits", "limitlist", "limit", "setfips",
  "setlog", "seteventqueue", "setidfile", "setstatefile", "setpid",
  "setmmonits", "mmonitlist", "mmonit", "mmonitoptlist", "mmonitopt",
  "credentials", "setssl", "ssl", "ssloptionlist", "ssloption",
  "sslexpire", "expireoperator", "sslchecksum", "checksumoperator",
  "sslversion", "certmd5", "setmailservers", "setmailformat",
  "mailserverlist", "mailserver", "mailserveroptlist", "mailserveropt",
  "sethttpd", "httpdnetlist", "httpdnetoption", "httpdunixlist",
  "httpdunixoption", "sslserver", "optssllist", "optssl", "sslenable",
  "ssldisable", "signature", "sigenable", "sigdisable", "bindaddress",
  "pemfile", "clientpemfile", "allowselfcert", "allow", "$@1", "$@2",
  "$@3", "$@4", "allowuserlist", "allowuser", "readonly", "checkproc",
  "checkfile", "checkfilesys", "checkdir", "checkhost", "checknet",
  "checksystem", "checkfifo", "checkprogram", "start", "stop", "restart",
  "argumentlist", "useroptionlist", "argument", "useroption", "username",
  "password", "hostname", "connection", "connectionoptlist",
  "connectionopt", "connectionurl", "connectionurloptlist",
  "connectionurlopt", "connectionunix", "connectionuxoptlist",
  "connectionuxopt", "icmp", "icmpoptlist", "icmpopt", "host", "port",
  "unixsocket", "ip", "type", "typeoptlist", "typeopt", "outgoing",
  "protocol", "sendexpect", "websocketlist", "websocket", "smtplist",
  "smtp", "mysqllist", "mysql", "target", "maxforward", "siplist", "sip",
  "httplist", "http", "status", "request", "responsesum", "hostheader",
  "httpheaderlist", "secret", "radiuslist", "radius", "apache_stat_list",
  "apache_stat", "exist", "pid", "ppid", "uptime", "icmpcount", "icmpsize",
  "icmptimeout", "icmpoutgoing", "exectimeout", "programtimeout",
  "nettimeout", "connectiontimeout", "retry", "actionrate", "urloption",
  "urloperator", "alert", "alertmail", "noalertmail", "eventoptionlist",
  "eventoption", "formatlist", "formatoptionlist", "formatoption", "every",
  "mode", "group", "depend", "dependlist", "dependant", "statusvalue",
  "resourceprocess", "resourceprocesslist", "resourceprocessopt",
  "resourcesystem", "resourcesystemlist", "resourcesystemopt",
  "resourcecpuproc", "resourcecpu", "resourcecpuid", "resourcemem",
  "resourceswap", "resourcethreads", "resourcechild", "resourceload",
  "resourceloadavg", "value", "timestamp", "operator", "time", "totaltime",
  "currenttime", "repeat", "action", "action1", "action2", "rateXcycles",
  "rateXYcycles", "rate1", "rate2", "recovery", "checksum", "hashtype",
  "inode", "space", "fsflag", "unit", "permission", "match",
  "matchflagnot", "size", "uid", "euid", "gid", "linkstatus", "linkspeed",
  "linksaturation", "upload", "download", "icmptype", "reminder", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -577

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-577)))

#define YYTABLE_NINF -301

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     513,    52,   -60,   -44,   -29,   -24,   -11,     4,    21,    32,
      73,   229,   513,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,    40,
      89,   155,   168,  -577,    33,   175,   179,    79,   159,   275,
     283,   204,   423,   190,  -577,   -56,   -35,   449,   469,   491,
     545,  -577,   497,   504,    25,  -577,  -577,   570,   104,  1074,
    1139,  1143,   788,   895,  1139,  1203,   556,  -577,   518,   527,
      22,  -577,   454,   486,  -577,  -577,  -577,  -577,   542,  -577,
    -577,   582,   490,   492,  -577,   190,   367,   374,   376,  1025,
     600,   553,   555,   494,   499,   562,   564,   546,   585,   520,
     590,   603,   165,   520,   520,   616,   520,   -47,   500,   325,
     615,   622,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,   -50,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,    17,  -108,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,    39,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,     8,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,    57,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,   260,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,   917,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,   -74,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   632,   752,  -577,   640,   245,   644,
    -577,   711,  -577,  -577,    19,    31,  -577,  -577,  -577,  -577,
    -577,   549,   580,  -577,  -577,   -48,  -577,   608,  -577,   327,
     367,   584,  -577,   582,  1025,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   717,  -577,   663,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
     318,  -577,  -577,  -577,   129,   742,   421,   421,   421,   421,
    -577,  -577,  -577,   421,   421,   409,   602,   421,   727,  -577,
    -577,  -577,  -577,  -577,  -577,   421,   360,   360,  -577,   360,
     777,  -577,  -577,  -577,  -577,  -577,  -577,  -577,   622,  -577,
     586,  1025,   600,   154,   421,    96,   421,   602,   484,   645,
    -577,   484,   656,   -55,  -101,   381,   432,   102,   235,   844,
     421,   421,   421,   725,   863,   421,  -577,  -577,  -577,  -577,
    1138,  -577,  -577,   421,  -577,  -577,  -577,   421,   745,  -577,
     771,  -577,   653,   824,   216,   789,  -577,  -577,  -577,  -577,
    -577,  -577,   796,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,   763,   798,  -577,   474,   351,   680,   689,   691,   707,
     710,   712,  -577,  -577,   713,   715,   720,   721,   722,  -577,
    -577,  -577,  -577,  -577,  -577,   845,   846,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,    27,   801,   901,  -577,   932,   853,
      62,   223,   -26,  -577,  -577,  -577,   865,   866,   247,   303,
     388,   749,   924,  -577,   861,  -577,  -577,  -577,  -577,  -577,
     878,   880,   230,   234,   881,   884,   885,   885,   885,   890,
      60,  -577,  -577,  -577,   992,   258,   891,    -7,  -577,    -7,
    -577,    -7,  -577,  -577,  -577,  1025,   886,  -577,  -577,  -577,
     892,   926,   893,   885,   885,   885,   933,   897,  -577,  -577,
     681,   731,   734,   741,   885,   421,   900,   421,   344,  -577,
    -577,  -577,   956,   885,   903,   909,   912,   421,   421,   885,
     364,  -577,  1030,   914,   915,   885,  -577,   245,  -577,    -3,
    -577,  -577,  -577,  -577,  -577,  -577,    20,   928,    67,   178,
     854,   860,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,   967,   970,  -577,  -577,  -577,   929,   879,   870,   930,
     934,   581,   923,   927,   942,   951,   952,  -577,   867,  -577,
     901,   600,  -577,   869,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,   885,   885,   885,   885,   885,   885,  -577,   953,
    -577,   509,  1005,  -577,  -577,   925,  -577,   542,   955,   542,
     959,   960,  1083,  1091,  1092,   506,  -577,  1045,   270,  -577,
    -577,   904,  -577,  -577,  -577,   958,   901,   885,    47,   506,
    1095,  1099,  1100,   885,   542,   885,   885,   885,   885,  -577,
    -577,  -577,  -577,  1105,   977,   781,   403,   979,   542,    68,
      68,    68,   894,  -577,  1115,   986,    81,    87,  1001,  1002,
    1132,  1003,   542,   270,  1009,   885,  1144,   106,   896,   896,
    -577,  1027,  1031,  1032,  1033,   899,  1028,  1035,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,   521,   521,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,   542,   542,   542,
     542,   723,  -577,   600,  -577,  -577,  1156,  1167,  1170,  1171,
    1172,  1176,    43,  -577,   191,  1058,  1060,   503,  1233,  1054,
    1057,  -577,  -577,  -577,  -577,  -577,  -577,  1187,  1188,  -577,
    -577,  -577,  -577,  -577,  -577,   270,   270,   270,  -577,  -577,
    -577,  -577,  -577,   885,  -577,  -577,  -577,  -577,  -577,   520,
    -577,  -577,  1190,  -577,   901,   600,  1194,  1076,  1196,   885,
     270,   270,   270,  1197,   885,  1198,  1202,  1206,  1210,   270,
     800,   885,  1211,  1085,   542,   885,   885,  1097,  1090,  1101,
    1102,  -577,  -577,  -577,  -577,  -577,  1221,  1225,  1228,  -577,
      68,   270,   885,  1039,  1039,  1039,  1039,   197,   221,   270,
    -577,  -577,  1190,  -577,  1232,   270,  -577,  1114,  1119,  -577,
    1120,  1124,  1125,  1126,  1131,  1220,  1133,  1134,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
     270,   270,   270,   270,   270,   270,   152,   484,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  1255,  1137,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  1261,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
     678,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,   -12,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  1072,  -577,   270,   390,  -577,  -577,  1190,  1265,   185,
    1268,  -577,   600,  -577,   270,   885,   270,  1276,  -577,  1190,
    -577,   270,  1279,   270,   270,   270,   270,  -577,   885,  1280,
    1281,   270,   885,   885,  1282,  1283,  -577,  -577,  1098,  -577,
     270,   270,   270,  1285,  1190,  1290,  -577,   885,   885,   885,
     885,   225,   228,   267,   345,  1190,  -577,   270,  -577,  -577,
    -577,  1131,  1131,  1131,  1220,  -577,  1131,  -577,  -577,  -577,
    -577,  -577,  1190,  1190,  1190,  1190,  1190,  1190,  1044,  1173,
     270,  -577,   270,   563,   215,   215,  1174,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   678,  -577,   750,
     750,   750,  1182,  1184,  1162,  1192,   -12,  -577,   209,  1136,
    -577,  1190,  -577,  -577,  -577,   270,  1227,   139,  -577,   483,
    -577,  1190,  1293,  1190,   270,  -577,  -577,   270,  -577,  -577,
    -577,  -577,  1304,   270,   270,  1190,  1316,  1368,   270,   270,
    -577,  1190,  1190,  1190,   270,  -577,   270,  1369,  1370,  1371,
    1372,   524,  -577,  -577,  -577,   885,   524,   885,   524,   885,
     524,   885,  -577,  1190,  1131,  1131,  1131,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  1244,  -577,  1190,  1190,
    -577,  -577,  -577,  1257,   421,  1254,  1275,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  1266,  1267,  1269,  1270,  1271,  1272,
    1273,  1274,  1277,  1278,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,   227,  1284,  -577,  -577,
    -577,  1286,  -577,  -577,  -577,  1190,   110,  -577,   885,   885,
     885,  -577,   270,  -577,  1190,  1190,   270,  1190,  1190,  -577,
     270,   270,  1190,  1190,  -577,  -577,  -577,  1190,  1190,   270,
     270,   270,   270,   885,  1397,   885,  1404,   885,  1408,   885,
    1409,  -577,  1217,  -577,  -577,  -577,  1287,  -577,  -577,   297,
    1288,  1291,  1292,  1294,  1295,  1296,  1298,  1299,  1300,  1301,
    -577,  -577,  -577,  -577,  -577,  -577,  1363,  -577,  -577,  1412,
    1414,  1415,  1190,  -577,  -577,  1190,  -577,  -577,  1190,  1190,
    -577,  -577,  -577,  -577,  1190,  1190,  1190,  1190,  1417,   270,
    1419,   270,  1420,   270,  1423,   270,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,   270,   270,   270,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,   270,  1190,   270,  1190,   270,  1190,   270,  1190,
    -577,  -577,  -577,  -577,  1190,  -577,  1190,  -577,  1190,  -577,
    1190,  -577,  -577,  -577,  -577,  -577
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,    19,    18,    20,    21,
       9,    10,    16,    17,    15,    11,     7,    12,    13,    14,
      31,    53,    72,    89,   105,   119,   134,   145,   161,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   544,     0,     0,     0,     0,
       0,   319,     0,     0,     0,     1,     5,    22,    23,    24,
      25,    26,    30,    27,    28,    29,   191,   190,   176,   247,
     498,   243,     0,     0,   215,   196,   197,   181,   659,   198,
     511,     0,     0,     0,   203,   199,   210,     0,     0,     0,
     700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    43,    44,    45,    36,
      37,    38,    42,    46,    47,   544,   510,    48,    49,    50,
      51,    52,    39,    40,    41,   674,   674,    54,    55,    56,
      57,    58,    60,    62,    61,    69,    70,    71,    59,    66,
      63,    68,    67,    64,    65,     0,    73,    74,    75,    76,
      77,    79,    78,    83,    84,    85,    86,    87,    88,    80,
      81,    82,     0,    90,    91,    92,    93,    94,    96,    98,
      97,   102,   103,   104,    95,    99,   100,   101,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,     0,   120,   121,   122,   123,   129,   131,   130,
     132,   133,   124,   125,   126,   127,   128,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   146,   147,
     148,   149,   150,   152,   154,   153,   158,   159,   160,   151,
     155,   156,   157,     0,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,     0,     0,   175,     0,   245,     0,
     244,   342,   257,   263,     0,     0,   660,   661,   662,   663,
     179,     0,     0,   550,   551,     0,   546,   193,   195,   202,
     210,     0,   200,     0,     0,   528,   516,   517,   530,   531,
     538,   536,   519,   540,   518,   539,   535,   542,   524,   526,
     541,   532,   537,   515,   543,   522,   525,   529,   527,   521,
     520,   533,   534,   523,     0,   513,     0,   172,   308,   309,
     310,   311,   314,   313,   312,   315,   316,   320,   333,   334,
     496,   329,   317,   318,   385,     0,   603,   603,   603,   603,
     596,   597,   598,   603,   603,     0,     0,   603,   634,   566,
     568,   569,   570,   571,   572,   603,   494,   494,   512,   494,
       0,   553,   554,   555,   556,   557,   558,   562,   559,   560,
       0,     0,   700,   647,   603,   647,   603,   675,     0,     0,
     675,     0,     0,     0,     0,   603,   603,     0,   385,     0,
     603,   603,   603,     0,     0,   603,   586,   583,   584,   585,
     634,   574,   579,   603,   577,   578,   576,   603,     0,   192,
       0,   247,   213,     0,     0,     0,   238,   233,   234,   235,
     236,   237,     0,   239,   251,   252,   253,   254,   248,   249,
     250,     0,     0,   241,   255,   256,     0,     0,     0,     0,
       0,     0,   212,   216,     0,     0,     0,     0,     0,   180,
     182,   548,   549,   242,   547,     0,     0,   204,   206,   207,
     208,   209,   201,   211,     0,     0,   544,   514,   701,     0,
       0,     0,   496,   330,   331,   321,     0,     0,     0,     0,
       0,     0,     0,   368,     0,   608,   604,   605,   606,   607,
       0,     0,     0,     0,     0,     0,   634,   634,   634,     0,
       0,   567,   635,   636,     0,     0,     0,   494,   323,   494,
     325,   494,   327,   552,   561,     0,     0,   507,   648,   649,
       0,     0,     0,   634,   634,   634,     0,     0,   505,   506,
       0,     0,     0,     0,   634,   603,     0,   603,     0,   379,
     379,   379,     0,   634,     0,     0,     0,   603,   603,   634,
       0,   575,     0,     0,     0,   634,   177,   246,   215,   231,
     340,   339,   341,   240,   499,   343,     0,     0,     0,     0,
       0,     0,   258,   259,   269,   269,   260,   278,   279,   261,
     262,     0,     0,   264,   265,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,     0,   545,
     544,   700,   702,     0,   335,   337,   336,   338,   332,   322,
     386,   388,   634,   634,   634,   634,   634,   634,   359,     0,
     345,   634,     0,   593,   594,   600,   599,   659,   600,   659,
       0,     0,     0,     0,     0,   609,   632,     0,     0,   600,
     595,     0,   324,   326,   328,     0,   544,   634,   634,   609,
       0,     0,     0,   634,   659,   634,   634,   634,   634,   669,
     668,   673,   672,     0,     0,   634,     0,   600,   659,   634,
     634,   634,     0,   379,     0,     0,   659,   659,     0,     0,
       0,   600,   659,     0,     0,   634,     0,     0,   231,   231,
     232,     0,     0,     0,     0,   302,   290,     0,   284,   275,
     281,   277,   283,   274,   276,   280,   282,   268,   267,   222,
     219,   220,   217,   218,   223,   224,   221,   659,   659,   659,
     659,     0,   205,   700,   173,   497,     0,     0,     0,     0,
       0,     0,   634,   387,   634,     0,     0,     0,     0,     0,
       0,   369,   370,   371,   372,   373,   374,     0,     0,   588,
     587,   590,   589,   580,   581,     0,     0,     0,   610,   611,
     612,   613,   614,   634,   633,   627,   628,   623,   626,     0,
     629,   630,   640,   495,   544,   700,     0,     0,     0,   634,
       0,     0,     0,     0,   634,     0,     0,     0,     0,     0,
     634,   634,     0,   600,   659,   634,   634,     0,     0,     0,
       0,   380,   381,   382,   383,   384,     0,     0,     0,   699,
     634,     0,   634,   618,   618,   618,   618,   659,   659,     0,
     592,   591,   640,   582,     0,     0,   214,     0,     0,   228,
     291,   292,   293,     0,     0,   306,     0,     0,   287,   270,
     271,   272,   273,   183,   184,   185,   186,   187,   188,   174,
       0,     0,     0,     0,     0,     0,     0,     0,   364,   366,
     365,   360,   362,   363,   361,     0,     0,   389,   390,   355,
     357,   356,   346,   347,   348,   353,   349,   350,   352,   354,
     351,     0,   433,   434,   393,   391,   394,   400,   456,   456,
       0,   403,   441,   441,   417,   418,   406,   407,   408,   414,
     415,   445,   401,     0,   422,   402,   409,   410,   423,   425,
     426,   427,   416,   452,   428,   429,   470,   431,   424,   411,
     419,     0,   501,     0,     0,   487,   488,   640,     0,   620,
       0,   565,   700,   508,     0,   634,     0,     0,   602,   640,
     677,     0,     0,     0,     0,     0,     0,   658,   634,     0,
       0,     0,   634,   634,     0,     0,   493,   490,     0,   491,
       0,     0,     0,     0,   640,     0,   619,   634,   634,   634,
     634,     0,     0,     0,     0,   640,   573,     0,   564,   229,
     230,     0,     0,     0,   306,   305,   295,   303,   307,   289,
     285,   286,   640,   640,   640,   640,   640,   640,   226,     0,
       0,   398,     0,   392,   404,   405,     0,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   603,   399,   473,   420,
     421,   412,     0,     0,     0,     0,   432,   435,   413,   430,
     500,   640,   503,   502,   486,     0,     0,   620,   624,     0,
     509,   640,     0,   640,     0,   665,   646,     0,   667,   666,
     671,   670,     0,     0,     0,   640,     0,     0,     0,     0,
     492,   640,   640,   640,     0,   684,     0,     0,     0,     0,
       0,     0,   615,   616,   617,   634,     0,   634,     0,   634,
       0,   634,   685,   640,   297,   299,   301,   288,   304,   678,
     679,   680,   681,   682,   683,   227,     0,   504,   640,   640,
     396,   397,   395,     0,   603,     0,     0,   467,   457,   460,
     458,   459,   461,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,   443,   444,   442,   447,   448,
     446,   439,   437,   440,   438,   436,     0,     0,   454,   455,
     453,     0,   472,   471,   367,   640,     0,   625,   637,   637,
     637,   664,     0,   644,   640,   640,     0,   640,   640,   650,
       0,     0,   640,   640,   376,   377,   378,   640,   640,     0,
       0,     0,     0,   634,     0,   634,     0,   634,     0,   634,
       0,   563,     0,   358,   344,   465,     0,   464,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     450,   449,   451,   469,   489,   621,     0,   638,   639,     0,
       0,     0,   640,   601,   676,   640,   652,   651,   640,   640,
     655,   654,   375,   686,   640,   640,   640,   640,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   463,   468,   462,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     622,     0,     0,     0,   645,   653,   657,   656,   690,   687,
     696,   693,     0,   640,     0,   640,     0,   640,     0,   640,
     631,   641,   642,   643,   640,   691,   640,   688,   640,   697,
     640,   694,   692,   689,   698,   695
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -577,  -577,  -577,  1425,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  1337,  -577,
    -577,  1148,  -577,  -276,   871,  -577,   696,  -577,  -272,   244,
    -288,  -287,  -577,  -577,  -577,  1361,  1021,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   858,  -577,  -577,  -577,   999,  -577,
    -577,  -577,  -577,  -577,  -577,  1000,  -577,  -577,  -577,  -577,
    -262,  -576,   452,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,   936,  1059,  1096,  -110,  -358,  -333,  -472,  -290,
    -220,  -577,  1376,  -577,  -577,  1377,  -577,  -577,  -577,  -577,
    -577,  -577,  -446,  -577,  -577,  -577,  -577,  -577,   705,  -577,
    -577,  -577,   706,   708,  -577,   415,   550,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   557,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,   427,   443,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -332,   973,  -577,  -357,  -267,  1205,
     714,  -379,  1289,  1456,  -577,  -266,  -301,  -130,  1166,  -271,
    1297,   531,  1315,  1323,  -577,  1082,  -577,  -577,  -577,  1103,
    -577,  -577,  1052,  -577,  -577,  -577,  -188,  -577,  -577,  -577,
    -183,  -577,  -448,    97,  -327,   804,  -501,     9,   417,  -425,
    -447,  -312,  -311,  -308,  -410,  -207,  -365,  -577,  1080,  -577,
    -577,  -577,  -289,   485,  -577,  1320,  -577,   522,  -577,   583,
    -577,  -577,  -577,  -577,  -577,  -577,  -366
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    67,   122,    68,   147,    69,   166,
      70,   183,    71,   199,    72,   213,    73,   228,    74,   238,
      75,   254,    14,    15,   266,    16,    17,    18,   275,   460,
      19,    20,    21,    22,    23,    24,    25,    95,    96,   289,
     467,   292,    26,   434,   274,   453,   869,  1106,   435,   701,
     436,   437,    27,    28,    80,    81,   268,   438,    29,   444,
     582,   445,   593,   583,   717,   849,   584,   585,   586,   587,
     588,   589,   850,   851,   852,   590,   844,   991,   992,   993,
     996,   997,   999,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   123,   124,   125,   340,   482,   341,   484,   439,
     440,   443,   126,   744,   882,   127,   742,   871,   128,   631,
     751,   205,   679,   811,   492,   630,   493,   883,   752,  1013,
    1112,   885,   753,   754,  1036,  1037,  1029,  1137,  1031,  1140,
    1148,  1149,  1038,  1150,  1014,  1118,  1119,  1120,  1121,  1122,
    1199,  1152,  1039,  1153,  1027,  1028,   129,   130,   131,   132,
     812,   813,   814,   815,   518,   485,   271,   755,   756,   133,
     874,   540,   134,   135,   136,   324,   325,   100,   285,   286,
     137,   138,   139,   140,   378,   379,   263,   141,   358,   359,
     237,   410,   411,   360,   412,   413,   361,   415,   362,   363,
     364,   365,   637,   158,   500,   773,  1085,   977,  1048,   781,
     782,  1281,   512,   513,   514,  1219,   941,   159,   531,   176,
     177,   178,   280,   160,   161,   389,   162,   142,   143,   144,
     222,   223,   224,   225,   226,   683,   327
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     562,   470,   471,   366,   367,   382,   369,   483,   517,   519,
     618,   521,   542,   468,   464,   393,   527,   469,   698,   699,
     501,   502,   503,   477,   383,    97,   504,   505,   475,   101,
     509,    97,   102,   483,   483,   520,   483,   522,   515,   414,
     702,   703,   110,   704,   416,   618,   393,   618,   446,   618,
     447,   448,    76,   449,   450,   639,  1032,   532,   479,   537,
     345,    39,   111,    40,   398,    41,    42,   650,   546,   548,
      43,   422,    56,   554,   555,   556,   866,   516,   560,   281,
      44,   282,   283,   284,   417,   807,   563,   370,    57,   454,
     564,   455,   456,   457,   458,   709,   642,   643,   644,   787,
     678,    45,    46,    58,   680,   681,   269,   145,    59,    47,
     390,    48,   692,   646,   534,   526,    49,   528,   529,   418,
     823,    60,   808,   660,   661,   662,   825,   749,   750,   391,
     488,    50,   490,    51,   673,   446,    61,   447,   448,   544,
     449,   450,   345,   684,   705,   706,    79,  1033,  1034,   690,
     710,   345,   809,    62,   281,   696,   282,   283,   284,   480,
     530,   481,    98,  1215,    63,    77,  1035,   194,   380,   113,
     114,   249,   344,   345,   477,   528,   529,   510,   480,   451,
     481,   510,   103,    50,   115,   652,   614,   653,  1008,   654,
     116,   345,   117,   118,   647,  1046,   615,   486,    99,   371,
     384,   397,   510,   464,   381,    64,   711,   463,   876,   384,
     385,   487,   736,   737,   738,   739,   740,   741,   674,   422,
     676,   757,   414,    78,   866,   477,   356,   416,   804,    65,
     688,   689,   394,   386,    52,   387,   981,   820,    82,   569,
      53,  1046,   745,   746,  1216,   734,   832,   786,   788,   700,
      83,   395,   396,   793,   388,   795,   796,   797,   798,   655,
     983,   712,   877,   878,   747,   802,   451,   399,   748,   816,
     817,   818,   119,   422,   452,   749,   750,   707,   423,    79,
     867,   120,   609,   121,   810,   834,   459,    84,   533,   276,
     277,   278,   279,    88,   533,   276,   277,   278,   279,   345,
      85,    54,  1113,   486,    86,   400,   401,   402,   403,   338,
     339,   534,   535,   726,   488,   489,   490,   534,   935,   936,
     937,   346,   347,   146,   480,   510,   481,   348,   349,   350,
     351,   352,   875,    87,   891,   775,   776,   353,   354,   488,
     570,   490,   571,   948,   949,   950,   611,   616,   760,   777,
     762,  1210,   957,  1211,   477,   422,   778,   617,   355,  1081,
     423,   836,  1086,   938,   635,   491,   576,   859,   638,   530,
     480,   622,   481,  1114,   974,   794,   636,   591,   592,   947,
     636,   623,   985,   356,   952,   872,   357,   888,   988,   806,
     959,   960,   649,  1115,   345,   964,   965,   824,   826,  1116,
      89,  1088,   479,   831,   636,   276,   277,   278,   279,    90,
     973,   466,   975,  1002,  1003,  1004,  1005,  1006,  1007,   943,
    1098,  1082,  1083,  1084,  1082,  1083,  1084,   624,   867,   276,
     277,   278,   279,    94,   581,   424,   425,   625,   853,   854,
     855,   856,   338,   339,   516,   426,   427,   428,   429,   430,
     431,   432,   433,   404,  1146,   775,   776,  1147,    91,   549,
     550,   551,   552,  1082,  1083,  1084,   868,   986,   879,   777,
     870,   491,   881,  1117,  1042,   873,   778,   889,   677,  1090,
     733,  1087,  1089,  1091,   338,   339,  1041,  1043,  1009,   576,
     636,   577,   779,   780,   373,   374,   375,  1051,   691,  1053,
     578,   579,   580,   480,  1056,   481,  1058,  1059,  1060,  1061,
     636,   151,   626,   187,  1065,   963,   104,   242,  1098,  1098,
    1098,     1,   627,  1071,  1072,  1073,   785,   426,   427,   428,
     429,   430,   431,   432,   433,  1052,   105,   803,   982,   984,
    1093,  1082,  1083,  1084,  1248,   480,   846,   481,  1062,   636,
     847,   848,  1066,  1067,   179,   195,  1249,   581,   106,   250,
     745,   746,   107,  1108,   108,  1109,   264,  1077,  1078,  1079,
    1080,   109,  1044,   112,   495,   618,  1050,   894,   895,   896,
    1183,  1047,   747,   265,  1055,  1185,   748,  1187,   272,  1189,
     163,   180,   196,   749,   750,   545,   251,   267,  1155,   155,
     173,   191,   209,    92,    93,   246,   483,  1164,   291,  1075,
    1165,   273,   779,   780,   495,   287,  1167,  1168,   330,   331,
    1092,  1172,  1173,   332,   333,   495,   288,  1177,   293,  1178,
     294,   496,   497,   498,   499,   113,   114,  1099,  1100,  1101,
    1102,  1103,  1104,   510,   338,   339,   547,   506,   507,    50,
     115,   164,   181,   197,   942,   326,   116,   252,   117,   118,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   939,
     336,   496,   497,   498,   499,  1184,  1154,  1186,   328,  1188,
     329,  1190,   496,   497,   498,   499,  1161,   334,  1163,   335,
    1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,
    1169,   768,   769,   770,   771,   772,  1174,  1175,  1176,   281,
     337,   282,   283,   284,   342,  1222,  1158,  1159,  1160,  1225,
    1082,  1083,  1084,  1228,  1229,  1110,  1111,   343,  1191,  1094,
    1095,  1096,  1234,  1235,  1236,  1237,   538,   539,   119,  1135,
    1135,  1138,   368,  1193,  1194,  1016,   372,   120,   376,   121,
     276,   277,   278,   279,   377,   295,   419,   296,   297,   298,
     299,   300,   301,   426,   427,   428,   429,   430,   431,   432,
     433,   557,   558,  1238,   421,  1240,   420,  1242,   441,  1244,
     442,   426,   427,   428,   429,   430,   431,  1196,   433,   465,
    1214,   212,  1273,   461,  1275,   302,  1277,   478,  1279,  1223,
    1224,   303,  1226,  1227,   304,   665,   666,  1230,  1231,  1136,
    1136,  1139,  1232,  1233,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,   462,  1284,   473,  1286,   494,  1288,
     523,  1290,   508,   978,   979,   980,  1280,  1280,  1280,   295,
     525,   296,   297,   298,   299,   300,   301,  1217,  1217,  1217,
    1218,  1218,  1218,   113,   114,   667,   668,  1264,   669,   670,
    1265,   510,   541,  1266,  1267,   671,   672,    50,   115,  1268,
    1269,  1270,  1271,   543,   116,   305,   117,   118,   306,   302,
     713,   714,   553,   346,   347,   303,   715,   716,   304,   348,
     349,   350,   351,   352,   720,   721,   722,   723,   227,   353,
     354,   559,   307,   565,   308,   566,   309,   568,  1285,   310,
    1287,   569,  1289,   572,  1291,   510,   801,   857,   858,  1292,
     573,  1293,   575,  1294,   295,  1295,   296,   297,   298,   299,
     300,   301,   311,   312,   510,   958,   596,   313,   314,   315,
     424,   425,   837,   838,   316,   597,   317,   598,   318,   319,
    1282,  1283,  1220,  1221,   320,   321,   322,   323,   574,   305,
     113,   114,   306,   599,   302,   120,   600,   121,   601,   602,
     303,   603,   476,   304,    50,   115,   604,   605,   606,   607,
     608,   116,    97,   117,   118,   612,   307,   613,   308,   620,
     309,   621,   628,   310,   629,   632,   295,   648,   296,   297,
     298,   299,   300,   301,   148,   167,   184,   200,   214,   229,
     239,   255,   633,   658,   634,   640,   311,   312,   641,   510,
     663,   313,   314,   315,   645,   651,   657,   659,   316,   682,
     317,   664,   318,   319,   675,   693,   302,   685,   320,   321,
     322,   323,   303,   686,   305,   304,   687,   306,   694,   695,
     710,   345,   708,   712,   719,   724,   610,   727,   758,   725,
     759,   728,   732,   295,   735,   296,   297,   298,   299,   300,
     301,   307,   120,   308,   121,   309,   729,   165,   310,   348,
     349,   350,   351,   352,   405,   730,   731,   743,   765,   406,
     761,   407,   408,   409,   763,   764,   766,   767,   774,   783,
     790,   311,   312,   302,   791,   792,   313,   314,   315,   303,
     799,   800,   304,   316,   805,   317,   305,   318,   319,   306,
     821,   822,   819,   320,   321,   322,   323,   149,   168,   185,
     201,   215,   230,   240,   256,   827,   828,   829,   830,   113,
     114,   656,   182,   307,   833,   308,   198,   309,   700,   835,
     310,   839,  -294,    50,   115,   843,   840,   841,   842,   845,
     116,   860,   117,   118,   150,   169,   186,   202,   216,   231,
     241,   257,   861,   311,   312,   862,   863,   864,   313,   314,
     315,   865,   892,   305,   893,   316,   306,   317,   931,   318,
     319,   932,   933,   934,   940,   320,   321,   322,   323,   944,
     945,   946,   951,   953,   113,   114,   253,   954,   113,   114,
     307,   955,   308,   784,   309,   956,   961,   310,    50,   115,
     962,   966,    50,   115,   967,   116,   970,   117,   118,   116,
     971,   117,   118,   972,   976,   968,   969,   987,   989,   998,
     311,   312,   119,   990,  -296,   313,   314,   315,  -298,  -300,
     994,   120,   316,   121,   317,   995,   318,   319,  1000,  1001,
    1010,  1011,   320,   321,   322,   323,  1012,  1040,   113,   114,
    1045,  1049,   510,   152,   170,   188,   206,   217,   232,   243,
     258,  1054,    50,   115,  1057,  1063,  1064,  1068,  1069,   116,
    1074,   117,   118,  1070,  1105,  1076,  1143,  1107,  1162,  1123,
     348,   349,   350,   351,   352,   405,  1141,   119,  1142,  1166,
     406,   119,   407,   408,   409,  1156,   120,  1144,   121,  1151,
     120,  1170,   121,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   930,   153,   171,   189,
     207,   218,   233,   244,   259,   154,   172,   190,   208,   219,
     234,   245,   260,  1171,  1179,  1180,  1181,  1182,  1192,  1197,
     120,  1195,   121,   156,   174,   192,   210,   220,   235,   247,
     261,   157,   175,   193,   211,   221,   236,   248,   262,  1198,
    1200,  1201,  1239,  1202,  1203,  1204,  1205,  1206,  1207,  1241,
    1213,  1208,  1209,  1243,  1245,  1246,  1260,  1261,  1212,  1262,
    1263,  1247,  1272,  1250,  1274,  1276,  1251,  1252,  1278,  1253,
    1254,  1255,   290,  1256,  1257,  1258,  1259,    66,   472,   697,
     880,   270,   567,   718,   594,   595,  1097,   203,   204,   884,
     886,  1145,   887,  1030,  1134,   619,  1015,    55,   890,   474,
     524,   511,   561,   789,  1157,   536,   392
};

static const yytype_uint16 yycheck[] =
{
     410,   289,   289,   113,   114,   135,   116,   340,   366,   367,
     482,   369,   391,   289,   285,     7,   382,   289,    21,    22,
     347,   348,   349,   324,     7,    81,   353,   354,   294,    64,
     357,    81,    67,   366,   367,   367,   369,   369,   365,   227,
      20,    21,    17,    23,   227,   517,     7,   519,    29,   521,
      31,    32,    12,    34,    35,   503,    68,   384,    84,   386,
     134,     9,    37,    11,     7,    13,    14,   515,   395,   396,
      18,    28,   132,   400,   401,   402,    33,    84,   405,   127,
      28,   129,   130,   131,   158,    17,   413,   134,   132,    58,
     417,    60,    61,    62,    63,    28,   506,   507,   508,    52,
     548,    49,    50,   132,   550,   551,    84,     3,   132,    57,
     218,    59,   560,    53,   215,   381,    64,    21,    22,   193,
      39,   132,    54,   533,   534,   535,    39,    84,    85,   237,
     185,    79,   187,    81,   544,    29,   132,    31,    32,   240,
      34,    35,   134,   553,   124,   125,   124,   159,   160,   559,
      83,   134,    84,   132,   127,   565,   129,   130,   131,   185,
     215,   187,   218,    53,   132,   125,   178,    70,   218,    65,
      66,    74,     7,   134,   475,    21,    22,   134,   185,   160,
     187,   134,   217,    79,    80,   517,   124,   519,    36,   521,
      86,   134,    88,    89,   134,    56,   134,    68,   254,   246,
     192,   193,   134,   474,   254,   132,    28,   255,    17,   192,
     193,    82,   622,   623,   624,   625,   626,   627,   545,    28,
     547,   631,   410,   134,    33,   526,   218,   410,   676,     0,
     557,   558,   193,   216,   182,   218,    39,   683,    70,    87,
     188,    56,    51,    52,   134,   611,   693,   657,   658,   252,
      82,   212,   213,   663,   237,   665,   666,   667,   668,   525,
      39,    83,    71,    72,    73,   675,   160,     7,    77,   679,
     680,   681,   168,    28,   255,    84,    85,   257,    33,   124,
     237,   177,   255,   179,   216,   695,   255,   254,   192,   208,
     209,   210,   211,   134,   192,   208,   209,   210,   211,   134,
     125,   249,    87,    68,   125,    45,    46,    47,    48,   124,
     125,   215,   216,   601,   185,   186,   187,   215,   765,   766,
     767,   156,   157,   219,   185,   134,   187,   162,   163,   164,
     165,   166,   742,   254,   744,    65,    66,   172,   173,   185,
     124,   187,   126,   790,   791,   792,   476,   124,   637,    79,
     639,   124,   799,   126,   655,    28,    86,   134,   193,   134,
      33,   255,   134,   773,   134,   236,    15,   733,   134,   215,
     185,   124,   187,   158,   821,   664,   146,    26,    27,   789,
     146,   134,   829,   218,   794,   742,   221,   744,   835,   678,
     800,   801,   134,   178,   134,   805,   806,   686,   687,   184,
     125,   134,    84,   692,   146,   208,   209,   210,   211,   126,
     820,    84,   822,   860,   861,   862,   863,   864,   865,   785,
     996,   196,   197,   198,   196,   197,   198,   124,   237,   208,
     209,   210,   211,   243,    83,   190,   191,   134,   727,   728,
     729,   730,   124,   125,    84,   200,   201,   202,   203,   204,
     205,   206,   207,   193,   245,    65,    66,   248,   254,   224,
     225,   226,   227,   196,   197,   198,   742,   832,   744,    79,
     742,   236,   744,   258,    84,   742,    86,   744,   134,   134,
     610,   982,   983,   984,   124,   125,   933,   934,   867,    15,
     146,    17,   222,   223,   169,   170,   171,   944,   134,   946,
      26,    27,    28,   185,   951,   187,   953,   954,   955,   956,
     146,    68,   124,    70,   961,   804,    67,    74,  1094,  1095,
    1096,     8,   134,   970,   971,   972,   656,   200,   201,   202,
     203,   204,   205,   206,   207,   945,    67,   134,   827,   828,
     987,   196,   197,   198,   247,   185,    25,   187,   958,   146,
      29,    30,   962,   963,    69,    70,   259,    83,    67,    74,
      51,    52,    17,  1010,    67,  1012,    10,   977,   978,   979,
     980,    67,   937,     3,   193,  1047,   942,    74,    75,    76,
    1081,   939,    73,    65,   949,  1086,    77,  1088,   134,  1090,
      68,    69,    70,    84,    85,   214,    74,    70,  1045,    68,
      69,    70,    71,   180,   181,    74,   939,  1054,   241,   974,
    1057,   125,   222,   223,   193,   125,  1063,  1064,   124,   125,
     985,  1068,  1069,   124,   125,   193,   134,  1074,   254,  1076,
     254,   250,   251,   252,   253,    65,    66,  1002,  1003,  1004,
    1005,  1006,  1007,   134,   124,   125,   214,   238,   239,    79,
      80,    68,    69,    70,   784,    55,    86,    74,    88,    89,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   779,
     124,   250,   251,   252,   253,  1085,  1041,  1087,   125,  1089,
     125,  1091,   250,   251,   252,   253,  1051,   125,  1053,   125,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1065,   195,   196,   197,   198,   199,  1071,  1072,  1073,   127,
     125,   129,   130,   131,   124,  1162,   233,   234,   235,  1166,
     196,   197,   198,  1170,  1171,  1013,  1013,   124,  1093,   991,
     992,   993,  1179,  1180,  1181,  1182,   252,   253,   168,  1029,
    1030,  1031,   126,  1108,  1109,    67,   246,   177,   133,   179,
     208,   209,   210,   211,   132,    38,   124,    40,    41,    42,
      43,    44,    45,   200,   201,   202,   203,   204,   205,   206,
     207,    46,    47,  1183,   134,  1185,    24,  1187,   134,  1189,
      69,   200,   201,   202,   203,   204,   205,  1114,   207,   181,
    1155,     3,  1239,   244,  1241,    78,  1243,   134,  1245,  1164,
    1165,    84,  1167,  1168,    87,   124,   125,  1172,  1173,  1029,
    1030,  1031,  1177,  1178,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   244,  1272,   242,  1274,    86,  1276,
      53,  1278,   230,   824,   825,   826,  1261,  1262,  1263,    38,
     254,    40,    41,    42,    43,    44,    45,  1158,  1159,  1160,
    1158,  1159,  1160,    65,    66,   124,   125,  1222,   124,   125,
    1225,   134,   217,  1228,  1229,   124,   125,    79,    80,  1234,
    1235,  1236,  1237,   217,    86,   158,    88,    89,   161,    78,
      26,    27,    38,   156,   157,    84,    26,    27,    87,   162,
     163,   164,   165,   166,    15,    16,    26,    27,     3,   172,
     173,    38,   185,   158,   187,   134,   189,   254,  1273,   192,
    1275,    87,  1277,   124,  1279,   134,   135,   194,   195,  1284,
     124,  1286,   124,  1288,    38,  1290,    40,    41,    42,    43,
      44,    45,   215,   216,   134,   135,   256,   220,   221,   222,
     190,   191,   698,   699,   227,   256,   229,   256,   231,   232,
    1262,  1263,  1159,  1160,   237,   238,   239,   240,   195,   158,
      65,    66,   161,   256,    78,   177,   256,   179,   256,   256,
      84,   256,   255,    87,    79,    80,   256,   256,   256,   134,
     134,    86,    81,    88,    89,    53,   185,   134,   187,   124,
     189,   125,   243,   192,    70,   134,    38,     5,    40,    41,
      42,    43,    44,    45,    68,    69,    70,    71,    72,    73,
      74,    75,   134,    87,   134,   134,   215,   216,   134,   134,
      87,   220,   221,   222,   134,   134,   134,   134,   227,    73,
     229,   134,   231,   232,   134,     5,    78,   134,   237,   238,
     239,   240,    84,   134,   158,    87,   134,   161,   134,   134,
      83,   134,   124,    83,   125,   125,   255,   134,    53,   125,
     135,   134,   195,    38,   195,    40,    41,    42,    43,    44,
      45,   185,   177,   187,   179,   189,   134,     3,   192,   162,
     163,   164,   165,   166,   167,   134,   134,   134,     5,   172,
     135,   174,   175,   176,   135,   135,     5,     5,    53,   195,
       5,   215,   216,    78,     5,     5,   220,   221,   222,    84,
       5,   134,    87,   227,   135,   229,   158,   231,   232,   161,
       5,   135,   228,   237,   238,   239,   240,    68,    69,    70,
      71,    72,    73,    74,    75,   134,   134,     5,   135,    65,
      66,   255,     3,   185,   135,   187,     3,   189,   252,     5,
     192,   124,   124,    79,    80,   256,   125,   125,   125,   124,
      86,     5,    88,    89,    68,    69,    70,    71,    72,    73,
      74,    75,     5,   215,   216,     5,     5,     5,   220,   221,
     222,     5,   124,   158,   124,   227,   161,   229,   134,   231,
     232,   134,     5,     5,     4,   237,   238,   239,   240,     5,
     124,     5,     5,     5,    65,    66,     3,     5,    65,    66,
     185,     5,   187,   255,   189,     5,     5,   192,    79,    80,
     135,   124,    79,    80,   134,    86,     5,    88,    89,    86,
       5,    88,    89,     5,   195,   134,   134,     5,   124,    19,
     215,   216,   168,   124,   124,   220,   221,   222,   124,   124,
     124,   177,   227,   179,   229,   124,   231,   232,   125,   125,
       5,   124,   237,   238,   239,   240,     5,   195,    65,    66,
       5,     3,   134,    68,    69,    70,    71,    72,    73,    74,
      75,     5,    79,    80,     5,     5,     5,     5,     5,    86,
       5,    88,    89,   195,   250,     5,   134,   124,     5,   125,
     162,   163,   164,   165,   166,   167,   124,   168,   124,     5,
     172,   168,   174,   175,   176,    88,   177,   125,   179,   183,
     177,     5,   179,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    68,    69,    70,
      71,    72,    73,    74,    75,    68,    69,    70,    71,    72,
      73,    74,    75,     5,     5,     5,     5,     5,   134,   125,
     177,   124,   179,    68,    69,    70,    71,    72,    73,    74,
      75,    68,    69,    70,    71,    72,    73,    74,    75,   124,
     134,   134,     5,   134,   134,   134,   134,   134,   134,     5,
     124,   134,   134,     5,     5,   198,    53,     5,   134,     5,
       5,   134,     5,   135,     5,     5,   135,   135,     5,   135,
     135,   135,    95,   135,   135,   135,   135,    12,   290,   568,
     744,    80,   421,   585,   445,   445,   994,    71,    71,   744,
     744,  1036,   744,   903,  1027,   482,   899,     1,   744,   293,
     378,   358,   410,   659,  1047,   385,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   261,   262,   263,   282,   283,   285,   286,   287,   290,
     291,   292,   293,   294,   295,   296,   302,   312,   313,   318,
     343,   344,   345,   346,   347,   348,   349,   350,   351,     9,
      11,    13,    14,    18,    28,    49,    50,    57,    59,    64,
      79,    81,   182,   188,   249,   423,   132,   132,   132,   132,
     132,   132,   132,   132,   132,     0,   263,   264,   266,   268,
     270,   272,   274,   276,   278,   280,    12,   125,   134,   124,
     314,   315,    70,    82,   254,   125,   125,   254,   134,   125,
     126,   254,   180,   181,   243,   297,   298,    81,   218,   254,
     427,    64,    67,   217,    67,    67,    67,    17,    67,    67,
      17,    37,     3,    65,    66,    80,    86,    88,    89,   168,
     177,   179,   265,   352,   353,   354,   362,   365,   368,   406,
     407,   408,   409,   419,   422,   423,   424,   430,   431,   432,
     433,   437,   477,   478,   479,     3,   219,   267,   352,   353,
     354,   406,   419,   422,   430,   431,   432,   433,   453,   467,
     473,   474,   476,   477,   479,     3,   269,   352,   353,   354,
     419,   422,   430,   431,   432,   433,   469,   470,   471,   473,
     477,   479,     3,   271,   352,   353,   354,   406,   419,   422,
     430,   431,   432,   433,   453,   473,   477,   479,     3,   273,
     352,   353,   354,   362,   365,   371,   419,   422,   430,   431,
     432,   433,     3,   275,   352,   353,   354,   419,   422,   430,
     432,   433,   480,   481,   482,   483,   484,     3,   277,   352,
     353,   354,   419,   422,   430,   432,   433,   440,   279,   352,
     353,   354,   406,   419,   422,   430,   431,   432,   433,   453,
     473,   477,   479,     3,   281,   352,   353,   354,   419,   422,
     430,   432,   433,   436,    10,    65,   284,    70,   316,    84,
     315,   416,   134,   125,   304,   288,   208,   209,   210,   211,
     472,   127,   129,   130,   131,   428,   429,   125,   134,   299,
     298,   241,   301,   254,   254,    38,    40,    41,    42,    43,
      44,    45,    78,    84,    87,   158,   161,   185,   187,   189,
     192,   215,   216,   220,   221,   222,   227,   229,   231,   232,
     237,   238,   239,   240,   425,   426,    55,   486,   125,   125,
     124,   125,   124,   125,   125,   125,   124,   125,   124,   125,
     355,   357,   124,   124,     7,   134,   156,   157,   162,   163,
     164,   165,   166,   172,   173,   193,   218,   221,   438,   439,
     443,   446,   448,   449,   450,   451,   355,   355,   126,   355,
     134,   246,   246,   169,   170,   171,   133,   132,   434,   435,
     218,   254,   427,     7,   192,   193,   216,   218,   237,   475,
     218,   237,   475,     7,   193,   212,   213,   193,     7,     7,
      45,    46,    47,    48,   193,   167,   172,   174,   175,   176,
     441,   442,   444,   445,   446,   447,   450,   158,   193,   124,
      24,   134,    28,    33,   190,   191,   200,   201,   202,   203,
     204,   205,   206,   207,   303,   308,   310,   311,   317,   359,
     360,   134,    69,   361,   319,   321,    29,    31,    32,    34,
      35,   160,   255,   305,    58,    60,    61,    62,    63,   255,
     289,   244,   244,   255,   429,   181,    84,   300,   303,   308,
     310,   311,   301,   242,   428,   425,   255,   426,   134,    84,
     185,   187,   356,   357,   358,   415,    68,    82,   185,   186,
     187,   236,   374,   376,    86,   193,   250,   251,   252,   253,
     454,   454,   454,   454,   454,   454,   238,   239,   230,   454,
     134,   439,   462,   463,   464,   454,    84,   356,   414,   356,
     414,   356,   414,    53,   435,   254,   425,   486,    21,    22,
     215,   468,   454,   192,   215,   216,   468,   454,   252,   253,
     421,   217,   421,   217,   240,   214,   454,   214,   454,   224,
     225,   226,   227,    38,   454,   454,   454,    46,    47,    38,
     454,   442,   464,   454,   454,   158,   134,   316,   254,    87,
     124,   126,   124,   124,   195,   124,    15,    17,    26,    27,
      28,    83,   320,   323,   326,   327,   328,   329,   330,   331,
     335,    26,    27,   322,   328,   335,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   134,   134,   255,
     255,   427,    53,   134,   124,   134,   124,   134,   358,   415,
     124,   125,   124,   134,   124,   134,   124,   134,   243,    70,
     375,   369,   134,   134,   134,   134,   146,   452,   134,   452,
     134,   134,   464,   464,   464,   134,    53,   134,     5,   134,
     452,   134,   414,   414,   414,   425,   255,   134,    87,   134,
     464,   464,   464,    87,   134,   124,   125,   124,   125,   124,
     125,   124,   125,   464,   454,   134,   454,   134,   452,   372,
     372,   372,    73,   485,   464,   134,   134,   134,   454,   454,
     464,   134,   452,     5,   134,   134,   464,   304,    21,    22,
     252,   309,    20,    21,    23,   124,   125,   257,   124,    28,
      83,    28,    83,    26,    27,    26,    27,   324,   324,   125,
      15,    16,    26,    27,   125,   125,   310,   134,   134,   134,
     134,   134,   195,   427,   486,   195,   464,   464,   464,   464,
     464,   464,   366,   134,   363,    51,    52,    73,    77,    84,
      85,   370,   378,   382,   383,   417,   418,   464,    53,   135,
     472,   135,   472,   135,   135,     5,     5,     5,   195,   196,
     197,   198,   199,   455,    53,    65,    66,    79,    86,   222,
     223,   459,   460,   195,   255,   427,   464,    52,   464,   455,
       5,     5,     5,   464,   472,   464,   464,   464,   464,     5,
     134,   135,   464,   134,   452,   135,   472,    17,    54,    84,
     216,   373,   410,   411,   412,   413,   464,   464,   464,   228,
     372,     5,   135,    39,   472,    39,   472,   134,   134,     5,
     135,   472,   460,   135,   464,     5,   255,   309,   309,   124,
     125,   125,   125,   256,   336,   124,    25,    29,    30,   325,
     332,   333,   334,   472,   472,   472,   472,   194,   195,   486,
       5,     5,     5,     5,     5,     5,    33,   237,   303,   306,
     308,   367,   417,   418,   420,   464,    17,    71,    72,   303,
     306,   308,   364,   377,   378,   381,   382,   383,   417,   418,
     420,   464,   124,   124,    74,    75,    76,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   134,   134,     5,     5,   460,   460,   460,   464,   355,
       4,   466,   427,   486,     5,   124,     5,   464,   460,   460,
     460,     5,   464,     5,     5,     5,     5,   460,   135,   464,
     464,     5,   135,   472,   464,   464,   124,   134,   134,   134,
       5,     5,     5,   464,   460,   464,   195,   457,   457,   457,
     457,    39,   472,    39,   472,   460,   466,     5,   460,   124,
     124,   337,   338,   339,   124,   124,   340,   341,    19,   342,
     125,   125,   460,   460,   460,   460,   460,   460,    36,   421,
       5,   124,     5,   379,   394,   394,    67,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   404,   405,   386,
     386,   388,    68,   159,   160,   178,   384,   385,   392,   402,
     195,   460,    84,   460,   466,     5,    56,   356,   458,     3,
     486,   460,   464,   460,     5,   466,   460,     5,   460,   460,
     460,   460,   464,     5,     5,   460,   464,   464,     5,     5,
     195,   460,   460,   460,     5,   466,     5,   464,   464,   464,
     464,   134,   196,   197,   198,   456,   134,   456,   134,   456,
     134,   456,   466,   460,   340,   340,   340,   342,   341,   466,
     466,   466,   466,   466,   466,   250,   307,   124,   460,   460,
     310,   311,   380,    87,   158,   178,   184,   258,   395,   396,
     397,   398,   399,   125,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   405,   359,   360,   387,   359,   360,
     389,   124,   124,   134,   125,   385,   245,   248,   390,   391,
     393,   183,   401,   403,   466,   460,    88,   458,   233,   234,
     235,   466,     5,   466,   460,   460,     5,   460,   460,   466,
       5,     5,   460,   460,   466,   466,   466,   460,   460,     5,
       5,     5,     5,   456,   464,   456,   464,   456,   464,   456,
     464,   466,   134,   466,   466,   124,   454,   125,   124,   400,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     124,   126,   134,   124,   466,    53,   134,   462,   463,   465,
     465,   465,   460,   466,   466,   460,   466,   466,   460,   460,
     466,   466,   466,   466,   460,   460,   460,   460,   464,     5,
     464,     5,   464,     5,   464,     5,   198,   134,   247,   259,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
      53,     5,     5,     5,   466,   466,   466,   466,   466,   466,
     466,   466,     5,   460,     5,   460,     5,   460,     5,   460,
     459,   461,   461,   461,   460,   466,   460,   466,   460,   466,
     460,   466,   466,   466,   466,   466
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   260,   261,   261,   262,   262,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   268,   268,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   272,   272,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   276,   276,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   278,   278,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   282,   282,   282,   283,   284,   284,   285,   286,
     287,   288,   288,   289,   289,   289,   289,   289,   289,   290,
     291,   291,   291,   292,   292,   292,   293,   294,   295,   296,
     297,   297,   298,   299,   299,   300,   300,   300,   300,   300,
     301,   301,   302,   303,   303,   304,   304,   305,   305,   305,
     305,   305,   305,   305,   305,   306,   307,   307,   308,   308,
     308,   309,   309,   310,   310,   310,   310,   310,   310,   310,
     311,   312,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   317,   317,   317,   317,   318,   318,   319,   319,   320,
     320,   320,   320,   321,   321,   322,   322,   323,   323,   324,
     324,   325,   325,   325,   326,   326,   327,   327,   328,   328,
     329,   329,   330,   330,   331,   332,   333,   334,   335,   335,
     335,   335,   335,   335,   336,   335,   337,   335,   338,   335,
     339,   335,   335,   340,   340,   341,   342,   342,   343,   343,
     343,   343,   344,   345,   345,   346,   347,   348,   348,   349,
     350,   351,   351,   352,   352,   353,   353,   354,   354,   355,
     355,   356,   356,   357,   357,   358,   358,   358,   358,   359,
     359,   360,   361,   361,   362,   363,   363,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   365,   366,
     366,   367,   367,   367,   367,   367,   367,   368,   369,   369,
     370,   370,   370,   370,   370,   371,   371,   371,   371,   372,
     372,   373,   373,   373,   373,   374,   374,   375,   376,   377,
     377,   378,   378,   378,   379,   379,   380,   380,   381,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   383,   383,   384,   384,   385,   385,   385,
     385,   386,   386,   387,   387,   388,   388,   389,   389,   390,
     390,   391,   392,   392,   393,   393,   394,   394,   395,   395,
     395,   395,   395,   396,   397,   398,   399,   400,   400,   401,
     402,   402,   403,   404,   404,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   414,   415,   415,   416,   416,
     417,   418,   419,   419,   420,   421,   421,   422,   422,   422,
     422,   423,   424,   425,   425,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   427,   427,   428,   428,   429,   429,
     429,   429,   430,   430,   430,   431,   431,   431,   432,   433,
     434,   434,   435,   436,   436,   437,   438,   438,   439,   439,
     439,   439,   439,   440,   441,   441,   442,   442,   442,   442,
     443,   443,   444,   445,   445,   445,   445,   446,   446,   446,
     446,   447,   447,   448,   449,   450,   451,   451,   451,   452,
     452,   453,   453,   454,   454,   454,   454,   454,   454,   455,
     455,   455,   455,   455,   455,   456,   456,   456,   457,   457,
     458,   458,   458,   459,   459,   459,   459,   459,   459,   459,
     460,   461,   462,   463,   464,   464,   464,   465,   465,   465,
     466,   466,   466,   466,   467,   467,   467,   468,   468,   468,
     469,   469,   469,   469,   470,   470,   470,   470,   471,   472,
     472,   472,   472,   472,   473,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   475,   475,   476,   476,   477,   477,
     478,   478,   479,   479,   480,   481,   482,   483,   483,   483,
     483,   483,   483,   484,   484,   484,   484,   484,   484,   485,
     486,   486,   486
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     7,     8,     4,     0,     3,     2,     4,
       5,     0,     2,     4,     4,     4,     4,     4,     4,     2,
       3,     3,     5,     4,     6,     4,     3,     3,     3,     3,
       2,     3,     2,     0,     2,     3,     1,     1,     1,     1,
       0,     2,     5,     1,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     0,     1,     4,     5,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     1,     2,     2,     4,     0,     2,     1,
       1,     1,     1,     1,     1,     5,     5,     0,     2,     1,
       1,     1,     1,     0,     2,     1,     1,     2,     2,     0,
       2,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     5,     4,
       2,     3,     3,     3,     0,     4,     0,     5,     0,     5,
       0,     5,     2,     1,     2,     1,     0,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       4,     5,     6,     3,     4,     3,     4,     3,     4,     1,
       2,     1,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     0,     2,     9,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     9,     0,
       2,     1,     1,     1,     1,     1,     1,     8,     0,     2,
       1,     1,     1,     1,     1,     9,     8,     8,     8,     0,
       2,     1,     1,     1,     1,     0,     2,     2,     2,     1,
       1,     2,     3,     2,     0,     2,     1,     1,     2,     3,
       2,     2,     2,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     1,     2,     2,     2,     2,
       2,     0,     2,     1,     1,     0,     2,     1,     1,     2,
       2,     2,     0,     2,     1,     1,     0,     2,     1,     1,
       1,     1,     3,     3,     2,     2,     2,     0,     2,     2,
       0,     2,     1,     1,     2,     2,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     7,     6,     6,     9,
       2,     2,     3,     2,     0,     3,     0,     3,     0,     3,
       3,     2,     7,     7,     3,     1,     1,     3,     6,     7,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     2,     2,
       1,     1,     3,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     8,     6,     6,     1,     2,     1,     1,
       1,     1,     1,     6,     1,     2,     1,     1,     1,     1,
       4,     4,     4,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     9,     6,     0,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     3,     4,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     2,     3,     0,     1,     1,     0,     1,     1,
       0,     6,     6,     6,     8,    10,     7,     0,     1,     1,
       8,     9,     9,    10,     9,     9,    10,    10,     6,     0,
       1,     1,     1,     1,     8,     7,     7,     7,     4,     4,
       7,     7,     4,     4,     0,     1,     9,     6,     8,     8,
       8,     8,     8,     8,     7,     7,     9,    10,    11,    12,
      10,    11,    12,    10,    11,    12,    10,    11,    12,     2,
       0,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 172:
#line 566 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3049 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 570 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3057 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 573 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3066 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 579 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.flags      |= Run_Daemon;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 3079 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 589 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 3085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 590 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 3091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 593 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 598 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3108 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 611 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3116 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 614 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3124 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 617 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 620 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3140 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 623 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number);
                  }
#line 3148 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 626 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number) * 1000;
                  }
#line 3156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 631 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3164 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 636 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.log || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.flags &= ~Run_UseSyslog;
                     Run.flags |= Run_Log;
                   }
                  }
#line 3177 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 644 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 3185 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 647 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 652 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 655 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3210 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 659 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 665 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.id = (yyvsp[0].string);
                  }
#line 3227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 670 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.state = (yyvsp[0].string);
                  }
#line 3235 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 675 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.pid || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 3246 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 690 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 700 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 710 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        Run.ssl.flags = SSL_Enabled;
                        Run.ssl.verify = sslset.verify;
                        Run.ssl.allowSelfSigned = sslset.allowSelfSigned;
                        Run.ssl.version = sslset.version;
                        Run.ssl.minimumValidDays = sslset.minimumValidDays;
                        Run.ssl.checksumType = sslset.checksumType;
                        Run.ssl.checksum = sslset.checksum;
                        Run.ssl.clientpemfile = sslset.clientpemfile;
                        Run.ssl.CACertificateFile = sslset.CACertificateFile;
                        Run.ssl.CACertificatePath = sslset.CACertificatePath;
                        if (Run.ssl.allowSelfSigned == true)
                                Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                        reset_sslset();
                  }
#line 3291 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 732 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3299 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 742 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 746 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3317 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 750 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 754 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3335 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 758 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 761 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.clientpemfile = (yyvsp[0].string);
                        if (! File_exist(sslset.clientpemfile))
                                yyerror2("SSL client PEM file doesn't exist");
                        else if (! File_isFile(sslset.clientpemfile))
                                yyerror2("SSL client PEM file is not a file");
                        else if (! File_isReadable(sslset.clientpemfile))
                                yyerror2("Cannot read SSL client PEM file");
                  }
#line 3358 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 771 "src/p.y" /* yacc.c:1646  */
    {
                        if (sslset.CACertificateFile)
                                yyerror2("Duplicate SSL CA certificates file doesn't exist");
                        sslset.flags = SSL_Enabled;
                        sslset.CACertificateFile = (yyvsp[0].string);
                        if (! File_exist(sslset.CACertificateFile))
                                yyerror2("SSL CA certificates file doesn't exist");
                        else if (! File_isFile(sslset.CACertificateFile))
                                yyerror2("SSL CA certificates file is not a file");
                        else if (! File_isReadable(sslset.CACertificateFile))
                                yyerror2("Cannot read CA certificates file");
                  }
#line 3375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 783 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.CACertificatePath = (yyvsp[0].string);
                        if (! File_exist(sslset.CACertificatePath))
                                yyerror2("SSL CA certificates directory doesn't exist");
                        else if (! File_isDirectory(sslset.CACertificatePath))
                                yyerror2("SSL CA certificates path is not directory");
                        else if (! File_isReadable(sslset.CACertificatePath))
                                yyerror2("Cannot read CA certificates directory");
                  }
#line 3390 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 795 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.minimumValidDays = (yyvsp[-1].number);
                  }
#line 3399 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        switch (cleanup_hash_string(sslset.checksum)) {
                                case 32:
                                        sslset.checksumType = Hash_Md5;
                                        break;
                                case 40:
                                        sslset.checksumType = Hash_Sha1;
                                        break;
                                default:
                                        yyerror2("Unknown checksum type: [%s] is not MD5 nor SHA1", sslset.checksum);
                        }
                  }
#line 3418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 819 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 826 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 839 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 843 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3460 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 847 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 852 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV11;
                }
#line 3481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 860 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV12;
                }
#line 3493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 867 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 871 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 877 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                        Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 893 "src/p.y" /* yacc.c:1646  */
    {
                   if (mailset.from) {
                        Run.MailFormat.from = mailset.from;
                   } else {
                        Run.MailFormat.from = Address_new();
                        Run.MailFormat.from->address = Str_dup(ALERT_FROM);
                   }
                   if (mailset.replyto)
                        Run.MailFormat.replyto = mailset.replyto;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 3551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 912 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 921 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 936 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 939 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 948 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 952 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 976 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Ssl;
#ifdef HAVE_OPENSSL
                        if (! Run.httpd.socket.net.ssl.pem)
                                yyerror("SSL server PEM file is required (pemfile option)");
                        else if (! file_checkStat(Run.httpd.socket.net.ssl.pem, "SSL server PEM file", S_IRWXU))
                                yyerror("SSL server PEM file permissions check failed");
#else
                        yyerror("SSL is not supported");
#endif
                  }
#line 3637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1009 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1012 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1025 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1030 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1035 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1042 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1047 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1050 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3708 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1058 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1062 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3726 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1066 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1070 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1074 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1078 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1081 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3770 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1085 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3778 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1088 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1092 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1095 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1099 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3812 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1113 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1119 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3837 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1120 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3843 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3851 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1126 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1129 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3871 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1136 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3883 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1145 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1150 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3899 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1153 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1163 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3923 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1168 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1176 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3945 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1182 "src/p.y" /* yacc.c:1646  */
    {
                    char hostname[STRLEN];
                    if (Util_getfqdnhostname(hostname, sizeof(hostname))) {
                      LogError("Cannot get system hostname\n");
                      cfg_errflag++;
                    }
                    char *servicename = (yyvsp[0].string);
                    Util_replaceString(&servicename, "$HOST", hostname);
                    Run.system = createservice(Service_System, servicename, Str_dup(""), check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 3960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1194 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1199 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3980 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1206 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1215 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 4000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1218 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1223 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 4016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1226 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 4024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1232 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1235 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4040 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1248 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4048 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1251 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1256 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4065 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1260 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4074 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1264 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4082 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1267 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4090 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1272 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4098 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1275 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4106 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4114 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1285 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4122 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1288 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4130 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1293 "src/p.y" /* yacc.c:1646  */
    {
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1319 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-5].url));
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4152 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1338 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1355 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1361 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1366 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4192 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1371 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4202 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1388 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4210 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1391 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4218 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1396 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4226 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1401 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4235 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1407 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 4243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1410 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 4251 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1415 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 4259 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1418 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                    portset.type = Socket_Tcp;
                    sslset.flags = SSL_Enabled;
                  }
#line 4268 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1422 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 4276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1435 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1440 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4292 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1443 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1446 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1449 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1452 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1455 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1458 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1463 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1466 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1471 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1474 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1477 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1480 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1483 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1486 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1489 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1492 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4425 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1499 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1502 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1507 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1510 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1513 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1518 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1521 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1524 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1527 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1530 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1533 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1536 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1539 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1542 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1545 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1548 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1553 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1557 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1567 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1570 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1573 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1576 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1585 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 4623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1588 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 4631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1597 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username lengh is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4644 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1605 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4652 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1610 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4660 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1613 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1618 "src/p.y" /* yacc.c:1646  */
    {
                     (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1627 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4684 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1630 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1646 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.operator = (yyvsp[-1].number);
                    portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1652 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4710 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1658 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 4718 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1663 "src/p.y" /* yacc.c:1646  */
    {
                    addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                    FREE((yyvsp[0].string));
                  }
#line 4727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1670 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 4735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1675 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1684 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 4751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1693 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 4759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1696 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 4768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1700 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 4777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1704 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1712 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 4804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1716 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4813 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1720 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 4822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1724 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1732 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1738 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4858 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1745 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1751 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1757 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1764 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 4895 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1769 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 4903 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1774 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 4911 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1779 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 4919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1784 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4927 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1787 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4935 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1792 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1795 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1800 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = Run.limits.networkTimeout;
                  }
#line 4959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1803 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1808 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 4975 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1813 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1818 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1824 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 5005 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1832 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 5014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1838 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1839 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5026 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1842 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1846 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1849 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5052 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1853 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5060 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1858 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5066 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1861 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5072 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1868 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5078 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1869 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5084 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1870 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5090 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1871 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5096 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1872 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1873 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5108 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1874 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5114 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1875 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5120 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1876 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 5126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1877 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1878 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5138 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1879 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1880 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1881 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1882 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 5162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1883 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5168 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1884 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1885 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1886 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5186 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1887 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5192 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1888 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5198 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1889 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1890 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5210 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1891 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1892 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1893 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1894 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5234 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1895 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1896 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5246 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1907 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5252 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1908 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5258 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1909 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1910 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1913 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1917 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5288 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1921 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1927 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 5305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1930 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 5313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 5322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1939 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1953 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1956 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1963 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5361 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1972 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2005 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5389 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2010 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5399 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2017 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5409 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2024 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5415 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2025 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2026 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2027 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2030 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2035 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2040 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2045 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5473 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2052 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2057 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2064 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Threads;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2071 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2078 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].real);
                  }
#line 5523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2085 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2086 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2087 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2090 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2091 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2094 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset);
                  }
#line 5564 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2100 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset);
                  }
#line 5574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2107 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2108 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2109 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2110 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2111 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2112 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2115 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2116 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2117 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2118 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2119 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2120 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2123 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5652 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2124 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5658 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2125 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2127 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2128 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2130 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 5684 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2133 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 5692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2136 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 5703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2144 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 5711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2147 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2151 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2154 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 5735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2157 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 5743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2160 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 5751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2163 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 5759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2168 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat1 = repeat;
                      repeat = 0;
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5773 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2179 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat2 = repeat;
                      repeat = 0;
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2190 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 5800 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2200 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else if ((yyvsp[-2].number) < 1 || (yyvsp[-2].number) > (yyvsp[-1].number)) {
                                yyerror2("The number of events must be between 1 and less then poll cycles");
                        } else {
                                rate.count  = (yyvsp[-2].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 5815 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2213 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2218 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2226 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5845 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2231 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2238 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5863 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2241 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5871 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2244 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5879 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2247 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2252 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2257 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2263 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5917 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2269 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5923 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2270 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5929 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2271 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5935 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2274 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2281 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2288 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5971 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2295 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2304 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5997 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2313 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6009 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2320 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2329 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2338 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 6044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2344 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6050 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2345 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2346 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6062 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2347 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6068 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2348 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6074 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2351 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 6084 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2356 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 6094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2363 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2371 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2378 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2386 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2394 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2401 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6167 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2407 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6179 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2414 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2422 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 6198 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2425 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 6206 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2431 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 6217 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2437 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 6227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2444 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6238 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2450 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2457 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6259 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2463 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 6269 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2470 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2476 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 6290 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2483 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 6299 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2489 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 6308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2494 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 6319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2502 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2510 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6345 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2518 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6358 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2526 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6371 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2534 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2542 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2552 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2560 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2568 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2576 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6449 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2584 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6462 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2592 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2602 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 6481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2605 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 6487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2606 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 6493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2607 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 6499 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 6503 "src/y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2610 "src/p.y" /* yacc.c:1906  */



/* -------------------------------------------------------- Parser interface */


/**
 * Syntactic error routine
 *
 * This routine is automatically called by the lexer!
 */
void yyerror(const char *s, ...) {
        va_list ap;
        char *msg = NULL;

        ASSERT(s);

        va_start(ap,s);
        msg = Str_vcat(s, ap);
        va_end(ap);

        LogError("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
        cfg_errflag++;

        FREE(msg);

}

/**
 * Syntactical warning routine
 */
void yywarning(const char *s, ...) {
        va_list ap;
        char *msg = NULL;

        ASSERT(s);

        va_start(ap,s);
        msg = Str_vcat(s, ap);
        va_end(ap);

        LogWarning("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);

        FREE(msg);

}

/**
 * Argument error routine
 */
void yyerror2(const char *s, ...) {
        va_list ap;
        char *msg = NULL;

        ASSERT(s);

        va_start(ap,s);
        msg = Str_vcat(s, ap);
        va_end(ap);

        LogError("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
        cfg_errflag++;

        FREE(msg);

}

/**
 * Argument warning routine
 */
void yywarning2(const char *s, ...) {
        va_list ap;
        char *msg = NULL;

        ASSERT(s);

        va_start(ap,s);
        msg = Str_vcat(s, ap);
        va_end(ap);

        LogWarning("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);

        FREE(msg);

}

/*
 * The Parser hook - start parsing the control file
 * Returns true if parsing succeeded, otherwise false
 */
boolean_t parse(char *controlfile) {

        ASSERT(controlfile);

        servicelist = tail = current = NULL;

        if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
                LogError("Cannot open the control file '%s' -- %s\n", controlfile, STRERROR);
                return false;
        }

        currentfile = Str_dup(controlfile);

        /*
         * Creation of the global service list is synchronized
         */
        LOCK(Run.mutex)
        {
                preparse();
                included = List_new();
                List_append(included, Str_dup(controlfile));
                yyparse();
                char *include = NULL;
                while ((include = List_pop(included)))
                        FREE(include);
                List_free(&included);
                fclose(yyin);
                postparse();
        }
        END_LOCK;

        FREE(currentfile);

        if (argyytext != NULL)
                FREE(argyytext);

        /*
         * Secure check the monitrc file. The run control file must have the
         * same uid as the REAL uid of this process, it must have permissions
         * no greater than 700 and it must not be a symbolic link.
         */
        if (! file_checkStat(controlfile, "control file", S_IRUSR|S_IWUSR|S_IXUSR))
                return false;

        return cfg_errflag == 0;
}


/* ----------------------------------------------------------------- Private */


/**
 * Initialize objects used by the parser.
 */
static void preparse() {
        /* Set instance incarnation ID */
        time(&Run.incarnation);
        /* Reset lexer */
        buffer_stack_ptr            = 0;
        lineno                      = 1;
        arglineno                   = 1;
        argcurrentfile              = NULL;
        argyytext                   = NULL;
        /* Reset parser */
        Run.limits.sendExpectBuffer  = LIMIT_SENDEXPECTBUFFER;
        Run.limits.fileContentBuffer = LIMIT_FILECONTENTBUFFER;
        Run.limits.httpContentBuffer = LIMIT_HTTPCONTENTBUFFER;
        Run.limits.programOutput     = LIMIT_PROGRAMOUTPUT;
        Run.limits.networkTimeout    = LIMIT_NETWORKTIMEOUT;
        Run.mmonitcredentials        = NULL;
        Run.httpd.flags              = Httpd_Disabled | Httpd_Signature;
        Run.httpd.credentials        = NULL;
        memset(&(Run.httpd.socket), 0, sizeof(Run.httpd.socket));
        Run.mailserver_timeout       = SMTP_TIMEOUT;
        Run.eventlist_dir            = NULL;
        Run.eventlist_slots          = -1;
        Run.system                   = NULL;
        Run.mmonits                  = NULL;
        Run.maillist                 = NULL;
        Run.mailservers              = NULL;
        Run.MailFormat.from          = NULL;
        Run.MailFormat.replyto       = NULL;
        Run.MailFormat.subject       = NULL;
        Run.MailFormat.message       = NULL;
        depend_list                  = NULL;
        Run.flags |= Run_HandlerInit | Run_MmonitCredentials;
        for (int i = 0; i <= Handler_Max; i++)
                Run.handler_queue[i] = 0;

        /*
         * Initialize objects
         */
        reset_uidset();
        reset_gidset();
        reset_statusset();
        reset_sizeset();
        reset_mailset();
        reset_sslset();
        reset_mailserverset();
        reset_mmonitset();
        reset_portset();
        reset_permset();
        reset_icmpset();
        reset_linkstatusset();
        reset_linkspeedset();
        reset_linksaturationset();
        reset_bandwidthset();
        reset_rateset(&rate);
        reset_rateset(&rate1);
        reset_rateset(&rate2);
        reset_filesystemset();
        reset_resourceset();
        reset_checksumset();
        reset_timestampset();
        reset_actionrateset();
}


/*
 * Check that values are reasonable after parsing
 */
static void postparse() {
        if (cfg_errflag)
                return;

        /* If defined - add the last service to the service list */
        if (current)
                addservice(current);

        /* Check that we do not start monit in daemon mode without having a poll time */
        if (! Run.polltime && ((Run.flags & Run_Daemon) || (Run.flags & Run_Foreground))) {
                LogError("Poll time is invalid or not defined. Please define poll time in the control file\nas a number (> 0)  or use the -d option when starting monit\n");
                cfg_errflag++;
        }

        if (Run.files.log)
                Run.flags |= Run_Log;

        /* Add the default general system service if not specified explicitly: service name default to hostname */
        if (! Run.system) {
                char hostname[STRLEN];
                if (Util_getfqdnhostname(hostname, sizeof(hostname))) {
                        LogError("Cannot get system hostname -- please add 'check system <name>'\n");
                        cfg_errflag++;
                }
                if (Util_existService(hostname)) {
                        LogError("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", hostname);
                        cfg_errflag++;
                } else {
                        Run.system = createservice(Service_System, Str_dup(hostname), Str_dup(""), check_system);
                        addservice(Run.system);
                }
        }
        addeventaction(&(Run.system->action_MONIT_START), Action_Start, Action_Ignored);
        addeventaction(&(Run.system->action_MONIT_STOP), Action_Stop,  Action_Ignored);

        if (Run.mmonits) {
                if (Run.httpd.flags & Httpd_Net) {
                        if (Run.flags & Run_MmonitCredentials) {
                                Auth_T c;
                                for (c = Run.httpd.credentials; c; c = c->next) {
                                        if (c->digesttype == Digest_Cleartext && ! c->is_readonly) {
                                                Run.mmonitcredentials = c;
                                                break;
                                        }
                                }
                                if (! Run.mmonitcredentials)
                                        LogWarning("M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n");
                        }
                } else if (Run.httpd.flags & Httpd_Unix) {
                        LogWarning("M/Monit enabled but Monit httpd is using unix socket -- please change 'set httpd' statement to use TCP port in order to be able to manage services on Monit\n");
                } else {
                        LogWarning("M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n");
                }
        }

        /* Check the sanity of any dependency graph */
        check_depend();

#ifdef HAVE_OPENSSL
        Ssl_setFipsMode(Run.flags & Run_FipsEnabled);
#endif

        Processor_setHttpPostLimit();
}


static boolean_t _parseOutgoingAddress(const char *ip, Outgoing_T *outgoing) {
        struct addrinfo *result, hints = {.ai_flags = AI_NUMERICHOST};
        int status = getaddrinfo(ip, NULL, &hints, &result);
        if (status == 0) {
                outgoing->ip = (char *)ip;
                outgoing->addrlen = result->ai_addrlen;
                memcpy(&(outgoing->addr), result->ai_addr, result->ai_addrlen);
                freeaddrinfo(result);
                return true;
        } else {
                yyerror2("IP address parsing failed -- %s", ip, status == EAI_SYSTEM ? STRERROR : gai_strerror(status));
        }
        return false;
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static Service_T createservice(Service_Type type, char *name, char *value, State_Type (*check)(Service_T s)) {
        ASSERT(name);
        ASSERT(value);

        check_name(name);

        if (current)
                addservice(current);

        NEW(current);

        current->type = type;

        NEW(current->inf);
        Util_resetInfo(current);

        if (type == Service_Program) {
                NEW(current->program);
                current->program->args = command;
                command = NULL;
                current->program->timeout = PROGRAM_TIMEOUT;
        }

        /* Set default values */
        current->monitor = Monitor_Init;
        current->mode    = Monitor_Active;
        current->name    = name;
        current->check   = check;
        current->path    = value;

        /* Initialize general event handlers */
        addeventaction(&(current)->action_DATA,     Action_Alert,     Action_Alert);
        addeventaction(&(current)->action_EXEC,     Action_Alert,     Action_Alert);
        addeventaction(&(current)->action_INVALID,  Action_Restart,   Action_Alert);

        /* Initialize internal event handlers */
        addeventaction(&(current)->action_ACTION,       Action_Alert, Action_Ignored);

        gettimeofday(&current->collected, NULL);

        return current;
}


/*
 * Add a service object to the servicelist
 */
static void addservice(Service_T s) {
        ASSERT(s);

        // Test sanity check
        switch (s->type) {
                case Service_Host:
                        // Verify that a remote service has a port or an icmp list
                        if (! s->portlist && ! s->icmplist) {
                                LogError("'check host' statement is incomplete: Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", s->name);
                                cfg_errflag++;
                        }
                        break;
                case Service_Program:
                        // Verify that a program test has a status test
                        if (! s->statuslist) {
                                LogError("'check program %s' is incomplete: Please add an 'if status != n' test\n", s->name);
                                cfg_errflag++;
                        }
                        // Create the Command object
                        s->program->C = Command_new(s->path, NULL);
                        // Append any arguments
                        for (int i = 1; i < s->program->args->length; i++)
                                Command_appendArgument(s->program->C, s->program->args->arg[i]);
                        if (s->program->args->has_uid)
                                Command_setUid(s->program->C, s->program->args->uid);
                        if (s->program->args->has_gid)
                                Command_setGid(s->program->C, s->program->args->gid);
                        break;
                case Service_Net:
                        if (! s->linkstatuslist) {
                                // Add link status test if not defined
                                addeventaction(&(linkstatusset).action, Action_Alert, Action_Alert);
                                addlinkstatus(s, &linkstatusset);
                        }
                        break;
                case Service_Filesystem:
                        if (! s->fsflaglist) {
                                // Add filesystem flags change test if not defined
                                addeventaction(&(fsflagset).action, Action_Alert, Action_Ignored);
                                addfsflag(&fsflagset);
                        }
                        break;
                case Service_Directory:
                case Service_Fifo:
                case Service_File:
                case Service_Process:
                        if (! s->nonexistlist) {
                                // Add existence test if not defined
                                addeventaction(&(nonexistset).action, Action_Restart, Action_Alert);
                                addnonexist(&nonexistset);
                        }
                        break;
                default:
                        break;
        }

        /* Add the service to the end of the service list */
        if (tail != NULL) {
                tail->next = s;
                tail->next_conf = s;
        } else {
                servicelist = s;
                servicelist_conf = s;
        }
        tail = s;
}


/*
 * Add entry to service group list
 */
static void addservicegroup(char *name) {
        ServiceGroup_T g;

        ASSERT(name);

        /* Check if service group with the same name is defined already */
        for (g = servicegrouplist; g; g = g->next)
                if (IS(g->name, name))
                        break;

        if (! g) {
                NEW(g);
                g->name = Str_dup(name);
                g->members = List_new();
                g->next = servicegrouplist;
                servicegrouplist = g;
        }

        List_append(g->members, current);
}


/*
 * Add a dependant entry to the current service dependant list
 *
 */
static void adddependant(char *dependant) {
        Dependant_T d;

        ASSERT(dependant);

        NEW(d);

        if (current->dependantlist)
                d->next = current->dependantlist;

        d->dependant = dependant;
        current->dependantlist = d;

}


/*
 * Add the given mailaddress with the appropriate alert notification
 * values and mail attributes to the given mailinglist.
 */
static void addmail(char *mailto, Mail_T f, Mail_T *l) {
        Mail_T m;

        ASSERT(mailto);

        NEW(m);
        m->to       = mailto;
        m->from     = f->from;
        m->replyto  = f->replyto;
        m->subject  = f->subject;
        m->message  = f->message;
        m->events   = f->events;
        m->reminder = f->reminder;

        m->next = *l;
        *l = m;

        reset_mailset();
}


/*
 * Add the given portset to the current service's portlist
 */
static void addport(Port_T *list, Port_T port) {
        ASSERT(port);

        if (port->protocol->check == check_radius && port->type != Socket_Udp)
                yyerror("Radius protocol test supports UDP only");

        Port_T p;
        NEW(p);
        p->is_available       = Connection_Init;
        p->type               = port->type;
        p->socket             = port->socket;
        p->family             = port->family;
        p->action             = port->action;
        p->timeout            = port->timeout;
        p->retry              = port->retry;
        p->protocol           = port->protocol;
        p->hostname           = port->hostname;
        p->url_request        = port->url_request;
        p->outgoing           = port->outgoing;
        if (p->family == Socket_Unix) {
                p->target.unix.pathname = port->target.unix.pathname;
        } else {
                p->target.net.port = port->target.net.port;
                if (sslset.flags) {
#ifdef HAVE_OPENSSL
                        if (sslset.flags && (p->target.net.port == 25 || p->target.net.port == 587))
                                p->target.net.ssl.flags = SSL_StartTLS;
                        else
                                p->target.net.ssl.flags = sslset.flags;
                        p->target.net.ssl.verify = sslset.verify;
                        p->target.net.ssl.allowSelfSigned = sslset.allowSelfSigned;
                        p->target.net.ssl.minimumValidDays = sslset.minimumValidDays;
                        p->target.net.ssl.version = sslset.version;
                        p->target.net.ssl.checksumType = sslset.checksumType;
                        p->target.net.ssl.checksum = sslset.checksum;
                        p->target.net.ssl.clientpemfile = sslset.clientpemfile;
                        p->target.net.ssl.CACertificateFile = sslset.CACertificateFile;
                        p->target.net.ssl.CACertificatePath = sslset.CACertificatePath;
#else
                        yyerror("SSL check cannot be activated -- SSL disabled");
#endif
                }
        }
        memcpy(&p->parameters, &port->parameters, sizeof(port->parameters));

        if (p->protocol->check == check_http) {
                if (p->parameters.http.checksum) {
                        cleanup_hash_string(p->parameters.http.checksum);
                        if (strlen(p->parameters.http.checksum) == 32)
                                p->parameters.http.hashtype = Hash_Md5;
                        else if (strlen(p->parameters.http.checksum) == 40)
                                p->parameters.http.hashtype = Hash_Sha1;
                        else
                                yyerror2("invalid checksum [%s]", p->parameters.http.checksum);
                } else {
                        p->parameters.http.hashtype = Hash_Unknown;
                }
        }

        p->next = *list;
        *list = p;

        reset_sslset();
        reset_portset();

}


static void addhttpheader(Port_T port, const char *header) {
        if (! port->parameters.http.headers)
                port->parameters.http.headers = List_new();
        List_append(port->parameters.http.headers, (char *)header);
}


/*
 * Add a new resource object to the current service resource list
 */
static void addresource(Resource_T rr) {
        Resource_T r;

        ASSERT(rr);

        NEW(r);
        if (! (Run.flags & Run_ProcessEngineEnabled))
                yyerror("Cannot activate service check. The process status engine was disabled. On certain systems you must run monit as root to utilize this feature)\n");
        r->resource_id = rr->resource_id;
        r->limit       = rr->limit;
        r->action      = rr->action;
        r->operator    = rr->operator;
        r->next        = current->resourcelist;

        current->resourcelist = r;
        reset_resourceset();
}


/*
 * Add a new file object to the current service timestamp list
 */
static void addtimestamp(Timestamp_T ts) {
        ASSERT(ts);

        Timestamp_T t;
        NEW(t);
        t->operator     = ts->operator;
        t->time         = ts->time;
        t->action       = ts->action;
        t->test_changes = ts->test_changes;

        if (t->test_changes) {
                if (! File_exist(current->path))
                        DEBUG("The path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", current->path);
                else if (! (t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG)))
                        yyerror2("Cannot get the timestamp for '%s'", current->path);
                else
                        t->initialized = true;
        }

        t->next = current->timestamplist;
        current->timestamplist = t;

        reset_timestampset();
}


/*
 * Add a new object to the current service actionrate list
 */
static void addactionrate(ActionRate_T ar) {
        ActionRate_T a;

        ASSERT(ar);

        if (ar->count > ar->cycle)
                yyerror2("The number of restarts must be less than poll cycles");
        if (ar->count <= 0 || ar->cycle <= 0)
                yyerror2("Zero or negative values not allowed in a action rate statement");

        NEW(a);
        a->count  = ar->count;
        a->cycle  = ar->cycle;
        a->action = ar->action;

        a->next = current->actionratelist;
        current->actionratelist = a;

        reset_actionrateset();
}



/*
 * Add a new Size object to the current service size list
 */
static void addsize(Size_T ss) {
        Size_T s;
        struct stat buf;

        ASSERT(ss);

        NEW(s);
        s->operator     = ss->operator;
        s->size         = ss->size;
        s->action       = ss->action;
        s->test_changes = ss->test_changes;
        /* Get the initial size for future comparision, if the file exists */
        if (s->test_changes) {
                s->initialized = ! stat(current->path, &buf);
                if (s->initialized)
                        s->size = (unsigned long long)buf.st_size;
        }

        s->next = current->sizelist;
        current->sizelist = s;

        reset_sizeset();
}


/*
 * Add a new Uptime object to the current service uptime list
 */
static void adduptime(Uptime_T uu) {
        Uptime_T u;

        ASSERT(uu);

        NEW(u);
        u->operator = uu->operator;
        u->uptime = uu->uptime;
        u->action = uu->action;

        u->next = current->uptimelist;
        current->uptimelist = u;

        reset_uptimeset();
}


/*
 * Add a new Pid object to the current service pid list
 */
static void addpid(Pid_T pp) {
        ASSERT(pp);

        Pid_T p;
        NEW(p);
        p->action = pp->action;

        p->next = current->pidlist;
        current->pidlist = p;

        reset_pidset();
}


/*
 * Add a new PPid object to the current service ppid list
 */
static void addppid(Pid_T pp) {
        ASSERT(pp);

        Pid_T p;
        NEW(p);
        p->action = pp->action;

        p->next = current->ppidlist;
        current->ppidlist = p;

        reset_ppidset();
}


/*
 * Add a new Fsflag object to the current service fsflag list
 */
static void addfsflag(Fsflag_T ff) {
        ASSERT(ff);

        Fsflag_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->fsflaglist;
        current->fsflaglist = f;

        reset_fsflagset();
}


/*
 * Add a new Nonexist object to the current service list
 */
static void addnonexist(Nonexist_T ff) {
        ASSERT(ff);

        Nonexist_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->nonexistlist;
        current->nonexistlist = f;

        reset_nonexistset();
}


/*
 * Set Checksum object in the current service
 */
static void addchecksum(Checksum_T cs) {
        ASSERT(cs);

        cs->initialized = true;

        if (! *cs->hash) {
                if (cs->type == Hash_Unknown)
                        cs->type = Hash_Default;
                if (! (Util_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
                        /* If the file doesn't exist, set dummy value */
                        snprintf(cs->hash, sizeof(cs->hash), cs->type == Hash_Md5 ? "00000000000000000000000000000000" : "0000000000000000000000000000000000000000");
                        cs->initialized = false;
                        yywarning2("Cannot compute a checksum for file %s", current->path);
                }
        }

        int len = cleanup_hash_string(cs->hash);
        if (cs->type == Hash_Unknown) {
                if (len == 32) {
                        cs->type = Hash_Md5;
                } else if (len == 40) {
                        cs->type = Hash_Sha1;
                } else {
                        yyerror2("Unknown checksum type [%s] for file %s", cs->hash, current->path);
                        reset_checksumset();
                        return;
                }
        } else if ((cs->type == Hash_Md5 && len != 32) || (cs->type == Hash_Sha1 && len != 40)) {
                yyerror2("Invalid checksum [%s] for file %s", cs->hash, current->path);
                reset_checksumset();
                return;
        }

        Checksum_T c;
        NEW(c);
        c->type         = cs->type;
        c->test_changes = cs->test_changes;
        c->initialized  = cs->initialized;
        c->action       = cs->action;
        snprintf(c->hash, sizeof(c->hash), "%s", cs->hash);

        current->checksum = c;

        reset_checksumset();

}


/*
 * Set Perm object in the current service
 */
static void addperm(Perm_T ps) {
        ASSERT(ps);

        Perm_T p;
        NEW(p);
        p->action = ps->action;
        p->test_changes = ps->test_changes;
        if (p->test_changes) {
                if (! File_exist(current->path))
                        DEBUG("The path '%s' used in the PERMISSION statement refer to a non-existing object\n", current->path);
                else if ((p->perm = File_mod(current->path)) < 0)
                        yyerror2("Cannot get the timestamp for '%s'", current->path);
                else
                        p->perm &= 07777;
        } else {
                p->perm = ps->perm;
        }
        current->perm = p;
        reset_permset();
}


static void addlinkstatus(Service_T s, LinkStatus_T L) {
        ASSERT(L);
        
        LinkStatus_T l;
        NEW(l);
        l->action = L->action;
        
        l->next = s->linkstatuslist;
        s->linkstatuslist = l;
        
        reset_linkstatusset();
}


static void addlinkspeed(Service_T s, LinkSpeed_T L) {
        ASSERT(L);
        
        LinkSpeed_T l;
        NEW(l);
        l->action = L->action;
        
        l->next = s->linkspeedlist;
        s->linkspeedlist = l;
        
        reset_linkspeedset();
}


static void addlinksaturation(Service_T s, LinkSaturation_T L) {
        ASSERT(L);
        
        LinkSaturation_T l;
        NEW(l);
        l->operator = L->operator;
        l->limit = L->limit;
        l->action = L->action;
        
        l->next = s->linksaturationlist;
        s->linksaturationlist = l;
        
        reset_linksaturationset();
}


/*
 * Return Bandwidth object
 */
static void addbandwidth(Bandwidth_T *list, Bandwidth_T b) {
        ASSERT(list);
        ASSERT(b);

        if (b->rangecount * b->range > 24 * Time_Hour) {
                yyerror2("Maximum range for total test is 24 hours");
        } else if (b->range == Time_Minute && b->rangecount > 60) {
                yyerror2("Maximum value for [minute(s)] unit is 60");
        } else if (b->range == Time_Hour && b->rangecount > 24) {
                yyerror2("Maximum value for [hour(s)] unit is 24");
        } else if (b->range == Time_Day && b->rangecount > 1) {
                yyerror2("Maximum value for [day(s)] unit is 1");
        } else {
                if (b->range == Time_Day) {
                        // translate last day -> last 24 hours
                        b->rangecount = 24;
                        b->range = Time_Hour;
                }
                Bandwidth_T bandwidth;
                NEW(bandwidth);
                bandwidth->operator = b->operator;
                bandwidth->limit = b->limit;
                bandwidth->rangecount = b->rangecount;
                bandwidth->range = b->range;
                bandwidth->action = b->action;
                bandwidth->next = *list;
                *list = bandwidth;
        }
        reset_bandwidthset();
}


static void appendmatch(Match_T *list, Match_T item) {
        if (*list) {
                /* Find the end of the list (keep the same patterns order as in the config file) */
                Match_T last;
                for (last = *list; last->next; last = last->next)
                        ;
                last->next = item;
        } else {
                *list = item;
        }
}


/*
 * Set Match object in the current service
 */
static void addmatch(Match_T ms, int actionnumber, int linenumber) {
        Match_T m;

        ASSERT(ms);

        NEW(m);
#ifdef HAVE_REGEX_H
        NEW(m->regex_comp);
#endif

        m->match_string = ms->match_string;
        m->match_path   = ms->match_path ? Str_dup(ms->match_path) : NULL;
        m->action       = ms->action;
        m->not          = ms->not;
        m->ignore       = ms->ignore;
        m->next         = NULL;

        addeventaction(&(m->action), actionnumber, Action_Ignored);

#ifdef HAVE_REGEX_H
        int reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, ms->regex_comp, errbuf, STRLEN);
                if (m->match_path != NULL)
                        yyerror2("Regex parsing error: %s on line %i of", errbuf, linenumber);
                else
                        yyerror2("Regex parsing error: %s", errbuf);
        }
#endif
        appendmatch(m->ignore ? &current->matchignorelist : &current->matchlist, m);
}


static void addmatchpath(Match_T ms, Action_Type actionnumber) {

        FILE *handle;
        command_t savecommand = NULL;
        char buf[2048];
        int linenumber = 0;

        ASSERT(ms->match_path);

        handle = fopen(ms->match_path, "r");
        if (handle == NULL) {
                yyerror2("Cannot read regex match file (%s)", ms->match_path);
                return;
        }

        while (! feof(handle)) {
                size_t len;

                linenumber++;

                if (! fgets(buf, 2048, handle))
                        continue;

                len = strlen(buf);

                if (len == 0 || buf[0] == '\n')
                        continue;

                if (buf[len-1] == '\n')
                        buf[len-1] = 0;

                ms->match_string = Str_dup(buf);

                /* The addeventaction() called from addmatch() will reset the
                 * command1 to NULL, but we need to duplicate the command for
                 * each line, thus need to save it here */
                if (actionnumber == Action_Exec) {
                        if (command1 == NULL) {
                                ASSERT(savecommand);
                                command1 = savecommand;
                        }
                        savecommand = copycommand(command1);
                }
                
                addmatch(ms, actionnumber, linenumber);
        }
        
        if (actionnumber == Action_Exec && savecommand)
                gccmd(&savecommand);
        
        fclose(handle);
}


/*
 * Set exit status test object in the current service
 */
static void addstatus(Status_T status) {
        Status_T s;
        ASSERT(status);
        NEW(s);
        s->initialized = status->initialized;
        s->return_value = status->return_value;
        s->operator = status->operator;
        s->action = status->action;
        s->next = current->statuslist;
        current->statuslist = s;

        reset_statusset();
}


/*
 * Set Uid object in the current service
 */
static Uid_T adduid(Uid_T u) {
        ASSERT(u);

        Uid_T uid;
        NEW(uid);
        uid->uid = u->uid;
        uid->action = u->action;
        reset_uidset();
        return uid;
}


/*
 * Set Gid object in the current service
 */
static Gid_T addgid(Gid_T g) {
        ASSERT(g);

        Gid_T gid;
        NEW(gid);
        gid->gid = g->gid;
        gid->action = g->action;
        reset_gidset();
        return gid;
}


/*
 * Add a new filesystem to the current service's filesystem list
 */
static void addfilesystem(Filesystem_T ds) {
        Filesystem_T dev;

        ASSERT(ds);

        NEW(dev);
        dev->resource           = ds->resource;
        dev->operator           = ds->operator;
        dev->limit_absolute     = ds->limit_absolute;
        dev->limit_percent      = ds->limit_percent;
        dev->action             = ds->action;

        dev->next               = current->filesystemlist;
        current->filesystemlist = dev;
        
        reset_filesystemset();

}


/*
 * Add a new icmp object to the current service's icmp list
 */
static void addicmp(Icmp_T is) {
        Icmp_T icmp;

        ASSERT(is);

        NEW(icmp);
        icmp->family       = is->family;
        icmp->type         = is->type;
        icmp->size         = is->size;
        icmp->count        = is->count;
        icmp->timeout      = is->timeout;
        icmp->action       = is->action;
        icmp->outgoing     = is->outgoing;
        icmp->is_available = Connection_Init;
        icmp->response     = -1;

        icmp->next         = current->icmplist;
        current->icmplist  = icmp;

        reset_icmpset();
}


/*
 * Set EventAction object
 */
static void addeventaction(EventAction_T *_ea, Action_Type failed, Action_Type succeeded) {
        EventAction_T ea;

        ASSERT(_ea);

        NEW(ea);
        NEW(ea->failed);
        NEW(ea->succeeded);

        ea->failed->id = failed;
        ea->failed->repeat = repeat1;
        ea->failed->count = rate1.count;
        ea->failed->cycles = rate1.cycles;
        if (failed == Action_Exec) {
                ASSERT(command1);
                ea->failed->exec = command1;
                command1 = NULL;
        }

        ea->succeeded->id = succeeded;
        ea->succeeded->repeat = repeat2;
        ea->succeeded->count = rate2.count;
        ea->succeeded->cycles = rate2.cycles;
        if (succeeded == Action_Exec) {
                ASSERT(command2);
                ea->succeeded->exec = command2;
                command2 = NULL;
        }
        *_ea = ea;
        reset_rateset(&rate);
        reset_rateset(&rate1);
        reset_rateset(&rate2);
        repeat = repeat1 = repeat2 = 0;
}


/*
 * Add a generic protocol handler to
 */
static void addgeneric(Port_T port, char *send, char *expect) {
        Generic_T g = port->parameters.generic.sendexpect;
        if (! g) {
                NEW(g);
                port->parameters.generic.sendexpect = g;
        } else {
                while (g->next)
                        g = g->next;
                NEW(g->next);
                g = g->next;
        }
        if (send) {
                g->send = send;
                g->expect = NULL;
        } else if (expect) {
#ifdef HAVE_REGEX_H
                int reg_return;
                NEW(g->expect);
                reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
                FREE(expect);
                if (reg_return != 0) {
                        char errbuf[STRLEN];
                        regerror(reg_return, g->expect, errbuf, STRLEN);
                        yyerror2("Regex parsing error: %s", errbuf);
                }
#else
                g->expect = expect;
#endif
                g->send = NULL;
        }
}


/*
 * Add the current command object to the current service object's
 * start or stop program.
 */
static void addcommand(int what, unsigned timeout) {

        switch (what) {
                case START:   current->start = command; break;
                case STOP:    current->stop = command; break;
                case RESTART: current->restart = command; break;
        }

        command->timeout = timeout;
        
        command = NULL;

}


/*
 * Add a new argument to the argument list
 */
static void addargument(char *argument) {

        ASSERT(argument);

        if (! command) {

                NEW(command);
                check_exec(argument);

        }

        command->arg[command->length++] = argument;
        command->arg[command->length] = NULL;

        if (command->length >= ARGMAX)
                yyerror("Exceeded maximum number of program arguments");

}


/*
 * Setup a url request for the current port object
 */
static void prepare_urlrequest(URL_T U) {

        ASSERT(U);

        /* Only the HTTP protocol is supported for URLs currently. See also the lexer if this is to be changed in the future */
        portset.protocol = Protocol_get(Protocol_HTTP);

        if (urlrequest == NULL)
                NEW(urlrequest);
        urlrequest->url = U;
        portset.hostname = Str_dup(U->hostname);
        portset.target.net.port = U->port;
        portset.url_request = urlrequest;
        portset.type = Socket_Tcp;
        portset.parameters.http.request = Str_cat("%s%s%s", U->path, U->query ? "?" : "", U->query ? U->query : "");
        if (IS(U->protocol, "https"))
                sslset.flags = SSL_Enabled;
}


/*
 * Set the url request for a port
 */
static void  seturlrequest(int operator, char *regex) {

        ASSERT(regex);

        if (! urlrequest)
                NEW(urlrequest);
        urlrequest->operator = operator;
        #ifdef HAVE_REGEX_H
        {
                int reg_return;
                NEW(urlrequest->regex);
                reg_return = regcomp(urlrequest->regex, regex, REG_NOSUB|REG_EXTENDED);
                if (reg_return != 0) {
                        char errbuf[STRLEN];
                        regerror(reg_return, urlrequest->regex, errbuf, STRLEN);
                        yyerror2("Regex parsing error: %s", errbuf);
                }
        }
        #else
        urlrequest->regex = Str_dup(regex);
        #endif

}


/*
 * Add a new data recipient server to the mmonit server list
 */
static void addmmonit(Mmonit_T mmonit) {
        ASSERT(mmonit->url);

        Mmonit_T c;
        NEW(c);
        c->url = mmonit->url;
        c->ssl.flags = sslset.flags;
        c->ssl.verify = sslset.verify;
        c->ssl.allowSelfSigned = sslset.allowSelfSigned;
        c->ssl.minimumValidDays = sslset.minimumValidDays;
        c->ssl.version = sslset.version;
        c->ssl.checksumType = sslset.checksumType;
        c->ssl.checksum = sslset.checksum;
        c->ssl.clientpemfile = sslset.clientpemfile;
        c->ssl.CACertificateFile = sslset.CACertificateFile;
        c->ssl.CACertificatePath = sslset.CACertificatePath;
        if (IS(c->url->protocol, "https")) {
#ifdef HAVE_OPENSSL
                c->ssl.flags = SSL_Enabled;
#else
                yyerror("SSL check cannot be activated -- SSL disabled");
#endif
        }
        c->timeout = mmonit->timeout;
        c->next = NULL;

        if (Run.mmonits) {
                Mmonit_T C;
                for (C = Run.mmonits; C->next; C = C->next)
                        /* Empty */ ;
                C->next = c;
        } else {
                Run.mmonits = c;
        }
        reset_sslset();
        reset_mmonitset();
}


/*
 * Add a new smtp server to the mail server list
 */
static void addmailserver(MailServer_T mailserver) {

        MailServer_T s;

        ASSERT(mailserver->host);

        NEW(s);
        s->host        = mailserver->host;
        s->port        = mailserver->port;
        s->username    = mailserver->username;
        s->password    = mailserver->password;

        if (sslset.flags && (mailserver->port == 25 || mailserver->port == 587))
                s->ssl.flags = SSL_StartTLS;
        else
                s->ssl.flags = sslset.flags;
        s->ssl.verify = sslset.verify;
        s->ssl.allowSelfSigned = sslset.allowSelfSigned;
        s->ssl.minimumValidDays = sslset.minimumValidDays;
        s->ssl.version = sslset.version;
        s->ssl.checksumType = sslset.checksumType;
        s->ssl.checksum = sslset.checksum;
        s->ssl.clientpemfile = sslset.clientpemfile;
        s->ssl.CACertificateFile = sslset.CACertificateFile;
        s->ssl.CACertificatePath = sslset.CACertificatePath;
        reset_sslset();

        s->next = NULL;

        if (Run.mailservers) {
                MailServer_T l;
                for (l = Run.mailservers; l->next; l = l->next)
                        /* empty */;
                l->next = s;
        } else {
                Run.mailservers = s;
        }
        reset_mailserverset();
}


/*
 * Return uid if found on the system. If the parameter user is NULL
 * the uid parameter is used for looking up the user id on the system,
 * otherwise the user parameter is used.
 */
static uid_t get_uid(char *user, uid_t uid) {
        char buf[4096];
        struct passwd pwd, *result = NULL;
        if (user) {
                if (getpwnam_r(user, &pwd, buf, sizeof(buf), &result) != 0 || ! result) {
                        yyerror2("Requested user not found on the system");
                        return(0);
                }
        } else {
                if (getpwuid_r(uid, &pwd, buf, sizeof(buf), &result) != 0 || ! result) {
                        yyerror2("Requested uid not found on the system");
                        return(0);
                }
        }
        return(pwd.pw_uid);
}


/*
 * Return gid if found on the system. If the parameter group is NULL
 * the gid parameter is used for looking up the group id on the system,
 * otherwise the group parameter is used.
 */
static gid_t get_gid(char *group, gid_t gid) {
        struct group *grd;

        if (group) {
                grd = getgrnam(group);

                if (! grd) {
                        yyerror2("Requested group not found on the system");
                        return(0);
                }

        } else {

                if (! (grd = getgrgid(gid))) {
                        yyerror2("Requested gid not found on the system");
                        return(0);
                }

        }

        return(grd->gr_gid);

}


/*
 * Add a new user id to the current command object.
 */
static void addeuid(uid_t uid) {
        if (! getuid()) {
                command->has_uid = true;
                command->uid = uid;
        } else {
                yyerror("UID statement requires root privileges");
        }
}


/*
 * Add a new group id to the current command object.
 */
static void addegid(gid_t gid) {
        if (! getuid()) {
                command->has_gid = true;
                command->gid = gid;
        } else {
                yyerror("GID statement requires root privileges");
        }
}


/*
 * Reset the logfile if changed
 */
static void setlogfile(char *logfile) {
        if (Run.files.log) {
                if (IS(Run.files.log, logfile)) {
                        FREE(logfile);
                        return;
                } else {
                        FREE(Run.files.log);
                }
        }
        Run.files.log = logfile;
}


/*
 * Reset the pidfile if changed
 */
static void setpidfile(char *pidfile) {
        if (Run.files.pid) {
                if (IS(Run.files.pid, pidfile)) {
                        FREE(pidfile);
                        return;
                } else {
                        FREE(Run.files.pid);
                }
        }
        Run.files.pid = pidfile;
}


/*
 * Read a apache htpasswd file and add credentials found for username
 */
static void addhtpasswdentry(char *filename, char *username, Digest_Type dtype) {
        char *ht_username = NULL;
        char *ht_passwd = NULL;
        char buf[STRLEN];
        FILE *handle = NULL;
        int credentials_added = 0;

        ASSERT(filename);

        handle = fopen(filename, "r");

        if ( handle == NULL ) {
                if (username != NULL)
                        yyerror2("Cannot read htpasswd (%s)", filename);
                else
                        yyerror2("Cannot read htpasswd", filename);
                return;
        }

        while (! feof(handle)) {
                char *colonindex = NULL;

                if (! fgets(buf, STRLEN, handle))
                        continue;

                Str_rtrim(buf);
                Str_curtail(buf, "#");

                if ( NULL == (colonindex = strchr(buf, ':')))
                continue;

                ht_passwd = Str_dup(colonindex+1);
                *colonindex = '\0';

                /* In case we have a file in /etc/passwd or /etc/shadow style we
                 *  want to remove ":.*$" and Crypt and MD5 hashed dont have a colon
                 */

                if ( (NULL != (colonindex = strchr(ht_passwd, ':'))) && ( dtype != Digest_Cleartext) )
                *colonindex = '\0';

                ht_username = Str_dup(buf);

                if (username == NULL) {
                        if (addcredentials(ht_username, ht_passwd, dtype, false))
                                credentials_added++;
                } else if (Str_cmp(username, ht_username) == 0)  {
                        if (addcredentials(ht_username, ht_passwd, dtype, false))
                                credentials_added++;
                } else {
                        FREE(ht_passwd);
                        FREE(ht_username);
                }
        }

        if (credentials_added == 0) {
                if ( username == NULL )
                        yywarning2("htpasswd file (%s) has no usable credentials", filename);
                else
                        yywarning2("htpasswd file (%s) has no usable credentials for user %s", filename, username);
        }
        fclose(handle);
}


#ifdef HAVE_LIBPAM
static void addpamauth(char* groupname, int readonly) {
        Auth_T prev = NULL;

        ASSERT(groupname);

        if (! Run.httpd.credentials)
                NEW(Run.httpd.credentials);

        Auth_T c = Run.httpd.credentials;
        do {
                if (c->groupname != NULL && IS(c->groupname, groupname)) {
                        yywarning2("PAM group %s was added already, entry ignored", groupname);
                        FREE(groupname);
                        return;
                }
                prev = c;
                c = c->next;
        } while (c != NULL);

        NEW(prev->next);
        c = prev->next;

        c->next        = NULL;
        c->uname       = NULL;
        c->passwd      = NULL;
        c->groupname   = groupname;
        c->digesttype  = Digest_Pam;
        c->is_readonly = readonly;

        DEBUG("Adding PAM group '%s'\n", groupname);

        return;
}
#endif


/*
 * Add Basic Authentication credentials
 */
static boolean_t addcredentials(char *uname, char *passwd, Digest_Type dtype, boolean_t readonly) {
        Auth_T c;

        ASSERT(uname);
        ASSERT(passwd);

        if (strlen(passwd) > MAX_CONSTANT_TIME_STRING_LENGTH) {
                yyerror2("Password for user %s is too long, maximum %d allowed", uname, MAX_CONSTANT_TIME_STRING_LENGTH);
                FREE(uname);
                FREE(passwd);
                return false;
        }

        if (! Run.httpd.credentials) {
                NEW(Run.httpd.credentials);
                c = Run.httpd.credentials;
        } else {
                if (Util_getUserCredentials(uname) != NULL) {
                        yywarning2("Credentials for user %s were already added, entry ignored", uname);
                        FREE(uname);
                        FREE(passwd);
                        return false;
                }
                c = Run.httpd.credentials;
                while (c->next != NULL)
                        c = c->next;
                NEW(c->next);
                c = c->next;
        }

        c->next        = NULL;
        c->uname       = uname;
        c->passwd      = passwd;
        c->groupname   = NULL;
        c->digesttype  = dtype;
        c->is_readonly = readonly;

        DEBUG("Adding credentials for user '%s'\n", uname);

        return true;

}


/*
 * Set the syslog and the facilities to be used
 */
static void setsyslog(char *facility) {

        if (! Run.files.log || ihp.logfile) {
                ihp.logfile = true;
                setlogfile(Str_dup("syslog"));
                Run.flags |= Run_UseSyslog;
                Run.flags |= Run_Log;
        }

        if (facility) {
                if (IS(facility,"log_local0"))
                        Run.facility = LOG_LOCAL0;
                else if (IS(facility, "log_local1"))
                        Run.facility = LOG_LOCAL1;
                else if (IS(facility, "log_local2"))
                        Run.facility = LOG_LOCAL2;
                else if (IS(facility, "log_local3"))
                        Run.facility = LOG_LOCAL3;
                else if (IS(facility, "log_local4"))
                        Run.facility = LOG_LOCAL4;
                else if (IS(facility, "log_local5"))
                        Run.facility = LOG_LOCAL5;
                else if (IS(facility, "log_local6"))
                        Run.facility = LOG_LOCAL6;
                else if (IS(facility, "log_local7"))
                        Run.facility = LOG_LOCAL7;
                else if (IS(facility, "log_daemon"))
                        Run.facility = LOG_DAEMON;
                else
                        yyerror2("Invalid syslog facility");
        } else {
                Run.facility = LOG_USER;
        }

}


/*
 * Reset the current sslset for reuse
 */
static void reset_sslset() {
        memset(&sslset, 0, sizeof(struct SslOptions_T));
        sslset.version = sslset.verify = sslset.allowSelfSigned = sslset.minimumValidDays = -1;
}


/*
 * Reset the current mailset for reuse
 */
static void reset_mailset() {
        memset(&mailset, 0, sizeof(struct mymail));
}


/*
 * Reset the mailserver set to default values
 */
static void reset_mailserverset() {
        memset(&mailserverset, 0, sizeof(struct mymailserver));
        mailserverset.port = PORT_SMTP;
}


/*
 * Reset the mmonit set to default values
 */
static void reset_mmonitset() {
        memset(&mmonitset, 0, sizeof(struct mymmonit));
        mmonitset.timeout = Run.limits.networkTimeout;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
        memset(&portset, 0, sizeof(struct myport));
        portset.socket = -1;
        portset.type = Socket_Tcp;
        portset.family = Socket_Ip;
        portset.timeout = Run.limits.networkTimeout;
        portset.retry = 1;
        portset.protocol = Protocol_get(Protocol_DEFAULT);
        urlrequest = NULL;
}


/*
 * Reset the Proc set to default values
 */
static void reset_resourceset() {
        resourceset.resource_id = 0;
        resourceset.limit = 0;
        resourceset.action = NULL;
        resourceset.operator = Operator_Equal;
}


/*
 * Reset the Timestamp set to default values
 */
static void reset_timestampset() {
        timestampset.operator = Operator_Equal;
        timestampset.time = 0;
        timestampset.test_changes = false;
        timestampset.initialized = false;
        timestampset.action = NULL;
}


/*
 * Reset the ActionRate set to default values
 */
static void reset_actionrateset() {
        actionrateset.count = 0;
        actionrateset.cycle = 0;
        actionrateset.action = NULL;
}


/*
 * Reset the Size set to default values
 */
static void reset_sizeset() {
        sizeset.operator = Operator_Equal;
        sizeset.size = 0;
        sizeset.test_changes = false;
        sizeset.action = NULL;
}


/*
 * Reset the Uptime set to default values
 */
static void reset_uptimeset() {
        uptimeset.operator = Operator_Equal;
        uptimeset.uptime = 0;
        uptimeset.action = NULL;
}


static void reset_linkstatusset() {
        linkstatusset.action = NULL;
}


static void reset_linkspeedset() {
        linkspeedset.action = NULL;
}


static void reset_linksaturationset() {
        linksaturationset.limit = 0.;
        linksaturationset.operator = Operator_Equal;
        linksaturationset.action = NULL;
}


/*
 * Reset the Bandwidth set to default values
 */
static void reset_bandwidthset() {
        bandwidthset.operator = Operator_Equal;
        bandwidthset.limit = 0ULL;
        bandwidthset.action = NULL;
}


/*
 * Reset the Pid set to default values
 */
static void reset_pidset() {
        pidset.action = NULL;
}


/*
 * Reset the PPid set to default values
 */
static void reset_ppidset() {
        ppidset.action = NULL;
}


/*
 * Reset the Fsflag set to default values
 */
static void reset_fsflagset() {
        fsflagset.action = NULL;
}


/*
 * Reset the Nonexist set to default values
 */
static void reset_nonexistset() {
        nonexistset.action = NULL;
}


/*
 * Reset the Checksum set to default values
 */
static void reset_checksumset() {
        checksumset.type         = Hash_Unknown;
        checksumset.test_changes = false;
        checksumset.action       = NULL;
        *checksumset.hash        = 0;
}


/*
 * Reset the Perm set to default values
 */
static void reset_permset() {
        permset.test_changes = false;
        permset.perm = 0;
        permset.action = NULL;
}


/*
 * Reset the Status set to default values
 */
static void reset_statusset() {
        statusset.initialized = false;
        statusset.return_value = 0;
        statusset.operator = Operator_Equal;
        statusset.action = NULL;
}


/*
 * Reset the Uid set to default values
 */
static void reset_uidset() {
        uidset.uid = 0;
        uidset.action = NULL;
}


/*
 * Reset the Gid set to default values
 */
static void reset_gidset() {
        gidset.gid = 0;
        gidset.action = NULL;
}


/*
 * Reset the Filesystem set to default values
 */
static void reset_filesystemset() {
        filesystemset.resource = 0;
        filesystemset.operator = Operator_Equal;
        filesystemset.limit_absolute = -1;
        filesystemset.limit_percent = -1.;
        filesystemset.action = NULL;
}


/*
 * Reset the ICMP set to default values
 */
static void reset_icmpset() {
        icmpset.type = ICMP_ECHO;
        icmpset.size = ICMP_SIZE;
        icmpset.count = ICMP_ATTEMPT_COUNT;
        icmpset.timeout = Run.limits.networkTimeout;
        icmpset.action = NULL;
}


/*
 * Reset the Rate set to default values
 */
static void reset_rateset(struct myrate *rate) {
        rate->count = 1;
        rate->cycles = 1;
}


/* ---------------------------------------------------------------- Checkers */


/*
 * Check for unique service name
 */
static void check_name(char *name) {
        ASSERT(name);

        if (Util_existService(name) || (current && IS(name, current->name)))
                yyerror2("Service name conflict, %s already defined", name);
        if (name && *name == '/')
                yyerror2("Service name '%s' must not start with '/' -- ", name);
}


/*
 * Permission statement semantic check
 */
static int check_perm(int perm) {
        int result;
        char *status;
        char buf[STRLEN];

        snprintf(buf, STRLEN, "%d", perm);

        result = (int)strtol(buf, &status, 8);

        if (*status != '\0' || result < 0 || result > 07777)
                yyerror2("Permission statements must have an octal value between 0 and 7777");

        return result;
}


/*
 * Check the dependency graph for errors
 * by doing a topological sort, thereby finding any cycles.
 * Assures that graph is a Directed Acyclic Graph (DAG).
 */
static void check_depend() {
        Service_T s;
        Service_T depends_on = NULL;
        Service_T* dlt = &depend_list; /* the current tail of it                                 */
        boolean_t done;                /* no unvisited nodes left?                               */
        boolean_t found_some;          /* last iteration found anything new ?                    */
        depend_list = NULL;            /* depend_list will be the topological sorted servicelist */

        do {
                done = true;
                found_some = false;
                for (s = servicelist; s; s = s->next) {
                        Dependant_T d;
                        if (s->visited)
                                continue;
                        done = false; // still unvisited nodes
                        depends_on = NULL;
                        for (d = s->dependantlist; d; d = d->next) {
                                Service_T dp = Util_getService(d->dependant);
                                if (! dp) {
                                        LogError("Depend service '%s' is not defined in the control file\n", d->dependant);
                                        exit(1);
                                }
                                if (! dp->visited) {
                                        depends_on = dp;
                                }
                        }

                        if (! depends_on) {
                                s->visited = true;
                                found_some = true;
                                *dlt = s;
                                dlt = &s->next_depend;
                        }
                }
        } while (found_some && ! done);

        if (! done) {
                ASSERT(depends_on);
                LogError("Found a depend loop in the control file involving the service '%s'\n", depends_on->name);
                exit(1);
        }

        ASSERT(depend_list);
        servicelist = depend_list;

        for (s = depend_list; s; s = s->next_depend)
                s->next = s->next_depend;
}


/*
 * Check if the executable exist
 */
static void check_exec(char *exec) {
        if (! File_exist(exec))
                yywarning2("Program does not exist:");
        else if (! File_isExecutable(exec))
                yywarning2("Program is not executable:");
}


/* Return a valid max forward value for SIP header */
static int verifyMaxForward(int mf) {
        if (mf >= 0 && mf <= 255)
                return mf;
        yywarning2("SIP max forward is outside the range [0..255]. Setting max forward to 70");
        return 70;
}


/* -------------------------------------------------------------------- Misc */


/*
 * Cleans up a hash string, tolower and remove byte separators
 */
static int cleanup_hash_string(char *hashstring) {
        int i = 0, j = 0;

        ASSERT(hashstring);

        while (hashstring[i]) {
                if (isxdigit((int)hashstring[i])) {
                        hashstring[j] = tolower((int)hashstring[i]);
                        j++;
                }
                i++;
        }
        hashstring[j] = 0;
        return j;
}


/* Return deep copy of the command */
static command_t copycommand(command_t source) {
        int i;
        command_t copy = NULL;

        NEW(copy);
        copy->length = source->length;
        copy->has_uid = source->has_uid;
        copy->uid = source->uid;
        copy->has_gid = source->has_gid;
        copy->gid = source->gid;
        copy->timeout = source->timeout;
        for (i = 0; i < copy->length; i++)
        copy->arg[i] = Str_dup(source->arg[i]);
        copy->arg[copy->length] = NULL;

        return copy;
}

