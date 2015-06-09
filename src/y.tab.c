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
static struct mymmonit mmonitset;
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
static void  reset_rateset();
static void  check_name(char *);
static int   check_perm(int);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend();
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);


#line 331 "src/y.tab.c" /* yacc.c:339  */

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
    BYTEIN = 288,
    BYTEOUT = 289,
    PACKETIN = 290,
    PACKETOUT = 291,
    SPEED = 292,
    SATURATION = 293,
    UPLOAD = 294,
    DOWNLOAD = 295,
    TOTAL = 296,
    IDFILE = 297,
    STATEFILE = 298,
    SEND = 299,
    EXPECT = 300,
    EXPECTBUFFER = 301,
    CYCLE = 302,
    COUNT = 303,
    REMINDER = 304,
    PIDFILE = 305,
    START = 306,
    STOP = 307,
    PATHTOK = 308,
    HOST = 309,
    HOSTNAME = 310,
    PORT = 311,
    IPV4 = 312,
    IPV6 = 313,
    TYPE = 314,
    UDP = 315,
    TCP = 316,
    TCPSSL = 317,
    PROTOCOL = 318,
    CONNECTION = 319,
    ALERT = 320,
    NOALERT = 321,
    MAILFORMAT = 322,
    UNIXSOCKET = 323,
    SIGNATURE = 324,
    TIMEOUT = 325,
    RETRY = 326,
    RESTART = 327,
    CHECKSUM = 328,
    EVERY = 329,
    NOTEVERY = 330,
    DEFAULT = 331,
    HTTP = 332,
    HTTPS = 333,
    APACHESTATUS = 334,
    FTP = 335,
    SMTP = 336,
    SMTPS = 337,
    POP = 338,
    POPS = 339,
    IMAP = 340,
    IMAPS = 341,
    CLAMAV = 342,
    NNTP = 343,
    NTP3 = 344,
    MYSQL = 345,
    DNS = 346,
    WEBSOCKET = 347,
    SSH = 348,
    DWP = 349,
    LDAP2 = 350,
    LDAP3 = 351,
    RDATE = 352,
    RSYNC = 353,
    TNS = 354,
    PGSQL = 355,
    POSTFIXPOLICY = 356,
    SIP = 357,
    LMTP = 358,
    GPS = 359,
    RADIUS = 360,
    MEMCACHE = 361,
    REDIS = 362,
    MONGODB = 363,
    SIEVE = 364,
    STRING = 365,
    PATH = 366,
    MAILADDR = 367,
    MAILFROM = 368,
    MAILREPLYTO = 369,
    MAILSUBJECT = 370,
    MAILBODY = 371,
    SERVICENAME = 372,
    STRINGNAME = 373,
    NUMBER = 374,
    PERCENT = 375,
    LOGLIMIT = 376,
    CLOSELIMIT = 377,
    DNSLIMIT = 378,
    KEEPALIVELIMIT = 379,
    REPLYLIMIT = 380,
    REQUESTLIMIT = 381,
    STARTLIMIT = 382,
    WAITLIMIT = 383,
    GRACEFULLIMIT = 384,
    CLEANUPLIMIT = 385,
    REAL = 386,
    CHECKPROC = 387,
    CHECKFILESYS = 388,
    CHECKFILE = 389,
    CHECKDIR = 390,
    CHECKHOST = 391,
    CHECKSYSTEM = 392,
    CHECKFIFO = 393,
    CHECKPROGRAM = 394,
    CHECKNET = 395,
    CHILDREN = 396,
    STATUS = 397,
    ORIGIN = 398,
    VERSIONOPT = 399,
    RESOURCE = 400,
    MEMORY = 401,
    TOTALMEMORY = 402,
    LOADAVG1 = 403,
    LOADAVG5 = 404,
    LOADAVG15 = 405,
    SWAP = 406,
    MODE = 407,
    ACTIVE = 408,
    PASSIVE = 409,
    MANUAL = 410,
    CPU = 411,
    TOTALCPU = 412,
    CPUUSER = 413,
    CPUSYSTEM = 414,
    CPUWAIT = 415,
    GROUP = 416,
    REQUEST = 417,
    DEPENDS = 418,
    BASEDIR = 419,
    SLOT = 420,
    EVENTQUEUE = 421,
    SECRET = 422,
    HOSTHEADER = 423,
    UID = 424,
    EUID = 425,
    GID = 426,
    MMONIT = 427,
    INSTANCE = 428,
    USERNAME = 429,
    PASSWORD = 430,
    TIMESTAMP = 431,
    CHANGED = 432,
    SECOND = 433,
    MINUTE = 434,
    HOUR = 435,
    DAY = 436,
    MONTH = 437,
    SSLAUTO = 438,
    SSLV2 = 439,
    SSLV3 = 440,
    TLSV1 = 441,
    TLSV11 = 442,
    TLSV12 = 443,
    CERTMD5 = 444,
    BYTE = 445,
    KILOBYTE = 446,
    MEGABYTE = 447,
    GIGABYTE = 448,
    INODE = 449,
    SPACE = 450,
    TFREE = 451,
    PERMISSION = 452,
    SIZE = 453,
    MATCH = 454,
    NOT = 455,
    IGNORE = 456,
    ACTION = 457,
    UPTIME = 458,
    EXEC = 459,
    UNMONITOR = 460,
    PING = 461,
    PING4 = 462,
    PING6 = 463,
    ICMP = 464,
    ICMPECHO = 465,
    NONEXIST = 466,
    EXIST = 467,
    INVALID = 468,
    DATA = 469,
    RECOVERED = 470,
    PASSED = 471,
    SUCCEEDED = 472,
    URL = 473,
    CONTENT = 474,
    PID = 475,
    PPID = 476,
    FSFLAG = 477,
    REGISTER = 478,
    CREDENTIALS = 479,
    URLOBJECT = 480,
    TARGET = 481,
    TIMESPEC = 482,
    HTTPHEADER = 483,
    MAXFORWARD = 484,
    FIPS = 485,
    GREATER = 486,
    LESS = 487,
    EQUAL = 488,
    NOTEQUAL = 489
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
#define BYTEIN 288
#define BYTEOUT 289
#define PACKETIN 290
#define PACKETOUT 291
#define SPEED 292
#define SATURATION 293
#define UPLOAD 294
#define DOWNLOAD 295
#define TOTAL 296
#define IDFILE 297
#define STATEFILE 298
#define SEND 299
#define EXPECT 300
#define EXPECTBUFFER 301
#define CYCLE 302
#define COUNT 303
#define REMINDER 304
#define PIDFILE 305
#define START 306
#define STOP 307
#define PATHTOK 308
#define HOST 309
#define HOSTNAME 310
#define PORT 311
#define IPV4 312
#define IPV6 313
#define TYPE 314
#define UDP 315
#define TCP 316
#define TCPSSL 317
#define PROTOCOL 318
#define CONNECTION 319
#define ALERT 320
#define NOALERT 321
#define MAILFORMAT 322
#define UNIXSOCKET 323
#define SIGNATURE 324
#define TIMEOUT 325
#define RETRY 326
#define RESTART 327
#define CHECKSUM 328
#define EVERY 329
#define NOTEVERY 330
#define DEFAULT 331
#define HTTP 332
#define HTTPS 333
#define APACHESTATUS 334
#define FTP 335
#define SMTP 336
#define SMTPS 337
#define POP 338
#define POPS 339
#define IMAP 340
#define IMAPS 341
#define CLAMAV 342
#define NNTP 343
#define NTP3 344
#define MYSQL 345
#define DNS 346
#define WEBSOCKET 347
#define SSH 348
#define DWP 349
#define LDAP2 350
#define LDAP3 351
#define RDATE 352
#define RSYNC 353
#define TNS 354
#define PGSQL 355
#define POSTFIXPOLICY 356
#define SIP 357
#define LMTP 358
#define GPS 359
#define RADIUS 360
#define MEMCACHE 361
#define REDIS 362
#define MONGODB 363
#define SIEVE 364
#define STRING 365
#define PATH 366
#define MAILADDR 367
#define MAILFROM 368
#define MAILREPLYTO 369
#define MAILSUBJECT 370
#define MAILBODY 371
#define SERVICENAME 372
#define STRINGNAME 373
#define NUMBER 374
#define PERCENT 375
#define LOGLIMIT 376
#define CLOSELIMIT 377
#define DNSLIMIT 378
#define KEEPALIVELIMIT 379
#define REPLYLIMIT 380
#define REQUESTLIMIT 381
#define STARTLIMIT 382
#define WAITLIMIT 383
#define GRACEFULLIMIT 384
#define CLEANUPLIMIT 385
#define REAL 386
#define CHECKPROC 387
#define CHECKFILESYS 388
#define CHECKFILE 389
#define CHECKDIR 390
#define CHECKHOST 391
#define CHECKSYSTEM 392
#define CHECKFIFO 393
#define CHECKPROGRAM 394
#define CHECKNET 395
#define CHILDREN 396
#define STATUS 397
#define ORIGIN 398
#define VERSIONOPT 399
#define RESOURCE 400
#define MEMORY 401
#define TOTALMEMORY 402
#define LOADAVG1 403
#define LOADAVG5 404
#define LOADAVG15 405
#define SWAP 406
#define MODE 407
#define ACTIVE 408
#define PASSIVE 409
#define MANUAL 410
#define CPU 411
#define TOTALCPU 412
#define CPUUSER 413
#define CPUSYSTEM 414
#define CPUWAIT 415
#define GROUP 416
#define REQUEST 417
#define DEPENDS 418
#define BASEDIR 419
#define SLOT 420
#define EVENTQUEUE 421
#define SECRET 422
#define HOSTHEADER 423
#define UID 424
#define EUID 425
#define GID 426
#define MMONIT 427
#define INSTANCE 428
#define USERNAME 429
#define PASSWORD 430
#define TIMESTAMP 431
#define CHANGED 432
#define SECOND 433
#define MINUTE 434
#define HOUR 435
#define DAY 436
#define MONTH 437
#define SSLAUTO 438
#define SSLV2 439
#define SSLV3 440
#define TLSV1 441
#define TLSV11 442
#define TLSV12 443
#define CERTMD5 444
#define BYTE 445
#define KILOBYTE 446
#define MEGABYTE 447
#define GIGABYTE 448
#define INODE 449
#define SPACE 450
#define TFREE 451
#define PERMISSION 452
#define SIZE 453
#define MATCH 454
#define NOT 455
#define IGNORE 456
#define ACTION 457
#define UPTIME 458
#define EXEC 459
#define UNMONITOR 460
#define PING 461
#define PING4 462
#define PING6 463
#define ICMP 464
#define ICMPECHO 465
#define NONEXIST 466
#define EXIST 467
#define INVALID 468
#define DATA 469
#define RECOVERED 470
#define PASSED 471
#define SUCCEEDED 472
#define URL 473
#define CONTENT 474
#define PID 475
#define PPID 476
#define FSFLAG 477
#define REGISTER 478
#define CREDENTIALS 479
#define URLOBJECT 480
#define TARGET 481
#define TIMESPEC 482
#define HTTPHEADER 483
#define MAXFORWARD 484
#define FIPS 485
#define GREATER 486
#define LESS 487
#define EQUAL 488
#define NOTEQUAL 489

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 291 "src/p.y" /* yacc.c:355  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 846 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 861 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  241
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  197
/* YYNRULES -- Number of rules.  */
#define YYNRULES  616
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   489

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
       2,     2,     2,     2,     2,     2,     2,     2,   237,     2,
       2,     2,     2,     2,   238,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   239,     2,   240,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   235,     2,   236,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   338,   338,   339,   342,   343,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   371,
     372,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     396,   397,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   419,
     420,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   440,   441,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   460,   461,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   477,   478,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     496,   497,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   511,   512,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   531,   532,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   546,   550,
     553,   559,   569,   570,   573,   580,   585,   590,   598,   601,
     606,   609,   613,   619,   624,   629,   637,   640,   641,   644,
     651,   652,   655,   658,   663,   664,   669,   676,   685,   686,
     689,   703,   716,   717,   720,   723,   726,   729,   734,   738,
     744,   745,   748,   749,   750,   751,   754,   755,   758,   759,
     762,   765,   778,   779,   782,   783,   784,   787,   788,   791,
     792,   795,   798,   803,   804,   807,   808,   811,   816,   821,
     828,   833,   836,   844,   848,   852,   856,   860,   860,   867,
     867,   874,   874,   881,   881,   888,   895,   896,   899,   905,
     906,   909,   912,   915,   922,   931,   936,   939,   944,   949,
     954,   962,   968,   980,   985,   992,  1001,  1004,  1009,  1012,
    1018,  1021,  1026,  1027,  1030,  1031,  1034,  1037,  1042,  1046,
    1050,  1053,  1058,  1061,  1066,  1071,  1074,  1079,  1088,  1097,
    1105,  1113,  1121,  1129,  1139,  1142,  1147,  1152,  1158,  1161,
    1164,  1169,  1172,  1175,  1181,  1186,  1187,  1190,  1193,  1198,
    1203,  1204,  1205,  1206,  1213,  1220,  1223,  1226,  1229,  1232,
    1235,  1238,  1241,  1244,  1250,  1253,  1259,  1262,  1265,  1268,
    1271,  1274,  1277,  1280,  1284,  1287,  1290,  1296,  1299,  1302,
    1308,  1311,  1314,  1317,  1320,  1323,  1326,  1329,  1332,  1335,
    1338,  1341,  1346,  1347,  1350,  1353,  1358,  1359,  1362,  1365,
    1368,  1371,  1376,  1377,  1380,  1388,  1393,  1396,  1401,  1406,
    1407,  1410,  1413,  1418,  1419,  1422,  1423,  1424,  1425,  1426,
    1429,  1435,  1441,  1446,  1452,  1453,  1458,  1463,  1464,  1467,
    1472,  1473,  1476,  1480,  1484,  1488,  1492,  1496,  1500,  1504,
    1508,  1512,  1518,  1525,  1531,  1537,  1544,  1547,  1552,  1555,
    1560,  1563,  1568,  1571,  1576,  1579,  1584,  1590,  1598,  1599,
    1605,  1606,  1609,  1613,  1616,  1620,  1625,  1628,  1631,  1632,
    1635,  1636,  1637,  1638,  1639,  1640,  1641,  1642,  1643,  1644,
    1645,  1646,  1647,  1648,  1649,  1650,  1651,  1652,  1653,  1654,
    1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,  1666,
    1667,  1670,  1671,  1674,  1675,  1676,  1677,  1680,  1684,  1688,
    1694,  1697,  1700,  1706,  1713,  1716,  1717,  1720,  1723,  1730,
    1739,  1745,  1746,  1749,  1750,  1751,  1752,  1755,  1761,  1762,
    1765,  1766,  1767,  1768,  1771,  1776,  1783,  1790,  1791,  1792,
    1793,  1796,  1801,  1806,  1811,  1818,  1823,  1830,  1837,  1844,
    1845,  1846,  1849,  1850,  1853,  1859,  1866,  1867,  1868,  1869,
    1870,  1871,  1874,  1875,  1876,  1877,  1878,  1879,  1882,  1883,
    1884,  1886,  1887,  1889,  1890,  1891,  1892,  1893,  1894,  1895,
    1898,  1907,  1916,  1917,  1923,  1933,  1934,  1940,  1950,  1953,
    1956,  1959,  1964,  1968,  1975,  1981,  1982,  1983,  1986,  1993,
    2000,  2007,  2016,  2025,  2032,  2041,  2050,  2056,  2057,  2058,
    2059,  2060,  2063,  2068,  2075,  2082,  2088,  2095,  2103,  2106,
    2112,  2118,  2125,  2131,  2138,  2144,  2151,  2157,  2164,  2170,
    2175,  2183,  2191,  2199,  2207,  2215,  2223,  2233,  2241,  2249,
    2257,  2265,  2273,  2283,  2286,  2287,  2288
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
  "BYTEIN", "BYTEOUT", "PACKETIN", "PACKETOUT", "SPEED", "SATURATION",
  "UPLOAD", "DOWNLOAD", "TOTAL", "IDFILE", "STATEFILE", "SEND", "EXPECT",
  "EXPECTBUFFER", "CYCLE", "COUNT", "REMINDER", "PIDFILE", "START", "STOP",
  "PATHTOK", "HOST", "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE", "UDP",
  "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT",
  "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY", "RESTART",
  "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS",
  "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "POPS", "IMAP", "IMAPS",
  "CLAMAV", "NNTP", "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP",
  "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY",
  "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS", "MONGODB", "SIEVE",
  "STRING", "PATH", "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT",
  "MAILBODY", "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "CHILDREN",
  "STATUS", "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY", "TOTALMEMORY",
  "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE",
  "MANUAL", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP",
  "REQUEST", "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET",
  "HOSTHEADER", "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME",
  "PASSWORD", "TIMESTAMP", "CHANGED", "SECOND", "MINUTE", "HOUR", "DAY",
  "MONTH", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12",
  "CERTMD5", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE",
  "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE", "ACTION",
  "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6", "ICMP",
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
  "mmonitoptlist", "mmonitopt", "credentials", "setmailservers",
  "setmailformat", "mailserverlist", "mailserver", "mailserveroptlist",
  "mailserveropt", "sethttpd", "httpdnetlist", "httpdnetoption",
  "httpdunixlist", "httpdunixoption", "ssl", "optssllist", "optssl",
  "sslenable", "ssldisable", "signature", "sigenable", "sigdisable",
  "bindaddress", "pemfile", "clientpemfile", "allowselfcert", "allow",
  "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checknet", "checksystem", "checkfifo", "checkprogram", "start", "stop",
  "restart", "argumentlist", "useroptionlist", "argument", "useroption",
  "username", "password", "hostname", "connection", "connectionunix",
  "icmp", "host", "port", "unixsocket", "ip", "type", "typeoptlist",
  "typeopt", "certmd5", "sslversion", "protocol", "sendexpectlist",
  "sendexpect", "websocketlist", "websocket", "mysqllist", "mysql",
  "target", "maxforward", "siplist", "sip", "httplist", "http", "status",
  "request", "responsesum", "hostheader", "httpheaderlist", "secret",
  "radiuslist", "radius", "apache_stat_list", "apache_stat", "exist",
  "pid", "ppid", "uptime", "icmpcount", "exectimeout", "programtimeout",
  "nettimeout", "retry", "actionrate", "urloption", "urloperator", "alert",
  "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "group", "depend", "dependlist", "dependant", "statusvalue",
  "resourceprocess", "resourceprocesslist", "resourceprocessopt",
  "resourcesystem", "resourcesystemlist", "resourcesystemopt",
  "resourcecpuproc", "resourcecpu", "resourcecpuid", "resourcemem",
  "resourceswap", "resourcechild", "resourceload", "resourceloadavg",
  "value", "timestamp", "operator", "time", "totaltime", "currenttime",
  "action", "action1", "action2", "rate1", "rate2", "recovery", "checksum",
  "hashtype", "inode", "space", "fsflag", "unit", "permission", "match",
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
     485,   486,   487,   488,   489,   123,   125,    58,    64,    91,
      93
};
# endif

