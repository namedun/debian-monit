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
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend();
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);


#line 328 "src/y.tab.c" /* yacc.c:339  */

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
    TFREE = 453,
    PERMISSION = 454,
    SIZE = 455,
    MATCH = 456,
    NOT = 457,
    IGNORE = 458,
    ACTION = 459,
    UPTIME = 460,
    EXEC = 461,
    UNMONITOR = 462,
    PING = 463,
    PING4 = 464,
    PING6 = 465,
    ICMP = 466,
    ICMPECHO = 467,
    NONEXIST = 468,
    EXIST = 469,
    INVALID = 470,
    DATA = 471,
    RECOVERED = 472,
    PASSED = 473,
    SUCCEEDED = 474,
    URL = 475,
    CONTENT = 476,
    PID = 477,
    PPID = 478,
    FSFLAG = 479,
    REGISTER = 480,
    CREDENTIALS = 481,
    URLOBJECT = 482,
    TARGET = 483,
    TIMESPEC = 484,
    HTTPHEADER = 485,
    MAXFORWARD = 486,
    FIPS = 487,
    GREATER = 488,
    LESS = 489,
    EQUAL = 490,
    NOTEQUAL = 491
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
#define TFREE 453
#define PERMISSION 454
#define SIZE 455
#define MATCH 456
#define NOT 457
#define IGNORE 458
#define ACTION 459
#define UPTIME 460
#define EXEC 461
#define UNMONITOR 462
#define PING 463
#define PING4 464
#define PING6 465
#define ICMP 466
#define ICMPECHO 467
#define NONEXIST 468
#define EXIST 469
#define INVALID 470
#define DATA 471
#define RECOVERED 472
#define PASSED 473
#define SUCCEEDED 474
#define URL 475
#define CONTENT 476
#define PID 477
#define PPID 478
#define FSFLAG 479
#define REGISTER 480
#define CREDENTIALS 481
#define URLOBJECT 482
#define TARGET 483
#define TIMESPEC 484
#define HTTPHEADER 485
#define MAXFORWARD 486
#define FIPS 487
#define GREATER 488
#define LESS 489
#define EQUAL 490
#define NOTEQUAL 491

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 288 "src/p.y" /* yacc.c:355  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 847 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 862 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  243
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  185
/* YYNRULES -- Number of rules.  */
#define YYNRULES  596
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   491

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
       2,     2,     2,     2,     2,     2,     2,     2,   239,     2,
       2,     2,     2,     2,   240,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   241,     2,   242,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   237,     2,   238,     2,     2,     2,     2,
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
     235,   236
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   335,   335,   336,   339,   340,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   368,
     369,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     393,   394,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   416,
     417,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   437,   438,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   457,   458,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   474,   475,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     493,   494,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   508,   509,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   528,   529,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   543,   547,
     550,   556,   566,   567,   570,   577,   582,   587,   595,   598,
     603,   606,   610,   616,   621,   626,   634,   637,   638,   641,
     646,   647,   652,   659,   668,   669,   672,   689,   707,   711,
     717,   718,   721,   722,   723,   724,   727,   728,   731,   732,
     735,   738,   751,   752,   755,   756,   757,   760,   761,   764,
     765,   768,   771,   776,   777,   780,   781,   784,   789,   794,
     801,   806,   809,   817,   821,   825,   829,   833,   833,   840,
     840,   847,   847,   854,   854,   861,   868,   869,   872,   878,
     879,   882,   885,   888,   895,   904,   909,   912,   917,   922,
     927,   935,   941,   953,   958,   965,   974,   977,   982,   985,
     991,   994,   999,  1000,  1003,  1004,  1007,  1008,  1011,  1012,
    1013,  1014,  1017,  1018,  1019,  1022,  1023,  1026,  1027,  1030,
    1039,  1048,  1056,  1064,  1072,  1080,  1090,  1093,  1098,  1103,
    1109,  1112,  1115,  1120,  1123,  1126,  1134,  1139,  1142,  1147,
    1148,  1149,  1150,  1151,  1158,  1165,  1168,  1171,  1174,  1177,
    1180,  1183,  1186,  1189,  1195,  1198,  1204,  1207,  1210,  1213,
    1216,  1219,  1222,  1225,  1229,  1232,  1235,  1241,  1244,  1247,
    1253,  1256,  1259,  1262,  1265,  1268,  1271,  1274,  1277,  1280,
    1283,  1286,  1291,  1292,  1295,  1298,  1303,  1304,  1307,  1310,
    1313,  1316,  1321,  1322,  1325,  1330,  1331,  1336,  1337,  1340,
    1341,  1342,  1343,  1344,  1347,  1353,  1359,  1364,  1369,  1370,
    1378,  1383,  1384,  1387,  1391,  1395,  1399,  1403,  1407,  1411,
    1415,  1419,  1423,  1429,  1436,  1442,  1448,  1455,  1458,  1463,
    1466,  1471,  1474,  1479,  1482,  1487,  1490,  1495,  1501,  1509,
    1510,  1516,  1517,  1520,  1524,  1527,  1531,  1536,  1539,  1542,
    1543,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,
    1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,  1564,
    1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,  1574,
    1577,  1578,  1581,  1582,  1585,  1586,  1587,  1588,  1591,  1595,
    1599,  1605,  1608,  1611,  1617,  1621,  1624,  1625,  1628,  1631,
    1638,  1647,  1653,  1654,  1657,  1658,  1659,  1660,  1663,  1669,
    1670,  1673,  1674,  1675,  1676,  1679,  1684,  1691,  1698,  1699,
    1700,  1703,  1708,  1713,  1718,  1725,  1730,  1737,  1744,  1751,
    1752,  1753,  1756,  1757,  1760,  1766,  1773,  1774,  1775,  1776,
    1777,  1778,  1781,  1782,  1783,  1784,  1785,  1786,  1789,  1790,
    1791,  1793,  1794,  1796,  1797,  1798,  1799,  1800,  1801,  1802,
    1805,  1814,  1823,  1824,  1830,  1840,  1841,  1847,  1857,  1860,
    1863,  1866,  1871,  1875,  1882,  1888,  1889,  1890,  1893,  1900,
    1907,  1914,  1923,  1932,  1939,  1948,  1957,  1963,  1964,  1965,
    1966,  1967,  1970,  1975,  1982,  1989,  1995,  2002,  2010,  2013,
    2019,  2025,  2032,  2038,  2045,  2051,  2058,  2064,  2071,  2077,
    2082,  2090,  2098,  2106,  2114,  2122,  2130,  2140,  2148,  2156,
    2164,  2172,  2180,  2190,  2193,  2194,  2195
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
  "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE", "TFREE",
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
     485,   486,   487,   488,   489,   490,   491,   123,   125,    58,
      64,    91,    93
};
# endif

#define YYPACT_NINF -801

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-801)))

