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
    IMAPS = 326,
    CLAMAV = 327,
    NNTP = 328,
    NTP3 = 329,
    MYSQL = 330,
    DNS = 331,
    WEBSOCKET = 332,
    SSH = 333,
    DWP = 334,
    LDAP2 = 335,
    LDAP3 = 336,
    RDATE = 337,
    RSYNC = 338,
    TNS = 339,
    PGSQL = 340,
    POSTFIXPOLICY = 341,
    SIP = 342,
    LMTP = 343,
    GPS = 344,
    RADIUS = 345,
    MEMCACHE = 346,
    REDIS = 347,
    MONGODB = 348,
    STRING = 349,
    PATH = 350,
    MAILADDR = 351,
    MAILFROM = 352,
    MAILREPLYTO = 353,
    MAILSUBJECT = 354,
    MAILBODY = 355,
    SERVICENAME = 356,
    STRINGNAME = 357,
    NUMBER = 358,
    PERCENT = 359,
    LOGLIMIT = 360,
    CLOSELIMIT = 361,
    DNSLIMIT = 362,
    KEEPALIVELIMIT = 363,
    REPLYLIMIT = 364,
    REQUESTLIMIT = 365,
    STARTLIMIT = 366,
    WAITLIMIT = 367,
    GRACEFULLIMIT = 368,
    CLEANUPLIMIT = 369,
    REAL = 370,
    CHECKPROC = 371,
    CHECKFILESYS = 372,
    CHECKFILE = 373,
    CHECKDIR = 374,
    CHECKHOST = 375,
    CHECKSYSTEM = 376,
    CHECKFIFO = 377,
    CHECKPROGRAM = 378,
    CHILDREN = 379,
    SYSTEM = 380,
    STATUS = 381,
    ORIGIN = 382,
    VERSIONOPT = 383,
    RESOURCE = 384,
    MEMORY = 385,
    TOTALMEMORY = 386,
    LOADAVG1 = 387,
    LOADAVG5 = 388,
    LOADAVG15 = 389,
    SWAP = 390,
    MODE = 391,
    ACTIVE = 392,
    PASSIVE = 393,
    MANUAL = 394,
    CPU = 395,
    TOTALCPU = 396,
    CPUUSER = 397,
    CPUSYSTEM = 398,
    CPUWAIT = 399,
    GROUP = 400,
    REQUEST = 401,
    DEPENDS = 402,
    BASEDIR = 403,
    SLOT = 404,
    EVENTQUEUE = 405,
    SECRET = 406,
    HOSTHEADER = 407,
    UID = 408,
    EUID = 409,
    GID = 410,
    MMONIT = 411,
    INSTANCE = 412,
    USERNAME = 413,
    PASSWORD = 414,
    TIMESTAMP = 415,
    CHANGED = 416,
    SECOND = 417,
    MINUTE = 418,
    HOUR = 419,
    DAY = 420,
    SSLAUTO = 421,
    SSLV2 = 422,
    SSLV3 = 423,
    TLSV1 = 424,
    TLSV11 = 425,
    TLSV12 = 426,
    CERTMD5 = 427,
    BYTE = 428,
    KILOBYTE = 429,
    MEGABYTE = 430,
    GIGABYTE = 431,
    INODE = 432,
    SPACE = 433,
    PERMISSION = 434,
    SIZE = 435,
    MATCH = 436,
    NOT = 437,
    IGNORE = 438,
    ACTION = 439,
    UPTIME = 440,
    EXEC = 441,
    UNMONITOR = 442,
    PING = 443,
    ICMP = 444,
    ICMPECHO = 445,
    NONEXIST = 446,
    EXIST = 447,
    INVALID = 448,
    DATA = 449,
    RECOVERED = 450,
    PASSED = 451,
    SUCCEEDED = 452,
    URL = 453,
    CONTENT = 454,
    PID = 455,
    PPID = 456,
    FSFLAG = 457,
    REGISTER = 458,
    CREDENTIALS = 459,
    URLOBJECT = 460,
    TARGET = 461,
    TIMESPEC = 462,
    HTTPHEADER = 463,
    MAXFORWARD = 464,
    FIPS = 465,
    GREATER = 466,
    LESS = 467,
    EQUAL = 468,
    NOTEQUAL = 469
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
#define IMAPS 326
#define CLAMAV 327
#define NNTP 328
#define NTP3 329
#define MYSQL 330
#define DNS 331
#define WEBSOCKET 332
#define SSH 333
#define DWP 334
#define LDAP2 335
#define LDAP3 336
#define RDATE 337
#define RSYNC 338
#define TNS 339
#define PGSQL 340
#define POSTFIXPOLICY 341
#define SIP 342
#define LMTP 343
#define GPS 344
#define RADIUS 345
#define MEMCACHE 346
#define REDIS 347
#define MONGODB 348
#define STRING 349
#define PATH 350
#define MAILADDR 351
#define MAILFROM 352
#define MAILREPLYTO 353
#define MAILSUBJECT 354
#define MAILBODY 355
#define SERVICENAME 356
#define STRINGNAME 357
#define NUMBER 358
#define PERCENT 359
#define LOGLIMIT 360
#define CLOSELIMIT 361
#define DNSLIMIT 362
#define KEEPALIVELIMIT 363
#define REPLYLIMIT 364
#define REQUESTLIMIT 365
#define STARTLIMIT 366
#define WAITLIMIT 367
#define GRACEFULLIMIT 368
#define CLEANUPLIMIT 369
#define REAL 370
#define CHECKPROC 371
#define CHECKFILESYS 372
#define CHECKFILE 373
#define CHECKDIR 374
#define CHECKHOST 375
#define CHECKSYSTEM 376
#define CHECKFIFO 377
#define CHECKPROGRAM 378
#define CHILDREN 379
#define SYSTEM 380
#define STATUS 381
#define ORIGIN 382
#define VERSIONOPT 383
#define RESOURCE 384
#define MEMORY 385
#define TOTALMEMORY 386
#define LOADAVG1 387
#define LOADAVG5 388
#define LOADAVG15 389
#define SWAP 390
#define MODE 391
#define ACTIVE 392
#define PASSIVE 393
#define MANUAL 394
#define CPU 395
#define TOTALCPU 396
#define CPUUSER 397
#define CPUSYSTEM 398
#define CPUWAIT 399
#define GROUP 400
#define REQUEST 401
#define DEPENDS 402
#define BASEDIR 403
#define SLOT 404
#define EVENTQUEUE 405
#define SECRET 406
#define HOSTHEADER 407
#define UID 408
#define EUID 409
#define GID 410
#define MMONIT 411
#define INSTANCE 412
#define USERNAME 413
#define PASSWORD 414
#define TIMESTAMP 415
#define CHANGED 416
#define SECOND 417
#define MINUTE 418
#define HOUR 419
#define DAY 420
#define SSLAUTO 421
#define SSLV2 422
#define SSLV3 423
#define TLSV1 424
#define TLSV11 425
#define TLSV12 426
#define CERTMD5 427
#define BYTE 428
#define KILOBYTE 429
#define MEGABYTE 430
#define GIGABYTE 431
#define INODE 432
#define SPACE 433
#define PERMISSION 434
#define SIZE 435
#define MATCH 436
#define NOT 437
#define IGNORE 438
#define ACTION 439
#define UPTIME 440
#define EXEC 441
#define UNMONITOR 442
#define PING 443
#define ICMP 444
#define ICMPECHO 445
#define NONEXIST 446
#define EXIST 447
#define INVALID 448
#define DATA 449
#define RECOVERED 450
#define PASSED 451
#define SUCCEEDED 452
#define URL 453
#define CONTENT 454
#define PID 455
#define PPID 456
#define FSFLAG 457
#define REGISTER 458
#define CREDENTIALS 459
#define URLOBJECT 460
#define TARGET 461
#define TIMESPEC 462
#define HTTPHEADER 463
#define MAXFORWARD 464
#define FIPS 465
#define GREATER 466
#define LESS 467
#define EQUAL 468
#define NOTEQUAL 469

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

