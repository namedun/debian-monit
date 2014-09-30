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

#ifndef HAVE_SOL_IP
#include <netinet/in_systm.h>
#include <netinet/in.h>
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
#include "ssl.h"
#include "device.h"

// libmonit
#include "io/File.h"
#include "util/Str.h"


/* ------------------------------------------------------------- Definitions */

  struct IHavePrecedence {
    int daemon;
    int logfile;
    int pidfile;
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
  static int cfg_errflag = FALSE;
  static Service_T tail = NULL;
  static Service_T current = NULL;
  static Request_T urlrequest = NULL;
  static command_t command = NULL;
  static command_t command1 = NULL;
  static command_t command2 = NULL;
  static Service_T depend_list = NULL;
  static struct myuid uidset;
  static struct mygid gidset;
  static struct mystatus statusset;
  static struct myperm permset;
  static struct mysize sizeset;
  static struct myuptime uptimeset;
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
  static struct IHavePrecedence ihp = {FALSE, FALSE, FALSE};
  static struct myrate rate1 = {1, 1};
  static struct myrate rate2 = {1, 1};
  static char * htpasswd_file = NULL;
  static int    digesttype = DIGEST_CLEARTEXT;

#define BITMAP_MAX (sizeof(long long) * 8)


/* -------------------------------------------------------------- Prototypes */

  static void  preparse();
  static void  postparse();
  static void  addmail(char *, Mail_T, Mail_T *);
  static Service_T createservice(int, char *, char *, int (*)(Service_T));
  static void  addservice(Service_T);
  static void  adddependant(char *);
  static void  addservicegroup(char *);
  static void  addport(Port_T);
  static void  addresource(Resource_T);
  static void  addtimestamp(Timestamp_T, int);
  static void  addactionrate(ActionRate_T);
  static void  addsize(Size_T);
  static void  adduptime(Uptime_T);
  static void  addfilesystem(Filesystem_T);
  static void  addicmp(Icmp_T);
  static void  addgeneric(Port_T, char*, char*);
  static void  addcommand(int, unsigned);
  static void  addargument(char *);
  static void  addmmonit(URL_T, int, int, char *);
  static void  addmailserver(MailServer_T);
  static int   addcredentials(char *, char *, int, int);
#ifdef HAVE_LIBPAM
  static void  addpamauth(char *, int);
#endif
  static void  addhtpasswdentry(char *, char *, int);
  static uid_t get_uid(char *, uid_t);
  static gid_t get_gid(char *, gid_t);
  static void  addchecksum(Checksum_T);
  static void  addperm(Perm_T);
  static void  addmatch(Match_T, int, int);
  static void  addmatchpath(Match_T, int);
  static void  addstatus(Status_T);
  static Uid_T adduid(Uid_T);
  static Gid_T addgid(Gid_T);
  static void  addeuid(uid_t);
  static void  addegid(gid_t);
  static void  addeventaction(EventAction_T *, int, int);
  static void  seteventaction(EventAction_T *, int, int);
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


#line 300 "src/y.tab.c" /* yacc.c:339  */

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
    IDFILE = 285,
    STATEFILE = 286,
    SEND = 287,
    EXPECT = 288,
    EXPECTBUFFER = 289,
    CYCLE = 290,
    COUNT = 291,
    REMINDER = 292,
    PIDFILE = 293,
    START = 294,
    STOP = 295,
    PATHTOK = 296,
    HOST = 297,
    HOSTNAME = 298,
    PORT = 299,
    TYPE = 300,
    UDP = 301,
    TCP = 302,
    TCPSSL = 303,
    PROTOCOL = 304,
    CONNECTION = 305,
    ALERT = 306,
    NOALERT = 307,
    MAILFORMAT = 308,
    UNIXSOCKET = 309,
    SIGNATURE = 310,
    TIMEOUT = 311,
    RETRY = 312,
    RESTART = 313,
    CHECKSUM = 314,
    EVERY = 315,
    NOTEVERY = 316,
    DEFAULT = 317,
    HTTP = 318,
    HTTPS = 319,
    APACHESTATUS = 320,
    FTP = 321,
    SMTP = 322,
    SMTPS = 323,
    POP = 324,
    IMAP = 325,
    CLAMAV = 326,
    NNTP = 327,
    NTP3 = 328,
    MYSQL = 329,
    DNS = 330,
    WEBSOCKET = 331,
    SSH = 332,
    DWP = 333,
    LDAP2 = 334,
    LDAP3 = 335,
    RDATE = 336,
    RSYNC = 337,
    TNS = 338,
    PGSQL = 339,
    POSTFIXPOLICY = 340,
    SIP = 341,
    LMTP = 342,
    GPS = 343,
    RADIUS = 344,
    MEMCACHE = 345,
    STRING = 346,
    PATH = 347,
    MAILADDR = 348,
    MAILFROM = 349,
    MAILREPLYTO = 350,
    MAILSUBJECT = 351,
    MAILBODY = 352,
    SERVICENAME = 353,
    STRINGNAME = 354,
    NUMBER = 355,
    PERCENT = 356,
    LOGLIMIT = 357,
    CLOSELIMIT = 358,
    DNSLIMIT = 359,
    KEEPALIVELIMIT = 360,
    REPLYLIMIT = 361,
    REQUESTLIMIT = 362,
    STARTLIMIT = 363,
    WAITLIMIT = 364,
    GRACEFULLIMIT = 365,
    CLEANUPLIMIT = 366,
    REAL = 367,
    CHECKPROC = 368,
    CHECKFILESYS = 369,
    CHECKFILE = 370,
    CHECKDIR = 371,
    CHECKHOST = 372,
    CHECKSYSTEM = 373,
    CHECKFIFO = 374,
    CHECKPROGRAM = 375,
    CHILDREN = 376,
    SYSTEM = 377,
    STATUS = 378,
    ORIGIN = 379,
    VERSIONOPT = 380,
    RESOURCE = 381,
    MEMORY = 382,
    TOTALMEMORY = 383,
    LOADAVG1 = 384,
    LOADAVG5 = 385,
    LOADAVG15 = 386,
    SWAP = 387,
    MODE = 388,
    ACTIVE = 389,
    PASSIVE = 390,
    MANUAL = 391,
    CPU = 392,
    TOTALCPU = 393,
    CPUUSER = 394,
    CPUSYSTEM = 395,
    CPUWAIT = 396,
    GROUP = 397,
    REQUEST = 398,
    DEPENDS = 399,
    BASEDIR = 400,
    SLOT = 401,
    EVENTQUEUE = 402,
    SECRET = 403,
    HOSTHEADER = 404,
    UID = 405,
    EUID = 406,
    GID = 407,
    MMONIT = 408,
    INSTANCE = 409,
    USERNAME = 410,
    PASSWORD = 411,
    TIMESTAMP = 412,
    CHANGED = 413,
    SECOND = 414,
    MINUTE = 415,
    HOUR = 416,
    DAY = 417,
    SSLAUTO = 418,
    SSLV2 = 419,
    SSLV3 = 420,
    TLSV1 = 421,
    TLSV11 = 422,
    TLSV12 = 423,
    CERTMD5 = 424,
    BYTE = 425,
    KILOBYTE = 426,
    MEGABYTE = 427,
    GIGABYTE = 428,
    INODE = 429,
    SPACE = 430,
    PERMISSION = 431,
    SIZE = 432,
    MATCH = 433,
    NOT = 434,
    IGNORE = 435,
    ACTION = 436,
    UPTIME = 437,
    EXEC = 438,
    UNMONITOR = 439,
    PING = 440,
    ICMP = 441,
    ICMPECHO = 442,
    NONEXIST = 443,
    EXIST = 444,
    INVALID = 445,
    DATA = 446,
    RECOVERED = 447,
    PASSED = 448,
    SUCCEEDED = 449,
    URL = 450,
    CONTENT = 451,
    PID = 452,
    PPID = 453,
    FSFLAG = 454,
    REGISTER = 455,
    CREDENTIALS = 456,
    URLOBJECT = 457,
    TARGET = 458,
    TIMESPEC = 459,
    HTTPHEADER = 460,
    MAXFORWARD = 461,
    FIPS = 462,
    GREATER = 463,
    LESS = 464,
    EQUAL = 465,
    NOTEQUAL = 466
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
#define IDFILE 285
#define STATEFILE 286
#define SEND 287
#define EXPECT 288
#define EXPECTBUFFER 289
#define CYCLE 290
#define COUNT 291
#define REMINDER 292
#define PIDFILE 293
#define START 294
#define STOP 295
#define PATHTOK 296
#define HOST 297
#define HOSTNAME 298
#define PORT 299
#define TYPE 300
#define UDP 301
#define TCP 302
#define TCPSSL 303
#define PROTOCOL 304
#define CONNECTION 305
#define ALERT 306
#define NOALERT 307
#define MAILFORMAT 308
#define UNIXSOCKET 309
#define SIGNATURE 310
#define TIMEOUT 311
#define RETRY 312
#define RESTART 313
#define CHECKSUM 314
#define EVERY 315
#define NOTEVERY 316
#define DEFAULT 317
#define HTTP 318
#define HTTPS 319
#define APACHESTATUS 320
#define FTP 321
#define SMTP 322
#define SMTPS 323
#define POP 324
#define IMAP 325
#define CLAMAV 326
#define NNTP 327
#define NTP3 328
#define MYSQL 329
#define DNS 330
#define WEBSOCKET 331
#define SSH 332
#define DWP 333
#define LDAP2 334
#define LDAP3 335
#define RDATE 336
#define RSYNC 337
#define TNS 338
#define PGSQL 339
#define POSTFIXPOLICY 340
#define SIP 341
#define LMTP 342
#define GPS 343
#define RADIUS 344
#define MEMCACHE 345
#define STRING 346
#define PATH 347
#define MAILADDR 348
#define MAILFROM 349
#define MAILREPLYTO 350
#define MAILSUBJECT 351
#define MAILBODY 352
#define SERVICENAME 353
#define STRINGNAME 354
#define NUMBER 355
#define PERCENT 356
#define LOGLIMIT 357
#define CLOSELIMIT 358
#define DNSLIMIT 359
#define KEEPALIVELIMIT 360
#define REPLYLIMIT 361
#define REQUESTLIMIT 362
#define STARTLIMIT 363
#define WAITLIMIT 364
#define GRACEFULLIMIT 365
#define CLEANUPLIMIT 366
#define REAL 367
#define CHECKPROC 368
#define CHECKFILESYS 369
#define CHECKFILE 370
#define CHECKDIR 371
#define CHECKHOST 372
#define CHECKSYSTEM 373
#define CHECKFIFO 374
#define CHECKPROGRAM 375
#define CHILDREN 376
#define SYSTEM 377
#define STATUS 378
#define ORIGIN 379
#define VERSIONOPT 380
#define RESOURCE 381
#define MEMORY 382
#define TOTALMEMORY 383
#define LOADAVG1 384
#define LOADAVG5 385
#define LOADAVG15 386
#define SWAP 387
#define MODE 388
#define ACTIVE 389
#define PASSIVE 390
#define MANUAL 391
#define CPU 392
#define TOTALCPU 393
#define CPUUSER 394
#define CPUSYSTEM 395
#define CPUWAIT 396
#define GROUP 397
#define REQUEST 398
#define DEPENDS 399
#define BASEDIR 400
#define SLOT 401
#define EVENTQUEUE 402
#define SECRET 403
#define HOSTHEADER 404
#define UID 405
#define EUID 406
#define GID 407
#define MMONIT 408
#define INSTANCE 409
#define USERNAME 410
#define PASSWORD 411
#define TIMESTAMP 412
#define CHANGED 413
#define SECOND 414
#define MINUTE 415
#define HOUR 416
#define DAY 417
#define SSLAUTO 418
#define SSLV2 419
#define SSLV3 420
#define TLSV1 421
#define TLSV11 422
#define TLSV12 423
#define CERTMD5 424
#define BYTE 425
#define KILOBYTE 426
#define MEGABYTE 427
#define GIGABYTE 428
#define INODE 429
#define SPACE 430
#define PERMISSION 431
#define SIZE 432
#define MATCH 433
#define NOT 434
#define IGNORE 435
#define ACTION 436
#define UPTIME 437
#define EXEC 438
#define UNMONITOR 439
#define PING 440
#define ICMP 441
#define ICMPECHO 442
#define NONEXIST 443
#define EXIST 444
#define INVALID 445
#define DATA 446
#define RECOVERED 447
#define PASSED 448
#define SUCCEEDED 449
#define URL 450
#define CONTENT 451
#define PID 452
#define PPID 453
#define FSFLAG 454
#define REGISTER 455
#define CREDENTIALS 456
#define URLOBJECT 457
#define TARGET 458
#define TIMESPEC 459
#define HTTPHEADER 460
#define MAXFORWARD 461
#define FIPS 462
#define GREATER 463
#define LESS 464
#define EQUAL 465
#define NOTEQUAL 466

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 260 "src/p.y" /* yacc.c:355  */

  URL_T url;
  float real;
  int   number;
  char *string;

#line 769 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 784 "src/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  218
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  533
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  946

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   466

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
       2,     2,     2,     2,     2,     2,     2,     2,   214,     2,
       2,     2,     2,     2,   215,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   216,     2,   217,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   212,     2,   213,     2,     2,     2,     2,
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
     205,   206,   207,   208,   209,   210,   211
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   306,   306,   307,   310,   311,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   338,   339,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   363,
     364,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   386,   387,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   408,   409,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   428,   429,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   446,   447,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   461,   462,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   481,   482,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   497,   501,   504,   510,   520,
     521,   524,   531,   536,   543,   551,   554,   559,   562,   566,
     572,   577,   582,   590,   593,   594,   597,   603,   604,   609,
     616,   625,   631,   632,   635,   653,   672,   673,   676,   677,
     678,   679,   682,   685,   696,   697,   700,   701,   702,   705,
     706,   709,   710,   713,   714,   717,   718,   721,   722,   725,
     728,   733,   741,   746,   749,   757,   761,   765,   769,   773,
     773,   780,   780,   787,   787,   794,   794,   801,   809,   810,
     813,   817,   818,   821,   824,   827,   834,   843,   848,   851,
     856,   861,   867,   879,   884,   891,   900,   903,   908,   911,
     917,   920,   925,   926,   929,   930,   933,   934,   937,   938,
     939,   940,   943,   944,   945,   948,   949,   952,   953,   956,
     968,   978,   987,   994,  1003,  1009,  1012,  1015,  1020,  1023,
    1026,  1034,  1039,  1040,  1043,  1044,  1045,  1046,  1047,  1054,
    1061,  1064,  1067,  1070,  1073,  1076,  1079,  1082,  1085,  1091,
    1094,  1097,  1100,  1103,  1106,  1109,  1112,  1116,  1119,  1122,
    1125,  1131,  1134,  1137,  1140,  1143,  1146,  1149,  1152,  1155,
    1158,  1161,  1166,  1167,  1170,  1173,  1178,  1179,  1182,  1185,
    1188,  1191,  1196,  1197,  1200,  1205,  1206,  1211,  1212,  1215,
    1216,  1217,  1218,  1219,  1222,  1228,  1234,  1239,  1244,  1245,
    1253,  1258,  1259,  1262,  1266,  1270,  1274,  1278,  1282,  1286,
    1290,  1294,  1298,  1304,  1310,  1315,  1320,  1327,  1330,  1335,
    1338,  1343,  1346,  1351,  1354,  1359,  1362,  1367,  1373,  1381,
    1382,  1388,  1389,  1392,  1396,  1399,  1403,  1408,  1411,  1414,
    1415,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,
    1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,
    1437,  1438,  1439,  1442,  1443,  1446,  1447,  1450,  1451,  1452,
    1453,  1456,  1460,  1464,  1470,  1473,  1476,  1482,  1486,  1489,
    1490,  1493,  1496,  1503,  1512,  1518,  1519,  1522,  1523,  1524,
    1525,  1528,  1534,  1535,  1538,  1539,  1540,  1541,  1544,  1549,
    1556,  1563,  1564,  1565,  1568,  1573,  1578,  1583,  1590,  1595,
    1602,  1609,  1616,  1617,  1618,  1621,  1622,  1625,  1631,  1638,
    1639,  1640,  1641,  1642,  1643,  1646,  1647,  1648,  1649,  1650,
    1653,  1654,  1655,  1656,  1657,  1658,  1659,  1662,  1671,  1680,
    1681,  1687,  1697,  1698,  1704,  1714,  1717,  1720,  1723,  1728,
    1732,  1739,  1745,  1746,  1747,  1750,  1757,  1766,  1775,  1784,
    1789,  1790,  1791,  1792,  1793,  1796,  1803,  1810,  1816,  1823,
    1831,  1834,  1840,  1846,  1853,  1859,  1866,  1872,  1879,  1885,
    1892,  1895,  1896,  1897
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
  "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "IDFILE", "STATEFILE", "SEND",
  "EXPECT", "EXPECTBUFFER", "CYCLE", "COUNT", "REMINDER", "PIDFILE",
  "START", "STOP", "PATHTOK", "HOST", "HOSTNAME", "PORT", "TYPE", "UDP",
  "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT",
  "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY", "RESTART",
  "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS",
  "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "IMAP", "CLAMAV", "NNTP",
  "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP", "LDAP2", "LDAP3",
  "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY", "SIP", "LMTP", "GPS",
  "RADIUS", "MEMCACHE", "STRING", "PATH", "MAILADDR", "MAILFROM",
  "MAILREPLYTO", "MAILSUBJECT", "MAILBODY", "SERVICENAME", "STRINGNAME",
  "NUMBER", "PERCENT", "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT",
  "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT", "STARTLIMIT",
  "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL", "CHECKPROC",
  "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST", "CHECKSYSTEM",
  "CHECKFIFO", "CHECKPROGRAM", "CHILDREN", "SYSTEM", "STATUS", "ORIGIN",
  "VERSIONOPT", "RESOURCE", "MEMORY", "TOTALMEMORY", "LOADAVG1",
  "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE", "MANUAL",
  "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST",
  "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER",
  "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD",
  "TIMESTAMP", "CHANGED", "SECOND", "MINUTE", "HOUR", "DAY", "SSLAUTO",
  "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "CERTMD5", "BYTE",
  "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE", "PERMISSION",
  "SIZE", "MATCH", "NOT", "IGNORE", "ACTION", "UPTIME", "EXEC",
  "UNMONITOR", "PING", "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID",
  "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID",
  "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT", "TARGET",
  "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER", "LESS",
  "EQUAL", "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept",
  "cfgfile", "statement_list", "statement", "optproclist", "optproc",
  "optfilelist", "optfile", "optfilesyslist", "optfilesys", "optdirlist",
  "optdir", "opthostlist", "opthost", "optsystemlist", "optsystem",
  "optfifolist", "optfifo", "optstatuslist", "optstatus", "setalert",
  "setdaemon", "startdelay", "setexpectbuffer", "setinit", "setfips",
  "setlog", "seteventqueue", "setidfile", "setstatefile", "setpid",
  "setmmonits", "mmonitlist", "mmonit", "credentials", "setmailservers",
  "setmailformat", "sethttpd", "mailserverlist", "mailserver", "httpdlist",
  "httpdoption", "ssl", "optssllist", "optssl", "sslenable", "ssldisable",
  "signature", "sigenable", "sigdisable", "bindaddress", "pemfile",
  "clientpemfile", "allowselfcert", "allow", "$@1", "$@2", "$@3", "$@4",
  "allowuserlist", "allowuser", "readonly", "checkproc", "checkfile",
  "checkfilesys", "checkdir", "checkhost", "checksystem", "checkfifo",
  "checkprogram", "start", "stop", "restart", "argumentlist",
  "useroptionlist", "argument", "useroption", "username", "password",
  "hostname", "connection", "connectionunix", "icmp", "host", "port",
  "unixsocket", "type", "certmd5", "sslversion", "protocol",
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
  "resourceloadavg", "value", "timestamp", "operator", "time", "action",
  "action1", "action2", "rate1", "rate2", "recovery", "checksum",
  "hashtype", "inode", "space", "fsflag", "unit", "permission", "match",
  "matchflagnot", "size", "uid", "euid", "gid", "icmptype", "reminder", YY_NULLPTR
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
     465,   466,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -679

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-679)))