#define YYTABLE_NINF -244

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     527,    39,   -20,   -17,    -6,     1,    24,    26,    67,    72,
      97,   134,   527,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   294,  -801,  -801,  -801,  -801,    35,     7,   145,
     322,  -801,    57,   124,   122,   149,   156,    52,   125,    75,
    -801,   -29,     0,   240,   256,   328,   291,  -801,   333,   348,
      33,  -801,  -801,   310,    65,   347,   691,    17,   237,   237,
     276,   237,   -80,   167,   571,   285,   293,   294,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,   -13,  -801,  -801,  -801,
    -801,  -801,   305,   702,   691,   805,   409,  -801,   369,   -37,
     106,  -801,   338,   388,  -801,  -801,   440,  -801,  -801,   598,
     404,   340,   449,    75,   297,   281,   287,  1084,   477,   417,
     419,   384,   464,   425,   441,   444,   454,   237,   458,   469,
      96,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,    25,   349,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,     9,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,    16,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,   107,   485,  -801,  -801,   344,  -801,
     344,  -801,   344,   552,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,   293,  -801,  -801,   374,  1084,   477,    55,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   668,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   -53,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   498,
     608,  -801,   517,    -2,   462,   528,  -801,   594,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,    50,
    -801,   519,  -801,   532,   297,   465,  -801,   598,  1084,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   525,  -801,
     564,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   379,  -801,  -801,    91,   537,   537,   537,  -801,
    -801,  -801,   537,   537,   365,   474,   537,   869,  -801,  -801,
    -801,  -801,  -801,   537,    94,   537,    53,   537,   474,   494,
    -801,   500,   234,  -124,   407,   446,   -97,   582,   650,   650,
     650,   663,   510,   685,   619,   625,   176,   201,    99,  -801,
    -801,  -801,    99,  -801,    99,  -801,  -801,  -801,  1084,   775,
    -801,   725,   537,   537,   537,   557,   731,   537,  -801,  -801,
    -801,   781,  -801,  -801,   537,  -801,  -801,  -801,   537,   621,
    -801,   654,   609,  -801,  -801,   696,   532,   635,   724,  -801,
     451,    63,  -801,  -801,   721,  -801,  -801,  -801,  -801,  -801,
    -801,   653,  -801,  -801,   168,   889,   780,  -801,   807,   746,
     103,  -801,   761,   248,   253,   254,   814,  -801,  -801,  -801,
    -801,  -801,   756,   -12,   329,   757,   759,   762,   762,   762,
     773,    31,  -801,   890,   342,  -801,  -801,   777,   825,   785,
     762,   762,   762,   826,   787,   492,   495,   762,   537,   789,
     537,   351,  -801,   791,   449,   449,   449,   701,   650,   694,
     797,   587,   868,   738,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   970,   780,   762,   801,   819,   820,   537,   537,
     762,   367,  -801,   939,   827,   829,   762,  -801,   462,  -801,
     653,  -801,  -801,    11,   834,    58,    60,   645,   652,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   881,   882,
    -801,  -801,  -801,  -801,   844,  -801,  -801,   780,   477,  -801,
     776,  -801,  -801,   762,   762,   762,   762,   762,   762,   672,
     408,  -801,   836,  -801,   440,   837,   440,   838,   840,   957,
     964,   966,   703,  -801,   924,   378,  -801,  -801,   762,    15,
     703,   968,   971,   972,   762,   440,   762,   762,  -801,  -801,
     973,   862,   669,   406,   863,   440,  -801,   762,   762,   762,
    -801,   449,   562,   449,  -801,  -801,  -801,   814,   978,  -801,
     780,   477,   980,   866,   131,   136,   873,   874,   987,   879,
     440,   378,   891,   762,   990,   532,  -801,   898,   902,   903,
     763,   892,   905,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,   682,   682,  -801,   477,  -801,  -801,  1021,  1024,
    1025,  1026,  1027,  1029,  -801,  -801,   532,   926,   927,  1232,
     449,   755,  -801,  -801,  -801,  -801,  -801,  -801,  -801,   378,
     378,   378,  -801,  -801,  -801,  -801,  -801,   762,  -801,  -801,
    -801,  -801,  -801,   237,  -801,  -801,  1035,  1038,   929,  1044,
     762,   378,   378,   378,  1045,   762,  1054,  1056,   378,   706,
     762,  1058,   921,   440,   762,   762,  1060,  1061,  1063,   762,
    -801,  -801,   958,   998,   408,   372,   477,  -801,   378,   762,
     893,   893,   893,   893,   140,   150,   378,  -801,  -801,  1035,
    -801,  1066,   378,   653,   961,   967,   969,   979,   981,  1064,
     984,   985,  -801,  -801,  -801,  -801,  -801,  -801,   378,   378,
     378,   378,   378,   378,   653,  -801,  -801,  -801,  -801,  -801,
    1037,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,   -21,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,   851,  -801,  -801,   912,  -801,  -801,  -801,
    -801,   998,  -801,  -801,  -801,  1035,  1078,   335,  1088,  -801,
     378,   762,   378,  1093,  -801,  1035,  -801,   378,  1094,   378,
     378,  -801,   762,  1096,  1098,   378,   762,   762,  1111,  1119,
     378,   378,   378,  1120,  -801,  1006,   762,   694,  -801,  -801,
    -801,  1035,  1123,  -801,   762,   762,   762,   762,   246,   434,
     437,   447,  1035,  -801,   378,  -801,  -801,   981,   981,   981,
    1064,  -801,   981,  -801,  -801,  -801,  -801,  -801,  1035,  1035,
    1035,  1035,  1035,  1035,  -801,    32,    32,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,  1124,  -801,  1018,
    1020,  1012,  1022,   -21,  -801,   126,   908,  1031,  -801,   762,
    -801,   378,  -127,   542,  1035,  1128,  1035,   378,  -801,  -801,
     378,  -801,  -801,  1135,   378,   378,  1035,  1139,  1141,   378,
     378,  1035,  1035,  1035,   378,  -801,  1142,   449,  -801,   378,
    1145,  1146,  1147,  1148,   612,  -801,  -801,  -801,   762,   612,
     762,   612,   762,   612,   762,  -801,  1035,   981,   981,   981,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  1046,   537,
    1042,  1062,  -801,  -801,  -801,  -801,  -801,  -801,  1036,  1051,
    1052,  1057,  1059,  1067,  1068,  1069,  1070,  1075,  1037,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  1076,  -801,  -801,  1173,
    1035,  1077,  1077,  1077,  -801,   378,  -801,  1035,  1035,   378,
    1035,  1035,  -801,   378,   378,  1035,  1035,  -801,  -801,  -801,
    1035,   378,   998,  1035,   378,   378,   378,   378,   762,  1175,
     762,  1177,   762,  1179,   762,  1193,  -801,  -801,  1079,  -801,
    -801,   341,  1080,  1081,  1082,  1083,  1085,  1086,  1089,  1090,
    1091,  1092,  -801,  -801,   378,  -801,    51,  1195,  1200,  1204,
    1035,  -801,  -801,  1035,  -801,  -801,  1035,  1035,  -801,  -801,
    -801,  1035,   762,  -801,  1035,  1035,  1035,  1035,  1209,   378,
    1210,   378,  1211,   378,  1212,   378,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  1035,
    -801,  1170,   378,   378,   378,  -801,  -801,  -801,  -801,  -801,
    1214,  -801,  -801,  -801,  -801,   378,  1035,   378,  1035,   378,
    1035,   378,  1035,  -801,  -801,  -801,  -801,  -801,  -801,   378,
    1035,  -801,  1035,  -801,  1035,  -801,  1035,  -801,  1035,  -801,
    -801,  -801,  -801,  -801
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
     403,   194,     0,     0,   183,   184,   557,   185,   417,     0,
       0,     0,   403,   186,   190,     0,     0,     0,   594,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    41,    42,    34,    35,    36,
      40,    43,    44,    45,    46,    47,    48,    49,    37,    38,
      39,   568,   568,    51,    52,    53,    54,    55,    57,    59,
      58,    66,    67,    68,    56,    63,    60,    65,    64,    61,
      62,     0,    70,    71,    72,    73,    74,    76,    75,    80,
      81,    82,    83,    84,    85,    77,    78,    79,     0,    87,
      88,    89,    90,    91,    93,    95,    94,    99,   100,   101,
      92,    96,    97,    98,   296,     0,   276,   277,   399,   272,
     399,   418,   399,     0,   459,   460,   461,   462,   463,   464,
     468,   465,   466,   103,     0,     0,   594,     0,   116,   117,
     118,   119,   125,   127,   126,   128,   129,   120,   121,   122,
     123,   124,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   143,   144,   145,   146,   148,   150,
     149,   154,   155,   156,   147,   151,   152,   153,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,     0,
       0,   171,     0,     0,   285,     0,   195,   287,   200,   206,
     558,   559,   560,   561,   174,   454,   455,   456,   457,     0,
     452,   180,   182,   309,   190,     0,   187,     0,     0,   434,
     422,   423,   436,   437,   444,   442,   425,   446,   424,   445,
     441,   448,   430,   432,   447,   438,   443,   421,   449,   428,
     431,   435,   433,   427,   426,   439,   440,   429,     0,   419,
       0,   168,   251,   252,   253,   254,   257,   256,   255,   258,
     259,   263,   401,   260,   261,   296,   506,   506,   506,   499,
     500,   501,   506,   506,     0,     0,   506,   532,   472,   474,
     475,   476,   477,   506,   545,   506,   545,   506,   569,     0,
     569,     0,     0,     0,   506,   506,     0,     0,   397,   397,
     397,     0,     0,     0,     0,     0,     0,     0,   399,   273,
     274,   266,   399,   268,   399,   270,   458,   467,     0,     0,
     413,     0,   506,   506,   506,     0,     0,   506,   488,   489,
     490,   532,   479,   484,   506,   482,   483,   481,   506,     0,
     179,     0,   282,   284,   283,     0,   309,     0,     0,   192,
     198,   199,   193,   453,     0,   315,   310,   311,   312,   313,
     314,   307,   188,   191,     0,     0,   450,   420,   595,     0,
     401,   264,     0,     0,     0,     0,   303,   511,   507,   508,
     509,   510,     0,     0,     0,     0,     0,   532,   532,   532,
       0,     0,   473,     0,     0,   546,   547,     0,     0,     0,
     532,   532,   532,     0,     0,     0,     0,   532,   506,     0,
     506,     0,   297,     0,   403,   403,   403,     0,   397,   409,
       0,   300,     0,     0,   278,   280,   279,   281,   275,   267,
     269,   271,     0,   450,   532,     0,     0,     0,   506,   506,
     532,     0,   480,     0,     0,     0,   532,   173,   285,   286,
     307,   404,   288,     0,     0,     0,     0,     0,     0,   201,
     202,   212,   212,   203,   221,   222,   204,   205,     0,     0,
     207,   208,   209,   181,     0,   189,   451,   450,   594,   596,
       0,   265,   299,   532,   532,   532,   532,   532,   532,     0,
     316,   497,   503,   502,   557,   503,   557,     0,     0,     0,
       0,     0,   512,   533,     0,     0,   503,   498,   532,   532,
     512,     0,     0,     0,   532,   557,   532,   532,   567,   566,
       0,     0,   532,     0,   503,   557,   398,   532,   532,   532,
     593,   403,     0,   403,   298,   301,   302,   303,     0,   400,
     450,   594,     0,     0,   557,   557,     0,     0,     0,   503,
     557,     0,     0,   532,     0,   309,   196,     0,     0,     0,
     245,   233,     0,   227,   218,   224,   220,   226,   217,   219,
     223,   225,   211,   210,   308,   594,   169,   402,     0,     0,
       0,     0,     0,     0,   306,   304,   309,     0,     0,     0,
     403,   351,   352,   492,   491,   494,   493,   485,   486,     0,
       0,     0,   513,   514,   515,   516,   517,   532,   534,   527,
     528,   523,   526,     0,   529,   530,   538,     0,     0,     0,
     532,     0,     0,     0,     0,   532,     0,     0,     0,   532,
     532,     0,   503,   557,   532,   532,     0,     0,     0,   532,
     411,   412,     0,   405,   316,     0,   594,   414,     0,   532,
     521,   521,   521,   521,   557,   557,     0,   496,   495,   538,
     487,     0,     0,   307,   234,   235,   236,     0,     0,   249,
       0,     0,   230,   213,   214,   215,   216,   170,     0,     0,
       0,     0,     0,     0,   307,   354,   355,   318,   367,   367,
       0,   321,   338,   339,   335,   336,   324,   325,   326,   332,
     333,   330,   319,     0,   340,   320,   327,   328,   341,   343,
     344,   345,   334,   362,   346,   347,     0,   349,   342,   329,
     337,   405,   353,   394,   395,   538,     0,   524,     0,   471,
       0,   532,     0,     0,   505,   538,   571,     0,     0,     0,
       0,   556,   532,     0,     0,     0,   532,   532,     0,     0,
       0,     0,     0,     0,   410,     0,   532,   409,   408,   407,
     415,   538,     0,   522,   532,   532,   532,   532,     0,     0,
       0,     0,   538,   478,     0,   470,   197,     0,     0,     0,
     249,   248,   238,   246,   250,   232,   228,   229,   538,   538,
     538,   538,   538,   538,   305,   322,   323,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   317,   381,     0,
       0,     0,     0,   350,   356,     0,   365,     0,   348,   532,
     393,     0,   525,     0,   538,     0,   538,     0,   563,   544,
       0,   565,   564,     0,     0,     0,   538,     0,     0,     0,
       0,   538,   538,   538,     0,   406,     0,   403,   578,     0,
       0,     0,     0,     0,     0,   518,   519,   520,   532,     0,
     532,     0,   532,     0,   532,   579,   538,   240,   242,   244,
     231,   247,   572,   573,   574,   575,   576,   577,     0,   506,
       0,     0,   378,   368,   371,   369,   370,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
     358,   361,   359,   357,   364,   363,     0,   331,   380,     0,
     538,   535,   535,   535,   562,     0,   542,   538,   538,     0,
     538,   538,   548,     0,     0,   538,   538,   293,   294,   295,
     538,     0,   405,   538,     0,     0,     0,     0,   532,     0,
     532,     0,   532,     0,   532,     0,   469,   376,     0,   375,
     377,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,   366,     0,   396,     0,     0,     0,     0,
     538,   504,   570,   538,   550,   549,   538,   538,   553,   552,
     292,   538,   532,   580,   538,   538,   538,   538,     0,     0,
       0,     0,     0,     0,     0,     0,   374,   379,   373,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   538,
     536,     0,     0,     0,     0,   543,   551,   555,   554,   290,
       0,   584,   581,   590,   587,     0,   538,     0,   538,     0,
     538,     0,   538,   291,   537,   531,   539,   540,   541,     0,
     538,   585,   538,   582,   538,   591,   538,   588,   538,   586,
     583,   592,   589,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -801,  -801,  -801,  1208,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  1144,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,  1109,   919,  -801,  -801,  -801,
    1125,  -801,  -801,  -801,  -801,  -801,  -801,   674,  -801,  -801,
    -801,   783,  -801,  -801,  -801,  -801,  -801,  -801,   786,  -801,
    -801,  -801,  -801,   -45,  -606,   359,  -801,  -801,  -801,  -801,
    -801,  -801,  -801,  -801,  -801,   687,   739,   796,   -67,  -204,
    -191,  -376,   798,   695,  -801,  1169,  -801,  -801,  -801,  -801,
    -801,  -801,   607,  -533,  -433,   501,  -801,   555,  -801,   334,
    -801,  -801,   459,  -801,  -801,  -801,  -801,  -801,  -801,  -801,
    -801,   251,   290,  -801,  -801,  -801,  -297,  -169,   782,  -112,
    -800,   872,   393,  -801,   959,  1240,  -801,  -187,  -296,   -81,
     936,  -254,   982,   610,   992,  1043,  -801,  1023,  -801,  -801,
    -801,   878,  -801,  -801,   828,  -801,  -801,  -801,  -230,  -801,
    -801,  -207,  -801,  -291,   166,  -348,   646,  -379,   127,  -200,
    -432,  -266,  -420,  -139,  -224,  -801,   871,  -801,  -801,  -801,
    -121,   184,  -801,  1099,  -801,   375,  -801,   439,  -801,  -801,
    -801,  -801,  -801,  -801,  -213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    63,   131,    64,   153,    65,   172,
      66,   189,    77,    78,    92,   228,    93,   243,    94,   253,
      95,   269,    14,    15,   281,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   113,   114,   306,    25,    26,   100,
     101,    27,   440,   549,   441,   560,   550,   662,   763,   551,
     552,   553,   554,   555,   556,   764,   765,   766,   557,   758,
     867,   868,   869,   872,   873,   875,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    79,    80,    81,   208,   398,
     209,   400,   284,   436,   439,    82,   136,    83,   393,   511,
     466,   627,   580,   565,   451,   680,   681,   682,   903,   904,
     906,   997,   885,   973,   974,   975,   976,   977,  1041,   908,
     897,   898,   137,   138,   139,   140,   504,   401,   461,   287,
     846,    84,   623,   732,    85,    86,    87,   338,   339,   118,
     299,   300,    88,    89,    90,    91,   221,   222,   278,   147,
     367,   368,   252,   421,   422,   369,   423,   424,   370,   426,
     371,   372,   373,   584,   164,   472,   697,   948,   854,   705,
     706,  1126,   483,  1057,   819,   165,   488,   182,   183,   184,
     294,   166,   167,   379,   168,   148,   149,   150,   237,   238,
     239,   240,   241,   508,   341
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     303,   533,   210,   540,   212,   226,   402,   646,   404,   473,
     474,   909,   425,   410,   475,   476,   382,   399,   480,   399,
     282,   399,   518,   382,   204,   484,   518,   489,   518,   494,
     647,   648,   374,   649,   899,   427,   499,   501,   409,   115,
     213,   403,   457,   405,   396,   443,   397,    96,    37,   128,
      38,   119,    39,    40,   120,   115,    41,   589,   590,   591,
     352,   708,   411,   129,   525,   526,   527,   205,   151,   531,
     601,   602,   603,   485,   486,   491,   534,   610,   543,   593,
     535,   490,    42,    43,   518,   654,    44,   656,   558,   559,
      45,   428,   505,   506,   412,   413,   414,   415,    52,  1100,
     497,    53,   491,   355,   632,    46,   968,    47,   582,   433,
     638,   434,    54,   457,   485,   486,   644,    68,    69,    55,
     583,   455,   650,   651,   900,   901,   429,    98,   655,   205,
     657,    46,    70,   548,    61,   481,   205,   205,    71,   283,
      72,    73,    56,   902,    57,   205,   387,    97,   460,   214,
     611,   594,   613,   668,   669,   670,   671,   672,   673,   457,
     462,   399,   387,   740,   295,   296,   297,   298,   742,   104,
     395,  1101,   858,   116,   459,   205,   969,   285,   707,   709,
     636,   637,   860,   586,   714,    58,   716,   717,   383,   224,
      59,   425,   721,   597,   375,   386,   970,   726,   727,   728,
     443,   121,   971,   375,   376,   384,   385,    48,   117,   749,
     615,   621,   753,    49,   427,    60,   205,    99,   365,    74,
     866,   522,  1072,   751,   225,   377,   457,   378,    75,   519,
      76,   490,   200,   520,   416,   521,   105,   994,   356,   995,
     640,   884,   106,   774,   357,   358,   359,   360,   361,   185,
     201,   652,   491,   492,   362,   363,    99,   813,   814,   815,
     264,   107,   463,   464,   465,   463,   961,   465,   152,   108,
     396,    50,   397,   972,   396,   364,   397,   816,   265,   824,
     825,   826,   295,   296,   297,   298,   831,   514,   442,   109,
     823,   110,   111,   487,   122,   828,   515,    67,   365,   833,
     834,   366,   112,   849,   838,   839,   851,   125,   227,   843,
     123,   392,   516,   130,   862,   388,   389,   390,   391,   852,
     865,   517,   723,   290,   291,   292,   293,   392,   290,   291,
     292,   293,   290,   291,   292,   293,   878,   879,   880,   881,
     882,   883,   290,   291,   292,   293,    68,    69,   206,   207,
     171,   961,   961,   961,   157,   666,   193,    68,    69,   573,
      46,    70,    68,    69,   575,   577,   944,    71,   574,    72,
      73,    46,    70,   576,   578,   568,    46,    70,    71,   102,
      72,    73,   124,    71,   257,    72,    73,   126,   914,   211,
     916,   103,   617,   618,   619,   919,   215,   921,   922,    68,
      69,   915,   127,   926,   219,   463,   566,   465,   931,   932,
     933,   220,   923,    46,    70,   395,   927,   928,   737,   279,
      71,   280,    72,    73,   699,   700,   936,   945,   946,   947,
     699,   700,   956,   487,   940,   941,   942,   943,   701,   169,
     186,   202,   631,   848,   701,   702,   206,   207,    74,   585,
     459,   702,   767,   677,   678,   206,   207,    75,   288,    76,
     302,   583,   596,   684,    74,   686,   543,   544,    75,   266,
      76,   614,   679,    75,   583,    76,   545,   546,   547,  1000,
     950,   952,   954,   583,   715,  1007,   665,   639,  1008,   999,
     206,   207,  1010,  1011,   725,   344,   345,  1015,  1016,   583,
     289,    74,  1020,   170,   187,   203,   396,  1023,   397,   729,
      75,   733,    76,   741,   743,   396,   301,   397,   307,   748,
     285,   548,   305,   850,   308,   863,   722,   340,  1029,   342,
    1031,   343,  1033,   267,  1035,     1,   518,   348,   583,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   736,
     396,   380,   397,   349,   949,   350,   309,   951,   394,   310,
     311,   312,   313,   314,   315,  1028,   351,   953,   811,   353,
    1030,  1087,  1032,  1060,  1034,   346,   347,  1063,   703,   704,
     354,  1066,  1067,  1088,   703,   704,   467,   477,   478,  1071,
     316,   910,  1074,  1075,  1076,  1077,   317,   528,   529,   318,
     406,   918,   837,   606,   607,   498,   608,   609,  1078,   430,
    1080,   408,  1082,   912,  1084,   945,   946,   947,   945,   946,
     947,  1038,  1099,   859,   861,   467,   399,   938,   945,   946,
     947,   431,   290,   291,   292,   293,   817,   432,   955,   435,
     468,   469,   470,   471,   500,   625,   626,  1116,   437,  1118,
     438,  1120,  1110,  1122,   962,   963,   964,   965,   966,   967,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   319,
     658,   659,   320,   144,   161,   179,   197,   660,   661,   468,
     469,   470,   471,  1130,   458,  1132,   444,  1134,   479,  1136,
    1004,   453,  1006,   502,   188,   495,   321,  1138,   322,   503,
     323,   496,  1012,   324,   261,   242,   760,  1017,  1018,  1019,
     761,   762,   295,   296,   297,   298,   467,   445,   446,   447,
     448,   449,   450,   507,   325,   326,   216,   217,   218,   327,
     328,   329,  1036,   674,   675,   676,   330,   509,   331,   512,
     332,   333,   510,    68,    69,   513,   334,   335,   336,   337,
     132,   154,   173,   190,    68,    69,   524,    46,    70,  1001,
    1002,  1003,   530,   456,    71,   536,    72,    73,    46,    70,
     468,   469,   470,   471,   537,    71,  1055,    72,    73,   229,
     244,   254,   270,  1061,  1062,   283,  1064,  1065,   205,   481,
     720,  1068,  1069,   945,   946,   947,  1070,   730,   731,  1073,
     677,   678,   133,   155,   174,   191,   309,   539,   268,   310,
     311,   312,   313,   314,   315,   541,   357,   358,   359,   360,
     361,   417,   957,   958,   959,  1022,   481,   832,   418,   419,
     420,   230,   245,   255,   271,   542,  1105,  1127,  1128,  1106,
     316,   563,  1107,  1108,   564,    74,   317,  1109,   115,   318,
    1111,  1112,  1113,  1114,    75,   569,    76,    68,    69,   134,
     156,   175,   192,  1058,  1059,    75,   570,    76,   855,   856,
     857,    46,    70,   572,   579,  1123,   581,   587,    71,   588,
      72,    73,   481,   692,   693,   694,   695,   696,   231,   246,
     256,   272,  1131,   592,  1133,   595,  1135,   598,  1137,   599,
     604,   481,  1125,  1125,  1125,   600,  1139,   605,  1140,   612,
    1141,   616,  1142,   620,  1143,   622,   628,   624,   629,   319,
     309,   633,   320,   310,   311,   312,   313,   314,   315,   357,
     358,   359,   360,   361,   417,   141,   158,   176,   194,   634,
     635,   418,   419,   420,   641,   653,   321,   642,   322,   643,
     323,   655,   657,   324,   316,   664,   667,   683,   685,   687,
     317,   688,   689,   318,   232,   247,   258,   273,    75,   690,
      76,   691,   698,   711,   325,   326,   712,   713,   718,   327,
     328,   329,   719,   735,   724,   738,   330,   739,   331,   481,
     332,   333,   746,   744,   745,   752,   334,   335,   336,   337,
     747,   309,   757,  -237,   310,   311,   312,   313,   314,   315,
     754,   356,   750,   523,   755,   756,   759,   357,   358,   359,
     360,   361,   142,   159,   177,   195,   768,   362,   363,   769,
     770,   771,   772,   319,   773,   316,   320,   775,   776,   818,
     821,   317,   836,   820,   318,   143,   160,   178,   196,   822,
     827,   233,   248,   259,   274,   145,   162,   180,   198,   829,
     321,   830,   322,   835,   323,   840,   841,   324,   842,   844,
     845,   864,  -239,   853,   234,   249,   260,   275,  -241,   905,
    -243,   907,   874,   911,   235,   250,   262,   276,   325,   326,
     870,   913,   871,   327,   328,   329,   876,   877,   917,   920,
     330,   924,   331,   925,   332,   333,   146,   163,   181,   199,
     334,   335,   336,   337,   319,   309,   929,   320,   310,   311,
     312,   313,   314,   315,   930,   934,   935,   567,   939,   989,
     988,   990,   991,  1005,   992,   236,   251,   263,   277,   996,
    1009,   321,   998,   322,  1013,   323,  1014,  1021,   324,   316,
    1024,  1025,  1026,  1027,  1039,   317,  1042,  1037,   318,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   325,
     326,  1043,  1044,  1040,   327,   328,   329,  1045,  1054,  1046,
    1079,   330,  1081,   331,  1083,   332,   333,  1047,  1048,  1049,
    1050,   334,   335,   336,   337,  1051,  1053,  1056,  1085,  1086,
    1102,  1089,  1090,  1091,  1092,  1103,  1093,  1094,   630,  1104,
    1095,  1096,  1097,  1098,  1115,  1117,  1119,  1121,  1124,  1129,
      62,   223,   304,   452,   561,   286,   663,   562,   319,   960,
     538,   320,   135,   645,   734,   847,   812,   993,   886,  1052,
     937,    51,   571,   454,   407,   482,   710,   493,     0,   532,
       0,   381,     0,     0,     0,   321,     0,   322,     0,   323,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,   326,     0,     0,     0,   327,   328,
     329,     0,     0,     0,     0,   330,     0,   331,     0,   332,
     333,     0,     0,     0,     0,   334,   335,   336,   337,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   810
};

