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

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include "net.h"
#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "ProcessTree.h"
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


#line 346 "src/y.tab.c" /* yacc.c:339  */

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
    TERMINAL = 274,
    BATCH = 275,
    READONLY = 276,
    CLEARTEXT = 277,
    MD5HASH = 278,
    SHA1HASH = 279,
    CRYPT = 280,
    DELAY = 281,
    PEMFILE = 282,
    ENABLE = 283,
    DISABLE = 284,
    SSL = 285,
    CLIENTPEMFILE = 286,
    ALLOWSELFCERTIFICATION = 287,
    SELFSIGNED = 288,
    VERIFY = 289,
    CERTIFICATE = 290,
    CACERTIFICATEFILE = 291,
    CACERTIFICATEPATH = 292,
    VALID = 293,
    INTERFACE = 294,
    LINK = 295,
    PACKET = 296,
    BYTEIN = 297,
    BYTEOUT = 298,
    PACKETIN = 299,
    PACKETOUT = 300,
    SPEED = 301,
    SATURATION = 302,
    UPLOAD = 303,
    DOWNLOAD = 304,
    TOTAL = 305,
    IDFILE = 306,
    STATEFILE = 307,
    SEND = 308,
    EXPECT = 309,
    CYCLE = 310,
    COUNT = 311,
    REMINDER = 312,
    REPEAT = 313,
    LIMITS = 314,
    SENDEXPECTBUFFER = 315,
    EXPECTBUFFER = 316,
    FILECONTENTBUFFER = 317,
    HTTPCONTENTBUFFER = 318,
    PROGRAMOUTPUT = 319,
    NETWORKTIMEOUT = 320,
    PIDFILE = 321,
    START = 322,
    STOP = 323,
    PATHTOK = 324,
    HOST = 325,
    HOSTNAME = 326,
    PORT = 327,
    IPV4 = 328,
    IPV6 = 329,
    TYPE = 330,
    UDP = 331,
    TCP = 332,
    TCPSSL = 333,
    PROTOCOL = 334,
    CONNECTION = 335,
    ALERT = 336,
    NOALERT = 337,
    MAILFORMAT = 338,
    UNIXSOCKET = 339,
    SIGNATURE = 340,
    TIMEOUT = 341,
    RETRY = 342,
    RESTART = 343,
    CHECKSUM = 344,
    EVERY = 345,
    NOTEVERY = 346,
    DEFAULT = 347,
    HTTP = 348,
    HTTPS = 349,
    APACHESTATUS = 350,
    FTP = 351,
    SMTP = 352,
    SMTPS = 353,
    POP = 354,
    POPS = 355,
    IMAP = 356,
    IMAPS = 357,
    CLAMAV = 358,
    NNTP = 359,
    NTP3 = 360,
    MYSQL = 361,
    DNS = 362,
    WEBSOCKET = 363,
    SSH = 364,
    DWP = 365,
    LDAP2 = 366,
    LDAP3 = 367,
    RDATE = 368,
    RSYNC = 369,
    TNS = 370,
    PGSQL = 371,
    POSTFIXPOLICY = 372,
    SIP = 373,
    LMTP = 374,
    GPS = 375,
    RADIUS = 376,
    MEMCACHE = 377,
    REDIS = 378,
    MONGODB = 379,
    SIEVE = 380,
    STRING = 381,
    PATH = 382,
    MAILADDR = 383,
    MAILFROM = 384,
    MAILSENDER = 385,
    MAILREPLYTO = 386,
    MAILSUBJECT = 387,
    MAILBODY = 388,
    SERVICENAME = 389,
    STRINGNAME = 390,
    NUMBER = 391,
    PERCENT = 392,
    LOGLIMIT = 393,
    CLOSELIMIT = 394,
    DNSLIMIT = 395,
    KEEPALIVELIMIT = 396,
    REPLYLIMIT = 397,
    REQUESTLIMIT = 398,
    STARTLIMIT = 399,
    WAITLIMIT = 400,
    GRACEFULLIMIT = 401,
    CLEANUPLIMIT = 402,
    REAL = 403,
    CHECKPROC = 404,
    CHECKFILESYS = 405,
    CHECKFILE = 406,
    CHECKDIR = 407,
    CHECKHOST = 408,
    CHECKSYSTEM = 409,
    CHECKFIFO = 410,
    CHECKPROGRAM = 411,
    CHECKNET = 412,
    THREADS = 413,
    CHILDREN = 414,
    STATUS = 415,
    ORIGIN = 416,
    VERSIONOPT = 417,
    RESOURCE = 418,
    MEMORY = 419,
    TOTALMEMORY = 420,
    LOADAVG1 = 421,
    LOADAVG5 = 422,
    LOADAVG15 = 423,
    SWAP = 424,
    MODE = 425,
    ACTIVE = 426,
    PASSIVE = 427,
    MANUAL = 428,
    ONREBOOT = 429,
    NOSTART = 430,
    LASTSTATE = 431,
    CPU = 432,
    TOTALCPU = 433,
    CPUUSER = 434,
    CPUSYSTEM = 435,
    CPUWAIT = 436,
    GROUP = 437,
    REQUEST = 438,
    DEPENDS = 439,
    BASEDIR = 440,
    SLOT = 441,
    EVENTQUEUE = 442,
    SECRET = 443,
    HOSTHEADER = 444,
    UID = 445,
    EUID = 446,
    GID = 447,
    MMONIT = 448,
    INSTANCE = 449,
    USERNAME = 450,
    PASSWORD = 451,
    TIMESTAMP = 452,
    CHANGED = 453,
    MILLISECOND = 454,
    SECOND = 455,
    MINUTE = 456,
    HOUR = 457,
    DAY = 458,
    MONTH = 459,
    SSLAUTO = 460,
    SSLV2 = 461,
    SSLV3 = 462,
    TLSV1 = 463,
    TLSV11 = 464,
    TLSV12 = 465,
    CERTMD5 = 466,
    AUTO = 467,
    BYTE = 468,
    KILOBYTE = 469,
    MEGABYTE = 470,
    GIGABYTE = 471,
    INODE = 472,
    SPACE = 473,
    TFREE = 474,
    PERMISSION = 475,
    SIZE = 476,
    MATCH = 477,
    NOT = 478,
    IGNORE = 479,
    ACTION = 480,
    UPTIME = 481,
    EXEC = 482,
    UNMONITOR = 483,
    PING = 484,
    PING4 = 485,
    PING6 = 486,
    ICMP = 487,
    ICMPECHO = 488,
    NONEXIST = 489,
    EXIST = 490,
    INVALID = 491,
    DATA = 492,
    RECOVERED = 493,
    PASSED = 494,
    SUCCEEDED = 495,
    URL = 496,
    CONTENT = 497,
    PID = 498,
    PPID = 499,
    FSFLAG = 500,
    REGISTER = 501,
    CREDENTIALS = 502,
    URLOBJECT = 503,
    ADDRESSOBJECT = 504,
    TARGET = 505,
    TIMESPEC = 506,
    HTTPHEADER = 507,
    MAXFORWARD = 508,
    FIPS = 509,
    GREATER = 510,
    GREATEROREQUAL = 511,
    LESS = 512,
    LESSOREQUAL = 513,
    EQUAL = 514,
    NOTEQUAL = 515
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
#define TERMINAL 274
#define BATCH 275
#define READONLY 276
#define CLEARTEXT 277
#define MD5HASH 278
#define SHA1HASH 279
#define CRYPT 280
#define DELAY 281
#define PEMFILE 282
#define ENABLE 283
#define DISABLE 284
#define SSL 285
#define CLIENTPEMFILE 286
#define ALLOWSELFCERTIFICATION 287
#define SELFSIGNED 288
#define VERIFY 289
#define CERTIFICATE 290
#define CACERTIFICATEFILE 291
#define CACERTIFICATEPATH 292
#define VALID 293
#define INTERFACE 294
#define LINK 295
#define PACKET 296
#define BYTEIN 297
#define BYTEOUT 298
#define PACKETIN 299
#define PACKETOUT 300
#define SPEED 301
#define SATURATION 302
#define UPLOAD 303
#define DOWNLOAD 304
#define TOTAL 305
#define IDFILE 306
#define STATEFILE 307
#define SEND 308
#define EXPECT 309
#define CYCLE 310
#define COUNT 311
#define REMINDER 312
#define REPEAT 313
#define LIMITS 314
#define SENDEXPECTBUFFER 315
#define EXPECTBUFFER 316
#define FILECONTENTBUFFER 317
#define HTTPCONTENTBUFFER 318
#define PROGRAMOUTPUT 319
#define NETWORKTIMEOUT 320
#define PIDFILE 321
#define START 322
#define STOP 323
#define PATHTOK 324
#define HOST 325
#define HOSTNAME 326
#define PORT 327
#define IPV4 328
#define IPV6 329
#define TYPE 330
#define UDP 331
#define TCP 332
#define TCPSSL 333
#define PROTOCOL 334
#define CONNECTION 335
#define ALERT 336
#define NOALERT 337
#define MAILFORMAT 338
#define UNIXSOCKET 339
#define SIGNATURE 340
#define TIMEOUT 341
#define RETRY 342
#define RESTART 343
#define CHECKSUM 344
#define EVERY 345
#define NOTEVERY 346
#define DEFAULT 347
#define HTTP 348
#define HTTPS 349
#define APACHESTATUS 350
#define FTP 351
#define SMTP 352
#define SMTPS 353
#define POP 354
#define POPS 355
#define IMAP 356
#define IMAPS 357
#define CLAMAV 358
#define NNTP 359
#define NTP3 360
#define MYSQL 361
#define DNS 362
#define WEBSOCKET 363
#define SSH 364
#define DWP 365
#define LDAP2 366
#define LDAP3 367
#define RDATE 368
#define RSYNC 369
#define TNS 370
#define PGSQL 371
#define POSTFIXPOLICY 372
#define SIP 373
#define LMTP 374
#define GPS 375
#define RADIUS 376
#define MEMCACHE 377
#define REDIS 378
#define MONGODB 379
#define SIEVE 380
#define STRING 381
#define PATH 382
#define MAILADDR 383
#define MAILFROM 384
#define MAILSENDER 385
#define MAILREPLYTO 386
#define MAILSUBJECT 387
#define MAILBODY 388
#define SERVICENAME 389
#define STRINGNAME 390
#define NUMBER 391
#define PERCENT 392
#define LOGLIMIT 393
#define CLOSELIMIT 394
#define DNSLIMIT 395
#define KEEPALIVELIMIT 396
#define REPLYLIMIT 397
#define REQUESTLIMIT 398
#define STARTLIMIT 399
#define WAITLIMIT 400
#define GRACEFULLIMIT 401
#define CLEANUPLIMIT 402
#define REAL 403
#define CHECKPROC 404
#define CHECKFILESYS 405
#define CHECKFILE 406
#define CHECKDIR 407
#define CHECKHOST 408
#define CHECKSYSTEM 409
#define CHECKFIFO 410
#define CHECKPROGRAM 411
#define CHECKNET 412
#define THREADS 413
#define CHILDREN 414
#define STATUS 415
#define ORIGIN 416
#define VERSIONOPT 417
#define RESOURCE 418
#define MEMORY 419
#define TOTALMEMORY 420
#define LOADAVG1 421
#define LOADAVG5 422
#define LOADAVG15 423
#define SWAP 424
#define MODE 425
#define ACTIVE 426
#define PASSIVE 427
#define MANUAL 428
#define ONREBOOT 429
#define NOSTART 430
#define LASTSTATE 431
#define CPU 432
#define TOTALCPU 433
#define CPUUSER 434
#define CPUSYSTEM 435
#define CPUWAIT 436
#define GROUP 437
#define REQUEST 438
#define DEPENDS 439
#define BASEDIR 440
#define SLOT 441
#define EVENTQUEUE 442
#define SECRET 443
#define HOSTHEADER 444
#define UID 445
#define EUID 446
#define GID 447
#define MMONIT 448
#define INSTANCE 449
#define USERNAME 450
#define PASSWORD 451
#define TIMESTAMP 452
#define CHANGED 453
#define MILLISECOND 454
#define SECOND 455
#define MINUTE 456
#define HOUR 457
#define DAY 458
#define MONTH 459
#define SSLAUTO 460
#define SSLV2 461
#define SSLV3 462
#define TLSV1 463
#define TLSV11 464
#define TLSV12 465
#define CERTMD5 466
#define AUTO 467
#define BYTE 468
#define KILOBYTE 469
#define MEGABYTE 470
#define GIGABYTE 471
#define INODE 472
#define SPACE 473
#define TFREE 474
#define PERMISSION 475
#define SIZE 476
#define MATCH 477
#define NOT 478
#define IGNORE 479
#define ACTION 480
#define UPTIME 481
#define EXEC 482
#define UNMONITOR 483
#define PING 484
#define PING4 485
#define PING6 486
#define ICMP 487
#define ICMPECHO 488
#define NONEXIST 489
#define EXIST 490
#define INVALID 491
#define DATA 492
#define RECOVERED 493
#define PASSED 494
#define SUCCEEDED 495
#define URL 496
#define CONTENT 497
#define PID 498
#define PPID 499
#define FSFLAG 500
#define REGISTER 501
#define CREDENTIALS 502
#define URLOBJECT 503
#define ADDRESSOBJECT 504
#define TARGET 505
#define TIMESPEC 506
#define HTTPHEADER 507
#define MAXFORWARD 508
#define FIPS 509
#define GREATER 510
#define GREATEROREQUAL 511
#define LESS 512
#define LESSOREQUAL 513
#define EQUAL 514
#define NOTEQUAL 515

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 306 "src/p.y" /* yacc.c:355  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 914 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 929 "src/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  267
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  229
/* YYNRULES -- Number of rules.  */
#define YYNRULES  722
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1318

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   515

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
       2,     2,     2,     2,     2,     2,     2,     2,   263,     2,
       2,     2,     2,     2,   264,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   265,     2,   266,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   261,     2,   262,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   356,   356,   357,   360,   361,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   392,   393,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   419,   420,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   443,   444,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   465,   466,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     486,   487,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   505,   506,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   526,   527,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   544,   545,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   565,   566,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   582,   586,   589,   595,
     605,   610,   611,   614,   619,   625,   628,   629,   632,   635,
     638,   641,   644,   647,   652,   657,   665,   668,   673,   676,
     680,   686,   691,   696,   704,   707,   708,   711,   717,   718,
     721,   724,   725,   726,   727,   730,   731,   736,   753,   756,
     759,   760,   763,   767,   771,   775,   779,   782,   792,   804,
     816,   822,   823,   826,   840,   847,   856,   857,   860,   864,
     868,   872,   880,   888,   892,   898,   907,   914,   929,   930,
     933,   942,   953,   954,   957,   960,   963,   964,   965,   966,
     969,   973,   979,   980,   983,   984,   985,   986,   989,   990,
     993,   994,   997,  1000,  1013,  1014,  1017,  1018,  1019,  1022,
    1023,  1026,  1027,  1030,  1033,  1038,  1039,  1042,  1043,  1046,
    1051,  1056,  1063,  1068,  1071,  1079,  1083,  1087,  1091,  1095,
    1095,  1102,  1102,  1109,  1109,  1116,  1116,  1123,  1130,  1131,
    1134,  1140,  1141,  1144,  1147,  1150,  1157,  1166,  1171,  1174,
    1179,  1184,  1189,  1197,  1203,  1218,  1223,  1230,  1239,  1242,
    1247,  1250,  1256,  1259,  1264,  1265,  1268,  1269,  1272,  1275,
    1280,  1284,  1288,  1291,  1296,  1299,  1304,  1309,  1312,  1317,
    1326,  1327,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,
    1338,  1339,  1340,  1343,  1350,  1351,  1354,  1355,  1356,  1357,
    1358,  1359,  1362,  1368,  1369,  1372,  1373,  1374,  1375,  1376,
    1379,  1385,  1390,  1395,  1402,  1403,  1406,  1407,  1408,  1409,
    1412,  1415,  1420,  1425,  1431,  1434,  1439,  1442,  1446,  1451,
    1452,  1455,  1456,  1459,  1464,  1467,  1470,  1473,  1476,  1479,
    1482,  1487,  1490,  1495,  1498,  1501,  1504,  1507,  1510,  1513,
    1516,  1520,  1523,  1526,  1531,  1534,  1537,  1542,  1545,  1548,
    1551,  1554,  1557,  1560,  1563,  1566,  1569,  1572,  1577,  1581,
    1587,  1588,  1591,  1594,  1597,  1600,  1605,  1606,  1609,  1612,
    1617,  1618,  1621,  1629,  1634,  1637,  1642,  1647,  1648,  1651,
    1654,  1659,  1660,  1663,  1664,  1665,  1666,  1667,  1670,  1676,
    1682,  1687,  1693,  1694,  1699,  1704,  1705,  1708,  1713,  1714,
    1717,  1720,  1724,  1728,  1732,  1736,  1740,  1744,  1748,  1752,
    1756,  1762,  1769,  1775,  1781,  1788,  1793,  1798,  1803,  1808,
    1811,  1816,  1819,  1824,  1827,  1832,  1837,  1842,  1848,  1856,
    1862,  1863,  1866,  1870,  1873,  1877,  1882,  1885,  1888,  1889,
    1892,  1893,  1894,  1895,  1896,  1897,  1898,  1899,  1900,  1901,
    1902,  1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,
    1912,  1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1923,
    1924,  1927,  1928,  1931,  1932,  1933,  1934,  1937,  1941,  1945,
    1951,  1954,  1957,  1963,  1966,  1970,  1975,  1982,  1985,  1986,
    1989,  1992,  1999,  2008,  2014,  2015,  2018,  2019,  2020,  2021,
    2022,  2025,  2031,  2032,  2035,  2036,  2037,  2038,  2041,  2046,
    2053,  2060,  2061,  2062,  2063,  2066,  2071,  2076,  2081,  2088,
    2093,  2100,  2107,  2114,  2121,  2122,  2123,  2126,  2127,  2130,
    2136,  2143,  2144,  2145,  2146,  2147,  2148,  2149,  2150,  2153,
    2154,  2155,  2156,  2157,  2158,  2161,  2162,  2163,  2165,  2166,
    2168,  2171,  2174,  2182,  2185,  2188,  2192,  2195,  2198,  2201,
    2206,  2217,  2228,  2238,  2250,  2251,  2256,  2263,  2264,  2269,
    2276,  2279,  2282,  2285,  2290,  2294,  2301,  2307,  2308,  2309,
    2312,  2319,  2326,  2333,  2342,  2351,  2358,  2367,  2376,  2382,
    2383,  2384,  2385,  2386,  2389,  2394,  2401,  2409,  2416,  2424,
    2432,  2439,  2445,  2452,  2460,  2463,  2469,  2475,  2482,  2488,
    2495,  2501,  2508,  2514,  2521,  2527,  2532,  2540,  2548,  2556,
    2564,  2572,  2580,  2590,  2598,  2606,  2614,  2622,  2630,  2640,
    2643,  2644,  2645
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "THEN", "OR", "FAILED",
  "SET", "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER", "HTTPD",
  "ALLOW", "REJECTOPT", "ADDRESS", "INIT", "TERMINAL", "BATCH", "READONLY",
  "CLEARTEXT", "MD5HASH", "SHA1HASH", "CRYPT", "DELAY", "PEMFILE",
  "ENABLE", "DISABLE", "SSL", "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION",
  "SELFSIGNED", "VERIFY", "CERTIFICATE", "CACERTIFICATEFILE",
  "CACERTIFICATEPATH", "VALID", "INTERFACE", "LINK", "PACKET", "BYTEIN",
  "BYTEOUT", "PACKETIN", "PACKETOUT", "SPEED", "SATURATION", "UPLOAD",
  "DOWNLOAD", "TOTAL", "IDFILE", "STATEFILE", "SEND", "EXPECT", "CYCLE",
  "COUNT", "REMINDER", "REPEAT", "LIMITS", "SENDEXPECTBUFFER",
  "EXPECTBUFFER", "FILECONTENTBUFFER", "HTTPCONTENTBUFFER",
  "PROGRAMOUTPUT", "NETWORKTIMEOUT", "PIDFILE", "START", "STOP", "PATHTOK",
  "HOST", "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE", "UDP", "TCP",
  "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT", "MAILFORMAT",
  "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY", "RESTART", "CHECKSUM",
  "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS", "APACHESTATUS", "FTP",
  "SMTP", "SMTPS", "POP", "POPS", "IMAP", "IMAPS", "CLAMAV", "NNTP",
  "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP", "LDAP2", "LDAP3",
  "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY", "SIP", "LMTP", "GPS",
  "RADIUS", "MEMCACHE", "REDIS", "MONGODB", "SIEVE", "STRING", "PATH",
  "MAILADDR", "MAILFROM", "MAILSENDER", "MAILREPLYTO", "MAILSUBJECT",
  "MAILBODY", "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS",
  "CHILDREN", "STATUS", "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY",
  "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE",
  "ACTIVE", "PASSIVE", "MANUAL", "ONREBOOT", "NOSTART", "LASTSTATE", "CPU",
  "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST",
  "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER",
  "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD",
  "TIMESTAMP", "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR", "DAY",
  "MONTH", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12",
  "CERTMD5", "AUTO", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE",
  "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE",
  "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6",
  "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "ADDRESSOBJECT", "TARGET",
  "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER",
  "GREATEROREQUAL", "LESS", "LESSOREQUAL", "EQUAL", "NOTEQUAL", "'{'",
  "'}'", "':'", "'@'", "'['", "']'", "$accept", "cfgfile",
  "statement_list", "statement", "optproclist", "optproc", "optfilelist",
  "optfile", "optfilesyslist", "optfilesys", "optdirlist", "optdir",
  "opthostlist", "opthost", "optnetlist", "optnet", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optprogramlist", "optprogram",
  "setalert", "setdaemon", "setterminal", "startdelay", "setinit",
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
  "mode", "onreboot", "group", "depend", "dependlist", "dependant",
  "statusvalue", "resourceprocess", "resourceprocesslist",
  "resourceprocessopt", "resourcesystem", "resourcesystemlist",
  "resourcesystemopt", "resourcecpuproc", "resourcecpu", "resourcecpuid",
  "resourcemem", "resourceswap", "resourcethreads", "resourcechild",
  "resourceload", "resourceloadavg", "value", "timestamp", "operator",
  "time", "totaltime", "currenttime", "repeat", "action", "action1",
  "action2", "rateXcycles", "rateXYcycles", "rate1", "rate2", "recovery",
  "checksum", "hashtype", "inode", "space", "fsflag", "unit", "permission",
  "match", "matchflagnot", "size", "uid", "euid", "gid", "linkstatus",
  "linkspeed", "linksaturation", "upload", "download", "icmptype",
  "reminder", YY_NULLPTR
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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -714

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-714)))

