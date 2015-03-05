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
static struct myport portset;
static struct mymailserver mailserverset;
static struct myfilesystem filesystemset;
static struct myresource resourceset;
static struct mychecksum checksumset;
static struct mytimestamp timestampset;
static struct myactionrate actionrateset;
static struct IHavePrecedence ihp = {false, false, false};
static struct myrate rate1 = {1, 1};
static struct myrate rate2 = {1, 1};
static char * htpasswd_file = NULL;
static Digest_Type digesttype = Digest_Cleartext;

#define BITMAP_MAX (sizeof(long long) * 8)


/* -------------------------------------------------------------- Prototypes */

static void  preparse();
static void  postparse();
static void  addmail(char *, Mail_T, Mail_T *);
static Service_T createservice(Service_Type, char *, char *, boolean_t (*)(Service_T));
static void  addservice(Service_T);
static void  adddependant(char *);
static void  addservicegroup(char *);
static void  addport(Port_T *, Port_T);
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
static void  addmmonit(URL_T, int, Ssl_Version, char *);
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
static void  reset_mailset();
static void  reset_mailserverset();
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
static void  reset_rateset();
static void  check_name(char *);
static int   check_perm(int);
static void  check_hostname (char *);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend();
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);


#line 329 "src/y.tab.c" /* yacc.c:339  */

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
    ADDRESS = 271,
    INIT = 272,
    READONLY = 273,
    CLEARTEXT = 274,
    MD5HASH = 275,
    SHA1HASH = 276,
    CRYPT = 277,
    DELAY = 278,
    PEMFILE = 279,
    ENABLE = 280,
    DISABLE = 281,
    HTTPDSSL = 282,
    CLIENTPEMFILE = 283,
    ALLOWSELFCERTIFICATION = 284,
    INTERFACE = 285,
    LINK = 286,
    PACKET = 287,
    ERROR = 288,
    BYTEIN = 289,
    BYTEOUT = 290,
    PACKETIN = 291,
    PACKETOUT = 292,
    SPEED = 293,
    SATURATION = 294,
    UPLOAD = 295,
    DOWNLOAD = 296,
    TOTAL = 297,
    IDFILE = 298,
    STATEFILE = 299,
    SEND = 300,
    EXPECT = 301,
    EXPECTBUFFER = 302,
    CYCLE = 303,
    COUNT = 304,
    REMINDER = 305,
    PIDFILE = 306,
    START = 307,
    STOP = 308,
    PATHTOK = 309,
    HOST = 310,
    HOSTNAME = 311,
    PORT = 312,
    TYPE = 313,
    UDP = 314,
    TCP = 315,
    TCPSSL = 316,
    PROTOCOL = 317,
    CONNECTION = 318,
    ALERT = 319,
    NOALERT = 320,
    MAILFORMAT = 321,
    UNIXSOCKET = 322,
    SIGNATURE = 323,
    TIMEOUT = 324,
    RETRY = 325,
    RESTART = 326,
    CHECKSUM = 327,
    EVERY = 328,
    NOTEVERY = 329,
    DEFAULT = 330,
    HTTP = 331,
    HTTPS = 332,
    APACHESTATUS = 333,
    FTP = 334,
    SMTP = 335,
    SMTPS = 336,
    POP = 337,
    IMAP = 338,
    IMAPS = 339,
    CLAMAV = 340,
    NNTP = 341,
    NTP3 = 342,
    MYSQL = 343,
    DNS = 344,
    WEBSOCKET = 345,
    SSH = 346,
    DWP = 347,
    LDAP2 = 348,
    LDAP3 = 349,
    RDATE = 350,
    RSYNC = 351,
    TNS = 352,
    PGSQL = 353,
    POSTFIXPOLICY = 354,
    SIP = 355,
    LMTP = 356,
    GPS = 357,
    RADIUS = 358,
    MEMCACHE = 359,
    REDIS = 360,
    MONGODB = 361,
    SIEVE = 362,
    STRING = 363,
    PATH = 364,
    MAILADDR = 365,
    MAILFROM = 366,
    MAILREPLYTO = 367,
    MAILSUBJECT = 368,
    MAILBODY = 369,
    SERVICENAME = 370,
    STRINGNAME = 371,
    NUMBER = 372,
    PERCENT = 373,
    LOGLIMIT = 374,
    CLOSELIMIT = 375,
    DNSLIMIT = 376,
    KEEPALIVELIMIT = 377,
    REPLYLIMIT = 378,
    REQUESTLIMIT = 379,
    STARTLIMIT = 380,
    WAITLIMIT = 381,
    GRACEFULLIMIT = 382,
    CLEANUPLIMIT = 383,
    REAL = 384,
    CHECKPROC = 385,
    CHECKFILESYS = 386,
    CHECKFILE = 387,
    CHECKDIR = 388,
    CHECKHOST = 389,
    CHECKSYSTEM = 390,
    CHECKFIFO = 391,
    CHECKPROGRAM = 392,
    CHECKNET = 393,
    CHILDREN = 394,
    SYSTEM = 395,
    STATUS = 396,
    ORIGIN = 397,
    VERSIONOPT = 398,
    RESOURCE = 399,
    MEMORY = 400,
    TOTALMEMORY = 401,
    LOADAVG1 = 402,
    LOADAVG5 = 403,
    LOADAVG15 = 404,
    SWAP = 405,
    MODE = 406,
    ACTIVE = 407,
    PASSIVE = 408,
    MANUAL = 409,
    CPU = 410,
    TOTALCPU = 411,
    CPUUSER = 412,
    CPUSYSTEM = 413,
    CPUWAIT = 414,
    GROUP = 415,
    REQUEST = 416,
    DEPENDS = 417,
    BASEDIR = 418,
    SLOT = 419,
    EVENTQUEUE = 420,
    SECRET = 421,
    HOSTHEADER = 422,
    UID = 423,
    EUID = 424,
    GID = 425,
    MMONIT = 426,
    INSTANCE = 427,
    USERNAME = 428,
    PASSWORD = 429,
    TIMESTAMP = 430,
    CHANGED = 431,
    SECOND = 432,
    MINUTE = 433,
    HOUR = 434,
    DAY = 435,
    MONTH = 436,
    SSLAUTO = 437,
    SSLV2 = 438,
    SSLV3 = 439,
    TLSV1 = 440,
    TLSV11 = 441,
    TLSV12 = 442,
    CERTMD5 = 443,
    BYTE = 444,
    KILOBYTE = 445,
    MEGABYTE = 446,
    GIGABYTE = 447,
    INODE = 448,
    SPACE = 449,
    PERMISSION = 450,
    SIZE = 451,
    MATCH = 452,
    NOT = 453,
    IGNORE = 454,
    ACTION = 455,
    UPTIME = 456,
    EXEC = 457,
    UNMONITOR = 458,
    PING = 459,
    ICMP = 460,
    ICMPECHO = 461,
    NONEXIST = 462,
    EXIST = 463,
    INVALID = 464,
    DATA = 465,
    RECOVERED = 466,
    PASSED = 467,
    SUCCEEDED = 468,
    URL = 469,
    CONTENT = 470,
    PID = 471,
    PPID = 472,
    FSFLAG = 473,
    REGISTER = 474,
    CREDENTIALS = 475,
    URLOBJECT = 476,
    TARGET = 477,
    TIMESPEC = 478,
    HTTPHEADER = 479,
    MAXFORWARD = 480,
    FIPS = 481,
    GREATER = 482,
    LESS = 483,
    EQUAL = 484,
    NOTEQUAL = 485
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
#define ADDRESS 271
#define INIT 272
#define READONLY 273
#define CLEARTEXT 274
#define MD5HASH 275
#define SHA1HASH 276
#define CRYPT 277
#define DELAY 278
#define PEMFILE 279
#define ENABLE 280
#define DISABLE 281
#define HTTPDSSL 282
#define CLIENTPEMFILE 283
#define ALLOWSELFCERTIFICATION 284
#define INTERFACE 285
#define LINK 286
#define PACKET 287
#define ERROR 288
#define BYTEIN 289
#define BYTEOUT 290
#define PACKETIN 291
#define PACKETOUT 292
#define SPEED 293
#define SATURATION 294
#define UPLOAD 295
#define DOWNLOAD 296
#define TOTAL 297
#define IDFILE 298
#define STATEFILE 299
#define SEND 300
#define EXPECT 301
#define EXPECTBUFFER 302
#define CYCLE 303
#define COUNT 304
#define REMINDER 305
#define PIDFILE 306
#define START 307
#define STOP 308
#define PATHTOK 309
#define HOST 310
#define HOSTNAME 311
#define PORT 312
#define TYPE 313
#define UDP 314
#define TCP 315
#define TCPSSL 316
#define PROTOCOL 317
#define CONNECTION 318
#define ALERT 319
#define NOALERT 320
#define MAILFORMAT 321
#define UNIXSOCKET 322
#define SIGNATURE 323
#define TIMEOUT 324
#define RETRY 325
#define RESTART 326
#define CHECKSUM 327
#define EVERY 328
#define NOTEVERY 329
#define DEFAULT 330
#define HTTP 331
#define HTTPS 332
#define APACHESTATUS 333
#define FTP 334
#define SMTP 335
#define SMTPS 336
#define POP 337
#define IMAP 338
#define IMAPS 339
#define CLAMAV 340
#define NNTP 341
#define NTP3 342
#define MYSQL 343
#define DNS 344
#define WEBSOCKET 345
#define SSH 346
#define DWP 347
#define LDAP2 348
#define LDAP3 349
#define RDATE 350
#define RSYNC 351
#define TNS 352
#define PGSQL 353
#define POSTFIXPOLICY 354
#define SIP 355
#define LMTP 356
#define GPS 357
#define RADIUS 358
#define MEMCACHE 359
#define REDIS 360
#define MONGODB 361
#define SIEVE 362
#define STRING 363
#define PATH 364
#define MAILADDR 365
#define MAILFROM 366
#define MAILREPLYTO 367
#define MAILSUBJECT 368
#define MAILBODY 369
#define SERVICENAME 370
#define STRINGNAME 371
#define NUMBER 372
#define PERCENT 373
#define LOGLIMIT 374
#define CLOSELIMIT 375
#define DNSLIMIT 376
#define KEEPALIVELIMIT 377
#define REPLYLIMIT 378
#define REQUESTLIMIT 379
#define STARTLIMIT 380
#define WAITLIMIT 381
#define GRACEFULLIMIT 382
#define CLEANUPLIMIT 383
#define REAL 384
#define CHECKPROC 385
#define CHECKFILESYS 386
#define CHECKFILE 387
#define CHECKDIR 388
#define CHECKHOST 389
#define CHECKSYSTEM 390
#define CHECKFIFO 391
#define CHECKPROGRAM 392
#define CHECKNET 393
#define CHILDREN 394
#define SYSTEM 395
#define STATUS 396
#define ORIGIN 397
#define VERSIONOPT 398
#define RESOURCE 399
#define MEMORY 400
#define TOTALMEMORY 401
#define LOADAVG1 402
#define LOADAVG5 403
#define LOADAVG15 404
#define SWAP 405
#define MODE 406
#define ACTIVE 407
#define PASSIVE 408
#define MANUAL 409
#define CPU 410
#define TOTALCPU 411
#define CPUUSER 412
#define CPUSYSTEM 413
#define CPUWAIT 414
#define GROUP 415
#define REQUEST 416
#define DEPENDS 417
#define BASEDIR 418
#define SLOT 419
#define EVENTQUEUE 420
#define SECRET 421
#define HOSTHEADER 422
#define UID 423
#define EUID 424
#define GID 425
#define MMONIT 426
#define INSTANCE 427
#define USERNAME 428
#define PASSWORD 429
#define TIMESTAMP 430
#define CHANGED 431
#define SECOND 432
#define MINUTE 433
#define HOUR 434
#define DAY 435
#define MONTH 436
#define SSLAUTO 437
#define SSLV2 438
#define SSLV3 439
#define TLSV1 440
#define TLSV11 441
#define TLSV12 442
#define CERTMD5 443
#define BYTE 444
#define KILOBYTE 445
#define MEGABYTE 446
#define GIGABYTE 447
#define INODE 448
#define SPACE 449
#define PERMISSION 450
#define SIZE 451
#define MATCH 452
#define NOT 453
#define IGNORE 454
#define ACTION 455
#define UPTIME 456
#define EXEC 457
#define UNMONITOR 458
#define PING 459
#define ICMP 460
#define ICMPECHO 461
#define NONEXIST 462
#define EXIST 463
#define INVALID 464
#define DATA 465
#define RECOVERED 466
#define PASSED 467
#define SUCCEEDED 468
#define URL 469
#define CONTENT 470
#define PID 471
#define PPID 472
#define FSFLAG 473
#define REGISTER 474
#define CREDENTIALS 475
#define URLOBJECT 476
#define TARGET 477
#define TIMESPEC 478
#define HTTPHEADER 479
#define MAXFORWARD 480
#define FIPS 481
#define GREATER 482
#define LESS 483
#define EQUAL 484
#define NOTEQUAL 485

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 289 "src/p.y" /* yacc.c:355  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 836 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 851 "src/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  184
/* YYNRULES -- Number of rules.  */
#define YYNRULES  586
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1100

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   233,     2,
       2,     2,     2,     2,   234,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   235,     2,   236,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   231,     2,   232,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   336,   336,   337,   340,   341,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   369,
     370,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     394,   395,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   417,
     418,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   438,   439,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   458,   459,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   475,   476,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     494,   495,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   509,   510,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   529,   530,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   544,   548,
     551,   557,   567,   568,   571,   578,   583,   588,   596,   599,
     604,   607,   611,   617,   622,   627,   635,   638,   639,   642,
     648,   649,   654,   661,   670,   671,   674,   692,   711,   715,
     721,   722,   725,   726,   727,   728,   731,   732,   735,   736,
     739,   742,   755,   756,   759,   760,   761,   764,   765,   768,
     769,   772,   775,   780,   781,   784,   785,   788,   793,   798,
     805,   810,   813,   821,   825,   829,   833,   837,   837,   844,
     844,   851,   851,   858,   858,   865,   872,   873,   876,   882,
     883,   886,   889,   892,   899,   908,   913,   916,   921,   926,
     932,   940,   946,   958,   963,   970,   979,   982,   987,   990,
     996,   999,  1004,  1005,  1008,  1009,  1012,  1013,  1016,  1017,
    1018,  1019,  1022,  1023,  1024,  1027,  1028,  1031,  1032,  1035,
    1046,  1055,  1063,  1070,  1079,  1082,  1088,  1094,  1100,  1103,
    1106,  1114,  1119,  1122,  1127,  1128,  1129,  1130,  1131,  1138,
    1145,  1148,  1151,  1154,  1157,  1160,  1163,  1166,  1169,  1175,
    1178,  1184,  1187,  1190,  1193,  1196,  1199,  1202,  1205,  1209,
    1212,  1215,  1218,  1221,  1227,  1230,  1233,  1236,  1239,  1242,
    1245,  1248,  1251,  1254,  1257,  1260,  1265,  1266,  1269,  1272,
    1277,  1278,  1281,  1284,  1287,  1290,  1295,  1296,  1299,  1304,
    1305,  1310,  1311,  1314,  1315,  1316,  1317,  1318,  1321,  1327,
    1333,  1338,  1343,  1344,  1352,  1357,  1358,  1361,  1365,  1369,
    1373,  1377,  1381,  1385,  1389,  1393,  1397,  1403,  1410,  1416,
    1422,  1429,  1432,  1437,  1440,  1445,  1448,  1453,  1456,  1461,
    1464,  1469,  1475,  1483,  1484,  1490,  1491,  1494,  1498,  1501,
    1505,  1510,  1513,  1516,  1517,  1520,  1521,  1522,  1523,  1524,
    1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,  1533,  1534,
    1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,  1551,  1552,  1555,  1556,  1559,  1560,
    1561,  1562,  1565,  1569,  1573,  1579,  1582,  1585,  1591,  1595,
    1598,  1599,  1602,  1605,  1612,  1621,  1627,  1628,  1631,  1632,
    1633,  1634,  1637,  1643,  1644,  1647,  1648,  1649,  1650,  1653,
    1658,  1665,  1672,  1673,  1674,  1677,  1682,  1687,  1692,  1699,
    1704,  1711,  1718,  1725,  1726,  1727,  1730,  1731,  1734,  1740,
    1747,  1748,  1749,  1750,  1751,  1752,  1755,  1756,  1757,  1758,
    1759,  1760,  1763,  1764,  1765,  1767,  1768,  1770,  1771,  1772,
    1773,  1774,  1775,  1776,  1779,  1788,  1797,  1798,  1804,  1814,
    1815,  1821,  1831,  1834,  1837,  1840,  1845,  1849,  1856,  1862,
    1863,  1864,  1867,  1874,  1883,  1892,  1901,  1907,  1908,  1909,
    1910,  1911,  1914,  1919,  1926,  1933,  1939,  1946,  1954,  1957,
    1963,  1969,  1976,  1982,  1989,  1995,  2002,  2008,  2015,  2021,
    2026,  2034,  2042,  2050,  2058,  2066,  2074,  2084,  2092,  2100,
    2108,  2116,  2124,  2134,  2137,  2138,  2139
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "THEN", "OR", "FAILED",
  "SET", "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER", "HTTPD",
  "ALLOW", "ADDRESS", "INIT", "READONLY", "CLEARTEXT", "MD5HASH",
  "SHA1HASH", "CRYPT", "DELAY", "PEMFILE", "ENABLE", "DISABLE", "HTTPDSSL",
  "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "INTERFACE", "LINK", "PACKET",
  "ERROR", "BYTEIN", "BYTEOUT", "PACKETIN", "PACKETOUT", "SPEED",
  "SATURATION", "UPLOAD", "DOWNLOAD", "TOTAL", "IDFILE", "STATEFILE",
  "SEND", "EXPECT", "EXPECTBUFFER", "CYCLE", "COUNT", "REMINDER",
  "PIDFILE", "START", "STOP", "PATHTOK", "HOST", "HOSTNAME", "PORT",
  "TYPE", "UDP", "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT",
  "NOALERT", "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY",
  "RESTART", "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS",
  "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "IMAP", "IMAPS", "CLAMAV",
  "NNTP", "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP", "LDAP2",
  "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY", "SIP",
  "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS", "MONGODB", "SIEVE",
  "STRING", "PATH", "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT",
  "MAILBODY", "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "CHILDREN",
  "SYSTEM", "STATUS", "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY",
  "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE",
  "ACTIVE", "PASSIVE", "MANUAL", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM",
  "CPUWAIT", "GROUP", "REQUEST", "DEPENDS", "BASEDIR", "SLOT",
  "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID", "GID", "MMONIT",
  "INSTANCE", "USERNAME", "PASSWORD", "TIMESTAMP", "CHANGED", "SECOND",
  "MINUTE", "HOUR", "DAY", "MONTH", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1",
  "TLSV11", "TLSV12", "CERTMD5", "BYTE", "KILOBYTE", "MEGABYTE",
  "GIGABYTE", "INODE", "SPACE", "PERMISSION", "SIZE", "MATCH", "NOT",
  "IGNORE", "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "ICMP",
  "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "TARGET", "TIMESPEC",
  "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER", "LESS", "EQUAL",
  "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept",
  "cfgfile", "statement_list", "statement", "optproclist", "optproc",
  "optfilelist", "optfile", "optfilesyslist", "optfilesys", "optdirlist",
  "optdir", "opthostlist", "opthost", "optnetlist", "optnet",
  "optsystemlist", "optsystem", "optfifolist", "optfifo", "optstatuslist",
  "optstatus", "setalert", "setdaemon", "startdelay", "setexpectbuffer",
  "setinit", "setfips", "setlog", "seteventqueue", "setidfile",
  "setstatefile", "setpid", "setmmonits", "mmonitlist", "mmonit",
  "credentials", "setmailservers", "setmailformat", "mailserverlist",
  "mailserver", "sethttpd", "httpdnetlist", "httpdnetoption",
  "httpdunixlist", "httpdunixoption", "ssl", "optssllist", "optssl",
  "sslenable", "ssldisable", "signature", "sigenable", "sigdisable",
  "bindaddress", "pemfile", "clientpemfile", "allowselfcert", "allow",
  "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checknet", "checksystem", "checkfifo", "checkprogram", "start", "stop",
  "restart", "argumentlist", "useroptionlist", "argument", "useroption",
  "username", "password", "hostname", "connection", "connectionunix",
  "icmp", "host", "port", "unixsocket", "type", "certmd5", "sslversion",
  "protocol", "sendexpectlist", "sendexpect", "websocketlist", "websocket",
  "target", "maxforward", "httplist", "http", "status", "request",
  "responsesum", "hostheader", "httpheaderlist", "secret",
  "apache_stat_list", "apache_stat", "exist", "pid", "ppid", "uptime",
  "icmpcount", "exectimeout", "programtimeout", "nettimeout", "retry",
  "actionrate", "urloption", "urloperator", "alert", "alertmail",
  "noalertmail", "eventoptionlist", "eventoption", "formatlist",
  "formatoptionlist", "formatoption", "every", "mode", "group", "depend",
  "dependlist", "dependant", "statusvalue", "resourceprocess",
  "resourceprocesslist", "resourceprocessopt", "resourcesystem",
  "resourcesystemlist", "resourcesystemopt", "resourcecpuproc",
  "resourcecpu", "resourcecpuid", "resourcemem", "resourceswap",
  "resourcechild", "resourceload", "resourceloadavg", "value", "timestamp",
  "operator", "time", "totaltime", "currenttime", "action", "action1",
  "action2", "rate1", "rate2", "recovery", "checksum", "hashtype", "inode",
  "space", "fsflag", "unit", "permission", "match", "matchflagnot", "size",
  "uid", "euid", "gid", "linkstatus", "linkspeed", "linksaturation",
  "upload", "download", "icmptype", "reminder", YY_NULLPTR
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
     485,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -763

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-763)))