static const yytype_int16 yycheck[] =
{
     112,   421,    69,   436,    71,    86,   210,   540,   212,   357,
     358,   811,   242,   226,   362,   363,     7,   208,   366,   210,
      57,   212,   398,     7,     7,   373,   402,   375,   404,   377,
      19,    20,     7,    22,    55,   242,   384,   385,   225,    68,
     120,   210,   338,   212,   171,   299,   173,    12,     9,    16,
      11,    51,    13,    14,    54,    68,    17,   477,   478,   479,
     127,    46,     7,    30,   412,   413,   414,   120,     3,   417,
     490,   491,   492,    20,    21,   199,   424,   497,    15,    48,
     428,   178,    43,    44,   460,    27,    47,    27,    25,    26,
      51,   144,   389,   390,    39,    40,    41,    42,   118,    48,
     224,   118,   199,     7,   524,    66,    74,    68,   120,   111,
     530,   113,   118,   409,    20,    21,   536,    52,    53,   118,
     132,   308,   111,   112,   145,   146,   179,   120,    70,   120,
      70,    66,    67,    70,     0,   120,   120,   120,    73,   176,
      75,    76,   118,   164,   118,   120,    55,   112,   352,   229,
     498,   120,   500,   573,   574,   575,   576,   577,   578,   455,
      69,   352,    55,    32,   114,   115,   116,   117,    32,   112,
      71,   120,    32,   202,    71,   120,   144,    71,   598,   599,
     528,   529,    32,   474,   604,   118,   606,   607,   179,   202,
     118,   421,   612,   484,   178,   179,   164,   617,   618,   619,
     454,   201,   170,   178,   179,   196,   197,   168,   237,   641,
     501,   508,   645,   174,   421,   118,   120,   111,   202,   154,
     753,   408,  1022,   643,   237,   200,   522,   202,   163,   398,
     165,   178,    66,   402,   179,   404,   112,   111,   142,   113,
     531,   774,   120,   676,   148,   149,   150,   151,   152,    65,
      66,   240,   199,   200,   158,   159,   111,   689,   690,   691,
      94,   112,   171,   172,   173,   171,   872,   173,   203,   113,
     171,   232,   173,   241,   171,   179,   173,   697,    94,   711,
     712,   713,   114,   115,   116,   117,   718,   111,   238,   237,
     710,   166,   167,   199,    54,   715,   120,     3,   202,   719,
     720,   205,   227,   735,   724,   725,   738,    16,     3,   729,
      54,   220,   111,     3,   746,   208,   209,   210,   211,   739,
     752,   120,   613,   192,   193,   194,   195,   220,   192,   193,
     194,   195,   192,   193,   194,   195,   768,   769,   770,   771,
     772,   773,   192,   193,   194,   195,    52,    53,   111,   112,
       3,   957,   958,   959,    64,   568,    66,    52,    53,   111,
      66,    67,    52,    53,   111,   111,   120,    73,   120,    75,
      76,    66,    67,   120,   120,   456,    66,    67,    73,    57,
      75,    76,    54,    73,    94,    75,    76,    54,   820,   113,
     822,    69,   504,   505,   506,   827,   229,   829,   830,    52,
      53,   821,    54,   835,   119,   171,   238,   173,   840,   841,
     842,   118,   832,    66,    67,    71,   836,   837,   631,    10,
      73,    52,    75,    76,    52,    53,   846,   181,   182,   183,
      52,    53,   864,   199,   854,   855,   856,   857,    66,    64,
      65,    66,   523,    71,    66,    73,   111,   112,   154,   120,
      71,    73,   665,    45,    46,   111,   112,   163,   120,   165,
     120,   132,   120,   584,   154,   586,    15,    16,   163,    94,
     165,   120,    64,   163,   132,   165,    25,    26,    27,   911,
     859,   860,   861,   132,   605,   917,   567,   120,   920,   909,
     111,   112,   924,   925,   615,   111,   112,   929,   930,   132,
     112,   154,   934,    64,    65,    66,   171,   939,   173,   621,
     163,   623,   165,   634,   635,   171,   112,   173,   237,   640,
      71,    70,   225,   736,   237,   749,   120,    50,   948,   112,
     950,   112,   952,    94,   954,     8,   912,   112,   132,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   630,
     171,   202,   173,   112,   120,   111,    31,   120,    73,    34,
      35,    36,    37,    38,    39,   944,   112,   120,   680,   111,
     949,   230,   951,  1005,   953,   111,   112,  1009,   206,   207,
     111,  1013,  1014,   242,   206,   207,   179,   222,   223,  1021,
      65,   815,  1024,  1025,  1026,  1027,    71,    40,    41,    74,
      48,   825,   723,   111,   112,   198,   111,   112,  1028,   111,
    1030,   237,  1032,   817,  1034,   181,   182,   183,   181,   182,
     183,   969,  1054,   744,   745,   179,   817,   851,   181,   182,
     183,    23,   192,   193,   194,   195,   703,   120,   862,   177,
     233,   234,   235,   236,   198,    58,    59,  1079,   120,  1081,
      56,  1083,  1072,  1085,   878,   879,   880,   881,   882,   883,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   144,
      25,    26,   147,    63,    64,    65,    66,    25,    26,   233,
     234,   235,   236,  1115,   120,  1117,   167,  1119,   214,  1121,
     914,   226,   916,   111,     3,   201,   171,  1129,   173,    49,
     175,   201,   926,   178,    94,     3,    24,   931,   932,   933,
      28,    29,   114,   115,   116,   117,   179,   185,   186,   187,
     188,   189,   190,    60,   199,   200,   155,   156,   157,   204,
     205,   206,   956,    61,    62,    63,   211,   227,   213,   120,
     215,   216,    57,    52,    53,   120,   221,   222,   223,   224,
      63,    64,    65,    66,    52,    53,    31,    66,    67,   217,
     218,   219,    31,   238,    73,   144,    75,    76,    66,    67,
     233,   234,   235,   236,   120,    73,  1000,    75,    76,    92,
      93,    94,    95,  1007,  1008,   176,  1010,  1011,   120,   120,
     121,  1015,  1016,   181,   182,   183,  1020,   235,   236,  1023,
      45,    46,    63,    64,    65,    66,    31,   111,     3,    34,
      35,    36,    37,    38,    39,   180,   148,   149,   150,   151,
     152,   153,   867,   868,   869,   937,   120,   121,   160,   161,
     162,    92,    93,    94,    95,   111,  1060,  1103,  1104,  1063,
      65,   120,  1066,  1067,   191,   154,    71,  1071,    68,    74,
    1074,  1075,  1076,  1077,   163,    48,   165,    52,    53,    63,
      64,    65,    66,  1002,  1003,   163,   120,   165,   741,   742,
     743,    66,    67,   112,    60,  1099,   120,   120,    73,   120,
      75,    76,   120,   180,   181,   182,   183,   184,    92,    93,
      94,    95,  1116,   120,  1118,     5,  1120,   120,  1122,    74,
      74,   120,  1102,  1103,  1104,   120,  1130,   120,  1132,   120,
    1134,   120,  1136,   212,  1138,   221,    48,   120,   180,   144,
      31,   120,   147,    34,    35,    36,    37,    38,    39,   148,
     149,   150,   151,   152,   153,    63,    64,    65,    66,   120,
     120,   160,   161,   162,     5,   111,   171,   120,   173,   120,
     175,    70,    70,   178,    65,   111,   180,   121,   121,   121,
      71,   121,     5,    74,    92,    93,    94,    95,   163,     5,
     165,     5,    48,     5,   199,   200,     5,     5,     5,   204,
     205,   206,   120,     5,   121,     5,   211,   121,   213,   120,
     215,   216,     5,   120,   120,     5,   221,   222,   223,   224,
     121,    31,   239,   111,    34,    35,    36,    37,    38,    39,
     112,   142,   121,   238,   112,   112,   111,   148,   149,   150,
     151,   152,    63,    64,    65,    66,     5,   158,   159,     5,
       5,     5,     5,   144,     5,    65,   147,   111,   111,     4,
     111,    71,   121,     5,    74,    63,    64,    65,    66,     5,
       5,    92,    93,    94,    95,    63,    64,    65,    66,     5,
     171,     5,   173,     5,   175,     5,     5,   178,     5,   111,
      72,     5,   111,   180,    92,    93,    94,    95,   111,   228,
     111,   169,    18,     5,    92,    93,    94,    95,   199,   200,
     111,     3,   111,   204,   205,   206,   112,   112,     5,     5,
     211,     5,   213,     5,   215,   216,    63,    64,    65,    66,
     221,   222,   223,   224,   144,    31,     5,   147,    34,    35,
      36,    37,    38,    39,     5,     5,   120,   238,     5,   111,
       6,   111,   120,     5,   112,    92,    93,    94,    95,   231,
       5,   171,   111,   173,     5,   175,     5,     5,   178,    65,
       5,     5,     5,     5,   112,    71,   120,   111,    74,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   199,
     200,   120,   120,   111,   204,   205,   206,   120,     5,   120,
       5,   211,     5,   213,     5,   215,   216,   120,   120,   120,
     120,   221,   222,   223,   224,   120,   120,   120,     5,   120,
       5,   121,   121,   121,   121,     5,   121,   121,   238,     5,
     121,   121,   121,   121,     5,     5,     5,     5,    48,     5,
      12,    77,   113,   304,   441,   100,   552,   441,   144,   870,
     432,   147,    63,   538,   627,   734,   681,   903,   779,   988,
     847,     1,   460,   307,   221,   367,   600,   376,    -1,   421,
      -1,   152,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   199,   200,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,   211,    -1,   213,    -1,   215,
     216,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   244,   245,   246,   265,   266,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   280,   281,   284,   309,   310,
     311,   312,   313,   314,   315,   316,   317,     9,    11,    13,
      14,    17,    43,    44,    47,    51,    66,    68,   168,   174,
     232,   368,   118,   118,   118,   118,   118,   118,   118,   118,
     118,     0,   246,   247,   249,   251,   253,     3,    52,    53,
      67,    73,    75,    76,   154,   163,   165,   255,   256,   318,
     319,   320,   328,   330,   364,   367,   368,   369,   375,   376,
     377,   378,   257,   259,   261,   263,    12,   112,   120,   111,
     282,   283,    57,    69,   112,   112,   120,   112,   113,   237,
     166,   167,   227,   277,   278,    68,   202,   237,   372,    51,
      54,   201,    54,    54,    54,    16,    54,    54,    16,    30,
       3,   248,   318,   319,   320,   328,   329,   355,   356,   357,
     358,   364,   367,   375,   376,   377,   378,   382,   418,   419,
     420,     3,   203,   250,   318,   319,   320,   355,   364,   367,
     375,   376,   377,   378,   397,   408,   414,   415,   417,   418,
     420,     3,   252,   318,   319,   320,   364,   367,   375,   376,
     377,   378,   410,   411,   412,   414,   418,   420,     3,   254,
     318,   319,   320,   355,   364,   367,   375,   376,   377,   378,
     397,   414,   418,   420,     7,   120,   111,   112,   321,   323,
     321,   113,   321,   120,   229,   229,   155,   156,   157,   119,
     118,   379,   380,   256,   202,   237,   372,     3,   258,   318,
     319,   320,   364,   367,   375,   377,   378,   421,   422,   423,
     424,   425,     3,   260,   318,   319,   320,   364,   367,   375,
     377,   378,   385,   262,   318,   319,   320,   355,   364,   367,
     375,   376,   377,   378,   397,   414,   418,   420,     3,   264,
     318,   319,   320,   364,   367,   375,   377,   378,   381,    10,
      52,   267,    57,   176,   325,    71,   283,   362,   120,   112,
     192,   193,   194,   195,   413,   114,   115,   116,   117,   373,
     374,   112,   120,   362,   278,   225,   279,   237,   237,    31,
      34,    35,    36,    37,    38,    39,    65,    71,    74,   144,
     147,   171,   173,   175,   178,   199,   200,   204,   205,   206,
     211,   213,   215,   216,   221,   222,   223,   224,   370,   371,
      50,   427,   112,   112,   111,   112,   111,   112,   112,   112,
     111,   112,   321,   111,   111,     7,   142,   148,   149,   150,
     151,   152,   158,   159,   179,   202,   205,   383,   384,   388,
     391,   393,   394,   395,     7,   178,   179,   200,   202,   416,
     202,   416,     7,   179,   196,   197,   179,    55,   208,   209,
     210,   211,   220,   331,    73,    71,   171,   173,   322,   323,
     324,   360,   322,   360,   322,   360,    48,   380,   237,   370,
     427,     7,    39,    40,    41,    42,   179,   153,   160,   161,
     162,   386,   387,   389,   390,   391,   392,   394,   144,   179,
     111,    23,   120,   111,   113,   177,   326,   120,    56,   327,
     285,   287,   238,   374,   167,   185,   186,   187,   188,   189,
     190,   337,   279,   226,   373,   370,   238,   371,   120,    71,
     322,   361,    69,   171,   172,   173,   333,   179,   233,   234,
     235,   236,   398,   398,   398,   398,   398,   222,   223,   214,
     398,   120,   384,   405,   398,    20,    21,   199,   409,   398,
     178,   199,   200,   409,   398,   201,   201,   224,   198,   398,
     198,   398,   111,    49,   359,   359,   359,    60,   426,   227,
      57,   332,   120,   120,   111,   120,   111,   120,   324,   360,
     360,   360,   370,   238,    31,   398,   398,   398,    40,    41,
      31,   398,   387,   405,   398,   398,   144,   120,   325,   111,
     337,   180,   111,    15,    16,    25,    26,    27,    70,   286,
     289,   292,   293,   294,   295,   296,   297,   301,    25,    26,
     288,   294,   301,   120,   191,   336,   238,   238,   372,    48,
     120,   361,   112,   111,   120,   111,   120,   111,   120,    60,
     335,   120,   120,   132,   396,   120,   396,   120,   120,   405,
     405,   405,   120,    48,   120,     5,   120,   396,   120,    74,
     120,   405,   405,   405,    74,   120,   111,   112,   111,   112,
     405,   398,   120,   398,   120,   396,   120,   362,   362,   362,
     212,   359,   221,   365,   120,    58,    59,   334,    48,   180,
     238,   372,   405,   120,   120,   120,   398,   398,   405,   120,
     396,     5,   120,   120,   405,   326,   336,    19,    20,    22,
     111,   112,   240,   111,    27,    70,    27,    70,    25,    26,
      25,    26,   290,   290,   111,   372,   427,   180,   405,   405,
     405,   405,   405,   405,    61,    62,    63,    45,    46,    64,
     338,   339,   340,   121,   413,   121,   413,   121,   121,     5,
       5,     5,   180,   181,   182,   183,   184,   399,    48,    52,
      53,    66,    73,   206,   207,   402,   403,   405,    46,   405,
     399,     5,     5,     5,   405,   413,   405,   405,     5,   120,
     121,   405,   120,   396,   121,   413,   405,   405,   405,   362,
     235,   236,   366,   362,   335,     5,   372,   427,     5,   121,
      32,   413,    32,   413,   120,   120,     5,   121,   413,   403,
     121,   405,     5,   337,   112,   112,   112,   239,   302,   111,
      24,    28,    29,   291,   298,   299,   300,   427,     5,     5,
       5,     5,     5,     5,   337,   111,   111,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   362,   340,   403,   403,   403,   405,   321,     4,   407,
       5,   111,     5,   405,   403,   403,   403,     5,   405,     5,
       5,   403,   121,   405,   405,     5,   121,   413,   405,   405,
       5,     5,     5,   405,   111,    72,   363,   338,    71,   403,
     427,   403,   405,   180,   401,   401,   401,   401,    32,   413,
      32,   413,   403,   407,     5,   403,   336,   303,   304,   305,
     111,   111,   306,   307,    18,   308,   112,   112,   403,   403,
     403,   403,   403,   403,   336,   345,   345,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   353,   354,    55,
     145,   146,   164,   341,   342,   228,   343,   169,   352,   363,
     407,     5,   322,     3,   403,   405,   403,     5,   407,   403,
       5,   403,   403,   405,     5,     5,   403,   405,   405,     5,
       5,   403,   403,   403,     5,   120,   405,   365,   407,     5,
     405,   405,   405,   405,   120,   181,   182,   183,   400,   120,
     400,   120,   400,   120,   400,   407,   403,   306,   306,   306,
     308,   307,   407,   407,   407,   407,   407,   407,    74,   144,
     164,   170,   241,   346,   347,   348,   349,   350,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,     6,   111,
     111,   120,   112,   342,   111,   113,   231,   344,   111,   405,
     403,   217,   218,   219,   407,     5,   407,   403,   403,     5,
     403,   403,   407,     5,     5,   403,   403,   407,   407,   407,
     403,     5,   362,   403,     5,     5,     5,     5,   400,   405,
     400,   405,   400,   405,   400,   405,   407,   111,   398,   112,
     111,   351,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   354,   120,     5,   407,   120,   406,   406,   406,
     403,   407,   407,   403,   407,   407,   403,   403,   407,   407,
     407,   403,   363,   407,   403,   403,   403,   403,   405,     5,
     405,     5,   405,     5,   405,     5,   120,   230,   242,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   403,
      48,   120,     5,     5,     5,   407,   407,   407,   407,   407,
     405,   407,   407,   407,   407,     5,   403,     5,   403,     5,
     403,     5,   403,   407,    48,   402,   404,   404,   404,     5,
     403,   407,   403,   407,   403,   407,   403,   407,   403,   407,
     407,   407,   407,   407
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   247,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     249,   249,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   253,   253,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   255,   255,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   257,   257,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     259,   259,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   261,   261,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   263,   263,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   265,   265,
     265,   266,   267,   267,   268,   269,   270,   271,   271,   271,
     272,   272,   272,   273,   274,   275,   276,   277,   277,   278,
     279,   279,   280,   281,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   286,   286,   287,   287,   288,   288,
     289,   289,   290,   290,   291,   291,   291,   292,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   298,   299,
     300,   301,   301,   301,   301,   301,   301,   302,   301,   303,
     301,   304,   301,   305,   301,   301,   306,   306,   307,   308,
     308,   309,   309,   309,   309,   310,   311,   311,   312,   313,
     314,   314,   315,   316,   317,   317,   318,   318,   319,   319,
     320,   320,   321,   321,   322,   322,   323,   323,   324,   324,
     324,   324,   325,   325,   325,   326,   326,   327,   327,   328,
     328,   329,   330,   330,   330,   330,   331,   331,   332,   333,
     334,   334,   334,   335,   335,   335,   335,   336,   336,   337,
     337,   337,   337,   337,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   339,   339,   340,   340,   341,   341,   342,   342,
     342,   342,   343,   343,   343,   344,   344,   345,   345,   346,
     346,   346,   346,   346,   347,   348,   349,   350,   351,   351,
     352,   353,   353,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   355,   356,   357,   358,   359,   359,   360,
     360,   361,   361,   362,   362,   363,   363,   364,   364,   365,
     365,   366,   366,   367,   367,   367,   367,   368,   369,   370,
     370,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     372,   372,   373,   373,   374,   374,   374,   374,   375,   375,
     375,   376,   376,   376,   377,   378,   379,   379,   380,   381,
     381,   382,   383,   383,   384,   384,   384,   384,   385,   386,
     386,   387,   387,   387,   387,   388,   388,   389,   390,   390,
     390,   391,   391,   391,   391,   392,   392,   393,   394,   395,
     395,   395,   396,   396,   397,   397,   398,   398,   398,   398,
     398,   398,   399,   399,   399,   399,   399,   399,   400,   400,
     400,   401,   401,   402,   402,   402,   402,   402,   402,   402,
     403,   404,   405,   405,   405,   406,   406,   406,   407,   407,
     407,   407,   408,   408,   408,   409,   409,   409,   410,   410,
     410,   410,   411,   411,   411,   411,   412,   413,   413,   413,
     413,   413,   414,   414,   415,   415,   415,   415,   416,   416,
     417,   417,   418,   418,   419,   419,   420,   420,   421,   422,
     423,   424,   424,   424,   424,   424,   424,   425,   425,   425,
     425,   425,   425,   426,   427,   427,   427
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
#line 543 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 2873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 547 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 550 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2890 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 556 "src/p.y" /* yacc.c:1646  */
    {
                    if (! Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = true;
                      Run.isdaemon   = true;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 2903 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 566 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 567 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 570 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 577 "src/p.y" /* yacc.c:1646  */
    {
                    Run.init = true;
                  }
#line 2933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 582 "src/p.y" /* yacc.c:1646  */
    {
                    Run.fipsEnabled = true;
                  }
#line 2941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 587 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.logfile || ihp.logfile) {
                     ihp.logfile = true;
                     setlogfile((yyvsp[0].string));
                     Run.use_syslog = false;
                     Run.dolog = true;
                   }
                  }
#line 2954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 595 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 598 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 603 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 2978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 606 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 610 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2996 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 616 "src/p.y" /* yacc.c:1646  */
    {
                    Run.idfile = (yyvsp[0].string);
                  }
#line 3004 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 621 "src/p.y" /* yacc.c:1646  */
    {
                    Run.statefile = (yyvsp[0].string);
                  }
#line 3012 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 626 "src/p.y" /* yacc.c:1646  */
    {
                   if (! Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = true;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 3023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 641 "src/p.y" /* yacc.c:1646  */
    {
                    addmmonit((yyvsp[-3].url), (yyvsp[-2].number), (yyvsp[-1].number), (yyvsp[0].string));
                  }
#line 3031 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 647 "src/p.y" /* yacc.c:1646  */
    {
                    Run.dommonitcredentials = false;
                  }
#line 3039 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 652 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3049 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 659 "src/p.y" /* yacc.c:1646  */
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 3061 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 672 "src/p.y" /* yacc.c:1646  */
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[-4].string));

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
#line 3083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 689 "src/p.y" /* yacc.c:1646  */
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[-6].string));

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
#line 3104 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 707 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[-1].number);
                 }