#line 775 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 790 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1056

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  221
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  536
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  949

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   469

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
       2,     2,     2,     2,     2,     2,     2,     2,   217,     2,
       2,     2,     2,     2,   218,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   219,     2,   220,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   215,     2,   216,     2,     2,     2,     2,
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
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214
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
    1094,  1100,  1103,  1106,  1109,  1112,  1115,  1118,  1121,  1125,
    1128,  1131,  1134,  1140,  1143,  1146,  1149,  1152,  1155,  1158,
    1161,  1164,  1167,  1170,  1173,  1178,  1179,  1182,  1185,  1190,
    1191,  1194,  1197,  1200,  1203,  1208,  1209,  1212,  1217,  1218,
    1223,  1224,  1227,  1228,  1229,  1230,  1231,  1234,  1240,  1246,
    1251,  1256,  1257,  1265,  1270,  1271,  1274,  1278,  1282,  1286,
    1290,  1294,  1298,  1302,  1306,  1310,  1316,  1322,  1327,  1332,
    1339,  1342,  1347,  1350,  1355,  1358,  1363,  1366,  1371,  1374,
    1379,  1385,  1393,  1394,  1400,  1401,  1404,  1408,  1411,  1415,
    1420,  1423,  1426,  1427,  1430,  1431,  1432,  1433,  1434,  1435,
    1436,  1437,  1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1448,  1449,  1450,  1451,  1454,  1455,  1458,  1459,
    1462,  1463,  1464,  1465,  1468,  1472,  1476,  1482,  1485,  1488,
    1494,  1498,  1501,  1502,  1505,  1508,  1515,  1524,  1530,  1531,
    1534,  1535,  1536,  1537,  1540,  1546,  1547,  1550,  1551,  1552,
    1553,  1556,  1561,  1568,  1575,  1576,  1577,  1580,  1585,  1590,
    1595,  1602,  1607,  1614,  1621,  1628,  1629,  1630,  1633,  1634,
    1637,  1643,  1650,  1651,  1652,  1653,  1654,  1655,  1658,  1659,
    1660,  1661,  1662,  1665,  1666,  1667,  1668,  1669,  1670,  1671,
    1674,  1683,  1692,  1693,  1699,  1709,  1710,  1716,  1726,  1729,
    1732,  1735,  1740,  1744,  1751,  1757,  1758,  1759,  1762,  1769,
    1778,  1787,  1796,  1801,  1802,  1803,  1804,  1805,  1808,  1815,
    1822,  1828,  1835,  1843,  1846,  1852,  1858,  1865,  1871,  1878,
    1884,  1891,  1897,  1904,  1907,  1908,  1909
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
  "APACHESTATUS", "FTP", "SMTP", "SMTPS", "POP", "IMAP", "IMAPS", "CLAMAV",
  "NNTP", "NTP3", "MYSQL", "DNS", "WEBSOCKET", "SSH", "DWP", "LDAP2",
  "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY", "SIP",
  "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS", "MONGODB", "STRING",
  "PATH", "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY",
  "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHILDREN", "SYSTEM",
  "STATUS", "ORIGIN", "VERSIONOPT", "RESOURCE", "MEMORY", "TOTALMEMORY",
  "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE",
  "MANUAL", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP",
  "REQUEST", "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET",
  "HOSTHEADER", "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME",
  "PASSWORD", "TIMESTAMP", "CHANGED", "SECOND", "MINUTE", "HOUR", "DAY",
  "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "CERTMD5",
  "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE",
  "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE", "ACTION", "UPTIME",
  "EXEC", "UNMONITOR", "PING", "ICMP", "ICMPECHO", "NONEXIST", "EXIST",
  "INVALID", "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT",
  "PID", "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT",
  "TARGET", "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER",
  "LESS", "EQUAL", "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['", "']'",
  "$accept", "cfgfile", "statement_list", "statement", "optproclist",
  "optproc", "optfilelist", "optfile", "optfilesyslist", "optfilesys",
  "optdirlist", "optdir", "opthostlist", "opthost", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optstatuslist", "optstatus",
  "setalert", "setdaemon", "startdelay", "setexpectbuffer", "setinit",
  "setfips", "setlog", "seteventqueue", "setidfile", "setstatefile",
  "setpid", "setmmonits", "mmonitlist", "mmonit", "credentials",
  "setmailservers", "setmailformat", "sethttpd", "mailserverlist",
  "mailserver", "httpdlist", "httpdoption", "ssl", "optssllist", "optssl",
  "sslenable", "ssldisable", "signature", "sigenable", "sigdisable",
  "bindaddress", "pemfile", "clientpemfile", "allowselfcert", "allow",
  "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checksystem", "checkfifo", "checkprogram", "start", "stop", "restart",
  "argumentlist", "useroptionlist", "argument", "useroption", "username",
  "password", "hostname", "connection", "connectionunix", "icmp", "host",
  "port", "unixsocket", "type", "certmd5", "sslversion", "protocol",
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
     465,   466,   467,   468,   469,   123,   125,    58,    64,    91,
      93
};
# endif

#define YYPACT_NINF -663

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-663)))

