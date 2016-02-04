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
static void  addtimestamp(Timestamp_T, boolean_t);
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


#line 341 "src/y.tab.c" /* yacc.c:339  */

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
    MAILREPLYTO = 383,
    MAILSUBJECT = 384,
    MAILBODY = 385,
    SERVICENAME = 386,
    STRINGNAME = 387,
    NUMBER = 388,
    PERCENT = 389,
    LOGLIMIT = 390,
    CLOSELIMIT = 391,
    DNSLIMIT = 392,
    KEEPALIVELIMIT = 393,
    REPLYLIMIT = 394,
    REQUESTLIMIT = 395,
    STARTLIMIT = 396,
    WAITLIMIT = 397,
    GRACEFULLIMIT = 398,
    CLEANUPLIMIT = 399,
    REAL = 400,
    CHECKPROC = 401,
    CHECKFILESYS = 402,
    CHECKFILE = 403,
    CHECKDIR = 404,
    CHECKHOST = 405,
    CHECKSYSTEM = 406,
    CHECKFIFO = 407,
    CHECKPROGRAM = 408,
    CHECKNET = 409,
    THREADS = 410,
    CHILDREN = 411,
    STATUS = 412,
    ORIGIN = 413,
    VERSIONOPT = 414,
    RESOURCE = 415,
    MEMORY = 416,
    TOTALMEMORY = 417,
    LOADAVG1 = 418,
    LOADAVG5 = 419,
    LOADAVG15 = 420,
    SWAP = 421,
    MODE = 422,
    ACTIVE = 423,
    PASSIVE = 424,
    MANUAL = 425,
    CPU = 426,
    TOTALCPU = 427,
    CPUUSER = 428,
    CPUSYSTEM = 429,
    CPUWAIT = 430,
    GROUP = 431,
    REQUEST = 432,
    DEPENDS = 433,
    BASEDIR = 434,
    SLOT = 435,
    EVENTQUEUE = 436,
    SECRET = 437,
    HOSTHEADER = 438,
    UID = 439,
    EUID = 440,
    GID = 441,
    MMONIT = 442,
    INSTANCE = 443,
    USERNAME = 444,
    PASSWORD = 445,
    TIMESTAMP = 446,
    CHANGED = 447,
    MILLISECOND = 448,
    SECOND = 449,
    MINUTE = 450,
    HOUR = 451,
    DAY = 452,
    MONTH = 453,
    SSLAUTO = 454,
    SSLV2 = 455,
    SSLV3 = 456,
    TLSV1 = 457,
    TLSV11 = 458,
    TLSV12 = 459,
    CERTMD5 = 460,
    AUTO = 461,
    BYTE = 462,
    KILOBYTE = 463,
    MEGABYTE = 464,
    GIGABYTE = 465,
    INODE = 466,
    SPACE = 467,
    TFREE = 468,
    PERMISSION = 469,
    SIZE = 470,
    MATCH = 471,
    NOT = 472,
    IGNORE = 473,
    ACTION = 474,
    UPTIME = 475,
    EXEC = 476,
    UNMONITOR = 477,
    PING = 478,
    PING4 = 479,
    PING6 = 480,
    ICMP = 481,
    ICMPECHO = 482,
    NONEXIST = 483,
    EXIST = 484,
    INVALID = 485,
    DATA = 486,
    RECOVERED = 487,
    PASSED = 488,
    SUCCEEDED = 489,
    URL = 490,
    CONTENT = 491,
    PID = 492,
    PPID = 493,
    FSFLAG = 494,
    REGISTER = 495,
    CREDENTIALS = 496,
    URLOBJECT = 497,
    TARGET = 498,
    TIMESPEC = 499,
    HTTPHEADER = 500,
    MAXFORWARD = 501,
    FIPS = 502,
    GREATER = 503,
    LESS = 504,
    EQUAL = 505,
    NOTEQUAL = 506
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
#define MAILREPLYTO 383
#define MAILSUBJECT 384
#define MAILBODY 385
#define SERVICENAME 386
#define STRINGNAME 387
#define NUMBER 388
#define PERCENT 389
#define LOGLIMIT 390
#define CLOSELIMIT 391
#define DNSLIMIT 392
#define KEEPALIVELIMIT 393
#define REPLYLIMIT 394
#define REQUESTLIMIT 395
#define STARTLIMIT 396
#define WAITLIMIT 397
#define GRACEFULLIMIT 398
#define CLEANUPLIMIT 399
#define REAL 400
#define CHECKPROC 401
#define CHECKFILESYS 402
#define CHECKFILE 403
#define CHECKDIR 404
#define CHECKHOST 405
#define CHECKSYSTEM 406
#define CHECKFIFO 407
#define CHECKPROGRAM 408
#define CHECKNET 409
#define THREADS 410
#define CHILDREN 411
#define STATUS 412
#define ORIGIN 413
#define VERSIONOPT 414
#define RESOURCE 415
#define MEMORY 416
#define TOTALMEMORY 417
#define LOADAVG1 418
#define LOADAVG5 419
#define LOADAVG15 420
#define SWAP 421
#define MODE 422
#define ACTIVE 423
#define PASSIVE 424
#define MANUAL 425
#define CPU 426
#define TOTALCPU 427
#define CPUUSER 428
#define CPUSYSTEM 429
#define CPUWAIT 430
#define GROUP 431
#define REQUEST 432
#define DEPENDS 433
#define BASEDIR 434
#define SLOT 435
#define EVENTQUEUE 436
#define SECRET 437
#define HOSTHEADER 438
#define UID 439
#define EUID 440
#define GID 441
#define MMONIT 442
#define INSTANCE 443
#define USERNAME 444
#define PASSWORD 445
#define TIMESTAMP 446
#define CHANGED 447
#define MILLISECOND 448
#define SECOND 449
#define MINUTE 450
#define HOUR 451
#define DAY 452
#define MONTH 453
#define SSLAUTO 454
#define SSLV2 455
#define SSLV3 456
#define TLSV1 457
#define TLSV11 458
#define TLSV12 459
#define CERTMD5 460
#define AUTO 461
#define BYTE 462
#define KILOBYTE 463
#define MEGABYTE 464
#define GIGABYTE 465
#define INODE 466
#define SPACE 467
#define TFREE 468
#define PERMISSION 469
#define SIZE 470
#define MATCH 471
#define NOT 472
#define IGNORE 473
#define ACTION 474
#define UPTIME 475
#define EXEC 476
#define UNMONITOR 477
#define PING 478
#define PING4 479
#define PING6 480
#define ICMP 481
#define ICMPECHO 482
#define NONEXIST 483
#define EXIST 484
#define INVALID 485
#define DATA 486
#define RECOVERED 487
#define PASSED 488
#define SUCCEEDED 489
#define URL 490
#define CONTENT 491
#define PID 492
#define PPID 493
#define FSFLAG 494
#define REGISTER 495
#define CREDENTIALS 496
#define URLOBJECT 497
#define TARGET 498
#define TIMESPEC 499
#define HTTPHEADER 500
#define MAXFORWARD 501
#define FIPS 502
#define GREATER 503
#define LESS 504
#define EQUAL 505
#define NOTEQUAL 506

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 301 "src/p.y" /* yacc.c:355  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 890 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 905 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  258
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  225
/* YYNRULES -- Number of rules.  */
#define YYNRULES  698
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1289

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   506

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
       2,     2,     2,     2,     2,     2,     2,     2,   254,     2,
       2,     2,     2,     2,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   256,     2,   257,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   252,     2,   253,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250,   251
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   349,   349,   350,   353,   354,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   384,   385,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   410,   411,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   433,   434,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   454,
     455,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   474,   475,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   492,
     493,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   511,   512,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   526,   527,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   546,   547,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   561,   565,   568,   574,   584,   585,   588,   593,
     599,   602,   603,   606,   609,   612,   615,   618,   621,   626,
     631,   639,   642,   647,   650,   654,   660,   665,   670,   678,
     681,   682,   685,   691,   692,   695,   698,   699,   700,   701,
     704,   705,   710,   727,   730,   733,   734,   737,   741,   745,
     749,   753,   756,   766,   778,   790,   796,   797,   800,   814,
     821,   830,   831,   834,   838,   842,   846,   854,   862,   866,
     872,   881,   888,   897,   898,   901,   910,   921,   922,   925,
     928,   931,   932,   933,   934,   937,   941,   947,   948,   951,
     952,   953,   954,   957,   958,   961,   962,   965,   968,   981,
     982,   985,   986,   987,   990,   991,   994,   995,   998,  1001,
    1006,  1007,  1010,  1011,  1014,  1019,  1024,  1031,  1036,  1039,
    1047,  1051,  1055,  1059,  1063,  1063,  1070,  1070,  1077,  1077,
    1084,  1084,  1091,  1098,  1099,  1102,  1108,  1109,  1112,  1115,
    1118,  1125,  1134,  1139,  1142,  1147,  1152,  1157,  1165,  1171,
    1183,  1188,  1195,  1204,  1207,  1212,  1215,  1221,  1224,  1229,
    1230,  1233,  1234,  1237,  1240,  1245,  1249,  1253,  1256,  1261,
    1264,  1269,  1274,  1277,  1282,  1291,  1292,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1308,  1315,
    1316,  1319,  1320,  1321,  1322,  1323,  1324,  1327,  1333,  1334,
    1337,  1338,  1339,  1340,  1341,  1344,  1350,  1355,  1360,  1367,
    1368,  1371,  1372,  1373,  1374,  1377,  1380,  1385,  1390,  1396,
    1399,  1404,  1407,  1411,  1416,  1417,  1420,  1421,  1424,  1429,
    1432,  1435,  1438,  1441,  1444,  1447,  1452,  1455,  1460,  1463,
    1466,  1469,  1472,  1475,  1478,  1481,  1485,  1488,  1491,  1496,
    1499,  1502,  1507,  1510,  1513,  1516,  1519,  1522,  1525,  1528,
    1531,  1534,  1537,  1542,  1546,  1552,  1553,  1556,  1559,  1562,
    1565,  1570,  1571,  1574,  1582,  1587,  1590,  1595,  1600,  1601,
    1604,  1607,  1612,  1613,  1616,  1617,  1618,  1619,  1620,  1623,
    1629,  1635,  1640,  1646,  1647,  1652,  1657,  1658,  1661,  1666,
    1667,  1670,  1673,  1677,  1681,  1685,  1689,  1693,  1697,  1701,
    1705,  1709,  1715,  1722,  1728,  1734,  1741,  1746,  1751,  1756,
    1761,  1764,  1769,  1772,  1777,  1780,  1785,  1790,  1795,  1801,
    1809,  1815,  1816,  1819,  1823,  1826,  1830,  1835,  1838,  1841,
    1842,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,
    1854,  1855,  1856,  1857,  1858,  1859,  1860,  1861,  1862,  1863,
    1864,  1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,  1873,
    1876,  1877,  1880,  1881,  1884,  1885,  1886,  1887,  1890,  1894,
    1898,  1904,  1907,  1910,  1916,  1923,  1926,  1927,  1930,  1933,
    1940,  1949,  1955,  1956,  1959,  1960,  1961,  1962,  1963,  1966,
    1972,  1973,  1976,  1977,  1978,  1979,  1982,  1987,  1994,  2001,
    2002,  2003,  2004,  2007,  2012,  2017,  2022,  2029,  2034,  2041,
    2048,  2055,  2062,  2063,  2064,  2067,  2068,  2071,  2077,  2084,
    2085,  2086,  2087,  2088,  2089,  2092,  2093,  2094,  2095,  2096,
    2097,  2100,  2101,  2102,  2104,  2105,  2107,  2110,  2113,  2121,
    2124,  2127,  2131,  2134,  2137,  2140,  2145,  2156,  2167,  2177,
    2189,  2190,  2195,  2202,  2203,  2208,  2215,  2218,  2221,  2224,
    2229,  2233,  2240,  2246,  2247,  2248,  2251,  2258,  2265,  2272,
    2281,  2290,  2297,  2306,  2315,  2321,  2322,  2323,  2324,  2325,
    2328,  2333,  2340,  2348,  2355,  2363,  2371,  2378,  2384,  2391,
    2399,  2402,  2408,  2414,  2421,  2427,  2434,  2440,  2447,  2453,
    2460,  2466,  2471,  2479,  2487,  2495,  2503,  2511,  2519,  2529,
    2537,  2545,  2553,  2561,  2569,  2579,  2582,  2583,  2584
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
  "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY", "SERVICENAME",
  "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT",
  "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT", "STARTLIMIT",
  "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL", "CHECKPROC",
  "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST", "CHECKSYSTEM",
  "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS", "CHILDREN", "STATUS",
  "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY", "TOTALMEMORY", "LOADAVG1",
  "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE", "MANUAL",
  "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST",
  "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER",
  "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD",
  "TIMESTAMP", "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR", "DAY",
  "MONTH", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12",
  "CERTMD5", "AUTO", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE",
  "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE",
  "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6",
  "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "TARGET", "TIMESPEC",
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
  "protocol", "sendexpect", "websocketlist", "websocket", "mysqllist",
  "mysql", "target", "maxforward", "siplist", "sip", "httplist", "http",
  "status", "request", "responsesum", "hostheader", "httpheaderlist",
  "secret", "radiuslist", "radius", "apache_stat_list", "apache_stat",
  "exist", "pid", "ppid", "uptime", "icmpcount", "icmpsize", "icmptimeout",
  "icmpoutgoing", "exectimeout", "programtimeout", "nettimeout",
  "connectiontimeout", "retry", "actionrate", "urloption", "urloperator",
  "alert", "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "group", "depend", "dependlist", "dependant", "statusvalue",
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
     505,   506,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -718

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-718)))