#define YYTABLE_NINF -226

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     514,   250,   -51,   -35,   -27,   -11,     3,    42,    52,    65,
     145,   514,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   284,  -679,  -679,  -679,    16,    74,   107,   221,  -679,
     176,   198,   226,   279,   292,   180,   137,   196,  -679,   -21,
      -3,   372,   377,   393,   411,  -679,   397,   415,  -679,  -679,
     451,    96,   700,   716,     7,   286,   286,   343,   286,   -52,
     273,   289,   381,   391,   284,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,    37,  -679,  -679,  -679,  -679,  -679,
     436,   716,   585,   482,  -679,   456,   -18,     0,  -679,   405,
    -679,  -679,   260,  -679,  -679,   424,   425,   407,   475,   196,
     349,   331,   339,   612,   530,   485,   491,   367,   379,   517,
     519,   523,   524,   286,   237,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,    15,   443,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,    27,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,    26,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,    47,
     559,   452,  -679,  -679,   230,  -679,   230,  -679,   230,   609,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   391,  -679,  -679,
     435,   612,   530,   685,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   256,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   558,   625,  -679,   551,   -14,   497,   555,  -679,   613,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     -43,  -679,   513,  -679,   277,   349,   459,  -679,   424,   612,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   356,  -679,   567,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   236,   201,   191,   191,
     191,  -679,  -679,  -679,   191,   191,   326,   191,   734,  -679,
    -679,  -679,  -679,  -679,   191,   101,   191,    62,   191,   452,
     492,  -679,   494,   231,   470,   191,   191,   516,   583,   639,
     633,   477,   636,   584,   600,   601,   -36,   150,    -6,  -679,
    -679,  -679,    -6,  -679,    -6,  -679,  -679,  -679,   612,   422,
    -679,   191,  -679,  -679,  -679,   691,  -679,  -679,   191,  -679,
    -679,  -679,   191,   579,  -679,   604,   550,  -679,  -679,   615,
     277,   548,   617,  -679,   395,  -679,  -679,   610,  -679,  -679,
    -679,  -679,  -679,  -679,   540,  -679,  -679,    23,   500,   661,
    -679,   680,   620,    73,  -679,   630,   225,   240,   259,   679,
    -679,  -679,  -679,  -679,  -679,   628,    41,    59,   637,   645,
     600,   600,   646,    -4,  -679,   725,    87,  -679,  -679,   647,
     677,   649,   600,   600,   694,   650,   449,   466,   600,   654,
     166,  -679,   657,   475,   572,   639,   569,   663,   679,   735,
     770,   619,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     535,   661,   179,  -679,   774,   682,   683,   600,  -679,   497,
    -679,   540,  -679,  -679,    20,   689,    33,    51,   545,   556,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     690,  -679,  -679,   661,   530,  -679,   627,  -679,  -679,   600,
     600,   600,   600,   600,   600,   488,    35,  -679,   686,  -679,
     260,   695,   260,   696,   698,   779,   787,   401,  -679,   755,
      91,  -679,  -679,   600,    28,   401,   796,   799,   600,   260,
     600,   600,  -679,  -679,   800,   486,   705,   260,  -679,   600,
    -679,   475,   386,   475,  -679,    35,   802,    91,  -679,   661,
     530,   726,   260,    91,   727,   600,   824,   277,  -679,   743,
     748,   749,   629,   763,   765,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,   380,   380,  -679,   530,  -679,  -679,
     852,   854,   864,   865,   868,   869,  -679,  -679,   277,   788,
     810,   858,   475,   557,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    91,    91,  -679,  -679,  -679,  -679,   600,  -679,  -679,
    -679,  -679,  -679,   286,  -679,  -679,   874,   897,   812,   899,
     600,    91,    91,   900,   600,   901,   902,    91,   600,   903,
     600,   600,   904,   600,  -679,  -679,   819,   855,   569,   290,
     874,   530,  -679,  -679,  -679,   874,  -679,   906,    91,   540,
     825,   859,   860,   861,   862,   931,   863,   866,  -679,  -679,
    -679,  -679,  -679,  -679,    91,    91,    91,    91,    91,    91,
     540,  -679,  -679,  -679,  -679,  -679,   789,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   214,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   751,  -679,  -679,
     808,  -679,   855,  -679,  -679,  -679,   952,   220,   956,  -679,
      91,   600,    91,   955,  -679,  -679,    91,   957,    91,    91,
    -679,   958,    91,   959,   960,    91,   961,  -679,   867,   600,
     475,  -679,  -679,  -679,  -679,  -679,    91,  -679,  -679,   862,
     862,   862,   931,  -679,   862,  -679,  -679,  -679,  -679,  -679,
     874,   874,   874,   874,   874,   874,  -679,   103,   103,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   962,
    -679,   870,   878,   871,   880,   214,  -679,   167,   764,   882,
    -679,   600,    91,   239,   255,   874,   969,   874,    91,  -679,
      91,  -679,  -679,    91,   874,    91,    91,   874,    91,  -679,
     970,   855,   874,   862,   862,   862,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,   885,   191,   886,   888,  -679,  -679,
    -679,  -679,  -679,  -679,   877,   881,   883,   884,   887,   889,
     890,   891,   892,   893,   789,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   894,  -679,  -679,   975,   874,   895,   895,   895,
    -679,    91,  -679,   874,   874,   874,  -679,   874,   874,  -679,
     874,    91,   600,  -679,  -679,   896,  -679,  -679,    92,   898,
     905,   907,   908,   909,   910,   911,   912,   913,   914,  -679,
    -679,    91,  -679,    10,   977,   980,   981,   874,  -679,  -679,
    -679,  -679,  -679,  -679,   874,   983,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   874,
    -679,   963,    91,    91,    91,  -679,  -679,    91,  -679,  -679,
    -679,  -679,  -679,  -679,   874,  -679
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     6,     7,    17,    18,    19,     8,     9,
      15,    16,    14,    10,    11,    12,    13,    28,    49,    68,
      86,     0,   116,   127,   143,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   413,
       0,     0,     0,     0,     0,   242,     0,     0,     1,     5,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,   102,   104,   105,   106,   108,
     109,   107,   110,   111,   413,   386,   112,   113,   114,   115,
      25,    26,    27,   165,   164,   159,   262,   373,   182,     0,
     170,   171,   510,   172,   387,     0,     0,     0,   373,   173,
     177,     0,     0,     0,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    40,
      41,    33,    34,    35,    39,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,   520,   520,    50,    51,    52,
      53,    54,    56,    58,    57,    65,    66,    67,    55,    62,
      59,    64,    63,    60,    61,     0,    69,    70,    71,    72,
      73,    74,    76,    75,    80,    81,    82,    83,    84,    85,
      77,    78,    79,     0,    87,    88,    89,    90,    91,    93,
      95,    94,    99,   100,   101,    92,    96,    97,    98,   274,
       0,     0,   256,   257,   369,   252,   369,   388,   369,     0,
     422,   423,   424,   425,   426,   427,   431,   428,   429,   103,
       0,     0,   531,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   132,   134,
     136,   135,   140,   141,   142,   133,   137,   138,   139,     0,
     144,   145,   146,   147,   149,   148,   150,   151,   152,   153,
     154,     0,     0,   158,     0,     0,   265,     0,   183,   267,
     186,   511,   512,   513,   514,   161,   417,   418,   419,   420,
       0,   415,   167,   169,   284,   177,     0,   174,     0,     0,
     393,   409,   392,   408,   406,   411,   398,   400,   410,   403,
     407,   391,   412,   396,   399,   402,   401,   395,   394,   404,
     405,   397,     0,   389,     0,   155,   233,   234,   235,   236,
     239,   238,   237,   240,   241,   243,   371,   274,   469,   469,
     469,   462,   463,   464,   469,   469,     0,   469,   489,   435,
     437,   438,   439,   440,   469,   502,   469,   502,   469,   521,
       0,   521,     0,     0,     0,   469,   469,     0,     0,   367,
       0,     0,     0,     0,   489,     0,     0,     0,   369,   253,
     254,   246,   369,   248,   369,   250,   421,   430,     0,     0,
     383,   469,   451,   452,   453,   489,   442,   447,   469,   445,
     446,   444,   469,     0,   166,     0,   262,   264,   263,     0,
     284,     0,     0,   179,   181,   180,   416,     0,   290,   285,
     286,   287,   288,   289,   282,   175,   178,     0,     0,   413,
     390,   532,     0,   371,   244,     0,     0,     0,     0,   278,
     474,   470,   471,   472,   473,     0,     0,     0,     0,     0,
     489,   489,     0,     0,   436,     0,     0,   503,   504,     0,
       0,     0,   489,   489,     0,     0,     0,     0,   489,     0,
       0,   275,     0,   373,     0,   367,   379,     0,   278,     0,
       0,     0,   258,   260,   259,   261,   255,   247,   249,   251,
       0,   413,     0,   443,     0,     0,     0,   489,   160,   265,
     266,   282,   374,   268,     0,     0,     0,     0,     0,     0,
     187,   188,   194,   194,   189,   203,   204,   190,   191,   168,
       0,   176,   414,   413,   531,   533,     0,   245,   277,   489,
     489,   489,   489,   489,   489,     0,   291,   460,   466,   465,
     510,   466,   510,     0,     0,     0,     0,   475,   490,     0,
       0,   466,   461,   489,   489,   475,     0,     0,   489,   510,
     489,   489,   519,   518,     0,   489,   466,   510,   368,   489,
     530,   373,     0,   373,   276,   291,     0,     0,   370,   413,
     531,   466,   510,     0,     0,   489,     0,   284,   184,     0,
       0,     0,   227,   215,     0,   209,   200,   206,   202,   208,
     199,   201,   205,   207,   193,   192,   283,   531,   156,   372,
       0,     0,     0,     0,     0,     0,   281,   279,   284,     0,
       0,     0,   373,   321,   322,   455,   454,   457,   456,   448,
     449,     0,     0,   476,   477,   478,   479,   489,   491,   484,
     485,   480,   483,     0,   486,   487,   495,     0,     0,     0,
     489,     0,     0,     0,   489,     0,     0,     0,   489,     0,
     489,   489,     0,   489,   381,   382,     0,   375,   379,     0,
     495,   531,   384,   459,   458,   495,   450,     0,     0,   282,
     216,   217,   218,     0,     0,   231,     0,     0,   212,   195,
     196,   197,   198,   157,     0,     0,     0,     0,     0,     0,
     282,   324,   325,   293,   337,   337,     0,   296,   309,   310,
     308,   299,   300,   305,   306,   303,   294,     0,   311,   295,
     301,   302,   312,   313,   314,   315,   307,   332,   316,   317,
       0,   319,   375,   323,   364,   365,     0,   481,     0,   434,
       0,   489,     0,     0,   468,   523,     0,     0,     0,     0,
     509,     0,     0,     0,     0,     0,     0,   380,     0,   489,
     373,   378,   377,   363,   385,   441,     0,   433,   185,     0,
       0,     0,   231,   230,   220,   228,   232,   214,   210,   211,
     495,   495,   495,   495,   495,   495,   280,   297,   298,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   292,
     351,     0,     0,     0,     0,   320,   326,     0,   335,     0,
     318,   489,     0,   482,     0,   495,     0,   495,     0,   501,
       0,   517,   516,     0,   495,     0,     0,   495,     0,   376,
       0,   375,   495,   222,   224,   226,   213,   229,   524,   525,
     526,   527,   528,   529,     0,   469,     0,     0,   348,   338,
     341,   339,   340,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   330,   328,   331,   329,   327,
     334,   333,     0,   304,   350,     0,   495,   492,   492,   492,
     515,     0,   499,   495,   495,   495,   505,   495,   495,   273,
     495,     0,   489,   432,   346,     0,   345,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     336,     0,   366,     0,     0,     0,     0,   495,   467,   522,
     506,   508,   507,   272,   495,     0,   344,   349,   343,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   495,
     493,     0,     0,     0,     0,   500,   270,     0,   271,   494,
     488,   496,   497,   498,   495,   269
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -679,  -679,  -679,   986,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,   926,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,   915,   717,  -679,  -679,  -679,  -679,   919,
    -679,  -679,  -679,   498,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -195,
    -491,   241,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     438,   603,   681,   -65,  -201,  -202,  -351,   608,   518,  -679,
     945,  -679,  -679,  -679,  -679,  -679,   549,  -472,  -387,   453,
    -679,   406,  -679,   227,  -679,  -679,   325,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,   169,   423,  -679,  -679,  -679,
     560,  -165,   598,  -108,  -678,   776,   368,  -679,   785,  1026,
    -679,  -151,  -263,   -76,   740,  -256,   790,    32,   823,   827,
    -679,   813,  -679,  -679,  -679,   693,  -679,  -679,   644,  -679,
    -679,  -679,  -203,  -679,  -679,  -177,  -679,  -380,    18,  -319,
     487,  -294,  -508,  -332,  -355,  -262,  -560,  -679,   687,  -679,
    -679,  -679,    43,   299,  -679,   916,  -679,    13,  -679,   208,
    -679,  -210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    60,   125,    61,   147,    62,   166,
      63,   184,    74,    75,    90,   224,    91,   234,    92,   250,
      13,    14,   263,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   109,   110,   287,    24,    25,    26,    97,    98,
     404,   500,   501,   594,   679,   502,   503,   504,   505,   506,
     507,   680,   681,   682,   508,   674,   759,   760,   761,   764,
     765,   767,    27,    28,    29,    30,    31,    32,    33,    34,
      76,    77,    78,   204,   368,   205,   370,   266,   400,   403,
      79,   130,    80,   362,   468,   429,   526,   511,   414,   612,
     613,   614,   795,   796,   798,   863,   777,   839,   840,   841,
     842,   843,   888,   800,   789,   790,    81,   132,   133,   134,
     463,   371,   424,   269,   749,    82,   563,   656,    83,    84,
      85,   312,   313,   114,   280,   281,    86,    87,    88,    89,
     217,   218,   260,   141,   338,   339,   233,   385,   386,   340,
     387,   388,   341,   390,   342,   343,   344,   530,   158,   435,
     627,   635,   636,   941,   445,   904,   729,   159,   450,   177,
     178,   179,   275,   160,   161,   350,   162,   142,   143,   144,
     465,   315
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     284,   206,   369,   208,   369,   372,   369,   374,   222,   470,
     436,   437,   380,   491,   199,   438,   439,   476,   442,   578,
     389,   476,   345,   476,   406,   446,   264,   451,    93,   455,
     484,   538,   111,   353,   353,   115,   459,   460,   116,   579,
     580,   373,   581,   375,   801,   930,   391,    50,   209,   420,
     365,   276,   277,   278,   279,   472,   267,   532,   326,   660,
     586,   638,   482,    51,   473,   665,   542,   609,   610,   485,
     379,    52,   476,   486,   163,   181,   197,   397,   588,   398,
     557,   195,   447,   448,   611,   535,   536,    53,   587,   358,
     111,    96,   138,   155,   174,   192,   539,   546,   547,   145,
     753,    54,   572,   554,   247,   755,   589,   200,    94,   245,
     931,   582,   583,   724,   725,   200,   420,   276,   277,   278,
     279,   447,   448,   242,   369,   423,   200,   200,   443,   422,
     629,   630,   576,   734,   735,    65,    66,   265,   418,   740,
      55,   528,   631,   882,   366,    58,   367,    44,    67,   632,
      56,   752,   210,   529,    68,   420,    69,    70,   112,   531,
     757,   406,   834,    57,   600,   601,   602,   603,   604,   605,
     405,   529,   346,   347,    95,   117,   770,   771,   772,   773,
     774,   775,   389,   346,   357,   354,   201,   541,   637,   639,
     669,   113,   348,   643,   349,   645,   646,   758,    96,   529,
     649,   355,   356,   477,   652,   201,   201,   478,   391,   479,
     828,   829,   830,   831,   832,   833,   220,   420,   776,   452,
     667,   690,   805,   366,   807,   367,   835,   480,   809,    71,
     811,   812,   359,   360,   814,   584,   512,   817,    72,   453,
      73,   474,   361,   358,   327,   870,   836,   872,   822,   221,
     475,   426,   837,   428,   876,   425,   791,   879,   860,    35,
     861,    36,   883,    37,    38,    99,   556,    39,   100,   164,
     182,   198,   726,   827,   633,   634,   146,   449,   529,   571,
      40,    41,   106,   107,    42,   733,   365,    64,    43,   737,
     101,   529,   422,   741,   866,   743,   744,   917,   746,   248,
     873,    44,   874,    45,   598,   875,   902,   877,   878,   918,
     880,   202,   203,   908,   909,   910,   519,   911,   912,   838,
     913,   202,   203,    65,    66,   520,   102,   202,   203,   629,
     630,   521,   827,   827,   827,    44,    67,   200,   792,   793,
     522,   631,    68,   514,    69,    70,   751,   935,   632,   430,
     523,   426,   427,   428,   936,   559,   200,   794,   328,   524,
     662,   180,   196,   907,   329,   330,   331,   332,   333,   938,
     366,   103,   367,   914,   334,   335,   806,   202,   203,   392,
     366,   426,   367,   428,   945,   104,   366,   683,   367,   366,
     246,   367,   105,   929,   820,   336,   361,    46,   108,   431,
     432,   433,   434,    47,   676,   570,   290,   449,   677,   678,
     494,   495,   291,   118,   393,   292,   201,    71,   119,   337,
     496,   497,   498,   212,   213,   214,    72,   121,    73,   944,
     271,   272,   273,   274,   120,   201,   207,   597,   122,   223,
     408,   409,   410,   411,   412,   413,   865,   867,   868,   869,
     499,   754,   476,   653,   124,   657,   123,    48,   318,   319,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     320,   321,   290,   633,   634,    65,    66,   211,   291,   293,
     215,   292,   294,   131,   151,   170,   188,    44,    67,   216,
      65,    66,   261,   661,    68,   262,    69,    70,   126,   148,
     167,   185,    44,    67,   722,   270,   295,   283,   296,    68,
     297,    69,    70,   298,   238,   254,   885,   282,   276,   277,
     278,   279,     1,   440,   441,   369,   803,   915,   225,   235,
     251,   267,   299,   300,   606,   607,   608,   301,   302,   303,
     550,   551,   304,   288,   305,   293,   306,   307,   294,   286,
     290,   289,   308,   309,   310,   311,   291,   552,   553,   292,
     623,   624,   625,   626,   823,   824,   825,   314,   727,   419,
     590,   591,   295,   616,   296,   618,   297,   316,    72,   298,
      73,   592,   593,   317,    71,   290,   443,   648,   249,   609,
     610,   291,   644,    72,   292,    73,   654,   655,   299,   300,
     651,   942,   943,   301,   302,   303,   905,   906,   304,   322,
     305,   323,   306,   307,   324,   664,   325,   363,   308,   309,
     310,   311,   351,   293,    65,    66,   294,     2,     3,     4,
       5,     6,     7,     8,     9,   481,    44,    67,   940,   940,
     940,   364,   821,    68,   376,    69,    70,   378,   395,   394,
     295,   396,   296,   399,   297,   401,   402,   298,   293,   407,
     416,   294,   290,   127,   149,   168,   186,   421,   291,   458,
     456,   292,   457,   452,   461,   462,   299,   300,   464,   466,
     467,   301,   302,   303,   469,   295,   304,   296,   305,   297,
     306,   307,   298,   226,   236,   252,   308,   309,   310,   311,
     443,   471,   487,   165,   488,   265,   490,   492,   493,   510,
     509,   299,   300,   513,   111,   515,   301,   302,   303,   183,
     516,   304,   518,   305,   525,   306,   307,    72,   527,    73,
     540,   308,   309,   310,   311,   293,   544,   533,   294,    65,
      66,   128,   150,   169,   187,   534,   537,   543,   569,   545,
     549,    44,    67,   548,   555,    65,    66,   558,    68,   560,
      69,    70,   295,   564,   296,   562,   297,    44,    67,   298,
     566,   227,   237,   253,    68,   567,    69,    70,   568,   573,
     585,   596,   574,   575,   621,   200,   599,   615,   299,   300,
     628,   443,   622,   301,   302,   303,   617,   619,   304,   620,
     305,   641,   306,   307,   642,   647,   650,   659,   308,   309,
     310,   311,   329,   330,   331,   332,   333,   381,   329,   330,
     331,   332,   333,   381,   382,   383,   384,   663,   666,   668,
     382,   383,   384,    71,   443,   670,   135,   152,   171,   189,
     671,   672,    72,   673,    73,   136,   153,   172,   190,    71,
     137,   154,   173,   191,  -219,   328,   675,   684,    72,   685,
      73,   329,   330,   331,   332,   333,   228,   239,   255,   686,
     687,   334,   335,   688,   689,   229,   240,   256,   728,   691,
     230,   241,   257,   139,   156,   175,   193,   140,   157,   176,
     194,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   692,   730,   731,   732,   736,   738,   739,   742,   745,
     747,   756,   748,   231,   243,   258,  -221,   232,   244,   259,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   766,
    -223,  -225,   762,   763,   797,   768,   799,   802,   769,   804,
     808,   855,   810,   813,   815,   816,   818,   819,   854,   856,
     862,   857,   858,   864,   871,   881,   884,   889,   886,   887,
     901,   890,   932,   891,   892,   933,   934,   893,   937,   894,
     895,   896,   897,   898,   900,   903,   916,    59,   939,   919,
     219,   595,   415,   826,   489,   129,   920,   577,   921,   922,
     923,   924,   925,   926,   927,   928,   268,   565,   658,   723,
     778,   517,   859,   899,   285,   561,   750,    49,   417,   483,
     377,   444,   640,     0,   454,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352
};