#define YYTABLE_NINF -316

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     450,   104,   -94,   -20,     5,    70,    96,   132,   141,   160,
     167,   131,   450,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
      10,    11,   157,   273,  -714,   309,   106,   213,   228,   150,
     290,   316,   337,   236,   247,   251,  -714,   -35,   113,   435,
     439,   497,   529,  -714,   505,   507,    80,  -714,  -714,   594,
     225,   670,   840,  1109,  1165,  1199,   840,  1260,   568,  -714,
     525,   537,    -5,  -714,   476,   487,  -714,  -714,  -714,  -714,
    -714,   526,  -714,  -714,   420,   494,   483,  -714,   251,   379,
     386,   413,  1078,   621,   553,   560,   394,   400,   579,   581,
     587,   591,   434,   601,   623,   302,   434,   434,   625,   434,
     -51,   508,   409,    -3,   645,   654,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,    13,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
      56,  -135,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,    47,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,    65,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,    23,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,   146,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   919,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   186,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,   691,   794,  -714,   688,   307,   696,  -714,   764,  -714,
    -714,    19,   -19,  -714,  -714,  -714,  -714,  -714,   588,   592,
    -714,  -714,   -71,  -714,   667,  -714,   324,   379,   611,  -714,
     420,  1078,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,   756,  -714,   724,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,   -15,  -714,  -714,
    -714,   332,   784,   527,   527,   527,   527,  -714,  -714,  -714,
     527,   527,   346,   683,   527,   807,  -714,  -714,  -714,  -714,
    -714,  -714,   527,   293,   293,  -714,   293,   868,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   654,  -714,
     668,  1078,   621,    15,   527,    79,   527,   683,   444,   711,
    -714,   444,   713,    94,  -144,   488,   552,   -62,   198,   892,
     527,   527,   527,   662,   897,   527,  -714,  -714,  -714,  -714,
     682,  -714,  -714,   527,  -714,  -714,  -714,   527,   779,  -714,
     805,  -714,   681,   855,   -33,   826,  -714,  -714,  -714,  -714,
    -714,  -714,   828,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,   758,   829,  -714,   477,   219,   693,   705,   706,   707,
     715,   716,  -714,  -714,   723,   726,   732,   733,   739,  -714,
    -714,  -714,  -714,  -714,  -714,   844,   851,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,   323,   831,   884,  -714,   949,   871,
     -32,   120,   204,  -714,  -714,  -714,   879,   881,   237,   265,
     345,   761,   939,  -714,   876,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,   877,   880,   242,   252,   883,   890,   891,   891,
     891,   893,    53,  -714,  -714,  -714,  1010,   299,   894,   216,
    -714,   216,  -714,   216,  -714,  -714,  -714,  1078,   917,  -714,
    -714,  -714,   895,   928,   912,   891,   891,   891,   931,   913,
    -714,  -714,   609,   636,   704,   753,   891,   527,   914,   527,
     300,  -714,  -714,  -714,   958,   891,   918,   923,   924,   527,
     527,   891,   314,  -714,  1048,   925,   926,   891,  -714,   307,
    -714,     2,  -714,  -714,  -714,  -714,  -714,  -714,     6,   938,
      35,    86,   841,   853,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,   981,   984,  -714,  -714,  -714,   943,   869,
     859,   944,   952,   585,   946,   953,   954,   955,   956,  -714,
     901,  -714,   884,   621,  -714,   902,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,   891,   891,   891,   891,   891,   891,
    -714,   959,  -714,   573,  1039,  -714,  -714,   960,  -714,   526,
     966,   526,   967,   968,  1101,  1103,  1105,   664,  -714,  1058,
     396,  -714,  -714,   915,  -714,  -714,  -714,   992,   884,   891,
     -12,   664,  1111,  1112,  1114,   891,   526,   891,   891,   891,
     891,  -714,  -714,  -714,  -714,  1129,   999,   755,   353,  1002,
     526,    74,    74,    74,   903,  -714,  1135,  1004,   111,   137,
    1011,  1012,  1141,  1013,   526,   396,  1019,   891,  1152,    46,
     904,   904,  -714,  1040,  1038,  1042,  1043,   908,  1046,  1047,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   464,
     464,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   526,
     526,   526,   526,   710,  -714,   621,  -714,  -714,  1169,  1170,
    1173,  1175,  1176,  1178,    54,  -714,    75,  1059,  1061,   556,
    1292,  1052,  1057,  -714,  -714,  -714,  -714,  -714,  -714,  1187,
    1189,  -714,  -714,  -714,  -714,  -714,  -714,   396,   396,   396,
    -714,  -714,  -714,  -714,  -714,   891,  -714,  -714,  -714,  -714,
    -714,   434,  -714,  -714,  1191,  -714,   884,   621,  1193,  1070,
    1196,   891,   396,   396,   396,  1206,   891,  1209,  1210,  1211,
    1215,   396,   757,   891,  1216,  1085,   526,   891,   891,  1097,
    1089,  1091,  1094,  -714,  -714,  -714,  -714,  -714,  1226,  1234,
    1235,  -714,    74,   396,   891,  1044,  1044,  1044,  1044,   156,
     161,   396,  -714,  -714,  1191,  -714,  1237,   396,  -714,  1117,
    1119,  -714,  1122,  1123,  1124,  1125,  1126,  1236,  1131,  1132,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,   396,   396,   396,   396,   396,   396,    49,   444,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  1255,  1136,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  1256,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,   498,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   199,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  1064,  -714,   396,   356,  -714,  -714,  1191,
    1264,   193,  1262,  -714,   621,  -714,   396,   891,   396,  1266,
    -714,  1191,  -714,   396,  1268,   396,   396,   396,   396,  -714,
     891,  1269,  1271,   396,   891,   891,  1272,  1273,  -714,  -714,
    1082,  -714,   396,   396,   396,  1279,  1191,  1280,  -714,   891,
     891,   891,   891,   285,   455,   514,   518,  1191,  -714,   396,
    -714,  -714,  -714,  1126,  1126,  1126,  1236,  -714,  1126,  -714,
    -714,  -714,  -714,  -714,  1191,  1191,  1191,  1191,  1191,  1191,
    1031,  1162,   396,  -714,   396,   694,    20,    20,  1167,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   498,
    -714,   717,   717,   717,  1166,  1171,  1159,  1174,   199,  -714,
     292,  1108,  -714,  1191,  -714,  -714,  -714,   396,  1212,    88,
    -714,   431,  -714,  1191,  1295,  1191,   396,  -714,  -714,   396,
    -714,  -714,  -714,  -714,  1301,   396,   396,  1191,  1302,  1303,
     396,   396,  -714,  1191,  1191,  1191,   396,  -714,   396,  1304,
    1306,  1308,  1311,   393,  -714,  -714,  -714,   891,   393,   891,
     393,   891,   393,   891,  -714,  1191,  1126,  1126,  1126,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  1181,  -714,
    1191,  1191,  -714,  -714,  -714,  1192,   527,  1197,  1200,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  1183,  1194,  1195,  1198,
    1201,  1202,  1204,  1207,  1208,  1232,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,    38,  1238,
    -714,  -714,  -714,  1203,  -714,  -714,  -714,  1191,   176,  -714,
     891,   891,   891,  -714,   396,  -714,  1191,  1191,   396,  1191,
    1191,  -714,   396,   396,  1191,  1191,  -714,  -714,  -714,  1191,
    1191,   396,   396,   396,   396,   891,  1320,   891,  1327,   891,
    1328,   891,  1331,  -714,  1142,  -714,  -714,  -714,  1239,  -714,
    -714,    37,  1233,  1240,  1241,  1242,  1243,  1245,  1289,  1291,
    1294,  1296,  -714,  -714,  -714,  -714,  -714,  -714,  1316,  -714,
    -714,  1341,  1367,  1371,  1191,  -714,  -714,  1191,  -714,  -714,
    1191,  1191,  -714,  -714,  -714,  -714,  1191,  1191,  1191,  1191,
    1422,   396,  1424,   396,  1427,   396,  1430,   396,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,   396,   396,   396,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,   396,  1191,   396,  1191,   396,  1191,
     396,  1191,  -714,  -714,  -714,  -714,  1191,  -714,  1191,  -714,
    1191,  -714,  1191,  -714,  -714,  -714,  -714,  -714
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    19,    21,
      22,    10,    11,    17,    18,    16,    12,     7,    13,    14,
      15,    32,    55,    75,    93,   110,   125,   142,   156,   173,
       0,     0,     0,     0,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   559,     0,     0,
       0,     0,     0,   334,     0,     0,     0,     1,     5,    23,
      24,    25,    26,    27,    31,    28,    29,    30,   206,   205,
     191,   262,   513,   258,     0,     0,   190,   230,   211,   212,
     196,   679,   213,   526,     0,     0,     0,   218,   214,   225,
       0,     0,     0,   720,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      44,    45,    46,    37,    38,    39,    43,    47,    48,   559,
     525,    49,    50,    51,    52,    53,    54,    40,    41,    42,
     694,   694,    56,    57,    58,    59,    60,    62,    64,    63,
      71,    72,    73,    74,    61,    68,    65,    70,    69,    66,
      67,     0,    76,    77,    78,    79,    80,    82,    81,    86,
      87,    88,    89,    90,    91,    92,    83,    84,    85,     0,
      94,    95,    96,    97,    98,   100,   102,   101,   106,   107,
     108,   109,    99,   103,   104,   105,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,   126,   127,   128,   129,   135,   139,   136,   137,
     138,   140,   141,   130,   131,   132,   133,   134,     0,   143,
     144,   145,   146,   155,   147,   148,   149,   150,   151,   152,
     153,   154,   157,   158,   159,   160,   161,   163,   165,   164,
     169,   170,   171,   172,   162,   166,   167,   168,     0,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,     0,     0,   189,     0,   260,     0,   259,   357,   272,
     278,     0,     0,   680,   681,   682,   683,   194,     0,     0,
     565,   566,     0,   561,   208,   210,   217,   225,     0,   215,
       0,     0,   543,   531,   532,   545,   546,   553,   551,   534,
     555,   533,   554,   550,   557,   539,   541,   556,   547,   552,
     530,   558,   537,   540,   544,   542,   536,   535,   548,   549,
     538,     0,   528,     0,   186,   323,   324,   325,   326,   329,
     328,   327,   330,   331,   335,   348,   349,   511,   344,   332,
     333,   400,     0,   621,   621,   621,   621,   614,   615,   616,
     621,   621,     0,     0,   621,   654,   584,   586,   587,   588,
     589,   590,   621,   509,   509,   527,   509,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   580,   577,   578,
       0,     0,   720,   667,   621,   667,   621,   695,     0,     0,
     695,     0,     0,     0,     0,   621,   621,     0,   400,     0,
     621,   621,   621,     0,     0,   621,   604,   601,   602,   603,
     654,   592,   597,   621,   595,   596,   594,   621,     0,   207,
       0,   262,   228,     0,     0,     0,   253,   248,   249,   250,
     251,   252,     0,   254,   266,   267,   268,   269,   263,   264,
     265,     0,     0,   256,   270,   271,     0,     0,     0,     0,
       0,     0,   227,   231,     0,     0,     0,     0,     0,   195,
     197,   563,   564,   257,   562,     0,     0,   219,   221,   222,
     223,   224,   216,   226,     0,     0,   559,   529,   721,     0,
       0,     0,   511,   345,   346,   336,     0,     0,     0,     0,
       0,     0,     0,   383,     0,   628,   622,   623,   624,   625,
     626,   627,     0,     0,     0,     0,     0,     0,   654,   654,
     654,     0,     0,   585,   655,   656,     0,     0,     0,   509,
     338,   509,   340,   509,   342,   567,   579,     0,     0,   522,
     668,   669,     0,     0,     0,   654,   654,   654,     0,     0,
     520,   521,     0,     0,     0,     0,   654,   621,     0,   621,
       0,   394,   394,   394,     0,   654,     0,     0,     0,   621,
     621,   654,     0,   593,     0,     0,     0,   654,   192,   261,
     230,   246,   355,   354,   356,   255,   514,   358,     0,     0,
       0,     0,     0,     0,   273,   274,   284,   284,   275,   293,
     294,   276,   277,     0,     0,   279,   280,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,   560,   559,   720,   722,     0,   350,   352,   351,   353,
     347,   337,   401,   403,   654,   654,   654,   654,   654,   654,
     374,     0,   360,   654,     0,   611,   612,   618,   617,   679,
     618,   679,     0,     0,     0,     0,     0,   629,   652,     0,
       0,   618,   613,     0,   339,   341,   343,     0,   559,   654,
     654,   629,     0,     0,     0,   654,   679,   654,   654,   654,
     654,   689,   688,   693,   692,     0,     0,   654,     0,   618,
     679,   654,   654,   654,     0,   394,     0,     0,   679,   679,
       0,     0,     0,   618,   679,     0,     0,   654,     0,     0,
     246,   246,   247,     0,     0,     0,     0,   317,   305,     0,
     299,   290,   296,   292,   298,   289,   291,   295,   297,   283,
     282,   237,   234,   235,   232,   233,   238,   239,   236,   679,
     679,   679,   679,     0,   220,   720,   187,   512,     0,     0,
       0,     0,     0,     0,   654,   402,   654,     0,     0,     0,
       0,     0,     0,   384,   385,   386,   387,   388,   389,     0,
       0,   606,   605,   608,   607,   598,   599,     0,     0,     0,
     630,   631,   632,   633,   634,   654,   653,   647,   648,   643,
     646,     0,   649,   650,   660,   510,   559,   720,     0,     0,
       0,   654,     0,     0,     0,     0,   654,     0,     0,     0,
       0,     0,   654,   654,     0,   618,   679,   654,   654,     0,
       0,     0,     0,   395,   396,   397,   398,   399,     0,     0,
       0,   719,   654,     0,   654,   638,   638,   638,   638,   679,
     679,     0,   610,   609,   660,   600,     0,     0,   229,     0,
       0,   243,   306,   307,   308,     0,     0,   321,     0,     0,
     302,   285,   286,   287,   288,   198,   199,   200,   201,   202,
     203,   188,     0,     0,     0,     0,     0,     0,     0,     0,
     379,   381,   380,   375,   377,   378,   376,     0,     0,   404,
     405,   370,   372,   371,   361,   362,   363,   368,   364,   365,
     367,   369,   366,     0,   448,   449,   408,   406,   409,   415,
     471,   471,     0,   418,   456,   456,   432,   433,   421,   422,
     423,   429,   430,   460,   416,     0,   437,   417,   424,   425,
     438,   440,   441,   442,   431,   467,   443,   444,   485,   446,
     439,   426,   434,     0,   516,     0,     0,   502,   503,   660,
       0,   640,     0,   583,   720,   523,     0,   654,     0,     0,
     620,   660,   697,     0,     0,     0,     0,     0,     0,   678,
     654,     0,     0,     0,   654,   654,     0,     0,   508,   505,
       0,   506,     0,     0,     0,     0,   660,     0,   639,   654,
     654,   654,   654,     0,     0,     0,     0,   660,   591,     0,
     582,   244,   245,     0,     0,     0,   321,   320,   310,   318,
     322,   304,   300,   301,   660,   660,   660,   660,   660,   660,
     241,     0,     0,   413,     0,   407,   419,   420,     0,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   414,
     488,   435,   436,   427,     0,     0,     0,     0,   447,   450,
     428,   445,   515,   660,   518,   517,   501,     0,     0,   640,
     644,     0,   524,   660,     0,   660,     0,   685,   666,     0,
     687,   686,   691,   690,     0,     0,     0,   660,     0,     0,
       0,     0,   507,   660,   660,   660,     0,   704,     0,     0,
       0,     0,     0,     0,   635,   636,   637,   654,     0,   654,
       0,   654,     0,   654,   705,   660,   312,   314,   316,   303,
     319,   698,   699,   700,   701,   702,   703,   242,     0,   519,
     660,   660,   411,   412,   410,     0,   621,     0,     0,   482,
     472,   475,   473,   474,   476,   490,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489,   458,   459,   457,
     462,   463,   461,   454,   452,   455,   453,   451,     0,     0,
     469,   470,   468,     0,   487,   486,   382,   660,     0,   645,
     657,   657,   657,   684,     0,   664,   660,   660,     0,   660,
     660,   670,     0,     0,   660,   660,   391,   392,   393,   660,
     660,     0,     0,     0,     0,   654,     0,   654,     0,   654,
       0,   654,     0,   581,     0,   373,   359,   480,     0,   479,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   465,   464,   466,   484,   504,   641,     0,   658,
     659,     0,     0,     0,   660,   619,   696,   660,   672,   671,
     660,   660,   675,   674,   390,   706,   660,   660,   660,   660,
       0,     0,     0,     0,     0,     0,     0,     0,   240,   478,
     483,   477,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   642,     0,     0,     0,   665,   673,   677,   676,
     710,   707,   716,   713,     0,   660,     0,   660,     0,   660,
       0,   660,   651,   661,   662,   663,   660,   711,   660,   708,
     660,   717,   660,   714,   712,   709,   718,   715
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -714,  -714,  -714,  1425,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  1338,
    -714,  -714,  1134,  -714,  -292,   848,  -714,   673,  -714,  -291,
     194,  -305,  -304,  -714,  -714,  -714,  1358,  1036,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   836,  -714,  -714,  -714,  1014,
    -714,  -714,  -714,  -714,  -714,  -714,  1015,  -714,  -714,  -714,
    -714,  -324,  -713,   462,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,   970,  1056,  1133,  -113,  -375,  -350,  -492,
    -329,  -296,  -714,  1408,  -714,  -714,  1409,  -714,  -714,  -714,
    -714,  -714,  -714,  -506,  -714,  -714,  -714,  -714,  -714,   718,
    -714,  -714,  -714,   719,   720,  -714,   425,   562,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   567,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,   440,   406,  -714,  -714,
    1415,  -714,  -714,  -714,  -714,  -200,   989,  -714,  -349,  -307,
    1282,   727,  -399,  1290,  1491,  -714,  -295,  -321,  -134,  1184,
    -281,  1348,  1375,  1383,  1391,  1399,  -714,  1098,  -714,  -714,
    -714,  1120,  -714,  -714,  1067,  -714,  -714,  -714,  -206,  -714,
    -714,  -714,  -201,  -714,  -157,   149,  -347,   817,  -495,   -81,
     430,  -511,  -645,  -360,  -376,  -325,  -430,  -255,  -361,  -714,
    1095,  -714,  -714,  -714,  -121,   492,  -714,  1350,  -714,   743,
    -714,   751,  -714,  -714,  -714,  -714,  -714,  -714,  -389
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    69,   126,    70,   152,    71,   172,
      72,   190,    73,   207,    74,   222,    75,   239,    76,   252,
      77,   269,    14,    15,    16,   283,    17,    18,    19,   292,
     480,    20,    21,    22,    23,    24,    25,    26,    98,    99,
     306,   487,   309,    27,   454,   291,   473,   891,  1128,   455,
     723,   456,   457,    28,    29,    82,    83,   285,   458,    30,
     464,   604,   465,   615,   605,   739,   871,   606,   607,   608,
     609,   610,   611,   872,   873,   874,   612,   866,  1013,  1014,
    1015,  1018,  1019,  1021,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   127,   128,   129,   357,   502,   358,   504,
     459,   460,   463,   130,   766,   904,   131,   764,   893,   132,
     653,   773,   213,   701,   833,   512,   652,   513,   905,   774,
    1035,  1134,   907,   775,   776,  1058,  1059,  1051,  1159,  1053,
    1162,  1170,  1171,  1060,  1172,  1036,  1140,  1141,  1142,  1143,
    1144,  1221,  1174,  1061,  1175,  1049,  1050,   133,   134,   135,
     136,   834,   835,   836,   837,   540,   505,   288,   777,   778,
     137,   896,   562,   138,   139,   140,   341,   342,   103,   302,
     303,   141,   142,   143,   144,   145,   398,   399,   280,   146,
     375,   376,   251,   430,   431,   377,   432,   433,   378,   435,
     379,   380,   381,   382,   659,   164,   522,   795,  1107,   999,
    1070,   803,   804,  1303,   534,   535,   536,  1241,   963,   165,
     553,   183,   184,   185,   297,   166,   167,   409,   168,   147,
     148,   149,   233,   234,   235,   236,   237,   705,   344
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     584,   490,   491,   383,   384,   402,   386,   503,   539,   541,
     640,   543,   564,   549,   488,   489,   495,   523,   524,   525,
     497,   484,    78,   526,   527,   720,   721,   531,   724,   725,
     418,   726,   434,   503,   503,   537,   503,   436,   550,   551,
      58,   474,   809,   475,   476,   477,   478,   640,   100,   640,
     466,   640,   467,   468,   413,   469,   470,   554,   298,   559,
     299,   300,   301,   403,   393,   731,   702,   703,   568,   570,
     854,   499,   413,   576,   577,   578,   556,   466,   582,   467,
     468,   286,   469,   470,   442,   387,   585,  1030,   410,   888,
     586,   829,   898,   592,   636,   593,   100,   113,   664,   665,
     666,   566,   550,   551,   637,   442,   548,   411,   668,  1135,
     888,   355,   356,    40,    59,    41,   733,    42,    43,   114,
     732,    81,    44,    45,   532,   682,   683,   684,   767,   768,
     830,    67,   727,   728,    46,   555,   695,    79,   591,    60,
     771,   772,   957,   958,   959,   706,  1068,    80,   899,   900,
     769,   712,   845,   419,   770,    47,    48,   718,   556,   362,
     831,   771,   772,    49,  1232,    50,  1233,   970,   971,   972,
      51,   734,   394,   395,   497,   500,   979,   501,   847,   104,
    1136,   471,   105,   362,   542,    52,   544,    53,   101,   669,
     532,   483,   362,   420,   421,   422,   423,  1003,   996,   842,
     388,   362,  1005,  1137,    61,   508,  1007,   510,   471,  1138,
     532,   532,  1010,   484,   758,   759,   760,   761,   762,   763,
     696,   202,   698,   779,   434,   264,   102,   497,   150,   436,
      62,  1237,   710,   711,   598,   552,   400,  1024,  1025,  1026,
    1027,  1028,  1029,   479,   756,   414,   638,   613,   614,   808,
     810,  1068,   677,   404,   405,   815,   639,   817,   818,   819,
     820,   722,   404,   417,   415,   416,    63,   824,   506,  1054,
     729,   838,   839,   840,   401,    64,   555,   406,   500,   407,
     501,   472,   362,    81,   508,  1139,   510,   856,   373,  1270,
     499,    54,   116,   117,    65,   832,   889,    55,   408,   556,
     557,    66,   538,  1271,   603,  1120,    52,   118,   858,   361,
    1063,  1065,  1238,   119,   552,   120,   121,   889,   748,   355,
     356,  1073,   362,  1075,   293,   294,   295,   296,  1078,    86,
    1080,  1081,  1082,  1083,   897,   106,   913,   442,  1087,   674,
      88,   675,   443,   676,   424,    84,   437,  1093,  1094,  1095,
     293,   294,   295,   296,   442,    89,   497,    85,    56,   443,
    1055,  1056,   633,   644,  1115,   960,   881,    87,   661,   293,
     294,   295,   296,   645,   293,   294,   295,   296,   657,   538,
     672,   969,  1057,   500,   438,   501,   974,  1130,   660,  1131,
     658,   646,   981,   982,   500,   122,   501,   986,   987,   123,
     658,   647,   506,  1120,  1120,  1120,   500,   124,   501,   125,
     486,    90,   995,   700,   997,   894,   507,   910,   965,   355,
     356,  1103,  1177,   797,   798,   714,    91,   571,   572,   573,
     574,  1186,    95,    96,  1187,   671,   699,   799,   362,   511,
    1189,  1190,  1064,    92,   800,  1194,  1195,   658,   658,   151,
     713,  1199,   298,  1200,   299,   300,   301,   895,     1,   911,
     363,   364,   658,   797,   798,    93,   365,   366,   367,   368,
     369,   648,   890,   892,   901,   903,   156,   799,   194,   370,
     371,   649,   256,   500,   800,   501,  1104,  1105,  1106,   825,
    1031,   868,   598,  1008,   599,   869,   870,    94,   755,    97,
     372,   658,   444,   445,   107,   600,   601,   602,   108,  1109,
    1111,  1113,   446,   447,   448,   449,   450,   451,   452,   453,
     347,   348,   508,   509,   510,   373,   349,   350,   374,   446,
     447,   448,   449,   450,   451,   452,   453,  1074,   782,  1244,
     784,   826,  1168,  1247,   807,  1169,   110,  1250,  1251,   298,
    1084,   299,   300,   301,  1088,  1089,  1256,  1257,  1258,  1259,
     355,   356,   603,   186,   203,   816,   109,  1038,   265,  1099,
    1100,  1101,  1102,   511,   111,  1072,   112,   640,   281,   828,
     390,   391,   392,   801,   802,   631,  1069,   846,   848,   528,
     529,  1108,   282,   853,  1104,  1105,  1106,   115,  1066,     2,
       3,     4,     5,     6,     7,     8,     9,    10,  1205,   284,
    1077,   503,   289,  1207,   290,  1209,  1295,  1211,  1297,   305,
    1299,   304,  1301,   801,   802,   308,   767,   768,   875,   876,
     877,   878,   916,   917,   918,  1097,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1114,   310,   769,  1306,
    1110,  1308,   770,  1310,  1112,  1312,  1104,  1105,  1106,   771,
     772,   116,   117,  1121,  1122,  1123,  1124,  1125,  1126,  1180,
    1181,  1182,   964,   171,   311,    52,   118,  1206,   343,  1208,
     345,  1210,   119,  1212,   120,   121,   515,   346,   961,  1116,
    1117,  1118,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1176,   560,   561,   985,   351,   567,   352,   532,
     579,   580,  1183,   353,  1185,  1104,  1105,  1106,   354,  1104,
    1105,  1106,  1157,  1157,  1160,   515,  1191,   359,  1004,  1006,
    1132,  1133,  1196,  1197,  1198,   687,   688,   116,   117,   293,
     294,   295,   296,   516,   517,   518,   519,   520,   521,   360,
     515,    52,   118,   385,  1213,  1158,  1158,  1161,   119,   389,
     120,   121,   689,   690,   122,  1000,  1001,  1002,   123,  1215,
    1216,   569,  1302,  1302,  1302,  1260,   124,  1262,   125,  1264,
     396,  1266,   516,   517,   518,   519,   520,   521,   397,  1218,
     446,   447,   448,   449,   450,   451,   312,   453,   313,   314,
     315,   316,   317,   318,  1239,  1239,  1239,   516,   517,   518,
     519,   520,   521,   169,   187,   204,  1236,   439,   532,   266,
     440,   170,   188,   205,   441,  1245,  1246,   267,  1248,  1249,
     691,   692,   461,  1252,  1253,   462,   319,   481,  1254,  1255,
     122,   482,   320,   189,   123,   321,   365,   366,   367,   368,
     369,   425,   124,   485,   125,  1240,  1240,  1240,   493,   426,
     498,   427,   428,   429,   790,   791,   792,   793,   794,   735,
     736,   312,   514,   313,   314,   315,   316,   317,   318,   693,
     694,   737,   738,  1286,   742,   743,  1287,   744,   745,  1288,
    1289,   532,   823,   532,   980,  1290,  1291,  1292,  1293,   446,
     447,   448,   449,   450,   451,   452,   453,   116,   117,   879,
     880,   319,   444,   445,   859,   860,   322,   320,   530,   323,
     321,    52,   118,   545,  1304,  1305,  1242,  1243,   119,   547,
     120,   121,   575,   563,  1307,   565,  1309,   581,  1311,   587,
    1313,   588,   590,   532,   591,  1314,   324,  1315,   325,  1316,
     326,  1317,   594,   327,   595,   597,   618,   312,   596,   313,
     314,   315,   316,   317,   318,   363,   364,   100,   619,   620,
     621,   365,   366,   367,   368,   369,   328,   329,   622,   623,
     629,   330,   331,   332,   370,   371,   624,   630,   333,   625,
     334,   322,   335,   336,   323,   626,   627,   319,   337,   338,
     339,   340,   628,   320,   634,   642,   321,   635,   643,   650,
     122,   651,   654,   655,   123,   670,   656,   680,   496,   662,
     685,   324,   124,   325,   125,   326,   663,   532,   327,   667,
     673,   679,   312,   704,   313,   314,   315,   316,   317,   318,
     153,   173,   191,   208,   223,   240,   253,   270,   681,   686,
     697,   328,   329,   715,   707,   362,   330,   331,   332,   708,
     709,   716,   717,   333,   730,   334,   732,   335,   336,   734,
     741,   746,   319,   337,   338,   339,   340,   322,   320,   747,
     323,   321,   749,   365,   366,   367,   368,   369,   425,   750,
     751,   752,   753,   632,   780,   765,   426,   781,   427,   428,
     429,   754,   757,   783,   785,   786,   787,   324,   788,   325,
     789,   326,   206,   796,   327,   805,   812,   813,   312,   814,
     313,   314,   315,   316,   317,   318,   154,   174,   192,   209,
     224,   241,   254,   271,   821,   822,   841,   328,   329,   827,
     843,   844,   330,   331,   332,   374,   851,   849,   850,   333,
     852,   334,   322,   335,   336,   323,   855,   857,   319,   337,
     338,   339,   340,   722,   320,   862,   861,   321,   221,   863,
     864,   865,  -309,   867,   882,   883,   116,   117,   884,   678,
     885,   886,   324,   887,   325,   914,   326,   915,   953,   327,
      52,   118,   955,   954,   956,   962,   967,   119,   966,   120,
     121,   968,   238,   155,   175,   193,   210,   225,   242,   255,
     272,   973,   328,   329,   975,   976,   977,   330,   331,   332,
     978,   983,   984,   988,   333,   989,   334,   990,   335,   336,
     991,   992,   116,   117,   337,   338,   339,   340,   322,   993,
     994,   323,  1009,  1011,   998,  1012,    52,   118,  -311,  -313,
    -315,  1016,  1017,   119,   806,   120,   121,  1020,  1022,  1023,
    1032,  1034,  1033,   268,  1062,  1071,   116,   117,   324,  1067,
     325,  1076,   326,  1079,  1085,   327,  1086,  1090,  1091,   122,
      52,   118,  1092,   123,  1096,  1098,  1127,   119,  1129,   120,
     121,   124,  1163,   125,  1145,  1165,  1173,  1164,   328,   329,
    1184,  1166,  1178,   330,   331,   332,  1188,  1192,  1193,  1201,
     333,  1202,   334,  1203,   335,   336,  1204,  1214,  1217,  1222,
     337,   338,   339,   340,  1219,  1261,  1220,   116,   117,  1235,
    1223,  1224,  1263,  1265,  1225,   122,  1267,  1226,  1227,   123,
    1228,    52,   118,  1229,  1230,  1268,  1283,   124,   119,   125,
     120,   121,   157,   176,   195,   214,   226,   244,   257,   273,
     158,   177,   196,   215,   227,   245,   258,   274,  1231,   122,
    1272,  1282,  1284,   123,  1234,  1269,  1285,  1273,  1274,  1275,
    1276,   124,  1277,   125,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   159,   178,
     197,   216,   228,   246,   259,   275,  1278,  1294,  1279,  1296,
     122,  1280,  1298,  1281,   123,  1300,   307,    68,   719,   902,
     287,   492,   124,   740,   125,   160,   179,   198,   217,   229,
     247,   260,   276,   161,   180,   199,   218,   230,   248,   261,
     277,   162,   181,   200,   219,   231,   249,   262,   278,   163,
     182,   201,   220,   232,   250,   263,   279,   589,  1119,   616,
     617,   211,   212,  1167,   906,   908,   909,  1052,  1037,  1156,
     243,   641,    57,   912,   494,   533,   546,   583,   811,  1179,
     558,   412
};