#define YYTABLE_NINF -301

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     552,    49,   -78,   -60,   -38,   -27,   -21,   -11,    -2,     8,
      21,   168,   552,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,    29,
      40,    68,   109,  -718,   -31,   101,   114,   -10,   139,   141,
     161,    46,   239,    59,  -718,   -52,    84,   247,   318,   328,
     422,  -718,   395,   402,   276,  -718,  -718,   365,    97,   580,
     716,   750,   766,   898,   716,   977,   432,  -718,   414,   440,
     -41,  -718,   382,   437,  -718,  -718,  -718,  -718,   412,  -718,
    -718,   745,   456,   462,  -718,    59,   299,   303,   350,  1116,
     569,   482,   512,   332,   406,   515,   522,   526,   528,   411,
     531,   533,   164,   411,   411,   539,   411,   -69,   426,   201,
     544,   541,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,    24,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,    16,  -125,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,    94,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,    90,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,    45,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,   380,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  1050,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,   -85,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,   563,   683,  -718,   599,   271,   619,
    -718,   649,  -718,  -718,    50,    56,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,   306,  -718,   577,  -718,   430,
     299,   523,  -718,   745,  1116,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,   693,  -718,   634,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
     325,  -718,  -718,  -718,   220,   698,   393,   393,   393,   393,
    -718,  -718,  -718,   393,   393,   307,   572,   393,   869,  -718,
    -718,  -718,  -718,  -718,  -718,   393,   356,   356,  -718,   356,
     764,  -718,  -718,  -718,  -718,  -718,  -718,  -718,   541,  -718,
     551,  1116,   569,   137,   393,    34,   393,   572,   320,   603,
    -718,   320,   605,   124,   -72,   413,   620,  -111,   197,   785,
     393,   393,   393,   543,   799,   393,  -718,  -718,  -718,  -718,
    1065,  -718,  -718,   393,  -718,  -718,  -718,   393,   694,  -718,
     743,  -718,   626,   793,   -37,   758,  -718,  -718,  -718,  -718,
    -718,  -718,   769,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,   704,   771,  -718,   565,   155,   652,   657,   664,   666,
     668,   671,  -718,  -718,   673,   687,   689,   702,   705,  -718,
    -718,  -718,  -718,   801,   812,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,   398,   895,   866,  -718,   905,   829,   215,   274,
       4,  -718,  -718,  -718,   841,   845,   335,   375,   396,   729,
     902,  -718,   842,  -718,  -718,  -718,  -718,  -718,   843,   848,
      -7,   179,   850,   852,   855,   855,   855,   857,    13,  -718,
    -718,  -718,   969,   189,   870,    76,  -718,    76,  -718,    76,
    -718,  -718,  -718,  1116,   951,  -718,  -718,  -718,   871,   919,
     875,   855,   855,   855,   923,   879,  -718,  -718,   491,   503,
     585,   596,   855,   393,   880,   393,   219,  -718,  -718,  -718,
     941,   855,   882,   884,   886,   393,   393,   855,   221,  -718,
    1016,   890,   893,   855,  -718,   271,  -718,    -3,  -718,  -718,
    -718,  -718,  -718,  -718,    19,   903,    26,    42,   719,   752,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,   945,
     953,  -718,  -718,  -718,   912,   794,   787,   914,   928,   749,
     921,   925,   926,   927,   929,  -718,   867,  -718,   866,   569,
    -718,   873,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
     855,   855,   855,   855,   855,   855,  -718,   931,  -718,   678,
    1015,  -718,  -718,   935,  -718,   412,   936,   412,   937,   938,
    1068,  1070,  1072,   803,  -718,  1025,   297,  -718,  -718,   888,
    -718,  -718,  -718,  1060,   866,   855,    -6,   803,  1075,  1079,
    1080,   855,   412,   855,   855,   855,   855,  -718,  -718,  -718,
    -718,  1090,   963,   701,   234,   965,   412,     7,     7,     7,
     885,  -718,  1092,   972,   -14,    -4,   974,   980,  1112,   984,
     412,   297,   985,   855,  1115,   102,   872,   872,  -718,  1000,
    1002,  1003,  1004,   876,  1012,  1017,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,   265,   265,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,   412,   412,   412,   412,   663,
    -718,   569,  -718,  -718,  1135,  1138,  1140,  1141,  1144,  1145,
     117,  -718,   207,  1027,  1028,   473,  1266,  1029,  1030,  -718,
    -718,  -718,  -718,  -718,  -718,  1159,  1162,  -718,  -718,  -718,
    -718,  -718,  -718,   297,   297,   297,  -718,  -718,  -718,  -718,
    -718,   855,  -718,  -718,  -718,  -718,  -718,   411,  -718,  -718,
    1164,  -718,   866,   569,  1168,  1045,  1169,   855,   297,   297,
     297,  1170,   855,  1171,  1173,  1175,  1179,   297,   755,   855,
    1180,  1052,   412,   855,   855,  1067,  1059,  1062,  1063,  -718,
    -718,  -718,  -718,  -718,  1188,  1194,  1196,  -718,     7,   297,
     855,  1008,  1008,  1008,  1008,   150,   193,   297,  -718,  -718,
    1164,  -718,  1200,   297,  -718,  1073,  1082,  -718,  1083,  1084,
    1085,  1086,  1094,  1203,  1107,  1108,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,   297,   297,
     297,   297,   297,   297,    15,   320,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  1214,  1110,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  1230,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,   723,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,   112,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  1043,
    -718,   297,   417,  -718,  -718,  1164,  1236,   392,  1239,  -718,
     569,  -718,   297,   855,   297,  1238,  -718,  1164,  -718,   297,
    1240,   297,   297,   297,   297,  -718,   855,  1242,  1244,   297,
     855,   855,  1245,  1263,  -718,  -718,  1076,  -718,   297,   297,
     297,  1264,  1164,  1267,  -718,   855,   855,   855,   855,   296,
     361,   401,   404,  1164,  -718,   297,  -718,  -718,  -718,  1094,
    1094,  1094,  1203,  -718,  1094,  -718,  -718,  -718,  -718,  -718,
    1164,  1164,  1164,  1164,  1164,  1164,  1023,  1153,   297,  -718,
     297,   479,   -22,   -22,  1157,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   723,  -718,   696,  1154,  1160,
    1150,  1167,   112,  -718,   -59,  1103,  -718,  1164,  -718,  -718,
    -718,   297,  1199,   -12,  -718,   481,  -718,  1164,  1284,  1164,
     297,  -718,  -718,   297,  -718,  -718,  -718,  -718,  1288,   297,
     297,  1164,  1289,  1290,   297,   297,  -718,  1164,  1164,  1164,
     297,  -718,   297,  1296,  1298,  1300,  1301,   578,  -718,  -718,
    -718,   855,   578,   855,   578,   855,   578,   855,  -718,  1164,
    1094,  1094,  1094,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  1176,  -718,  1164,  1164,  -718,  -718,  -718,  1186,
     393,  1183,  1187,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    1201,  1205,  1206,  1207,  1208,  1210,  1212,  1215,  1216,  1217,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,   374,
    1218,  -718,  -718,  -718,  1209,  -718,  -718,  -718,  1164,    23,
    -718,   855,   855,   855,  -718,   297,  -718,  1164,  1164,   297,
    1164,  1164,  -718,   297,   297,  1164,  1164,  -718,  -718,  -718,
    1164,  1164,   297,   297,   297,   297,   855,  1307,   855,  1327,
     855,  1401,   855,  1402,  -718,  1211,  -718,  -718,  -718,  1276,
    -718,  -718,   133,  1277,  1278,  1279,  1280,  1281,  1282,  1283,
    1285,  1286,  1287,  -718,  -718,  -718,  -718,  -718,  -718,  1357,
    -718,  -718,  1413,  1417,  1418,  1164,  -718,  -718,  1164,  -718,
    -718,  1164,  1164,  -718,  -718,  -718,  -718,  1164,  1164,  1164,
    1164,  1419,   297,  1420,   297,  1421,   297,  1422,   297,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,   297,   297,   297,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,   297,  1164,   297,  1164,   297,
    1164,   297,  1164,  -718,  -718,  -718,  -718,  1164,  -718,  1164,
    -718,  1164,  -718,  1164,  -718,  -718,  -718,  -718,  -718
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
       0,     0,     0,     0,   189,   540,     0,     0,     0,     0,
       0,   319,     0,     0,     0,     1,     5,    22,    23,    24,
      25,    26,    30,    27,    28,    29,   191,   190,   176,   247,
     494,   243,     0,     0,   215,   196,   197,   181,   655,   198,
     507,     0,     0,     0,   203,   199,   210,     0,     0,     0,
     696,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    43,    44,    45,    36,
      37,    38,    42,    46,    47,   540,   506,    48,    49,    50,
      51,    52,    39,    40,    41,   670,   670,    54,    55,    56,
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
     244,   342,   257,   263,     0,     0,   656,   657,   658,   659,
     179,   544,   545,   546,   547,     0,   542,   193,   195,   202,
     210,     0,   200,     0,     0,   524,   512,   513,   526,   527,
     534,   532,   515,   536,   514,   535,   531,   538,   520,   522,
     537,   528,   533,   511,   539,   518,   521,   525,   523,   517,
     516,   529,   530,   519,     0,   509,     0,   172,   308,   309,
     310,   311,   314,   313,   312,   315,   316,   320,   333,   334,
     492,   329,   317,   318,   385,     0,   599,   599,   599,   599,
     592,   593,   594,   599,   599,     0,     0,   599,   630,   562,
     564,   565,   566,   567,   568,   599,   490,   490,   508,   490,
       0,   549,   550,   551,   552,   553,   554,   558,   555,   556,
       0,     0,   696,   643,   599,   643,   599,   671,     0,     0,
     671,     0,     0,     0,     0,   599,   599,     0,   385,     0,
     599,   599,   599,     0,     0,   599,   582,   579,   580,   581,
     630,   570,   575,   599,   573,   574,   572,   599,     0,   192,
       0,   247,   213,     0,     0,     0,   238,   233,   234,   235,
     236,   237,     0,   239,   251,   252,   253,   254,   248,   249,
     250,     0,     0,   241,   255,   256,     0,     0,     0,     0,
       0,     0,   212,   216,     0,     0,     0,     0,     0,   180,
     182,   242,   543,     0,     0,   204,   206,   207,   208,   209,
     201,   211,     0,     0,   540,   510,   697,     0,     0,     0,
     492,   330,   331,   321,     0,     0,     0,     0,     0,     0,
       0,   368,     0,   604,   600,   601,   602,   603,     0,     0,
       0,     0,     0,     0,   630,   630,   630,     0,     0,   563,
     631,   632,     0,     0,     0,   490,   323,   490,   325,   490,
     327,   548,   557,     0,     0,   503,   644,   645,     0,     0,
       0,   630,   630,   630,     0,     0,   501,   502,     0,     0,
       0,     0,   630,   599,     0,   599,     0,   379,   379,   379,
       0,   630,     0,     0,     0,   599,   599,   630,     0,   571,
       0,     0,     0,   630,   177,   246,   215,   231,   340,   339,
     341,   240,   495,   343,     0,     0,     0,     0,     0,     0,
     258,   259,   269,   269,   260,   278,   279,   261,   262,     0,
       0,   264,   265,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   194,     0,   541,   540,   696,
     698,     0,   335,   337,   336,   338,   332,   322,   386,   388,
     630,   630,   630,   630,   630,   630,   359,     0,   345,   630,
       0,   589,   590,   596,   595,   655,   596,   655,     0,     0,
       0,     0,     0,   605,   628,     0,     0,   596,   591,     0,
     324,   326,   328,     0,   540,   630,   630,   605,     0,     0,
       0,   630,   655,   630,   630,   630,   630,   665,   664,   669,
     668,     0,     0,   630,     0,   596,   655,   630,   630,   630,
       0,   379,     0,     0,   655,   655,     0,     0,     0,   596,
     655,     0,     0,   630,     0,     0,   231,   231,   232,     0,
       0,     0,     0,   302,   290,     0,   284,   275,   281,   277,
     283,   274,   276,   280,   282,   268,   267,   222,   219,   220,
     217,   218,   223,   224,   221,   655,   655,   655,   655,     0,
     205,   696,   173,   493,     0,     0,     0,     0,     0,     0,
     630,   387,   630,     0,     0,     0,     0,     0,     0,   369,
     370,   371,   372,   373,   374,     0,     0,   584,   583,   586,
     585,   576,   577,     0,     0,     0,   606,   607,   608,   609,
     610,   630,   629,   623,   624,   619,   622,     0,   625,   626,
     636,   491,   540,   696,     0,     0,     0,   630,     0,     0,
       0,     0,   630,     0,     0,     0,     0,     0,   630,   630,
       0,   596,   655,   630,   630,     0,     0,     0,     0,   380,
     381,   382,   383,   384,     0,     0,     0,   695,   630,     0,
     630,   614,   614,   614,   614,   655,   655,     0,   588,   587,
     636,   578,     0,     0,   214,     0,     0,   228,   291,   292,
     293,     0,     0,   306,     0,     0,   287,   270,   271,   272,
     273,   183,   184,   185,   186,   187,   188,   174,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   366,   365,   360,
     362,   363,   361,     0,     0,   389,   390,   355,   357,   356,
     346,   347,   348,   353,   349,   350,   352,   354,   351,     0,
     433,   434,   393,   391,   394,   400,   452,   452,     0,   403,
     420,   421,   417,   418,   406,   407,   408,   414,   415,   441,
     401,     0,   422,   402,   409,   410,   423,   425,   426,   427,
     416,   448,   428,   429,   466,   431,   424,   411,   419,     0,
     497,     0,     0,   483,   484,   636,     0,   616,     0,   561,
     696,   504,     0,   630,     0,     0,   598,   636,   673,     0,
       0,     0,     0,     0,     0,   654,   630,     0,     0,     0,
     630,   630,     0,     0,   489,   486,     0,   487,     0,     0,
       0,     0,   636,     0,   615,   630,   630,   630,   630,     0,
       0,     0,     0,   636,   569,     0,   560,   229,   230,     0,
       0,     0,   306,   305,   295,   303,   307,   289,   285,   286,
     636,   636,   636,   636,   636,   636,   226,     0,     0,   398,
       0,   392,   404,   405,     0,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   399,   469,   412,     0,     0,
       0,     0,   432,   435,   413,   430,   496,   636,   499,   498,
     482,     0,     0,   616,   620,     0,   505,   636,     0,   636,
       0,   661,   642,     0,   663,   662,   667,   666,     0,     0,
       0,   636,     0,     0,     0,     0,   488,   636,   636,   636,
       0,   680,     0,     0,     0,     0,     0,     0,   611,   612,
     613,   630,     0,   630,     0,   630,     0,   630,   681,   636,
     297,   299,   301,   288,   304,   674,   675,   676,   677,   678,
     679,   227,     0,   500,   636,   636,   396,   397,   395,     0,
     599,     0,     0,   463,   453,   456,   454,   455,   457,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,   443,   444,   442,   439,   437,   440,   438,   436,     0,
       0,   450,   451,   449,     0,   468,   467,   367,   636,     0,
     621,   633,   633,   633,   660,     0,   640,   636,   636,     0,
     636,   636,   646,     0,     0,   636,   636,   376,   377,   378,
     636,   636,     0,     0,     0,     0,   630,     0,   630,     0,
     630,     0,   630,     0,   559,     0,   358,   344,   461,     0,
     460,   462,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   445,   447,   465,   485,   617,     0,
     634,   635,     0,     0,     0,   636,   597,   672,   636,   648,
     647,   636,   636,   651,   650,   375,   682,   636,   636,   636,
     636,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     459,   464,   458,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   618,     0,     0,     0,   641,   649,   653,
     652,   686,   683,   692,   689,     0,   636,     0,   636,     0,
     636,     0,   636,   627,   637,   638,   639,   636,   687,   636,
     684,   636,   693,   636,   690,   688,   685,   694,   691
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -718,  -718,  -718,  1416,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,  -718,  -718,  -718,  -718,  1334,  -718,
    -718,  1142,  -718,  -276,   864,  -718,   692,  -718,  -275,   194,
    -288,  -287,  -718,  -718,  -718,  1351,  1014,  -718,  -718,  -718,
    -718,  -718,  -718,  -718,   853,  -718,  -718,  -718,   988,  -718,
    -718,  -718,  -718,  -718,  -718,   992,  -718,  -718,  -718,  -718,
    -197,  -717,   446,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,   976,  1019,  1184,  -110,  -358,  -333,  -470,   415,
     416,  -718,  1368,  -718,  -718,  1369,  -718,  -718,  -718,  -718,
    -718,  -718,  -517,  -718,  -718,  -718,  -718,  -718,   699,  -718,
    -718,  -718,   703,   706,  -718,   418,  -718,  -718,  -718,  -718,
    -718,  -718,   547,  -718,  -718,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -718,   421,   263,  -718,  -718,  -718,  -718,  -718,
    -718,  -718,  -170,   967,  -718,  -165,  -156,  1192,   707,  -379,
    1246,  1450,  -718,  -266,  -307,  -130,  1161,  -235,  1254,   540,
    1322,  1330,  -718,  1074,  -718,  -718,  -718,  1095,  -718,  -718,
    1046,  -718,  -718,  -718,  -212,  -718,  -718,  -718,  -190,  -718,
    -389,   367,  -327,   798,  -428,   -25,   419,  -429,  -447,  -353,
    -311,  -304,  -410,  -237,  -261,  -718,  1078,  -718,  -718,  -718,
    -238,   322,  -718,  1311,  -718,   680,  -718,   691,  -718,  -718,
    -718,  -718,  -718,  -718,  -366
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    67,   122,    68,   147,    69,   166,
      70,   183,    71,   199,    72,   213,    73,   228,    74,   238,
      75,   254,    14,    15,   266,    16,    17,    18,   275,   460,
      19,    20,    21,    22,    23,    24,    25,    95,    96,   289,
     465,   292,    26,   434,   274,   453,   867,  1102,   435,   699,
     436,   437,    27,    28,    80,    81,   268,   438,    29,   444,
     580,   445,   591,   581,   715,   847,   582,   583,   584,   585,
     586,   587,   848,   849,   850,   588,   842,   989,   990,   991,
     994,   995,   997,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   123,   124,   125,   340,   480,   341,   482,   439,
     440,   443,   126,   742,   880,   127,   740,   869,   128,   629,
     749,   205,   677,   809,   490,   628,   491,   881,   750,  1011,
    1108,   883,   751,   752,  1032,  1033,  1027,  1133,  1141,  1142,
    1034,  1143,  1012,  1114,  1115,  1116,  1117,  1118,  1192,  1145,
    1035,  1146,  1025,  1026,   129,   130,   131,   132,   810,   811,
     812,   813,   516,   483,   271,   753,   754,   133,   872,   538,
     134,   135,   136,   324,   325,   100,   285,   286,   137,   138,
     139,   140,   378,   379,   263,   141,   358,   359,   237,   410,
     411,   360,   412,   413,   361,   415,   362,   363,   364,   365,
     635,   158,   498,   771,  1081,   975,  1044,   779,   780,  1274,
     510,   511,   512,  1212,   939,   159,   529,   176,   177,   178,
     280,   160,   161,   389,   162,   142,   143,   144,   222,   223,
     224,   225,   226,   681,   327
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     560,   468,   469,   366,   367,   382,   369,   481,   515,   517,
     616,   519,   540,   466,   467,   414,   525,   475,   696,   697,
     499,   500,   501,   383,   805,   821,   502,   503,   473,    97,
     507,   678,   679,   481,   481,   823,   481,   416,   513,   700,
     701,    76,   702,   269,  1042,   616,   785,   616,   345,   616,
     462,  1006,   398,    56,   707,   526,   527,   530,    39,   535,
      40,   806,    41,    42,   370,  1109,   644,    43,   544,   546,
     709,    57,   417,   552,   553,   554,  1208,    44,   558,   446,
     531,   447,   448,    79,   449,   450,   561,   568,   477,   569,
     562,   807,   390,    58,   640,   641,   642,   393,    45,    46,
     145,   393,   567,   532,    59,    97,    47,   418,    48,   708,
      60,   391,   637,    49,   454,   524,   455,   456,   457,   458,
      61,   658,   659,   660,   648,   710,   633,   508,    50,    62,
      51,   446,   671,   447,   448,  1110,   449,   450,   634,    63,
     508,   682,   532,   703,   704,   422,   645,   688,   101,   345,
     864,   102,    64,   694,    77,  1111,  1209,   676,   526,   527,
     514,  1112,   113,   114,   818,    98,   475,   542,    65,   690,
     574,   344,   478,    78,   479,   371,    50,   115,   345,    82,
    1028,   589,   590,   116,  1139,   117,   118,  1140,   478,   979,
     479,    83,    79,   276,   277,   278,   279,   518,   414,   520,
      99,   747,   748,   276,   277,   278,   279,   384,   385,   451,
     734,   735,   736,   737,   738,   739,   672,   475,   674,   755,
     416,    84,   808,   345,   874,   531,    85,   345,   686,   687,
      52,   386,   981,   387,  1113,   422,    53,   462,   579,    86,
     864,   380,    87,   732,   830,   784,   786,   698,   532,   533,
     508,   791,   388,   793,   794,   795,   796,   653,   743,   744,
     478,   451,   479,   800,   119,   484,    89,   814,   815,   816,
    1029,  1030,    88,   120,   705,   121,   381,  1094,   875,   876,
     745,   384,   397,   832,   746,   802,   394,    90,   484,  1031,
     844,   747,   748,   110,   845,   846,    54,   345,    91,   422,
     103,    94,   485,   452,   423,   395,   396,   356,   486,   459,
     488,   724,   636,   111,   104,   146,   933,   934,   935,   346,
     347,   486,   647,   488,   634,   348,   349,   350,   351,   352,
     873,   151,   889,   187,   634,   353,   354,   242,   528,   612,
     508,   946,   947,   948,   609,   650,   475,   651,   613,   652,
     955,   528,   675,   865,   689,   834,   355,   276,   277,   278,
     279,   936,   773,   774,   634,   857,   634,   801,   112,   373,
     374,   375,   972,  1094,  1094,  1094,   775,   945,  1241,   634,
     983,   356,   950,   776,   357,   105,   986,   399,   957,   958,
    1242,   179,   195,   962,   963,   106,   250,   758,   614,   760,
     276,   277,   278,   279,   486,   487,   488,   615,   971,   477,
     973,  1000,  1001,  1002,  1003,  1004,  1005,   941,    92,    93,
     547,   548,   549,   550,   792,   400,   401,   402,   403,  1077,
     113,   114,   489,   281,   282,   283,   284,   194,   804,   107,
     514,   249,   264,   865,    50,   115,   822,   824,  1042,   338,
     339,   116,   829,   117,   118,   489,   330,   331,   422,   620,
     424,   425,   108,   423,   866,   868,   877,   879,   621,   109,
     426,   427,   428,   429,   430,   431,   432,   433,   731,   265,
     338,   339,   773,   774,  1037,  1039,  1007,   851,   852,   853,
     854,  1078,  1079,  1080,  1082,  1047,   775,  1049,  1203,   622,
    1204,  1038,  1052,   776,  1054,  1055,  1056,  1057,   623,   478,
     267,   479,  1061,   345,   464,   272,   338,   339,   777,   778,
     624,  1067,  1068,  1069,   783,   281,   282,   283,   284,   625,
     332,   333,   119,  1048,  1084,   338,   339,  1086,  1089,   291,
     478,   120,   479,   121,   504,   505,  1058,   892,   893,   894,
    1062,  1063,  1083,  1085,  1087,   293,  1078,  1079,  1080,   461,
       1,  1104,   273,  1105,   961,  1073,  1074,  1075,  1076,   984,
     536,   537,   404,   616,  1046,   870,   478,   886,   479,  1043,
     574,   287,   575,   165,   871,   493,   887,   980,   982,   555,
     556,   576,   577,   578,  1148,   288,  1078,  1079,  1080,  1078,
    1079,  1080,   294,  1157,   481,   493,  1158,   328,   155,   173,
     191,   209,  1160,  1161,   246,   663,   664,  1165,  1166,   276,
     277,   278,   279,  1170,   326,  1171,   543,   665,   666,   426,
     427,   428,   429,   430,   431,   432,   433,   329,   777,   778,
     334,   494,   495,   496,   497,   113,   114,   335,   579,  1176,
     336,   607,   940,   337,  1178,   342,  1180,   343,  1182,    50,
     115,   494,   495,   496,   497,   368,   116,   937,   117,   118,
     372,  1177,   377,  1179,  1040,  1181,   376,  1183,   426,   427,
     428,   429,   430,   431,   432,   433,  1051,   419,  1120,  1121,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1129,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   420,  1215,   667,
     668,  1071,  1218,  1151,  1152,  1153,  1221,  1222,   442,   182,
     669,   670,  1088,  1106,  1107,  1227,  1228,  1229,  1230,   743,
     744,   295,   421,   296,   297,   298,   299,   300,   301,  1095,
    1096,  1097,  1098,  1099,  1100,   711,   712,   119,   163,   180,
     196,   745,   441,   198,   251,   746,   120,   463,   121,   164,
     181,   197,   747,   748,   471,   252,  1231,   476,  1233,   212,
    1235,   302,  1237,  1078,  1079,  1080,  1147,   303,   713,   714,
     304,   113,   114,  1189,   492,  1266,  1154,  1268,  1156,  1270,
    1014,  1272,  1090,  1091,  1092,    50,   115,   976,   977,   978,
    1162,   506,   116,   523,   117,   118,  1167,  1168,  1169,   718,
     719,   508,   493,   720,   721,   113,   114,   521,  1277,   539,
    1279,   541,  1281,   551,  1283,  1273,  1273,  1273,  1184,    50,
     115,   113,   114,   545,   508,   799,   116,   557,   117,   118,
    1210,  1210,  1210,  1186,  1187,    50,   115,  1211,  1211,  1211,
     305,   563,   116,   306,   117,   118,   855,   856,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,   494,   495,
     496,   497,   281,   282,   283,   284,   564,   307,   566,   308,
     567,   309,   570,   119,   310,   424,   425,  1207,   508,   956,
     835,   836,   120,   571,   121,   573,  1216,  1217,   572,  1219,
    1220,   227,  1275,  1276,  1223,  1224,   594,   311,   312,  1225,
    1226,   595,   313,   314,   315,  1213,  1214,   119,   596,   316,
     597,   317,   598,   318,   319,   599,   120,   600,   121,   320,
     321,   322,   323,   295,   605,   296,   297,   298,   299,   300,
     301,   601,   120,   602,   121,   606,   474,    97,   426,   427,
     428,   429,   430,   431,  1257,   433,   603,  1258,   610,   604,
    1259,  1260,   611,   113,   114,   618,  1261,  1262,  1263,  1264,
     619,   626,   627,   302,   646,   630,   631,    50,   115,   303,
     253,   632,   304,   638,   116,   639,   117,   118,   508,   295,
     643,   296,   297,   298,   299,   300,   301,   766,   767,   768,
     769,   770,   508,   649,   655,  1278,   656,  1280,   657,  1282,
     661,  1284,   662,   673,   680,   683,  1285,   684,  1286,   685,
    1287,   691,  1288,   692,   346,   347,   693,   706,   708,   302,
     348,   349,   350,   351,   352,   303,   710,   717,   304,   722,
     353,   354,   113,   114,   148,   167,   184,   200,   214,   229,
     239,   255,   305,   723,   725,   306,    50,   115,   726,   727,
     728,   730,   729,   116,   741,   117,   118,   733,   756,   757,
     759,   761,   762,   763,   120,   764,   121,   765,   772,   307,
     788,   308,   781,   309,   789,   790,   310,   149,   168,   185,
     201,   215,   230,   240,   256,   797,   798,   819,   295,   803,
     296,   297,   298,   299,   300,   301,   820,   825,   305,   311,
     312,   306,   817,   826,   313,   314,   315,   827,   828,   831,
     833,   316,   698,   317,   837,   318,   319,   838,   839,   840,
     841,   320,   321,   322,   323,   307,  -294,   308,   302,   309,
     858,   843,   310,   859,   303,   860,   861,   304,   608,   862,
     863,   890,   891,   120,   295,   121,   296,   297,   298,   299,
     300,   301,   929,   930,   931,   311,   312,   932,   938,   943,
     313,   314,   315,   942,   944,   949,   951,   316,   952,   317,
     953,   318,   319,   345,   954,   959,   960,   320,   321,   322,
     323,   964,   965,   968,   302,   966,   967,   987,   508,   969,
     303,   970,   974,   304,   654,   985,   988,  -296,  -298,  -300,
     992,   348,   349,   350,   351,   352,   405,   305,   993,  1008,
     306,   406,   996,   407,   408,   409,   348,   349,   350,   351,
     352,   405,   998,   999,  1009,  1010,   406,  1036,   407,   408,
     409,  1041,  1045,  1050,   307,  1053,   308,  1059,   309,  1060,
    1064,   310,   150,   169,   186,   202,   216,   231,   241,   257,
     152,   170,   188,   206,   217,   232,   243,   258,  1065,  1070,
    1066,  1101,  1072,   305,   311,   312,   306,  1103,  1134,   313,
     314,   315,  1119,  1136,  1135,  1144,   316,  1149,   317,  1155,
     318,   319,  1137,  1159,  1163,  1164,   320,   321,   322,   323,
     307,  1172,   308,  1173,   309,  1174,  1175,   310,  1190,  1185,
    1188,  1191,  1232,   782,   153,   171,   189,   207,   218,   233,
     244,   259,   154,   172,   190,   208,   219,   234,   245,   260,
     311,   312,  1234,  1206,  1193,   313,   314,   315,  1194,  1195,
    1196,  1197,   316,  1198,   317,  1199,   318,   319,  1200,  1201,
    1202,  1205,   320,   321,   322,   323,   895,   896,   897,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     156,   174,   192,   210,   220,   235,   247,   261,   157,   175,
     193,   211,   221,   236,   248,   262,  1236,  1238,  1239,  1240,
    1253,  1243,  1244,  1245,  1246,  1247,  1248,  1249,  1254,  1250,
    1251,  1252,  1255,  1256,  1265,  1267,  1269,  1271,    66,   290,
     695,   270,   470,   592,   878,   565,   716,   593,  1093,   203,
     204,   882,  1131,  1132,  1013,   884,  1130,   617,   885,   888,
    1138,    55,   522,   509,   472,   787,   559,   392,     0,     0,
       0,     0,  1150,   534
};

