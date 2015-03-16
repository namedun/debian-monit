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
    IPV4 = 313,
    IPV6 = 314,
    TYPE = 315,
    UDP = 316,
    TCP = 317,
    TCPSSL = 318,
    PROTOCOL = 319,
    CONNECTION = 320,
    ALERT = 321,
    NOALERT = 322,
    MAILFORMAT = 323,
    UNIXSOCKET = 324,
    SIGNATURE = 325,
    TIMEOUT = 326,
    RETRY = 327,
    RESTART = 328,
    CHECKSUM = 329,
    EVERY = 330,
    NOTEVERY = 331,
    DEFAULT = 332,
    HTTP = 333,
    HTTPS = 334,
    APACHESTATUS = 335,
    FTP = 336,
    SMTP = 337,
    SMTPS = 338,
    POP = 339,
    POPS = 340,
    IMAP = 341,
    IMAPS = 342,
    CLAMAV = 343,
    NNTP = 344,
    NTP3 = 345,
    MYSQL = 346,
    DNS = 347,
    WEBSOCKET = 348,
    SSH = 349,
    DWP = 350,
    LDAP2 = 351,
    LDAP3 = 352,
    RDATE = 353,
    RSYNC = 354,
    TNS = 355,
    PGSQL = 356,
    POSTFIXPOLICY = 357,
    SIP = 358,
    LMTP = 359,
    GPS = 360,
    RADIUS = 361,
    MEMCACHE = 362,
    REDIS = 363,
    MONGODB = 364,
    SIEVE = 365,
    STRING = 366,
    PATH = 367,
    MAILADDR = 368,
    MAILFROM = 369,
    MAILREPLYTO = 370,
    MAILSUBJECT = 371,
    MAILBODY = 372,
    SERVICENAME = 373,
    STRINGNAME = 374,
    NUMBER = 375,
    PERCENT = 376,
    LOGLIMIT = 377,
    CLOSELIMIT = 378,
    DNSLIMIT = 379,
    KEEPALIVELIMIT = 380,
    REPLYLIMIT = 381,
    REQUESTLIMIT = 382,
    STARTLIMIT = 383,
    WAITLIMIT = 384,
    GRACEFULLIMIT = 385,
    CLEANUPLIMIT = 386,
    REAL = 387,
    CHECKPROC = 388,
    CHECKFILESYS = 389,
    CHECKFILE = 390,
    CHECKDIR = 391,
    CHECKHOST = 392,
    CHECKSYSTEM = 393,
    CHECKFIFO = 394,
    CHECKPROGRAM = 395,
    CHECKNET = 396,
    CHILDREN = 397,
    SYSTEM = 398,
    STATUS = 399,
    ORIGIN = 400,
    VERSIONOPT = 401,
    RESOURCE = 402,
    MEMORY = 403,
    TOTALMEMORY = 404,
    LOADAVG1 = 405,
    LOADAVG5 = 406,
    LOADAVG15 = 407,
    SWAP = 408,
    MODE = 409,
    ACTIVE = 410,
    PASSIVE = 411,
    MANUAL = 412,
    CPU = 413,
    TOTALCPU = 414,
    CPUUSER = 415,
    CPUSYSTEM = 416,
    CPUWAIT = 417,
    GROUP = 418,
    REQUEST = 419,
    DEPENDS = 420,
    BASEDIR = 421,
    SLOT = 422,
    EVENTQUEUE = 423,
    SECRET = 424,
    HOSTHEADER = 425,
    UID = 426,
    EUID = 427,
    GID = 428,
    MMONIT = 429,
    INSTANCE = 430,
    USERNAME = 431,
    PASSWORD = 432,
    TIMESTAMP = 433,
    CHANGED = 434,
    SECOND = 435,
    MINUTE = 436,
    HOUR = 437,
    DAY = 438,
    MONTH = 439,
    SSLAUTO = 440,
    SSLV2 = 441,
    SSLV3 = 442,
    TLSV1 = 443,
    TLSV11 = 444,
    TLSV12 = 445,
    CERTMD5 = 446,
    BYTE = 447,
    KILOBYTE = 448,
    MEGABYTE = 449,
    GIGABYTE = 450,
    INODE = 451,
    SPACE = 452,
    PERMISSION = 453,
    SIZE = 454,
    MATCH = 455,
    NOT = 456,
    IGNORE = 457,
    ACTION = 458,
    UPTIME = 459,
    EXEC = 460,
    UNMONITOR = 461,
    PING = 462,
    PING4 = 463,
    PING6 = 464,
    ICMP = 465,
    ICMPECHO = 466,
    NONEXIST = 467,
    EXIST = 468,
    INVALID = 469,
    DATA = 470,
    RECOVERED = 471,
    PASSED = 472,
    SUCCEEDED = 473,
    URL = 474,
    CONTENT = 475,
    PID = 476,
    PPID = 477,
    FSFLAG = 478,
    REGISTER = 479,
    CREDENTIALS = 480,
    URLOBJECT = 481,
    TARGET = 482,
    TIMESPEC = 483,
    HTTPHEADER = 484,
    MAXFORWARD = 485,
    FIPS = 486,
    GREATER = 487,
    LESS = 488,
    EQUAL = 489,
    NOTEQUAL = 490
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
#define IPV4 313
#define IPV6 314
#define TYPE 315
#define UDP 316
#define TCP 317
#define TCPSSL 318
#define PROTOCOL 319
#define CONNECTION 320
#define ALERT 321
#define NOALERT 322
#define MAILFORMAT 323
#define UNIXSOCKET 324
#define SIGNATURE 325
#define TIMEOUT 326
#define RETRY 327
#define RESTART 328
#define CHECKSUM 329
#define EVERY 330
#define NOTEVERY 331
#define DEFAULT 332
#define HTTP 333
#define HTTPS 334
#define APACHESTATUS 335
#define FTP 336
#define SMTP 337
#define SMTPS 338
#define POP 339
#define POPS 340
#define IMAP 341
#define IMAPS 342
#define CLAMAV 343
#define NNTP 344
#define NTP3 345
#define MYSQL 346
#define DNS 347
#define WEBSOCKET 348
#define SSH 349
#define DWP 350
#define LDAP2 351
#define LDAP3 352
#define RDATE 353
#define RSYNC 354
#define TNS 355
#define PGSQL 356
#define POSTFIXPOLICY 357
#define SIP 358
#define LMTP 359
#define GPS 360
#define RADIUS 361
#define MEMCACHE 362
#define REDIS 363
#define MONGODB 364
#define SIEVE 365
#define STRING 366
#define PATH 367
#define MAILADDR 368
#define MAILFROM 369
#define MAILREPLYTO 370
#define MAILSUBJECT 371
#define MAILBODY 372
#define SERVICENAME 373
#define STRINGNAME 374
#define NUMBER 375
#define PERCENT 376
#define LOGLIMIT 377
#define CLOSELIMIT 378
#define DNSLIMIT 379
#define KEEPALIVELIMIT 380
#define REPLYLIMIT 381
#define REQUESTLIMIT 382
#define STARTLIMIT 383
#define WAITLIMIT 384
#define GRACEFULLIMIT 385
#define CLEANUPLIMIT 386
#define REAL 387
#define CHECKPROC 388
#define CHECKFILESYS 389
#define CHECKFILE 390
#define CHECKDIR 391
#define CHECKHOST 392
#define CHECKSYSTEM 393
#define CHECKFIFO 394
#define CHECKPROGRAM 395
#define CHECKNET 396
#define CHILDREN 397
#define SYSTEM 398
#define STATUS 399
#define ORIGIN 400
#define VERSIONOPT 401
#define RESOURCE 402
#define MEMORY 403
#define TOTALMEMORY 404
#define LOADAVG1 405
#define LOADAVG5 406
#define LOADAVG15 407
#define SWAP 408
#define MODE 409
#define ACTIVE 410
#define PASSIVE 411
#define MANUAL 412
#define CPU 413
#define TOTALCPU 414
#define CPUUSER 415
#define CPUSYSTEM 416
#define CPUWAIT 417
#define GROUP 418
#define REQUEST 419
#define DEPENDS 420
#define BASEDIR 421
#define SLOT 422
#define EVENTQUEUE 423
#define SECRET 424
#define HOSTHEADER 425
#define UID 426
#define EUID 427
#define GID 428
#define MMONIT 429
#define INSTANCE 430
#define USERNAME 431
#define PASSWORD 432
#define TIMESTAMP 433
#define CHANGED 434
#define SECOND 435
#define MINUTE 436
#define HOUR 437
#define DAY 438
#define MONTH 439
#define SSLAUTO 440
#define SSLV2 441
#define SSLV3 442
#define TLSV1 443
#define TLSV11 444
#define TLSV12 445
#define CERTMD5 446
#define BYTE 447
#define KILOBYTE 448
#define MEGABYTE 449
#define GIGABYTE 450
#define INODE 451
#define SPACE 452
#define PERMISSION 453
#define SIZE 454
#define MATCH 455
#define NOT 456
#define IGNORE 457
#define ACTION 458
#define UPTIME 459
#define EXEC 460
#define UNMONITOR 461
#define PING 462
#define PING4 463
#define PING6 464
#define ICMP 465
#define ICMPECHO 466
#define NONEXIST 467
#define EXIST 468
#define INVALID 469
#define DATA 470
#define RECOVERED 471
#define PASSED 472
#define SUCCEEDED 473
#define URL 474
#define CONTENT 475
#define PID 476
#define PPID 477
#define FSFLAG 478
#define REGISTER 479
#define CREDENTIALS 480
#define URLOBJECT 481
#define TARGET 482
#define TIMESPEC 483
#define HTTPHEADER 484
#define MAXFORWARD 485
#define FIPS 486
#define GREATER 487
#define LESS 488
#define EQUAL 489
#define NOTEQUAL 490

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
#define YYLAST   1262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  242
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  185
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1118

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   490

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
       2,     2,     2,     2,     2,     2,     2,     2,   238,     2,
       2,     2,     2,     2,   239,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   240,     2,   241,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   236,     2,   237,     2,     2,     2,     2,
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
     235
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
    1044,  1053,  1061,  1069,  1077,  1085,  1095,  1098,  1104,  1109,
    1115,  1118,  1121,  1126,  1129,  1132,  1140,  1145,  1148,  1153,
    1154,  1155,  1156,  1157,  1164,  1171,  1174,  1177,  1180,  1183,
    1186,  1189,  1192,  1195,  1201,  1204,  1210,  1213,  1216,  1219,
    1222,  1225,  1228,  1231,  1235,  1238,  1241,  1247,  1250,  1253,
    1259,  1262,  1265,  1268,  1271,  1274,  1277,  1280,  1283,  1286,
    1289,  1292,  1297,  1298,  1301,  1304,  1309,  1310,  1313,  1316,
    1319,  1322,  1327,  1328,  1331,  1336,  1337,  1342,  1343,  1346,
    1347,  1348,  1349,  1350,  1353,  1359,  1365,  1370,  1375,  1376,
    1384,  1389,  1390,  1393,  1397,  1401,  1405,  1409,  1413,  1417,
    1421,  1425,  1429,  1435,  1442,  1448,  1454,  1461,  1464,  1469,
    1472,  1477,  1480,  1485,  1488,  1493,  1496,  1501,  1507,  1515,
    1516,  1522,  1523,  1526,  1530,  1533,  1537,  1542,  1545,  1548,
    1549,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,
    1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,
    1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,  1580,
    1583,  1584,  1587,  1588,  1591,  1592,  1593,  1594,  1597,  1601,
    1605,  1611,  1614,  1617,  1623,  1627,  1630,  1631,  1634,  1637,
    1644,  1653,  1659,  1660,  1663,  1664,  1665,  1666,  1669,  1675,
    1676,  1679,  1680,  1681,  1682,  1685,  1690,  1697,  1704,  1705,
    1706,  1709,  1714,  1719,  1724,  1731,  1736,  1743,  1750,  1757,
    1758,  1759,  1762,  1763,  1766,  1772,  1779,  1780,  1781,  1782,
    1783,  1784,  1787,  1788,  1789,  1790,  1791,  1792,  1795,  1796,
    1797,  1799,  1800,  1802,  1803,  1804,  1805,  1806,  1807,  1808,
    1811,  1820,  1829,  1830,  1836,  1846,  1847,  1853,  1863,  1866,
    1869,  1872,  1877,  1881,  1888,  1894,  1895,  1896,  1899,  1906,
    1915,  1924,  1933,  1939,  1940,  1941,  1942,  1943,  1946,  1951,
    1958,  1965,  1971,  1978,  1986,  1989,  1995,  2001,  2008,  2014,
    2021,  2027,  2034,  2040,  2047,  2053,  2058,  2066,  2074,  2082,
    2090,  2098,  2106,  2116,  2124,  2132,  2140,  2148,  2156,  2166,
    2169,  2170,  2171
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
  "IPV4", "IPV6", "TYPE", "UDP", "TCP", "TCPSSL", "PROTOCOL", "CONNECTION",
  "ALERT", "NOALERT", "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT",
  "RETRY", "RESTART", "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP",
  "HTTPS", "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "POPS", "IMAP",
  "IMAPS", "CLAMAV", "NNTP", "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH",
  "DWP", "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL",
  "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS",
  "MONGODB", "SIEVE", "STRING", "PATH", "MAILADDR", "MAILFROM",
  "MAILREPLYTO", "MAILSUBJECT", "MAILBODY", "SERVICENAME", "STRINGNAME",
  "NUMBER", "PERCENT", "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT",
  "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT", "STARTLIMIT",
  "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL", "CHECKPROC",
  "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST", "CHECKSYSTEM",
  "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "CHILDREN", "SYSTEM", "STATUS",
  "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY", "TOTALMEMORY", "LOADAVG1",
  "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE", "MANUAL",
  "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST",
  "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER",
  "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD",
  "TIMESTAMP", "CHANGED", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "CERTMD5",
  "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE",
  "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE", "ACTION", "UPTIME",
  "EXEC", "UNMONITOR", "PING", "PING4", "PING6", "ICMP", "ICMPECHO",
  "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED", "PASSED",
  "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG", "REGISTER",
  "CREDENTIALS", "URLOBJECT", "TARGET", "TIMESPEC", "HTTPHEADER",
  "MAXFORWARD", "FIPS", "GREATER", "LESS", "EQUAL", "NOTEQUAL", "'{'",
  "'}'", "':'", "'@'", "'['", "']'", "$accept", "cfgfile",
  "statement_list", "statement", "optproclist", "optproc", "optfilelist",
  "optfile", "optfilesyslist", "optfilesys", "optdirlist", "optdir",
  "opthostlist", "opthost", "optnetlist", "optnet", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optstatuslist", "optstatus",
  "setalert", "setdaemon", "startdelay", "setexpectbuffer", "setinit",
  "setfips", "setlog", "seteventqueue", "setidfile", "setstatefile",
  "setpid", "setmmonits", "mmonitlist", "mmonit", "credentials",
  "setmailservers", "setmailformat", "mailserverlist", "mailserver",
  "sethttpd", "httpdnetlist", "httpdnetoption", "httpdunixlist",
  "httpdunixoption", "ssl", "optssllist", "optssl", "sslenable",
  "ssldisable", "signature", "sigenable", "sigdisable", "bindaddress",
  "pemfile", "clientpemfile", "allowselfcert", "allow", "$@1", "$@2",
  "$@3", "$@4", "allowuserlist", "allowuser", "readonly", "checkproc",
  "checkfile", "checkfilesys", "checkdir", "checkhost", "checknet",
  "checksystem", "checkfifo", "checkprogram", "start", "stop", "restart",
  "argumentlist", "useroptionlist", "argument", "useroption", "username",
  "password", "hostname", "connection", "connectionunix", "icmp", "host",
  "port", "unixsocket", "ip", "type", "certmd5", "sslversion", "protocol",
  "sendexpectlist", "sendexpect", "websocketlist", "websocket", "target",
  "maxforward", "httplist", "http", "status", "request", "responsesum",
  "hostheader", "httpheaderlist", "secret", "apache_stat_list",
  "apache_stat", "exist", "pid", "ppid", "uptime", "icmpcount",
  "exectimeout", "programtimeout", "nettimeout", "retry", "actionrate",
  "urloption", "urloperator", "alert", "alertmail", "noalertmail",
  "eventoptionlist", "eventoption", "formatlist", "formatoptionlist",
  "formatoption", "every", "mode", "group", "depend", "dependlist",
  "dependant", "statusvalue", "resourceprocess", "resourceprocesslist",
  "resourceprocessopt", "resourcesystem", "resourcesystemlist",
  "resourcesystemopt", "resourcecpuproc", "resourcecpu", "resourcecpuid",
  "resourcemem", "resourceswap", "resourcechild", "resourceload",
  "resourceloadavg", "value", "timestamp", "operator", "time", "totaltime",
  "currenttime", "action", "action1", "action2", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "fsflag", "unit",
  "permission", "match", "matchflagnot", "size", "uid", "euid", "gid",
  "linkstatus", "linkspeed", "linksaturation", "upload", "download",
  "icmptype", "reminder", YY_NULLPTR
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
     485,   486,   487,   488,   489,   490,   123,   125,    58,    64,
      91,    93
};
# endif