#define YYPACT_NINF -800

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-800)))

#define YYTABLE_NINF -254

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,    75,   -45,    -6,    11,    27,    67,    99,   128,   135,
     141,    91,   242,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,   404,  -800,  -800,  -800,  -800,    45,    73,    57,
     -22,  -800,   109,   195,   157,   227,   237,    65,   329,   183,
    -800,   -46,    79,   342,   371,   378,   420,  -800,   392,   427,
      48,  -800,  -800,   430,   149,   448,   523,    18,   520,   520,
     389,   520,   -82,   256,   432,   372,   381,   404,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,   -26,  -800,  -800,  -800,
    -800,  -800,   577,   581,   523,   593,   496,  -800,   452,   454,
     -40,  -800,   396,   401,  -800,  -800,   386,  -800,  -800,   618,
     406,   402,   457,   183,   309,   326,   328,  1179,   519,   462,
     470,   524,   559,   472,   479,   498,   499,   520,   508,   512,
     170,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,    19,   424,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,    49,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,    36,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,    89,   548,  -800,  -800,   278,  -800,
     278,  -800,   278,   579,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   381,  -800,  -800,   415,  1179,   519,   233,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,   692,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   250,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   531,
     631,  -800,   538,   533,   547,  -800,   625,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   252,  -800,
     517,  -800,  -800,   309,   461,  -800,   618,  1179,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,    66,  -800,   572,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   283,  -800,  -800,   122,   169,   169,   169,  -800,  -800,
    -800,   169,   169,   338,   483,   169,   617,  -800,  -800,  -800,
    -800,  -800,   169,    85,   169,    31,   169,   483,   513,  -800,
     525,   163,  -132,   429,   494,   -25,   599,   689,   689,   689,
     680,   516,   687,   629,   634,    63,   205,   -21,  -800,  -800,
    -800,   -21,  -800,   -21,  -800,  -800,  -800,  1179,   902,  -800,
     724,   169,   169,   169,   648,   726,   169,  -800,  -800,  -800,
    -800,   725,  -800,  -800,   169,  -800,  -800,  -800,   169,   668,
    -800,   640,  -800,   311,   703,  -800,  -800,  -800,  -800,  -800,
    -800,   713,  -800,  -800,  -800,  -800,  -800,   612,   715,  -800,
     678,    29,  -800,  -800,   707,   633,  -800,  -800,   271,   984,
     760,  -800,   785,   714,   168,  -800,   723,   235,   315,   325,
     786,  -800,  -800,  -800,  -800,  -800,   727,   -37,    47,   728,
     730,   734,   734,   734,   737,     3,  -800,   850,   103,  -800,
    -800,   738,   788,   739,   734,   734,   734,   790,   740,   588,
     604,   734,   169,   746,   169,   202,  -800,   748,   457,   457,
     457,   658,   689,   650,   763,   688,   823,   719,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  1097,   760,   734,   780,
     782,   784,   169,   169,   734,   287,  -800,   900,   794,   797,
     734,  -800,   533,  -800,  -800,  -800,  -800,  -800,  -800,    13,
     807,    46,    50,   736,   756,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,   849,   852,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,   760,   519,  -800,   744,  -800,  -800,
     734,   734,   734,   734,   734,   734,   543,   346,  -800,   803,
    -800,   386,   805,   386,   806,   812,   929,   936,   937,   590,
    -800,   896,    44,  -800,  -800,   734,     8,   590,   939,   940,
     941,   734,   386,   734,   734,  -800,  -800,   942,   829,   669,
     295,   830,   386,  -800,   734,   734,   734,  -800,   457,   560,
     457,  -800,  -800,  -800,   786,   944,  -800,   760,   519,   946,
     832,   138,   151,   834,   835,   950,   836,   386,    44,   845,
     734,   963,   858,   860,   866,   742,   870,   875,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,   510,   510,   519,
    -800,  -800,   971,   981,   982,   983,   989,   990,  -800,  -800,
    -800,   879,   886,  1326,   457,   751,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,    44,    44,    44,  -800,  -800,  -800,  -800,
    -800,   734,  -800,  -800,  -800,  -800,  -800,   520,  -800,  -800,
     993,   994,   888,  1000,   734,    44,    44,    44,  1002,   734,
    1004,  1005,    44,   681,   734,  1006,   880,   386,   734,   734,
    1007,  1008,  1009,   734,  -800,  -800,   906,   953,   346,    61,
     519,  -800,    44,   734,   848,   848,   848,   848,   165,   171,
      44,  -800,  -800,   993,  -800,  1023,    44,   924,   925,   926,
     928,   930,  1024,   897,   935,  -800,  -800,  -800,  -800,  -800,
    -800,    44,    44,    44,    44,    44,    44,   633,  -800,  -800,
    -800,  -800,  -800,   765,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,    -9,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,   953,  -800,  -800,  -800,   993,  1044,
     261,  1052,  -800,    44,   734,    44,  1051,  -800,   993,  -800,
      44,  1065,    44,    44,  -800,   734,  1067,  1069,    44,   734,
     734,  1071,  1072,    44,    44,    44,  1078,  -800,   965,   734,
     650,  -800,  -800,  -800,   993,  1080,  -800,   734,   734,   734,
     734,   232,   286,   349,   390,   993,  -800,    44,  -800,   930,
     930,   930,  1024,  -800,   930,  -800,  -800,  -800,  -800,  -800,
     993,   993,   993,   993,   993,   993,  -800,  -800,  -800,     7,
       7,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,  1095,  -800,   623,   976,   992,   988,   997,    -9,  -800,
      96,   943,   734,  -800,    44,   277,   422,   993,  1098,   993,
      44,  -800,  -800,    44,  -800,  -800,  1104,    44,    44,   993,
    1107,  1109,    44,    44,   993,   993,   993,    44,  -800,  1112,
     457,  -800,    44,  1113,  1114,  1115,  1120,   493,  -800,  -800,
    -800,   734,   493,   734,   493,   734,   493,   734,  -800,   993,
     930,   930,   930,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  1017,   169,  1025,  1027,  -800,  -800,  -800,  -800,  -800,
    -800,  1020,  1021,  1022,  1026,  1028,  1029,  1030,  1031,  1032,
    1033,   765,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
     365,  1035,  -800,  -800,  -800,  1034,  -800,  -800,  1137,   993,
    1037,  1037,  1037,  -800,    44,  -800,   993,   993,    44,   993,
     993,  -800,    44,    44,   993,   993,  -800,  -800,  -800,   993,
      44,   953,   993,    44,    44,    44,    44,   734,  1138,   734,
    1141,   734,  1153,   734,  1154,  -800,  -800,  1043,  -800,  -800,
     188,  1045,  1046,  1048,  1049,  1053,  1054,  1055,  1056,  1057,
    1058,  -800,  -800,  -800,  -800,  -800,    44,  -800,    22,  1158,
    1159,  1166,   993,  -800,  -800,   993,  -800,  -800,   993,   993,
    -800,  -800,  -800,   993,   734,  -800,   993,   993,   993,   993,
    1167,    44,  1174,    44,  1175,    44,  1178,    44,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   993,  -800,  1142,    44,    44,    44,  -800,  -800,  -800,
    -800,  -800,  1180,  -800,  -800,  -800,  -800,    44,   993,    44,
     993,    44,   993,    44,   993,  -800,  -800,  -800,  -800,  -800,
    -800,    44,   993,  -800,   993,  -800,   993,  -800,   993,  -800,
     993,  -800,  -800,  -800,  -800,  -800
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
     176,   469,     0,     0,     0,     0,     0,   272,     0,     0,
       0,     1,     5,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,   102,   104,
     105,   106,   107,   108,   109,   110,   469,   435,   111,   112,
     113,   114,    28,    25,    26,    27,   178,   177,   172,   202,
     422,   198,     0,     0,   183,   184,   577,   185,   436,     0,
       0,     0,   422,   186,   194,     0,     0,     0,   614,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    41,    42,    34,    35,    36,
      40,    43,    44,    45,    46,    47,    48,    49,    37,    38,
      39,   588,   588,    51,    52,    53,    54,    55,    57,    59,
      58,    66,    67,    68,    56,    63,    60,    65,    64,    61,
      62,     0,    70,    71,    72,    73,    74,    76,    75,    80,
      81,    82,    83,    84,    85,    77,    78,    79,     0,    87,
      88,    89,    90,    91,    93,    95,    94,    99,   100,   101,
      92,    96,    97,    98,   304,     0,   286,   287,   418,   282,
     418,   437,   418,     0,   478,   479,   480,   481,   482,   483,
     487,   484,   485,   103,     0,     0,   614,     0,   116,   117,
     118,   119,   125,   127,   126,   128,   129,   120,   121,   122,
     123,   124,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   143,   144,   145,   146,   148,   150,
     149,   154,   155,   156,   147,   151,   152,   153,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,     0,
       0,   171,     0,   200,     0,   199,   295,   210,   216,   578,
     579,   580,   581,   174,   473,   474,   475,   476,     0,   471,
     180,   182,   190,   194,     0,   187,     0,     0,   453,   441,
     442,   455,   456,   463,   461,   444,   465,   443,   464,   460,
     467,   449,   451,   466,   457,   462,   440,   468,   447,   450,
     454,   452,   446,   445,   458,   459,   448,     0,   438,     0,
     168,   261,   262,   263,   264,   267,   266,   265,   268,   269,
     273,   420,   270,   271,   304,   526,   526,   526,   519,   520,
     521,   526,   526,     0,     0,   526,   552,   491,   493,   494,
     495,   496,   526,   565,   526,   565,   526,   589,     0,   589,
       0,     0,     0,   526,   526,     0,     0,   416,   416,   416,
       0,     0,     0,     0,     0,     0,     0,   418,   283,   284,
     276,   418,   278,   418,   280,   477,   486,     0,     0,   432,
       0,   526,   526,   526,     0,     0,   526,   510,   507,   508,
     509,   552,   498,   503,   526,   501,   502,   500,   526,     0,
     179,     0,   202,     0,     0,   325,   320,   321,   322,   323,
     324,     0,   203,   204,   205,   207,   206,     0,     0,   196,
     208,   209,   197,   472,     0,   189,   188,   195,     0,     0,
     469,   439,   615,     0,   420,   274,     0,     0,     0,     0,
     311,   531,   527,   528,   529,   530,     0,     0,     0,     0,
       0,   552,   552,   552,     0,     0,   492,     0,     0,   566,
     567,     0,     0,     0,   552,   552,   552,     0,     0,     0,
       0,   552,   526,     0,   526,     0,   305,     0,   422,   422,
     422,     0,   416,   428,     0,   308,     0,     0,   288,   290,
     289,   291,   285,   277,   279,   281,     0,   469,   552,     0,
       0,     0,   526,   526,   552,     0,   499,     0,     0,     0,
     552,   173,   201,   293,   292,   294,   319,   423,   296,     0,
       0,     0,     0,     0,     0,   211,   212,   222,   222,   213,
     231,   232,   214,   215,     0,     0,   217,   218,   219,   181,
     191,   193,   192,   470,   469,   614,   616,     0,   275,   307,
     552,   552,   552,   552,   552,   552,     0,   326,   517,   523,
     522,   577,   523,   577,     0,     0,     0,     0,     0,   532,
     553,     0,     0,   523,   518,   552,   552,   532,     0,     0,
       0,   552,   577,   552,   552,   587,   586,     0,     0,   552,
       0,   523,   577,   417,   552,   552,   552,   613,   422,     0,
     422,   306,   309,   310,   311,     0,   419,   469,   614,     0,
       0,   577,   577,     0,     0,     0,   523,   577,     0,     0,
     552,     0,     0,     0,     0,   255,   243,     0,   237,   228,
     234,   230,   236,   227,   229,   233,   235,   221,   220,   614,
     169,   421,     0,     0,     0,     0,     0,     0,   314,   312,
     315,     0,     0,     0,   422,   361,   362,   512,   511,   514,
     513,   504,   505,     0,     0,     0,   533,   534,   535,   536,
     537,   552,   554,   547,   548,   543,   546,     0,   549,   550,
     558,     0,     0,     0,   552,     0,     0,     0,     0,   552,
       0,     0,     0,   552,   552,     0,   523,   577,   552,   552,
       0,     0,     0,   552,   430,   431,     0,   424,   326,     0,
     614,   433,     0,   552,   541,   541,   541,   541,   577,   577,
       0,   516,   515,   558,   506,     0,     0,   244,   245,   246,
       0,     0,   259,     0,     0,   240,   223,   224,   225,   226,
     170,     0,     0,     0,     0,     0,     0,   313,   364,   365,
     328,   383,   383,     0,   331,   348,   349,   345,   346,   334,
     335,   336,   342,   343,   372,   329,     0,   350,   330,   337,
     338,   351,   353,   354,   355,   344,   379,   356,   357,   397,
     359,   352,   339,   347,   424,   363,   413,   414,   558,     0,
     544,     0,   490,     0,   552,     0,     0,   525,   558,   591,
       0,     0,     0,     0,   576,   552,     0,     0,     0,   552,
     552,     0,     0,     0,     0,     0,     0,   429,     0,   552,
     428,   427,   426,   434,   558,     0,   542,   552,   552,   552,
     552,     0,     0,     0,     0,   558,   497,     0,   489,     0,
       0,     0,   259,   258,   248,   256,   260,   242,   238,   239,
     558,   558,   558,   558,   558,   558,   316,   318,   317,   332,
     333,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   327,   400,   340,     0,     0,     0,     0,   360,   366,
     341,   358,   552,   412,     0,   545,     0,   558,     0,   558,
       0,   583,   564,     0,   585,   584,     0,     0,     0,   558,
       0,     0,     0,     0,   558,   558,   558,     0,   425,     0,
     422,   598,     0,     0,     0,     0,     0,     0,   538,   539,
     540,   552,     0,   552,     0,   552,     0,   552,   599,   558,
     250,   252,   254,   241,   257,   592,   593,   594,   595,   596,
     597,     0,   526,     0,     0,   394,   384,   387,   385,   386,
     388,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   374,   375,   373,   370,   368,   371,   369,   367,
       0,     0,   381,   382,   380,     0,   399,   398,     0,   558,
     555,   555,   555,   582,     0,   562,   558,   558,     0,   558,
     558,   568,     0,     0,   558,   558,   301,   302,   303,   558,
       0,   424,   558,     0,     0,     0,     0,   552,     0,   552,
       0,   552,     0,   552,     0,   488,   392,     0,   391,   393,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   377,   376,   378,   396,     0,   415,     0,     0,
       0,     0,   558,   524,   590,   558,   570,   569,   558,   558,
     573,   572,   300,   558,   552,   600,   558,   558,   558,   558,
       0,     0,     0,     0,     0,     0,     0,     0,   390,   395,
     389,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   558,   556,     0,     0,     0,     0,   563,   571,   575,
     574,   298,     0,   604,   601,   610,   607,     0,   558,     0,
     558,     0,   558,     0,   558,   299,   557,   551,   559,   560,
     561,     0,   558,   605,   558,   602,   558,   611,   558,   608,
     558,   606,   603,   612,   609,   297
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -800,  -800,  -800,  1172,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  1117,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  1077,  -800,  -800,   889,  -800,
    -800,  -800,  1091,   764,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   641,  -800,  -800,  -800,   749,  -800,  -800,  -800,  -800,
    -800,  -800,   750,  -800,  -800,  -800,  -800,  -193,  -781,   330,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   814,
     865,   898,   -67,  -204,  -205,  -379,   304,   305,  -800,  1146,
    -800,  -800,  -800,  -800,  -800,  -800,   584,  -800,  -800,  -442,
    -441,   473,  -800,   534,  -800,   313,  -800,  -800,  -800,  -800,
    -800,  -800,   440,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,   234,   189,  -800,  -800,  -800,  -341,  -170,
     759,  -112,  -799,   938,   374,  -800,   987,  1225,  -800,  -197,
    -301,   -77,   921,  -240,   995,   196,   999,  1003,  -800,  1010,
    -800,  -800,  -800,   862,  -800,  -800,   808,  -800,  -800,  -800,
    -223,  -800,  -800,  -219,  -800,  -221,    -7,  -345,   626,  -390,
       5,  -330,  -231,  -309,  -420,  -203,  -105,  -800,   855,  -800,
    -800,  -800,    88,   395,  -800,  1082,  -800,   377,  -800,   393,
    -800,  -800,  -800,  -800,  -800,  -800,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    63,   131,    64,   153,    65,   172,
      66,   189,    77,    78,    92,   228,    93,   243,    94,   253,
      95,   269,    14,    15,   281,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   113,   114,   455,   570,   305,    25,
      26,   100,   101,   283,   442,    27,   450,   555,   451,   566,
     556,   667,   766,   557,   558,   559,   560,   561,   562,   767,
     768,   769,   563,   761,   869,   870,   871,   874,   875,   877,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    79,
      80,    81,   208,   397,   209,   399,   443,   444,   449,    82,
     136,    83,   392,   515,   470,   634,   587,   777,   886,   445,
     446,   684,   685,   686,   908,   909,   903,   994,  1002,  1003,
     910,  1004,   889,   976,   977,   978,   979,   980,  1050,  1006,
     911,  1007,   901,   902,   137,   138,   139,   140,   508,   400,
     465,   286,   849,    84,   630,   736,    85,    86,    87,   337,
     338,   118,   298,   299,    88,    89,    90,    91,   221,   222,
     278,   147,   366,   367,   252,   421,   422,   368,   423,   424,
     369,   426,   370,   371,   372,   591,   164,   476,   701,   951,
     857,   709,   710,  1138,   487,  1069,   822,   165,   492,   182,
     183,   184,   293,   166,   167,   378,   168,   148,   149,   150,
     237,   238,   239,   240,   241,   512,   340
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     302,   537,   210,   398,   212,   398,   401,   398,   403,   226,
     409,   477,   478,   571,   572,   912,   479,   480,   522,   425,
     484,   115,   522,   427,   522,   204,   373,   488,   408,   493,
     284,   498,   652,   653,   102,   654,   461,   213,   503,   505,
     402,   115,   404,   381,   549,   904,   103,   509,   510,   394,
     600,   489,   490,   712,   564,   565,   381,    96,   453,   200,
     351,   596,   597,   598,   128,   495,   529,   530,   531,  1112,
      99,   535,    52,   659,   608,   609,   610,   661,   129,   538,
     971,   617,   589,   539,    37,   522,    38,   264,    39,    40,
     501,    61,    41,   964,   590,   703,   704,   308,   554,   309,
     310,   311,   312,   313,   314,   489,   490,   461,   639,   705,
     459,    53,   703,   704,   645,   660,   706,    42,    43,   662,
     651,    44,   601,   655,   656,    45,   705,   485,    54,   119,
     315,   851,   120,   706,   905,   906,   316,   205,   205,   317,
      46,  1113,    47,   386,    55,   214,   398,   464,   395,   972,
     396,   494,   151,   907,   116,   205,    97,   618,   461,   620,
     672,   673,   674,   675,   676,   677,   592,    99,   205,   973,
     744,   628,   495,   518,   224,   974,   386,   354,   590,   964,
     964,   964,   519,   746,    56,   711,   713,   643,   644,   117,
     466,   718,    98,   720,   721,   374,   375,   861,   425,   725,
      68,    69,   427,   863,   730,   731,   732,   494,   318,   225,
     526,   319,   374,   385,    46,    70,    57,   376,   453,   377,
     104,    71,   603,    72,    73,   461,   382,   523,   495,   496,
     755,   524,  1084,   525,   590,   320,   364,   321,   463,   322,
     410,    48,   323,   383,   384,    58,   975,    49,   707,   708,
       1,   657,    59,   157,   467,   193,   469,   593,    60,   144,
     161,   179,   197,   324,   325,   707,   708,   604,   326,   327,
     328,   411,   412,   413,   414,   329,   106,   330,   121,   331,
     332,   819,   491,   257,   622,   333,   334,   335,   336,   205,
     261,   467,   468,   469,   826,   387,   388,   389,   390,   831,
     109,    74,   460,   836,   837,    50,   105,   391,   841,   842,
      75,   355,    76,   846,   647,   520,   356,   357,   358,   359,
     360,   621,  1000,   855,   521,  1001,   361,   362,   289,   290,
     291,   292,   467,   590,   469,   887,   888,   395,   107,   396,
     391,   289,   290,   291,   292,   580,   471,   363,   394,   108,
     152,   947,   205,   463,   581,   289,   290,   291,   292,   670,
     491,   289,   290,   291,   292,   294,   295,   296,   297,   205,
     364,   206,   207,   365,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   575,   294,   295,   296,   297,   206,   207,
     681,   682,   428,   206,   207,   122,   624,   625,   626,   727,
     472,   473,   474,   475,   918,   952,   646,    67,   112,   683,
     415,   948,   949,   950,   726,   926,  1099,   753,   590,   930,
     931,   543,   741,   544,   123,   582,   590,   429,  1100,   939,
     395,   124,   396,   130,   583,   584,   125,   943,   944,   945,
     946,   169,   186,   202,   585,   126,   395,   395,   396,   396,
     638,   171,   395,   770,   396,    68,    69,   170,   187,   203,
     185,   201,   816,   817,   818,   948,   949,   950,   954,    46,
      70,   266,   953,   955,   957,  1062,    71,  1063,    72,    73,
     127,    68,    69,   215,   827,   828,   829,   267,   452,   265,
     219,   834,  1008,   110,   111,    46,    70,   669,   220,    68,
      69,   211,    71,   280,    72,    73,   279,   573,   852,   956,
     282,   854,   288,    46,    70,   287,   733,   300,   737,   865,
      71,   301,    72,    73,   853,   868,   188,   284,   948,   949,
     950,  1038,   304,  1040,   763,  1042,   522,  1044,   764,   765,
     880,   881,   882,   883,   884,   885,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,    74,  1037,   481,   482,
     740,   306,  1039,   307,  1041,    75,  1043,    76,   339,   948,
     949,   950,   814,   341,    68,    69,   289,   290,   291,   292,
     227,   342,    74,   347,   242,   216,   217,   218,    46,    70,
     348,    75,   917,    76,   919,    71,   268,    72,    73,   922,
      74,   924,   925,   678,   679,   680,   471,   929,   349,    75,
     350,    76,   934,   935,   936,   398,   915,  1090,   352,  1092,
     393,  1094,   353,  1096,   379,   502,   405,  1047,    68,    69,
     206,   207,    68,    69,   343,   344,   959,  1010,  1011,  1012,
     820,   430,    46,    70,    68,    69,    46,    70,   866,    71,
     407,    72,    73,    71,   431,    72,    73,   432,    46,    70,
     472,   473,   474,   475,  1122,    71,   447,    72,    73,   345,
     346,   471,   948,   949,   950,    74,   960,   961,   962,   688,
     448,   690,   454,  1009,    75,   457,    76,   532,   533,  1016,
     504,   462,  1017,   549,   550,   483,  1019,  1020,   613,   614,
     719,  1024,  1025,   551,   552,   553,  1029,   433,   434,   506,
     729,  1032,   499,   913,   615,   616,   435,   436,   437,   438,
     439,   440,   441,   921,   500,   472,   473,   474,   475,   745,
     747,   294,   295,   296,   297,   752,   485,   507,    75,   511,
      76,   513,    75,   514,    76,   632,   633,   554,   516,   941,
     858,   859,   860,   517,    75,   528,    76,   534,   355,   541,
     958,   663,   664,   356,   357,   358,   359,   360,   696,   697,
     698,   699,   700,   361,   362,   965,   966,   967,   968,   969,
     970,   665,   666,  1072,  1137,  1137,  1137,  1075,   485,   724,
     547,  1078,  1079,   734,   735,   681,   682,   433,   434,  1083,
     485,   835,  1086,  1087,  1088,  1089,  1139,  1140,  1070,  1071,
     540,   205,  1013,   545,  1015,   840,   435,   436,   437,   438,
     439,   440,   441,   546,  1021,   548,   569,   115,  1031,  1026,
    1027,  1028,   576,   577,   579,  1111,   862,   864,   356,   357,
     358,   359,   360,   416,   485,   586,   588,   594,   417,   595,
     418,   419,   420,   485,  1045,   602,   599,   605,   607,   612,
    1128,   606,  1130,   611,  1132,   619,  1134,   623,   627,   629,
     635,   356,   357,   358,   359,   360,   416,   132,   154,   173,
     190,   417,   631,   418,   419,   420,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,  1142,   636,  1144,   640,
    1146,   641,  1148,   642,  1067,   648,   229,   244,   254,   270,
    1150,  1073,  1074,   649,  1076,  1077,   650,   658,   660,  1080,
    1081,   662,   671,   687,  1082,   689,   691,  1085,   133,   155,
     174,   191,   692,   308,   693,   309,   310,   311,   312,   313,
     314,   694,   695,   702,   715,   716,   717,   722,   723,   739,
     728,   742,   743,   748,   749,   750,   751,   230,   245,   255,
     271,   134,   156,   175,   192,   754,   315,  1117,   756,   757,
    1118,   758,   316,  1119,  1120,   317,   771,   759,  1121,   760,
    -247,  1123,  1124,  1125,  1126,   762,   772,   773,   774,   778,
     231,   246,   256,   272,   775,   776,   779,   821,   824,   823,
     839,   141,   158,   176,   194,   825,  1135,   830,   878,   832,
     833,   838,   843,   844,   845,   308,   847,   309,   310,   311,
     312,   313,   314,  1143,   848,  1145,   856,  1147,   867,  1149,
     232,   247,   258,   273,  -249,  -251,  -253,  1151,   872,  1152,
     873,  1153,   876,  1154,   318,  1155,   879,   319,   315,   914,
     142,   159,   177,   195,   316,   916,   920,   317,   143,   160,
     178,   196,   145,   162,   180,   198,   146,   163,   181,   199,
     923,   320,   927,   321,   928,   322,   932,   933,   323,   233,
     248,   259,   274,   937,   938,   942,   995,   234,   249,   260,
     275,   235,   250,   262,   276,   236,   251,   263,   277,   324,
     325,   991,   996,  1014,   326,   327,   328,   997,   998,  1018,
    1005,   329,  1022,   330,  1023,   331,   332,  1030,  1033,  1034,
    1035,   333,   334,   335,   336,  1036,   318,  1046,   308,   319,
     309,   310,   311,   312,   313,   314,  1048,  1049,   527,  1051,
    1052,  1053,  1066,  1091,  1065,  1054,  1093,  1055,  1056,  1057,
    1058,  1059,  1060,   320,  1064,   321,  1068,   322,  1095,  1097,
     323,   315,  1098,  1114,  1115,  1101,  1102,   316,  1103,  1104,
     317,  1116,  1127,  1105,  1106,  1107,  1108,  1109,  1110,  1129,
    1131,   324,   325,  1133,    62,  1141,   326,   327,   328,  1136,
     303,   285,   456,   329,   223,   330,   542,   331,   332,   668,
     567,   568,   963,   333,   334,   335,   336,   992,   993,   135,
     308,   850,   309,   310,   311,   312,   313,   314,   738,   815,
     574,   999,   890,   578,   940,  1061,    51,   458,   486,   536,
     497,   406,     0,   714,   380,     0,     0,     0,     0,   318,
       0,     0,   319,   315,     0,     0,     0,     0,     0,   316,
       0,     0,   317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   320,     0,   321,     0,
     322,     0,     0,   323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,   325,     0,     0,     0,   326,
     327,   328,     0,     0,     0,     0,   329,     0,   330,     0,
     331,   332,     0,     0,     0,     0,   333,   334,   335,   336,
       0,   318,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,     0,   637,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,     0,
     321,     0,   322,     0,     0,   323,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   324,   325,     0,     0,
       0,   326,   327,   328,     0,     0,     0,     0,   329,     0,
     330,     0,   331,   332,     0,     0,     0,     0,   333,   334,
     335,   336,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813
};