static const yytype_int16 yycheck[] =
{
     410,   289,   289,   113,   114,   135,   116,   340,   366,   367,
     480,   369,   391,   289,   289,   227,   382,   324,    21,    22,
     347,   348,   349,     7,    17,    39,   353,   354,   294,    81,
     357,   548,   549,   366,   367,    39,   369,   227,   365,    20,
      21,    12,    23,    84,    56,   515,    52,   517,   133,   519,
     285,    36,     7,   131,    28,    21,    22,   384,     9,   386,
      11,    54,    13,    14,   133,    87,    53,    18,   395,   396,
      28,   131,   157,   400,   401,   402,    53,    28,   405,    29,
     191,    31,    32,   124,    34,    35,   413,   124,    84,   126,
     417,    84,   217,   131,   504,   505,   506,     7,    49,    50,
       3,     7,    87,   214,   131,    81,    57,   192,    59,    83,
     131,   236,   501,    64,    58,   381,    60,    61,    62,    63,
     131,   531,   532,   533,   513,    83,   133,   133,    79,   131,
      81,    29,   542,    31,    32,   157,    34,    35,   145,   131,
     133,   551,   214,   124,   125,    28,   133,   557,    64,   133,
      33,    67,   131,   563,   125,   177,   133,   546,    21,    22,
      84,   183,    65,    66,   681,   217,   473,   239,     0,   558,
      15,     7,   184,   133,   186,   244,    79,    80,   133,    70,
      68,    26,    27,    86,   243,    88,    89,   246,   184,    39,
     186,    82,   124,   207,   208,   209,   210,   367,   410,   369,
     252,    84,    85,   207,   208,   209,   210,   191,   192,   159,
     620,   621,   622,   623,   624,   625,   543,   524,   545,   629,
     410,   252,   215,   133,    17,   191,   125,   133,   555,   556,
     181,   215,    39,   217,   256,    28,   187,   472,    83,   125,
      33,   217,   252,   609,   691,   655,   656,   250,   214,   215,
     133,   661,   236,   663,   664,   665,   666,   523,    51,    52,
     184,   159,   186,   673,   167,    68,   125,   677,   678,   679,
     158,   159,   133,   176,   255,   178,   252,   994,    71,    72,
      73,   191,   192,   693,    77,   674,   192,   126,    68,   177,
      25,    84,    85,    17,    29,    30,   247,   133,   252,    28,
     216,   242,    82,   253,    33,   211,   212,   217,   184,   253,
     186,   599,   133,    37,    67,   218,   763,   764,   765,   155,
     156,   184,   133,   186,   145,   161,   162,   163,   164,   165,
     740,    68,   742,    70,   145,   171,   172,    74,   214,   124,
     133,   788,   789,   790,   474,   515,   653,   517,   133,   519,
     797,   214,   133,   236,   133,   253,   192,   207,   208,   209,
     210,   771,    65,    66,   145,   731,   145,   133,     3,   168,
     169,   170,   819,  1090,  1091,  1092,    79,   787,   245,   145,
     827,   217,   792,    86,   220,    67,   833,     7,   798,   799,
     257,    69,    70,   803,   804,    67,    74,   635,   124,   637,
     207,   208,   209,   210,   184,   185,   186,   133,   818,    84,
     820,   858,   859,   860,   861,   862,   863,   783,   179,   180,
     223,   224,   225,   226,   662,    45,    46,    47,    48,   133,
      65,    66,   235,   127,   128,   129,   130,    70,   676,    17,
      84,    74,    10,   236,    79,    80,   684,   685,    56,   124,
     125,    86,   690,    88,    89,   235,   124,   125,    28,   124,
     189,   190,    67,    33,   740,   740,   742,   742,   133,    67,
     199,   200,   201,   202,   203,   204,   205,   206,   608,    65,
     124,   125,    65,    66,   931,   932,   865,   725,   726,   727,
     728,   195,   196,   197,   133,   942,    79,   944,   124,   124,
     126,    84,   949,    86,   951,   952,   953,   954,   133,   184,
      70,   186,   959,   133,    84,   133,   124,   125,   221,   222,
     124,   968,   969,   970,   654,   127,   128,   129,   130,   133,
     124,   125,   167,   943,   133,   124,   125,   133,   985,   240,
     184,   176,   186,   178,   237,   238,   956,    74,    75,    76,
     960,   961,   980,   981,   982,   252,   195,   196,   197,   253,
       8,  1008,   125,  1010,   802,   975,   976,   977,   978,   830,
     250,   251,   192,  1043,   940,   740,   184,   742,   186,   937,
      15,   125,    17,     3,   740,   192,   742,   825,   826,    46,
      47,    26,    27,    28,  1041,   133,   195,   196,   197,   195,
     196,   197,   252,  1050,   937,   192,  1053,   125,    68,    69,
      70,    71,  1059,  1060,    74,   124,   125,  1064,  1065,   207,
     208,   209,   210,  1070,    55,  1072,   213,   124,   125,   199,
     200,   201,   202,   203,   204,   205,   206,   125,   221,   222,
     125,   248,   249,   250,   251,    65,    66,   125,    83,  1077,
     124,   253,   782,   125,  1082,   124,  1084,   124,  1086,    79,
      80,   248,   249,   250,   251,   126,    86,   777,    88,    89,
     244,  1081,   131,  1083,   935,  1085,   132,  1087,   199,   200,
     201,   202,   203,   204,   205,   206,   947,   124,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    24,  1155,   124,
     125,   972,  1159,   232,   233,   234,  1163,  1164,    69,     3,
     124,   125,   983,  1011,  1011,  1172,  1173,  1174,  1175,    51,
      52,    38,   133,    40,    41,    42,    43,    44,    45,  1000,
    1001,  1002,  1003,  1004,  1005,    26,    27,   167,    68,    69,
      70,    73,   133,     3,    74,    77,   176,   180,   178,    68,
      69,    70,    84,    85,   241,    74,  1176,   133,  1178,     3,
    1180,    78,  1182,   195,   196,   197,  1037,    84,    26,    27,
      87,    65,    66,  1110,    86,  1232,  1047,  1234,  1049,  1236,
      67,  1238,   989,   990,   991,    79,    80,   822,   823,   824,
    1061,   229,    86,   252,    88,    89,  1067,  1068,  1069,    15,
      16,   133,   192,    26,    27,    65,    66,    53,  1265,   216,
    1267,   216,  1269,    38,  1271,  1254,  1255,  1256,  1089,    79,
      80,    65,    66,   213,   133,   134,    86,    38,    88,    89,
    1151,  1152,  1153,  1104,  1105,    79,    80,  1151,  1152,  1153,
     157,   157,    86,   160,    88,    89,   193,   194,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   248,   249,
     250,   251,   127,   128,   129,   130,   133,   184,   252,   186,
      87,   188,   124,   167,   191,   189,   190,  1148,   133,   134,
     696,   697,   176,   124,   178,   124,  1157,  1158,   194,  1160,
    1161,     3,  1255,  1256,  1165,  1166,   254,   214,   215,  1170,
    1171,   254,   219,   220,   221,  1152,  1153,   167,   254,   226,
     254,   228,   254,   230,   231,   254,   176,   254,   178,   236,
     237,   238,   239,    38,   133,    40,    41,    42,    43,    44,
      45,   254,   176,   254,   178,   133,   253,    81,   199,   200,
     201,   202,   203,   204,  1215,   206,   254,  1218,    53,   254,
    1221,  1222,   133,    65,    66,   124,  1227,  1228,  1229,  1230,
     125,   242,    70,    78,     5,   133,   133,    79,    80,    84,
       3,   133,    87,   133,    86,   133,    88,    89,   133,    38,
     133,    40,    41,    42,    43,    44,    45,   194,   195,   196,
     197,   198,   133,   133,   133,  1266,    87,  1268,   133,  1270,
      87,  1272,   133,   133,    73,   133,  1277,   133,  1279,   133,
    1281,     5,  1283,   133,   155,   156,   133,   124,    83,    78,
     161,   162,   163,   164,   165,    84,    83,   125,    87,   125,
     171,   172,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,   157,   125,   133,   160,    79,    80,   133,   133,
     133,   194,   133,    86,   133,    88,    89,   194,    53,   134,
     134,   134,   134,     5,   176,     5,   178,     5,    53,   184,
       5,   186,   194,   188,     5,     5,   191,    68,    69,    70,
      71,    72,    73,    74,    75,     5,   133,     5,    38,   134,
      40,    41,    42,    43,    44,    45,   134,   133,   157,   214,
     215,   160,   227,   133,   219,   220,   221,     5,   134,   134,
       5,   226,   250,   228,   124,   230,   231,   125,   125,   125,
     254,   236,   237,   238,   239,   184,   124,   186,    78,   188,
       5,   124,   191,     5,    84,     5,     5,    87,   253,     5,
       5,   124,   124,   176,    38,   178,    40,    41,    42,    43,
      44,    45,   133,   133,     5,   214,   215,     5,     4,   124,
     219,   220,   221,     5,     5,     5,     5,   226,     5,   228,
       5,   230,   231,   133,     5,     5,   134,   236,   237,   238,
     239,   124,   133,     5,    78,   133,   133,   124,   133,     5,
      84,     5,   194,    87,   253,     5,   124,   124,   124,   124,
     124,   161,   162,   163,   164,   165,   166,   157,   124,     5,
     160,   171,    19,   173,   174,   175,   161,   162,   163,   164,
     165,   166,   125,   125,   124,     5,   171,   194,   173,   174,
     175,     5,     3,     5,   184,     5,   186,     5,   188,     5,
       5,   191,    68,    69,    70,    71,    72,    73,    74,    75,
      68,    69,    70,    71,    72,    73,    74,    75,     5,     5,
     194,   248,     5,   157,   214,   215,   160,   124,   124,   219,
     220,   221,   125,   133,   124,   182,   226,    88,   228,     5,
     230,   231,   125,     5,     5,     5,   236,   237,   238,   239,
     184,     5,   186,     5,   188,     5,     5,   191,   125,   133,
     124,   124,     5,   253,    68,    69,    70,    71,    72,    73,
      74,    75,    68,    69,    70,    71,    72,    73,    74,    75,
     214,   215,     5,   124,   133,   219,   220,   221,   133,   133,
     133,   133,   226,   133,   228,   133,   230,   231,   133,   133,
     133,   133,   236,   237,   238,   239,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      68,    69,    70,    71,    72,    73,    74,    75,    68,    69,
      70,    71,    72,    73,    74,    75,     5,     5,   197,   133,
      53,   134,   134,   134,   134,   134,   134,   134,     5,   134,
     134,   134,     5,     5,     5,     5,     5,     5,    12,    95,
     566,    80,   290,   445,   742,   421,   583,   445,   992,    71,
      71,   742,  1027,  1027,   897,   742,  1025,   480,   742,   742,
    1032,     1,   378,   358,   293,   657,   410,   146,    -1,    -1,
      -1,    -1,  1043,   385
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   259,   260,   261,   280,   281,   283,   284,   285,   288,
     289,   290,   291,   292,   293,   294,   300,   310,   311,   316,
     341,   342,   343,   344,   345,   346,   347,   348,   349,     9,
      11,    13,    14,    18,    28,    49,    50,    57,    59,    64,
      79,    81,   181,   187,   247,   419,   131,   131,   131,   131,
     131,   131,   131,   131,   131,     0,   261,   262,   264,   266,
     268,   270,   272,   274,   276,   278,    12,   125,   133,   124,
     312,   313,    70,    82,   252,   125,   125,   252,   133,   125,
     126,   252,   179,   180,   242,   295,   296,    81,   217,   252,
     423,    64,    67,   216,    67,    67,    67,    17,    67,    67,
      17,    37,     3,    65,    66,    80,    86,    88,    89,   167,
     176,   178,   263,   350,   351,   352,   360,   363,   366,   402,
     403,   404,   405,   415,   418,   419,   420,   426,   427,   428,
     429,   433,   473,   474,   475,     3,   218,   265,   350,   351,
     352,   402,   415,   418,   426,   427,   428,   429,   449,   463,
     469,   470,   472,   473,   475,     3,   267,   350,   351,   352,
     415,   418,   426,   427,   428,   429,   465,   466,   467,   469,
     473,   475,     3,   269,   350,   351,   352,   402,   415,   418,
     426,   427,   428,   429,   449,   469,   473,   475,     3,   271,
     350,   351,   352,   360,   363,   369,   415,   418,   426,   427,
     428,   429,     3,   273,   350,   351,   352,   415,   418,   426,
     428,   429,   476,   477,   478,   479,   480,     3,   275,   350,
     351,   352,   415,   418,   426,   428,   429,   436,   277,   350,
     351,   352,   402,   415,   418,   426,   427,   428,   429,   449,
     469,   473,   475,     3,   279,   350,   351,   352,   415,   418,
     426,   428,   429,   432,    10,    65,   282,    70,   314,    84,
     313,   412,   133,   125,   302,   286,   207,   208,   209,   210,
     468,   127,   128,   129,   130,   424,   425,   125,   133,   297,
     296,   240,   299,   252,   252,    38,    40,    41,    42,    43,
      44,    45,    78,    84,    87,   157,   160,   184,   186,   188,
     191,   214,   215,   219,   220,   221,   226,   228,   230,   231,
     236,   237,   238,   239,   421,   422,    55,   482,   125,   125,
     124,   125,   124,   125,   125,   125,   124,   125,   124,   125,
     353,   355,   124,   124,     7,   133,   155,   156,   161,   162,
     163,   164,   165,   171,   172,   192,   217,   220,   434,   435,
     439,   442,   444,   445,   446,   447,   353,   353,   126,   353,
     133,   244,   244,   168,   169,   170,   132,   131,   430,   431,
     217,   252,   423,     7,   191,   192,   215,   217,   236,   471,
     217,   236,   471,     7,   192,   211,   212,   192,     7,     7,
      45,    46,    47,    48,   192,   166,   171,   173,   174,   175,
     437,   438,   440,   441,   442,   443,   446,   157,   192,   124,
      24,   133,    28,    33,   189,   190,   199,   200,   201,   202,
     203,   204,   205,   206,   301,   306,   308,   309,   315,   357,
     358,   133,    69,   359,   317,   319,    29,    31,    32,    34,
      35,   159,   253,   303,    58,    60,    61,    62,    63,   253,
     287,   253,   425,   180,    84,   298,   301,   306,   308,   309,
     299,   241,   424,   421,   253,   422,   133,    84,   184,   186,
     354,   355,   356,   411,    68,    82,   184,   185,   186,   235,
     372,   374,    86,   192,   248,   249,   250,   251,   450,   450,
     450,   450,   450,   450,   237,   238,   229,   450,   133,   435,
     458,   459,   460,   450,    84,   354,   410,   354,   410,   354,
     410,    53,   431,   252,   421,   482,    21,    22,   214,   464,
     450,   191,   214,   215,   464,   450,   250,   251,   417,   216,
     417,   216,   239,   213,   450,   213,   450,   223,   224,   225,
     226,    38,   450,   450,   450,    46,    47,    38,   450,   438,
     460,   450,   450,   157,   133,   314,   252,    87,   124,   126,
     124,   124,   194,   124,    15,    17,    26,    27,    28,    83,
     318,   321,   324,   325,   326,   327,   328,   329,   333,    26,
      27,   320,   326,   333,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   133,   133,   253,   253,   423,
      53,   133,   124,   133,   124,   133,   356,   411,   124,   125,
     124,   133,   124,   133,   124,   133,   242,    70,   373,   367,
     133,   133,   133,   133,   145,   448,   133,   448,   133,   133,
     460,   460,   460,   133,    53,   133,     5,   133,   448,   133,
     410,   410,   410,   421,   253,   133,    87,   133,   460,   460,
     460,    87,   133,   124,   125,   124,   125,   124,   125,   124,
     125,   460,   450,   133,   450,   133,   448,   370,   370,   370,
      73,   481,   460,   133,   133,   133,   450,   450,   460,   133,
     448,     5,   133,   133,   460,   302,    21,    22,   250,   307,
      20,    21,    23,   124,   125,   255,   124,    28,    83,    28,
      83,    26,    27,    26,    27,   322,   322,   125,    15,    16,
      26,    27,   125,   125,   308,   133,   133,   133,   133,   133,
     194,   423,   482,   194,   460,   460,   460,   460,   460,   460,
     364,   133,   361,    51,    52,    73,    77,    84,    85,   368,
     376,   380,   381,   413,   414,   460,    53,   134,   468,   134,
     468,   134,   134,     5,     5,     5,   194,   195,   196,   197,
     198,   451,    53,    65,    66,    79,    86,   221,   222,   455,
     456,   194,   253,   423,   460,    52,   460,   451,     5,     5,
       5,   460,   468,   460,   460,   460,   460,     5,   133,   134,
     460,   133,   448,   134,   468,    17,    54,    84,   215,   371,
     406,   407,   408,   409,   460,   460,   460,   227,   370,     5,
     134,    39,   468,    39,   468,   133,   133,     5,   134,   468,
     456,   134,   460,     5,   253,   307,   307,   124,   125,   125,
     125,   254,   334,   124,    25,    29,    30,   323,   330,   331,
     332,   468,   468,   468,   468,   193,   194,   482,     5,     5,
       5,     5,     5,     5,    33,   236,   301,   304,   306,   365,
     413,   414,   416,   460,    17,    71,    72,   301,   304,   306,
     362,   375,   376,   379,   380,   381,   413,   414,   416,   460,
     124,   124,    74,    75,    76,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   133,
     133,     5,     5,   456,   456,   456,   460,   353,     4,   462,
     423,   482,     5,   124,     5,   460,   456,   456,   456,     5,
     460,     5,     5,     5,     5,   456,   134,   460,   460,     5,
     134,   468,   460,   460,   124,   133,   133,   133,     5,     5,
       5,   460,   456,   460,   194,   453,   453,   453,   453,    39,
     468,    39,   468,   456,   462,     5,   456,   124,   124,   335,
     336,   337,   124,   124,   338,   339,    19,   340,   125,   125,
     456,   456,   456,   456,   456,   456,    36,   417,     5,   124,
       5,   377,   390,   390,    67,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   400,   401,   384,    68,   158,
     159,   177,   382,   383,   388,   398,   194,   456,    84,   456,
     462,     5,    56,   354,   454,     3,   482,   456,   460,   456,
       5,   462,   456,     5,   456,   456,   456,   456,   460,     5,
       5,   456,   460,   460,     5,     5,   194,   456,   456,   456,
       5,   462,     5,   460,   460,   460,   460,   133,   195,   196,
     197,   452,   133,   452,   133,   452,   133,   452,   462,   456,
     338,   338,   338,   340,   339,   462,   462,   462,   462,   462,
     462,   248,   305,   124,   456,   456,   308,   309,   378,    87,
     157,   177,   183,   256,   391,   392,   393,   394,   395,   125,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     401,   357,   358,   385,   124,   124,   133,   125,   383,   243,
     246,   386,   387,   389,   182,   397,   399,   462,   456,    88,
     454,   232,   233,   234,   462,     5,   462,   456,   456,     5,
     456,   456,   462,     5,     5,   456,   456,   462,   462,   462,
     456,   456,     5,     5,     5,     5,   452,   460,   452,   460,
     452,   460,   452,   460,   462,   133,   462,   462,   124,   450,
     125,   124,   396,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   124,   126,   133,   124,   462,    53,   133,
     458,   459,   461,   461,   461,   456,   462,   462,   456,   462,
     462,   456,   456,   462,   462,   462,   462,   456,   456,   456,
     456,   460,     5,   460,     5,   460,     5,   460,     5,   197,
     133,   245,   257,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,    53,     5,     5,     5,   462,   462,   462,
     462,   462,   462,   462,   462,     5,   456,     5,   456,     5,
     456,     5,   456,   455,   457,   457,   457,   456,   462,   456,
     462,   456,   462,   456,   462,   462,   462,   462,   462
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   258,   259,   259,   260,   260,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   262,   262,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   264,   264,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   266,   266,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   268,
     268,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   272,
     272,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   274,   274,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   276,   276,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   278,   278,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   280,   280,   280,   281,   282,   282,   283,   284,
     285,   286,   286,   287,   287,   287,   287,   287,   287,   288,
     289,   289,   289,   290,   290,   290,   291,   292,   293,   294,
     295,   295,   296,   297,   297,   298,   298,   298,   298,   298,
     299,   299,   300,   301,   301,   302,   302,   303,   303,   303,
     303,   303,   303,   303,   303,   304,   305,   305,   306,   306,
     306,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     309,   310,   311,   312,   312,   313,   313,   314,   314,   315,
     315,   315,   315,   315,   315,   316,   316,   317,   317,   318,
     318,   318,   318,   319,   319,   320,   320,   321,   321,   322,
     322,   323,   323,   323,   324,   324,   325,   325,   326,   326,
     327,   327,   328,   328,   329,   330,   331,   332,   333,   333,
     333,   333,   333,   333,   334,   333,   335,   333,   336,   333,
     337,   333,   333,   338,   338,   339,   340,   340,   341,   341,
     341,   341,   342,   343,   343,   344,   345,   346,   346,   347,
     348,   349,   349,   350,   350,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   355,   356,   356,   356,   356,   357,
     357,   358,   359,   359,   360,   361,   361,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   364,
     364,   365,   365,   365,   365,   365,   365,   366,   367,   367,
     368,   368,   368,   368,   368,   369,   369,   369,   369,   370,
     370,   371,   371,   371,   371,   372,   372,   373,   374,   375,
     375,   376,   376,   376,   377,   377,   378,   378,   379,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   381,   381,   382,   382,   383,   383,   383,
     383,   384,   384,   385,   385,   386,   386,   387,   388,   388,
     389,   389,   390,   390,   391,   391,   391,   391,   391,   392,
     393,   394,   395,   396,   396,   397,   398,   398,   399,   400,
     400,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   410,   411,   411,   412,   412,   413,   414,   415,   415,
     416,   417,   417,   418,   418,   418,   418,   419,   420,   421,
     421,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     423,   423,   424,   424,   425,   425,   425,   425,   426,   426,
     426,   427,   427,   427,   428,   429,   430,   430,   431,   432,
     432,   433,   434,   434,   435,   435,   435,   435,   435,   436,
     437,   437,   438,   438,   438,   438,   439,   439,   440,   441,
     441,   441,   441,   442,   442,   442,   442,   443,   443,   444,
     445,   446,   447,   447,   447,   448,   448,   449,   449,   450,
     450,   450,   450,   450,   450,   451,   451,   451,   451,   451,
     451,   452,   452,   452,   453,   453,   454,   454,   454,   455,
     455,   455,   455,   455,   455,   455,   456,   457,   458,   459,
     460,   460,   460,   461,   461,   461,   462,   462,   462,   462,
     463,   463,   463,   464,   464,   464,   465,   465,   465,   465,
     466,   466,   466,   466,   467,   468,   468,   468,   468,   468,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   470,
     471,   471,   472,   472,   473,   473,   474,   474,   475,   475,
     476,   477,   478,   479,   479,   479,   479,   479,   479,   480,
     480,   480,   480,   480,   480,   481,   482,   482,   482
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     1,     2,     2,     2,     2,
       2,     0,     2,     1,     1,     2,     2,     2,     0,     2,
       1,     1,     0,     2,     1,     1,     1,     1,     3,     3,
       2,     2,     2,     0,     2,     2,     0,     2,     1,     1,
       2,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     7,     6,     6,     9,     2,     2,     3,     2,
       0,     3,     0,     3,     0,     3,     3,     2,     7,     7,
       3,     1,     1,     3,     6,     7,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     1,     1,     1,     1,     3,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     8,
       6,     6,     1,     2,     1,     1,     1,     1,     1,     6,
       1,     2,     1,     1,     1,     1,     4,     4,     4,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     9,     6,     0,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     3,     4,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     2,     3,
       0,     1,     1,     0,     1,     1,     0,     6,     6,     6,
       8,    10,     7,     0,     1,     1,     8,     9,     9,    10,
       9,     9,    10,    10,     6,     0,     1,     1,     1,     1,
       8,     7,     7,     7,     4,     4,     7,     7,     4,     4,
       0,     1,     9,     6,     8,     8,     8,     8,     8,     8,
       7,     7,     9,    10,    11,    12,    10,    11,    12,    10,
      11,    12,    10,    11,    12,     2,     0,     2,     3
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
#line 561 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3034 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 565 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3042 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 568 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 574 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.flags      |= Run_Daemon;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 3064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 584 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 3070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 585 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 3076 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 588 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3084 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 593 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3093 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 606 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 609 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 612 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 615 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3125 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 618 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number);
                  }