#define YYTABLE_NINF -244

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,    28,   -66,   -37,   -19,    -8,    -3,    39,    86,   111,
     144,   168,   605,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,   297,  -763,  -763,  -763,  -763,    76,   164,   180,
      84,  -763,   205,   243,   283,   247,   294,   186,   147,   201,
    -763,   -41,    -1,   377,   384,   390,   409,  -763,   406,   421,
     239,  -763,  -763,   302,    65,   545,   629,    58,   303,   303,
     381,   303,   -34,   275,   477,   389,   385,   297,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,   -36,  -763,  -763,  -763,
    -763,  -763,   486,   624,   629,   782,   519,  -763,   485,   -17,
     129,  -763,   416,   437,  -763,  -763,   277,  -763,  -763,   398,
     443,   450,   508,   201,   335,   374,   376,   996,   553,   502,
     516,   346,   372,   524,   538,   487,   540,   303,   509,   546,
      75,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,    69,   460,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,    77,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,    31,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,    38,   591,  -763,  -763,   189,  -763,
     189,  -763,   189,   612,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,   385,  -763,  -763,   435,   996,   553,    74,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,   735,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   139,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   566,
     664,  -763,   582,   337,   527,   587,  -763,   650,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   -56,
    -763,   552,  -763,   379,   335,   504,  -763,   398,   996,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   606,  -763,
     608,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,   282,  -763,  -763,   117,   206,   206,   206,  -763,
    -763,  -763,   206,   206,   353,   520,   206,   436,  -763,  -763,
    -763,  -763,  -763,   206,   104,   206,    82,   206,   520,   530,
    -763,   547,   -73,    10,   206,   206,  -128,   638,   699,   691,
     535,   700,   643,   645,   -48,   199,   -26,  -763,  -763,  -763,
     -26,  -763,   -26,  -763,  -763,  -763,   996,   695,  -763,   751,
     206,   206,   206,   539,   752,   206,  -763,  -763,  -763,   846,
    -763,  -763,   206,  -763,  -763,  -763,   206,   625,  -763,   670,
     615,  -763,  -763,   682,   379,   618,   688,  -763,   481,   371,
    -763,  -763,   692,  -763,  -763,  -763,  -763,  -763,  -763,   622,
    -763,  -763,    47,   806,   746,  -763,   766,   703,    -5,  -763,
     716,   255,   272,   285,   768,  -763,  -763,  -763,  -763,  -763,
     710,   146,   177,   715,   731,   732,   732,   732,   733,     3,
    -763,   828,   192,  -763,  -763,   734,   789,   737,   732,   732,
     732,   790,   747,   479,   491,   732,   749,   216,  -763,   754,
     508,   662,   699,   657,   756,   768,   826,   702,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,   885,   746,   732,   759,
     760,   769,   206,   206,   732,   231,  -763,   882,   771,   772,
     732,  -763,   527,  -763,   622,  -763,  -763,     1,   791,    43,
      53,   589,   595,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,   830,   833,  -763,  -763,  -763,  -763,   795,  -763,
    -763,   746,   553,  -763,   738,  -763,  -763,   732,   732,   732,
     732,   732,   732,   575,   432,  -763,   796,  -763,   277,   799,
     277,   800,   807,   921,   923,   924,   574,  -763,   883,   100,
    -763,  -763,   732,   -13,   574,   925,   927,   928,   732,   277,
     732,   732,  -763,  -763,   929,   521,   822,   277,  -763,   732,
    -763,   508,   442,   508,  -763,   432,   938,  -763,   746,   553,
     940,   831,   101,   134,   829,   834,   947,   835,   277,   100,
     837,   732,   951,   379,  -763,   849,   850,   852,   729,   856,
     857,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
     507,   507,  -763,   553,  -763,  -763,   961,   962,   964,   965,
     966,   967,  -763,  -763,   379,   865,   867,  1140,   508,   634,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,   100,   100,   100,
    -763,  -763,  -763,  -763,  -763,   732,  -763,  -763,  -763,  -763,
    -763,   303,  -763,  -763,   973,   974,   872,   980,   732,   100,
     100,   100,   981,   732,   982,   983,   100,   732,   985,   732,
     732,   992,   732,  -763,  -763,   874,   930,   657,    37,   553,
    -763,   100,   732,   821,   821,   821,   821,   138,   151,   100,
    -763,  -763,   973,  -763,   994,   100,   622,   901,   902,   904,
     906,   917,  1010,   935,   936,  -763,  -763,  -763,  -763,  -763,
    -763,   100,   100,   100,   100,   100,   100,   622,  -763,  -763,
    -763,  -763,  -763,  1022,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,   -11,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,   814,  -763,  -763,   871,  -763,
    -763,  -763,  -763,   930,  -763,  -763,  -763,   973,  1034,   256,
    1047,  -763,   100,   732,   100,  1046,  -763,   973,  -763,   100,
    1049,   100,   100,  -763,  1051,   100,  1053,  1056,   100,  1057,
    -763,   946,   732,   508,  -763,  -763,  -763,   973,  1059,  -763,
     732,   732,   732,   732,   227,   230,   236,   241,   973,  -763,
     100,  -763,  -763,   917,   917,   917,  1010,  -763,   917,  -763,
    -763,  -763,  -763,  -763,   973,   973,   973,   973,   973,   973,
    -763,   -18,   -18,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,  1060,  -763,   944,   959,   956,   970,   -11,
    -763,   341,   858,   976,  -763,   732,  -763,   100,   318,   440,
     973,  1069,   973,   100,  -763,  -763,   100,  -763,  -763,   100,
     973,   100,   100,   973,   100,  -763,  1077,   930,  -763,   100,
    1086,  1088,  1103,  1104,   512,  -763,  -763,  -763,   732,   512,
     732,   512,   732,   512,   732,  -763,   973,   917,   917,   917,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  1002,   206,
    1003,  1005,  -763,  -763,  -763,  -763,  -763,  -763,   997,   998,
     999,  1001,  1004,  1006,  1007,  1013,  1014,  1015,  1022,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  1016,  -763,  -763,  1106,
     973,  1017,  1017,  1017,  -763,   100,  -763,   973,   973,   973,
    -763,   973,   973,  -763,   973,   100,   732,   973,   100,   100,
     100,   100,   732,  1114,   732,  1115,   732,  1117,   732,  1124,
    -763,  -763,  1018,  -763,  -763,   145,  1020,  1021,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  -763,  -763,   100,  -763,
      71,  1131,  1146,  1147,   973,  -763,  -763,  -763,  -763,  -763,
    -763,   973,  1156,  -763,   973,   973,   973,   973,  1157,   100,
    1158,   100,  1160,   100,  1162,   100,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,   973,
    -763,  1121,   100,   100,   100,  -763,  -763,   100,  -763,  -763,
    -763,  -763,   100,   973,   100,   973,   100,   973,   100,   973,
    -763,  -763,  -763,  -763,  -763,  -763,   973,   973,  -763,   973,
    -763,   973,  -763,   973,  -763,  -763,  -763,  -763,  -763,  -763
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     7,    17,    18,    19,     8,
       9,    15,    16,    14,    10,    11,    12,    13,    29,    50,
      69,    86,     0,   115,   130,   141,   157,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   444,     0,     0,     0,     0,     0,   262,     0,     0,
       0,     1,     5,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,   102,   104,
     105,   106,   107,   108,   109,   110,   444,   410,   111,   112,
     113,   114,    28,    25,    26,    27,   178,   177,   172,   282,
     397,   194,     0,     0,   183,   184,   547,   185,   411,     0,
       0,     0,   397,   186,   190,     0,     0,     0,   584,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    41,    42,    34,    35,    36,
      40,    43,    44,    45,    46,    47,    48,    49,    37,    38,
      39,   558,   558,    51,    52,    53,    54,    55,    57,    59,
      58,    66,    67,    68,    56,    63,    60,    65,    64,    61,
      62,     0,    70,    71,    72,    73,    74,    76,    75,    80,
      81,    82,    83,    84,    85,    77,    78,    79,     0,    87,
      88,    89,    90,    91,    93,    95,    94,    99,   100,   101,
      92,    96,    97,    98,   294,     0,   276,   277,   393,   272,
     393,   412,   393,     0,   453,   454,   455,   456,   457,   458,
     462,   459,   460,   103,     0,     0,   584,     0,   116,   117,
     118,   119,   125,   127,   126,   128,   129,   120,   121,   122,
     123,   124,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   143,   144,   145,   146,   148,   150,
     149,   154,   155,   156,   147,   151,   152,   153,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,     0,
       0,   171,     0,     0,   285,     0,   195,   287,   200,   206,
     548,   549,   550,   551,   174,   448,   449,   450,   451,     0,
     446,   180,   182,   304,   190,     0,   187,     0,     0,   428,
     416,   417,   430,   431,   438,   436,   419,   440,   418,   439,
     435,   442,   424,   426,   441,   432,   437,   415,   443,   422,
     425,   429,   427,   421,   420,   433,   434,   423,     0,   413,
       0,   168,   251,   252,   253,   254,   257,   256,   255,   258,
     259,   263,   395,   260,   261,   294,   500,   500,   500,   493,
     494,   495,   500,   500,     0,     0,   500,   526,   466,   468,
     469,   470,   471,   500,   539,   500,   539,   500,   559,     0,
     559,     0,     0,     0,   500,   500,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,   393,   273,   274,   266,
     393,   268,   393,   270,   452,   461,     0,     0,   407,     0,
     500,   500,   500,     0,     0,   500,   482,   483,   484,   526,
     473,   478,   500,   476,   477,   475,   500,     0,   179,     0,
     282,   284,   283,     0,   304,     0,     0,   192,   198,   199,
     193,   447,     0,   310,   305,   306,   307,   308,   309,   302,
     188,   191,     0,     0,   444,   414,   585,     0,   395,   264,
       0,     0,     0,     0,   298,   505,   501,   502,   503,   504,
       0,     0,     0,     0,     0,   526,   526,   526,     0,     0,
     467,     0,     0,   540,   541,     0,     0,     0,   526,   526,
     526,     0,     0,     0,     0,   526,     0,     0,   295,     0,
     397,     0,   391,   403,     0,   298,     0,     0,   278,   280,
     279,   281,   275,   267,   269,   271,     0,   444,   526,     0,
       0,     0,   500,   500,   526,     0,   474,     0,     0,     0,
     526,   173,   285,   286,   302,   398,   288,     0,     0,     0,
       0,     0,     0,   201,   202,   212,   212,   203,   221,   222,
     204,   205,     0,     0,   207,   208,   209,   181,     0,   189,
     445,   444,   584,   586,     0,   265,   297,   526,   526,   526,
     526,   526,   526,     0,   311,   491,   497,   496,   547,   497,
     547,     0,     0,     0,     0,     0,   506,   527,     0,     0,
     497,   492,   526,   526,   506,     0,     0,     0,   526,   547,
     526,   526,   557,   556,     0,   526,   497,   547,   392,   526,
     583,   397,     0,   397,   296,   311,     0,   394,   444,   584,
       0,     0,   547,   547,     0,     0,     0,   497,   547,     0,
       0,   526,     0,   304,   196,     0,     0,     0,   245,   233,
       0,   227,   218,   224,   220,   226,   217,   219,   223,   225,
     211,   210,   303,   584,   169,   396,     0,     0,     0,     0,
       0,     0,   301,   299,   304,     0,     0,     0,   397,   345,
     346,   486,   485,   488,   487,   479,   480,     0,     0,     0,
     507,   508,   509,   510,   511,   526,   528,   521,   522,   517,
     520,     0,   523,   524,   532,     0,     0,     0,   526,     0,
       0,     0,     0,   526,     0,     0,     0,   526,     0,   526,
     526,     0,   526,   405,   406,     0,   399,   403,     0,   584,
     408,     0,   526,   515,   515,   515,   515,   547,   547,     0,
     490,   489,   532,   481,     0,     0,   302,   234,   235,   236,
       0,     0,   249,     0,     0,   230,   213,   214,   215,   216,
     170,     0,     0,     0,     0,     0,     0,   302,   348,   349,
     313,   361,   361,     0,   316,   332,   333,   330,   319,   320,
     321,   327,   328,   325,   314,     0,   334,   315,   322,   323,
     335,   337,   338,   339,   329,   356,   340,   341,     0,   343,
     336,   324,   331,   399,   347,   388,   389,   532,     0,   518,
       0,   465,     0,   526,     0,     0,   499,   532,   561,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
     404,     0,   526,   397,   402,   401,   409,   532,     0,   516,
     526,   526,   526,   526,     0,     0,     0,     0,   532,   472,
       0,   464,   197,     0,     0,     0,   249,   248,   238,   246,
     250,   232,   228,   229,   532,   532,   532,   532,   532,   532,
     300,   317,   318,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   312,   375,     0,     0,     0,     0,   344,
     350,     0,   359,     0,   342,   526,   387,     0,   519,     0,
     532,     0,   532,     0,   553,   538,     0,   555,   554,     0,
     532,     0,     0,   532,     0,   400,     0,   399,   568,     0,
       0,     0,     0,     0,     0,   512,   513,   514,   526,     0,
     526,     0,   526,     0,   526,   569,   532,   240,   242,   244,
     231,   247,   562,   563,   564,   565,   566,   567,     0,   500,
       0,     0,   372,   362,   365,   363,   364,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   354,
     352,   355,   353,   351,   358,   357,     0,   326,   374,     0,
     532,   529,   529,   529,   552,     0,   536,   532,   532,   532,
     542,   532,   532,   293,   532,     0,   526,   532,     0,     0,
       0,     0,   526,     0,   526,     0,   526,     0,   526,     0,
     463,   370,     0,   369,   371,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,   360,     0,   390,
       0,     0,     0,     0,   532,   498,   560,   543,   545,   544,
     292,   532,     0,   570,   532,   532,   532,   532,     0,     0,
       0,     0,     0,     0,     0,     0,   368,   373,   367,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   532,
     530,     0,     0,     0,     0,   537,   290,     0,   574,   571,
     580,   577,     0,   532,     0,   532,     0,   532,     0,   532,
     291,   531,   525,   533,   534,   535,   532,   532,   575,   532,
     572,   532,   581,   532,   578,   289,   576,   573,   582,   579
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -763,  -763,  -763,  1161,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  1093,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,  1061,   868,  -763,  -763,  -763,
    1075,  -763,  -763,  -763,  -763,  -763,  -763,   630,  -763,  -763,
    -763,   739,  -763,  -763,  -763,  -763,  -763,  -763,   740,  -763,
    -763,  -763,  -763,   -51,  -681,   331,  -763,  -763,  -763,  -763,
    -763,  -763,  -763,  -763,  -763,   620,   705,   765,   -68,  -205,
    -206,  -384,   750,   649,  -763,  1119,  -763,  -763,  -763,  -763,
    -763,   678,  -523,  -415,   569,  -763,   517,  -763,   306,  -763,
    -763,   425,  -763,  -763,  -763,  -763,  -763,  -763,  -763,  -763,
     232,   202,  -763,  -763,  -763,   686,  -164,   736,  -112,  -762,
     843,   472,  -763,   954,  1192,  -763,  -173,  -316,   -71,   888,
    -265,   977,   408,  1012,  1033,  -763,   978,  -763,  -763,  -763,
     840,  -763,  -763,   781,  -763,  -763,  -763,  -215,  -763,  -763,
    -210,  -763,   -98,   103,  -349,   610,  -458,    79,  -245,  -417,
    -355,  -390,  -254,  -314,  -763,   832,  -763,  -763,  -763,   361,
      61,  -763,  1050,  -763,   364,  -763,   461,  -763,  -763,  -763,
    -763,  -763,  -763,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    63,   131,    64,   153,    65,   172,
      66,   189,    77,    78,    92,   228,    93,   243,    94,   253,
      95,   269,    14,    15,   281,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   113,   114,   306,    25,    26,   100,
     101,    27,   438,   543,   439,   554,   544,   650,   746,   545,
     546,   547,   548,   549,   550,   747,   748,   749,   551,   741,
     843,   844,   845,   848,   849,   851,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    79,    80,    81,   208,   396,
     209,   398,   284,   434,   437,    82,   136,    83,   391,   505,
     464,   574,   559,   449,   668,   669,   670,   879,   880,   882,
     967,   861,   943,   944,   945,   946,   947,  1005,   884,   873,
     874,   137,   138,   139,   140,   500,   399,   459,   287,   822,
      84,   613,   715,    85,    86,    87,   338,   339,   118,   299,
     300,    88,    89,    90,    91,   221,   222,   278,   147,   367,
     368,   252,   419,   420,   369,   421,   422,   370,   424,   371,
     372,   373,   578,   164,   470,   685,   918,   830,   693,   694,
    1083,   481,  1021,   801,   165,   486,   182,   183,   184,   294,
     166,   167,   379,   168,   148,   149,   150,   237,   238,   239,
     240,   241,   502,   341
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     303,   210,   397,   212,   397,   400,   397,   402,   471,   472,
     408,   634,   512,   473,   474,   226,   512,   478,   512,   534,
     635,   636,   455,   637,   482,   115,   487,   423,   492,   527,
     115,   885,   425,   696,   441,   496,   497,    37,   382,    38,
     282,    39,    40,   393,   875,    41,   401,   488,   403,    52,
     119,   587,   407,   120,   938,   295,   296,   297,   298,   352,
     508,   519,   520,   521,   457,   204,   525,   489,   151,   509,
     642,    42,    43,   528,   512,    44,   374,   529,    53,    45,
     644,   409,   355,   213,   382,   583,   584,   585,    96,   687,
     688,   455,    46,   387,    47,   461,    54,   463,   595,   596,
     597,   689,   483,   484,   479,   604,   824,    55,   690,   638,
     639,   643,    56,   410,   411,   412,   413,    68,    69,  1060,
     588,   645,   485,   939,   483,   484,   185,   201,   620,    46,
      70,   876,   877,   723,   626,   453,    71,   455,    72,    73,
     632,   102,   394,   940,   395,   986,   397,   458,   205,   941,
     878,   103,   687,   688,    57,   265,   283,   116,   295,   296,
     297,   298,   224,   394,   689,   395,   725,   931,    61,   200,
     834,   690,   387,   624,   625,   205,   440,   656,   657,   658,
     659,   660,   661,   836,   460,    97,   205,   441,  1061,   214,
     117,   205,   205,    48,   205,   225,   121,   264,   285,    49,
     455,    58,   695,   697,   423,   489,   375,   386,   702,   425,
     704,   705,   732,   842,   356,   708,    74,   942,   736,   711,
     357,   358,   359,   360,   361,    75,    59,    76,   495,   365,
     362,   363,   513,   516,   860,   640,   514,    99,   515,   691,
     692,   734,   388,   389,   375,   376,   931,   931,   931,   757,
     414,   364,   390,   383,    50,   128,   205,   488,   393,    60,
     795,   796,   797,   576,   152,   377,   157,   378,   193,   129,
     384,   385,   461,   365,   463,   577,   366,   489,   490,   560,
     426,    98,   806,   807,   808,   461,   462,   463,    99,   813,
     290,   291,   292,   293,   579,   798,   257,   206,   207,   485,
      67,   825,   691,   692,   827,   130,   577,   510,   805,   590,
     110,   111,   838,   810,   104,   427,   511,   814,   841,   816,
     817,   577,   819,   290,   291,   292,   293,   290,   291,   292,
     293,   390,   828,   606,   854,   855,   856,   857,   858,   859,
     290,   291,   292,   293,   914,   577,   654,   919,   627,    68,
      69,   457,   105,   921,    68,    69,   107,   394,   923,   395,
     577,    46,    70,   567,   206,   207,    46,    70,    71,  1047,
      72,    73,   568,    71,   580,    72,    73,   920,   922,   924,
     569,  1048,   465,   562,   591,   890,   537,   892,   609,   570,
     206,   207,   895,   571,   897,   898,   552,   553,   900,   607,
     106,   903,   572,   720,   108,   915,   916,   917,   915,   916,
     917,   206,   207,   891,   915,   916,   917,   109,   839,   915,
     916,   917,   112,   926,   394,   125,   395,   628,   169,   186,
     202,   122,   906,   466,   467,   468,   469,   750,   123,   542,
     910,   911,   912,   913,   124,   431,   619,   432,    74,   964,
     394,   965,   395,    74,   344,   345,   992,    75,   266,    76,
     126,   994,    75,   996,    76,   998,   290,   291,   292,   293,
     970,   144,   161,   179,   197,   127,   977,   665,   666,   978,
     346,   347,   979,   886,   981,   982,   394,   984,   395,   227,
     653,   211,   987,   894,   667,   969,   537,   538,   215,   712,
     220,   716,   261,   826,   512,   219,   539,   540,   541,   295,
     296,   297,   298,   908,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   925,   170,   187,   203,   993,   279,
     995,   743,   997,   288,   999,   744,   745,   280,    68,    69,
     932,   933,   934,   935,   936,   937,   289,   719,   171,   542,
      46,    70,   301,   479,   305,   267,   793,    71,  1024,    72,
      73,   443,   444,   445,   446,   447,   448,   302,  1031,   475,
     476,  1034,  1035,  1036,  1037,   356,   974,   285,   976,   522,
     523,   357,   358,   359,   360,   361,   980,   600,   601,   983,
    1002,   362,   363,   397,   888,   350,  1032,    68,    69,   602,
     603,  1059,  1038,   340,  1040,   307,  1042,   308,  1044,    46,
      70,   342,  1000,     1,   646,   647,    71,   353,    72,    73,
     648,   649,  1073,   799,  1075,   343,  1077,   242,  1079,   216,
     217,   218,   188,   348,   662,   663,   664,   309,   479,   707,
     310,   311,   312,   313,   314,   315,    75,   349,    76,   351,
    1086,   971,   972,   973,   354,  1087,  1019,  1089,   380,  1091,
     404,  1093,   392,  1025,  1026,  1027,   406,  1028,  1029,   316,
    1030,   713,   714,  1033,   428,   317,    68,    69,   318,   665,
     666,    68,    69,   132,   154,   173,   190,   429,    46,    70,
     915,   916,   917,    46,    70,    71,    74,    72,    73,   430,
      71,   433,    72,    73,   435,    75,   436,    76,  1084,  1085,
    1065,   907,   229,   244,   254,   270,   442,  1066,  1022,  1023,
    1068,  1069,  1070,  1071,   451,   456,   309,   493,   477,   310,
     311,   312,   313,   314,   315,     2,     3,     4,     5,     6,
       7,     8,     9,    10,   494,  1080,   498,   319,   499,   501,
     320,   680,   681,   682,   683,   684,   503,   504,   316,  1088,
     506,  1090,   507,  1092,   317,  1094,   530,   318,   133,   155,
     174,   191,  1095,  1096,   321,  1097,   322,  1098,   323,  1099,
      74,   324,   518,   524,    75,   268,    76,   531,   283,    75,
     533,    76,   927,   928,   929,   535,   536,   230,   245,   255,
     271,   325,   326,   831,   832,   833,   327,   328,   329,   557,
     558,   330,   115,   331,   563,   332,   333,  1082,  1082,  1082,
     564,   334,   335,   336,   337,   566,   573,   575,   134,   156,
     175,   192,   581,   589,    68,    69,   319,   309,   454,   320,
     310,   311,   312,   313,   314,   315,    46,    70,   582,   479,
     586,   592,   205,    71,   594,    72,    73,   231,   246,   256,
     272,   593,   598,   321,   599,   322,   605,   323,   610,   316,
     324,   608,   612,   614,   616,   317,   621,   622,   318,   617,
     357,   358,   359,   360,   361,   415,   623,   629,   630,   631,
     325,   326,   416,   417,   418,   327,   328,   329,   643,   641,
     330,   645,   331,   652,   332,   333,   141,   158,   176,   194,
     334,   335,   336,   337,   671,   655,   309,   673,   675,   310,
     311,   312,   313,   314,   315,   676,   677,   517,   678,   679,
     699,   686,   700,   701,   706,   232,   247,   258,   273,   672,
     709,   674,    75,   718,    76,   721,   727,   319,   316,   722,
     320,   728,   729,   730,   317,   733,   735,   318,   737,   738,
     703,   739,   740,   479,  -237,   742,   751,   752,   710,   753,
     754,   755,   756,   758,   321,   759,   322,   800,   323,   802,
     803,   324,   820,   724,   726,   804,   809,   811,   812,   731,
     815,   357,   358,   359,   360,   361,   415,   818,   829,   840,
     821,   325,   326,   416,   417,   418,   327,   328,   329,  -239,
    -241,   330,  -243,   331,   846,   332,   333,   142,   159,   177,
     195,   334,   335,   336,   337,   847,   319,   309,   850,   320,
     310,   311,   312,   313,   314,   315,   881,   883,   561,   887,
     143,   160,   178,   196,   852,   853,   233,   248,   259,   274,
     889,   893,   959,   321,   896,   322,   899,   323,   901,   316,
     324,   902,   904,   905,   909,   317,   958,   960,   318,   234,
     249,   260,   275,   961,   975,   145,   162,   180,   198,   962,
     325,   326,   985,   966,   968,   327,   328,   329,   835,   837,
     330,   988,   331,   989,   332,   333,   146,   163,   181,   199,
     334,   335,   336,   337,   235,   250,   262,   276,   990,   991,
    1001,  1018,  1003,  1004,  1006,  1007,  1008,   618,  1009,  1039,
    1041,  1010,  1043,  1011,  1012,   236,   251,   263,   277,  1045,
    1013,  1014,  1015,  1017,  1020,  1046,  1062,   319,  1049,  1050,
     320,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,  1063,  1064,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1067,  1072,  1074,   321,  1076,   322,  1078,   323,  1081,
     223,   324,   450,    62,   304,   286,   651,   930,   555,   556,
     532,   633,   135,   615,   717,   963,   794,   862,   611,   823,
    1016,   325,   326,    51,   565,   452,   327,   328,   329,   405,
     526,   330,   381,   331,   698,   332,   333,   480,   491,     0,
       0,   334,   335,   336,   337,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792
};