#define YYTABLE_NINF -226

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     324,    36,   -63,   -58,   -55,   -50,   -40,   -23,     3,    10,
     126,   324,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,   492,  -663,  -663,  -663,    23,    28,    50,   131,  -663,
     104,   148,   106,   153,   130,    38,    64,    62,  -663,   -32,
     102,   253,   261,   285,   322,  -663,   304,   312,  -663,  -663,
     610,    69,   708,   722,    16,    63,    63,   210,    63,   -70,
     150,   290,   259,   277,   492,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,   -12,  -663,  -663,  -663,  -663,  -663,
     737,   722,   751,   376,  -663,   345,   -16,    -4,  -663,   286,
    -663,  -663,   173,  -663,  -663,   478,   296,   307,   351,    62,
     221,   223,   233,   550,   384,   318,   355,   187,   239,   359,
     385,   381,   397,    63,   146,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,    81,   317,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,    33,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,    84,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,    34,
     436,   313,  -663,  -663,   235,  -663,   235,  -663,   235,   472,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,   277,  -663,  -663,
     295,   550,   384,   683,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,   251,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,   422,   495,  -663,   431,    58,   363,   433,  -663,   506,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
     -43,  -663,   402,  -663,   552,   221,   382,  -663,   478,   550,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,   215,  -663,   485,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,   417,   182,   265,   265,
     265,  -663,  -663,  -663,   265,   265,   234,   265,   533,  -663,
    -663,  -663,  -663,  -663,   265,   135,   265,    59,   265,   313,
     386,  -663,   418,   120,   403,   265,   265,   454,   521,   574,
     575,   414,   578,   526,   527,   532,    88,   165,     8,  -663,
    -663,  -663,     8,  -663,     8,  -663,  -663,  -663,   550,   380,
    -663,   265,  -663,  -663,  -663,   689,  -663,  -663,   265,  -663,
    -663,  -663,   265,   512,  -663,   537,   488,  -663,  -663,   553,
     552,   490,   560,  -663,   701,  -663,  -663,   556,  -663,  -663,
    -663,  -663,  -663,  -663,   484,  -663,  -663,    48,   432,   607,
    -663,   634,   572,   172,  -663,   585,   198,   206,   218,   636,
    -663,  -663,  -663,  -663,  -663,   582,   -20,     7,   583,   587,
     527,   527,   590,    25,  -663,   690,   114,  -663,  -663,   591,
     629,   593,   527,   527,   642,   599,   390,   419,   527,   601,
     132,  -663,   603,   351,   518,   574,   510,   609,   636,   678,
     710,   562,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
     498,   607,   147,  -663,   726,   630,   635,   527,  -663,   363,
    -663,   484,  -663,  -663,    12,   638,    41,    44,   513,   516,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
     643,  -663,  -663,   607,   384,  -663,   580,  -663,  -663,   527,
     527,   527,   527,   527,   527,   450,    68,  -663,   641,  -663,
     173,   649,   173,   654,   659,   759,   760,   439,  -663,   732,
     334,  -663,  -663,   527,     9,   439,   765,   766,   527,   173,
     527,   527,  -663,  -663,   767,   459,   671,   173,  -663,   527,
    -663,   351,   370,   351,  -663,    68,   773,   334,  -663,   607,
     384,   675,   173,   334,   677,   527,   779,   552,  -663,   692,
     698,   699,   568,   702,   705,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,   374,   374,  -663,   384,  -663,  -663,
     795,   796,   805,   823,   824,   832,  -663,  -663,   552,   714,
     736,   870,   351,   558,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,   334,   334,  -663,  -663,  -663,  -663,   527,  -663,  -663,
    -663,  -663,  -663,    63,  -663,  -663,   834,   849,   745,   851,
     527,   334,   334,   852,   527,   863,   868,   334,   527,   869,
     527,   527,   873,   527,  -663,  -663,   819,   826,   510,   300,
     834,   384,  -663,  -663,  -663,   834,  -663,   887,   334,   484,
     820,   827,   828,   829,   830,   879,   831,   833,  -663,  -663,
    -663,  -663,  -663,  -663,   334,   334,   334,   334,   334,   334,
     484,  -663,  -663,  -663,  -663,  -663,   798,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,   196,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,   712,  -663,
    -663,   768,  -663,  -663,  -663,   826,  -663,  -663,  -663,   915,
     362,   922,  -663,   334,   527,   334,   959,  -663,  -663,   334,
     960,   334,   334,  -663,   961,   334,   962,   963,   334,   964,
    -663,   867,   527,   351,  -663,  -663,  -663,  -663,  -663,   334,
    -663,  -663,   830,   830,   830,   879,  -663,   830,  -663,  -663,
    -663,  -663,  -663,   834,   834,   834,   834,   834,   834,  -663,
     -11,   -11,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   921,  -663,   877,   878,   871,   880,   196,  -663,
      78,   764,   882,  -663,   527,   334,   216,   306,   834,   972,
     834,   334,  -663,   334,  -663,  -663,   334,   834,   334,   334,
     834,   334,  -663,   973,   826,   834,   830,   830,   830,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,   885,   265,   886,
     888,  -663,  -663,  -663,  -663,  -663,  -663,   881,   883,   884,
     889,   890,   891,   892,   893,   894,   895,   798,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,   896,  -663,  -663,   975,   834,
     897,   897,   897,  -663,   334,  -663,   834,   834,   834,  -663,
     834,   834,  -663,   834,   334,   527,  -663,  -663,   898,  -663,
    -663,    49,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,  -663,  -663,   334,  -663,    46,   978,   980,   983,
     834,  -663,  -663,  -663,  -663,  -663,  -663,   834,   984,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,   834,  -663,   955,   334,   334,   334,  -663,  -663,
     334,  -663,  -663,  -663,  -663,  -663,  -663,   834,  -663
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
       0,     0,     0,     0,     0,     0,     0,     0,   163,   416,
       0,     0,     0,     0,     0,   242,     0,     0,     1,     5,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,   102,   104,   105,   106,   108,
     109,   107,   110,   111,   416,   389,   112,   113,   114,   115,
      25,    26,    27,   165,   164,   159,   262,   376,   182,     0,
     170,   171,   513,   172,   390,     0,     0,     0,   376,   173,
     177,     0,     0,     0,   534,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    40,
      41,    33,    34,    35,    39,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,   523,   523,    50,    51,    52,
      53,    54,    56,    58,    57,    65,    66,    67,    55,    62,
      59,    64,    63,    60,    61,     0,    69,    70,    71,    72,
      73,    74,    76,    75,    80,    81,    82,    83,    84,    85,
      77,    78,    79,     0,    87,    88,    89,    90,    91,    93,
      95,    94,    99,   100,   101,    92,    96,    97,    98,   274,
       0,     0,   256,   257,   372,   252,   372,   391,   372,     0,
     425,   426,   427,   428,   429,   430,   434,   431,   432,   103,
       0,     0,   534,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   132,   134,
     136,   135,   140,   141,   142,   133,   137,   138,   139,     0,
     144,   145,   146,   147,   149,   148,   150,   151,   152,   153,
     154,     0,     0,   158,     0,     0,   265,     0,   183,   267,
     186,   514,   515,   516,   517,   161,   420,   421,   422,   423,
       0,   418,   167,   169,   284,   177,     0,   174,     0,     0,
     396,   412,   395,   411,   409,   414,   401,   403,   413,   406,
     410,   394,   415,   399,   402,   405,   404,   398,   397,   407,
     408,   400,     0,   392,     0,   155,   233,   234,   235,   236,
     239,   238,   237,   240,   241,   243,   374,   274,   472,   472,
     472,   465,   466,   467,   472,   472,     0,   472,   492,   438,
     440,   441,   442,   443,   472,   505,   472,   505,   472,   524,
       0,   524,     0,     0,     0,   472,   472,     0,     0,   370,
       0,     0,     0,     0,   492,     0,     0,     0,   372,   253,
     254,   246,   372,   248,   372,   250,   424,   433,     0,     0,
     386,   472,   454,   455,   456,   492,   445,   450,   472,   448,
     449,   447,   472,     0,   166,     0,   262,   264,   263,     0,
     284,     0,     0,   179,   181,   180,   419,     0,   290,   285,
     286,   287,   288,   289,   282,   175,   178,     0,     0,   416,
     393,   535,     0,   374,   244,     0,     0,     0,     0,   278,
     477,   473,   474,   475,   476,     0,     0,     0,     0,     0,
     492,   492,     0,     0,   439,     0,     0,   506,   507,     0,
       0,     0,   492,   492,     0,     0,     0,     0,   492,     0,
       0,   275,     0,   376,     0,   370,   382,     0,   278,     0,
       0,     0,   258,   260,   259,   261,   255,   247,   249,   251,
       0,   416,     0,   446,     0,     0,     0,   492,   160,   265,
     266,   282,   377,   268,     0,     0,     0,     0,     0,     0,
     187,   188,   194,   194,   189,   203,   204,   190,   191,   168,
       0,   176,   417,   416,   534,   536,     0,   245,   277,   492,
     492,   492,   492,   492,   492,     0,   291,   463,   469,   468,
     513,   469,   513,     0,     0,     0,     0,   478,   493,     0,
       0,   469,   464,   492,   492,   478,     0,     0,   492,   513,
     492,   492,   522,   521,     0,   492,   469,   513,   371,   492,
     533,   376,     0,   376,   276,   291,     0,     0,   373,   416,
     534,   469,   513,     0,     0,   492,     0,   284,   184,     0,
       0,     0,   227,   215,     0,   209,   200,   206,   202,   208,
     199,   201,   205,   207,   193,   192,   283,   534,   156,   375,
       0,     0,     0,     0,     0,     0,   281,   279,   284,     0,
       0,     0,   376,   324,   325,   458,   457,   460,   459,   451,
     452,     0,     0,   479,   480,   481,   482,   492,   494,   487,
     488,   483,   486,     0,   489,   490,   498,     0,     0,     0,
     492,     0,     0,     0,   492,     0,     0,     0,   492,     0,
     492,   492,     0,   492,   384,   385,     0,   378,   382,     0,
     498,   534,   387,   462,   461,   498,   453,     0,     0,   282,
     216,   217,   218,     0,     0,   231,     0,     0,   212,   195,
     196,   197,   198,   157,     0,     0,     0,     0,     0,     0,
     282,   327,   328,   293,   340,   340,     0,   296,   311,   312,
     310,   299,   300,   301,   307,   308,   305,   294,     0,   313,
     295,   302,   303,   314,   316,   317,   318,   309,   335,   319,
     320,     0,   322,   315,   304,   378,   326,   367,   368,     0,
     484,     0,   437,     0,   492,     0,     0,   471,   526,     0,
       0,     0,     0,   512,     0,     0,     0,     0,     0,     0,
     383,     0,   492,   376,   381,   380,   366,   388,   444,     0,
     436,   185,     0,     0,     0,   231,   230,   220,   228,   232,
     214,   210,   211,   498,   498,   498,   498,   498,   498,   280,
     297,   298,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   292,   354,     0,     0,     0,     0,   323,   329,
       0,   338,     0,   321,   492,     0,   485,     0,   498,     0,
     498,     0,   504,     0,   520,   519,     0,   498,     0,     0,
     498,     0,   379,     0,   378,   498,   222,   224,   226,   213,
     229,   527,   528,   529,   530,   531,   532,     0,   472,     0,
       0,   351,   341,   344,   342,   343,   345,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   331,
     334,   332,   330,   337,   336,     0,   306,   353,     0,   498,
     495,   495,   495,   518,     0,   502,   498,   498,   498,   508,
     498,   498,   273,   498,     0,   492,   435,   349,     0,   348,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   339,     0,   369,     0,     0,     0,     0,
     498,   470,   525,   509,   511,   510,   272,   498,     0,   347,
     352,   346,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   498,   496,     0,     0,     0,     0,   503,   270,
       0,   271,   497,   491,   499,   500,   501,   498,   269
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -663,  -663,  -663,   991,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,   917,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,   909,   728,  -663,  -663,  -663,  -663,   918,
    -663,  -663,  -663,   511,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -217,
    -445,   252,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
     744,   780,   785,   -65,  -201,  -202,  -348,   620,   530,  -663,
     965,  -663,  -663,  -663,  -663,  -663,   554,  -472,  -387,   455,
    -663,   408,  -663,   225,  -663,  -663,   329,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,   169,   464,  -663,  -663,  -663,
     563,  -114,   604,  -108,  -662,   789,   371,  -663,   799,  1029,
    -663,  -207,  -295,   -76,   743,  -258,   803,   581,   825,   839,
    -663,   815,  -663,  -663,  -663,   695,  -663,  -663,   650,  -663,
    -663,  -663,  -184,  -663,  -663,  -179,  -663,  -344,    14,  -319,
     489,  -342,  -508,  -339,  -355,  -264,  -458,  -663,   691,  -663,
    -663,  -663,   -49,   193,  -663,   910,  -663,   302,  -663,   399,
    -663,  -210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    60,   125,    61,   147,    62,   166,
      63,   184,    74,    75,    90,   224,    91,   234,    92,   250,
      13,    14,   263,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   109,   110,   287,    24,    25,    26,    97,    98,
     404,   500,   501,   594,   679,   502,   503,   504,   505,   506,
     507,   680,   681,   682,   508,   674,   762,   763,   764,   767,
     768,   770,    27,    28,    29,    30,    31,    32,    33,    34,
      76,    77,    78,   204,   368,   205,   370,   266,   400,   403,
      79,   130,    80,   362,   468,   429,   526,   511,   414,   612,
     613,   614,   798,   799,   801,   866,   780,   842,   843,   844,
     845,   846,   891,   803,   792,   793,    81,   132,   133,   134,
     463,   371,   424,   269,   752,    82,   563,   656,    83,    84,
      85,   312,   313,   114,   280,   281,    86,    87,    88,    89,
     217,   218,   260,   141,   338,   339,   233,   385,   386,   340,
     387,   388,   341,   390,   342,   343,   344,   530,   158,   435,
     627,   635,   636,   944,   445,   907,   732,   159,   450,   177,
     178,   179,   275,   160,   161,   350,   162,   142,   143,   144,
     465,   315
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     284,   206,   369,   208,   369,   372,   369,   374,   222,   470,
     436,   437,   380,   491,   379,   438,   439,   420,   442,   578,
     476,   111,   406,   199,   476,   446,   476,   451,   264,   455,
     484,   579,   580,   209,   581,    93,   459,   460,    50,   389,
     353,   111,   638,    51,   391,    35,    52,    36,   837,    37,
      38,    53,   267,    39,   276,   277,   278,   279,   326,   660,
     538,    54,   482,   804,   365,   665,    40,    41,   586,   485,
      42,   588,   145,   486,    43,   476,   358,   195,    55,   447,
     448,   933,   418,   528,   420,   535,   536,    44,   345,    45,
      96,   353,   373,   532,   375,   529,   587,   546,   547,   589,
     609,   610,   542,   554,    56,   245,   582,   583,    65,    66,
     531,    57,   443,   727,   728,   838,   557,   611,    94,   200,
      44,    67,   529,   420,   369,   423,    58,    68,   539,    69,
      70,    95,   576,   737,   738,   839,   200,   210,   572,   743,
     115,   840,   265,   116,    96,   276,   277,   278,   279,   934,
     112,   755,   397,   327,   398,   447,   448,   202,   203,   406,
     760,   366,   885,   367,   600,   601,   602,   603,   604,   605,
     220,   480,   863,   405,   864,    99,   773,   774,   775,   776,
     777,   778,   472,   113,   200,   420,    46,   200,   637,   639,
     669,   473,    47,   643,   354,   645,   646,   761,   201,   100,
     649,   389,   756,   221,   652,    71,   391,   758,   841,   102,
     355,   356,   106,   107,    72,   201,    73,   541,   779,   452,
     667,   690,   359,   360,   358,   808,   104,   810,   422,   529,
     584,   812,   361,   814,   815,   556,   425,   817,   794,   453,
     820,   346,   347,   101,   346,   357,    48,   529,   103,   200,
     571,   825,   146,   105,   477,   180,   196,   920,   478,   474,
     479,   348,   529,   349,   512,   290,   201,   108,   475,   921,
     328,   291,   729,   426,   292,   428,   329,   330,   331,   332,
     333,   318,   319,   117,   246,   736,   334,   335,   426,   740,
     428,   365,   519,   744,   118,   746,   747,   869,   749,   449,
     521,   520,   119,   876,   598,   877,   207,   336,   878,   522,
     880,   881,   523,   883,   449,   831,   832,   833,   834,   835,
     836,   524,   830,   795,   796,   366,   120,   367,   201,   202,
     203,   337,     1,   320,   321,   426,   427,   428,   121,   629,
     630,   293,   797,   514,   294,   122,   271,   272,   273,   274,
     873,   631,   875,   123,   200,   559,   754,   211,   632,   879,
     662,   215,   882,   163,   181,   197,   910,   886,   295,   366,
     296,   367,   297,   629,   630,   298,   917,   392,   216,   809,
     361,   830,   830,   830,   262,   631,   261,   683,   366,   270,
     367,   282,   632,   247,   299,   300,   932,   823,   676,   301,
     302,   303,   677,   678,   304,   570,   305,   267,   306,   307,
     283,   905,   393,   316,   308,   309,   310,   311,   911,   912,
     913,   314,   914,   915,   286,   916,   430,   212,   213,   214,
     290,   419,   947,   201,   440,   441,   291,   597,   288,   292,
       2,     3,     4,     5,     6,     7,     8,     9,   289,   868,
     317,   757,   938,   653,   322,   657,   202,   203,   476,   939,
     164,   182,   198,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   422,   941,   324,   431,   432,   433,   434,
     323,   616,   290,   618,   550,   551,   633,   634,   291,   948,
     248,   292,   325,   661,   363,    64,   606,   607,   608,   351,
     644,   870,   871,   872,   725,   364,   293,   376,   651,   294,
     378,   202,   203,   552,   553,   366,   394,   367,   395,   888,
     633,   634,   399,   664,   131,   151,   170,   188,   369,   806,
     918,    65,    66,   295,   396,   296,   401,   297,   590,   591,
     298,   592,   593,    44,    67,   826,   827,   828,   290,   402,
      68,   407,    69,    70,   291,   238,   254,   292,   293,   299,
     300,   294,   443,   648,   301,   302,   303,   456,   730,   304,
     366,   305,   367,   306,   307,   276,   277,   278,   279,   308,
     309,   310,   311,   654,   655,   295,   416,   296,   421,   297,
     609,   610,   298,   943,   943,   943,   481,   945,   946,   457,
     290,   623,   624,   625,   626,   458,   291,   908,   909,   292,
     462,   299,   300,   124,   452,   461,   301,   302,   303,   466,
     464,   304,   467,   305,   293,   306,   307,   294,    71,   469,
     443,   308,   309,   310,   311,   471,   443,    72,   487,    73,
     488,   138,   155,   174,   192,   824,   265,   490,   513,    65,
      66,   295,   492,   296,   493,   297,   510,   328,   298,   509,
     111,    44,    67,   329,   330,   331,   332,   333,    68,   515,
      69,    70,   242,   334,   335,   516,   293,   299,   300,   294,
     518,   525,   301,   302,   303,   527,   533,   304,   544,   305,
     534,   306,   307,   537,   543,   540,   545,   308,   309,   310,
     311,   548,   549,   295,   555,   296,   558,   297,   560,   562,
     298,   165,   564,   566,   569,   567,   494,   495,   408,   409,
     410,   411,   412,   413,   568,   183,   496,   497,   498,   299,
     300,   573,   585,   574,   301,   302,   303,   596,   575,   304,
     223,   305,   599,   306,   307,   615,    71,    65,    66,   308,
     309,   310,   311,   617,   249,    72,   499,    73,   619,    44,
      67,    65,    66,   620,   621,   622,    68,   628,    69,    70,
     641,   642,   647,    44,    67,   650,    65,    66,   659,   663,
      68,   666,    69,    70,   668,   673,   200,   670,    44,    67,
      65,    66,   443,   671,   672,    68,  -219,    69,    70,   675,
     684,   685,    44,    67,   126,   148,   167,   185,   691,    68,
     686,    69,    70,   329,   330,   331,   332,   333,   381,   329,
     330,   331,   332,   333,   381,   382,   383,   384,   687,   688,
     692,   382,   383,   384,   225,   235,   251,   689,   731,   734,
     127,   149,   168,   186,    71,   128,   150,   169,   187,   135,
     152,   171,   189,    72,   733,    73,   735,   739,    71,   136,
     153,   172,   190,   137,   154,   173,   191,    72,   741,    73,
     226,   236,   252,   742,   745,   227,   237,   253,   748,   228,
     239,   255,    72,   751,    73,   139,   156,   175,   193,   229,
     240,   256,   759,   230,   241,   257,    72,   769,    73,   140,
     157,   176,   194,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   791,   750,  -221,   231,   243,   258,   800,   802,
     805,  -223,  -225,   765,   766,   807,   771,   857,   772,   232,
     244,   259,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   811,   813,   816,   818,   819,   821,
     822,   858,   859,   865,   860,   861,   867,   874,   884,   887,
     904,   889,   890,   935,   892,   936,   893,   894,   937,   940,
     942,   219,   895,   896,   897,   898,   899,   900,   901,   903,
     906,   919,    59,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   415,   595,   268,   489,   829,   285,   577,
     658,   726,   565,   862,   781,   129,   902,   517,   561,   753,
      49,   417,   377,   444,   640,   483,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352
};