#line 3133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 621 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout= (yyvsp[-1].number) * 1000;
                  }
#line 3141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 626 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3149 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 631 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.log || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.flags &= ~Run_UseSyslog;
                     Run.flags |= Run_Log;
                   }
                  }
#line 3162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 639 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 3170 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 642 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3178 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 647 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3186 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 650 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 654 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 660 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.id = (yyvsp[0].string);
                  }
#line 3212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 665 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.state = (yyvsp[0].string);
                  }
#line 3220 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 670 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.pid || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 3231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 685 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 695 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 705 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 710 "src/p.y" /* yacc.c:1646  */
    {
                        Run.ssl.use_ssl = true;
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
#line 3276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 727 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                  }
#line 3284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 737 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.verify = true;
                  }
#line 3293 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 741 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.verify = false;
                  }
#line 3302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 745 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.allowSelfSigned = true;
                  }
#line 3311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 749 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.allowSelfSigned = false;
                  }
#line 3320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 753 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                  }
#line 3328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 756 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.clientpemfile = (yyvsp[0].string);
                        if (! File_exist(sslset.clientpemfile))
                                yyerror2("SSL client PEM file doesn't exist");
                        else if (! File_isFile(sslset.clientpemfile))
                                yyerror2("SSL client PEM file is not a file");
                        else if (! File_isReadable(sslset.clientpemfile))
                                yyerror2("Cannot read SSL client PEM file");
                  }