static const yytype_int16 yycheck[] =
{
     112,    69,   208,    71,   210,   210,   212,   212,   357,   358,
     226,   534,   396,   362,   363,    86,   400,   366,   402,   434,
      19,    20,   338,    22,   373,    66,   375,   242,   377,   419,
      66,   793,   242,    46,   299,   384,   385,     9,     7,    11,
      57,    13,    14,    69,    55,    17,   210,   175,   212,   115,
      51,    48,   225,    54,    72,   111,   112,   113,   114,   127,
     108,   410,   411,   412,    69,     7,   415,   195,     3,   117,
      27,    43,    44,   422,   458,    47,     7,   426,   115,    51,
      27,     7,     7,   117,     7,   475,   476,   477,    12,    52,
      53,   407,    64,    55,    66,   168,   115,   170,   488,   489,
     490,    64,    20,    21,   117,   495,    69,   115,    71,   108,
     109,    68,   115,    39,    40,    41,    42,    52,    53,    48,
     117,    68,   195,   141,    20,    21,    65,    66,   518,    64,
      65,   142,   143,    32,   524,   308,    71,   453,    73,    74,
     530,    57,   168,   161,   170,   907,   352,   352,   117,   167,
     161,    67,    52,    53,   115,    94,   173,   198,   111,   112,
     113,   114,   198,   168,    64,   170,    32,   848,     0,    66,
      32,    71,    55,   522,   523,   117,   232,   567,   568,   569,
     570,   571,   572,    32,    67,   109,   117,   452,   117,   223,
     231,   117,   117,   165,   117,   231,   197,    94,    69,   171,
     516,   115,   592,   593,   419,   195,   175,   176,   598,   419,
     600,   601,   629,   736,   139,   605,   151,   235,   633,   609,
     145,   146,   147,   148,   149,   160,   115,   162,   218,   198,
     155,   156,   396,   406,   757,   234,   400,   108,   402,   202,
     203,   631,   204,   205,   175,   176,   927,   928,   929,   664,
     176,   176,   214,   176,   226,    16,   117,   175,    69,   115,
     677,   678,   679,   117,   199,   196,    64,   198,    66,    30,
     193,   194,   168,   198,   170,   129,   201,   195,   196,   232,
     141,   117,   699,   700,   701,   168,   169,   170,   108,   706,
     189,   190,   191,   192,   117,   685,    94,   108,   109,   195,
       3,   718,   202,   203,   721,     3,   129,   108,   698,   117,
     163,   164,   729,   703,   109,   176,   117,   707,   735,   709,
     710,   129,   712,   189,   190,   191,   192,   189,   190,   191,
     192,   214,   722,   117,   751,   752,   753,   754,   755,   756,
     189,   190,   191,   192,   117,   129,   562,   117,   117,    52,
      53,    69,   109,   117,    52,    53,   109,   168,   117,   170,
     129,    64,    65,   108,   108,   109,    64,    65,    71,   224,
      73,    74,   117,    71,   472,    73,    74,   835,   836,   837,
     108,   236,   176,   454,   482,   802,    15,   804,   500,   117,
     108,   109,   809,   108,   811,   812,    25,    26,   815,   497,
     117,   818,   117,   619,   110,   178,   179,   180,   178,   179,
     180,   108,   109,   803,   178,   179,   180,   231,   732,   178,
     179,   180,   221,   840,   168,    16,   170,   525,    64,    65,
      66,    54,   822,   227,   228,   229,   230,   653,    54,    68,
     830,   831,   832,   833,    54,   108,   517,   110,   151,   108,
     168,   110,   170,   151,   108,   109,   914,   160,    94,   162,
      54,   919,   160,   921,   162,   923,   189,   190,   191,   192,
     887,    63,    64,    65,    66,    54,   893,    45,    46,   896,
     108,   109,   899,   797,   901,   902,   168,   904,   170,     3,
     561,   110,   909,   807,    62,   885,    15,    16,   223,   611,
     115,   613,    94,   719,   888,   116,    25,    26,    27,   111,
     112,   113,   114,   827,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   838,    64,    65,    66,   918,    10,
     920,    24,   922,   117,   924,    28,    29,    52,    52,    53,
     854,   855,   856,   857,   858,   859,   109,   618,     3,    68,
      64,    65,   109,   117,   219,    94,   668,    71,   975,    73,
      74,   182,   183,   184,   185,   186,   187,   117,   985,   216,
     217,   988,   989,   990,   991,   139,   890,    69,   892,    40,
      41,   145,   146,   147,   148,   149,   900,   108,   109,   903,
     939,   155,   156,   799,   799,   108,   986,    52,    53,   108,
     109,  1018,   992,    50,   994,   231,   996,   231,   998,    64,
      65,   109,   926,     8,    25,    26,    71,   108,    73,    74,
      25,    26,  1039,   691,  1041,   109,  1043,     3,  1045,   152,
     153,   154,     3,   109,    59,    60,    61,    31,   117,   118,
      34,    35,    36,    37,    38,    39,   160,   109,   162,   109,
    1067,   211,   212,   213,   108,  1072,   970,  1074,   198,  1076,
      48,  1078,    71,   977,   978,   979,   231,   981,   982,    63,
     984,   229,   230,   987,   108,    69,    52,    53,    72,    45,
      46,    52,    53,    63,    64,    65,    66,    23,    64,    65,
     178,   179,   180,    64,    65,    71,   151,    73,    74,   117,
      71,   174,    73,    74,   117,   160,    56,   162,  1063,  1064,
    1024,   823,    92,    93,    94,    95,   164,  1031,   972,   973,
    1034,  1035,  1036,  1037,   220,   117,    31,   197,   208,    34,
      35,    36,    37,    38,    39,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   197,  1059,   108,   141,    49,    58,
     144,   177,   178,   179,   180,   181,   221,    57,    63,  1073,
     117,  1075,   117,  1077,    69,  1079,   141,    72,    63,    64,
      65,    66,  1086,  1087,   168,  1089,   170,  1091,   172,  1093,
     151,   175,    31,    31,   160,     3,   162,   117,   173,   160,
     108,   162,   843,   844,   845,   177,   108,    92,    93,    94,
      95,   195,   196,   724,   725,   726,   200,   201,   202,   117,
     188,   205,    66,   207,    48,   209,   210,  1062,  1063,  1064,
     117,   215,   216,   217,   218,   109,    58,   117,    63,    64,
      65,    66,   117,     5,    52,    53,   141,    31,   232,   144,
      34,    35,    36,    37,    38,    39,    64,    65,   117,   117,
     117,   117,   117,    71,   117,    73,    74,    92,    93,    94,
      95,    72,    72,   168,   117,   170,   117,   172,   206,    63,
     175,   117,   215,   117,    48,    69,   117,   117,    72,   177,
     145,   146,   147,   148,   149,   150,   117,     5,   117,   117,
     195,   196,   157,   158,   159,   200,   201,   202,    68,   108,
     205,    68,   207,   108,   209,   210,    63,    64,    65,    66,
     215,   216,   217,   218,   118,   177,    31,   118,   118,    34,
      35,    36,    37,    38,    39,   118,     5,   232,     5,     5,
       5,    48,     5,     5,     5,    92,    93,    94,    95,   578,
     118,   580,   160,     5,   162,     5,   117,   141,    63,   118,
     144,   117,     5,   118,    69,   118,     5,    72,   109,   109,
     599,   109,   233,   117,   108,   108,     5,     5,   607,     5,
       5,     5,     5,   108,   168,   108,   170,     4,   172,     5,
     108,   175,   108,   622,   623,     5,     5,     5,     5,   628,
       5,   145,   146,   147,   148,   149,   150,     5,   177,     5,
      70,   195,   196,   157,   158,   159,   200,   201,   202,   108,
     108,   205,   108,   207,   108,   209,   210,    63,    64,    65,
      66,   215,   216,   217,   218,   108,   141,    31,    18,   144,
      34,    35,    36,    37,    38,    39,   222,   166,   232,     5,
      63,    64,    65,    66,   109,   109,    92,    93,    94,    95,
       3,     5,   108,   168,     5,   170,     5,   172,     5,    63,
     175,     5,     5,   117,     5,    69,     6,   108,    72,    92,
      93,    94,    95,   117,     5,    63,    64,    65,    66,   109,
     195,   196,     5,   225,   108,   200,   201,   202,   727,   728,
     205,     5,   207,     5,   209,   210,    63,    64,    65,    66,
     215,   216,   217,   218,    92,    93,    94,    95,     5,     5,
     108,     5,   109,   108,   117,   117,   117,   232,   117,     5,
       5,   117,     5,   117,   117,    92,    93,    94,    95,     5,
     117,   117,   117,   117,   117,   117,     5,   141,   118,   118,
     144,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     5,     5,   118,   118,   118,   118,   118,   118,   118,
     118,     5,     5,     5,   168,     5,   170,     5,   172,    48,
      77,   175,   304,    12,   113,   100,   546,   846,   439,   439,
     430,   532,    63,   505,   615,   879,   669,   762,   502,   717,
     958,   195,   196,     1,   458,   307,   200,   201,   202,   221,
     419,   205,   152,   207,   594,   209,   210,   367,   376,    -1,
      -1,   215,   216,   217,   218,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   238,   239,   240,   259,   260,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   274,   275,   278,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     9,    11,    13,
      14,    17,    43,    44,    47,    51,    64,    66,   165,   171,
     226,   361,   115,   115,   115,   115,   115,   115,   115,   115,
     115,     0,   240,   241,   243,   245,   247,     3,    52,    53,
      65,    71,    73,    74,   151,   160,   162,   249,   250,   312,
     313,   314,   322,   324,   357,   360,   361,   362,   368,   369,
     370,   371,   251,   253,   255,   257,    12,   109,   117,   108,
     276,   277,    57,    67,   109,   109,   117,   109,   110,   231,
     163,   164,   221,   271,   272,    66,   198,   231,   365,    51,
      54,   197,    54,    54,    54,    16,    54,    54,    16,    30,
       3,   242,   312,   313,   314,   322,   323,   348,   349,   350,
     351,   357,   360,   368,   369,   370,   371,   375,   411,   412,
     413,     3,   199,   244,   312,   313,   314,   348,   357,   360,
     368,   369,   370,   371,   390,   401,   407,   408,   410,   411,
     413,     3,   246,   312,   313,   314,   357,   360,   368,   369,
     370,   371,   403,   404,   405,   407,   411,   413,     3,   248,
     312,   313,   314,   348,   357,   360,   368,   369,   370,   371,
     390,   407,   411,   413,     7,   117,   108,   109,   315,   317,
     315,   110,   315,   117,   223,   223,   152,   153,   154,   116,
     115,   372,   373,   250,   198,   231,   365,     3,   252,   312,
     313,   314,   357,   360,   368,   370,   371,   414,   415,   416,
     417,   418,     3,   254,   312,   313,   314,   357,   360,   368,
     370,   371,   378,   256,   312,   313,   314,   348,   357,   360,
     368,   369,   370,   371,   390,   407,   411,   413,     3,   258,
     312,   313,   314,   357,   360,   368,   370,   371,   374,    10,
      52,   261,    57,   173,   319,    69,   277,   355,   117,   109,
     189,   190,   191,   192,   406,   111,   112,   113,   114,   366,
     367,   109,   117,   355,   272,   219,   273,   231,   231,    31,
      34,    35,    36,    37,    38,    39,    63,    69,    72,   141,
     144,   168,   170,   172,   175,   195,   196,   200,   201,   202,
     205,   207,   209,   210,   215,   216,   217,   218,   363,   364,
      50,   420,   109,   109,   108,   109,   108,   109,   109,   109,
     108,   109,   315,   108,   108,     7,   139,   145,   146,   147,
     148,   149,   155,   156,   176,   198,   201,   376,   377,   381,
     384,   386,   387,   388,     7,   175,   176,   196,   198,   409,
     198,   409,     7,   176,   193,   194,   176,    55,   204,   205,
     214,   325,    71,    69,   168,   170,   316,   317,   318,   353,
     316,   353,   316,   353,    48,   373,   231,   363,   420,     7,
      39,    40,    41,    42,   176,   150,   157,   158,   159,   379,
     380,   382,   383,   384,   385,   387,   141,   176,   108,    23,
     117,   108,   110,   174,   320,   117,    56,   321,   279,   281,
     232,   367,   164,   182,   183,   184,   185,   186,   187,   330,
     273,   220,   366,   363,   232,   364,   117,    69,   316,   354,
      67,   168,   169,   170,   327,   176,   227,   228,   229,   230,
     391,   391,   391,   391,   391,   216,   217,   208,   391,   117,
     377,   398,   391,    20,    21,   195,   402,   391,   175,   195,
     196,   402,   391,   197,   197,   218,   391,   391,   108,    49,
     352,    58,   419,   221,    57,   326,   117,   117,   108,   117,
     108,   117,   318,   353,   353,   353,   363,   232,    31,   391,
     391,   391,    40,    41,    31,   391,   380,   398,   391,   391,
     141,   117,   319,   108,   330,   177,   108,    15,    16,    25,
      26,    27,    68,   280,   283,   286,   287,   288,   289,   290,
     291,   295,    25,    26,   282,   288,   295,   117,   188,   329,
     232,   232,   365,    48,   117,   354,   109,   108,   117,   108,
     117,   108,   117,    58,   328,   117,   117,   129,   389,   117,
     389,   117,   117,   398,   398,   398,   117,    48,   117,     5,
     117,   389,   117,    72,   117,   398,   398,   398,    72,   117,
     108,   109,   108,   109,   398,   117,   117,   389,   117,   355,
     206,   352,   215,   358,   117,   328,    48,   177,   232,   365,
     398,   117,   117,   117,   391,   391,   398,   117,   389,     5,
     117,   117,   398,   320,   329,    19,    20,    22,   108,   109,
     234,   108,    27,    68,    27,    68,    25,    26,    25,    26,
     284,   284,   108,   365,   420,   177,   398,   398,   398,   398,
     398,   398,    59,    60,    61,    45,    46,    62,   331,   332,
     333,   118,   406,   118,   406,   118,   118,     5,     5,     5,
     177,   178,   179,   180,   181,   392,    48,    52,    53,    64,
      71,   202,   203,   395,   396,   398,    46,   398,   392,     5,
       5,     5,   398,   406,   398,   398,     5,   118,   398,   118,
     406,   398,   355,   229,   230,   359,   355,   331,     5,   365,
     420,     5,   118,    32,   406,    32,   406,   117,   117,     5,
     118,   406,   396,   118,   398,     5,   330,   109,   109,   109,
     233,   296,   108,    24,    28,    29,   285,   292,   293,   294,
     420,     5,     5,     5,     5,     5,     5,   330,   108,   108,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   355,   333,   396,   396,   396,   398,   315,
       4,   400,     5,   108,     5,   398,   396,   396,   396,     5,
     398,     5,     5,   396,   398,     5,   398,   398,     5,   398,
     108,    70,   356,   358,    69,   396,   420,   396,   398,   177,
     394,   394,   394,   394,    32,   406,    32,   406,   396,   400,
       5,   396,   329,   297,   298,   299,   108,   108,   300,   301,
      18,   302,   109,   109,   396,   396,   396,   396,   396,   396,
     329,   338,   338,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   346,   347,    55,   142,   143,   161,   334,
     335,   222,   336,   166,   345,   356,   400,     5,   316,     3,
     396,   398,   396,     5,   400,   396,     5,   396,   396,     5,
     396,     5,     5,   396,     5,   117,   398,   355,   400,     5,
     398,   398,   398,   398,   117,   178,   179,   180,   393,   117,
     393,   117,   393,   117,   393,   400,   396,   300,   300,   300,
     302,   301,   400,   400,   400,   400,   400,   400,    72,   141,
     161,   167,   235,   339,   340,   341,   342,   343,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,     6,   108,
     108,   117,   109,   335,   108,   110,   225,   337,   108,   398,
     396,   211,   212,   213,   400,     5,   400,   396,   396,   396,
     400,   396,   396,   400,   396,     5,   356,   396,     5,     5,
       5,     5,   393,   398,   393,   398,   393,   398,   393,   398,
     400,   108,   391,   109,   108,   344,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   347,   117,     5,   400,
     117,   399,   399,   399,   396,   400,   400,   400,   400,   400,
     400,   396,   398,   400,   396,   396,   396,   396,   398,     5,
     398,     5,   398,     5,   398,     5,   117,   224,   236,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   396,
      48,   117,     5,     5,     5,   400,   400,     5,   400,   400,
     400,   400,     5,   396,     5,   396,     5,   396,     5,   396,
     400,    48,   395,   397,   397,   397,   396,   396,   400,   396,
     400,   396,   400,   396,   400,   400,   400,   400,   400,   400
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   251,   251,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     253,   253,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   255,   255,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   259,   259,
     259,   260,   261,   261,   262,   263,   264,   265,   265,   265,
     266,   266,   266,   267,   268,   269,   270,   271,   271,   272,
     273,   273,   274,   275,   276,   276,   277,   277,   278,   278,
     279,   279,   280,   280,   280,   280,   281,   281,   282,   282,
     283,   283,   284,   284,   285,   285,   285,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   291,   292,   293,
     294,   295,   295,   295,   295,   295,   295,   296,   295,   297,
     295,   298,   295,   299,   295,   295,   300,   300,   301,   302,
     302,   303,   303,   303,   303,   304,   305,   305,   306,   307,
     308,   308,   309,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   315,   315,   316,   316,   317,   317,   318,   318,
     318,   318,   319,   319,   319,   320,   320,   321,   321,   322,
     322,   323,   324,   324,   325,   325,   326,   327,   328,   328,
     328,   328,   329,   329,   330,   330,   330,   330,   330,   330,
     330,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   332,   332,   333,   333,
     334,   334,   335,   335,   335,   335,   336,   336,   336,   337,
     337,   338,   338,   339,   339,   339,   339,   339,   340,   341,
     342,   343,   344,   344,   345,   346,   346,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   348,   349,   350,
     351,   352,   352,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   360,   360,   360,
     360,   361,   362,   363,   363,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   365,   365,   366,   366,   367,   367,
     367,   367,   368,   368,   368,   369,   369,   369,   370,   371,
     372,   372,   373,   374,   374,   375,   376,   376,   377,   377,
     377,   377,   378,   379,   379,   380,   380,   380,   380,   381,
     381,   382,   383,   383,   383,   384,   384,   384,   384,   385,
     385,   386,   387,   388,   388,   388,   389,   389,   390,   390,
     391,   391,   391,   391,   391,   391,   392,   392,   392,   392,
     392,   392,   393,   393,   393,   394,   394,   395,   395,   395,
     395,   395,   395,   395,   396,   397,   398,   398,   398,   399,
     399,   399,   400,   400,   400,   400,   401,   401,   401,   402,
     402,   402,   403,   403,   404,   404,   405,   406,   406,   406,
     406,   406,   407,   407,   408,   408,   408,   408,   409,   409,
     410,   410,   411,   411,   412,   412,   413,   413,   414,   415,
     416,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     418,   418,   418,   419,   420,   420,   420
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     7,
       8,     4,     0,     3,     4,     2,     2,     3,     3,     5,
       4,     6,     4,     3,     3,     3,     3,     2,     3,     4,
       0,     2,     5,     5,     1,     2,     5,     7,     5,     5,
       0,     2,     1,     1,     1,     1,     0,     2,     1,     1,
       2,     2,     0,     2,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     5,     4,     2,     3,     3,     3,     0,     4,     0,
       5,     0,     5,     0,     5,     2,     1,     2,     1,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     5,     6,     3,     4,     3,     4,
       3,     4,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     0,     2,     2,     0,     2,     0,     2,    13,
      11,    11,    10,     9,     0,     2,     2,     2,     0,     2,
       4,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     3,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     1,     1,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     0,     2,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     3,     3,     2,
       2,     2,     0,     2,     2,     1,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     7,     6,     6,
       9,     0,     2,     0,     3,     0,     3,     0,     3,     0,
       2,     7,     7,     0,     3,     1,     1,     3,     6,     7,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     1,     1,
       1,     1,     3,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     8,     6,     6,     1,     2,     1,     1,
       1,     1,     6,     1,     2,     1,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     3,     1,     1,     1,     1,     1,     9,     6,
       0,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     0,     2,     3,     0,
       2,     3,     0,     6,     6,     6,     8,    10,     7,     0,
       1,     1,     8,     9,     9,     9,     6,     0,     1,     1,
       1,     1,     8,     7,     7,     7,     4,     4,     0,     1,
       9,     6,     8,     8,     8,     8,     8,     8,     7,     7,
       9,    10,    11,    12,    10,    11,    12,    10,    11,    12,
      10,    11,    12,     2,     0,     2,     3
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
        case 168:
#line 544 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 2821 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 548 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 551 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2838 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 557 "src/p.y" /* yacc.c:1646  */
    {
                    if (! Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.isdaemon   = true;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 2851 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 567 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 568 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2863 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 571 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 578 "src/p.y" /* yacc.c:1646  */
    {
                    Run.init = true;
                  }
#line 2881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 583 "src/p.y" /* yacc.c:1646  */
    {
                    Run.fipsEnabled = true;
                  }
#line 2889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 588 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.logfile || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.use_syslog = false;
                     Run.dolog = true;
                   }
                  }
#line 2902 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 596 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 599 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 604 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 2926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 607 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2935 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 611 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2944 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 617 "src/p.y" /* yacc.c:1646  */
    {
                    Run.idfile = (yyvsp[0].string);
                  }
#line 2952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 622 "src/p.y" /* yacc.c:1646  */
    {
                    Run.statefile = (yyvsp[0].string);
                  }
#line 2960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 627 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 2971 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 642 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname(((yyvsp[-3].url))->hostname);
                    addmmonit((yyvsp[-3].url), (yyvsp[-2].number), (yyvsp[-1].number), (yyvsp[0].string));
                  }