static const yytype_uint16 yycheck[] =
{
     430,   306,   306,   116,   117,   139,   119,   357,   383,   384,
     502,   386,   411,   402,   306,   306,   311,   364,   365,   366,
     341,   302,    12,   370,   371,    23,    24,   374,    22,    23,
       7,    25,   238,   383,   384,   382,   386,   238,    23,    24,
     134,    60,    54,    62,    63,    64,    65,   539,    83,   541,
      31,   543,    33,    34,     7,    36,    37,   404,   129,   406,
     131,   132,   133,     7,    67,    30,   572,   573,   415,   416,
     715,    86,     7,   420,   421,   422,   220,    31,   425,    33,
      34,    86,    36,    37,    30,   136,   433,    38,   223,    35,
     437,    17,    17,   126,   126,   128,    83,    17,   528,   529,
     530,   245,    23,    24,   136,    30,   401,   242,    55,    89,
      35,   126,   127,     9,   134,    11,    30,    13,    14,    39,
      85,   126,    18,    19,   136,   555,   556,   557,    53,    54,
      56,     0,   126,   127,    30,   197,   566,   127,    89,   134,
      86,    87,   787,   788,   789,   575,    58,   136,    73,    74,
      75,   581,    41,     7,    79,    51,    52,   587,   220,   136,
      86,    86,    87,    59,   126,    61,   128,   812,   813,   814,
      66,    85,   175,   176,   495,   190,   821,   192,    41,    66,
     160,   162,    69,   136,   384,    81,   386,    83,   223,   136,
     136,   262,   136,    47,    48,    49,    50,    41,   843,   705,
     251,   136,    41,   183,   134,   190,   851,   192,   162,   189,
     136,   136,   857,   494,   644,   645,   646,   647,   648,   649,
     567,    72,   569,   653,   430,    76,   261,   548,     3,   430,
     134,    55,   579,   580,    15,   220,   223,   882,   883,   884,
     885,   886,   887,   262,   633,   198,   126,    28,    29,   679,
     680,    58,   547,   197,   198,   685,   136,   687,   688,   689,
     690,   259,   197,   198,   217,   218,   134,   697,    70,    70,
     264,   701,   702,   703,   261,   134,   197,   221,   190,   223,
     192,   262,   136,   126,   190,   265,   192,   717,   223,   252,
      86,   187,    67,    68,   134,   221,   242,   193,   242,   220,
     221,   134,    86,   266,    85,  1018,    81,    82,   262,     7,
     955,   956,   136,    88,   220,    90,    91,   242,   623,   126,
     127,   966,   136,   968,   213,   214,   215,   216,   973,    20,
     975,   976,   977,   978,   764,   222,   766,    30,   983,   539,
     127,   541,    35,   543,   198,    72,   160,   992,   993,   994,
     213,   214,   215,   216,    30,   127,   677,    84,   254,    35,
     161,   162,   496,   126,  1009,   795,   755,   261,   525,   213,
     214,   215,   216,   136,   213,   214,   215,   216,   136,    86,
     537,   811,   183,   190,   198,   192,   816,  1032,   136,  1034,
     148,   126,   822,   823,   190,   170,   192,   827,   828,   174,
     148,   136,    70,  1116,  1117,  1118,   190,   182,   192,   184,
      86,   261,   842,   570,   844,   764,    84,   766,   807,   126,
     127,   136,  1067,    67,    68,   582,   136,   229,   230,   231,
     232,  1076,   185,   186,  1079,   136,   136,    81,   136,   241,
    1085,  1086,    86,   127,    88,  1090,  1091,   148,   148,   224,
     136,  1096,   129,  1098,   131,   132,   133,   764,     8,   766,
     158,   159,   148,    67,    68,   128,   164,   165,   166,   167,
     168,   126,   764,   764,   766,   766,    70,    81,    72,   177,
     178,   136,    76,   190,    88,   192,   201,   202,   203,   136,
     889,    27,    15,   854,    17,    31,    32,   261,   632,   248,
     198,   148,   195,   196,    69,    28,    29,    30,    69,  1004,
    1005,  1006,   205,   206,   207,   208,   209,   210,   211,   212,
     126,   127,   190,   191,   192,   223,   126,   127,   226,   205,
     206,   207,   208,   209,   210,   211,   212,   967,   659,  1184,
     661,   698,   250,  1188,   678,   253,    17,  1192,  1193,   129,
     980,   131,   132,   133,   984,   985,  1201,  1202,  1203,  1204,
     126,   127,    85,    71,    72,   686,    69,    69,    76,   999,
    1000,  1001,  1002,   241,    69,   964,    69,  1069,    10,   700,
     171,   172,   173,   227,   228,   262,   961,   708,   709,   243,
     244,   136,    67,   714,   201,   202,   203,     3,   959,   149,
     150,   151,   152,   153,   154,   155,   156,   157,  1103,    72,
     971,   961,   136,  1108,   127,  1110,  1261,  1112,  1263,   136,
    1265,   127,  1267,   227,   228,   246,    53,    54,   749,   750,
     751,   752,    76,    77,    78,   996,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,  1007,   261,    75,  1294,
     136,  1296,    79,  1298,   136,  1300,   201,   202,   203,    86,
      87,    67,    68,  1024,  1025,  1026,  1027,  1028,  1029,   238,
     239,   240,   806,     3,   261,    81,    82,  1107,    57,  1109,
     127,  1111,    88,  1113,    90,    91,   198,   127,   801,  1013,
    1014,  1015,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1063,   259,   260,   826,   127,   219,   127,   136,
      48,    49,  1073,   126,  1075,   201,   202,   203,   127,   201,
     202,   203,  1051,  1052,  1053,   198,  1087,   126,   849,   850,
    1035,  1035,  1093,  1094,  1095,   126,   127,    67,    68,   213,
     214,   215,   216,   255,   256,   257,   258,   259,   260,   126,
     198,    81,    82,   128,  1115,  1051,  1052,  1053,    88,   251,
      90,    91,   126,   127,   170,   846,   847,   848,   174,  1130,
    1131,   219,  1283,  1284,  1285,  1205,   182,  1207,   184,  1209,
     135,  1211,   255,   256,   257,   258,   259,   260,   134,  1136,
     205,   206,   207,   208,   209,   210,    40,   212,    42,    43,
      44,    45,    46,    47,  1180,  1181,  1182,   255,   256,   257,
     258,   259,   260,    70,    71,    72,  1177,   126,   136,    76,
      26,    70,    71,    72,   136,  1186,  1187,    76,  1189,  1190,
     126,   127,   136,  1194,  1195,    71,    80,   249,  1199,  1200,
     170,   249,    86,     3,   174,    89,   164,   165,   166,   167,
     168,   169,   182,   186,   184,  1180,  1181,  1182,   247,   177,
     136,   179,   180,   181,   200,   201,   202,   203,   204,    28,
      29,    40,    88,    42,    43,    44,    45,    46,    47,   126,
     127,    28,    29,  1244,    15,    16,  1247,    28,    29,  1250,
    1251,   136,   137,   136,   137,  1256,  1257,  1258,  1259,   205,
     206,   207,   208,   209,   210,   211,   212,    67,    68,   199,
     200,    80,   195,   196,   720,   721,   160,    86,   235,   163,
      89,    81,    82,    55,  1284,  1285,  1181,  1182,    88,   261,
      90,    91,    40,   222,  1295,   222,  1297,    40,  1299,   160,
    1301,   136,   261,   136,    89,  1306,   190,  1308,   192,  1310,
     194,  1312,   126,   197,   126,   126,   263,    40,   200,    42,
      43,    44,    45,    46,    47,   158,   159,    83,   263,   263,
     263,   164,   165,   166,   167,   168,   220,   221,   263,   263,
     136,   225,   226,   227,   177,   178,   263,   136,   232,   263,
     234,   160,   236,   237,   163,   263,   263,    80,   242,   243,
     244,   245,   263,    86,    55,   126,    89,   136,   127,   248,
     170,    72,   136,   136,   174,     5,   136,    89,   262,   136,
      89,   190,   182,   192,   184,   194,   136,   136,   197,   136,
     136,   136,    40,    75,    42,    43,    44,    45,    46,    47,
      70,    71,    72,    73,    74,    75,    76,    77,   136,   136,
     136,   220,   221,     5,   136,   136,   225,   226,   227,   136,
     136,   136,   136,   232,   126,   234,    85,   236,   237,    85,
     127,   127,    80,   242,   243,   244,   245,   160,    86,   127,
     163,    89,   136,   164,   165,   166,   167,   168,   169,   136,
     136,   136,   136,   262,    55,   136,   177,   137,   179,   180,
     181,   200,   200,   137,   137,   137,     5,   190,     5,   192,
       5,   194,     3,    55,   197,   200,     5,     5,    40,     5,
      42,    43,    44,    45,    46,    47,    70,    71,    72,    73,
      74,    75,    76,    77,     5,   136,   233,   220,   221,   137,
       5,   137,   225,   226,   227,   226,     5,   136,   136,   232,
     137,   234,   160,   236,   237,   163,   137,     5,    80,   242,
     243,   244,   245,   259,    86,   127,   126,    89,     3,   127,
     127,   263,   126,   126,     5,     5,    67,    68,     5,   262,
       5,     5,   190,     5,   192,   126,   194,   126,   136,   197,
      81,    82,     5,   136,     5,     4,   126,    88,     5,    90,
      91,     5,     3,    70,    71,    72,    73,    74,    75,    76,
      77,     5,   220,   221,     5,     5,     5,   225,   226,   227,
       5,     5,   137,   126,   232,   136,   234,   136,   236,   237,
     136,     5,    67,    68,   242,   243,   244,   245,   160,     5,
       5,   163,     5,   126,   200,   126,    81,    82,   126,   126,
     126,   126,   126,    88,   262,    90,    91,    21,   127,   127,
       5,     5,   126,     3,   200,     3,    67,    68,   190,     5,
     192,     5,   194,     5,     5,   197,     5,     5,     5,   170,
      81,    82,   200,   174,     5,     5,   255,    88,   126,    90,
      91,   182,   126,   184,   127,   136,   188,   126,   220,   221,
       5,   127,    90,   225,   226,   227,     5,     5,     5,     5,
     232,     5,   234,     5,   236,   237,     5,   136,   126,   136,
     242,   243,   244,   245,   127,     5,   126,    67,    68,   126,
     136,   136,     5,     5,   136,   170,     5,   136,   136,   174,
     136,    81,    82,   136,   136,   203,     5,   182,    88,   184,
      90,    91,    70,    71,    72,    73,    74,    75,    76,    77,
      70,    71,    72,    73,    74,    75,    76,    77,   136,   170,
     137,    55,     5,   174,   136,   136,     5,   137,   137,   137,
     137,   182,   137,   184,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    70,    71,
      72,    73,    74,    75,    76,    77,   137,     5,   137,     5,
     170,   137,     5,   137,   174,     5,    98,    12,   590,   766,
      82,   307,   182,   607,   184,    70,    71,    72,    73,    74,
      75,    76,    77,    70,    71,    72,    73,    74,    75,    76,
      77,    70,    71,    72,    73,    74,    75,    76,    77,    70,
      71,    72,    73,    74,    75,    76,    77,   441,  1016,   465,
     465,    73,    73,  1058,   766,   766,   766,   925,   921,  1049,
      75,   502,     1,   766,   310,   375,   398,   430,   681,  1069,
     405,   151
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   268,   269,   270,   289,   290,   291,   293,   294,   295,
     298,   299,   300,   301,   302,   303,   304,   310,   320,   321,
     326,   351,   352,   353,   354,   355,   356,   357,   358,   359,
       9,    11,    13,    14,    18,    19,    30,    51,    52,    59,
      61,    66,    81,    83,   187,   193,   254,   431,   134,   134,
     134,   134,   134,   134,   134,   134,   134,     0,   270,   271,
     273,   275,   277,   279,   281,   283,   285,   287,    12,   127,
     136,   126,   322,   323,    72,    84,    20,   261,   127,   127,
     261,   136,   127,   128,   261,   185,   186,   248,   305,   306,
      83,   223,   261,   435,    66,    69,   222,    69,    69,    69,
      17,    69,    69,    17,    39,     3,    67,    68,    82,    88,
      90,    91,   170,   174,   182,   184,   272,   360,   361,   362,
     370,   373,   376,   414,   415,   416,   417,   427,   430,   431,
     432,   438,   439,   440,   441,   442,   446,   486,   487,   488,
       3,   224,   274,   360,   361,   362,   414,   427,   430,   438,
     439,   440,   441,   442,   462,   476,   482,   483,   485,   486,
     488,     3,   276,   360,   361,   362,   427,   430,   438,   439,
     440,   441,   442,   478,   479,   480,   482,   486,   488,     3,
     278,   360,   361,   362,   414,   427,   430,   438,   439,   440,
     441,   442,   462,   482,   486,   488,     3,   280,   360,   361,
     362,   370,   373,   379,   427,   430,   438,   439,   440,   441,
     442,     3,   282,   360,   361,   362,   427,   430,   438,   439,
     440,   441,   442,   489,   490,   491,   492,   493,     3,   284,
     360,   361,   362,   417,   427,   430,   438,   439,   440,   441,
     442,   449,   286,   360,   361,   362,   414,   427,   430,   438,
     439,   440,   441,   442,   462,   482,   486,   488,     3,   288,
     360,   361,   362,   427,   430,   438,   439,   440,   441,   442,
     445,    10,    67,   292,    72,   324,    86,   323,   424,   136,
     127,   312,   296,   213,   214,   215,   216,   481,   129,   131,
     132,   133,   436,   437,   127,   136,   307,   306,   246,   309,
     261,   261,    40,    42,    43,    44,    45,    46,    47,    80,
      86,    89,   160,   163,   190,   192,   194,   197,   220,   221,
     225,   226,   227,   232,   234,   236,   237,   242,   243,   244,
     245,   433,   434,    57,   495,   127,   127,   126,   127,   126,
     127,   127,   127,   126,   127,   126,   127,   363,   365,   126,
     126,     7,   136,   158,   159,   164,   165,   166,   167,   168,
     177,   178,   198,   223,   226,   447,   448,   452,   455,   457,
     458,   459,   460,   363,   363,   128,   363,   136,   251,   251,
     171,   172,   173,    67,   175,   176,   135,   134,   443,   444,
     223,   261,   435,     7,   197,   198,   221,   223,   242,   484,
     223,   242,   484,     7,   198,   217,   218,   198,     7,     7,
      47,    48,    49,    50,   198,   169,   177,   179,   180,   181,
     450,   451,   453,   454,   455,   456,   459,   160,   198,   126,
      26,   136,    30,    35,   195,   196,   205,   206,   207,   208,
     209,   210,   211,   212,   311,   316,   318,   319,   325,   367,
     368,   136,    71,   369,   327,   329,    31,    33,    34,    36,
      37,   162,   262,   313,    60,    62,    63,    64,    65,   262,
     297,   249,   249,   262,   437,   186,    86,   308,   311,   316,
     318,   319,   309,   247,   436,   433,   262,   434,   136,    86,
     190,   192,   364,   365,   366,   423,    70,    84,   190,   191,
     192,   241,   382,   384,    88,   198,   255,   256,   257,   258,
     259,   260,   463,   463,   463,   463,   463,   463,   243,   244,
     235,   463,   136,   448,   471,   472,   473,   463,    86,   364,
     422,   364,   422,   364,   422,    55,   444,   261,   433,   495,
      23,    24,   220,   477,   463,   197,   220,   221,   477,   463,
     259,   260,   429,   222,   429,   222,   245,   219,   463,   219,
     463,   229,   230,   231,   232,    40,   463,   463,   463,    48,
      49,    40,   463,   451,   473,   463,   463,   160,   136,   324,
     261,    89,   126,   128,   126,   126,   200,   126,    15,    17,
      28,    29,    30,    85,   328,   331,   334,   335,   336,   337,
     338,   339,   343,    28,    29,   330,   336,   343,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   136,
     136,   262,   262,   435,    55,   136,   126,   136,   126,   136,
     366,   423,   126,   127,   126,   136,   126,   136,   126,   136,
     248,    72,   383,   377,   136,   136,   136,   136,   148,   461,
     136,   461,   136,   136,   473,   473,   473,   136,    55,   136,
       5,   136,   461,   136,   422,   422,   422,   433,   262,   136,
      89,   136,   473,   473,   473,    89,   136,   126,   127,   126,
     127,   126,   127,   126,   127,   473,   463,   136,   463,   136,
     461,   380,   380,   380,    75,   494,   473,   136,   136,   136,
     463,   463,   473,   136,   461,     5,   136,   136,   473,   312,
      23,    24,   259,   317,    22,    23,    25,   126,   127,   264,
     126,    30,    85,    30,    85,    28,    29,    28,    29,   332,
     332,   127,    15,    16,    28,    29,   127,   127,   318,   136,
     136,   136,   136,   136,   200,   435,   495,   200,   473,   473,
     473,   473,   473,   473,   374,   136,   371,    53,    54,    75,
      79,    86,    87,   378,   386,   390,   391,   425,   426,   473,
      55,   137,   481,   137,   481,   137,   137,     5,     5,     5,
     200,   201,   202,   203,   204,   464,    55,    67,    68,    81,
      88,   227,   228,   468,   469,   200,   262,   435,   473,    54,
     473,   464,     5,     5,     5,   473,   481,   473,   473,   473,
     473,     5,   136,   137,   473,   136,   461,   137,   481,    17,
      56,    86,   221,   381,   418,   419,   420,   421,   473,   473,
     473,   233,   380,     5,   137,    41,   481,    41,   481,   136,
     136,     5,   137,   481,   469,   137,   473,     5,   262,   317,
     317,   126,   127,   127,   127,   263,   344,   126,    27,    31,
      32,   333,   340,   341,   342,   481,   481,   481,   481,   199,
     200,   495,     5,     5,     5,     5,     5,     5,    35,   242,
     311,   314,   316,   375,   425,   426,   428,   473,    17,    73,
      74,   311,   314,   316,   372,   385,   386,   389,   390,   391,
     425,   426,   428,   473,   126,   126,    76,    77,    78,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   136,   136,     5,     5,   469,   469,   469,
     473,   363,     4,   475,   435,   495,     5,   126,     5,   473,
     469,   469,   469,     5,   473,     5,     5,     5,     5,   469,
     137,   473,   473,     5,   137,   481,   473,   473,   126,   136,
     136,   136,     5,     5,     5,   473,   469,   473,   200,   466,
     466,   466,   466,    41,   481,    41,   481,   469,   475,     5,
     469,   126,   126,   345,   346,   347,   126,   126,   348,   349,
      21,   350,   127,   127,   469,   469,   469,   469,   469,   469,
      38,   429,     5,   126,     5,   387,   402,   402,    69,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   412,
     413,   394,   394,   396,    70,   161,   162,   183,   392,   393,
     400,   410,   200,   469,    86,   469,   475,     5,    58,   364,
     467,     3,   495,   469,   473,   469,     5,   475,   469,     5,
     469,   469,   469,   469,   473,     5,     5,   469,   473,   473,
       5,     5,   200,   469,   469,   469,     5,   475,     5,   473,
     473,   473,   473,   136,   201,   202,   203,   465,   136,   465,
     136,   465,   136,   465,   475,   469,   348,   348,   348,   350,
     349,   475,   475,   475,   475,   475,   475,   255,   315,   126,
     469,   469,   318,   319,   388,    89,   160,   183,   189,   265,
     403,   404,   405,   406,   407,   127,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   413,   367,   368,   395,
     367,   368,   397,   126,   126,   136,   127,   393,   250,   253,
     398,   399,   401,   188,   409,   411,   475,   469,    90,   467,
     238,   239,   240,   475,     5,   475,   469,   469,     5,   469,
     469,   475,     5,     5,   469,   469,   475,   475,   475,   469,
     469,     5,     5,     5,     5,   465,   473,   465,   473,   465,
     473,   465,   473,   475,   136,   475,   475,   126,   463,   127,
     126,   408,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   126,   128,   136,   126,   475,    55,   136,   471,
     472,   474,   474,   474,   469,   475,   475,   469,   475,   475,
     469,   469,   475,   475,   475,   475,   469,   469,   469,   469,
     473,     5,   473,     5,   473,     5,   473,     5,   203,   136,
     252,   266,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,    55,     5,     5,     5,   475,   475,   475,   475,
     475,   475,   475,   475,     5,   469,     5,   469,     5,   469,
       5,   469,   468,   470,   470,   470,   469,   475,   469,   475,
     469,   475,   469,   475,   475,   475,   475,   475
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   267,   268,   268,   269,   269,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   271,   271,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   273,   273,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   275,   275,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   277,   277,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     279,   279,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   281,   281,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   283,   283,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   285,   285,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   287,   287,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   289,   289,   289,   290,
     291,   292,   292,   293,   294,   295,   296,   296,   297,   297,
     297,   297,   297,   297,   298,   299,   299,   299,   300,   300,
     300,   301,   302,   303,   304,   305,   305,   306,   307,   307,
     308,   308,   308,   308,   308,   309,   309,   310,   311,   311,
     312,   312,   313,   313,   313,   313,   313,   313,   313,   313,
     314,   315,   315,   316,   316,   316,   317,   317,   318,   318,
     318,   318,   318,   318,   318,   319,   320,   321,   322,   322,
     323,   323,   324,   324,   325,   325,   325,   325,   325,   325,
     326,   326,   327,   327,   328,   328,   328,   328,   329,   329,
     330,   330,   331,   331,   332,   332,   333,   333,   333,   334,
     334,   335,   335,   336,   336,   337,   337,   338,   338,   339,
     340,   341,   342,   343,   343,   343,   343,   343,   343,   344,
     343,   345,   343,   346,   343,   347,   343,   343,   348,   348,
     349,   350,   350,   351,   351,   351,   351,   352,   353,   353,
     354,   355,   356,   356,   357,   358,   359,   359,   360,   360,
     361,   361,   362,   362,   363,   363,   364,   364,   365,   365,
     366,   366,   366,   366,   367,   367,   368,   369,   369,   370,
     371,   371,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   373,   374,   374,   375,   375,   375,   375,
     375,   375,   376,   377,   377,   378,   378,   378,   378,   378,
     379,   379,   379,   379,   380,   380,   381,   381,   381,   381,
     382,   382,   383,   384,   385,   385,   386,   386,   386,   387,
     387,   388,   388,   389,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   391,   391,
     392,   392,   393,   393,   393,   393,   394,   394,   395,   395,
     396,   396,   397,   397,   398,   398,   399,   400,   400,   401,
     401,   402,   402,   403,   403,   403,   403,   403,   404,   405,
     406,   407,   408,   408,   409,   410,   410,   411,   412,   412,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     422,   423,   423,   424,   424,   425,   426,   427,   427,   428,
     429,   429,   430,   430,   430,   430,   431,   432,   433,   433,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   435,
     435,   436,   436,   437,   437,   437,   437,   438,   438,   438,
     439,   439,   439,   440,   440,   440,   441,   442,   443,   443,
     444,   445,   445,   446,   447,   447,   448,   448,   448,   448,
     448,   449,   450,   450,   451,   451,   451,   451,   452,   452,
     453,   454,   454,   454,   454,   455,   455,   455,   455,   456,
     456,   457,   458,   459,   460,   460,   460,   461,   461,   462,
     462,   463,   463,   463,   463,   463,   463,   463,   463,   464,
     464,   464,   464,   464,   464,   465,   465,   465,   466,   466,
     467,   467,   467,   468,   468,   468,   468,   468,   468,   468,
     469,   470,   471,   472,   473,   473,   473,   474,   474,   474,
     475,   475,   475,   475,   476,   476,   476,   477,   477,   477,
     478,   478,   478,   478,   479,   479,   479,   479,   480,   481,
     481,   481,   481,   481,   482,   482,   483,   483,   483,   483,
     483,   483,   483,   483,   484,   484,   485,   485,   486,   486,
     487,   487,   488,   488,   489,   490,   491,   492,   492,   492,
     492,   492,   492,   493,   493,   493,   493,   493,   493,   494,
     495,   495,   495
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     7,     8,     4,
       3,     0,     3,     2,     4,     5,     0,     2,     4,     4,
       4,     4,     4,     4,     2,     3,     3,     5,     4,     6,
       4,     3,     3,     3,     3,     2,     3,     2,     0,     2,
       3,     1,     1,     1,     1,     0,     2,     5,     1,     4,
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     0,     1,     4,     5,     5,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     5,     1,     2,
       2,     4,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     5,     0,     2,     1,     1,     1,     1,     0,     2,
       1,     1,     2,     2,     0,     2,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     5,     4,     2,     3,     3,     3,     0,
       4,     0,     5,     0,     5,     0,     5,     2,     1,     2,
       1,     0,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     4,     5,     6,     3,     4,
       3,     4,     3,     4,     1,     2,     1,     2,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     0,     2,     9,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     9,     0,     2,     1,     1,     1,     1,
       1,     1,     8,     0,     2,     1,     1,     1,     1,     1,
       9,     8,     8,     8,     0,     2,     1,     1,     1,     1,
       0,     2,     2,     2,     1,     1,     2,     3,     2,     0,
       2,     1,     1,     2,     3,     2,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     2,
       1,     2,     2,     2,     2,     2,     0,     2,     1,     1,
       0,     2,     1,     1,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     1,     1,     1,     1,     3,     3,     2,
       2,     2,     0,     2,     2,     0,     2,     1,     1,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     7,     6,     6,     9,     2,     2,     3,     2,     0,
       3,     0,     3,     0,     3,     3,     2,     7,     7,     3,
       1,     1,     3,     6,     7,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     2,     2,     2,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     8,     6,     6,     1,     2,     1,     1,     1,     1,
       1,     6,     1,     2,     1,     1,     1,     1,     4,     4,
       4,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     9,
       6,     0,     1,     1,     1,     1,     1,     1,     1,     0,
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
        case 186:
#line 582 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3089 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 586 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 589 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3106 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 595 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.flags      |= Run_Daemon;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 3119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 605 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 610 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 3133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 611 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 3139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 614 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 619 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 632 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3164 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 635 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 638 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 641 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3188 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 644 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number);
                  }