#line 3343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 766 "src/p.y" /* yacc.c:1646  */
    {
                        if (sslset.CACertificateFile)
                                yyerror2("Duplicate SSL CA certificates file doesn't exist");
                        sslset.use_ssl = true;
                        sslset.CACertificateFile = (yyvsp[0].string);
                        if (! File_exist(sslset.CACertificateFile))
                                yyerror2("SSL CA certificates file doesn't exist");
                        else if (! File_isFile(sslset.CACertificateFile))
                                yyerror2("SSL CA certificates file is not a file");
                        else if (! File_isReadable(sslset.CACertificateFile))
                                yyerror2("Cannot read CA certificates file");
                  }
#line 3360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 778 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.CACertificatePath = (yyvsp[0].string);
                        if (! File_exist(sslset.CACertificatePath))
                                yyerror2("SSL CA certificates directory doesn't exist");
                        else if (! File_isDirectory(sslset.CACertificatePath))
                                yyerror2("SSL CA certificates path is not directory");
                        else if (! File_isReadable(sslset.CACertificatePath))
                                yyerror2("Cannot read CA certificates directory");
                  }
#line 3375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 790 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.minimumValidDays = (yyvsp[-1].number);
                  }
#line 3384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 800 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
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
#line 3403 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 814 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3415 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 834 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.version = SSL_V2;
                  }