#line 2980 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 649 "src/p.y" /* yacc.c:1646  */
    {
                    Run.dommonitcredentials = false;
                  }
#line 2988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 654 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 2998 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 661 "src/p.y" /* yacc.c:1646  */
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 3010 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 674 "src/p.y" /* yacc.c:1646  */
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[-4].string));

                    check_hostname((yyvsp[-4].string));
                    mailserverset.host = (yyvsp[-4].string);
                    mailserverset.username = (yyvsp[-3].string);
                    mailserverset.password = (yyvsp[-2].string);
                    mailserverset.ssl.version = (yyvsp[-1].number);
                    if (mailserverset.ssl.version != SSL_Disabled) {
                      mailserverset.ssl.use_ssl = true;
                      if (mailserverset.ssl.version == SSL_V2 || mailserverset.ssl.version == SSL_V3)
                         mailserverset.port = PORT_SMTPS;
                      mailserverset.ssl.certmd5 = (yyvsp[0].string);
                    }
                    addmailserver(&mailserverset);
                  }
#line 3033 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 692 "src/p.y" /* yacc.c:1646  */
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[-6].string));

                    check_hostname((yyvsp[-6].string));
                    mailserverset.host = (yyvsp[-6].string);
                    mailserverset.port = (yyvsp[-4].number);
                    mailserverset.username = (yyvsp[-3].string);
                    mailserverset.password = (yyvsp[-2].string);
                    mailserverset.ssl.version = (yyvsp[-1].number);
                    if (mailserverset.ssl.version != SSL_Disabled) {
                      mailserverset.ssl.use_ssl = true;
                      mailserverset.ssl.certmd5 = (yyvsp[0].string);
                    }
                    addmailserver(&mailserverset);
                  }