static const yytype_int16 yycheck[] =
{
     108,    66,   204,    68,   206,   206,   208,   208,    84,   364,
     329,   330,   222,   400,     7,   334,   335,   368,   337,   491,
     223,   372,     7,   374,   280,   344,    44,   346,    12,   348,
     385,    35,    53,     7,     7,    38,   355,   356,    41,    19,
      20,   206,    22,   208,   722,    35,   223,    98,   100,   312,
      56,    94,    95,    96,    97,    91,    56,   437,   123,   567,
      27,    33,   381,    98,   100,   573,   446,    32,    33,   388,
     221,    98,   423,   392,    61,    62,    63,    91,    27,    93,
     460,    63,    20,    21,    49,   440,   441,    98,    55,    42,
      53,    91,    60,    61,    62,    63,   100,   452,   453,     3,
     660,    98,   482,   458,    91,   665,    55,   100,    92,    91,
     100,    91,    92,   621,   622,   100,   379,    94,    95,    96,
      97,    20,    21,    91,   326,   326,   100,   100,   100,    56,
      39,    40,   487,   641,   642,    39,    40,   155,   289,   647,
      98,   100,    51,   821,   150,     0,   152,    51,    52,    58,
      98,   659,   204,   112,    58,   418,    60,    61,   179,   100,
     668,   417,    59,    98,   519,   520,   521,   522,   523,   524,
     213,   112,   157,   158,   100,   178,   684,   685,   686,   687,
     688,   689,   385,   157,   158,   158,   179,   100,   543,   544,
     577,   212,   177,   548,   179,   550,   551,   669,    91,   112,
     555,   174,   175,   368,   559,   179,   179,   372,   385,   374,
     770,   771,   772,   773,   774,   775,   179,   480,   690,   157,
     575,   608,   730,   150,   732,   152,   123,   378,   736,   133,
     738,   739,   185,   186,   742,   215,   213,   745,   142,   177,
     144,    91,   195,    42,     7,   805,   143,   807,   756,   212,
     100,   150,   149,   152,   814,    54,    42,   817,    91,     9,
      93,    11,   822,    13,    14,    44,   100,    17,    92,    61,
      62,    63,   627,   764,   183,   184,   180,   176,   112,   100,
      30,    31,   145,   146,    34,   640,    56,     3,    38,   644,
      92,   112,    56,   648,   802,   650,   651,   205,   653,    91,
     808,    51,   810,    53,   514,   813,   866,   815,   816,   217,
     818,    91,    92,   873,   874,   875,    91,   877,   878,   216,
     880,    91,    92,    39,    40,   100,   100,    91,    92,    39,
      40,    91,   823,   824,   825,    51,    52,   100,   124,   125,
     100,    51,    58,   419,    60,    61,    56,   907,    58,   158,
      91,   150,   151,   152,   914,   463,   100,   143,   121,   100,
     570,    62,    63,   871,   127,   128,   129,   130,   131,   929,
     150,    92,   152,   881,   137,   138,   731,    91,    92,   123,
     150,   150,   152,   152,   944,    93,   150,   597,   152,   150,
      91,   152,   212,   901,   749,   158,   195,   147,   202,   208,
     209,   210,   211,   153,    24,   481,    50,   176,    28,    29,
      15,    16,    56,    41,   158,    59,   179,   133,    41,   182,
      25,    26,    27,   134,   135,   136,   142,    16,   144,   937,
     170,   171,   172,   173,    41,   179,    93,   513,    41,     3,
     163,   164,   165,   166,   167,   168,   801,   192,   193,   194,
      55,   661,   803,   561,     3,   563,    41,   207,    91,    92,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
      91,    92,    50,   183,   184,    39,    40,   204,    56,   123,
      99,    59,   126,    60,    61,    62,    63,    51,    52,    98,
      39,    40,    10,   569,    58,    39,    60,    61,    60,    61,
      62,    63,    51,    52,   612,   100,   150,   100,   152,    58,
     154,    60,    61,   157,    91,    92,   835,    92,    94,    95,
      96,    97,     8,   197,   198,   727,   727,   882,    90,    91,
      92,    56,   176,   177,    46,    47,    48,   181,   182,   183,
      91,    92,   186,   212,   188,   123,   190,   191,   126,   200,
      50,   212,   196,   197,   198,   199,    56,    91,    92,    59,
     159,   160,   161,   162,   759,   760,   761,    37,   633,   213,
      25,    26,   150,   530,   152,   532,   154,    92,   142,   157,
     144,    25,    26,    92,   133,    50,   100,   101,     3,    32,
      33,    56,   549,   142,    59,   144,   210,   211,   176,   177,
     557,   933,   934,   181,   182,   183,   868,   869,   186,    92,
     188,    92,   190,   191,    91,   572,    92,    58,   196,   197,
     198,   199,   179,   123,    39,    40,   126,   113,   114,   115,
     116,   117,   118,   119,   120,   213,    51,    52,   932,   933,
     934,   189,   750,    58,    35,    60,    61,   212,    23,    91,
     150,   100,   152,   156,   154,   100,    43,   157,   123,   146,
     201,   126,    50,    60,    61,    62,    63,   100,    56,   199,
     178,    59,   178,   157,    91,    36,   176,   177,    45,   202,
      44,   181,   182,   183,   100,   150,   186,   152,   188,   154,
     190,   191,   157,    90,    91,    92,   196,   197,   198,   199,
     100,   100,   123,     3,   100,   155,    91,   159,    91,   169,
     100,   176,   177,   213,    53,    35,   181,   182,   183,     3,
     100,   186,    92,   188,    45,   190,   191,   142,   100,   144,
       5,   196,   197,   198,   199,   123,    59,   100,   126,    39,
      40,    60,    61,    62,    63,   100,   100,   100,   213,   100,
     100,    51,    52,    59,   100,    39,    40,   100,    58,   187,
      60,    61,   150,   100,   152,   196,   154,    51,    52,   157,
      35,    90,    91,    92,    58,     5,    60,    61,   159,     5,
      91,    91,   100,   100,     5,   100,   159,   101,   176,   177,
      35,   100,     5,   181,   182,   183,   101,   101,   186,   101,
     188,     5,   190,   191,     5,     5,   101,     5,   196,   197,
     198,   199,   127,   128,   129,   130,   131,   132,   127,   128,
     129,   130,   131,   132,   139,   140,   141,   101,   101,     5,
     139,   140,   141,   133,   100,    92,    60,    61,    62,    63,
      92,    92,   142,   214,   144,    60,    61,    62,    63,   133,
      60,    61,    62,    63,    91,   121,    91,     5,   142,     5,
     144,   127,   128,   129,   130,   131,    90,    91,    92,     5,
       5,   137,   138,     5,     5,    90,    91,    92,     4,    91,
      90,    91,    92,    60,    61,    62,    63,    60,    61,    62,
      63,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    91,     5,    91,     5,     5,     5,     5,     5,     5,
      91,     5,    57,    90,    91,    92,    91,    90,    91,    92,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    18,
      91,    91,    91,    91,   203,    92,   148,     5,    92,     3,
       5,    91,     5,     5,     5,     5,     5,   100,     6,    91,
     206,   100,    92,    91,     5,     5,    91,   100,    92,    91,
       5,   100,     5,   100,   100,     5,     5,   100,     5,   100,
     100,   100,   100,   100,   100,   100,   100,    11,    35,   101,
      74,   503,   285,   762,   396,    60,   101,   489,   101,   101,
     101,   101,   101,   101,   101,   101,    97,   468,   565,   613,
     695,   423,   795,   854,   109,   465,   658,     1,   288,   385,
     217,   338,   545,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   113,   114,   115,   116,   117,   118,   119,   120,
     219,   220,   221,   238,   239,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   253,   254,   255,   280,   281,   282,
     283,   284,   285,   286,   287,     9,    11,    13,    14,    17,
      30,    31,    34,    38,    51,    53,   147,   153,   207,   337,
      98,    98,    98,    98,    98,    98,    98,    98,     0,   221,
     222,   224,   226,   228,     3,    39,    40,    52,    58,    60,
      61,   133,   142,   144,   230,   231,   288,   289,   290,   298,
     300,   324,   333,   336,   337,   338,   344,   345,   346,   347,
     232,   234,   236,    12,    92,   100,    91,   256,   257,    44,
      92,    92,   100,    92,    93,   212,   145,   146,   202,   250,
     251,    53,   179,   212,   341,    38,    41,   178,    41,    41,
      41,    16,    41,    41,     3,   223,   288,   289,   290,   298,
     299,   324,   325,   326,   327,   333,   336,   344,   345,   346,
     347,   351,   385,   386,   387,     3,   180,   225,   288,   289,
     290,   324,   333,   336,   344,   345,   346,   347,   366,   375,
     381,   382,   384,   385,   387,     3,   227,   288,   289,   290,
     324,   333,   336,   344,   345,   346,   347,   377,   378,   379,
     381,   385,   387,     3,   229,   288,   289,   290,   324,   333,
     336,   344,   345,   346,   347,   366,   381,   385,   387,     7,
     100,   179,    91,    92,   291,   293,   291,    93,   291,   100,
     204,   204,   134,   135,   136,    99,    98,   348,   349,   231,
     179,   212,   341,     3,   233,   288,   289,   290,   333,   336,
     344,   346,   347,   354,   235,   288,   289,   290,   324,   333,
     336,   344,   345,   346,   347,   366,   381,   385,   387,     3,
     237,   288,   289,   290,   324,   333,   336,   344,   346,   347,
     350,    10,    39,   240,    44,   155,   295,    56,   257,   331,
     100,   170,   171,   172,   173,   380,    94,    95,    96,    97,
     342,   343,    92,   100,   331,   251,   200,   252,   212,   212,
      50,    56,    59,   123,   126,   150,   152,   154,   157,   176,
     177,   181,   182,   183,   186,   188,   190,   191,   196,   197,
     198,   199,   339,   340,    37,   389,    92,    92,    91,    92,
      91,    92,    92,    92,    91,    92,   291,     7,   121,   127,
     128,   129,   130,   131,   137,   138,   158,   182,   352,   353,
     357,   360,   362,   363,   364,     7,   157,   158,   177,   179,
     383,   179,   383,     7,   158,   174,   175,   158,    42,   185,
     186,   195,   301,    58,   189,    56,   150,   152,   292,   293,
     294,   329,   292,   329,   292,   329,    35,   349,   212,   339,
     389,   132,   139,   140,   141,   355,   356,   358,   359,   360,
     361,   363,   123,   158,    91,    23,   100,    91,    93,   156,
     296,   100,    43,   297,   258,   213,   343,   146,   163,   164,
     165,   166,   167,   168,   306,   252,   201,   342,   339,   213,
     340,   100,    56,   292,   330,    54,   150,   151,   152,   303,
     158,   208,   209,   210,   211,   367,   367,   367,   367,   367,
     197,   198,   367,   100,   353,   372,   367,    20,    21,   176,
     376,   367,   157,   177,   376,   367,   178,   178,   199,   367,
     367,    91,    36,   328,    45,   388,   202,    44,   302,   100,
     372,   100,    91,   100,    91,   100,   294,   329,   329,   329,
     339,   213,   367,   356,   372,   367,   367,   123,   100,   295,
      91,   306,   159,    91,    15,    16,    25,    26,    27,    55,
     259,   260,   263,   264,   265,   266,   267,   268,   272,   100,
     169,   305,   213,   213,   341,    35,   100,   330,    92,    91,
     100,    91,   100,    91,   100,    45,   304,   100,   100,   112,
     365,   100,   365,   100,   100,   372,   372,   100,    35,   100,
       5,   100,   365,   100,    59,   100,   372,   372,    59,   100,
      91,    92,    91,    92,   372,   100,   100,   365,   100,   331,
     187,   328,   196,   334,   100,   304,    35,     5,   159,   213,
     341,   100,   365,     5,   100,   100,   372,   296,   305,    19,
      20,    22,    91,    92,   215,    91,    27,    55,    27,    55,
      25,    26,    25,    26,   261,   261,    91,   341,   389,   159,
     372,   372,   372,   372,   372,   372,    46,    47,    48,    32,
      33,    49,   307,   308,   309,   101,   380,   101,   380,   101,
     101,     5,     5,   159,   160,   161,   162,   368,    35,    39,
      40,    51,    58,   183,   184,   369,   370,   372,    33,   372,
     368,     5,     5,   372,   380,   372,   372,     5,   101,   372,
     101,   380,   372,   331,   210,   211,   335,   331,   307,     5,
     370,   341,   389,   101,   380,   370,   101,   372,     5,   306,
      92,    92,    92,   214,   273,    91,    24,    28,    29,   262,
     269,   270,   271,   389,     5,     5,     5,     5,     5,     5,
     306,    91,    91,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   331,   309,   370,   370,   372,   291,     4,   374,
       5,    91,     5,   372,   370,   370,     5,   372,     5,     5,
     370,   372,     5,   372,   372,     5,   372,    91,    57,   332,
     334,    56,   370,   374,   389,   374,     5,   370,   305,   274,
     275,   276,    91,    91,   277,   278,    18,   279,    92,    92,
     370,   370,   370,   370,   370,   370,   305,   314,   314,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   322,
     323,    42,   124,   125,   143,   310,   311,   203,   312,   148,
     321,   332,     5,   292,     3,   370,   372,   370,     5,   370,
       5,   370,   370,     5,   370,     5,     5,   370,     5,   100,
     372,   331,   370,   277,   277,   277,   279,   278,   374,   374,
     374,   374,   374,   374,    59,   123,   143,   149,   216,   315,
     316,   317,   318,   319,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,     6,    91,    91,   100,    92,   311,
      91,    93,   206,   313,    91,   372,   370,   192,   193,   194,
     374,     5,   374,   370,   370,   370,   374,   370,   370,   374,
     370,     5,   332,   374,    91,   367,    92,    91,   320,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   323,
     100,     5,   374,   100,   373,   373,   373,   370,   374,   374,
     374,   374,   374,   374,   370,   372,   100,   205,   217,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   370,
      35,   100,     5,     5,     5,   374,   374,     5,   374,    35,
     369,   371,   371,   371,   370,   374
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   218,   219,   219,   220,   220,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   222,   222,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   224,
     224,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   226,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   232,   232,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   234,   234,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   236,   236,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   238,   238,   238,   239,   240,
     240,   241,   242,   243,   244,   244,   244,   245,   245,   245,
     246,   247,   248,   249,   250,   250,   251,   252,   252,   253,
     254,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     259,   259,   260,   260,   261,   261,   262,   262,   262,   263,
     263,   264,   264,   265,   265,   266,   266,   267,   267,   268,
     269,   270,   271,   272,   272,   272,   272,   272,   272,   273,
     272,   274,   272,   275,   272,   276,   272,   272,   277,   277,
     278,   279,   279,   280,   280,   280,   280,   281,   282,   282,
     283,   284,   285,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   293,   294,   294,
     294,   294,   295,   295,   295,   296,   296,   297,   297,   298,
     298,   299,   300,   300,   301,   301,   302,   303,   304,   304,
     304,   304,   305,   305,   306,   306,   306,   306,   306,   306,
     306,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   311,
     311,   311,   312,   312,   312,   313,   313,   314,   314,   315,
     315,   315,   315,   315,   316,   317,   318,   319,   320,   320,
     321,   322,   322,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   324,   325,   326,   327,   328,   328,   329,
     329,   330,   330,   331,   331,   332,   332,   333,   333,   334,
     334,   335,   335,   336,   336,   336,   336,   337,   338,   339,
     339,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   341,   341,   342,   342,   343,   343,   343,
     343,   344,   344,   344,   345,   345,   345,   346,   347,   348,
     348,   349,   350,   350,   351,   352,   352,   353,   353,   353,
     353,   354,   355,   355,   356,   356,   356,   356,   357,   357,
     358,   359,   359,   359,   360,   360,   360,   360,   361,   361,
     362,   363,   364,   364,   364,   365,   365,   366,   366,   367,
     367,   367,   367,   367,   367,   368,   368,   368,   368,   368,
     369,   369,   369,   369,   369,   369,   369,   370,   371,   372,
     372,   372,   373,   373,   373,   374,   374,   374,   374,   375,
     375,   375,   376,   376,   376,   377,   377,   378,   378,   379,
     380,   380,   380,   380,   380,   381,   382,   382,   382,   382,
     383,   383,   384,   384,   385,   385,   386,   386,   387,   387,
     388,   389,   389,   389
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     7,     8,     4,     0,
       3,     4,     2,     2,     3,     3,     5,     4,     6,     4,
       3,     3,     3,     3,     2,     3,     4,     0,     2,     5,
       5,     5,     1,     2,     5,     7,     0,     2,     1,     1,
       1,     1,     2,     2,     0,     2,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     5,     4,     2,     3,     3,     3,     0,
       4,     0,     5,     0,     5,     0,     5,     2,     1,     2,
       1,     0,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     5,     6,     3,     4,     3,     4,
       3,     4,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     0,     2,     2,     0,     2,     0,     2,    13,
      11,    11,    10,     9,     0,     2,     2,     2,     0,     2,
       4,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     3,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
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
       1,     1,     1,     0,     4,     1,     2,     1,     1,     1,
       1,     3,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     8,     6,     6,     1,     2,     1,     1,     1,
       1,     6,     1,     2,     1,     1,     1,     1,     4,     4,
       4,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       3,     3,     1,     1,     1,     1,     1,     9,     6,     0,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     0,
       2,     3,     0,     2,     3,     0,     6,     6,     6,     8,
      10,     7,     0,     1,     1,     8,     9,     9,     9,     6,
       0,     1,     1,     1,     1,     8,     7,     7,     4,     4,
       0,     1,     9,     6,     8,     8,     8,     8,     8,     8,
       2,     0,     2,     3
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
        case 155:
#line 497 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 2646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 501 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 504 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 510 "src/p.y" /* yacc.c:1646  */
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[-1].number);
                      Run.startdelay = (yyvsp[0].number);
                    }
                  }