static const yytype_int16 yycheck[] =
{
     112,   421,    69,   208,    71,   210,   210,   212,   212,    86,
     226,   356,   357,   455,   455,   814,   361,   362,   397,   242,
     365,    67,   401,   242,   403,     7,     7,   372,   225,   374,
      70,   376,    19,    20,    56,    22,   337,   119,   383,   384,
     210,    67,   212,     7,    15,    54,    68,   388,   389,    70,
      47,    20,    21,    45,    25,    26,     7,    12,   298,    66,
     127,   481,   482,   483,    16,   197,   411,   412,   413,    47,
     110,   416,   117,    27,   494,   495,   496,    27,    30,   424,
      73,   501,   119,   428,     9,   464,    11,    94,    13,    14,
     222,     0,    17,   874,   131,    51,    52,    31,    69,    33,
      34,    35,    36,    37,    38,    20,    21,   408,   528,    65,
     307,   117,    51,    52,   534,    69,    72,    42,    43,    69,
     540,    46,   119,   110,   111,    50,    65,   119,   117,    50,
      64,    70,    53,    72,   143,   144,    70,   119,   119,    73,
      65,   119,    67,    54,   117,   227,   351,   351,   169,   142,
     171,   176,     3,   162,   200,   119,   111,   502,   459,   504,
     580,   581,   582,   583,   584,   585,   119,   110,   119,   162,
      32,   512,   197,   110,   200,   168,    54,     7,   131,   960,
     961,   962,   119,    32,   117,   605,   606,   532,   533,   235,
      68,   611,   119,   613,   614,   176,   177,    32,   421,   619,
      51,    52,   421,    32,   624,   625,   626,   176,   142,   235,
     407,   145,   176,   177,    65,    66,   117,   198,   458,   200,
     111,    72,   119,    74,    75,   526,   177,   397,   197,   198,
     650,   401,  1031,   403,   131,   169,   200,   171,    70,   173,
       7,   166,   176,   194,   195,   117,   239,   172,   204,   205,
       8,   238,   117,    64,   169,    66,   171,   478,   117,    63,
      64,    65,    66,   197,   198,   204,   205,   488,   202,   203,
     204,    38,    39,    40,    41,   209,   119,   211,   199,   213,
     214,   701,   197,    94,   505,   219,   220,   221,   222,   119,
      94,   169,   170,   171,   714,   206,   207,   208,   209,   719,
     235,   152,   236,   723,   724,   230,   111,   218,   728,   729,
     161,   141,   163,   733,   535,   110,   146,   147,   148,   149,
     150,   119,   226,   743,   119,   229,   156,   157,   190,   191,
     192,   193,   169,   131,   171,   777,   777,   169,   111,   171,
     218,   190,   191,   192,   193,   110,   177,   177,    70,   112,
     201,   119,   119,    70,   119,   190,   191,   192,   193,   575,
     197,   190,   191,   192,   193,   113,   114,   115,   116,   119,
     200,   110,   111,   203,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   460,   113,   114,   115,   116,   110,   111,
      44,    45,   142,   110,   111,    53,   508,   509,   510,   620,
     231,   232,   233,   234,   824,   119,   119,     3,   225,    63,
     177,   179,   180,   181,   119,   835,   228,   648,   131,   839,
     840,   110,   638,   112,    53,   110,   131,   177,   240,   849,
     169,    53,   171,     3,   119,   110,    16,   857,   858,   859,
     860,    64,    65,    66,   119,    53,   169,   169,   171,   171,
     527,     3,   169,   669,   171,    51,    52,    64,    65,    66,
      65,    66,   693,   694,   695,   179,   180,   181,   119,    65,
      66,    94,   862,   863,   864,   110,    72,   112,    74,    75,
      53,    51,    52,   227,   715,   716,   717,    94,   236,    94,
     118,   722,   912,   164,   165,    65,    66,   574,   117,    51,
      52,   112,    72,    51,    74,    75,    10,   236,   739,   119,
      56,   742,   111,    65,    66,   119,   628,   111,   630,   750,
      72,   119,    74,    75,   740,   756,     3,    70,   179,   180,
     181,   951,   223,   953,    24,   955,   915,   957,    28,    29,
     771,   772,   773,   774,   775,   776,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   152,   947,   220,   221,
     637,   235,   952,   235,   954,   161,   956,   163,    49,   179,
     180,   181,   684,   111,    51,    52,   190,   191,   192,   193,
       3,   111,   152,   111,     3,   153,   154,   155,    65,    66,
     111,   161,   823,   163,   825,    72,     3,    74,    75,   830,
     152,   832,   833,    60,    61,    62,   177,   838,   110,   161,
     111,   163,   843,   844,   845,   820,   820,  1037,   110,  1039,
      72,  1041,   110,  1043,   200,   196,    47,   972,    51,    52,
     110,   111,    51,    52,   110,   111,   867,   215,   216,   217,
     707,   110,    65,    66,    51,    52,    65,    66,   753,    72,
     235,    74,    75,    72,    23,    74,    75,   119,    65,    66,
     231,   232,   233,   234,  1084,    72,   119,    74,    75,   110,
     111,   177,   179,   180,   181,   152,   869,   870,   871,   591,
      55,   593,   165,   914,   161,   224,   163,    39,    40,   920,
     196,   119,   923,    15,    16,   212,   927,   928,   110,   111,
     612,   932,   933,    25,    26,    27,   937,   174,   175,   110,
     622,   942,   199,   818,   110,   111,   183,   184,   185,   186,
     187,   188,   189,   828,   199,   231,   232,   233,   234,   641,
     642,   113,   114,   115,   116,   647,   119,    48,   161,    59,
     163,   225,   161,    56,   163,    57,    58,    69,   119,   854,
     745,   746,   747,   119,   161,    31,   163,    31,   141,   119,
     865,    25,    26,   146,   147,   148,   149,   150,   178,   179,
     180,   181,   182,   156,   157,   880,   881,   882,   883,   884,
     885,    25,    26,  1014,  1114,  1115,  1116,  1018,   119,   120,
     178,  1022,  1023,   233,   234,    44,    45,   174,   175,  1030,
     119,   120,  1033,  1034,  1035,  1036,  1115,  1116,  1011,  1012,
     142,   119,   917,   110,   919,   727,   183,   184,   185,   186,
     187,   188,   189,   110,   929,   110,   119,    67,   940,   934,
     935,   936,    47,   119,   111,  1066,   748,   749,   146,   147,
     148,   149,   150,   151,   119,    59,   119,   119,   156,   119,
     158,   159,   160,   119,   959,     5,   119,   119,   119,   119,
    1091,    73,  1093,    73,  1095,   119,  1097,   119,   210,   219,
      47,   146,   147,   148,   149,   150,   151,    63,    64,    65,
      66,   156,   119,   158,   159,   160,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,  1127,   178,  1129,   119,
    1131,   119,  1133,   119,  1009,     5,    92,    93,    94,    95,
    1141,  1016,  1017,   119,  1019,  1020,   119,   110,    69,  1024,
    1025,    69,   178,   120,  1029,   120,   120,  1032,    63,    64,
      65,    66,   120,    31,     5,    33,    34,    35,    36,    37,
      38,     5,     5,    47,     5,     5,     5,     5,   119,     5,
     120,     5,   120,   119,   119,     5,   120,    92,    93,    94,
      95,    63,    64,    65,    66,   120,    64,  1072,     5,   111,
    1075,   111,    70,  1078,  1079,    73,     5,   111,  1083,   237,
     110,  1086,  1087,  1088,  1089,   110,     5,     5,     5,   110,
      92,    93,    94,    95,     5,     5,   110,     4,   110,     5,
     120,    63,    64,    65,    66,     5,  1111,     5,   111,     5,
       5,     5,     5,     5,     5,    31,   110,    33,    34,    35,
      36,    37,    38,  1128,    71,  1130,   178,  1132,     5,  1134,
      92,    93,    94,    95,   110,   110,   110,  1142,   110,  1144,
     110,  1146,    18,  1148,   142,  1150,   111,   145,    64,     5,
      63,    64,    65,    66,    70,     3,     5,    73,    63,    64,
      65,    66,    63,    64,    65,    66,    63,    64,    65,    66,
       5,   169,     5,   171,     5,   173,     5,     5,   176,    92,
      93,    94,    95,     5,   119,     5,   110,    92,    93,    94,
      95,    92,    93,    94,    95,    92,    93,    94,    95,   197,
     198,     6,   110,     5,   202,   203,   204,   119,   111,     5,
     167,   209,     5,   211,     5,   213,   214,     5,     5,     5,
       5,   219,   220,   221,   222,     5,   142,   110,    31,   145,
      33,    34,    35,    36,    37,    38,   111,   110,   236,   119,
     119,   119,     5,     5,   110,   119,     5,   119,   119,   119,
     119,   119,   119,   169,   119,   171,   119,   173,     5,     5,
     176,    64,   119,     5,     5,   120,   120,    70,   120,   120,
      73,     5,     5,   120,   120,   120,   120,   120,   120,     5,
       5,   197,   198,     5,    12,     5,   202,   203,   204,    47,
     113,   100,   303,   209,    77,   211,   432,   213,   214,   558,
     451,   451,   872,   219,   220,   221,   222,   903,   903,    63,
      31,   738,    33,    34,    35,    36,    37,    38,   634,   685,
     236,   908,   782,   464,   850,   991,     1,   306,   366,   421,
     375,   221,    -1,   607,   152,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   145,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,   202,
     203,   204,    -1,    -1,    -1,    -1,   209,    -1,   211,    -1,
     213,   214,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,   142,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   198,    -1,    -1,
      -1,   202,   203,   204,    -1,    -1,    -1,    -1,   209,    -1,
     211,    -1,   213,   214,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   242,   243,   244,   263,   264,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   280,   281,   286,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     9,    11,    13,
      14,    17,    42,    43,    46,    50,    65,    67,   166,   172,
     230,   378,   117,   117,   117,   117,   117,   117,   117,   117,
     117,     0,   244,   245,   247,   249,   251,     3,    51,    52,
      66,    72,    74,    75,   152,   161,   163,   253,   254,   320,
     321,   322,   330,   332,   374,   377,   378,   379,   385,   386,
     387,   388,   255,   257,   259,   261,    12,   111,   119,   110,
     282,   283,    56,    68,   111,   111,   119,   111,   112,   235,
     164,   165,   225,   275,   276,    67,   200,   235,   382,    50,
      53,   199,    53,    53,    53,    16,    53,    53,    16,    30,
       3,   246,   320,   321,   322,   330,   331,   365,   366,   367,
     368,   374,   377,   385,   386,   387,   388,   392,   428,   429,
     430,     3,   201,   248,   320,   321,   322,   365,   374,   377,
     385,   386,   387,   388,   407,   418,   424,   425,   427,   428,
     430,     3,   250,   320,   321,   322,   374,   377,   385,   386,
     387,   388,   420,   421,   422,   424,   428,   430,     3,   252,
     320,   321,   322,   365,   374,   377,   385,   386,   387,   388,
     407,   424,   428,   430,     7,   119,   110,   111,   323,   325,
     323,   112,   323,   119,   227,   227,   153,   154,   155,   118,
     117,   389,   390,   254,   200,   235,   382,     3,   256,   320,
     321,   322,   374,   377,   385,   387,   388,   431,   432,   433,
     434,   435,     3,   258,   320,   321,   322,   374,   377,   385,
     387,   388,   395,   260,   320,   321,   322,   365,   374,   377,
     385,   386,   387,   388,   407,   424,   428,   430,     3,   262,
     320,   321,   322,   374,   377,   385,   387,   388,   391,    10,
      51,   265,    56,   284,    70,   283,   372,   119,   111,   190,
     191,   192,   193,   423,   113,   114,   115,   116,   383,   384,
     111,   119,   372,   276,   223,   279,   235,   235,    31,    33,
      34,    35,    36,    37,    38,    64,    70,    73,   142,   145,
     169,   171,   173,   176,   197,   198,   202,   203,   204,   209,
     211,   213,   214,   219,   220,   221,   222,   380,   381,    49,
     437,   111,   111,   110,   111,   110,   111,   111,   111,   110,
     111,   323,   110,   110,     7,   141,   146,   147,   148,   149,
     150,   156,   157,   177,   200,   203,   393,   394,   398,   401,
     403,   404,   405,     7,   176,   177,   198,   200,   426,   200,
     426,     7,   177,   194,   195,   177,    54,   206,   207,   208,
     209,   218,   333,    72,    70,   169,   171,   324,   325,   326,
     370,   324,   370,   324,   370,    47,   390,   235,   380,   437,
       7,    38,    39,    40,    41,   177,   151,   156,   158,   159,
     160,   396,   397,   399,   400,   401,   402,   404,   142,   177,
     110,    23,   119,   174,   175,   183,   184,   185,   186,   187,
     188,   189,   285,   327,   328,   340,   341,   119,    55,   329,
     287,   289,   236,   384,   165,   277,   279,   224,   383,   380,
     236,   381,   119,    70,   324,   371,    68,   169,   170,   171,
     335,   177,   231,   232,   233,   234,   408,   408,   408,   408,
     408,   220,   221,   212,   408,   119,   394,   415,   408,    20,
      21,   197,   419,   408,   176,   197,   198,   419,   408,   199,
     199,   222,   196,   408,   196,   408,   110,    48,   369,   369,
     369,    59,   436,   225,    56,   334,   119,   119,   110,   119,
     110,   119,   326,   370,   370,   370,   380,   236,    31,   408,
     408,   408,    39,    40,    31,   408,   397,   415,   408,   408,
     142,   119,   284,   110,   112,   110,   110,   178,   110,    15,
      16,    25,    26,    27,    69,   288,   291,   294,   295,   296,
     297,   298,   299,   303,    25,    26,   290,   296,   303,   119,
     278,   340,   341,   236,   236,   382,    47,   119,   371,   111,
     110,   119,   110,   119,   110,   119,    59,   337,   119,   119,
     131,   406,   119,   406,   119,   119,   415,   415,   415,   119,
      47,   119,     5,   119,   406,   119,    73,   119,   415,   415,
     415,    73,   119,   110,   111,   110,   111,   415,   408,   119,
     408,   119,   406,   119,   372,   372,   372,   210,   369,   219,
     375,   119,    57,    58,   336,    47,   178,   236,   382,   415,
     119,   119,   119,   408,   408,   415,   119,   406,     5,   119,
     119,   415,    19,    20,    22,   110,   111,   238,   110,    27,
      69,    27,    69,    25,    26,    25,    26,   292,   292,   382,
     437,   178,   415,   415,   415,   415,   415,   415,    60,    61,
      62,    44,    45,    63,   342,   343,   344,   120,   423,   120,
     423,   120,   120,     5,     5,     5,   178,   179,   180,   181,
     182,   409,    47,    51,    52,    65,    72,   204,   205,   412,
     413,   415,    45,   415,   409,     5,     5,     5,   415,   423,
     415,   415,     5,   119,   120,   415,   119,   406,   120,   423,
     415,   415,   415,   372,   233,   234,   376,   372,   337,     5,
     382,   437,     5,   120,    32,   423,    32,   423,   119,   119,
       5,   120,   423,   413,   120,   415,     5,   111,   111,   111,
     237,   304,   110,    24,    28,    29,   293,   300,   301,   302,
     437,     5,     5,     5,     5,     5,     5,   338,   110,   110,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   372,   344,   413,   413,   413,   415,
     323,     4,   417,     5,   110,     5,   415,   413,   413,   413,
       5,   415,     5,     5,   413,   120,   415,   415,     5,   120,
     423,   415,   415,     5,     5,     5,   415,   110,    71,   373,
     342,    70,   413,   437,   413,   415,   178,   411,   411,   411,
     411,    32,   423,    32,   423,   413,   417,     5,   413,   305,
     306,   307,   110,   110,   308,   309,    18,   310,   111,   111,
     413,   413,   413,   413,   413,   413,   339,   340,   341,   353,
     353,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   363,   364,   347,    54,   143,   144,   162,   345,   346,
     351,   361,   373,   417,     5,   324,     3,   413,   415,   413,
       5,   417,   413,     5,   413,   413,   415,     5,     5,   413,
     415,   415,     5,     5,   413,   413,   413,     5,   119,   415,
     375,   417,     5,   415,   415,   415,   415,   119,   179,   180,
     181,   410,   119,   410,   119,   410,   119,   410,   417,   413,
     308,   308,   308,   310,   309,   417,   417,   417,   417,   417,
     417,    73,   142,   162,   168,   239,   354,   355,   356,   357,
     358,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,     6,   327,   328,   348,   110,   110,   119,   111,   346,
     226,   229,   349,   350,   352,   167,   360,   362,   415,   413,
     215,   216,   217,   417,     5,   417,   413,   413,     5,   413,
     413,   417,     5,     5,   413,   413,   417,   417,   417,   413,
       5,   372,   413,     5,     5,     5,     5,   410,   415,   410,
     415,   410,   415,   410,   415,   417,   110,   408,   111,   110,
     359,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   364,   110,   112,   119,   110,     5,   417,   119,   416,
     416,   416,   413,   417,   417,   413,   417,   417,   413,   413,
     417,   417,   417,   413,   373,   417,   413,   413,   413,   413,
     415,     5,   415,     5,   415,     5,   415,     5,   119,   228,
     240,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   413,    47,   119,     5,     5,     5,   417,   417,   417,
     417,   417,   415,   417,   417,   417,   417,     5,   413,     5,
     413,     5,   413,     5,   413,   417,    47,   412,   414,   414,
     414,     5,   413,   417,   413,   417,   413,   417,   413,   417,
     413,   417,   417,   417,   417,   417
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   241,   242,   242,   243,   243,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     247,   247,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   249,
     249,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   253,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   255,   255,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     257,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   261,   261,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   263,   263,
     263,   264,   265,   265,   266,   267,   268,   269,   269,   269,
     270,   270,   270,   271,   272,   273,   274,   275,   275,   276,
     277,   277,   278,   278,   279,   279,   280,   281,   282,   282,
     283,   283,   284,   284,   285,   285,   285,   285,   286,   286,
     287,   287,   288,   288,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   293,   294,   294,   295,
     295,   296,   296,   297,   297,   298,   298,   299,   300,   301,
     302,   303,   303,   303,   303,   303,   303,   304,   303,   305,
     303,   306,   303,   307,   303,   303,   308,   308,   309,   310,
     310,   311,   311,   311,   311,   312,   313,   313,   314,   315,
     316,   316,   317,   318,   319,   319,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   324,   325,   325,   326,   326,
     326,   326,   327,   327,   328,   329,   329,   330,   330,   331,
     332,   332,   332,   332,   333,   333,   334,   335,   336,   336,
     336,   337,   337,   337,   337,   338,   338,   339,   339,   340,
     341,   341,   341,   341,   341,   341,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   343,   343,   344,   344,   345,   345,   346,   346,
     346,   346,   347,   347,   348,   348,   349,   349,   350,   351,
     351,   352,   352,   353,   353,   354,   354,   354,   354,   354,
     355,   356,   357,   358,   359,   359,   360,   361,   361,   362,
     363,   363,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   365,   366,   367,   368,   369,   369,   370,   370,
     371,   371,   372,   372,   373,   373,   374,   374,   375,   375,
     376,   376,   377,   377,   377,   377,   378,   379,   380,   380,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     382,   383,   383,   384,   384,   384,   384,   385,   385,   385,
     386,   386,   386,   387,   388,   389,   389,   390,   391,   391,
     392,   393,   393,   394,   394,   394,   394,   395,   396,   396,
     397,   397,   397,   397,   398,   398,   399,   400,   400,   400,
     400,   401,   401,   401,   401,   402,   402,   403,   404,   405,
     405,   405,   406,   406,   407,   407,   408,   408,   408,   408,
     408,   408,   409,   409,   409,   409,   409,   409,   410,   410,
     410,   411,   411,   412,   412,   412,   412,   412,   412,   412,
     413,   414,   415,   415,   415,   416,   416,   416,   417,   417,
     417,   417,   418,   418,   418,   419,   419,   419,   420,   420,
     420,   420,   421,   421,   421,   421,   422,   423,   423,   423,
     423,   423,   424,   424,   425,   425,   425,   425,   426,   426,
     427,   427,   428,   428,   429,   429,   430,   430,   431,   432,
     433,   434,   434,   434,   434,   434,   434,   435,   435,   435,
     435,   435,   435,   436,   437,   437,   437
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
       4,     6,     4,     3,     3,     3,     3,     2,     3,     3,
       0,     2,     1,     1,     0,     2,     5,     5,     1,     2,
       2,     4,     0,     2,     1,     1,     1,     1,     5,     5,
       0,     2,     1,     1,     1,     1,     0,     2,     1,     1,
       2,     2,     0,     2,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     5,     4,     2,     3,     3,     3,     0,     4,     0,
       5,     0,     5,     0,     5,     2,     1,     2,     1,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     5,     6,     3,     4,     3,     4,
       3,     4,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     0,     2,    14,    11,    11,
      10,     9,     9,     9,     0,     2,     2,     2,     0,     1,
       1,     0,     2,     3,     2,     0,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     0,     3,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     1,     1,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     2,     2,     2,     0,
       2,     1,     1,     0,     2,     1,     1,     1,     1,     3,
       3,     2,     2,     2,     0,     2,     2,     0,     2,     1,
       1,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     7,     6,     6,     9,     0,     2,     0,     3,
       0,     3,     0,     3,     0,     2,     7,     7,     0,     3,
       1,     1,     3,     6,     7,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     2,     1,     1,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     8,     6,
       6,     1,     2,     1,     1,     1,     1,     6,     1,     2,
       1,     1,     1,     1,     4,     4,     4,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     3,     3,     1,
       1,     1,     1,     1,     9,     6,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     0,     2,     3,     0,     2,     3,     0,     6,
       6,     6,     8,    10,     7,     0,     1,     1,     8,     9,
       9,    10,     9,     9,    10,    10,     6,     0,     1,     1,
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
#line 546 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 2901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 550 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 553 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 559 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.flags      |= Run_Daemon;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 2931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 569 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2937 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 570 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 573 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2953 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 580 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags |= Run_Foreground;
                  }