#line 3055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3073 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 739 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3081 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 742 "src/p.y" /* yacc.c:1646  */
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
#line 3097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 772 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3105 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 775 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 788 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 793 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 810 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3155 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 813 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3168 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3177 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 825 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3186 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 829 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 833 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 837 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 841 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3221 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 844 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3238 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 855 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 858 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 862 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3272 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 865 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3282 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 876 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3291 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 882 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 883 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 889 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 892 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 899 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 908 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3351 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 913 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 916 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 921 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 926 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname((yyvsp[0].string));
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 932 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 940 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 946 "src/p.y" /* yacc.c:1646  */
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
#line 3421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 958 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 963 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 970 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3461 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 982 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 987 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 990 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 996 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 999 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1012 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1013 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1016 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1017 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1018 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid(NULL, (yyvsp[0].number)) ); }
#line 3531 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1019 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid(NULL, (yyvsp[0].number)) ); }
#line 3537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1022 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1023 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1024 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1027 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1028 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1031 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1032 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1035 "src/p.y" /* yacc.c:1646  */
    {
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    /* This is a workaround to support content match without having to create
                     an URL object. 'urloption' creates the Request_T object we need minus the
                     URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1046 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-7].url));
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1055 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-5].number);
                        portset.retry = (yyvsp[-4].number);
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 3618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1063 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.type = (yyvsp[-6].number);
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 3630 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1070 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3642 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1079 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 3650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1082 "src/p.y" /* yacc.c:1646  */
    {
                        check_hostname((yyvsp[0].string));
                        portset.hostname = (yyvsp[0].string);
                  }
#line 3659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1088 "src/p.y" /* yacc.c:1646  */
    {
                        portset.port = (yyvsp[0].number);
                        portset.family = Socket_Ip;
                  }
#line 3668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1094 "src/p.y" /* yacc.c:1646  */
    {
                        portset.pathname = (yyvsp[0].string);
                        portset.family = Socket_Unix;
                  }
#line 3677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1100 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1103 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1106 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = true;
                    portset.SSL.version = (yyvsp[-1].number);
                    if (portset.SSL.version == SSL_Disabled)
                      portset.SSL.version = SSL_Auto;
                    portset.SSL.certmd5 = (yyvsp[0].string);
                  }