#line 3196 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 647 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number) * 1000;
                  }
#line 3204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 652 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 657 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.log || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.flags &= ~Run_UseSyslog;
                     Run.flags |= Run_Log;
                   }
                  }
#line 3225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 665 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 3233 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 668 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3241 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 673 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 676 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3258 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 680 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 686 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.id = (yyvsp[0].string);
                  }
#line 3275 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 691 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.state = (yyvsp[0].string);
                  }
#line 3283 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 696 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.pid || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 3294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 721 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 731 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 736 "src/p.y" /* yacc.c:1646  */
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
#line 3339 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 753 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3347 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 763 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 767 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3365 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 771 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3374 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 775 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 779 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3391 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 782 "src/p.y" /* yacc.c:1646  */
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
#line 3406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 792 "src/p.y" /* yacc.c:1646  */
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
#line 3423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 804 "src/p.y" /* yacc.c:1646  */
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
#line 3438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 816 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.minimumValidDays = (yyvsp[-1].number);
                  }
#line 3447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 826 "src/p.y" /* yacc.c:1646  */
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
#line 3466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 840 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 847 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 860 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 864 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 868 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 873 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV11;
                }
#line 3529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 881 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV12;
                }
#line 3541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 888 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 892 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 898 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 907 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                        Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 914 "src/p.y" /* yacc.c:1646  */
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
#line 3599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 933 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 942 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 957 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 960 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 969 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3652 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 973 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 997 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1000 "src/p.y" /* yacc.c:1646  */
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
#line 3685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1030 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1033 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1046 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1051 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1056 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1063 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1068 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1071 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1079 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1083 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3774 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1087 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1091 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1095 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1099 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3818 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1106 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3826 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1113 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3843 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1116 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3852 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1120 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3860 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3879 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1140 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1141 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1144 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3899 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1147 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1150 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1157 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1166 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1171 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1174 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3955 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1179 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1184 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3971 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1189 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1197 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3993 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1203 "src/p.y" /* yacc.c:1646  */
    {
                        char *servicename = (yyvsp[0].string);
                        if (Str_sub(servicename, "$HOST")) {
                                char hostname[STRLEN];
                                if (gethostname(hostname, sizeof(hostname))) {
                                        LogError("System hostname error -- %s\n", STRERROR);
                                        cfg_errflag++;
                                } else {
                                        Util_replaceString(&servicename, "$HOST", hostname);
                                }
                        }
                        Run.system = createservice(Service_System, servicename, NULL, check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 4011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1218 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1223 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4031 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1230 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1239 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 4051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1242 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 4059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1247 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 4067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1250 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 4075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1256 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1259 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1272 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1275 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4116 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1284 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4125 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1288 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1291 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1296 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4149 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1299 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1304 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1309 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1312 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1317 "src/p.y" /* yacc.c:1646  */
    {
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1343 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-5].url));
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4203 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1362 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1379 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4223 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1385 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4233 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1390 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1395 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4253 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1412 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4261 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1415 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4269 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1420 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4277 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1425 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4286 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1431 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 4294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1434 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 4302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1439 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 4310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1442 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                    portset.type = Socket_Tcp;
                    sslset.flags = SSL_Enabled;
                  }