#line 2676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 520 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 521 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2688 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 524 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 531 "src/p.y" /* yacc.c:1646  */
    {
                    Run.init = TRUE;
                  }
#line 2706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 536 "src/p.y" /* yacc.c:1646  */
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
#line 2716 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 543 "src/p.y" /* yacc.c:1646  */
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[0].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
#line 2729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 551 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 554 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 559 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 2753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 562 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2762 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 566 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2771 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 572 "src/p.y" /* yacc.c:1646  */
    {
                    Run.idfile = (yyvsp[0].string);
                  }
#line 2779 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 577 "src/p.y" /* yacc.c:1646  */
    {
                    Run.statefile = (yyvsp[0].string);
                  }
#line 2787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 582 "src/p.y" /* yacc.c:1646  */
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 2798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 597 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname(((yyvsp[-3].url))->hostname);
                    addmmonit((yyvsp[-3].url), (yyvsp[-2].number), (yyvsp[-1].number), (yyvsp[0].string));
                  }
#line 2807 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 604 "src/p.y" /* yacc.c:1646  */
    {
                    Run.dommonitcredentials = FALSE;
                  }
#line 2815 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 609 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 2825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 616 "src/p.y" /* yacc.c:1646  */
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
#line 2837 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 625 "src/p.y" /* yacc.c:1646  */
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[-1].number);
                 }