#line 3706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1114 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_DGRAM;
                  }
#line 3714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1119 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 3722 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1122 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3730 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1127 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Disabled; }
#line 3736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1128 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V2; }
#line 3742 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1129 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V3; }
#line 3748 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1130 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_TLSV1; }
#line 3754 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1132 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_TLSV11;
                }
#line 3765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_TLSV12;
                }
#line 3776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1145 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Auto; }
#line 3782 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1148 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3790 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1151 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1154 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3806 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1157 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3814 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1160 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 3822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1163 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 3830 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1166 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 3838 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1169 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 3849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1175 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1178 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3868 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1184 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 3876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1187 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 3884 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1190 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 3892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1193 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 3900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1196 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 3908 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1199 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 3916 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1202 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 3924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1205 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
#line 3933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1209 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 3941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1212 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 3949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1215 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 3957 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1218 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 3965 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1221 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 3976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1227 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 3984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1230 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 3992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1233 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1236 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1239 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1242 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1245 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1248 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4040 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1251 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4048 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1254 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1257 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1260 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 4072 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1269 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1272 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4088 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1281 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string);
                  }
#line 4096 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1284 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4104 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1287 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4112 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1290 "src/p.y" /* yacc.c:1646  */
    {
                    portset.version = (yyvsp[0].number);
                  }