#line 4319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1446 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 4327 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1459 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4335 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1464 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1467 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4351 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1470 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1473 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1476 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1479 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1482 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4393 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1487 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1490 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4411 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1495 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1498 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1501 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1504 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1507 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1510 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1513 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1516 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4476 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4484 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1523 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4492 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1526 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1531 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1534 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1537 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1542 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4536 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1545 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1548 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4552 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1551 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1554 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4568 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1557 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4576 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1560 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4584 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1563 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1566 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1569 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1572 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1577 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4625 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1581 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1591 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4642 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1594 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1597 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4658 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1600 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4666 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 4674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1612 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 4682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1621 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username lengh is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1629 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1634 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1637 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1642 "src/p.y" /* yacc.c:1646  */
    {
                     (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1651 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1654 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1670 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.operator = (yyvsp[-1].number);
                    portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4752 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1676 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1682 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 4769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1687 "src/p.y" /* yacc.c:1646  */
    {
                    addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                    FREE((yyvsp[0].string));
                  }
#line 4778 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1694 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 4786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1699 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4794 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 4802 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1717 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 4810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1720 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 4819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1724 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 4828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4837 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1732 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1736 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 4855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1740 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4864 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1744 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 4873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1748 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1752 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1756 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1762 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1769 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1775 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4927 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1781 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4938 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1788 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 4946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1793 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 4954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1798 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 4962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1803 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 4970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1808 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1811 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4986 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1816 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1819 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 5002 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1824 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5010 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1827 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5018 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1832 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5026 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1837 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 5034 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1842 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 5045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1848 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 5056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1856 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 5065 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1862 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1863 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1866 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5086 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1870 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1873 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5103 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1877 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1882 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1885 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1892 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1893 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5135 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1894 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1895 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1896 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1897 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5159 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1898 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1899 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1900 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 5177 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1901 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5183 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1902 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1903 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1904 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1905 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5207 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1906 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 5213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1907 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1908 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1909 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1910 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5237 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1911 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1912 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1913 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1914 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5261 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1915 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1916 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1917 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1918 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1919 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5291 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1920 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1931 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1932 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5309 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1933 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5315 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1934 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1937 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1941 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5339 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1945 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5348 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 1951 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 5356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 1954 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 5364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 1957 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1963 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 5381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 1966 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 5390 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 1970 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5398 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1975 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5407 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 1989 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5413 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 1992 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5425 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 1999 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5437 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2008 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2025 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2041 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2046 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2053 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2060 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2061 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2062 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2063 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2066 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2071 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2076 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2081 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2088 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2093 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5569 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2100 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Threads;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2107 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2114 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].real);
                  }
#line 5599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2121 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5605 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2122 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5611 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2123 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5617 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2126 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2127 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2130 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset);
                  }