#line 3113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                 }
#line 3122 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 735 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Ssl;
                  }
#line 3130 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 738 "src/p.y" /* yacc.c:1646  */
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
#line 3146 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 768 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3154 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 771 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 784 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3170 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 789 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.pem = (yyvsp[0].string);
                  }
#line 3178 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 794 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.ssl.clientpem = (yyvsp[0].string);
                        if (! file_checkStat(Run.httpd.socket.net.ssl.clientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                                yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 3188 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_AllowSelfSignedCertificates;
                  }
#line 3196 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 806 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 809 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3217 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 817 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3226 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3235 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 825 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3244 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 829 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3253 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 833 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3262 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 837 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 840 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 844 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 847 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 3296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3304 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 854 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 3313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 858 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 861 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Engine_addNetAllow((yyvsp[0].string)) || Engine_addHostAllow((yyvsp[0].string))))
                                yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 3331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 872 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 3340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 878 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = false; }
#line 3346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 879 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = true; }
#line 3352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 882 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 885 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 888 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 895 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 3392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 904 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 909 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 912 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 917 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 922 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 927 "src/p.y" /* yacc.c:1646  */
    {
                    if (Link_isGetByAddressSupported()) {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf->priv.net.stats = Link_createForAddress((yyvsp[0].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
#line 3445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 935 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                    current->inf->priv.net.stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 3454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 941 "src/p.y" /* yacc.c:1646  */
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
#line 3469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 953 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 958 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 965 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 974 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 977 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 982 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 985 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 991 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 994 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1007 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1008 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1011 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1012 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1013 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid(NULL, (yyvsp[0].number)) ); }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1014 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid(NULL, (yyvsp[0].number)) ); }
#line 3585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1017 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1018 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3597 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1019 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1022 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3609 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1023 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1026 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1027 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1030 "src/p.y" /* yacc.c:1646  */
    {
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3641 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1039 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-7].url));
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&(current->portlist), &portset);
                  }