#line 2961 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 585 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags |= Run_FipsEnabled;
                  }
#line 2969 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 590 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.log || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.flags &= ~Run_UseSyslog;
                     Run.flags |= Run_Log;
                   }
                  }
#line 2982 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 598 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2990 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 601 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2998 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 606 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 609 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3015 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 613 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 619 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.id = (yyvsp[0].string);
                  }
#line 3032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 624 "src/p.y" /* yacc.c:1646  */
    {
                    Run.files.state = (yyvsp[0].string);
                  }
#line 3040 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 629 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.files.pid || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 3051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 644 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-2].url);
                        mmonitset.timeout = (yyvsp[-1].number);
                        addmmonit(&mmonitset);
                  }
#line 3061 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 655 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.ssl.version = (yyvsp[0].number);
                  }
#line 3069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 658 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.ssl.certmd5 = (yyvsp[0].string);
                  }
#line 3077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 664 "src/p.y" /* yacc.c:1646  */
    {
                    Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 669 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3095 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 676 "src/p.y" /* yacc.c:1646  */
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 3107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 689 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        if (mailserverset.ssl.version != SSL_Disabled) {
                                mailserverset.ssl.use_ssl = true;
                                if (mailserverset.ssl.version == SSL_V2 || mailserverset.ssl.version == SSL_V3)
                                        mailserverset.port = PORT_SMTPS;
                        }
                        addmailserver(&mailserverset);
                  }