#line 3436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 838 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.version = SSL_V3;
                  }
#line 3445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 842 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.version = SSL_TLSV1;
                  }
#line 3454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 847 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.use_ssl = true;
                        sslset.version = SSL_TLSV11;
                }
#line 3466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 855 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.use_ssl = true;
                        sslset.version = SSL_TLSV12;
                }
#line 3478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 862 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.version = SSL_Auto;
                  }
#line 3487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 866 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        sslset.version = SSL_Auto;
                  }
#line 3496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 872 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.use_ssl = true;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 881 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                        Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 888 "src/p.y" /* yacc.c:1646  */
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 3530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 901 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 910 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3558 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 925 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 928 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 937 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 941 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 965 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 968 "src/p.y" /* yacc.c:1646  */
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
#line 3616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 998 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3624 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1001 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1014 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1019 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1024 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3658 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1031 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3666 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1036 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1039 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1047 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3696 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1051 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1055 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1059 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3723 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1063 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3732 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1067 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1070 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3749 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1074 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1077 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3766 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1081 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3774 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1084 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1088 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3791 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1091 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1108 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3816 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1109 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3830 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1115 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3838 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1118 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1125 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3862 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3878 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1142 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3886 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1147 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3902 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1157 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1165 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1171 "src/p.y" /* yacc.c:1646  */
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
#line 3939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1183 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1188 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1195 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3971 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1204 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3979 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1207 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1212 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1215 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 4003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1221 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1224 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1237 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4027 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1240 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1245 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1249 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1253 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4061 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1256 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1261 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1264 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1269 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4093 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1277 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1282 "src/p.y" /* yacc.c:1646  */
    {
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1308 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-5].url));
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 4131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1327 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4140 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1344 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4151 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1355 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1360 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1377 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1380 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1385 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1390 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4214 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1396 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 4222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1399 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 4230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1404 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 4238 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1407 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                    portset.type = Socket_Tcp;
                    sslset.use_ssl = true;
                  }