#line 3653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1048 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-5].number);
                        portset.retry = (yyvsp[-4].number);
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 3664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1056 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-6].number);
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 3677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1064 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3690 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1072 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1080 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3716 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1090 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 3724 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1093 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 3732 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1098 "src/p.y" /* yacc.c:1646  */
    {
                        portset.port = (yyvsp[0].number);
                  }
#line 3740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1103 "src/p.y" /* yacc.c:1646  */
    {
                        portset.pathname = (yyvsp[0].string);
                        portset.family = Socket_Unix;
                  }
#line 3749 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip;
                  }
#line 3757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip4;
                  }
#line 3765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1115 "src/p.y" /* yacc.c:1646  */
    {
                    portset.family = Socket_Ip6;
                  }
#line 3773 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1120 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                  }
#line 3789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1126 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                    portset.SSL.use_ssl = true;
                    portset.SSL.version = (yyvsp[-1].number);
                    if (portset.SSL.version == SSL_Disabled)
                      portset.SSL.version = SSL_Auto;
                    portset.SSL.certmd5 = (yyvsp[0].string);
                  }
#line 3802 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Udp;
                  }
#line 3810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 3818 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1142 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 3826 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1147 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Disabled; }
#line 3832 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1148 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V2; }
#line 3838 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1149 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_V3; }
#line 3844 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1150 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_TLSV1; }
#line 3850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_TLSV11;
                }