#line 2846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 635 "src/p.y" /* yacc.c:1646  */
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[-4].string));

                    check_hostname((yyvsp[-4].string));
                    mailserverset.host = (yyvsp[-4].string);
                    mailserverset.username = (yyvsp[-3].string);
                    mailserverset.password = (yyvsp[-2].string);
                    mailserverset.ssl.version = (yyvsp[-1].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      if (mailserverset.ssl.version == SSL_VERSION_SSLV2 || mailserverset.ssl.version == SSL_VERSION_SSLV3)
                         mailserverset.port = PORT_SMTPS;
                      mailserverset.ssl.certmd5 = (yyvsp[0].string);
                    }
                    addmailserver(&mailserverset);
                  }
#line 2869 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 653 "src/p.y" /* yacc.c:1646  */
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
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      mailserverset.ssl.certmd5 = (yyvsp[0].string);
                    }
                    addmailserver(&mailserverset);
                  }
#line 2891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 682 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpdssl = FALSE;
                  }
#line 2899 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 685 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpdssl = TRUE;
                    if (! have_ssl())
                      yyerror("SSL is not supported");
                    else if (! Run.httpsslpem)
                      yyerror("SSL server PEM file is required (pemfile option)");
                    else if (! file_checkStat(Run.httpsslpem, "SSL server PEM file", S_IRWXU))
                      yyerror("SSL server PEM file permissions check failed");
                  }