#line 4120 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1296 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4128 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1299 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4136 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1305 "src/p.y" /* yacc.c:1646  */
    {
                     portset.maxforward = verifyMaxForward((yyvsp[0].number));
                   }
#line 4144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1321 "src/p.y" /* yacc.c:1646  */
    {
                    portset.operator = (yyvsp[-1].number);
                    portset.status = (yyvsp[0].number);
                  }
#line 4153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1327 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1333 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_checksum = (yyvsp[0].string);
                  }
#line 4170 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1338 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4178 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1344 "src/p.y" /* yacc.c:1646  */
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[0].string));
                 }
#line 4189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1352 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1361 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.loglimit = (yyvsp[-1].number);
                  }
#line 4206 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1365 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.closelimit = (yyvsp[-1].number);
                  }
#line 4215 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1369 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1373 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4233 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1377 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.replylimit = (yyvsp[-1].number);
                  }
#line 4242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1381 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4251 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1385 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.startlimit = (yyvsp[-1].number);
                  }
#line 4260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1389 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4269 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1393 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1397 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1403 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1410 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1416 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1422 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4325 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4333 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1432 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4341 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1437 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1440 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4357 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1445 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4365 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1448 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1453 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1456 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4389 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1461 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1464 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1469 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1475 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1484 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1490 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1491 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1494 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1498 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1501 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4474 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1505 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4482 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1510 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1513 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4494 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1520 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4500 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1521 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 4506 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1522 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 4512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1523 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1524 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4524 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1525 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1526 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4536 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1527 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4542 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1528 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4548 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1529 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4554 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1530 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1531 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1532 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1533 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 4578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1534 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4584 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1535 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 4590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1536 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 4596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1537 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4602 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1538 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1539 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1540 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4620 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1541 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 4626 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1542 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1543 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 4638 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1544 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4644 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1545 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1546 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1547 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4662 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1548 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1559 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1560 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4680 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1561 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4686 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1562 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1565 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1569 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4710 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1573 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1579 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 4727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1582 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 4735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1585 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 4744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1591 "src/p.y" /* yacc.c:1646  */
    { addservicegroup((yyvsp[0].string)); FREE((yyvsp[0].string));}
#line 4750 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1602 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1605 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 4768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1612 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 4780 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1621 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1637 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1653 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4808 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1658 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4818 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1665 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1672 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 4834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1673 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 4840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1674 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 4846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1677 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4856 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1682 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4866 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1687 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1692 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4886 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1699 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1704 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1711 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 4916 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1718 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 4926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1725 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 4932 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1726 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 4938 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1727 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 4944 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1730 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 4950 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1731 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 4956 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1734 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, false);
                  }
#line 4967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1740 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset, true);
                  }