#line 3126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 703 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        if (mailserverset.ssl.version != SSL_Disabled)
                                mailserverset.ssl.use_ssl = true;
                        addmailserver(&mailserverset);
                  }
#line 3142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 720 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 723 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 726 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.ssl.version = (yyvsp[0].number);
                  }
#line 3166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 729 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.ssl.certmd5 = (yyvsp[0].string);
                  }
#line 3174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 734 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3183 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 738 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3192 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 762 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3200 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 765 "src/p.y" /* yacc.c:1646  */
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
#line 3216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 795 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3232 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 811 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 816 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3258 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 828 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 833 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3274 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 836 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 844 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 852 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 856 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3323 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 860 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 864 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 867 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 871 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3357 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 874 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3366 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 878 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3374 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 881 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 885 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3391 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 888 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 899 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 905 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 906 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3422 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 909 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 912 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 915 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3450 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 922 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3462 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 931 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3470 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 936 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 939 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3486 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 944 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3494 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 949 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 954 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3515 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 962 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3524 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 968 "src/p.y" /* yacc.c:1646  */
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
#line 3539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 980 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 985 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 992 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1001 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1004 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1009 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1012 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1018 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3611 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1021 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1034 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 3627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1037 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 3635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1042 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 3644 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1046 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 3653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1050 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 3661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1053 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1058 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1061 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1066 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1071 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 3701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1074 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1079 "src/p.y" /* yacc.c:1646  */
    {
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3723 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1088 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-7].url));
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1097 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-5].number);
                        portset.retry = (yyvsp[-4].number);
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 3746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1105 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-6].number);
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 3759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1113 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3772 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1121 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1129 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 3806 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1142 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 3814 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1147 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 3822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 3831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip;
                  }