#line 3861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1159 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_TLSV12;
                }
#line 3872 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1165 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_Auto; }
#line 3878 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1168 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3886 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1171 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1174 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3902 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1177 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1180 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 3918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1183 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 3926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1186 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 3934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1189 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 3945 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1195 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3953 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1198 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3964 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1204 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 3972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1207 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 3980 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1210 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 3988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1213 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 3996 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1216 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4004 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1219 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4012 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1222 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1225 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = Socket_Udp;
                  }
#line 4029 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1229 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1232 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1235 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = Socket_Tcp;
                    portset.SSL.use_ssl = true;
                    portset.SSL.version = SSL_Auto;
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1241 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1244 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4072 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1247 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                        portset.SSL.use_ssl = true;
                        portset.SSL.version = SSL_Auto;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1253 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1256 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1259 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1262 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1265 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1268 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1271 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1277 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4155 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4163 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1283 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1286 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 4179 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1295 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 4187 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1298 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 4195 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1307 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string);
                  }
#line 4203 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1310 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4211 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1313 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1316 "src/p.y" /* yacc.c:1646  */
    {
                    portset.version = (yyvsp[0].number);
                  }
#line 4227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1322 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4235 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1325 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1331 "src/p.y" /* yacc.c:1646  */
    {
                     portset.maxforward = verifyMaxForward((yyvsp[0].number));
                   }