#line 2913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 713 "src/p.y" /* yacc.c:1646  */
    { Run.httpdsig = TRUE; }
#line 2919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 714 "src/p.y" /* yacc.c:1646  */
    { Run.httpdsig = FALSE; }
#line 2925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 725 "src/p.y" /* yacc.c:1646  */
    { Run.bind_addr = (yyvsp[0].string); }
#line 2931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 728 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpsslpem = (yyvsp[0].string);
                  }
#line 2939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 733 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpsslclientpem = (yyvsp[0].string);
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 2950 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 741 "src/p.y" /* yacc.c:1646  */
    {
                    Run.allowselfcert = TRUE;
                  }
#line 2958 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 746 "src/p.y" /* yacc.c:1646  */
    {
                    addcredentials((yyvsp[-3].string),(yyvsp[-1].string), DIGEST_CLEARTEXT, (yyvsp[0].number));
                  }
#line 2966 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 749 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[-1].string));
#endif
                  }
#line 2979 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 757 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[0].string));
                  }
#line 2988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 761 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[0].string));
                  }
#line 2997 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 765 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[0].string));
                  }
#line 3006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 769 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[0].string));
                  }
#line 3015 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 773 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = CLEARTEXT;
                  }
#line 3024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 777 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 780 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
#line 3041 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 784 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3049 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 787 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_MD5;
                  }
#line 3058 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 791 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3066 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 794 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_CRYPT;
                  }
#line 3075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (add_net_allow((yyvsp[0].string)) || add_host_allow((yyvsp[0].string)))) {
                      yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                    }
                    FREE((yyvsp[0].string));
                  }
#line 3094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 813 "src/p.y" /* yacc.c:1646  */
    { addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                           FREE((yyvsp[0].string)); }
#line 3101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 817 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = FALSE; }
#line 3107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 818 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TRUE; }
#line 3113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 824 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 827 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
#line 3141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 834 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[0].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
#line 3153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 843 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILE, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3177 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 856 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3185 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 861 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname((yyvsp[0].string));
                    createservice(TYPE_HOST, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3194 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 867 "src/p.y" /* yacc.c:1646  */
    {
                    char hostname[STRLEN];
                    if (Util_getfqdnhostname(hostname, sizeof(hostname))) {
                      LogError("Cannot get system hostname\n");
                      cfg_errflag++;
                    }
                    char *servicename = (yyvsp[0].string);
                    Util_replaceString(&servicename, "$HOST", hostname);
                    Run.system = createservice(TYPE_SYSTEM, servicename, Str_dup(""), check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 3209 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 879 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FIFO, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3217 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 884 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(TYPE_PROGRAM, (yyvsp[-3].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3229 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 891 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(TYPE_PROGRAM, (yyvsp[-4].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[-1].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 3241 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 900 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 903 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3257 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 908 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3265 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 911 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 917 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3281 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 920 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3289 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 933 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 934 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3301 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 937 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3307 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 938 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 939 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid(NULL, (yyvsp[0].number)) ); }
#line 3319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 940 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid(NULL, (yyvsp[0].number)) ); }
#line 3325 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 943 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 944 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 945 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 948 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 949 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3355 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 952 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3361 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 953 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 957 "src/p.y" /* yacc.c:1646  */
    {
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    /* This is a workaround to support content match without having to create
                     an URL object. 'urloption' creates the Request_T object we need minus the
                     URL object, but with enough information to perform content test. 
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&portset);
                  }
#line 3383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 969 "src/p.y" /* yacc.c:1646  */
    {
                    prepare_urlrequest((yyvsp[-7].url));
                    portset.timeout = (yyvsp[-5].number);
                    portset.retry = (yyvsp[-4].number);
                    addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addport(&portset);
                  }
#line 3395 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                   portset.timeout = (yyvsp[-5].number);
                   portset.retry = (yyvsp[-4].number);
                   addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                   addport(&portset);
                  }
#line 3406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 987 "src/p.y" /* yacc.c:1646  */
    {
                   icmpset.type = (yyvsp[-6].number);
                   icmpset.count = (yyvsp[-5].number);
                   icmpset.timeout = (yyvsp[-4].number);
                   addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                   addicmp(&icmpset);
                  }
#line 3418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 994 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[-5].number);
                        icmpset.timeout = (yyvsp[-4].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 3430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1003 "src/p.y" /* yacc.c:1646  */
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = Str_dup(current->path);
                    else
                      portset.hostname = Str_dup(LOCALHOST);
                  }
#line 3441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1009 "src/p.y" /* yacc.c:1646  */
    { check_hostname((yyvsp[0].string)); portset.hostname = (yyvsp[0].string); }
#line 3447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1012 "src/p.y" /* yacc.c:1646  */
    { portset.port = (yyvsp[0].number); portset.family = AF_INET; }
#line 3453 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1015 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string); portset.family = AF_UNIX;
                  }
#line 3461 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1020 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1023 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1026 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[-1].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[0].string);
                  }
#line 3490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1034 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_DGRAM;
                  }
#line 3498 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1039 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1040 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1043 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_NONE; }
#line 3516 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1044 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_SSLV2; }
#line 3522 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1045 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_SSLV3; }
#line 3528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1046 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_TLSV1; }
#line 3534 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1048 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1_CLIENT_METHOD
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_VERSION_TLSV11;
                }
#line 3545 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1055 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1_CLIENT_METHOD
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_VERSION_TLSV12;
                }
#line 3556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1061 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_AUTO; }
#line 3562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1064 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1067 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1070 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1073 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3594 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1076 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 3602 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1079 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 3610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1082 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 3618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1085 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 3629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1091 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1094 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 3645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1097 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 3653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1100 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 3661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1103 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1106 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 3677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 3685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
#line 3694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1116 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 3702 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1119 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 3710 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1122 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 3718 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1125 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 3729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1131 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 3737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 3745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1137 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 3753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1140 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 3761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 3769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1146 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 3777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1149 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 3785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 3793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1155 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 3801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 3809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1161 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1170 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 3825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1173 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 3833 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1182 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string);
                  }