#line 3839 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1161 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 3847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1164 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 3855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1169 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3863 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1172 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3871 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1175 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                    portset.target.net.SSL.use_ssl = true;
                    if (portset.target.net.SSL.version == SSL_Disabled)
                      portset.target.net.SSL.version = SSL_Auto;
                  }
#line 3882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1181 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 3890 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1190 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.SSL.version = (yyvsp[0].number);
                  }
#line 3898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1193 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.SSL.certmd5 = (yyvsp[0].string);
                  }
#line 3906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1198 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3914 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1203 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V2; }
#line 3920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1204 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V3; }
#line 3926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1205 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_TLSV1; }
#line 3932 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1207 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_TLSV11;
                }
#line 3943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1214 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_TLSV12;
                }
#line 3954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1220 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Auto; }
#line 3960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1223 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1226 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1229 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1232 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1235 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1238 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1241 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1244 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.target.net.SSL.use_ssl = true;
                        portset.target.net.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4027 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1250 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1253 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.target.net.SSL.use_ssl = true;
                        portset.target.net.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1259 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4054 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1262 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4062 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1265 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1268 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4078 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1271 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4086 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1277 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1284 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1287 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1290 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.target.net.SSL.use_ssl = true;
                        portset.target.net.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4138 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1296 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4146 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1299 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4154 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1302 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.target.net.SSL.use_ssl = true;
                        portset.target.net.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1308 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1311 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1314 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1317 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1320 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1323 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1326 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4221 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1329 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4229 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1332 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4237 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1335 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4245 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1338 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4253 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1341 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 4261 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4269 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1353 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4277 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1362 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1365 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4293 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1368 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4301 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1371 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4309 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1380 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username lengh is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1388 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1393 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1396 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1401 "src/p.y" /* yacc.c:1646  */
    {
                     (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4354 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1410 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1413 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.operator = (yyvsp[-1].number);
                    portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1435 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4388 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1441 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 4396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1446 "src/p.y" /* yacc.c:1646  */
    {
                    addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                    FREE((yyvsp[0].string));
                  }
#line 4405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1453 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 4413 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1458 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.string) = (yyvsp[0].string);
                  }
#line 4421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1467 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 4429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1476 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 4438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1480 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 4447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1484 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1488 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1492 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 4474 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1500 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 4492 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1504 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1508 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1512 "src/p.y" /* yacc.c:1646  */
    {
                    portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1518 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1525 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1531 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4546 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1537 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1544 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1547 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1552 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1555 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1560 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4597 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1563 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4605 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1568 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1571 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1576 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1579 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1584 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1599 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1605 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1606 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4680 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4689 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1613 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1616 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1620 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1625 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4720 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1628 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4726 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1635 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4732 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1636 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 4738 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1637 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 4744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1638 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4750 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1639 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1640 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4762 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1641 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1642 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4774 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1643 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4780 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1644 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1645 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1646 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1647 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1648 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 4810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1649 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4816 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1650 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 4822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1651 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 4828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1652 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1653 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1654 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1655 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4852 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1656 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 4858 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1657 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4864 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1658 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 4870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1659 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1660 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1661 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4888 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1662 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1663 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1674 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1675 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1676 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1677 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1680 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1684 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4942 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1688 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1694 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 4959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1697 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 4967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1700 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 4976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1706 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4985 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1720 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1723 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1730 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5015 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1739 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1755 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 5033 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1771 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1776 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1783 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5063 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1790 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1791 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1792 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5081 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1793 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5087 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 5097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1801 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1806 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 5117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1811 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1818 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 5137 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1823 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1830 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 5157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1837 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 5167 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1844 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1845 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5179 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1846 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5185 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1849 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5191 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1850 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1853 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, false);
                  }