#line 5640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2136 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset);
                  }
#line 5650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2143 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2144 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5662 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2145 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 5668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2146 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2147 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 5680 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2148 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5686 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2149 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2150 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2153 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5704 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2154 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5710 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2155 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5716 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2156 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5722 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2157 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5728 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2158 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5734 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2161 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2162 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2163 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5752 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2165 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5758 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2166 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5764 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2168 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 5772 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2171 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 5780 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2174 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 5791 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2182 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 5799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2185 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5807 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2189 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5815 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2192 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 5823 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2195 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 5831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2198 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 5839 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2201 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 5847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2206 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat1 = repeat;
                      repeat = 0;
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2217 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat2 = repeat;
                      repeat = 0;
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5875 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2228 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 5888 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2238 "src/p.y" /* yacc.c:1646  */
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
#line 5903 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2251 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2256 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5923 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2264 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2269 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2276 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2279 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2282 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2285 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5975 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2290 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2295 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2301 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 6005 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2307 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2308 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2309 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2312 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2319 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6047 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2326 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2333 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2342 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2351 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2358 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2367 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 6123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2376 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 6132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2382 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6138 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2383 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2384 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2385 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2386 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2389 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 6172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2394 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 6182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2401 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2409 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6207 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2416 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6220 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2424 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6232 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2432 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6244 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2439 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2445 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2452 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2460 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 6286 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2463 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 6294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2469 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 6305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2475 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 6315 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2482 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2488 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6336 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2495 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6347 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2501 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 6357 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2508 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2514 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 6378 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2521 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 6387 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2527 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 6396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2532 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 6407 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2540 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6420 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2548 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2556 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2564 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2572 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2580 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2590 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6498 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2598 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2606 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6524 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2614 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2622 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2630 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2640 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 6569 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2643 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 6575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2644 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 6581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2645 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 6587 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 6591 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2648 "src/p.y" /* yacc.c:1906  */



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
                yyparse();
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
                if (gethostname(hostname, sizeof(hostname))) {
                        LogError("Cannot get system hostname -- please add 'check system <name>'\n");
                        cfg_errflag++;
                }
                if (Util_existService(hostname)) {
                        LogError("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", hostname);
                        cfg_errflag++;
                }
                Run.system = createservice(Service_System, Str_dup(hostname), NULL, check_system);
                addservice(Run.system);
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
        current->mode     = Monitor_Active;
        current->monitor  = Monitor_Init;
        current->onreboot = Onreboot_Start;
        current->name     = name;
        current->check    = check;
        current->path     = value;

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
                        char program[PATH_MAX];
                        strncpy(program, s->program->args->arg[0], sizeof(program) - 1);
                        s->program->C = Command_new(program, NULL);
                        for (int i = 1; i < s->program->args->length; i++) {
                                Command_appendArgument(s->program->C, s->program->args->arg[i]);
                                snprintf(program + strlen(program), sizeof(program) - strlen(program) - 1, " %s", s->program->args->arg[i]);
                        }
                        s->path = Str_dup(program);
                        if (s->program->args->has_uid)
                                Command_setUid(s->program->C, s->program->args->uid);
                        if (s->program->args->has_gid)
                                Command_setGid(s->program->C, s->program->args->gid);
                        // Set environment
                        Command_setEnv(s->program->C, "MONIT_SERVICE", s->name);
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
        NEW(m->regex_comp);

        m->match_string = ms->match_string;
        m->match_path   = ms->match_path ? Str_dup(ms->match_path) : NULL;
        m->action       = ms->action;
        m->not          = ms->not;
        m->ignore       = ms->ignore;
        m->next         = NULL;

        addeventaction(&(m->action), actionnumber, Action_Ignored);

        int reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, ms->regex_comp, errbuf, STRLEN);
                if (m->match_path != NULL)
                        yyerror2("Regex parsing error: %s on line %i of", errbuf, linenumber);
                else
                        yyerror2("Regex parsing error: %s", errbuf);
        }
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
                int reg_return;
                NEW(g->expect);
                reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
                FREE(expect);
                if (reg_return != 0) {
                        char errbuf[STRLEN];
                        regerror(reg_return, g->expect, errbuf, STRLEN);
                        yyerror2("Regex parsing error: %s", errbuf);
                }
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
        int reg_return;
        NEW(urlrequest->regex);
        reg_return = regcomp(urlrequest->regex, regex, REG_NOSUB|REG_EXTENDED);
        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, urlrequest->regex, errbuf, STRLEN);
                yyerror2("Regex parsing error: %s", errbuf);
        }
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