static const yytype_int16 yycheck[] =
{
     108,    66,   204,    68,   206,   206,   208,   208,    84,   364,
     329,   330,   222,   400,   221,   334,   335,   312,   337,   491,
     368,    53,   280,     7,   372,   344,   374,   346,    44,   348,
     385,    19,    20,   103,    22,    12,   355,   356,   101,   223,
       7,    53,    33,   101,   223,     9,   101,    11,    59,    13,
      14,   101,    56,    17,    97,    98,    99,   100,   123,   567,
      35,   101,   381,   725,    56,   573,    30,    31,    27,   388,
      34,    27,     3,   392,    38,   423,    42,    63,   101,    20,
      21,    35,   289,   103,   379,   440,   441,    51,     7,    53,
      94,     7,   206,   437,   208,   115,    55,   452,   453,    55,
      32,    33,   446,   458,   101,    91,    94,    95,    39,    40,
     103,   101,   103,   621,   622,   126,   460,    49,    95,   103,
      51,    52,   115,   418,   326,   326,     0,    58,   103,    60,
      61,   103,   487,   641,   642,   146,   103,   207,   482,   647,
      38,   152,   158,    41,    94,    97,    98,    99,   100,   103,
     182,   659,    94,     7,    96,    20,    21,    94,    95,   417,
     668,   153,   824,   155,   519,   520,   521,   522,   523,   524,
     182,   378,    94,   216,    96,    44,   684,   685,   686,   687,
     688,   689,    94,   215,   103,   480,   150,   103,   543,   544,
     577,   103,   156,   548,   161,   550,   551,   669,   182,    95,
     555,   385,   660,   215,   559,   136,   385,   665,   219,   103,
     177,   178,   148,   149,   145,   182,   147,   103,   690,   160,
     575,   608,   188,   189,    42,   733,    96,   735,    56,   115,
     218,   739,   198,   741,   742,   103,    54,   745,    42,   180,
     748,   160,   161,    95,   160,   161,   210,   115,    95,   103,
     103,   759,   183,   215,   368,    62,    63,   208,   372,    94,
     374,   180,   115,   182,   216,    50,   182,   205,   103,   220,
     124,    56,   627,   153,    59,   155,   130,   131,   132,   133,
     134,    94,    95,   181,    91,   640,   140,   141,   153,   644,
     155,    56,    94,   648,    41,   650,   651,   805,   653,   179,
      94,   103,    41,   811,   514,   813,    96,   161,   816,   103,
     818,   819,    94,   821,   179,   773,   774,   775,   776,   777,
     778,   103,   767,   127,   128,   153,    41,   155,   182,    94,
      95,   185,     8,    94,    95,   153,   154,   155,    16,    39,
      40,   126,   146,   419,   129,    41,   173,   174,   175,   176,
     808,    51,   810,    41,   103,   463,    56,   207,    58,   817,
     570,   102,   820,    61,    62,    63,   874,   825,   153,   153,
     155,   155,   157,    39,    40,   160,   884,   126,   101,   734,
     198,   826,   827,   828,    39,    51,    10,   597,   153,   103,
     155,    95,    58,    91,   179,   180,   904,   752,    24,   184,
     185,   186,    28,    29,   189,   481,   191,    56,   193,   194,
     103,   869,   161,    95,   199,   200,   201,   202,   876,   877,
     878,    37,   880,   881,   203,   883,   161,   137,   138,   139,
      50,   216,   940,   182,   200,   201,    56,   513,   215,    59,
     116,   117,   118,   119,   120,   121,   122,   123,   215,   804,
      95,   661,   910,   561,    95,   563,    94,    95,   806,   917,
      61,    62,    63,   782,   783,   784,   785,   786,   787,   788,
     789,   790,   791,    56,   932,    94,   211,   212,   213,   214,
      95,   530,    50,   532,    94,    95,   186,   187,    56,   947,
      91,    59,    95,   569,    58,     3,    46,    47,    48,   182,
     549,   195,   196,   197,   612,   192,   126,    35,   557,   129,
     215,    94,    95,    94,    95,   153,    94,   155,    23,   838,
     186,   187,   159,   572,    60,    61,    62,    63,   730,   730,
     885,    39,    40,   153,   103,   155,   103,   157,    25,    26,
     160,    25,    26,    51,    52,   762,   763,   764,    50,    43,
      58,   149,    60,    61,    56,    91,    92,    59,   126,   179,
     180,   129,   103,   104,   184,   185,   186,   181,   633,   189,
     153,   191,   155,   193,   194,    97,    98,    99,   100,   199,
     200,   201,   202,   213,   214,   153,   204,   155,   103,   157,
      32,    33,   160,   935,   936,   937,   216,   936,   937,   181,
      50,   162,   163,   164,   165,   202,    56,   871,   872,    59,
      36,   179,   180,     3,   160,    94,   184,   185,   186,   205,
      45,   189,    44,   191,   126,   193,   194,   129,   136,   103,
     103,   199,   200,   201,   202,   103,   103,   145,   126,   147,
     103,    60,    61,    62,    63,   753,   158,    94,   216,    39,
      40,   153,   162,   155,    94,   157,   172,   124,   160,   103,
      53,    51,    52,   130,   131,   132,   133,   134,    58,    35,
      60,    61,    91,   140,   141,   103,   126,   179,   180,   129,
      95,    45,   184,   185,   186,   103,   103,   189,    59,   191,
     103,   193,   194,   103,   103,     5,   103,   199,   200,   201,
     202,    59,   103,   153,   103,   155,   103,   157,   190,   199,
     160,     3,   103,    35,   216,     5,    15,    16,   166,   167,
     168,   169,   170,   171,   162,     3,    25,    26,    27,   179,
     180,     5,    94,   103,   184,   185,   186,    94,   103,   189,
       3,   191,   162,   193,   194,   104,   136,    39,    40,   199,
     200,   201,   202,   104,     3,   145,    55,   147,   104,    51,
      52,    39,    40,   104,     5,     5,    58,    35,    60,    61,
       5,     5,     5,    51,    52,   104,    39,    40,     5,   104,
      58,   104,    60,    61,     5,   217,   103,    95,    51,    52,
      39,    40,   103,    95,    95,    58,    94,    60,    61,    94,
       5,     5,    51,    52,    60,    61,    62,    63,    94,    58,
       5,    60,    61,   130,   131,   132,   133,   134,   135,   130,
     131,   132,   133,   134,   135,   142,   143,   144,     5,     5,
      94,   142,   143,   144,    90,    91,    92,     5,     4,    94,
      60,    61,    62,    63,   136,    60,    61,    62,    63,    60,
      61,    62,    63,   145,     5,   147,     5,     5,   136,    60,
      61,    62,    63,    60,    61,    62,    63,   145,     5,   147,
      90,    91,    92,     5,     5,    90,    91,    92,     5,    90,
      91,    92,   145,    57,   147,    60,    61,    62,    63,    90,
      91,    92,     5,    90,    91,    92,   145,    18,   147,    60,
      61,    62,    63,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    94,    94,    90,    91,    92,   206,   151,
       5,    94,    94,    94,    94,     3,    95,     6,    95,    90,
      91,    92,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     5,     5,     5,     5,     5,     5,
     103,    94,    94,   209,   103,    95,    94,     5,     5,    94,
       5,    95,    94,     5,   103,     5,   103,   103,     5,     5,
      35,    74,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,    11,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   285,   503,    97,   396,   765,   109,   489,
     565,   613,   468,   798,   695,    60,   857,   423,   465,   658,
       1,   288,   217,   338,   545,   385,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   116,   117,   118,   119,   120,   121,   122,   123,
     222,   223,   224,   241,   242,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   256,   257,   258,   283,   284,   285,
     286,   287,   288,   289,   290,     9,    11,    13,    14,    17,
      30,    31,    34,    38,    51,    53,   150,   156,   210,   340,
     101,   101,   101,   101,   101,   101,   101,   101,     0,   224,
     225,   227,   229,   231,     3,    39,    40,    52,    58,    60,
      61,   136,   145,   147,   233,   234,   291,   292,   293,   301,
     303,   327,   336,   339,   340,   341,   347,   348,   349,   350,
     235,   237,   239,    12,    95,   103,    94,   259,   260,    44,
      95,    95,   103,    95,    96,   215,   148,   149,   205,   253,
     254,    53,   182,   215,   344,    38,    41,   181,    41,    41,
      41,    16,    41,    41,     3,   226,   291,   292,   293,   301,
     302,   327,   328,   329,   330,   336,   339,   347,   348,   349,
     350,   354,   388,   389,   390,     3,   183,   228,   291,   292,
     293,   327,   336,   339,   347,   348,   349,   350,   369,   378,
     384,   385,   387,   388,   390,     3,   230,   291,   292,   293,
     327,   336,   339,   347,   348,   349,   350,   380,   381,   382,
     384,   388,   390,     3,   232,   291,   292,   293,   327,   336,
     339,   347,   348,   349,   350,   369,   384,   388,   390,     7,
     103,   182,    94,    95,   294,   296,   294,    96,   294,   103,
     207,   207,   137,   138,   139,   102,   101,   351,   352,   234,
     182,   215,   344,     3,   236,   291,   292,   293,   336,   339,
     347,   349,   350,   357,   238,   291,   292,   293,   327,   336,
     339,   347,   348,   349,   350,   369,   384,   388,   390,     3,
     240,   291,   292,   293,   327,   336,   339,   347,   349,   350,
     353,    10,    39,   243,    44,   158,   298,    56,   260,   334,
     103,   173,   174,   175,   176,   383,    97,    98,    99,   100,
     345,   346,    95,   103,   334,   254,   203,   255,   215,   215,
      50,    56,    59,   126,   129,   153,   155,   157,   160,   179,
     180,   184,   185,   186,   189,   191,   193,   194,   199,   200,
     201,   202,   342,   343,    37,   392,    95,    95,    94,    95,
      94,    95,    95,    95,    94,    95,   294,     7,   124,   130,
     131,   132,   133,   134,   140,   141,   161,   185,   355,   356,
     360,   363,   365,   366,   367,     7,   160,   161,   180,   182,
     386,   182,   386,     7,   161,   177,   178,   161,    42,   188,
     189,   198,   304,    58,   192,    56,   153,   155,   295,   296,
     297,   332,   295,   332,   295,   332,    35,   352,   215,   342,
     392,   135,   142,   143,   144,   358,   359,   361,   362,   363,
     364,   366,   126,   161,    94,    23,   103,    94,    96,   159,
     299,   103,    43,   300,   261,   216,   346,   149,   166,   167,
     168,   169,   170,   171,   309,   255,   204,   345,   342,   216,
     343,   103,    56,   295,   333,    54,   153,   154,   155,   306,
     161,   211,   212,   213,   214,   370,   370,   370,   370,   370,
     200,   201,   370,   103,   356,   375,   370,    20,    21,   179,
     379,   370,   160,   180,   379,   370,   181,   181,   202,   370,
     370,    94,    36,   331,    45,   391,   205,    44,   305,   103,
     375,   103,    94,   103,    94,   103,   297,   332,   332,   332,
     342,   216,   370,   359,   375,   370,   370,   126,   103,   298,
      94,   309,   162,    94,    15,    16,    25,    26,    27,    55,
     262,   263,   266,   267,   268,   269,   270,   271,   275,   103,
     172,   308,   216,   216,   344,    35,   103,   333,    95,    94,
     103,    94,   103,    94,   103,    45,   307,   103,   103,   115,
     368,   103,   368,   103,   103,   375,   375,   103,    35,   103,
       5,   103,   368,   103,    59,   103,   375,   375,    59,   103,
      94,    95,    94,    95,   375,   103,   103,   368,   103,   334,
     190,   331,   199,   337,   103,   307,    35,     5,   162,   216,
     344,   103,   368,     5,   103,   103,   375,   299,   308,    19,
      20,    22,    94,    95,   218,    94,    27,    55,    27,    55,
      25,    26,    25,    26,   264,   264,    94,   344,   392,   162,
     375,   375,   375,   375,   375,   375,    46,    47,    48,    32,
      33,    49,   310,   311,   312,   104,   383,   104,   383,   104,
     104,     5,     5,   162,   163,   164,   165,   371,    35,    39,
      40,    51,    58,   186,   187,   372,   373,   375,    33,   375,
     371,     5,     5,   375,   383,   375,   375,     5,   104,   375,
     104,   383,   375,   334,   213,   214,   338,   334,   310,     5,
     373,   344,   392,   104,   383,   373,   104,   375,     5,   309,
      95,    95,    95,   217,   276,    94,    24,    28,    29,   265,
     272,   273,   274,   392,     5,     5,     5,     5,     5,     5,
     309,    94,    94,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   334,   312,   373,   373,   375,
     294,     4,   377,     5,    94,     5,   375,   373,   373,     5,
     375,     5,     5,   373,   375,     5,   375,   375,     5,   375,
      94,    57,   335,   337,    56,   373,   377,   392,   377,     5,
     373,   308,   277,   278,   279,    94,    94,   280,   281,    18,
     282,    95,    95,   373,   373,   373,   373,   373,   373,   308,
     317,   317,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   325,   326,    42,   127,   128,   146,   313,   314,
     206,   315,   151,   324,   335,     5,   295,     3,   373,   375,
     373,     5,   373,     5,   373,   373,     5,   373,     5,     5,
     373,     5,   103,   375,   334,   373,   280,   280,   280,   282,
     281,   377,   377,   377,   377,   377,   377,    59,   126,   146,
     152,   219,   318,   319,   320,   321,   322,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,     6,    94,    94,
     103,    95,   314,    94,    96,   209,   316,    94,   375,   373,
     195,   196,   197,   377,     5,   377,   373,   373,   373,   377,
     373,   373,   377,   373,     5,   335,   377,    94,   370,    95,
      94,   323,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   326,   103,     5,   377,   103,   376,   376,   376,
     373,   377,   377,   377,   377,   377,   377,   373,   375,   103,
     208,   220,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   373,    35,   103,     5,     5,     5,   377,   377,
       5,   377,    35,   372,   374,   374,   374,   373,   377
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   221,   222,   222,   223,   223,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   225,   225,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   229,   229,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   231,   231,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   233,   233,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   235,   235,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   237,   237,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   239,   239,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   241,   241,   241,   242,   243,
     243,   244,   245,   246,   247,   247,   247,   248,   248,   248,
     249,   250,   251,   252,   253,   253,   254,   255,   255,   256,
     257,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     262,   262,   263,   263,   264,   264,   265,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   270,   270,   271,
     272,   273,   274,   275,   275,   275,   275,   275,   275,   276,
     275,   277,   275,   278,   275,   279,   275,   275,   280,   280,
     281,   282,   282,   283,   283,   283,   283,   284,   285,   285,
     286,   287,   288,   289,   290,   290,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   297,   297,
     297,   297,   298,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   303,   303,   304,   304,   305,   306,   307,   307,
     307,   307,   308,   308,   309,   309,   309,   309,   309,   309,
     309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   311,   311,   312,   312,   313,
     313,   314,   314,   314,   314,   315,   315,   315,   316,   316,
     317,   317,   318,   318,   318,   318,   318,   319,   320,   321,
     322,   323,   323,   324,   325,   325,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   327,   328,   329,   330,
     331,   331,   332,   332,   333,   333,   334,   334,   335,   335,
     336,   336,   337,   337,   338,   338,   339,   339,   339,   339,
     340,   341,   342,   342,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   344,   344,   345,   345,
     346,   346,   346,   346,   347,   347,   347,   348,   348,   348,
     349,   350,   351,   351,   352,   353,   353,   354,   355,   355,
     356,   356,   356,   356,   357,   358,   358,   359,   359,   359,
     359,   360,   360,   361,   362,   362,   362,   363,   363,   363,
     363,   364,   364,   365,   366,   367,   367,   367,   368,   368,
     369,   369,   370,   370,   370,   370,   370,   370,   371,   371,
     371,   371,   371,   372,   372,   372,   372,   372,   372,   372,
     373,   374,   375,   375,   375,   376,   376,   376,   377,   377,
     377,   377,   378,   378,   378,   379,   379,   379,   380,   380,
     381,   381,   382,   383,   383,   383,   383,   383,   384,   385,
     385,   385,   385,   386,   386,   387,   387,   388,   388,   389,
     389,   390,   390,   391,   392,   392,   392
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
       2,     2,     2,     2,     2,     2,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     1,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     0,     2,     2,     0,     2,
       0,     2,     1,     1,     1,     1,     3,     3,     2,     2,
       2,     0,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     7,     6,     6,     9,
       0,     2,     0,     3,     0,     3,     0,     3,     0,     2,
       7,     7,     0,     3,     1,     1,     3,     6,     7,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     2,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     8,     6,     6,     1,     2,
       1,     1,     1,     1,     6,     1,     2,     1,     1,     1,
       1,     4,     4,     4,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     3,     3,     1,     1,     1,     1,     1,
       9,     6,     0,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     0,     2,     3,     0,     2,     3,     0,     6,
       6,     6,     8,    10,     7,     0,     1,     1,     8,     9,
       9,     9,     6,     0,     1,     1,     1,     1,     8,     7,
       7,     4,     4,     0,     1,     9,     6,     8,     8,     8,
       8,     8,     8,     2,     0,     2,     3
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
#line 2651 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 501 "src/p.y" /* yacc.c:1646  */
    {
                    addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 2659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 504 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 2668 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 520 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = START_DELAY; }
#line 2687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 521 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[0].number); }
#line 2693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 524 "src/p.y" /* yacc.c:1646  */
    {
                    Run.expectbuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
#line 2703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 531 "src/p.y" /* yacc.c:1646  */
    {
                    Run.init = TRUE;
                  }
#line 2711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 536 "src/p.y" /* yacc.c:1646  */
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
#line 2721 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2734 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 551 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog(NULL);
                  }
#line 2742 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 554 "src/p.y" /* yacc.c:1646  */
    {
                    setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 2750 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 559 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 2758 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 562 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = (yyvsp[-2].string);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 566 "src/p.y" /* yacc.c:1646  */
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 2776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 572 "src/p.y" /* yacc.c:1646  */
    {
                    Run.idfile = (yyvsp[0].string);
                  }
#line 2784 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 577 "src/p.y" /* yacc.c:1646  */
    {
                    Run.statefile = (yyvsp[0].string);
                  }
#line 2792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 582 "src/p.y" /* yacc.c:1646  */
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[0].string));
                   }
                 }