#define YYPACT_NINF -791

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-791)))

#define YYTABLE_NINF -244

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     587,    41,   -77,   -69,   -31,   -21,    53,    59,   150,   184,
     191,   104,   587,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,   400,  -791,  -791,  -791,  -791,    26,    64,    83,
     180,  -791,   117,   179,   214,   210,   234,   128,   -47,   148,
    -791,   -41,    35,   330,   355,   380,   431,  -791,   404,   411,
      66,  -791,  -791,   625,   166,   822,   939,    44,   152,   152,
     342,   152,   -63,   241,   470,   363,   397,   400,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,   -33,  -791,  -791,  -791,
    -791,  -791,   320,   584,   939,   818,   511,  -791,   465,   -14,
     202,  -791,   406,   418,  -791,  -791,   353,  -791,  -791,   592,
     454,   423,   522,   148,   346,   361,   374,   928,   562,   504,
     506,   277,   376,   518,   530,   538,   546,   152,   550,   586,
     103,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,    27,   484,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,    96,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,    46,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,    76,   613,  -791,  -791,   299,  -791,
     299,  -791,   299,   651,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,   397,  -791,  -791,   467,   928,   562,   111,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,   766,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,   137,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,   599,
     681,  -791,   594,   291,   535,   596,  -791,   661,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,    13,
    -791,   563,  -791,   486,   346,   508,  -791,   592,   928,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,   540,  -791,
     609,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,   329,  -791,  -791,     1,   173,   173,   173,  -791,
    -791,  -791,   173,   173,   282,   519,   173,   859,  -791,  -791,
    -791,  -791,  -791,   173,    73,   173,    81,   173,   519,   548,
    -791,   551,   177,  -133,   173,   173,    23,   635,   704,   704,
     704,   699,   541,   709,   654,   656,   208,   221,   -34,  -791,
    -791,  -791,   -34,  -791,   -34,  -791,  -791,  -791,   928,   631,
    -791,   749,   173,   173,   173,   468,   750,   173,  -791,  -791,
    -791,   905,  -791,  -791,   173,  -791,  -791,  -791,   173,   640,
    -791,   666,   619,  -791,  -791,   685,   486,   617,   687,  -791,
     767,    51,  -791,  -791,   680,  -791,  -791,  -791,  -791,  -791,
    -791,   610,  -791,  -791,    19,   734,   735,  -791,   759,   691,
     169,  -791,   700,   328,   360,   366,   753,  -791,  -791,  -791,
    -791,  -791,   694,   186,   262,   695,   696,   697,   697,   697,
     703,    47,  -791,   814,   293,  -791,  -791,   706,   754,   707,
     697,   697,   697,   757,   713,   401,   445,   697,   718,   322,
    -791,   719,   522,   522,   522,   629,   704,   622,   724,   503,
     799,   668,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
     825,   735,   697,   729,   730,   737,   173,   173,   697,   324,
    -791,   850,   738,   745,   697,  -791,   535,  -791,   610,  -791,
    -791,     4,   755,   134,   190,   555,   574,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,   797,   802,  -791,  -791,
    -791,  -791,   758,  -791,  -791,   735,   562,  -791,   693,  -791,
    -791,   697,   697,   697,   697,   697,   697,   593,   266,  -791,
     756,  -791,   353,   761,   353,   762,   771,   871,   874,   875,
     499,  -791,   839,   244,  -791,  -791,   697,     2,   499,   895,
     896,   897,   697,   353,   697,   697,  -791,  -791,   898,   463,
     783,   353,  -791,   697,   697,   697,  -791,   522,   399,   522,
    -791,  -791,  -791,   753,   901,  -791,   735,   562,   903,   789,
     143,   151,   791,   793,   915,   804,   353,   244,   808,   697,
     925,   486,  -791,   819,   823,   824,   702,   830,   832,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,   395,   395,
    -791,   562,  -791,  -791,   929,   940,   942,   953,   955,   956,
    -791,  -791,   486,   857,   862,  1075,   522,   575,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,   244,   244,   244,  -791,  -791,
    -791,  -791,  -791,   697,  -791,  -791,  -791,  -791,  -791,   152,
    -791,  -791,   966,   969,   864,   972,   697,   244,   244,   244,
     973,   697,   975,   977,   244,   697,   979,   697,   697,   981,
     983,   984,   697,  -791,  -791,   879,   922,   266,   305,   562,
    -791,   244,   697,   815,   815,   815,   815,   161,   167,   244,
    -791,  -791,   966,  -791,   992,   244,   610,   893,   902,   908,
     909,   910,   998,   914,   919,  -791,  -791,  -791,  -791,  -791,
    -791,   244,   244,   244,   244,   244,   244,   610,  -791,  -791,
    -791,  -791,  -791,  1080,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,   253,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,   795,  -791,  -791,   863,
    -791,  -791,  -791,  -791,   922,  -791,  -791,  -791,   966,  1022,
     -48,  1030,  -791,   244,   697,   244,  1029,  -791,   966,  -791,
     244,  1031,   244,   244,  -791,  1033,   244,  1036,  1037,   244,
     244,   244,  1038,  -791,   924,   697,   622,  -791,  -791,  -791,
     966,  1054,  -791,   697,   697,   697,   697,   281,   315,   386,
     421,   966,  -791,   244,  -791,  -791,   910,   910,   910,   998,
    -791,   910,  -791,  -791,  -791,  -791,  -791,   966,   966,   966,
     966,   966,   966,  -791,   -38,   -38,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,  1055,  -791,   949,   952,
     944,   957,   253,  -791,   388,   838,   959,  -791,   697,  -791,
     244,   -59,   429,   966,  1066,   966,   244,  -791,  -791,   244,
    -791,  -791,   244,   966,   244,   244,   966,   966,   966,   244,
    -791,  1068,   522,  -791,   244,  1069,  1071,  1072,  1085,   512,
    -791,  -791,  -791,   697,   512,   697,   512,   697,   512,   697,
    -791,   966,   910,   910,   910,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,   980,   173,   982,   985,  -791,  -791,  -791,
    -791,  -791,  -791,   978,   987,   988,   989,   990,   999,  1000,
    1001,  1002,  1003,  1080,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  1004,  -791,  -791,  1087,   966,  1005,  1005,  1005,  -791,
     244,  -791,   966,   966,   966,  -791,   966,   966,  -791,  -791,
    -791,   966,   244,   922,   966,   244,   244,   244,   244,   697,
    1090,   697,  1092,   697,  1095,   697,  1100,  -791,  -791,  1008,
    -791,  -791,    58,  1009,  1013,  1014,  1015,  1016,  1018,  1020,
    1024,  1025,  1026,  -791,  -791,   244,  -791,    50,  1124,  1139,
    1207,   966,  -791,  -791,  -791,  -791,  -791,  -791,   966,   697,
    -791,   966,   966,   966,   966,  1208,   244,  1209,   244,  1226,
     244,  1227,   244,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,   966,  -791,  1185,   244,
     244,   244,  -791,  -791,  1229,  -791,  -791,  -791,  -791,   244,
     966,   244,   966,   244,   966,   244,   966,  -791,  -791,  -791,
    -791,  -791,  -791,   244,   966,  -791,   966,  -791,   966,  -791,
     966,  -791,   966,  -791,  -791,  -791,  -791,  -791
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
     176,   450,     0,     0,     0,     0,     0,   262,     0,     0,
       0,     1,     5,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,   102,   104,
     105,   106,   107,   108,   109,   110,   450,   416,   111,   112,
     113,   114,    28,    25,    26,    27,   178,   177,   172,   282,
     403,   194,     0,     0,   183,   184,   553,   185,   417,     0,
       0,     0,   403,   186,   190,     0,     0,     0,   590,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    41,    42,    34,    35,    36,
      40,    43,    44,    45,    46,    47,    48,    49,    37,    38,
      39,   564,   564,    51,    52,    53,    54,    55,    57,    59,
      58,    66,    67,    68,    56,    63,    60,    65,    64,    61,
      62,     0,    70,    71,    72,    73,    74,    76,    75,    80,
      81,    82,    83,    84,    85,    77,    78,    79,     0,    87,
      88,    89,    90,    91,    93,    95,    94,    99,   100,   101,
      92,    96,    97,    98,   296,     0,   276,   277,   399,   272,
     399,   418,   399,     0,   459,   460,   461,   462,   463,   464,
     468,   465,   466,   103,     0,     0,   590,     0,   116,   117,
     118,   119,   125,   127,   126,   128,   129,   120,   121,   122,
     123,   124,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   143,   144,   145,   146,   148,   150,
     149,   154,   155,   156,   147,   151,   152,   153,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,     0,
       0,   171,     0,     0,   285,     0,   195,   287,   200,   206,
     554,   555,   556,   557,   174,   454,   455,   456,   457,     0,
     452,   180,   182,   309,   190,     0,   187,     0,     0,   434,
     422,   423,   436,   437,   444,   442,   425,   446,   424,   445,
     441,   448,   430,   432,   447,   438,   443,   421,   449,   428,
     431,   435,   433,   427,   426,   439,   440,   429,     0,   419,
       0,   168,   251,   252,   253,   254,   257,   256,   255,   258,
     259,   263,   401,   260,   261,   296,   506,   506,   506,   499,
     500,   501,   506,   506,     0,     0,   506,   532,   472,   474,
     475,   476,   477,   506,   545,   506,   545,   506,   565,     0,
     565,     0,     0,     0,   506,   506,     0,     0,   397,   397,
     397,     0,     0,     0,     0,     0,     0,     0,   399,   273,
     274,   266,   399,   268,   399,   270,   458,   467,     0,     0,
     413,     0,   506,   506,   506,     0,     0,   506,   488,   489,
     490,   532,   479,   484,   506,   482,   483,   481,   506,     0,
     179,     0,   282,   284,   283,     0,   309,     0,     0,   192,
     198,   199,   193,   453,     0,   315,   310,   311,   312,   313,
     314,   307,   188,   191,     0,     0,   450,   420,   591,     0,
     401,   264,     0,     0,     0,     0,   303,   511,   507,   508,
     509,   510,     0,     0,     0,     0,     0,   532,   532,   532,
       0,     0,   473,     0,     0,   546,   547,     0,     0,     0,
     532,   532,   532,     0,     0,     0,     0,   532,     0,     0,
     297,     0,   403,   403,   403,     0,   397,   409,     0,   300,
       0,     0,   278,   280,   279,   281,   275,   267,   269,   271,
       0,   450,   532,     0,     0,     0,   506,   506,   532,     0,
     480,     0,     0,     0,   532,   173,   285,   286,   307,   404,
     288,     0,     0,     0,     0,     0,     0,   201,   202,   212,
     212,   203,   221,   222,   204,   205,     0,     0,   207,   208,
     209,   181,     0,   189,   451,   450,   590,   592,     0,   265,
     299,   532,   532,   532,   532,   532,   532,     0,   316,   497,
     503,   502,   553,   503,   553,     0,     0,     0,     0,     0,
     512,   533,     0,     0,   503,   498,   532,   532,   512,     0,
       0,     0,   532,   553,   532,   532,   563,   562,     0,   532,
     503,   553,   398,   532,   532,   532,   589,   403,     0,   403,
     298,   301,   302,   303,     0,   400,   450,   590,     0,     0,
     553,   553,     0,     0,     0,   503,   553,     0,     0,   532,
       0,   309,   196,     0,     0,     0,   245,   233,     0,   227,
     218,   224,   220,   226,   217,   219,   223,   225,   211,   210,
     308,   590,   169,   402,     0,     0,     0,     0,     0,     0,
     306,   304,   309,     0,     0,     0,   403,   351,   352,   492,
     491,   494,   493,   485,   486,     0,     0,     0,   513,   514,
     515,   516,   517,   532,   534,   527,   528,   523,   526,     0,
     529,   530,   538,     0,     0,     0,   532,     0,     0,     0,
       0,   532,     0,     0,     0,   532,     0,   532,   532,     0,
       0,     0,   532,   411,   412,     0,   405,   316,     0,   590,
     414,     0,   532,   521,   521,   521,   521,   553,   553,     0,
     496,   495,   538,   487,     0,     0,   307,   234,   235,   236,
       0,     0,   249,     0,     0,   230,   213,   214,   215,   216,
     170,     0,     0,     0,     0,     0,     0,   307,   354,   355,
     318,   367,   367,     0,   321,   338,   339,   335,   336,   324,
     325,   326,   332,   333,   330,   319,     0,   340,   320,   327,
     328,   341,   343,   344,   345,   334,   362,   346,   347,     0,
     349,   342,   329,   337,   405,   353,   394,   395,   538,     0,
     524,     0,   471,     0,   532,     0,     0,   505,   538,   567,
       0,     0,     0,     0,   552,     0,     0,     0,     0,     0,
       0,     0,     0,   410,     0,   532,   409,   408,   407,   415,
     538,     0,   522,   532,   532,   532,   532,     0,     0,     0,
       0,   538,   478,     0,   470,   197,     0,     0,     0,   249,
     248,   238,   246,   250,   232,   228,   229,   538,   538,   538,
     538,   538,   538,   305,   322,   323,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   317,   381,     0,     0,
       0,     0,   350,   356,     0,   365,     0,   348,   532,   393,
       0,   525,     0,   538,     0,   538,     0,   559,   544,     0,
     561,   560,     0,   538,     0,     0,   538,   538,   538,     0,
     406,     0,   403,   574,     0,     0,     0,     0,     0,     0,
     518,   519,   520,   532,     0,   532,     0,   532,     0,   532,
     575,   538,   240,   242,   244,   231,   247,   568,   569,   570,
     571,   572,   573,     0,   506,     0,     0,   378,   368,   371,
     369,   370,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   360,   358,   361,   359,   357,   364,
     363,     0,   331,   380,     0,   538,   535,   535,   535,   558,
       0,   542,   538,   538,   538,   548,   538,   538,   293,   294,
     295,   538,     0,   405,   538,     0,     0,     0,     0,   532,
       0,   532,     0,   532,     0,   532,     0,   469,   376,     0,
     375,   377,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,   366,     0,   396,     0,     0,     0,
       0,   538,   504,   566,   549,   551,   550,   292,   538,   532,
     576,   538,   538,   538,   538,     0,     0,     0,     0,     0,
       0,     0,     0,   374,   379,   373,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   538,   536,     0,     0,
       0,     0,   543,   290,     0,   580,   577,   586,   583,     0,
     538,     0,   538,     0,   538,     0,   538,   291,   537,   531,
     539,   540,   541,     0,   538,   581,   538,   578,   538,   587,
     538,   584,   538,   582,   579,   588,   585,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -791,  -791,  -791,  1223,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  1159,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,  1125,   933,  -791,  -791,  -791,
    1140,  -791,  -791,  -791,  -791,  -791,  -791,   689,  -791,  -791,
    -791,   800,  -791,  -791,  -791,  -791,  -791,  -791,   801,  -791,
    -791,  -791,  -791,  -116,  -522,   384,  -791,  -791,  -791,  -791,
    -791,  -791,  -791,  -791,  -791,   858,   986,  1019,   -68,  -204,
    -203,  -382,   812,   710,  -791,  1182,  -791,  -791,  -791,  -791,
    -791,  -791,   624,  -519,  -434,   521,  -791,   572,  -791,   358,
    -791,  -791,   479,  -791,  -791,  -791,  -791,  -791,  -791,  -791,
    -791,   279,   367,  -791,  -791,  -791,  -343,  -168,   794,  -112,
    -790,  1023,   417,  -791,  1123,  1254,  -791,  -200,  -309,   -76,
     950,  -254,  1127,   525,  1131,  1135,  -791,  1035,  -791,  -791,
    -791,   891,  -791,  -791,   840,  -791,  -791,  -791,  -211,  -791,
    -791,  -209,  -791,  -196,     5,  -345,   662,  -321,   -46,  -323,
    -271,  -441,  -417,  -324,  -727,  -791,   883,  -791,  -791,  -791,
    -152,   507,  -791,  1110,  -791,   459,  -791,   558,  -791,  -791,
    -791,  -791,  -791,  -791,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    63,   131,    64,   153,    65,   172,
      66,   189,    77,    78,    92,   228,    93,   243,    94,   253,
      95,   269,    14,    15,   281,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   113,   114,   306,    25,    26,   100,
     101,    27,   440,   547,   441,   558,   548,   658,   756,   549,
     550,   551,   552,   553,   554,   757,   758,   759,   555,   751,
     856,   857,   858,   861,   862,   864,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    79,    80,    81,   208,   398,
     209,   400,   284,   436,   439,    82,   136,    83,   393,   509,
     466,   623,   578,   563,   451,   676,   677,   678,   892,   893,
     895,   982,   874,   958,   959,   960,   961,   962,  1022,   897,
     886,   887,   137,   138,   139,   140,   502,   401,   461,   287,
     835,    84,   619,   725,    85,    86,    87,   338,   339,   118,
     299,   300,    88,    89,    90,    91,   221,   222,   278,   147,
     367,   368,   252,   421,   422,   369,   423,   424,   370,   426,
     371,   372,   373,   582,   164,   472,   693,   933,   843,   701,
     702,  1100,   483,  1038,   812,   165,   488,   182,   183,   184,
     294,   166,   167,   379,   168,   148,   149,   150,   237,   238,
     239,   240,   241,   506,   341
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     303,   210,   538,   212,   531,   399,   402,   399,   404,   399,
     226,   410,   473,   474,   898,   852,   516,   475,   476,   642,
     516,   480,   516,   643,   644,   409,   645,   115,   484,   457,
     489,   425,   494,   427,   374,   115,   953,   395,    96,   498,
     499,    52,   403,   282,   405,   443,   503,   504,   704,    53,
      37,   204,    38,   382,    39,    40,   387,   213,    41,   352,
     587,   588,   589,   206,   207,   491,   541,   523,   524,   525,
     462,   200,   529,   599,   600,   601,   556,   557,   516,   532,
     608,   899,   128,   533,    42,    43,   119,    54,    44,   120,
     497,   907,    45,   485,   486,   591,   129,    55,  1077,   264,
     457,   485,   486,   382,    61,   628,   954,    46,   455,    47,
     355,   634,   396,   923,   397,   646,   647,   640,   411,   110,
     111,   546,   481,   396,   940,   397,   955,   295,   296,   297,
     298,   387,   956,   295,   296,   297,   298,   396,    97,   397,
     947,   948,   949,   950,   951,   952,   457,   205,   460,   399,
     412,   413,   414,   415,   664,   665,   666,   667,   668,   669,
     116,   650,   283,   617,   205,   214,   205,   592,   224,   151,
    1078,    56,   463,   464,   465,   733,   989,    57,   991,   703,
     705,   632,   633,   735,    98,   710,   995,   712,   713,   998,
     999,  1000,   716,   847,    99,   117,   719,   720,   721,   849,
     443,   490,   957,   225,   651,   375,   376,   746,   520,    48,
     425,   457,   427,  1049,  1017,    49,   205,   652,    68,    69,
     392,   491,   744,   205,   375,   386,   377,   855,   378,   104,
     517,   205,    46,    70,   518,   121,   519,   102,   767,    71,
     459,    72,    73,   648,   463,   356,   465,   365,   873,   103,
     442,   357,   358,   359,   360,   361,   564,   205,  1036,   490,
     653,   362,   363,   206,   207,  1042,  1043,  1044,    58,  1045,
    1046,   487,    50,   285,  1047,   383,   809,  1050,   584,   491,
     492,   428,   364,   388,   389,   390,   391,  1064,   595,   816,
     416,   105,   384,   385,   821,   392,   695,   696,   825,  1065,
     827,   828,    59,   611,   365,   832,   580,   366,   888,    60,
     697,   673,   674,    99,  1082,   841,   429,   698,   581,   512,
      74,  1083,   107,   227,  1085,  1086,  1087,  1088,   513,    75,
     675,    76,   514,   636,   106,   290,   291,   292,   293,   946,
     396,   515,   397,   290,   291,   292,   293,   108,   463,  1097,
     465,   662,   467,   290,   291,   292,   293,   695,   696,   290,
     291,   292,   293,  1105,   109,  1107,   742,  1109,   152,  1111,
     395,   697,    68,    69,   112,   487,   837,  1113,   698,  1114,
     566,  1115,   583,  1116,   122,  1117,    46,    70,   344,   345,
     613,   614,   615,    71,   581,    72,    73,   904,   889,   890,
     459,   929,   433,    67,   434,   468,   469,   470,   471,   123,
     206,   207,   730,   594,   806,   807,   808,   891,   921,   753,
     946,   946,   946,   754,   755,   581,   925,   926,   927,   928,
     680,   157,   682,   193,   124,   934,   817,   818,   819,   571,
     206,   207,   610,   824,   635,   627,   760,   125,   572,   699,
     700,   711,    68,    69,   581,   211,   581,   838,   126,   718,
     840,   257,   930,   931,   932,   127,    46,    70,   851,   215,
     396,   573,   397,    71,   854,    72,    73,   575,   734,   736,
     574,   984,   219,    75,   741,    76,   576,   346,   347,   661,
     867,   868,   869,   870,   871,   872,   930,   931,   932,   979,
     396,   980,   397,   477,   478,   722,   936,   726,   526,   527,
     699,   700,   604,   605,   839,   220,  1010,   280,  1012,   516,
    1014,   279,  1016,   169,   186,   202,   288,   935,   937,   939,
     289,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   938,   903,   302,   905,   290,   291,   292,   293,   908,
     729,   910,   911,   266,    74,   913,   606,   607,   916,   917,
     918,   621,   622,    75,   804,    76,   301,   930,   931,   932,
     305,   309,   185,   201,   310,   311,   312,   313,   314,   315,
     654,   655,   941,   481,   715,   848,   850,   242,   144,   161,
     179,   197,  1055,   285,  1057,     1,  1059,   307,  1061,   656,
     657,   265,   930,   931,   932,   316,   901,   399,  1009,  1019,
     308,   317,   340,  1011,   318,  1013,   342,  1015,   343,   261,
     673,   674,   170,   187,   203,   216,   217,   218,   130,   985,
     348,   810,  1084,   723,   724,   992,    68,    69,   993,  1101,
    1102,   994,   349,   996,   997,   986,   987,   988,  1001,   350,
      46,    70,   267,  1004,   670,   671,   672,    71,   351,    72,
      73,   353,   309,  1039,  1040,   310,   311,   312,   313,   314,
     315,   445,   446,   447,   448,   449,   450,    68,    69,   688,
     689,   690,   691,   692,   319,   380,   394,   320,   844,   845,
     846,    46,    70,   930,   931,   932,   316,   354,    71,   406,
      72,    73,   317,   408,   431,   318,   295,   296,   297,   298,
     430,   321,   435,   322,   432,   323,   437,   438,   324,  1041,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   458,
     444,  1048,   479,   453,  1051,  1052,  1053,  1054,   325,   326,
     942,   943,   944,   327,   328,   329,   500,    75,   495,    76,
     330,   496,   331,   501,   332,   333,  1099,  1099,  1099,   505,
     334,   335,   336,   337,  1076,   309,   508,   507,   310,   311,
     312,   313,   314,   315,   510,   319,   511,   456,   320,    74,
     522,   528,   541,   542,   534,  1090,   535,  1092,    75,  1094,
      76,  1096,   543,   544,   545,   283,   537,   539,   540,   316,
     561,   562,   321,   115,   322,   317,   323,   567,   318,   324,
    1003,   568,   570,   577,   579,   585,   586,   481,  1104,   593,
    1106,   268,  1108,   590,  1110,   171,   596,   598,   597,   325,
     326,   602,  1112,   603,   327,   328,   329,   546,   609,   612,
     616,   330,   618,   331,   620,   332,   333,   624,   625,   629,
     630,   334,   335,   336,   337,   637,   309,   631,   638,   310,
     311,   312,   313,   314,   315,   639,   649,   651,   521,   660,
      68,    69,   653,   663,    68,    69,   685,   679,   319,   686,
     687,   320,   681,   683,    46,    70,   205,   694,    46,    70,
     316,    71,   684,    72,    73,    71,   317,    72,    73,   318,
     707,   708,   709,   714,   717,   321,   728,   322,   731,   323,
     732,   737,   324,   738,   357,   358,   359,   360,   361,   417,
     739,   132,   154,   173,   190,   740,   418,   419,   420,   743,
     745,   747,   325,   326,   761,   748,   749,   327,   328,   329,
     750,  -237,   188,   752,   330,   762,   331,   763,   332,   333,
     229,   244,   254,   270,   334,   335,   336,   337,   764,   309,
     765,   766,   310,   311,   312,   313,   314,   315,   768,   319,
     811,   565,   320,   769,   813,   814,    74,   815,   820,   481,
     822,    75,   823,    76,   826,    75,   829,    76,   830,   831,
     833,    68,    69,   316,   834,   842,   321,   853,   322,   317,
     323,   356,   318,   324,  -239,    46,    70,   357,   358,   359,
     360,   361,    71,  -241,    72,    73,   863,   362,   363,  -243,
     859,   860,   894,   325,   326,   481,   865,   900,   327,   328,
     329,   866,   896,   902,   906,   330,   909,   331,   912,   332,
     333,   914,   915,   919,   920,   334,   335,   336,   337,   133,
     155,   174,   191,   357,   358,   359,   360,   361,   417,   924,
     974,   973,   626,   975,   976,   418,   419,   420,   981,   977,
     983,   990,   319,  1002,  1005,   320,  1006,  1007,   230,   245,
     255,   271,   134,   156,   175,   192,   141,   158,   176,   194,
    1008,  1018,  1035,    74,  1020,  1056,  1021,  1058,  1023,   321,
    1060,   322,    75,   323,    76,  1062,   324,  1024,  1025,  1026,
    1027,   231,   246,   256,   272,   232,   247,   258,   273,  1028,
    1029,  1030,  1031,  1032,  1034,  1037,   325,   326,  1063,  1079,
    1066,   327,   328,   329,  1067,  1068,  1069,  1070,   330,  1071,
     331,  1072,   332,   333,  1080,  1073,  1074,  1075,   334,   335,
     336,   337,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   142,   159,   177,   195,
     143,   160,   178,   196,   145,   162,   180,   198,   146,   163,
     181,   199,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,  1081,  1089,  1091,   233,   248,   259,   274,   234,
     249,   260,   275,   235,   250,   262,   276,   236,   251,   263,
     277,  1093,  1095,  1098,  1103,    62,   223,   452,   304,   659,
     286,   559,   560,   945,   536,   135,   641,   727,   836,   805,
     978,   875,  1033,   922,   569,    51,   407,   454,   482,   493,
     706,   530,   381
};