#line 4251 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1347 "src/p.y" /* yacc.c:1646  */
    {
                    portset.operator = (yyvsp[-1].number);
                    portset.status = (yyvsp[0].number);
                  }
#line 4260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1353 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4269 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1359 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_checksum = (yyvsp[0].string);
                  }
#line 4277 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1364 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 4285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1370 "src/p.y" /* yacc.c:1646  */
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[0].string));
                 }
#line 4296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1378 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 4304 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1387 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.loglimit = (yyvsp[-1].number);
                  }
#line 4313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1391 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.closelimit = (yyvsp[-1].number);
                  }
#line 4322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1395 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1399 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1403 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.replylimit = (yyvsp[-1].number);
                  }
#line 4349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1407 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4358 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1411 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.startlimit = (yyvsp[-1].number);
                  }
#line 4367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1415 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1419 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4385 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1423 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4394 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addnonexist(&nonexistset);
                  }
#line 4403 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1436 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                    addpid(&pidset);
                  }
#line 4412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1442 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                    addppid(&ppidset);
                  }
#line 4421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1448 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1455 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4440 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1458 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1463 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1466 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1471 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1474 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1479 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1482 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1487 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1490 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1495 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1501 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                   addactionrate(&actionrateset);
                 }
#line 4534 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1510 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1516 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1517 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4564 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1524 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1527 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1531 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1536 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1539 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1546 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1547 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 4613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1548 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 4619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1549 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4625 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1550 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1551 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1552 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1553 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1554 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1555 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1556 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4667 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1557 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1558 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1559 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 4685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1560 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1561 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 4697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1562 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 4703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1563 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1564 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1565 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1566 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1567 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 4733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1568 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1569 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 4745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1570 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1571 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1572 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1573 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1574 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1585 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1586 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1587 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1588 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1591 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_SkipCycles;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4808 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1595 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_Cron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1599 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = Every_NotInCron;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4826 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1605 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Active;
                  }