#line 4977 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1747 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1748 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 4989 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1749 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 4995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1750 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5001 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1751 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1752 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5013 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1755 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1756 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1757 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5031 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1758 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1759 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1760 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5049 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1763 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1764 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5061 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1765 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1767 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5073 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1768 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5079 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1770 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Alert; }
#line 5085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1771 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1772 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1773 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Restart; }
#line 5103 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1774 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Start; }
#line 5109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1775 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Stop; }
#line 5115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1776 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Unmonitor; }
#line 5121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1779 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1788 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5145 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1798 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1804 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1815 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1821 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1831 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1834 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5209 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1837 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5217 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1840 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1845 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5234 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1850 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5245 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1856 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1862 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5261 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1863 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1864 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1867 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1874 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1883 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1892 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5323 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1901 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 5332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1907 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1908 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1909 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 5350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1910 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 5356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1911 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 5362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1914 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1919 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 5382 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1926 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5394 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1939 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 5417 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1946 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 5428 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1954 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 5436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1957 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 5444 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1963 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1969 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 5465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1976 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5476 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1982 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5486 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1995 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2002 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2008 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2015 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 5537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2021 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 5546 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2026 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 5557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2034 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2042 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2050 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2058 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5609 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2066 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2074 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2084 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2092 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2100 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2108 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2116 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5700 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2124 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5713 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2134 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 5719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2137 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 5725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2138 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 5731 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2139 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 5737 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 5741 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2142 "src/p.y" /* yacc.c:1906  */



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
        Run.stopped                 = false;
        Run.dolog                   = false;
        Run.doaction                = false;
        Run.dommonitcredentials     = true;
        Run.mmonitcredentials       = NULL;
        Run.httpd.flags             = Httpd_Disabled | Httpd_Signature;
        Run.httpd.credentials       = NULL;
        memset(&(Run.httpd.socket), 0, sizeof(Run.httpd.socket));
        Run.mailserver_timeout      = SMTP_TIMEOUT;
        Run.eventlist               = NULL;
        Run.eventlist_dir           = NULL;
        Run.eventlist_slots         = -1;
        Run.system                  = NULL;
        Run.expectbuffer            = STRLEN;
        Run.mmonits                 = NULL;
        Run.maillist                = NULL;
        Run.mailservers             = NULL;
        Run.MailFormat.from         = NULL;
        Run.MailFormat.replyto      = NULL;
        Run.MailFormat.subject      = NULL;
        Run.MailFormat.message      = NULL;
        depend_list                 = NULL;
        Run.handler_init            = true;
        Run.fipsEnabled             = false;
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
        reset_mailserverset();
        reset_portset();
        reset_permset();
        reset_icmpset();
        reset_linkstatusset();
        reset_linkspeedset();
        reset_linksaturationset();
        reset_bandwidthset();
        reset_rateset();
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
        if (! Run.polltime && (Run.isdaemon || Run.init)) {
                LogError("Poll time is invalid or not defined. Please define poll time in the control file\nas a number (> 0)  or use the -d option when starting monit\n");
                cfg_errflag++;
        }

        if (Run.logfile)
                Run.dolog = true;

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

        if (Run.mmonits) {
                if (Run.httpd.flags & Httpd_Net || Run.httpd.flags & Httpd_Unix) {
                        if (Run.dommonitcredentials) {
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
                } else {
                        LogWarning("M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n");
                }
        }

        /* Check the sanity of any dependency graph */
        check_depend();

#ifdef HAVE_OPENSSL
        Ssl_setFipsMode(Run.fipsEnabled);
#endif
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static Service_T createservice(Service_Type type, char *name, char *value, boolean_t (*check)(Service_T s)) {
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
        addeventaction(&(current)->action_MONIT_START,  Action_Start, Action_Ignored);
        addeventaction(&(current)->action_MONIT_STOP,   Action_Stop,  Action_Ignored);
        addeventaction(&(current)->action_MONIT_RELOAD, Action_Start, Action_Ignored);
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
        ServiceGroupMember_T m;

        ASSERT(name);

        /* Check if service group with the same name is defined already */
        for (g = servicegrouplist; g; g = g->next)
                if (IS(g->name, name))
                        break;

        if (! g) {
                NEW(g);
                g->name = Str_dup(name);
                g->next = servicegrouplist;
                servicegrouplist = g;
        }

        NEW(m);
        m->name = Str_dup(current->name);
        m->next = g->members;
        g->members = m;
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

        Port_T p;
        NEW(p);
        p->port               = port->port;
        p->type               = port->type;
        p->socket             = port->socket;
        p->family             = port->family;
        p->action             = port->action;
        p->timeout            = port->timeout;
        p->retry              = port->retry;
        p->request            = port->request;
        p->generic            = port->generic;
        p->protocol           = port->protocol;
        p->pathname           = port->pathname;
        p->hostname           = port->hostname;
        p->url_request        = port->url_request;
        p->request_checksum   = port->request_checksum;
        p->request_hostheader = port->request_hostheader;
        p->http_headers       = port->http_headers;
        p->version            = port->version;
        p->operator           = port->operator;
        p->status             = port->status;
        memcpy(&p->ApacheStatus, &port->ApacheStatus, sizeof(struct apache_status));

        if (p->request_checksum) {
                cleanup_hash_string(p->request_checksum);
                if (strlen(p->request_checksum) == 32)
                        p->request_hashtype = Hash_Md5;
                else if (strlen(p->request_checksum) == 40)
                        p->request_hashtype = Hash_Sha1;
                else
                        yyerror2("invalid checksum [%s]", p->request_checksum);
        } else {
                p->request_hashtype = 0;
        }

        if (port->SSL.use_ssl == true) {
#ifdef HAVE_OPENSSL
                if (port->SSL.certmd5 != NULL) {
                        p->SSL.certmd5 = port->SSL.certmd5;
                        cleanup_hash_string(p->SSL.certmd5);
                }
                p->SSL.use_ssl = true;
                p->SSL.version = port->SSL.version;
#else
                yyerror("SSL check cannot be activated -- SSL disabled");
#endif
        }
        p->maxforward = port->maxforward;
        p->next = *list;
        *list = p;

        reset_portset();

}


/*
 * Add a new resource object to the current service resource list
 */
static void addresource(Resource_T rr) {
        Resource_T r;

        ASSERT(rr);

        NEW(r);
        if (! Run.doprocess)
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
        int     reg_return;

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
        reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

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
        icmp->type         = is->type;
        icmp->count        = is->count;
        icmp->timeout      = is->timeout;
        icmp->action       = is->action;
        icmp->is_available = false;
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

        ea->failed->id     = failed;
        ea->failed->count  = rate1.count;
        ea->failed->cycles = rate1.cycles;
        if (failed == Action_Exec) {
                ASSERT(command1);
                ea->failed->exec = command1;
                command1 = NULL;
        }

        ea->succeeded->id     = succeeded;
        ea->succeeded->count  = rate2.count;
        ea->succeeded->cycles = rate2.cycles;
        if (succeeded == Action_Exec) {
                ASSERT(command2);
                ea->succeeded->exec = command2;
                command2 = NULL;
        }
        *_ea = ea;
        reset_rateset();
}


/*
 * Add a generic protocol handler to
 */
static void addgeneric(Port_T port, char *send, char *expect) {
        Generic_T g = port->generic;

        if (g == NULL) {
                NEW(g);
                port->generic = g;
        } else {
                while (g->next)
                        g = g->next;
                NEW(g->next);
                g = g->next;
        }

        if (send != NULL) {
                g->send = send;
                g->expect = NULL;
        } else if (expect != NULL) {
#ifdef HAVE_REGEX_H

                int   reg_return;
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

        portset.protocol = Protocol_get(Protocol_HTTP);

        if (urlrequest == NULL)
                NEW(urlrequest);
        urlrequest->url = U;
        portset.hostname = Str_dup(U->hostname);
        check_hostname(portset.hostname);
        portset.port = U->port;
        portset.url_request = urlrequest;
        portset.type = SOCK_STREAM;
        portset.request = Str_cat("%s%s%s", U->path, U->query ? "?" : "", U->query ? U->query : "");
        /* Only the HTTP protocol is supported for URLs.
         See also the lexer if this is to be changed in
         the future */
        portset.protocol = Protocol_get(Protocol_HTTP);
        if (IS(U->protocol, "https"))
                portset.SSL.use_ssl = true;

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
static void addmmonit(URL_T url, int timeout, Ssl_Version sslversion, char *certmd5) {
        Mmonit_T c;

        ASSERT(url);

        NEW(c);
        c->url = url;
        if (IS(c->url->protocol, "https")) {
#ifdef HAVE_OPENSSL
                c->ssl.use_ssl = true;
                c->ssl.version = (sslversion == SSL_Disabled) ? SSL_Auto : sslversion;
                if (certmd5) {
                        c->ssl.certmd5 = certmd5;
                        cleanup_hash_string(c->ssl.certmd5);
                }
#else
                yyerror("SSL check cannot be activated -- SSL disabled");
#endif
        }
        c->timeout = timeout;
        c->next = NULL;

        if (Run.mmonits) {
                Mmonit_T C;
                for (C = Run.mmonits; C->next; C = C->next)
                        /* Empty */ ;
                C->next = c;
        } else {
                Run.mmonits = c;
        }
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
        s->ssl.use_ssl = mailserver->ssl.use_ssl;
        s->ssl.version = mailserver->ssl.version;
        s->ssl.certmd5 = mailserver->ssl.certmd5;

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
        struct passwd *pwd;

        if (user) {
                pwd = getpwnam(user);

                if (! pwd) {
                        yyerror2("Requested user not found on the system");
                        return(0);
                }

        } else {

                if (! (pwd = getpwuid(uid))) {
                        yyerror2("Requested uid not found on the system");
                        return(0);
                }
        }

        return(pwd->pw_uid);

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
        if (Run.logfile) {
                if (IS(Run.logfile, logfile)) {
                        FREE(logfile);
                        return;
                } else {
                        FREE(Run.logfile);
                }
        }
        Run.logfile = logfile;
}


/*
 * Reset the pidfile if changed
 */
static void setpidfile(char *pidfile) {
        if (Run.pidfile) {
                if (IS(Run.pidfile, pidfile)) {
                        FREE(pidfile);
                        return;
                } else {
                        FREE(Run.pidfile);
                }
        }
        Run.pidfile = pidfile;
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

        if (! Run.logfile || ihp.logfile) {
                ihp.logfile = true;
                setlogfile(Str_dup("syslog"));
                Run.use_syslog = true;
                Run.dolog = true;
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
        mailserverset.ssl.use_ssl = false;
        mailserverset.ssl.version = SSL_Auto;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
        memset(&portset, 0, sizeof(struct myport));
        portset.socket = -1;
        portset.type = SOCK_STREAM;
        portset.family = Socket_Ip;
        portset.SSL.version = SSL_Auto;
        portset.timeout = NET_TIMEOUT;
        portset.retry = 1;
        portset.maxforward = 70;
        portset.operator = Operator_Less;
        portset.status = 400;
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
        filesystemset.limit_percent = -1;
        filesystemset.action = NULL;
}


/*
 * Reset the ICMP set to default values
 */
static void reset_icmpset() {
        icmpset.type = ICMP_ECHO;
        icmpset.count = ICMP_ATTEMPT_COUNT;
        icmpset.timeout = NET_TIMEOUT;
        icmpset.action = NULL;
}


/*
 * Reset the Rate set to default values
 */
static void reset_rateset() {
        rate1.count  = 1;
        rate1.cycles = 1;

        rate2.count  = 1;
        rate2.cycles = 1;
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
 * Check hostname
 */
static void check_hostname(char *hostname) {
        ASSERT(hostname);
        if (! check_host(hostname))
                yywarning2("Hostname %s did not resolve", hostname);
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

        reset_depend();
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
        int max = 70;

        if (mf >= 0 && mf <= 255)
                max = mf;
        else
                yywarning2("SIP max forward is outside the range [0..255]. Setting max forward to 70");

        return max;
}


/* -------------------------------------------------------------------- Misc */


/*
 * Cleans up an md5 string, tolower and remove byte separators
 */
static int cleanup_hash_string(char *hashstring) {
        int i = 0, j = 0;

        ASSERT(hashstring);

        while (hashstring[i] != '\0') {
                if (isxdigit((int) hashstring[i])) {
                        hashstring[j] = tolower((int)hashstring[i]);
                        j++;
                }
                i++;
        }
        hashstring[j] = '\0';
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