static const yytype_uint16 yycheck[] =
{
     112,    69,   436,    71,   421,   208,   210,   210,   212,   212,
      86,   226,   357,   358,   804,   742,   398,   362,   363,   538,
     402,   366,   404,    19,    20,   225,    22,    68,   373,   338,
     375,   242,   377,   242,     7,    68,    74,    71,    12,   384,
     385,   118,   210,    57,   212,   299,   389,   390,    46,   118,
       9,     7,    11,     7,    13,    14,    55,   120,    17,   127,
     477,   478,   479,   111,   112,   198,    15,   412,   413,   414,
      69,    66,   417,   490,   491,   492,    25,    26,   460,   424,
     497,   808,    16,   428,    43,    44,    51,   118,    47,    54,
     223,   818,    51,    20,    21,    48,    30,   118,    48,    94,
     409,    20,    21,     7,     0,   522,   144,    66,   308,    68,
       7,   528,   171,   840,   173,   111,   112,   534,     7,   166,
     167,    70,   120,   171,   851,   173,   164,   114,   115,   116,
     117,    55,   170,   114,   115,   116,   117,   171,   112,   173,
     867,   868,   869,   870,   871,   872,   455,   120,   352,   352,
      39,    40,    41,    42,   571,   572,   573,   574,   575,   576,
     201,    27,   176,   506,   120,   228,   120,   120,   201,     3,
     120,   118,   171,   172,   173,    32,   903,   118,   905,   596,
     597,   526,   527,    32,   120,   602,   913,   604,   605,   916,
     917,   918,   609,    32,   111,   236,   613,   614,   615,    32,
     454,   178,   240,   236,    70,   178,   179,   641,   408,   168,
     421,   520,   421,  1003,   941,   174,   120,    27,    52,    53,
     219,   198,   639,   120,   178,   179,   199,   746,   201,   112,
     398,   120,    66,    67,   402,   200,   404,    57,   672,    73,
      71,    75,    76,   239,   171,   142,   173,   201,   767,    69,
     237,   148,   149,   150,   151,   152,   237,   120,   985,   178,
      70,   158,   159,   111,   112,   992,   993,   994,   118,   996,
     997,   198,   231,    71,  1001,   179,   693,  1004,   474,   198,
     199,   144,   179,   207,   208,   209,   210,   229,   484,   706,
     179,   112,   196,   197,   711,   219,    52,    53,   715,   241,
     717,   718,   118,   499,   201,   722,   120,   204,    55,   118,
      66,    45,    46,   111,  1041,   732,   179,    73,   132,   111,
     154,  1048,   112,     3,  1051,  1052,  1053,  1054,   120,   163,
      64,   165,   111,   529,   120,   192,   193,   194,   195,   861,
     171,   120,   173,   192,   193,   194,   195,   113,   171,  1076,
     173,   566,   179,   192,   193,   194,   195,    52,    53,   192,
     193,   194,   195,  1090,   236,  1092,   637,  1094,   202,  1096,
      71,    66,    52,    53,   226,   198,    71,  1104,    73,  1106,
     456,  1108,   120,  1110,    54,  1112,    66,    67,   111,   112,
     502,   503,   504,    73,   132,    75,    76,   814,   145,   146,
      71,   120,   111,     3,   113,   232,   233,   234,   235,    54,
     111,   112,   627,   120,   685,   686,   687,   164,   835,    24,
     942,   943,   944,    28,    29,   132,   843,   844,   845,   846,
     582,    64,   584,    66,    54,   120,   707,   708,   709,   111,
     111,   112,   120,   714,   120,   521,   661,    16,   120,   205,
     206,   603,    52,    53,   132,   113,   132,   728,    54,   611,
     731,    94,   181,   182,   183,    54,    66,    67,   739,   228,
     171,   111,   173,    73,   745,    75,    76,   111,   630,   631,
     120,   898,   119,   163,   636,   165,   120,   111,   112,   565,
     761,   762,   763,   764,   765,   766,   181,   182,   183,   111,
     171,   113,   173,   221,   222,   617,   120,   619,    40,    41,
     205,   206,   111,   112,   729,   118,   933,    52,   935,   901,
     937,    10,   939,    64,    65,    66,   120,   848,   849,   850,
     112,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   120,   813,   120,   815,   192,   193,   194,   195,   820,
     626,   822,   823,    94,   154,   826,   111,   112,   829,   830,
     831,    58,    59,   163,   676,   165,   112,   181,   182,   183,
     224,    31,    65,    66,    34,    35,    36,    37,    38,    39,
      25,    26,   853,   120,   121,   737,   738,     3,    63,    64,
      65,    66,  1009,    71,  1011,     8,  1013,   236,  1015,    25,
      26,    94,   181,   182,   183,    65,   810,   810,   929,   954,
     236,    71,    50,   934,    74,   936,   112,   938,   112,    94,
      45,    46,    64,    65,    66,   155,   156,   157,     3,   900,
     112,   699,  1049,   234,   235,   906,    52,    53,   909,  1080,
    1081,   912,   112,   914,   915,   216,   217,   218,   919,   111,
      66,    67,    94,   924,    61,    62,    63,    73,   112,    75,
      76,   111,    31,   987,   988,    34,    35,    36,    37,    38,
      39,   185,   186,   187,   188,   189,   190,    52,    53,   180,
     181,   182,   183,   184,   144,   201,    73,   147,   734,   735,
     736,    66,    67,   181,   182,   183,    65,   111,    73,    48,
      75,    76,    71,   236,    23,    74,   114,   115,   116,   117,
     111,   171,   177,   173,   120,   175,   120,    56,   178,   990,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   120,
     167,  1002,   213,   225,  1005,  1006,  1007,  1008,   198,   199,
     856,   857,   858,   203,   204,   205,   111,   163,   200,   165,
     210,   200,   212,    49,   214,   215,  1079,  1080,  1081,    60,
     220,   221,   222,   223,  1035,    31,    57,   226,    34,    35,
      36,    37,    38,    39,   120,   144,   120,   237,   147,   154,
      31,    31,    15,    16,   144,  1056,   120,  1058,   163,  1060,
     165,  1062,    25,    26,    27,   176,   111,   180,   111,    65,
     120,   191,   171,    68,   173,    71,   175,    48,    74,   178,
     922,   120,   112,    60,   120,   120,   120,   120,  1089,     5,
    1091,     3,  1093,   120,  1095,     3,   120,   120,    74,   198,
     199,    74,  1103,   120,   203,   204,   205,    70,   120,   120,
     211,   210,   220,   212,   120,   214,   215,    48,   180,   120,
     120,   220,   221,   222,   223,     5,    31,   120,   120,    34,
      35,    36,    37,    38,    39,   120,   111,    70,   237,   111,
      52,    53,    70,   180,    52,    53,     5,   121,   144,     5,
       5,   147,   121,   121,    66,    67,   120,    48,    66,    67,
      65,    73,   121,    75,    76,    73,    71,    75,    76,    74,
       5,     5,     5,     5,   121,   171,     5,   173,     5,   175,
     121,   120,   178,   120,   148,   149,   150,   151,   152,   153,
       5,    63,    64,    65,    66,   121,   160,   161,   162,   121,
       5,   112,   198,   199,     5,   112,   112,   203,   204,   205,
     238,   111,     3,   111,   210,     5,   212,     5,   214,   215,
      92,    93,    94,    95,   220,   221,   222,   223,     5,    31,
       5,     5,    34,    35,    36,    37,    38,    39,   111,   144,
       4,   237,   147,   111,     5,   111,   154,     5,     5,   120,
       5,   163,     5,   165,     5,   163,     5,   165,     5,     5,
     111,    52,    53,    65,    72,   180,   171,     5,   173,    71,
     175,   142,    74,   178,   111,    66,    67,   148,   149,   150,
     151,   152,    73,   111,    75,    76,    18,   158,   159,   111,
     111,   111,   227,   198,   199,   120,   112,     5,   203,   204,
     205,   112,   169,     3,     5,   210,     5,   212,     5,   214,
     215,     5,     5,     5,   120,   220,   221,   222,   223,    63,
      64,    65,    66,   148,   149,   150,   151,   152,   153,     5,
     111,     6,   237,   111,   120,   160,   161,   162,   230,   112,
     111,     5,   144,     5,     5,   147,     5,     5,    92,    93,
      94,    95,    63,    64,    65,    66,    63,    64,    65,    66,
       5,   111,     5,   154,   112,     5,   111,     5,   120,   171,
       5,   173,   163,   175,   165,     5,   178,   120,   120,   120,
     120,    92,    93,    94,    95,    92,    93,    94,    95,   120,
     120,   120,   120,   120,   120,   120,   198,   199,   120,     5,
     121,   203,   204,   205,   121,   121,   121,   121,   210,   121,
     212,   121,   214,   215,     5,   121,   121,   121,   220,   221,
     222,   223,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    63,    64,    65,    66,
      63,    64,    65,    66,    63,    64,    65,    66,    63,    64,
      65,    66,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     5,     5,     5,    92,    93,    94,    95,    92,
      93,    94,    95,    92,    93,    94,    95,    92,    93,    94,
      95,     5,     5,    48,     5,    12,    77,   304,   113,   550,
     100,   441,   441,   859,   432,    63,   536,   623,   727,   677,
     892,   772,   973,   836,   460,     1,   221,   307,   367,   376,
     598,   421,   152
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   243,   244,   245,   264,   265,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   279,   280,   283,   308,   309,
     310,   311,   312,   313,   314,   315,   316,     9,    11,    13,
      14,    17,    43,    44,    47,    51,    66,    68,   168,   174,
     231,   367,   118,   118,   118,   118,   118,   118,   118,   118,
     118,     0,   245,   246,   248,   250,   252,     3,    52,    53,
      67,    73,    75,    76,   154,   163,   165,   254,   255,   317,
     318,   319,   327,   329,   363,   366,   367,   368,   374,   375,
     376,   377,   256,   258,   260,   262,    12,   112,   120,   111,
     281,   282,    57,    69,   112,   112,   120,   112,   113,   236,
     166,   167,   226,   276,   277,    68,   201,   236,   371,    51,
      54,   200,    54,    54,    54,    16,    54,    54,    16,    30,
       3,   247,   317,   318,   319,   327,   328,   354,   355,   356,
     357,   363,   366,   374,   375,   376,   377,   381,   417,   418,
     419,     3,   202,   249,   317,   318,   319,   354,   363,   366,
     374,   375,   376,   377,   396,   407,   413,   414,   416,   417,
     419,     3,   251,   317,   318,   319,   363,   366,   374,   375,
     376,   377,   409,   410,   411,   413,   417,   419,     3,   253,
     317,   318,   319,   354,   363,   366,   374,   375,   376,   377,
     396,   413,   417,   419,     7,   120,   111,   112,   320,   322,
     320,   113,   320,   120,   228,   228,   155,   156,   157,   119,
     118,   378,   379,   255,   201,   236,   371,     3,   257,   317,
     318,   319,   363,   366,   374,   376,   377,   420,   421,   422,
     423,   424,     3,   259,   317,   318,   319,   363,   366,   374,
     376,   377,   384,   261,   317,   318,   319,   354,   363,   366,
     374,   375,   376,   377,   396,   413,   417,   419,     3,   263,
     317,   318,   319,   363,   366,   374,   376,   377,   380,    10,
      52,   266,    57,   176,   324,    71,   282,   361,   120,   112,
     192,   193,   194,   195,   412,   114,   115,   116,   117,   372,
     373,   112,   120,   361,   277,   224,   278,   236,   236,    31,
      34,    35,    36,    37,    38,    39,    65,    71,    74,   144,
     147,   171,   173,   175,   178,   198,   199,   203,   204,   205,
     210,   212,   214,   215,   220,   221,   222,   223,   369,   370,
      50,   426,   112,   112,   111,   112,   111,   112,   112,   112,
     111,   112,   320,   111,   111,     7,   142,   148,   149,   150,
     151,   152,   158,   159,   179,   201,   204,   382,   383,   387,
     390,   392,   393,   394,     7,   178,   179,   199,   201,   415,
     201,   415,     7,   179,   196,   197,   179,    55,   207,   208,
     209,   210,   219,   330,    73,    71,   171,   173,   321,   322,
     323,   359,   321,   359,   321,   359,    48,   379,   236,   369,
     426,     7,    39,    40,    41,    42,   179,   153,   160,   161,
     162,   385,   386,   388,   389,   390,   391,   393,   144,   179,
     111,    23,   120,   111,   113,   177,   325,   120,    56,   326,
     284,   286,   237,   373,   167,   185,   186,   187,   188,   189,
     190,   336,   278,   225,   372,   369,   237,   370,   120,    71,
     321,   360,    69,   171,   172,   173,   332,   179,   232,   233,
     234,   235,   397,   397,   397,   397,   397,   221,   222,   213,
     397,   120,   383,   404,   397,    20,    21,   198,   408,   397,
     178,   198,   199,   408,   397,   200,   200,   223,   397,   397,
     111,    49,   358,   358,   358,    60,   425,   226,    57,   331,
     120,   120,   111,   120,   111,   120,   323,   359,   359,   359,
     369,   237,    31,   397,   397,   397,    40,    41,    31,   397,
     386,   404,   397,   397,   144,   120,   324,   111,   336,   180,
     111,    15,    16,    25,    26,    27,    70,   285,   288,   291,
     292,   293,   294,   295,   296,   300,    25,    26,   287,   293,
     300,   120,   191,   335,   237,   237,   371,    48,   120,   360,
     112,   111,   120,   111,   120,   111,   120,    60,   334,   120,
     120,   132,   395,   120,   395,   120,   120,   404,   404,   404,
     120,    48,   120,     5,   120,   395,   120,    74,   120,   404,
     404,   404,    74,   120,   111,   112,   111,   112,   404,   120,
     120,   395,   120,   361,   361,   361,   211,   358,   220,   364,
     120,    58,    59,   333,    48,   180,   237,   371,   404,   120,
     120,   120,   397,   397,   404,   120,   395,     5,   120,   120,
     404,   325,   335,    19,    20,    22,   111,   112,   239,   111,
      27,    70,    27,    70,    25,    26,    25,    26,   289,   289,
     111,   371,   426,   180,   404,   404,   404,   404,   404,   404,
      61,    62,    63,    45,    46,    64,   337,   338,   339,   121,
     412,   121,   412,   121,   121,     5,     5,     5,   180,   181,
     182,   183,   184,   398,    48,    52,    53,    66,    73,   205,
     206,   401,   402,   404,    46,   404,   398,     5,     5,     5,
     404,   412,   404,   404,     5,   121,   404,   121,   412,   404,
     404,   404,   361,   234,   235,   365,   361,   334,     5,   371,
     426,     5,   121,    32,   412,    32,   412,   120,   120,     5,
     121,   412,   402,   121,   404,     5,   336,   112,   112,   112,
     238,   301,   111,    24,    28,    29,   290,   297,   298,   299,
     426,     5,     5,     5,     5,     5,     5,   336,   111,   111,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   361,   339,   402,   402,   402,   404,
     320,     4,   406,     5,   111,     5,   404,   402,   402,   402,
       5,   404,     5,     5,   402,   404,     5,   404,   404,     5,
       5,     5,   404,   111,    72,   362,   337,    71,   402,   426,
     402,   404,   180,   400,   400,   400,   400,    32,   412,    32,
     412,   402,   406,     5,   402,   335,   302,   303,   304,   111,
     111,   305,   306,    18,   307,   112,   112,   402,   402,   402,
     402,   402,   402,   335,   344,   344,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   352,   353,    55,   145,
     146,   164,   340,   341,   227,   342,   169,   351,   362,   406,
       5,   321,     3,   402,   404,   402,     5,   406,   402,     5,
     402,   402,     5,   402,     5,     5,   402,   402,   402,     5,
     120,   404,   364,   406,     5,   404,   404,   404,   404,   120,
     181,   182,   183,   399,   120,   399,   120,   399,   120,   399,
     406,   402,   305,   305,   305,   307,   306,   406,   406,   406,
     406,   406,   406,    74,   144,   164,   170,   240,   345,   346,
     347,   348,   349,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,     6,   111,   111,   120,   112,   341,   111,
     113,   230,   343,   111,   404,   402,   216,   217,   218,   406,
       5,   406,   402,   402,   402,   406,   402,   402,   406,   406,
     406,   402,     5,   361,   402,     5,     5,     5,     5,   399,
     404,   399,   404,   399,   404,   399,   404,   406,   111,   397,
     112,   111,   350,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   353,   120,     5,   406,   120,   405,   405,
     405,   402,   406,   406,   406,   406,   406,   406,   402,   362,
     406,   402,   402,   402,   402,   404,     5,   404,     5,   404,
       5,   404,     5,   120,   229,   241,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   402,    48,   120,     5,
       5,     5,   406,   406,   404,   406,   406,   406,   406,     5,
     402,     5,   402,     5,   402,     5,   402,   406,    48,   401,
     403,   403,   403,     5,   402,   406,   402,   406,   402,   406,
     402,   406,   402,   406,   406,   406,   406,   406
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   242,   243,   243,   244,   244,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   246,
     246,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   250,
     250,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   252,   252,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   256,   256,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     258,   258,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   260,   260,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   262,   262,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   264,   264,
     264,   265,   266,   266,   267,   268,   269,   270,   270,   270,
     271,   271,   271,   272,   273,   274,   275,   276,   276,   277,
     278,   278,   279,   280,   281,   281,   282,   282,   283,   283,
     284,   284,   285,   285,   285,   285,   286,   286,   287,   287,
     288,   288,   289,   289,   290,   290,   290,   291,   291,   292,
     292,   293,   293,   294,   294,   295,   295,   296,   297,   298,
     299,   300,   300,   300,   300,   300,   300,   301,   300,   302,
     300,   303,   300,   304,   300,   300,   305,   305,   306,   307,
     307,   308,   308,   308,   308,   309,   310,   310,   311,   312,
     313,   313,   314,   315,   316,   316,   317,   317,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     323,   323,   324,   324,   324,   325,   325,   326,   326,   327,
     327,   328,   329,   329,   329,   329,   330,   330,   331,   332,
     333,   333,   333,   334,   334,   334,   334,   335,   335,   336,
     336,   336,   336,   336,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   338,   338,   339,   339,   340,   340,   341,   341,
     341,   341,   342,   342,   342,   343,   343,   344,   344,   345,
     345,   345,   345,   345,   346,   347,   348,   349,   350,   350,
     351,   352,   352,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   354,   355,   356,   357,   358,   358,   359,
     359,   360,   360,   361,   361,   362,   362,   363,   363,   364,
     364,   365,   365,   366,   366,   366,   366,   367,   368,   369,
     369,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     371,   371,   372,   372,   373,   373,   373,   373,   374,   374,
     374,   375,   375,   375,   376,   377,   378,   378,   379,   380,
     380,   381,   382,   382,   383,   383,   383,   383,   384,   385,
     385,   386,   386,   386,   386,   387,   387,   388,   389,   389,
     389,   390,   390,   390,   390,   391,   391,   392,   393,   394,
     394,   394,   395,   395,   396,   396,   397,   397,   397,   397,
     397,   397,   398,   398,   398,   398,   398,   398,   399,   399,
     399,   400,   400,   401,   401,   401,   401,   401,   401,   401,
     402,   403,   404,   404,   404,   405,   405,   405,   406,   406,
     406,   406,   407,   407,   407,   408,   408,   408,   409,   409,
     410,   410,   411,   412,   412,   412,   412,   412,   413,   413,
     414,   414,   414,   414,   415,   415,   416,   416,   417,   417,
     418,   418,   419,   419,   420,   421,   422,   423,   423,   423,
     423,   423,   423,   424,   424,   424,   424,   424,   424,   425,
     426,   426,   426
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
       2,     2,     0,     2,     2,     0,     2,     0,     2,    14,
      11,    11,    10,     9,     9,     9,     0,     2,     2,     2,
       0,     1,     1,     0,     2,     4,     2,     0,     2,     0,
       1,     1,     1,     1,     1,     1,     0,     3,     2,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     1,     1,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     0,     2,     2,     0,     2,     0,     2,     1,
       1,     1,     1,     3,     3,     2,     2,     2,     0,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     7,     6,     6,     9,     0,     2,     0,
       3,     0,     3,     0,     3,     0,     2,     7,     7,     0,
       3,     1,     1,     3,     6,     7,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     1,     1,     1,     1,     3,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     8,
       6,     6,     1,     2,     1,     1,     1,     1,     6,     1,
       2,     1,     1,     1,     1,     4,     4,     4,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     3,     3,     1,
       1,     1,     1,     1,     9,     6,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     0,     2,     3,     0,     2,     3,     0,     6,
       6,     6,     8,    10,     7,     0,     1,     1,     8,     9,
       9,     9,     6,     0,     1,     1,     1,     1,     8,     7,
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
        case 168:
#line 544 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 2847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 548 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 551 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2864 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2877 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 567 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2883 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 568 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 571 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2899 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 578 "src/p.y" /* yacc.c:1646  */
    {
                    Run.init = true;
                  }
#line 2907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 583 "src/p.y" /* yacc.c:1646  */
    {
                    Run.fipsEnabled = true;
                  }
#line 2915 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2928 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 596 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 599 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2944 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 604 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 2952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 607 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2961 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 611 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 617 "src/p.y" /* yacc.c:1646  */
    {
                    Run.idfile = (yyvsp[0].string);
                  }
#line 2978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 622 "src/p.y" /* yacc.c:1646  */
    {
                    Run.statefile = (yyvsp[0].string);
                  }
#line 2986 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 627 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 2997 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 642 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname(((yyvsp[-3].url))->hostname);
                    addmmonit((yyvsp[-3].url), (yyvsp[-2].number), (yyvsp[-1].number), (yyvsp[0].string));
                  }