#line 2803 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 597 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname(((yyvsp[-3].url))->hostname);
                    addmmonit((yyvsp[-3].url), (yyvsp[-2].number), (yyvsp[-1].number), (yyvsp[0].string));
                  }
#line 2812 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 604 "src/p.y" /* yacc.c:1646  */
    {
                    Run.dommonitcredentials = FALSE;
                  }
#line 2820 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 609 "src/p.y" /* yacc.c:1646  */
    {
                   if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[-1].number);
                   Run.mail_hostname = (yyvsp[0].string);
                  }
#line 2830 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2842 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 625 "src/p.y" /* yacc.c:1646  */
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[-1].number);
                 }
#line 2851 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2874 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 682 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpdssl = FALSE;
                  }
#line 2904 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 713 "src/p.y" /* yacc.c:1646  */
    { Run.httpdsig = TRUE; }
#line 2924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 714 "src/p.y" /* yacc.c:1646  */
    { Run.httpdsig = FALSE; }
#line 2930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 725 "src/p.y" /* yacc.c:1646  */
    { Run.bind_addr = (yyvsp[0].string); }
#line 2936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 728 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpsslpem = (yyvsp[0].string);
                  }
#line 2944 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 733 "src/p.y" /* yacc.c:1646  */
    {
                    Run.httpsslclientpem = (yyvsp[0].string);
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
#line 2955 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 741 "src/p.y" /* yacc.c:1646  */
    {
                    Run.allowselfcert = TRUE;
                  }
#line 2963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 746 "src/p.y" /* yacc.c:1646  */
    {
                    addcredentials((yyvsp[-3].string),(yyvsp[-1].string), DIGEST_CLEARTEXT, (yyvsp[0].number));
                  }
#line 2971 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 757 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[0].string));
                  }