#line 4247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1411 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 4255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1424 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1432 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1435 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1438 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1441 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1444 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1447 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1452 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4329 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1455 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4339 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1460 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4347 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1463 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4355 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1466 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4363 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1469 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4371 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1472 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1475 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4387 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1478 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4395 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1481 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4404 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1485 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1488 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4420 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1491 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1499 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1502 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.use_ssl = true;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1507 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1510 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1513 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1516 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1519 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1522 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1525 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1528 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4520 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1531 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1534 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4536 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1537 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1542 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1546 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1556 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1559 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1562 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1565 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4594 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1574 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username lengh is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1582 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1587 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1595 "src/p.y" /* yacc.c:1646  */
    {
                     (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4639 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1604 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4647 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1607 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1623 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.operator = (yyvsp[-1].number);
                    portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1629 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1635 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 4681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1640 "src/p.y" /* yacc.c:1646  */
    {
                    addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                    FREE((yyvsp[0].string));
                  }
#line 4690 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1647 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 4698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1652 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1661 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 4714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1670 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 4722 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1673 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 4731 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1677 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 4740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1681 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4749 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1685 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4758 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1689 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 4767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1693 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1697 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 4785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1701 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4794 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1705 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4803 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1709 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4812 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1715 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4821 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1722 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4830 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4839 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1734 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1741 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 4858 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1746 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 4866 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1751 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 4874 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1756 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 4882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1761 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4890 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1764 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1769 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1772 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4914 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1777 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = Run.limits.networkTimeout;
                  }
#line 4922 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1780 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1785 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 4938 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1790 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1795 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4957 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1801 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1809 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4977 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1815 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1816 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4989 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1819 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4998 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1823 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1826 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5015 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1830 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1835 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5029 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1838 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1845 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5041 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1846 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5047 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1847 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1848 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1849 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5065 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1850 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1851 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1852 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1853 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 5089 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1854 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5095 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1855 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1856 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1857 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1858 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1859 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 5125 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1860 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1861 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5137 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1862 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5143 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1863 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5149 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1864 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5155 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1865 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1866 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5167 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1867 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1868 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5179 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1869 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5185 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1870 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5191 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1871 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1872 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5203 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1873 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5209 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1884 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 5215 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1885 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 5221 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1886 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1887 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5233 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1890 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1894 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5251 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1898 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1904 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 5268 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1907 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 5276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1910 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 5285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1916 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1930 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5312 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1940 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1949 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5333 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1966 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1982 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 1987 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 1994 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2001 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5378 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2002 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2003 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5390 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2004 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2007 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2012 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2017 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5426 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2022 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2029 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2034 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (yyvsp[-1].number);
                  }