#line 3006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 649 "src/p.y" /* yacc.c:1646  */
    {
                    Run.dommonitcredentials = false;
                  }
#line 3014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 654 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3024 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3036 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3059 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3081 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3090 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 739 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3107 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 772 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 775 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 788 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 793 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3155 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 810 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3181 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3194 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3203 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 825 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 829 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3221 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 833 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 837 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 841 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 844 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 855 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3281 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 858 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3290 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 862 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3298 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 865 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 876 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3317 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 882 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3323 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 883 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3329 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 889 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3345 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3357 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3369 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 908 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3377 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 913 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3385 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 916 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3393 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 921 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 926 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname((yyvsp[0].string));
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3410 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 940 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3432 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 958 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3455 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3467 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3479 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 982 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 987 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 990 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 996 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 999 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1012 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1013 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1016 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3545 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1017 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1018 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid(NULL, (yyvsp[0].number)) ); }
#line 3557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1019 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid(NULL, (yyvsp[0].number)) ); }
#line 3563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1022 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3569 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1023 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1024 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1027 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1028 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1031 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1032 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3605 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1035 "src/p.y" /* yacc.c:1646  */
    {
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1044 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-7].url));
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1053 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-5].number);
                        portset.retry = (yyvsp[-4].number);
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 3642 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1061 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-6].number);
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 3655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1069 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1077 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1085 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1095 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 3702 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1098 "src/p.y" /* yacc.c:1646  */
    {
                        check_hostname((yyvsp[0].string));
                        portset.hostname = (yyvsp[0].string);
                  }