#line 2993 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 761 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[0].string));
                  }
#line 3002 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 765 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[0].string));
                  }
#line 3011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 769 "src/p.y" /* yacc.c:1646  */
    {
                    addhtpasswdentry((yyvsp[0].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[0].string));
                  }
#line 3020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 773 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = CLEARTEXT;
                  }
#line 3029 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 777 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 780 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
#line 3046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 784 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3054 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 787 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_MD5;
                  }
#line 3063 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 791 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 794 "src/p.y" /* yacc.c:1646  */
    {
                    htpasswd_file = (yyvsp[0].string);
                    digesttype = DIGEST_CRYPT;
                  }
#line 3080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                    FREE(htpasswd_file);
                  }
#line 3088 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                    if (! (add_net_allow((yyvsp[0].string)) || add_host_allow((yyvsp[0].string)))) {
                      yyerror2("Erroneous network or host identifier %s", (yyvsp[0].string));
                    }
                    FREE((yyvsp[0].string));
                  }
#line 3099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 813 "src/p.y" /* yacc.c:1646  */
    { addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                           FREE((yyvsp[0].string)); }
#line 3106 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 817 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = FALSE; }
#line 3112 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 818 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TRUE; }
#line 3118 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 824 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_PROCESS, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 3134 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3146 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 843 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILE, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 3166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 3182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 856 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 3190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 861 "src/p.y" /* yacc.c:1646  */
    {
                    check_hostname((yyvsp[0].string));
                    createservice(TYPE_HOST, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 3199 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3214 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 879 "src/p.y" /* yacc.c:1646  */
    {
                    createservice(TYPE_FIFO, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 3222 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3234 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3246 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 900 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3254 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 903 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(START, (yyvsp[0].number));
                  }
#line 3262 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 908 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 911 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(STOP, (yyvsp[0].number));
                  }
#line 3278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 917 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3286 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 920 "src/p.y" /* yacc.c:1646  */
    {
                    addcommand(RESTART, (yyvsp[0].number));
                  }
#line 3294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 933 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 934 "src/p.y" /* yacc.c:1646  */
    { addargument((yyvsp[0].string)); }
#line 3306 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 937 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3312 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 938 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid((yyvsp[0].string), 0) ); FREE((yyvsp[0].string)); }
#line 3318 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 939 "src/p.y" /* yacc.c:1646  */
    { addeuid( get_uid(NULL, (yyvsp[0].number)) ); }
#line 3324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 940 "src/p.y" /* yacc.c:1646  */
    { addegid( get_gid(NULL, (yyvsp[0].number)) ); }
#line 3330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 943 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3336 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 944 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 945 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3348 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 948 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3354 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 949 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 952 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3366 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 953 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3372 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3388 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                   portset.timeout = (yyvsp[-5].number);
                   portset.retry = (yyvsp[-4].number);
                   addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                   addport(&portset);
                  }
#line 3411 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3423 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1003 "src/p.y" /* yacc.c:1646  */
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = Str_dup(current->path);
                    else
                      portset.hostname = Str_dup(LOCALHOST);
                  }