#line 3841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1185 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1188 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 3857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1191 "src/p.y" /* yacc.c:1646  */
    {
                    portset.version = (yyvsp[0].number);
                  }
#line 3865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1197 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1200 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1206 "src/p.y" /* yacc.c:1646  */
    {
                     portset.maxforward = verifyMaxForward((yyvsp[0].number));
                   }
#line 3889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1222 "src/p.y" /* yacc.c:1646  */
    {
                    portset.operator = (yyvsp[-1].number);
                    portset.status = (yyvsp[0].number);
                  }
#line 3898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1228 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 3907 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1234 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_checksum = (yyvsp[0].string);
                  }
#line 3915 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1239 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 3923 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1245 "src/p.y" /* yacc.c:1646  */
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[0].string));
                 }
#line 3934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1253 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3942 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1262 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.loglimit = (yyvsp[-1].number);
                  }
#line 3951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1266 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.closelimit = (yyvsp[-1].number);
                  }
#line 3960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1270 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[-1].number);
                  }
#line 3969 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 3978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1278 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.replylimit = (yyvsp[-1].number);
                  }
#line 3987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1282 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[-1].number);
                  }
#line 3996 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1286 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.startlimit = (yyvsp[-1].number);
                  }
#line 4005 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1290 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1294 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1298 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1304 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 4040 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1310 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_PID, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 4048 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1315 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 4056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1320 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1327 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1330 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1335 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1338 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1343 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1346 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1351 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1354 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1359 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1362 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1367 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
#line 4158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1373 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
#line 4169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1382 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4178 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1388 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4184 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1389 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1392 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4199 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1396 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4207 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1399 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1403 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1408 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4230 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1411 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1418 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1419 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1420 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4254 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1421 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1422 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1423 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4272 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1424 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1425 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1426 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4290 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1427 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1428 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1429 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1430 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1431 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1432 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1433 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1434 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1435 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1436 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1437 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1438 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1439 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1450 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4374 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1451 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1452 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4386 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1453 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1456 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_SKIPCYCLES;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1460 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_CRON;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1464 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_NOTINCRON;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1470 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_ACTIVE;
                  }
#line 4427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1473 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_PASSIVE;
                  }
#line 4435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1476 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
#line 4444 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1482 "src/p.y" /* yacc.c:1646  */
    { addservicegroup((yyvsp[0].string)); FREE((yyvsp[0].string));}
#line 4450 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1493 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = TRUE;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 4468 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1503 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = FALSE;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), ACTION_IGNORE);
                        addstatus(&statusset);
                   }
#line 4480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1512 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1528 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4498 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1544 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1549 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1556 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1563 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
#line 4534 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1564 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
#line 4540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1565 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
#line 4546 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1568 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1573 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1578 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4576 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1583 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1595 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4606 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1602 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 4616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 4626 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1616 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD1; }
#line 4632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1617 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD5; }
#line 4638 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1618 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD15; }
#line 4644 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1621 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 4650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1622 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 4656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1625 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, FALSE);
                  }
#line 4667 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1631 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
#line 4677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1638 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1639 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 4689 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1640 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 4695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1641 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1642 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4707 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1643 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 4713 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1646 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_SECOND; }
#line 4719 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1647 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_SECOND; }
#line 4725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1648 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_MINUTE; }
#line 4731 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1649 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_HOUR; }
#line 4737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1650 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_DAY; }
#line 4743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1653 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_ALERT; }
#line 4749 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1654 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_EXEC; }
#line 4755 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1655 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_EXEC; }
#line 4761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1656 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_RESTART; }
#line 4767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1657 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_START; }
#line 4773 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1658 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_STOP; }
#line 4779 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1659 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_UNMONITOR; }
#line 4785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1662 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 4797 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1671 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 4809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1681 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 4820 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1687 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 4833 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1698 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 4844 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1704 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 4857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1714 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = ACTION_ALERT;
                  }
#line 4865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1717 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1720 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1723 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 4898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1733 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 4909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1739 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
#line 4919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1745 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_UNKNOWN; }
#line 4925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1746 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_MD5; }
#line 4931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1747 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_SHA1; }
#line 4937 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1750 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1757 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4961 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1766 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4975 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1775 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1784 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 4995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1789 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_BYTE; }
#line 5001 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1790 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_BYTE; }
#line 5007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1791 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_KILOBYTE; }
#line 5013 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1792 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_MEGABYTE; }
#line 5019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1793 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_GIGABYTE; }
#line 5025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1803 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5047 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1810 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5058 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1816 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[0].string));
                  }
#line 5070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1823 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
#line 5081 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1831 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = FALSE;
                  }
#line 5089 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1834 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = TRUE;
                  }
#line 5097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1840 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5108 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1846 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
#line 5118 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1853 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1859 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1866 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1872 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5160 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1879 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1885 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1892 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 5187 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1895 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 5193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1896 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 5199 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1897 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 5205 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 5209 "src/y.tab.c" /* yacc.c:1646  */
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
#line 1900 "src/p.y" /* yacc.c:1906  */



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
 * Returns TRUE if parsing succeeded, otherwise FALSE
 */
int parse(char *controlfile) {

  ASSERT(controlfile);

  servicelist = tail = current = NULL;

  if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
    LogError("Cannot open the control file '%s' -- %s\n", controlfile, STRERROR);
    return FALSE;
  }

  currentfile = Str_dup(controlfile);

  /*
   * Creation of the global service list is synchronized
   */
  LOCK(Run.mutex)
    preparse();
    yyparse();
    fclose(yyin);
    postparse();
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
    return FALSE;

  return(cfg_errflag == 0);
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
  buffer_stack_ptr        = 0;
  lineno                  = 1;
  arglineno               = 1;
  argcurrentfile          = NULL;
  argyytext               = NULL;
  /* Reset parser */
  Run.stopped             = FALSE;
  Run.dolog               = FALSE;
  Run.dohttpd             = FALSE;
  Run.doaction            = FALSE;
  Run.httpdsig            = TRUE;
  Run.dommonitcredentials = TRUE;
  Run.mmonitcredentials   = NULL;
  Run.credentials         = NULL;
  Run.httpdssl            = FALSE;
  Run.httpsslpem          = NULL;
  Run.httpsslclientpem    = NULL;
  Run.clientssl           = FALSE;
  Run.allowselfcert       = FALSE;
  Run.mailserver_timeout  = SMTP_TIMEOUT;
  Run.bind_addr           = NULL;
  Run.eventlist           = NULL;
  Run.eventlist_dir       = NULL;
  Run.eventlist_slots     = -1;
  Run.system              = NULL;
  Run.expectbuffer        = STRLEN;
  Run.mmonits             = NULL;
  Run.maillist            = NULL;
  Run.mailservers         = NULL;
  Run.MailFormat.from     = NULL;
  Run.MailFormat.replyto  = NULL;
  Run.MailFormat.subject  = NULL;
  Run.MailFormat.message  = NULL;
  depend_list             = NULL;
  Run.handler_init        = TRUE;
#ifdef OPENSSL_FIPS
  Run.fipsEnabled         = FALSE;
#endif
  for (i = 0; i <= HANDLER_MAX; i++)
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
        if (!Run.polltime && (Run.isdaemon || Run.init)) {
                LogError("Poll time not defined. Please define poll time in the\n control file or use the -d option when starting monit\n");
                cfg_errflag++;
        }

        if (Run.logfile)
                Run.dolog = TRUE;

        for (Service_T s = servicelist; s; s = s->next) {
                if (s->type == TYPE_HOST) {
                        /* Verify that a remote service has a port or an icmp list */
                        if (!s->portlist && !s->icmplist) {
                                LogError("'check host' statement is incomplete: Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", s->name);
                                cfg_errflag++;
                        }
                } else if (s->type == TYPE_PROGRAM) {
                        /* Verify that a program test has a status test */
                        if (! s->statuslist) {
                                LogError("'check program %s' is incomplete: Please add an 'if status != n' test\n", s->name);
                                cfg_errflag++;
                        }
                        /* Create the Command object */
                        s->program->C = Command_new(s->path, NULL);
                        // Append any arguments
                        for (int i = 1; i < s->program->args->length; i++) {
                                Command_appendArgument(s->program->C, s->program->args->arg[i]);
                        }
                        if (s->program->args->has_uid) {
                                Command_setUid(s->program->C, s->program->args->uid);
                        }
                        if (s->program->args->has_gid) {
                                Command_setGid(s->program->C, s->program->args->gid);
                        }
                }
        }

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
                        Run.system = createservice(TYPE_SYSTEM, Str_dup(hostname), Str_dup(""), check_system);
                        addservice(Run.system);
                }
        }

        if (Run.mmonits) {
                if (Run.dohttpd) {
                        if (Run.dommonitcredentials) {
                                Auth_T c;
                                for (c = Run.credentials; c; c = c->next) {
                                        if (c->digesttype == DIGEST_CLEARTEXT && ! c->is_readonly) {
                                                Run.mmonitcredentials = c;
                                                break;
                                        }
                                }
                                if (! Run.mmonitcredentials)
                                LogWarning("M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n");
                        }
                } else
                LogWarning("M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n");
        }

        /* Check the sanity of any dependency graph */
        check_depend();
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static Service_T createservice(int type, char *name, char *value, int (*check)(Service_T s)) {
  ASSERT(name);
  ASSERT(value);

  check_name(name);

  if (current)
        addservice(current);

  NEW(current);

  current->type = type;

  NEW(current->inf);
  Util_resetInfo(current);

  if (type == TYPE_PROGRAM) {
    NEW(current->program);
    current->program->args = command;
    command = NULL;
    current->program->timeout = PROGRAM_TIMEOUT;
  }

  /* Set default values */
  current->monitor = MONITOR_INIT;
  current->mode    = MODE_ACTIVE;
  current->name    = name;
  current->check   = check;
  current->path    = value;

  /* Initialize general event handlers */
  addeventaction(&(current)->action_DATA,     ACTION_ALERT,     ACTION_ALERT);
  addeventaction(&(current)->action_EXEC,     ACTION_ALERT,     ACTION_ALERT);
  addeventaction(&(current)->action_INVALID,  ACTION_RESTART,   ACTION_ALERT);
  addeventaction(&(current)->action_NONEXIST, ACTION_RESTART,   ACTION_ALERT);
  addeventaction(&(current)->action_PID,      ACTION_ALERT,     ACTION_IGNORE);
  addeventaction(&(current)->action_PPID,     ACTION_ALERT,     ACTION_IGNORE);
  addeventaction(&(current)->action_FSFLAG,   ACTION_ALERT,     ACTION_IGNORE);

  /* Initialize internal event handlers */
  addeventaction(&(current)->action_MONIT_START,  ACTION_START, ACTION_IGNORE);
  addeventaction(&(current)->action_MONIT_STOP,   ACTION_STOP,  ACTION_IGNORE);
  addeventaction(&(current)->action_MONIT_RELOAD, ACTION_START, ACTION_IGNORE);
  addeventaction(&(current)->action_ACTION,       ACTION_ALERT, ACTION_IGNORE);

  gettimeofday(&current->collected, NULL);

  return current;
}


/*
 * Add a service object to the servicelist
 */