#line 3711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1104 "src/p.y" /* yacc.c:1646  */
    {
                        portset.port = (yyvsp[0].number);
                  }
#line 3719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                        portset.pathname = (yyvsp[0].string);
                        portset.family = Socket_Unix;
                  }
#line 3728 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1115 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip;
                  }
#line 3736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1118 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 3744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1121 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 3752 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1126 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3760 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1129 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1132 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                    portset.SSL.use_ssl = true;
                    portset.SSL.version = (yyvsp[-1].number);
                    if (portset.SSL.version == SSL_Disabled)
                      portset.SSL.version = SSL_Auto;
                    portset.SSL.certmd5 = (yyvsp[0].string);
                  }
#line 3781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1140 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 3789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1145 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 3797 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1148 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1153 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Disabled; }
#line 3811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1154 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V2; }
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1155 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V3; }
#line 3823 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1156 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_TLSV1; }
#line 3829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_TLSV11;
                }
#line 3840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1165 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_TLSV12;
                }
#line 3851 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1171 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Auto; }
#line 3857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1174 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1177 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1180 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1183 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1186 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 3897 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1189 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 3905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1192 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 3913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1195 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 3924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1201 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3932 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1204 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1210 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 3951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1213 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 3959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1216 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 3967 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1219 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 3975 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1222 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 3983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1225 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 3991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1228 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 3999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1231 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = Socket_Udp;
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1235 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1238 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1241 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                    portset.SSL.use_ssl = true;
                    portset.SSL.version = SSL_Auto;
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1247 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1250 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1253 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4062 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1259 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1262 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4078 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1265 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4086 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1268 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1271 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4110 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1277 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4118 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1283 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4134 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1286 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1289 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1292 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 4158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1301 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1304 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1313 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string);
                  }