#line 3446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1009 "src/p.y" /* yacc.c:1646  */
    { check_hostname((yyvsp[0].string)); portset.hostname = (yyvsp[0].string); }
#line 3452 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1012 "src/p.y" /* yacc.c:1646  */
    { portset.port = (yyvsp[0].number); portset.family = AF_INET; }
#line 3458 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1015 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string); portset.family = AF_UNIX;
                  }
#line 3466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1020 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3474 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1023 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_STREAM;
                  }
#line 3482 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1034 "src/p.y" /* yacc.c:1646  */
    {
                    portset.type = SOCK_DGRAM;
                  }
#line 3503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1039 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1040 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3515 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1043 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_NONE; }
#line 3521 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1044 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_SSLV2; }
#line 3527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1045 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_SSLV3; }
#line 3533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1046 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_TLSV1; }
#line 3539 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1048 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_VERSION_TLSV11;
                }
#line 3550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1055 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_VERSION_TLSV12;
                }
#line 3561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1061 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = SSL_VERSION_AUTO; }
#line 3567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1064 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1067 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 3583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1070 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 3591 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1073 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 3599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1076 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 3607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1079 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 3615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1082 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 3623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1085 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 3634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1091 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3642 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1094 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 3653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1100 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 3661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1103 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1106 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 3677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 3685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 3693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1115 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 3701 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1118 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 3709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1121 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
#line 3718 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1125 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 3726 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1128 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 3734 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1131 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 3742 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 3753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1140 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 3761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 3769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1146 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 3777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1149 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 3785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 3793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1155 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 3801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 3809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1161 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1164 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 3825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1167 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 3833 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1170 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 3841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1173 "src/p.y" /* yacc.c:1646  */
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
#line 3849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1182 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, (yyvsp[0].string), NULL);
                  }
#line 3857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1185 "src/p.y" /* yacc.c:1646  */
    {
                    addgeneric(&portset, NULL, (yyvsp[0].string));
                  }
#line 3865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1194 "src/p.y" /* yacc.c:1646  */
    {
                    portset.pathname = (yyvsp[0].string);
                  }
#line 3873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1197 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1200 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 3889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1203 "src/p.y" /* yacc.c:1646  */
    {
                    portset.version = (yyvsp[0].number);
                  }
#line 3897 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1209 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1212 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1218 "src/p.y" /* yacc.c:1646  */
    {
                     portset.maxforward = verifyMaxForward((yyvsp[0].number));
                   }
#line 3921 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1234 "src/p.y" /* yacc.c:1646  */
    {
                    portset.operator = (yyvsp[-1].number);
                    portset.status = (yyvsp[0].number);
                  }
#line 3930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1240 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = Util_urlEncode((yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 3939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1246 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_checksum = (yyvsp[0].string);
                  }
#line 3947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1251 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request_hostheader = (yyvsp[0].string);
                  }
#line 3955 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1257 "src/p.y" /* yacc.c:1646  */
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[0].string));
                 }
#line 3966 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1265 "src/p.y" /* yacc.c:1646  */
    {
                    portset.request = (yyvsp[0].string);
                  }