#line 4834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1608 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Passive;
                  }
#line 4842 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1611 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = Monitor_Manual;
                    current->monitor = Monitor_Not;
                  }
#line 4851 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1617 "src/p.y" /* yacc.c:1646  */
    { addservicegroup((yyvsp[0].string)); FREE((yyvsp[0].string));}
#line 4857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1628 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4863 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1631 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 4875 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1638 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 4887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1647 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1663 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1679 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1684 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_CpuPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1691 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4935 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1698 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 4941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1699 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 4947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1700 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 4953 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1703 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4973 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1713 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryKbyteTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1718 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_MemoryPercentTotal;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4993 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1725 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapKbyte;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 5003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1730 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_SwapPercent;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 5013 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1737 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = Resource_Children;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 5023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1744 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 5033 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1751 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5039 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1752 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1753 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1756 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5057 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1757 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5063 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1760 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, false);
                  }
#line 5074 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1766 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = true;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                    addtimestamp(&timestampset, true);
                  }
#line 5084 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1773 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5090 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1774 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5096 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1775 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1776 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5108 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1777 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5114 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1778 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5120 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1781 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1782 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1783 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5138 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1784 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1785 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1786 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 5156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1789 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 5162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1790 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 5168 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1791 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 5174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1793 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1794 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 5186 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1796 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Alert; }
#line 5192 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1797 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5198 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1798 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Exec; }
#line 5204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1799 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Restart; }
#line 5210 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1800 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Start; }
#line 5216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1801 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Stop; }
#line 5222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1802 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Action_Unmonitor; }
#line 5228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1805 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 5240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1814 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == Action_Exec && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 5252 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1824 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1830 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1841 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 5287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1847 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 5300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1857 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = Action_Alert;
                  }
#line 5308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1860 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1863 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1866 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 5332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1871 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5341 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1876 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 5352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1882 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = true;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                    addchecksum(&checksumset);
                  }
#line 5362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1888 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 5368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1889 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 5374 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1890 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 5380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1893 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1900 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Inode;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5404 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1907 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1914 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_InodeFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5428 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1923 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1932 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_Space;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1939 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5468 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1948 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = Resource_SpaceFree;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1957 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                    addfsflag(&fsflagset);
                  }
#line 5489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1963 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1964 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 5501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1965 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 5507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1966 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 5513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1967 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 5519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1970 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1975 "src/p.y" /* yacc.c:1646  */
    {
                    permset.test_changes = true;
                    addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                    addperm(&permset);
                  }
#line 5539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1982 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = false;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1995 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, Action_Ignored);
                    FREE((yyvsp[0].string));
                  }
#line 5574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2002 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = true;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, Action_Ignored, 0);
                  }
#line 5585 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2010 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = false;
                  }
#line 5593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2013 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = true;
                  }
#line 5601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2019 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2025 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = true;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                    addsize(&sizeset);
                  }
#line 5622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2032 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5633 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2038 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2045 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2051 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2058 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5675 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2064 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2071 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkstatus(current, &linkstatusset);
                  }
#line 5694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2077 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinkspeed(current, &linkspeedset);
                  }
#line 5703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2082 "src/p.y" /* yacc.c:1646  */
    {
                    linksaturationset.operator = (yyvsp[-6].number);
                    linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                    addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addlinksaturation(current, &linksaturationset);
                  }
#line 5714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2090 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2098 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2106 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 5753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2114 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5766 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2122 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5779 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2130 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 5792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2140 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2148 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5818 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2156 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 5831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2164 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5844 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2172 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-7].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2180 "src/p.y" /* yacc.c:1646  */
    {
                    bandwidthset.operator = (yyvsp[-8].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                    bandwidthset.rangecount = (yyvsp[-5].number);
                    bandwidthset.range = (yyvsp[-4].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 5870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2190 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 5876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2193 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 5882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2194 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 5888 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2195 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 5894 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 5898 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2198 "src/p.y" /* yacc.c:1906  */



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