#line 4182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1316 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1319 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4198 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1322 "src/p.y" /* yacc.c:1646  */
    {
                    portset.version = (yyvsp[0].number);
                  }
#line 4206 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1328 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4214 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1331 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1337 "src/p.y" /* yacc.c:1646  */
    {
                     portset.maxforward = verifyMaxForward((yyvsp[0].number));
                   }
#line 4230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1353 "src/p.y" /* yacc.c:1646  */
    {
                    portset.operator = (yyvsp[-1].number);
                    portset.status = (yyvsp[0].number);
                  }
#line 4239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1359 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1365 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_checksum = (yyvsp[0].string);
                  }
#line 4256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1370 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1376 "src/p.y" /* yacc.c:1646  */
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[0].string));
                 }
#line 4275 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1384 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4283 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1393 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.loglimit = (yyvsp[-1].number);
                  }
#line 4292 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1397 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.closelimit = (yyvsp[-1].number);
                  }
#line 4301 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1401 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1405 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1409 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.replylimit = (yyvsp[-1].number);
                  }
#line 4328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1413 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1417 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.startlimit = (yyvsp[-1].number);
                  }
#line 4346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1421 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4355 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1425 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1435 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4382 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1442 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4391 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1448 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1454 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4411 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1461 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1464 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1469 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1472 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1477 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1480 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1485 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1488 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1493 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1501 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1507 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1516 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4522 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1522 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1523 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4534 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1526 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1530 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1533 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1537 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4568 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1542 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1545 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1552 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1553 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 4592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1554 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 4598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1555 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1556 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1557 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1558 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1559 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1560 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1561 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1562 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1563 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4652 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1564 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4658 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1565 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 4664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1566 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1567 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 4676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1568 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 4682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1569 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4688 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1570 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1571 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4700 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1572 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1573 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 4712 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1574 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4718 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1575 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 4724 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1576 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4730 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1577 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1578 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4742 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1579 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4748 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1580 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4754 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1591 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4760 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1592 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4766 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1593 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4772 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1594 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4778 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1597 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1601 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4796 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1605 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1611 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 4813 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1614 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 4821 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1617 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 4830 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1623 "src/p.y" /* yacc.c:1646  */
    { addservicegroup((yyvsp[0].string)); FREE((yyvsp[0].string));}