#line 5456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2041 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Threads;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2048 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].number);
                  }
#line 5476 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2055 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (yyvsp[0].real);
                  }
#line 5486 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2062 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5492 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2063 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5498 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2064 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2067 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2068 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5516 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2071 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, false);
                  }
#line 5527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2077 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset, true);
                  }
#line 5537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2084 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2085 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2086 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2087 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2088 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2089 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2092 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2093 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2094 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2095 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5597 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2096 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2097 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5609 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2100 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2101 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2102 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2104 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5633 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2105 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5639 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2107 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 5647 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2110 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 5655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2113 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 5666 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2121 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 5674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2124 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2128 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 5690 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2131 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 5698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2134 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 5706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2137 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 5714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2140 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 5722 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2145 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat1 = repeat;
                      repeat = 0;
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2156 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      repeat2 = repeat;
                      repeat = 0;
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5750 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2167 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 5763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2177 "src/p.y" /* yacc.c:1646  */
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
#line 5778 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2190 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5788 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2195 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2203 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 5808 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2208 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 5818 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2215 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5826 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2218 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2221 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5842 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2224 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2229 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2234 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2240 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5880 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2246 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5886 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2247 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2248 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2251 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2258 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5922 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2265 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2272 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2281 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2290 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2297 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5986 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2306 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (yyvsp[-5].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5998 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2315 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 6007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2321 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6013 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2322 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2323 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2324 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6031 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2325 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2328 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 6047 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2333 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 6057 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2340 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2348 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6082 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2355 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6095 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2363 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2371 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 6119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2378 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6130 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2384 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 6142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2391 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2399 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 6161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2402 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 6169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2408 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 6180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2414 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 6190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2421 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2427 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6211 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2434 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2440 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 6232 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2447 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 6243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2453 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 6253 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2460 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 6262 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2466 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 6271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2471 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 6282 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2479 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2487 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2495 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2503 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6334 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2511 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6347 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2519 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2529 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2537 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6386 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2545 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6399 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2553 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2561 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6425 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2569 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2579 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 6444 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2582 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 6450 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2583 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 6456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2584 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 6462 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 6466 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2587 "src/p.y" /* yacc.c:1906  */



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
        int i;

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
        Run.eventlist                = NULL;
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
        for (i = 0; i <= Handler_Max; i++)
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
                if (sslset.use_ssl == true) {
#ifdef HAVE_OPENSSL
                        p->target.net.ssl.use_ssl = true;
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
static void addtimestamp(Timestamp_T ts, boolean_t notime) {
        Timestamp_T t;

        ASSERT(ts);

        NEW(t);
        t->operator     = ts->operator;
        t->time         = ts->time;
        t->action       = ts->action;
        t->test_changes = ts->test_changes;

        if (t->test_changes || notime) {
                if (! File_exist(current->path))
                        DEBUG("The path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", current->path);
                else if (! (t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG)))
                        yyerror2("Cannot get the timestamp for '%s'", current->path);
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
                sslset.use_ssl = true;
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
        c->ssl.use_ssl = sslset.use_ssl;
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
                c->ssl.use_ssl = true;
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

        s->ssl.use_ssl = sslset.use_ssl;
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