#line 3974 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1274 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.loglimit = (yyvsp[-1].number);
                  }
#line 3983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1278 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.closelimit = (yyvsp[-1].number);
                  }
#line 3992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1282 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[-1].number);
                  }
#line 4001 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1286 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 4010 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1290 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.replylimit = (yyvsp[-1].number);
                  }
#line 4019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1294 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[-1].number);
                  }
#line 4028 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1298 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.startlimit = (yyvsp[-1].number);
                  }
#line 4037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1302 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[-1].number);
                  }
#line 4046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1306 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 4055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1310 "src/p.y" /* yacc.c:1646  */
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[-2].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 4064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1316 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 4072 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1322 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_PID, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 4080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1327 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 4088 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1332 "src/p.y" /* yacc.c:1646  */
    {
                    uptimeset.operator = (yyvsp[-6].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    adduptime(&uptimeset);
                  }
#line 4099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1339 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
#line 4107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1342 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                 }
#line 4115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1347 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
#line 4123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1355 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
#line 4139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1358 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number);
                  }
#line 4147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1363 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
#line 4155 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1366 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 4163 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1371 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = 1;
                  }
#line 4171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1374 "src/p.y" /* yacc.c:1646  */
    {
                   (yyval.number) = (yyvsp[0].number);
                  }
#line 4179 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1379 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, (yyvsp[0].number), ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
#line 4190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1385 "src/p.y" /* yacc.c:1646  */
    {
                   actionrateset.count = (yyvsp[-5].number);
                   actionrateset.cycle = (yyvsp[-3].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
#line 4201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1394 "src/p.y" /* yacc.c:1646  */
    {
                    seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                    FREE((yyvsp[0].string));
                  }
#line 4210 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1400 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1401 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1404 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 4231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1408 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 4239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1411 "src/p.y" /* yacc.c:1646  */
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 4248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1415 "src/p.y" /* yacc.c:1646  */
    {
                   addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 4256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1420 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4262 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1423 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 4268 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1430 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 4274 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1431 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 4280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1432 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 4286 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1433 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 4292 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1434 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 4298 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1435 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 4304 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1436 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Fsflag; }
#line 4310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1437 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 4316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1438 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 4322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1439 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 4328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1440 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 4334 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1441 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Nonexist; }
#line 4340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1442 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 4346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1443 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 4352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1444 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 4358 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1445 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 4364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1446 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 4370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1447 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 4376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1448 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 4382 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1449 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 4388 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1450 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 4394 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1451 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 4400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1462 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[0].string); }
#line 4406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1463 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[0].string); }
#line 4412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1464 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 4418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1465 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 4424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1468 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_SKIPCYCLES;
                   current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 4433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1472 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_CRON;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1476 "src/p.y" /* yacc.c:1646  */
    {
                   current->every.type = EVERY_NOTINCRON;
                   current->every.spec.cron = (yyvsp[0].string);
                 }
#line 4451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1482 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_ACTIVE;
                  }
#line 4459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1485 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_PASSIVE;
                  }
#line 4467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1488 "src/p.y" /* yacc.c:1646  */
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
#line 4476 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1494 "src/p.y" /* yacc.c:1646  */
    { addservicegroup((yyvsp[0].string)); FREE((yyvsp[0].string));}
#line 4482 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1505 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 4488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1508 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = TRUE;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 4500 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1515 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = FALSE;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), ACTION_IGNORE);
                        addstatus(&statusset);
                   }
#line 4512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1524 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4521 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1540 "src/p.y" /* yacc.c:1646  */
    {
                     addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                     addresource(&resourceset);
                   }
#line 4530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1556 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1561 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1568 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-3].number);
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1575 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
#line 4566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1576 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
#line 4572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1577 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
#line 4578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1580 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1585 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1595 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1602 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = (int) ((yyvsp[-1].real) * ((yyvsp[0].number) / 1024.0));
                  }
#line 4628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1607 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[-2].number);
                    resourceset.limit = ((yyvsp[-1].number) * 10);
                  }
#line 4638 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1614 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) (yyvsp[0].number);
                  }
#line 4648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1621 "src/p.y" /* yacc.c:1646  */
    {
                    resourceset.resource_id = (yyvsp[-2].number);
                    resourceset.operator = (yyvsp[-1].number);
                    resourceset.limit = (int) ((yyvsp[0].real) * 10.0);
                  }
#line 4658 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1628 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD1; }
#line 4664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1629 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD5; }
#line 4670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1630 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = RESOURCE_ID_LOAD15; }
#line 4676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1633 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 4682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1634 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 4688 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1637 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.operator = (yyvsp[-6].number);
                    timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addtimestamp(&timestampset, FALSE);
                  }
#line 4699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1643 "src/p.y" /* yacc.c:1646  */
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
#line 4709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1650 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1651 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 4721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1652 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 4727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1653 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 4733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1654 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 4739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1655 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 4745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1658 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_SECOND; }
#line 4751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1659 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_SECOND; }
#line 4757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1660 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_MINUTE; }
#line 4763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1661 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_HOUR; }
#line 4769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1662 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = TIME_DAY; }
#line 4775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1665 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_ALERT; }
#line 4781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1666 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_EXEC; }
#line 4787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1667 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_EXEC; }
#line 4793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1668 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_RESTART; }
#line 4799 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1669 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_START; }
#line 4805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1670 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_STOP; }
#line 4811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1671 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ACTION_UNMONITOR; }
#line 4817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1674 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
#line 4829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1683 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                    if ((yyvsp[0].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
#line 4841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1693 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-1].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 4852 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1699 "src/p.y" /* yacc.c:1646  */
    {
                    rate1.count  = (yyvsp[-2].number);
                    rate1.cycles = (yyvsp[-1].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 4865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1710 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-1].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
#line 4876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1716 "src/p.y" /* yacc.c:1646  */
    {
                    rate2.count  = (yyvsp[-2].number);
                    rate2.cycles = (yyvsp[-1].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
#line 4889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1726 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = ACTION_ALERT;
                  }
#line 4897 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1729 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1732 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1735 "src/p.y" /* yacc.c:1646  */
    {
                    (yyval.number) = (yyvsp[0].number);
                  }
#line 4921 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1740 "src/p.y" /* yacc.c:1646  */
    {
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 4930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1745 "src/p.y" /* yacc.c:1646  */
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                    FREE((yyvsp[-4].string));
                    addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addchecksum(&checksumset);
                  }
#line 4941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1751 "src/p.y" /* yacc.c:1646  */
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
#line 4951 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1757 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_UNKNOWN; }
#line 4957 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1758 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_MD5; }
#line 4963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1759 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = HASH_SHA1; }
#line 4969 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1762 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[-5].number);
                    filesystemset.limit_absolute = (yyvsp[-4].number);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4981 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1769 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 4993 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1778 "src/p.y" /* yacc.c:1646  */
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[-4].number));
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1787 "src/p.y" /* yacc.c:1646  */
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[-6].number);
                    filesystemset.limit_percent = (int)((yyvsp[-5].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addfilesystem(&filesystemset);
                  }
#line 5019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[0].number), ACTION_IGNORE);
                  }
#line 5027 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1801 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_BYTE; }
#line 5033 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1802 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_BYTE; }
#line 5039 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1803 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_KILOBYTE; }
#line 5045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1804 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_MEGABYTE; }
#line 5051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1805 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = UNIT_GIGABYTE; }
#line 5057 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1808 "src/p.y" /* yacc.c:1646  */
    {
                    permset.perm = check_perm((yyvsp[-4].number));
                    addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addperm(&permset);
                  }
#line 5067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1815 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[-3].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[0].number));
                    FREE((yyvsp[-3].string));
                  }
#line 5079 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1822 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[-3].string);
                    addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 5090 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1828 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[0].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[0].string));
                  }
#line 5102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1835 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[0].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
#line 5113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1843 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = FALSE;
                  }
#line 5121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1846 "src/p.y" /* yacc.c:1646  */
    {
                    matchset.not = TRUE;
                  }
#line 5129 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1852 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.operator = (yyvsp[-6].number);
                    sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                    addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    addsize(&sizeset);
                  }
#line 5140 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1858 "src/p.y" /* yacc.c:1646  */
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[0].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
#line 5150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1865 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1871 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 5171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1878 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid((yyvsp[-4].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1884 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->euid = adduid(&uidset);
                  }
#line 5192 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1891 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid((yyvsp[-4].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[-4].string));
                  }
#line 5203 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1897 "src/p.y" /* yacc.c:1646  */
    {
                    gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                    addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->gid = addgid(&gidset);
                  }
#line 5213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1904 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 5219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1907 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 5225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1908 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 5231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1909 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 5237 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 5241 "src/y.tab.c" /* yacc.c:1646  */
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
#line 1912 "src/p.y" /* yacc.c:1906  */



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