#line 5208 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1859 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset, true);
                  }
#line 5218 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1866 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1867 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1868 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1869 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1870 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1871 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5254 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1874 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1875 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1876 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5272 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1877 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1878 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1879 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5290 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1882 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1883 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1884 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1886 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1887 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1889 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Alert; }
#line 5326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1890 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1891 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1892 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Restart; }
#line 5344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1893 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Start; }
#line 5350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1894 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Stop; }
#line 5356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1895 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Unmonitor; }
#line 5362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1898 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5374 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1907 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5386 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1917 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1923 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1934 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1940 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5434 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1950 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1953 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5450 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1956 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5458 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1959 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1964 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1969 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5486 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1975 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1981 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1982 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1983 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1986 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1993 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2000 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2007 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2016 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5576 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2025 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2032 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5602 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2041 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2050 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 5623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2056 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2057 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2058 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 5641 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2059 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 5647 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2060 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 5653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2063 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2068 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 5673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2075 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2082 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5696 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2088 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 5708 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2095 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 5719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2103 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 5727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2106 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 5735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2112 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2118 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 5756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2125 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2131 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2138 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5788 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2144 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2151 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2157 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2164 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 5828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2170 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 5837 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2175 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 5848 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2183 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2191 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5874 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2199 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2207 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2215 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2223 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2233 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2241 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2249 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5965 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2257 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2265 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2273 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6004 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2283 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 6010 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2286 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 6016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2287 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 6022 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2288 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 6028 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 6032 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2291 "src/p.y" /* yacc.c:1906  */



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
        reset_mailserverset();
        reset_mmonitset();
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
        p->type               = port->type;
        p->socket             = port->socket;
        p->family             = port->family;
        p->action             = port->action;
        p->timeout            = port->timeout;
        p->retry              = port->retry;
        p->protocol           = port->protocol;
        p->hostname           = port->hostname;
        p->url_request        = port->url_request;
        if (p->family == Socket_Unix) {
                p->target.unix.pathname = port->target.unix.pathname;
        } else {
                p->target.net.port = port->target.net.port;
                if (port->target.net.SSL.use_ssl == true) {
#ifdef HAVE_OPENSSL
                        if (port->target.net.SSL.certmd5 != NULL) {
                                p->target.net.SSL.certmd5 = port->target.net.SSL.certmd5;
                                cleanup_hash_string(p->target.net.SSL.certmd5);
                        }
                        p->target.net.SSL.use_ssl = true;
                        p->target.net.SSL.version = port->target.net.SSL.version;
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
        icmp->family       = is->family;
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
        Generic_T g = port->parameters.generic.sendexpect;

        if (g == NULL) {
                NEW(g);
                port->parameters.generic.sendexpect = g;
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
                portset.target.net.SSL.use_ssl = true;

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
        c->ssl.version = mmonit->ssl.version;
        if (IS(c->url->protocol, "https")) {
#ifdef HAVE_OPENSSL
                c->ssl.use_ssl = true;
                c->ssl.version = (mmonit->ssl.version == SSL_Disabled) ? SSL_Auto : mmonit->ssl.version;
                if (mmonit->ssl.certmd5) {
                        c->ssl.certmd5 = mmonit->ssl.certmd5;
                        cleanup_hash_string(c->ssl.certmd5);
                }
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
        mailserverset.ssl.version = SSL_Disabled;
}


/*
 * Reset the mmonit set to default values
 */
static void reset_mmonitset() {
        memset(&mmonitset, 0, sizeof(struct mymmonit));
        mailserverset.port = 8080;
        mailserverset.ssl.use_ssl = false;
        mailserverset.ssl.version = SSL_Disabled;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
        memset(&portset, 0, sizeof(struct myport));
        portset.socket = -1;
        portset.type = Socket_Tcp;
        portset.family = Socket_Ip;
        portset.timeout = NET_TIMEOUT;
        portset.retry = 1;
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
        if (mf >= 0 && mf <= 255)
                return mf;
        yywarning2("SIP max forward is outside the range [0..255]. Setting max forward to 70");
        return 70;
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