static void addservice(Service_T s) {
  ASSERT(s);

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
    if (! strcasecmp(g->name, name))
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

  if (current->dependantlist != NULL)
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
static void addport(Port_T port) {
  Port_T p;

  ASSERT(port);

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
      p->request_hashtype = HASH_MD5;
    else if (strlen(p->request_checksum) == 40)
      p->request_hashtype = HASH_SHA1;
    else
      yyerror2("invalid checksum [%s]", p->request_checksum);
  } else
    p->request_hashtype = 0;

  if (port->SSL.use_ssl == TRUE) {
    if (!have_ssl()) {
      yyerror("ssl check cannot be activated. SSL is not supported");
    } else {
      if (port->SSL.certmd5 != NULL) {
        p->SSL.certmd5 = port->SSL.certmd5;
        cleanup_hash_string(p->SSL.certmd5);
      }
      p->SSL.use_ssl = TRUE;
      p->SSL.version = port->SSL.version;
    }
  }
  p->maxforward = port->maxforward;
  p->next = current->portlist;
  current->portlist = p;

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
static void addtimestamp(Timestamp_T ts, int notime) {
  Timestamp_T t;

  ASSERT(ts);

  NEW(t);
  t->operator     = ts->operator;
  t->time         = ts->time;
  t->action       = ts->action;
  t->test_changes = ts->test_changes;

  if (t->test_changes || notime) {
    if (! file_exist(current->path)) {
      DEBUG("The path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", current->path);
    } else if (!(t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG))) {
      yyerror2("Cannot get the timestamp for '%s'", current->path);
    }
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
 * Set Checksum object in the current service
 */
static void addchecksum(Checksum_T cs) {

  int len;
  Checksum_T c;

  ASSERT(cs);

  cs->initialized = TRUE;

  if (! *cs->hash) {
    if (cs->type == HASH_UNKNOWN)
      cs->type = DEFAULT_HASH;
    if ( !(Util_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
      /* If the file doesn't exist, set dummy value */
      snprintf(cs->hash, sizeof(cs->hash), "0000000000000000000000000000000000000000");
      cs->initialized = FALSE;
      yywarning2("Cannot compute a checksum for file %s", current->path);
    }
  }

  len = cleanup_hash_string(cs->hash);

  if (cs->type == HASH_UNKNOWN) {
    if (len == 32) {
      cs->type = HASH_MD5;
    } else if (len == 40) {
      cs->type = HASH_SHA1;
    } else {
      yyerror2("Unknown checksum type [%s] for file %s", cs->hash, current->path);
      reset_checksumset();
      return;
    }
  } else if (( cs->type == HASH_MD5 && len!=32 ) || ( cs->type == HASH_SHA1 && len != 40 )) {
    yyerror2("Invalid checksum [%s] for file %s", cs->hash, current->path);
    reset_checksumset();
    return;
  }

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
  Perm_T p;

  ASSERT(ps);

  NEW(p);
  p->perm       = ps->perm;
  p->action     = ps->action;
  current->perm = p;
  reset_permset();

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

  addeventaction(&(m->action), actionnumber, ACTION_IGNORE);

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


static void addmatchpath(Match_T ms, int actionnumber) {

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

  while (!feof(handle)) {
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
    if (actionnumber == ACTION_EXEC) {
      if (command1 == NULL) {
        ASSERT(savecommand);
        command1 = savecommand;
      }
      savecommand = copycommand(command1);
    }

    addmatch(ms, actionnumber, linenumber);
  }

  if (actionnumber == ACTION_EXEC && savecommand)
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
  icmp->is_available = FALSE;
  icmp->response     = -1;

  icmp->next         = current->icmplist;
  current->icmplist  = icmp;

  reset_icmpset();
}


/*
 * Set EventAction object
 */
static void addeventaction(EventAction_T *_ea, int failed, int succeeded) {
  EventAction_T ea;

  ASSERT(_ea);

  NEW(ea);
  NEW(ea->failed);
  NEW(ea->succeeded);

  ea->failed->id     = failed;
  ea->failed->count  = rate1.count;
  ea->failed->cycles = rate1.cycles;
  if (failed == ACTION_EXEC) {
    ASSERT(command1);
    ea->failed->exec = command1;
    command1 = NULL;
  }

  ea->succeeded->id     = succeeded;
  ea->succeeded->count  = rate2.count;
  ea->succeeded->cycles = rate2.cycles;
  if (succeeded == ACTION_EXEC) {
    ASSERT(command2);
    ea->succeeded->exec = command2;
    command2 = NULL;
  }
  *_ea = ea;
  reset_rateset();
}


/*
 * Redefine EventAction object (used for default action overloading)
 */
static void seteventaction(EventAction_T *_ea, int failed, int succeeded) {
  EventAction_T ea = *_ea;

  ASSERT(ea);
  ASSERT(ea->failed);
  ASSERT(ea->succeeded);

  ea->failed->id     = failed;
  ea->failed->count  = rate1.count;
  ea->failed->cycles = rate1.cycles;
  if (failed == ACTION_EXEC) {
    ASSERT(command1);
    ea->failed->exec = command1;
    command1 = NULL;
  }

  ea->succeeded->id     = succeeded;
  ea->succeeded->count  = rate2.count;
  ea->succeeded->cycles = rate2.cycles;
  if (succeeded == ACTION_EXEC) {
    ASSERT(command2);
    ea->succeeded->exec = command2;
    command2 = NULL;
  }
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
    while (g->next != NULL)
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

  switch(what) {
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
    portset.SSL.use_ssl = TRUE;

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
static void addmmonit(URL_T url, int timeout, int sslversion, char *certmd5) {
  Mmonit_T c;

  ASSERT(url);

  NEW(c);
  c->url = url;
  if (!strcmp(c->url->protocol, "https")) {
    if (!have_ssl()) {
      yyerror("SSL check cannot be activated. SSL is not supported");
    } else {
      c->ssl.use_ssl = TRUE;
      c->ssl.version = (sslversion == SSL_VERSION_NONE) ? SSL_VERSION_AUTO : sslversion;
      if (certmd5) {
        c->ssl.certmd5 = certmd5;
        cleanup_hash_string(c->ssl.certmd5);
      }
    }
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
    for (l = Run.mailservers; l->next; l = l->next) /* empty */;
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

    if (pwd == NULL) {
      yyerror2("Requested user not found on the system");
      return(0);
    }

  } else {

    if ( (pwd = getpwuid(uid)) == NULL ) {
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

    if (grd == NULL) {
      yyerror2("Requested group not found on the system");
      return(0);
    }

  } else {

    if ( (grd = getgrgid(gid)) == NULL ) {
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
  if (!getuid()) {
    command->has_uid = TRUE;
    command->uid = uid;
  } else
    yyerror("UID statement requires root privileges");
}


/*
 * Add a new group id to the current command object.
 */
static void addegid(gid_t gid) {
  if (!getuid()) {
    command->has_gid = TRUE;
    command->gid = gid;
  } else
    yyerror("GID statement requires root privileges");
}


/*
 * Reset the logfile if changed
 */
static void setlogfile(char *logfile) {
  if (Run.logfile) {
    if (IS(Run.logfile, logfile)) {
      FREE(logfile);
      return;
    } else
      FREE(Run.logfile);
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
    } else
      FREE(Run.pidfile);
  }
  Run.pidfile = pidfile;
}


/*
 * Read a apache htpasswd file and add credentials found for username
 */
static void addhtpasswdentry(char *filename, char *username, int dtype) {
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
        
        while (!feof(handle)) {
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
                
                if ( (NULL != (colonindex = strchr(ht_passwd, ':'))) && ( dtype != DIGEST_CLEARTEXT) )
                *colonindex = '\0';
                
                ht_username = Str_dup(buf);
                
                if (username == NULL) {
                        if (addcredentials(ht_username, ht_passwd, dtype, FALSE))
                        credentials_added++;
                } else if (strcmp(username, ht_username) == 0)  {
                        if (addcredentials(ht_username, ht_passwd, dtype, FALSE))
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
  Auth_T c = NULL;
  Auth_T prev = NULL;

  ASSERT(groupname);

  if (Run.credentials == NULL)
    NEW(Run.credentials);

  c = Run.credentials;
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
  c->digesttype  = DIGEST_PAM;
  c->is_readonly = readonly;

  DEBUG("Adding PAM group '%s'\n", groupname);

  return;
}
#endif


/*
 * Add Basic Authentication credentials
 */
static int addcredentials(char *uname, char *passwd, int dtype, int readonly) {
  Auth_T c;

  ASSERT(uname);
  ASSERT(passwd);

  if (Run.credentials == NULL) {
    NEW(Run.credentials);
    c = Run.credentials;
  } else {

    if (Util_getUserCredentials(uname) != NULL) {
      yywarning2("Credentials for user %s were already added, entry ignored", uname);
      FREE(uname);
      FREE(passwd);
      return FALSE;
    }

    c = Run.credentials;

    while ( c->next != NULL )
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

  return TRUE;

}


/*
 * Set the syslog and the facilities to be used
 */
static void setsyslog(char *facility) {

  if (!Run.logfile || ihp.logfile) {
    ihp.logfile = TRUE;
    setlogfile(Str_dup("syslog"));
    Run.use_syslog = TRUE;
    Run.dolog = TRUE;
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
  mailserverset.ssl.use_ssl = FALSE;
  mailserverset.ssl.version = SSL_VERSION_AUTO;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
  memset(&portset, 0, sizeof(struct myport));
  portset.socket = -1;
  portset.type = SOCK_STREAM;
  portset.family = AF_INET;
  portset.SSL.version = SSL_VERSION_AUTO;
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
  timestampset.test_changes = FALSE;
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
  sizeset.test_changes = FALSE;
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


/*
 * Reset the Checksum set to default values
 */
static void reset_checksumset() {
  checksumset.type         = HASH_UNKNOWN;
  checksumset.test_changes = FALSE;
  checksumset.action       = NULL;
  *checksumset.hash        = 0;
}


/*
 * Reset the Perm set to default values
 */
static void reset_permset() {
  permset.perm = 0;
  permset.action = NULL;
}


/*
 * Reset the Status set to default values
 */
static void reset_statusset() {
        statusset.initialized = FALSE;
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

  if ( *status != '\0' || result < 0 || result > 07777 )
    yyerror2("Permission statements must have an octal value between 0 and 7777");

  return result;
}


/*
 * Check hostname
 */
static void check_hostname(char *hostname) {

  ASSERT(hostname);

  if (!check_host(hostname))
    yywarning2("Hostname did not resolve");
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
  int done;                      /* no unvisited nodes left?                               */
  int found_some;                /* last iteration found anything new ?                    */
  depend_list = NULL;            /* depend_list will be the topological sorted servicelist */

  do {
    done = TRUE;
    found_some = FALSE;
    for (s = servicelist; s; s = s->next) {
        Dependant_T d;
      if (s->visited)
          continue;
      done = FALSE; // still unvisited nodes
      depends_on = NULL;
      for (d = s->dependantlist; d; d = d->next) {
        Service_T dp = Util_getService(d->dependant);
        if (!dp) {
          LogError("Depend service '%s' is not defined in the control file\n", d->dependant);
          exit(1);
        }
        if (!dp->visited) {
          depends_on = dp;
        }
      }

      if (!depends_on) {
        s->visited = TRUE;
        found_some = TRUE;
        *dlt = s;
        dlt = &s->next_depend;
      }
    }
  } while (found_some && !done);

  if (!done) {
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