#line 4836 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1634 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4842 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1637 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 4854 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1644 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 4866 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1653 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4875 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1669 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4884 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1685 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1690 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4904 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1697 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4914 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1704 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 4920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1705 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 4926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1706 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 4932 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1709 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4942 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1714 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1719 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1724 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1731 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4982 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1736 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1743 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 5002 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1750 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 5012 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1757 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5018 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1758 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1759 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5030 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1762 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5036 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1763 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5042 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1766 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, false);
                  }
#line 5053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1772 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset, true);
                  }
#line 5063 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1779 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1780 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1781 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5081 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1782 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5087 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1783 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5093 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1784 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1787 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5105 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1788 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1789 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1790 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1791 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1792 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5135 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1795 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1796 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1797 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1799 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5159 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1800 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1802 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Alert; }
#line 5171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1803 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5177 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1804 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5183 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1805 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Restart; }
#line 5189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1806 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Start; }
#line 5195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1807 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Stop; }
#line 5201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1808 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Unmonitor; }
#line 5207 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1811 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1820 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1830 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1836 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1847 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1853 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1863 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1866 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1869 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1872 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1877 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1882 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1888 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5341 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1894 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5347 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1895 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5353 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1896 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1899 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5371 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1906 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1915 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1924 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5409 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 5418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1939 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1940 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1941 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 5436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1942 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 5442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1943 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 5448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1946 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5458 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1951 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 5468 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1958 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1965 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1971 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 5503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1978 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 5514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1986 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 5522 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 5530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1995 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2001 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 5551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2008 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2014 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2021 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2027 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2034 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2040 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2047 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 5623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2053 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 5632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2058 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 5643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2066 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2074 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2082 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2090 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2098 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5708 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2106 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2116 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5734 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2124 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2132 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5760 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2140 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5773 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2148 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2156 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2166 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 5805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2169 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 5811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2170 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 5817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2171 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 5823 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 5827 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2174 "src/p.y" /* yacc.c:1906  */



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
        portset.type = Socket_Tcp;
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
        portset.type = Socket_Tcp;
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

