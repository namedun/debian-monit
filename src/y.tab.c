#include <config.h>
/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 26 "src/p.y"


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



/* Line 268 of yacc.c  */
#line 306 "src/y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     APACHESTATUS = 319,
     FTP = 320,
     SMTP = 321,
     POP = 322,
     IMAP = 323,
     CLAMAV = 324,
     NNTP = 325,
     NTP3 = 326,
     MYSQL = 327,
     DNS = 328,
     WEBSOCKET = 329,
     SSH = 330,
     DWP = 331,
     LDAP2 = 332,
     LDAP3 = 333,
     RDATE = 334,
     RSYNC = 335,
     TNS = 336,
     PGSQL = 337,
     POSTFIXPOLICY = 338,
     SIP = 339,
     LMTP = 340,
     GPS = 341,
     RADIUS = 342,
     MEMCACHE = 343,
     STRING = 344,
     PATH = 345,
     MAILADDR = 346,
     MAILFROM = 347,
     MAILREPLYTO = 348,
     MAILSUBJECT = 349,
     MAILBODY = 350,
     SERVICENAME = 351,
     STRINGNAME = 352,
     NUMBER = 353,
     PERCENT = 354,
     LOGLIMIT = 355,
     CLOSELIMIT = 356,
     DNSLIMIT = 357,
     KEEPALIVELIMIT = 358,
     REPLYLIMIT = 359,
     REQUESTLIMIT = 360,
     STARTLIMIT = 361,
     WAITLIMIT = 362,
     GRACEFULLIMIT = 363,
     CLEANUPLIMIT = 364,
     REAL = 365,
     CHECKPROC = 366,
     CHECKFILESYS = 367,
     CHECKFILE = 368,
     CHECKDIR = 369,
     CHECKHOST = 370,
     CHECKSYSTEM = 371,
     CHECKFIFO = 372,
     CHECKPROGRAM = 373,
     CHILDREN = 374,
     SYSTEM = 375,
     STATUS = 376,
     ORIGIN = 377,
     VERSIONOPT = 378,
     RESOURCE = 379,
     MEMORY = 380,
     TOTALMEMORY = 381,
     LOADAVG1 = 382,
     LOADAVG5 = 383,
     LOADAVG15 = 384,
     SWAP = 385,
     MODE = 386,
     ACTIVE = 387,
     PASSIVE = 388,
     MANUAL = 389,
     CPU = 390,
     TOTALCPU = 391,
     CPUUSER = 392,
     CPUSYSTEM = 393,
     CPUWAIT = 394,
     GROUP = 395,
     REQUEST = 396,
     DEPENDS = 397,
     BASEDIR = 398,
     SLOT = 399,
     EVENTQUEUE = 400,
     SECRET = 401,
     HOSTHEADER = 402,
     UID = 403,
     EUID = 404,
     GID = 405,
     MMONIT = 406,
     INSTANCE = 407,
     USERNAME = 408,
     PASSWORD = 409,
     TIMESTAMP = 410,
     CHANGED = 411,
     SECOND = 412,
     MINUTE = 413,
     HOUR = 414,
     DAY = 415,
     SSLAUTO = 416,
     SSLV2 = 417,
     SSLV3 = 418,
     TLSV1 = 419,
     TLSV11 = 420,
     TLSV12 = 421,
     CERTMD5 = 422,
     BYTE = 423,
     KILOBYTE = 424,
     MEGABYTE = 425,
     GIGABYTE = 426,
     INODE = 427,
     SPACE = 428,
     PERMISSION = 429,
     SIZE = 430,
     MATCH = 431,
     NOT = 432,
     IGNORE = 433,
     ACTION = 434,
     UPTIME = 435,
     EXEC = 436,
     UNMONITOR = 437,
     ICMP = 438,
     ICMPECHO = 439,
     NONEXIST = 440,
     EXIST = 441,
     INVALID = 442,
     DATA = 443,
     RECOVERED = 444,
     PASSED = 445,
     SUCCEEDED = 446,
     URL = 447,
     CONTENT = 448,
     PID = 449,
     PPID = 450,
     FSFLAG = 451,
     REGISTER = 452,
     CREDENTIALS = 453,
     URLOBJECT = 454,
     TARGET = 455,
     TIMESPEC = 456,
     MAXFORWARD = 457,
     FIPS = 458,
     NOTEQUAL = 459,
     EQUAL = 460,
     LESS = 461,
     GREATER = 462
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
#define APACHESTATUS 319
#define FTP 320
#define SMTP 321
#define POP 322
#define IMAP 323
#define CLAMAV 324
#define NNTP 325
#define NTP3 326
#define MYSQL 327
#define DNS 328
#define WEBSOCKET 329
#define SSH 330
#define DWP 331
#define LDAP2 332
#define LDAP3 333
#define RDATE 334
#define RSYNC 335
#define TNS 336
#define PGSQL 337
#define POSTFIXPOLICY 338
#define SIP 339
#define LMTP 340
#define GPS 341
#define RADIUS 342
#define MEMCACHE 343
#define STRING 344
#define PATH 345
#define MAILADDR 346
#define MAILFROM 347
#define MAILREPLYTO 348
#define MAILSUBJECT 349
#define MAILBODY 350
#define SERVICENAME 351
#define STRINGNAME 352
#define NUMBER 353
#define PERCENT 354
#define LOGLIMIT 355
#define CLOSELIMIT 356
#define DNSLIMIT 357
#define KEEPALIVELIMIT 358
#define REPLYLIMIT 359
#define REQUESTLIMIT 360
#define STARTLIMIT 361
#define WAITLIMIT 362
#define GRACEFULLIMIT 363
#define CLEANUPLIMIT 364
#define REAL 365
#define CHECKPROC 366
#define CHECKFILESYS 367
#define CHECKFILE 368
#define CHECKDIR 369
#define CHECKHOST 370
#define CHECKSYSTEM 371
#define CHECKFIFO 372
#define CHECKPROGRAM 373
#define CHILDREN 374
#define SYSTEM 375
#define STATUS 376
#define ORIGIN 377
#define VERSIONOPT 378
#define RESOURCE 379
#define MEMORY 380
#define TOTALMEMORY 381
#define LOADAVG1 382
#define LOADAVG5 383
#define LOADAVG15 384
#define SWAP 385
#define MODE 386
#define ACTIVE 387
#define PASSIVE 388
#define MANUAL 389
#define CPU 390
#define TOTALCPU 391
#define CPUUSER 392
#define CPUSYSTEM 393
#define CPUWAIT 394
#define GROUP 395
#define REQUEST 396
#define DEPENDS 397
#define BASEDIR 398
#define SLOT 399
#define EVENTQUEUE 400
#define SECRET 401
#define HOSTHEADER 402
#define UID 403
#define EUID 404
#define GID 405
#define MMONIT 406
#define INSTANCE 407
#define USERNAME 408
#define PASSWORD 409
#define TIMESTAMP 410
#define CHANGED 411
#define SECOND 412
#define MINUTE 413
#define HOUR 414
#define DAY 415
#define SSLAUTO 416
#define SSLV2 417
#define SSLV3 418
#define TLSV1 419
#define TLSV11 420
#define TLSV12 421
#define CERTMD5 422
#define BYTE 423
#define KILOBYTE 424
#define MEGABYTE 425
#define GIGABYTE 426
#define INODE 427
#define SPACE 428
#define PERMISSION 429
#define SIZE 430
#define MATCH 431
#define NOT 432
#define IGNORE 433
#define ACTION 434
#define UPTIME 435
#define EXEC 436
#define UNMONITOR 437
#define ICMP 438
#define ICMPECHO 439
#define NONEXIST 440
#define EXIST 441
#define INVALID 442
#define DATA 443
#define RECOVERED 444
#define PASSED 445
#define SUCCEEDED 446
#define URL 447
#define CONTENT 448
#define PID 449
#define PPID 450
#define FSFLAG 451
#define REGISTER 452
#define CREDENTIALS 453
#define URLOBJECT 454
#define TARGET 455
#define TIMESPEC 456
#define MAXFORWARD 457
#define FIPS 458
#define NOTEQUAL 459
#define EQUAL 460
#define LESS 461
#define GREATER 462




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 260 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 293 of yacc.c  */
#line 765 "src/y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 777 "src/y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1035

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  212
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  524
/* YYNRULES -- Number of states.  */
#define YYNSTATES  924

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   462

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   210,     2,
       2,     2,     2,     2,   211,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   208,     2,   209,     2,     2,     2,     2,
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
     205,   206,   207
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    42,    45,    48,    51,    54,    57,    60,    63,    64,
      67,    69,    71,    73,    75,    77,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   101,   103,   105,
     106,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   137,   139,   141,   143,   144,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     167,   169,   171,   173,   175,   177,   179,   180,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   216,   218,   220,   222,   224,   226,
     228,   230,   232,   234,   236,   238,   240,   241,   244,   246,
     248,   250,   252,   254,   256,   258,   260,   262,   263,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   295,   298,   300,   302,   304,   306,
     308,   310,   312,   314,   316,   318,   323,   331,   340,   345,
     346,   350,   355,   358,   361,   365,   369,   375,   380,   387,
     392,   396,   400,   404,   408,   411,   415,   420,   421,   424,
     430,   436,   442,   444,   447,   453,   461,   462,   465,   467,
     469,   471,   473,   476,   479,   480,   483,   485,   487,   489,
     492,   495,   498,   501,   503,   505,   508,   511,   514,   517,
     520,   523,   526,   528,   534,   539,   542,   546,   550,   554,
     555,   560,   561,   567,   568,   574,   575,   581,   584,   586,
     589,   591,   592,   594,   599,   604,   609,   614,   619,   624,
     629,   634,   637,   642,   648,   652,   657,   661,   666,   670,
     675,   677,   680,   682,   685,   687,   689,   692,   695,   698,
     701,   702,   705,   708,   709,   712,   713,   716,   730,   742,
     754,   765,   766,   769,   772,   775,   776,   779,   784,   787,
     788,   791,   792,   794,   796,   798,   800,   802,   804,   805,
     809,   812,   815,   818,   821,   825,   828,   831,   834,   837,
     840,   845,   848,   851,   854,   857,   860,   863,   866,   869,
     872,   875,   878,   881,   885,   888,   892,   894,   896,   899,
     902,   905,   907,   910,   913,   916,   919,   922,   923,   926,
     929,   930,   933,   934,   937,   939,   941,   943,   945,   949,
     952,   955,   958,   961,   963,   967,   972,   977,   982,   987,
     992,   997,  1002,  1007,  1012,  1017,  1025,  1032,  1039,  1049,
    1050,  1053,  1054,  1058,  1059,  1063,  1064,  1068,  1069,  1072,
    1080,  1088,  1089,  1093,  1095,  1097,  1101,  1108,  1116,  1118,
    1121,  1124,  1126,  1129,  1131,  1133,  1135,  1137,  1139,  1141,
    1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1159,  1161,
    1163,  1165,  1167,  1169,  1171,  1173,  1174,  1179,  1181,  1184,
    1186,  1188,  1190,  1192,  1196,  1199,  1202,  1205,  1208,  1211,
    1214,  1217,  1219,  1222,  1224,  1233,  1240,  1242,  1245,  1247,
    1249,  1251,  1253,  1260,  1262,  1265,  1267,  1269,  1271,  1273,
    1278,  1283,  1288,  1290,  1292,  1294,  1299,  1304,  1309,  1314,
    1319,  1324,  1328,  1332,  1334,  1336,  1338,  1340,  1342,  1352,
    1359,  1360,  1362,  1364,  1366,  1368,  1370,  1371,  1373,  1375,
    1377,  1379,  1381,  1384,  1388,  1390,  1392,  1394,  1396,  1398,
    1400,  1401,  1404,  1408,  1409,  1412,  1416,  1417,  1424,  1431,
    1438,  1447,  1458,  1466,  1467,  1469,  1471,  1480,  1490,  1500,
    1510,  1517,  1518,  1520,  1522,  1524,  1526,  1535,  1543,  1551,
    1556,  1561,  1562,  1564,  1574,  1581,  1590,  1599,  1608,  1617,
    1626,  1635,  1638,  1639,  1642
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     213,     0,    -1,    -1,   214,    -1,   215,    -1,   214,   215,
      -1,   232,    -1,   233,    -1,   238,    -1,   239,    -1,   243,
      -1,   247,    -1,   248,    -1,   249,    -1,   242,    -1,   240,
      -1,   241,    -1,   235,    -1,   236,    -1,   237,    -1,   274,
     216,    -1,   275,   218,    -1,   276,   220,    -1,   277,   222,
      -1,   278,   224,    -1,   279,   226,    -1,   280,   228,    -1,
     281,   230,    -1,    -1,   216,   217,    -1,   282,    -1,   283,
      -1,   284,    -1,   317,    -1,   318,    -1,   319,    -1,   378,
      -1,   379,    -1,   380,    -1,   320,    -1,   292,    -1,   293,
      -1,   326,    -1,   329,    -1,   337,    -1,   338,    -1,   339,
      -1,   340,    -1,   344,    -1,    -1,   218,   219,    -1,   282,
      -1,   283,    -1,   284,    -1,   317,    -1,   359,    -1,   326,
      -1,   337,    -1,   329,    -1,   374,    -1,   378,    -1,   380,
      -1,   368,    -1,   377,    -1,   375,    -1,   338,    -1,   339,
      -1,   340,    -1,    -1,   220,   221,    -1,   282,    -1,   283,
      -1,   284,    -1,   317,    -1,   326,    -1,   337,    -1,   329,
      -1,   374,    -1,   378,    -1,   380,    -1,   338,    -1,   339,
      -1,   340,    -1,   370,    -1,   371,    -1,   372,    -1,    -1,
     222,   223,    -1,   282,    -1,   283,    -1,   284,    -1,   317,
      -1,   359,    -1,   326,    -1,   337,    -1,   329,    -1,   374,
      -1,   378,    -1,   380,    -1,   338,    -1,   339,    -1,   340,
      -1,   225,    -1,   224,   225,    -1,   282,    -1,   283,    -1,
     284,    -1,   317,    -1,   292,    -1,   294,    -1,   326,    -1,
     329,    -1,   337,    -1,   338,    -1,   339,    -1,   340,    -1,
      -1,   226,   227,    -1,   282,    -1,   283,    -1,   284,    -1,
     326,    -1,   329,    -1,   337,    -1,   339,    -1,   340,    -1,
     347,    -1,    -1,   228,   229,    -1,   282,    -1,   283,    -1,
     284,    -1,   317,    -1,   359,    -1,   326,    -1,   337,    -1,
     329,    -1,   374,    -1,   378,    -1,   380,    -1,   338,    -1,
     339,    -1,   340,    -1,    -1,   230,   231,    -1,   282,    -1,
     283,    -1,   284,    -1,   326,    -1,   317,    -1,   329,    -1,
     337,    -1,   339,    -1,   340,    -1,   343,    -1,     8,   330,
     334,   382,    -1,     8,   330,   208,   332,   209,   334,   382,
      -1,     8,   330,   177,   208,   332,   209,   334,   382,    -1,
       8,    11,    98,   234,    -1,    -1,    39,    23,    98,    -1,
       8,    34,    98,   373,    -1,     8,    17,    -1,     8,   203,
      -1,     8,     9,    90,    -1,     8,     9,    12,    -1,     8,
       9,    12,    10,    89,    -1,     8,   145,   143,    90,    -1,
       8,   145,   143,    90,   144,    98,    -1,     8,   145,   144,
      98,    -1,     8,    30,    90,    -1,     8,    31,    90,    -1,
       8,    38,    90,    -1,     8,   151,   244,    -1,   245,   246,
      -1,   244,   245,   246,    -1,   199,   324,   300,   299,    -1,
      -1,   197,   198,    -1,     8,    13,   250,   324,   291,    -1,
       8,    53,   208,   335,   209,    -1,     8,    14,    44,    98,
     252,    -1,   251,    -1,   250,   251,    -1,    89,   289,   290,
     300,   299,    -1,    89,    44,    98,   289,   290,   300,   299,
      -1,    -1,   252,   253,    -1,   254,    -1,   259,    -1,   262,
      -1,   266,    -1,   258,   255,    -1,   257,   255,    -1,    -1,
     255,   256,    -1,   263,    -1,   264,    -1,   265,    -1,    27,
      25,    -1,    25,    27,    -1,    27,    26,    -1,    26,    27,
      -1,   260,    -1,   261,    -1,    55,    25,    -1,    25,    55,
      -1,    55,    26,    -1,    26,    55,    -1,    16,    89,    -1,
      24,    90,    -1,    28,    90,    -1,    29,    -1,    15,    89,
     210,    89,   273,    -1,    15,   211,    89,   273,    -1,    15,
      90,    -1,    15,    19,    90,    -1,    15,    20,    90,    -1,
      15,    22,    90,    -1,    -1,    15,    90,   267,   271,    -1,
      -1,    15,    19,    90,   268,   271,    -1,    -1,    15,    20,
      90,   269,   271,    -1,    -1,    15,    22,    90,   270,   271,
      -1,    15,    89,    -1,   272,    -1,   271,   272,    -1,    89,
      -1,    -1,    18,    -1,   111,    96,    38,    90,    -1,   111,
      96,    41,    90,    -1,   111,    96,   176,    89,    -1,   111,
      96,   176,    90,    -1,   113,    96,    41,    90,    -1,   112,
      96,    41,    90,    -1,   114,    96,    41,    90,    -1,   115,
      96,    16,    89,    -1,   116,    96,    -1,   117,    96,    41,
      90,    -1,   118,    96,    41,   285,   323,    -1,    39,   285,
     322,    -1,    39,   285,   286,   322,    -1,    40,   285,   322,
      -1,    40,   285,   286,   322,    -1,    58,   285,   322,    -1,
      58,   285,   286,   322,    -1,   287,    -1,   285,   287,    -1,
     288,    -1,   286,   288,    -1,    89,    -1,    90,    -1,   148,
      89,    -1,   150,    89,    -1,   148,    98,    -1,   150,    98,
      -1,    -1,   153,    91,    -1,   153,    89,    -1,    -1,   154,
      89,    -1,    -1,    43,    89,    -1,     3,     7,   295,   296,
     298,   301,   327,   324,   325,   365,     5,   363,   367,    -1,
       3,     7,   192,   199,   327,   324,   325,   365,     5,   363,
     367,    -1,     3,     7,   297,   298,   301,   324,   325,   365,
       5,   363,   367,    -1,     3,     7,   183,   381,   321,   324,
     365,     5,   363,   367,    -1,    -1,    42,    89,    -1,    44,
      98,    -1,    54,    90,    -1,    -1,    45,    47,    -1,    45,
      48,   300,   299,    -1,    45,    46,    -1,    -1,   167,    89,
      -1,    -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,
     166,    -1,   161,    -1,    -1,    49,    64,   315,    -1,    49,
      62,    -1,    49,    73,    -1,    49,    76,    -1,    49,    65,
      -1,    49,    63,   308,    -1,    49,    68,    -1,    49,    69,
      -1,    49,    77,    -1,    49,    78,    -1,    49,    72,    -1,
      49,    84,   306,   307,    -1,    49,    70,    -1,    49,    71,
      -1,    49,    83,    -1,    49,    67,    -1,    49,    66,    -1,
      49,    75,    -1,    49,    79,    -1,    49,    80,    -1,    49,
      81,    -1,    49,    82,    -1,    49,    85,    -1,    49,    86,
      -1,    49,    87,   314,    -1,    49,    88,    -1,    49,    74,
     304,    -1,   302,    -1,   303,    -1,   302,   303,    -1,    32,
      89,    -1,    33,    89,    -1,   305,    -1,   304,   305,    -1,
     122,    89,    -1,   141,    90,    -1,    42,    89,    -1,   123,
      98,    -1,    -1,   200,    91,    -1,   200,    89,    -1,    -1,
     202,    98,    -1,    -1,   308,   309,    -1,   311,    -1,   312,
      -1,   310,    -1,   313,    -1,   121,   360,    98,    -1,   141,
      90,    -1,    59,    89,    -1,   147,    89,    -1,   146,    89,
      -1,   316,    -1,   315,     6,   316,    -1,   100,   360,    98,
      99,    -1,   101,   360,    98,    99,    -1,   102,   360,    98,
      99,    -1,   103,   360,    98,    99,    -1,   104,   360,    98,
      99,    -1,   105,   360,    98,    99,    -1,   106,   360,    98,
      99,    -1,   107,   360,    98,    99,    -1,   108,   360,    98,
      99,    -1,   109,   360,    98,    99,    -1,     3,   177,   186,
     365,     5,   363,   367,    -1,     3,   156,   194,   365,     5,
     363,    -1,     3,   156,   195,   365,     5,   363,    -1,     3,
     180,   360,    98,   361,   365,     5,   363,   367,    -1,    -1,
      36,    98,    -1,    -1,    56,    98,   157,    -1,    -1,    56,
      98,   157,    -1,    -1,    56,    98,   157,    -1,    -1,    57,
      98,    -1,     3,    98,    58,    98,    35,     5,   363,    -1,
       3,    98,    58,    98,    35,     5,    56,    -1,    -1,   193,
     328,    89,    -1,   205,    -1,   204,    -1,   330,   334,   382,
      -1,   330,   208,   332,   209,   334,   382,    -1,   330,   177,
     208,   332,   209,   334,   382,    -1,   331,    -1,    51,    91,
      -1,    52,    91,    -1,   333,    -1,   332,   333,    -1,   179,
      -1,    59,    -1,    50,    -1,   193,    -1,   188,    -1,   181,
      -1,   196,    -1,   150,    -1,   183,    -1,   152,    -1,   187,
      -1,   185,    -1,   174,    -1,   194,    -1,   195,    -1,   124,
      -1,   175,    -1,   121,    -1,    56,    -1,   155,    -1,   148,
      -1,   180,    -1,    -1,    53,   208,   335,   209,    -1,   336,
      -1,   335,   336,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    60,    98,    35,    -1,    60,   201,    -1,    61,
     201,    -1,   131,   132,    -1,   131,   133,    -1,   131,   134,
      -1,   140,    97,    -1,   142,   341,    -1,   342,    -1,   341,
     342,    -1,    96,    -1,     3,   121,   360,    98,   365,     5,
     363,   367,    -1,     3,   345,   365,     5,   363,   367,    -1,
     346,    -1,   345,   346,    -1,   350,    -1,   353,    -1,   355,
      -1,   356,    -1,     3,   348,   365,     5,   363,   367,    -1,
     349,    -1,   348,   349,    -1,   356,    -1,   353,    -1,   354,
      -1,   351,    -1,   135,   360,    98,    99,    -1,   136,   360,
      98,    99,    -1,   352,   360,    98,    99,    -1,   137,    -1,
     138,    -1,   139,    -1,   125,   360,   358,   373,    -1,   125,
     360,    98,    99,    -1,   126,   360,   358,   373,    -1,   126,
     360,    98,    99,    -1,   130,   360,   358,   373,    -1,   130,
     360,    98,    99,    -1,   119,   360,    98,    -1,   357,   360,
     358,    -1,   127,    -1,   128,    -1,   129,    -1,   110,    -1,
      98,    -1,     3,   155,   360,    98,   361,   365,     5,   363,
     367,    -1,     3,   156,   155,   365,     5,   363,    -1,    -1,
     207,    -1,   206,    -1,   205,    -1,   204,    -1,   156,    -1,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,    51,
      -1,   181,   285,    -1,   181,   285,   286,    -1,    58,    -1,
      39,    -1,    40,    -1,   182,    -1,   362,    -1,   362,    -1,
      -1,    98,    35,    -1,    98,    98,    35,    -1,    -1,    98,
      35,    -1,    98,    98,    35,    -1,    -1,     4,     3,   189,
     366,     5,   364,    -1,     4,     3,   190,   366,     5,   364,
      -1,     4,     3,   191,   366,     5,   364,    -1,     3,     7,
     369,    59,   365,     5,   363,   367,    -1,     3,     7,   369,
      59,    33,    89,   365,     5,   363,   367,    -1,     3,   156,
     369,    59,   365,     5,   363,    -1,    -1,    20,    -1,    21,
      -1,     3,   172,   360,    98,   365,     5,   363,   367,    -1,
       3,   172,   360,    98,    99,   365,     5,   363,   367,    -1,
       3,   173,   360,   358,   373,   365,     5,   363,   367,    -1,
       3,   173,   360,    98,    99,   365,     5,   363,   367,    -1,
       3,   156,   196,   365,     5,   363,    -1,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,     3,     7,   174,    98,
     365,     5,   363,   367,    -1,     3,   376,   176,    90,   365,
       5,   363,    -1,     3,   376,   176,    89,   365,     5,   363,
      -1,   178,   376,   176,    90,    -1,   178,   376,   176,    89,
      -1,    -1,   177,    -1,     3,   175,   360,    98,   373,   365,
       5,   363,   367,    -1,     3,   156,   175,   365,     5,   363,
      -1,     3,     7,   148,    89,   365,     5,   363,   367,    -1,
       3,     7,   148,    98,   365,     5,   363,   367,    -1,     3,
       7,   149,    89,   365,     5,   363,   367,    -1,     3,     7,
     149,    98,   365,     5,   363,   367,    -1,     3,     7,   150,
      89,   365,     5,   363,   367,    -1,     3,     7,   150,    98,
     365,     5,   363,   367,    -1,    45,   184,    -1,    -1,    37,
      98,    -1,    37,    98,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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
     521,   524,   529,   534,   541,   549,   552,   557,   560,   564,
     570,   575,   580,   588,   591,   592,   595,   601,   602,   607,
     614,   623,   629,   630,   633,   651,   670,   671,   674,   675,
     676,   677,   680,   683,   694,   695,   698,   699,   700,   703,
     704,   707,   708,   711,   712,   715,   716,   719,   720,   723,
     726,   731,   739,   744,   747,   755,   759,   763,   767,   771,
     771,   778,   778,   785,   785,   792,   792,   799,   807,   808,
     811,   815,   816,   819,   822,   825,   832,   841,   846,   851,
     856,   862,   874,   879,   887,   890,   895,   898,   904,   907,
     912,   913,   916,   917,   920,   921,   924,   925,   926,   927,
     930,   931,   932,   935,   936,   939,   940,   943,   955,   965,
     974,   984,   990,   993,   996,  1001,  1004,  1007,  1015,  1020,
    1021,  1024,  1025,  1026,  1027,  1028,  1035,  1042,  1045,  1048,
    1051,  1054,  1057,  1060,  1063,  1066,  1069,  1072,  1075,  1078,
    1081,  1084,  1087,  1091,  1094,  1097,  1100,  1103,  1106,  1109,
    1112,  1115,  1118,  1121,  1124,  1127,  1130,  1135,  1136,  1139,
    1142,  1147,  1148,  1151,  1154,  1157,  1160,  1165,  1166,  1169,
    1174,  1175,  1180,  1181,  1184,  1185,  1186,  1187,  1190,  1196,
    1202,  1207,  1212,  1217,  1218,  1221,  1225,  1229,  1233,  1237,
    1241,  1245,  1249,  1253,  1257,  1263,  1269,  1274,  1279,  1286,
    1289,  1294,  1297,  1302,  1305,  1310,  1313,  1318,  1321,  1326,
    1332,  1340,  1341,  1347,  1348,  1351,  1355,  1358,  1362,  1367,
    1370,  1373,  1374,  1377,  1378,  1379,  1380,  1381,  1382,  1383,
    1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,
    1394,  1395,  1396,  1397,  1398,  1401,  1402,  1405,  1406,  1409,
    1410,  1411,  1412,  1415,  1419,  1423,  1429,  1432,  1435,  1441,
    1445,  1448,  1449,  1452,  1455,  1463,  1469,  1470,  1473,  1474,
    1475,  1476,  1479,  1485,  1486,  1489,  1490,  1491,  1492,  1495,
    1500,  1507,  1514,  1515,  1516,  1519,  1524,  1529,  1534,  1541,
    1546,  1553,  1560,  1567,  1568,  1569,  1572,  1573,  1576,  1582,
    1589,  1590,  1591,  1592,  1593,  1594,  1597,  1598,  1599,  1600,
    1601,  1604,  1605,  1606,  1607,  1608,  1609,  1610,  1613,  1622,
    1631,  1632,  1638,  1648,  1649,  1655,  1665,  1668,  1671,  1674,
    1679,  1683,  1690,  1696,  1697,  1698,  1701,  1708,  1717,  1726,
    1735,  1740,  1741,  1742,  1743,  1744,  1747,  1754,  1761,  1767,
    1774,  1782,  1785,  1791,  1797,  1804,  1810,  1817,  1823,  1830,
    1836,  1843,  1846,  1847,  1848
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "CHECKSUM", "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "APACHESTATUS",
  "FTP", "SMTP", "POP", "IMAP", "CLAMAV", "NNTP", "NTP3", "MYSQL", "DNS",
  "WEBSOCKET", "SSH", "DWP", "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS",
  "PGSQL", "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE",
  "STRING", "PATH", "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT",
  "MAILBODY", "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
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
  "EXEC", "UNMONITOR", "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID",
  "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID",
  "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT", "TARGET",
  "TIMESPEC", "MAXFORWARD", "FIPS", "NOTEQUAL", "EQUAL", "LESS", "GREATER",
  "'{'", "'}'", "':'", "'@'", "$accept", "cfgfile", "statement_list",
  "statement", "optproclist", "optproc", "optfilelist", "optfile",
  "optfilesyslist", "optfilesys", "optdirlist", "optdir", "opthostlist",
  "opthost", "optsystemlist", "optsystem", "optfifolist", "optfifo",
  "optstatuslist", "optstatus", "setalert", "setdaemon", "startdelay",
  "setexpectbuffer", "setinit", "setfips", "setlog", "seteventqueue",
  "setidfile", "setstatefile", "setpid", "setmmonits", "mmonitlist",
  "mmonit", "credentials", "setmailservers", "setmailformat", "sethttpd",
  "mailserverlist", "mailserver", "httpdlist", "httpdoption", "ssl",
  "optssllist", "optssl", "sslenable", "ssldisable", "signature",
  "sigenable", "sigdisable", "bindaddress", "pemfile", "clientpemfile",
  "allowselfcert", "allow", "$@1", "$@2", "$@3", "$@4", "allowuserlist",
  "allowuser", "readonly", "checkproc", "checkfile", "checkfilesys",
  "checkdir", "checkhost", "checksystem", "checkfifo", "checkprogram",
  "start", "stop", "restart", "argumentlist", "useroptionlist", "argument",
  "useroption", "username", "password", "hostname", "connection",
  "connectionunix", "icmp", "host", "port", "unixsocket", "type",
  "certmd5", "sslversion", "protocol", "sendexpectlist", "sendexpect",
  "websocketlist", "websocket", "target", "maxforward", "httplist", "http",
  "status", "request", "responsesum", "hostheader", "secret",
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
  "operator", "time", "action", "action1", "action2", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "fsflag", "unit",
  "permission", "match", "matchflagnot", "size", "uid", "euid", "gid",
  "icmptype", "reminder", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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
     455,   456,   457,   458,   459,   460,   461,   462,   123,   125,
      58,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   212,   213,   213,   214,   214,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   220,   220,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   222,   222,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   224,   224,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   226,   226,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   230,   230,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   232,   232,   232,   233,   234,
     234,   235,   236,   237,   238,   238,   238,   239,   239,   239,
     240,   241,   242,   243,   244,   244,   245,   246,   246,   247,
     248,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     253,   253,   254,   254,   255,   255,   256,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     263,   264,   265,   266,   266,   266,   266,   266,   266,   267,
     266,   268,   266,   269,   266,   270,   266,   266,   271,   271,
     272,   273,   273,   274,   274,   274,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   288,   288,
     289,   289,   289,   290,   290,   291,   291,   292,   292,   293,
     294,   295,   295,   296,   297,   298,   298,   298,   298,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   302,   302,   303,
     303,   304,   304,   305,   305,   305,   305,   306,   306,   306,
     307,   307,   308,   308,   309,   309,   309,   309,   310,   311,
     312,   313,   314,   315,   315,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   317,   318,   319,   320,   321,
     321,   322,   322,   323,   323,   324,   324,   325,   325,   326,
     326,   327,   327,   328,   328,   329,   329,   329,   329,   330,
     331,   332,   332,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   334,   334,   335,   335,   336,
     336,   336,   336,   337,   337,   337,   338,   338,   338,   339,
     340,   341,   341,   342,   343,   344,   345,   345,   346,   346,
     346,   346,   347,   348,   348,   349,   349,   349,   349,   350,
     350,   351,   352,   352,   352,   353,   353,   353,   353,   354,
     354,   355,   356,   357,   357,   357,   358,   358,   359,   359,
     360,   360,   360,   360,   360,   360,   361,   361,   361,   361,
     361,   362,   362,   362,   362,   362,   362,   362,   363,   364,
     365,   365,   365,   366,   366,   366,   367,   367,   367,   367,
     368,   368,   368,   369,   369,   369,   370,   370,   371,   371,
     372,   373,   373,   373,   373,   373,   374,   375,   375,   375,
     375,   376,   376,   377,   377,   378,   378,   379,   379,   380,
     380,   381,   382,   382,   382
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
       4,     2,     4,     5,     3,     4,     3,     4,     3,     4,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       0,     2,     2,     0,     2,     0,     2,    13,    11,    11,
      10,     0,     2,     2,     2,     0,     2,     4,     2,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     0,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     1,     1,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     0,     2,     2,
       0,     2,     0,     2,     1,     1,     1,     1,     3,     2,
       2,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     7,     6,     6,     9,     0,
       2,     0,     3,     0,     3,     0,     3,     0,     2,     7,
       7,     0,     3,     1,     1,     3,     6,     7,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     2,     1,
       1,     1,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     8,     6,     1,     2,     1,     1,
       1,     1,     6,     1,     2,     1,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     3,     1,     1,     1,     1,     1,     9,     6,
       0,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       0,     2,     3,     0,     2,     3,     0,     6,     6,     6,
       8,    10,     7,     0,     1,     1,     8,     9,     9,     9,
       6,     0,     1,     1,     1,     1,     8,     7,     7,     4,
       4,     0,     1,     9,     6,     8,     8,     8,     8,     8,
       8,     2,     0,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     6,     7,    17,    18,    19,     8,     9,
      15,    16,    14,    10,    11,    12,    13,    28,    49,    68,
      86,     0,   116,   127,   143,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   405,
       0,     0,     0,     0,     0,   241,     0,     0,     1,     5,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,   102,   104,   105,   106,   108,
     109,   107,   110,   111,   405,   378,   112,   113,   114,   115,
      25,    26,    27,   165,   164,   159,   260,   365,   182,     0,
     170,   171,   501,   172,   379,     0,     0,     0,   365,   173,
     177,     0,     0,     0,   522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    40,
      41,    33,    34,    35,    39,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,   511,   511,    50,    51,    52,
      53,    54,    56,    58,    57,    65,    66,    67,    55,    62,
      59,    64,    63,    60,    61,     0,    69,    70,    71,    72,
      73,    74,    76,    75,    80,    81,    82,    83,    84,    85,
      77,    78,    79,     0,    87,    88,    89,    90,    91,    93,
      95,    94,    99,   100,   101,    92,    96,    97,    98,   271,
       0,     0,   254,   255,   361,   250,   361,   380,   361,     0,
     414,   415,   416,   417,   418,   419,   423,   420,   421,   103,
       0,     0,   522,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   132,   134,
     136,   135,   140,   141,   142,   133,   137,   138,   139,     0,
     144,   145,   146,   147,   149,   148,   150,   151,   152,   153,
     154,     0,     0,   158,     0,     0,   263,     0,   183,   265,
     186,   502,   503,   504,   505,   161,   409,   410,   411,   412,
       0,   407,   167,   169,   281,   177,     0,   174,     0,     0,
     385,   401,   384,   400,   398,   403,   390,   392,   402,   395,
     399,   383,   404,   388,   391,   394,   393,   387,   386,   396,
     397,   389,     0,   381,     0,   155,   233,   234,   235,   236,
     238,   237,   239,   240,   242,   363,   271,   460,   460,   460,
     453,   454,   455,   460,   460,     0,   460,   480,   426,   428,
     429,   430,   431,   460,   493,   460,   493,   460,   512,     0,
     512,     0,     0,     0,   460,   460,     0,     0,     0,     0,
       0,     0,   480,     0,     0,     0,   361,   251,   252,   244,
     361,   246,   361,   248,   413,   422,     0,     0,   375,   460,
     442,   443,   444,   480,   433,   438,   460,   436,   437,   435,
     460,   166,     0,   260,   262,   261,     0,   281,     0,     0,
     179,   181,   180,   408,     0,   287,   282,   283,   284,   285,
     286,   279,   175,   178,     0,     0,   405,   382,   523,     0,
     243,     0,     0,     0,     0,   275,   465,   464,   463,   462,
     461,     0,     0,     0,     0,     0,   480,   480,     0,     0,
     427,     0,     0,   494,   495,     0,     0,     0,   480,   480,
       0,     0,     0,     0,   480,     0,     0,   272,     0,   359,
     371,     0,   275,     0,     0,     0,   256,   258,   257,   259,
     253,   245,   247,   249,     0,   405,     0,   434,     0,     0,
       0,   160,   263,   264,   279,   366,   266,     0,     0,     0,
       0,     0,     0,   187,   188,   194,   194,   189,   203,   204,
     190,   191,   168,     0,   176,   406,   405,   522,   524,     0,
     274,   480,   480,   480,   480,   480,   480,     0,   288,   451,
     457,   456,   501,   457,   501,     0,     0,     0,     0,   466,
     481,     0,     0,   457,   452,   480,   480,   466,     0,     0,
     480,   501,   480,   480,   510,   509,     0,   480,   457,   501,
     521,     0,   365,     0,   365,   273,   288,     0,     0,   362,
     405,   522,   457,   501,     0,     0,   480,   281,   184,     0,
       0,     0,   227,   215,     0,   209,   200,   206,   202,   208,
     199,   201,   205,   207,   193,   192,   280,   522,   156,   364,
       0,     0,     0,     0,     0,     0,   278,   276,   281,     0,
       0,     0,   365,   316,   317,   446,   445,   448,   447,   439,
     440,     0,     0,   467,   468,   469,   470,   480,   482,   475,
     476,   471,   474,     0,   477,   478,   486,     0,     0,     0,
     480,     0,     0,     0,   480,     0,     0,     0,   480,     0,
     480,   480,   360,   480,   374,   373,     0,   367,   371,     0,
     486,   522,   376,   450,   449,   486,   441,     0,   279,   216,
     217,   218,     0,     0,   231,     0,     0,   212,   195,   196,
     197,   198,   157,     0,     0,     0,     0,     0,     0,   279,
     319,   320,   290,   332,     0,   293,   305,   304,   295,   296,
     301,   302,   299,   291,     0,   306,   292,   297,   298,   307,
     308,   309,   310,   303,   327,   311,   312,     0,   314,   367,
     318,   356,   357,     0,   472,     0,   425,     0,   480,     0,
       0,   459,   514,     0,     0,     0,     0,   500,     0,     0,
       0,     0,     0,   372,     0,   480,   365,   370,   369,   355,
     377,   432,     0,   185,     0,     0,     0,   231,   230,   220,
     228,   232,   214,   210,   211,   486,   486,   486,   486,   486,
     486,   277,   294,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   289,   343,     0,     0,     0,     0,   315,
     321,     0,   330,     0,   313,   480,     0,   473,     0,   486,
       0,   486,     0,   492,     0,   508,   507,     0,   486,     0,
       0,     0,   368,     0,   367,   486,   222,   224,   226,   213,
     229,   515,   516,   517,   518,   519,   520,     0,   460,     0,
       0,   333,   336,   334,   335,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,   323,   326,
     324,   322,   329,   328,     0,   300,   342,     0,   486,   483,
     483,   483,   506,     0,   490,   486,   486,   486,   496,   486,
     486,   486,     0,   480,   424,   340,     0,   339,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     331,     0,   358,     0,     0,     0,     0,   486,   458,   513,
     497,   499,   498,   270,   486,     0,   338,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   486,   484,     0,
       0,     0,     0,   491,   268,     0,   269,   485,   479,   487,
     488,   489,   486,   267
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    60,   125,    61,   147,    62,   166,
      63,   184,    74,    75,    90,   224,    91,   234,    92,   250,
      13,    14,   263,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   109,   110,   287,    24,    25,    26,    97,    98,
     401,   493,   494,   584,   668,   495,   496,   497,   498,   499,
     500,   669,   670,   671,   501,   663,   744,   745,   746,   749,
     750,   752,    27,    28,    29,    30,    31,    32,    33,    34,
      76,    77,    78,   204,   366,   205,   368,   266,   397,   400,
      79,   130,    80,   360,   462,   425,   518,   504,   411,   602,
     603,   604,   779,   780,   782,   845,   762,   821,   822,   823,
     824,   825,   784,   773,   774,    81,   132,   133,   134,   552,
     369,   420,   269,   735,    82,   554,   646,    83,    84,    85,
     312,   313,   114,   280,   281,    86,    87,    88,    89,   217,
     218,   260,   141,   337,   338,   233,   383,   384,   339,   385,
     386,   340,   388,   341,   342,   343,   522,   158,   431,   617,
     625,   626,   919,   441,   884,   716,   159,   446,   177,   178,
     179,   275,   160,   161,   349,   162,   142,   143,   144,   459,
     315
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -675
static const yytype_int16 yypact[] =
{
     367,   102,   -44,   -39,    -9,    16,    42,    47,    99,   121,
     154,   367,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,   521,  -675,  -675,  -675,    37,   132,   172,   231,  -675,
     148,   181,   192,   203,   210,   112,   -70,   126,  -675,    14,
       0,   299,   311,   318,   355,  -675,   342,   344,  -675,  -675,
     597,   263,   642,   673,    26,   289,   289,   298,   289,   -73,
     199,   384,   305,   312,   521,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,    24,  -675,  -675,  -675,  -675,  -675,
     718,   673,   735,   385,  -675,   365,   -33,    -3,  -675,   316,
    -675,  -675,   336,  -675,  -675,   460,   326,   338,   362,   126,
     248,   250,   254,   232,   428,   377,   381,   308,   397,   399,
     401,   419,   403,   289,    44,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,    58,   345,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,    85,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,    10,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,   -15,
     474,   357,  -675,  -675,   320,  -675,   320,  -675,   320,   522,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,   312,  -675,  -675,
     333,   232,   428,   682,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,   -43,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,   461,   536,  -675,   467,   159,   413,   480,  -675,   537,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
      -4,  -675,   444,  -675,   468,   248,   391,  -675,   460,   232,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,   340,  -675,   494,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,   -20,   201,   163,   163,   163,
    -675,  -675,  -675,   163,   163,   227,   163,   458,  -675,  -675,
    -675,  -675,  -675,   163,    78,   163,    76,   163,   357,   422,
    -675,   426,   191,   412,   163,   163,   459,   526,   572,   424,
     582,   540,   541,   543,   171,   239,   -13,  -675,  -675,  -675,
     -13,  -675,   -13,  -675,  -675,  -675,   232,   416,  -675,   163,
    -675,  -675,  -675,   699,  -675,  -675,   163,  -675,  -675,  -675,
     163,  -675,   545,   493,  -675,  -675,   562,   468,   496,   565,
    -675,   408,  -675,  -675,   558,  -675,  -675,  -675,  -675,  -675,
    -675,   495,  -675,  -675,   238,   492,   606,  -675,   625,   566,
    -675,   575,   257,   268,   288,   629,  -675,  -675,  -675,  -675,
    -675,   580,   -42,   -38,   585,   586,   541,   541,   592,    11,
    -675,   686,   -17,  -675,  -675,   601,   651,   613,   541,   541,
     655,   617,   350,   353,   541,   619,    31,  -675,   535,   690,
     529,   631,   629,   692,   725,   578,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   568,   606,    54,  -675,   727,   638,
     643,  -675,   413,  -675,   495,  -675,  -675,    28,   661,    -1,
     237,   149,   404,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,   663,  -675,  -675,   606,   428,  -675,   583,
    -675,   541,   541,   541,   541,   541,   541,   622,    30,  -675,
     660,  -675,   336,   666,   336,   667,   668,   749,   755,   538,
    -675,   733,    63,  -675,  -675,   541,    33,   538,   766,   767,
     541,   336,   541,   541,  -675,  -675,   776,   378,   684,   336,
    -675,   687,   362,   306,   362,  -675,    30,   783,    63,  -675,
     606,   428,   691,   336,    63,   693,   541,   468,  -675,   701,
     704,   708,   579,   710,   716,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   445,   445,  -675,   428,  -675,  -675,
     809,   811,   812,   813,   817,   818,  -675,  -675,   468,   717,
     744,   836,   362,   506,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,    63,    63,  -675,  -675,  -675,  -675,   541,  -675,  -675,
    -675,  -675,  -675,   289,  -675,  -675,   830,   838,   746,   839,
     541,    63,    63,   840,   541,   841,   842,    63,   541,   851,
     541,   541,  -675,   541,  -675,  -675,   768,   802,   529,   278,
     830,   428,  -675,  -675,  -675,   830,  -675,   867,   495,   784,
     785,   787,   796,   797,   863,   798,   799,  -675,  -675,  -675,
    -675,  -675,  -675,    63,    63,    63,    63,    63,    63,   495,
    -675,  -675,  -675,  -675,   825,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,     3,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   694,  -675,  -675,   741,  -675,   802,
    -675,  -675,  -675,   885,   147,   932,  -675,    63,   541,    63,
     931,  -675,  -675,    63,   933,    63,    63,  -675,   934,    63,
     935,   936,   937,  -675,   845,   541,   362,  -675,  -675,  -675,
    -675,  -675,    63,  -675,   797,   797,   797,   863,  -675,   797,
    -675,  -675,  -675,  -675,  -675,   830,   830,   830,   830,   830,
     830,  -675,   175,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   938,  -675,   848,   856,   849,   858,     3,
    -675,   194,   747,   857,  -675,   541,    63,   150,   515,   830,
     945,   830,    63,  -675,    63,  -675,  -675,    63,   830,    63,
      63,    63,  -675,   946,   802,   830,   797,   797,   797,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,   864,   163,   862,
     865,  -675,  -675,  -675,  -675,  -675,   859,   860,   861,   866,
     868,   869,   870,   871,   872,   873,   825,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   874,  -675,  -675,   950,   830,   875,
     875,   875,  -675,    63,  -675,   830,   830,   830,  -675,   830,
     830,   830,    63,   541,  -675,  -675,   876,  -675,  -675,   877,
     878,   879,   880,   881,   882,   883,   884,   886,   887,  -675,
    -675,    63,  -675,    41,   951,   955,   956,   830,  -675,  -675,
    -675,  -675,  -675,  -675,   830,   957,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,   830,  -675,   928,
      63,    63,    63,  -675,  -675,    63,  -675,  -675,  -675,  -675,
    -675,  -675,   830,  -675
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -675,  -675,  -675,   954,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,   901,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,   888,   702,  -675,  -675,  -675,  -675,   891,
    -675,  -675,  -675,   488,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,   -37,
    -529,   242,  -675,  -675,  -675,  -675,  -675,  -675,  -675,  -675,
     439,   484,   740,   -65,  -201,  -202,  -350,   598,   508,  -675,
     939,  -675,  -675,  -675,  -675,  -675,   530,  -461,  -382,   437,
    -675,   392,  -675,   215,  -675,  -675,  -675,  -675,  -675,  -675,
    -675,  -675,  -675,  -675,   160,   300,  -675,  -675,  -675,  -675,
    -147,  -675,  -108,  -674,   779,   352,  -675,   788,   997,  -675,
    -209,  -270,   -74,   713,  -236,   792,   559,   801,   805,  -675,
     786,  -675,  -675,  -675,   665,  -675,  -675,   621,  -675,  -675,
    -675,  -199,  -675,  -675,  -189,  -675,  -129,   218,  -315,   469,
    -166,  -527,  -349,  -354,  -281,  -549,  -675,   659,  -675,  -675,
    -675,  -295,   281,  -675,   889,  -675,   435,  -675,   544,  -675,
    -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -226
static const yytype_int16 yytable[] =
{
     284,   206,   367,   208,   367,   370,   367,   372,   464,   378,
     222,   264,   377,   432,   433,   484,   470,   352,   434,   435,
     470,   438,   470,   568,   387,   209,   576,   357,   442,   478,
     447,   650,   451,   199,   389,   785,   419,   655,   115,   455,
     456,   116,   417,   363,   403,   775,   530,   569,   570,    93,
     571,   326,    50,   267,   577,   200,   520,    51,   325,   371,
     523,   373,   599,   600,   476,   344,   628,   111,   521,   202,
     203,   479,   521,   106,   107,   480,   908,   111,   390,   601,
     415,   533,   527,   528,   711,   712,    96,    52,   276,   277,
     278,   279,   352,   521,   538,   539,   443,   444,   443,   444,
     546,   739,   619,   620,   721,   722,   741,   417,   200,   531,
     727,    35,    53,    36,   621,    37,    38,   572,   573,    39,
     265,   622,   738,   367,   200,   776,   777,    94,   210,   548,
     863,   439,    40,    41,   201,   364,    42,   365,    54,   909,
      43,   521,   200,    55,   778,   417,   755,   756,   757,   758,
     759,   760,   562,    44,    58,    45,   200,   590,   591,   592,
     593,   594,   595,   327,   521,   345,   356,   474,   358,   328,
     329,   330,   331,   332,   580,   581,   117,   359,   403,   333,
     334,   627,   629,   200,   387,   658,   633,   201,   635,   636,
     789,   112,   791,   639,   389,    56,   793,   743,   795,   796,
     335,   220,   798,   201,   417,   402,   811,   812,   813,   814,
     815,   816,   657,   345,   346,   805,   679,    57,   761,   471,
     810,   201,   113,   472,   336,   473,   422,   606,   424,   608,
      95,   448,   221,   347,   817,   348,   202,   203,   100,   574,
     852,   353,   854,   357,   623,   624,   634,    46,   394,   858,
     395,   449,   445,    47,   641,   421,   864,   354,   355,   848,
     466,    96,   201,   713,   578,   855,   145,   856,   654,   467,
     857,   101,   859,   860,   861,    99,   720,   810,   810,   810,
     724,   195,   290,   842,   728,   843,   730,   731,   291,   732,
     102,   292,   579,   103,   588,   364,   818,   365,   364,   882,
     365,   104,    65,    66,   524,    48,   888,   889,   890,   245,
     891,   892,   893,   534,    44,    67,   819,   619,   620,   426,
     105,    68,   820,    69,    70,   108,   887,   549,   468,   621,
     276,   277,   278,   279,   737,   894,   622,   469,   913,   422,
     118,   424,   507,   180,   196,   914,   511,   563,   652,   422,
     423,   424,   119,   293,   907,   512,   294,   513,   916,   120,
     131,   151,   170,   188,   790,   445,   514,   427,   428,   429,
     430,   121,   246,   923,   672,     1,   363,   515,   202,   203,
     295,   803,   296,   122,   297,   123,   516,   298,   922,   207,
     290,   238,   254,   359,    71,   261,   291,   318,   319,   292,
     211,   561,   215,    72,   262,    73,   299,   300,   216,   202,
     203,   301,   302,   303,   270,   304,   282,   305,   267,   306,
     307,   436,   437,   487,   488,   308,   309,   310,   311,   582,
     583,   847,   587,   489,   490,   491,   283,   470,   740,   542,
     543,   146,   544,   545,   643,   286,   647,   505,   826,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   288,   623,
     624,   293,   289,   492,   294,   314,   290,   316,   364,   665,
     365,   317,   291,   666,   667,   292,   439,   638,     2,     3,
       4,     5,     6,     7,     8,     9,   651,   320,   295,   321,
     296,   322,   297,   324,   709,   298,   163,   181,   197,   126,
     148,   167,   185,   866,   271,   272,   273,   274,   323,   895,
     644,   645,   367,   787,   299,   300,   212,   213,   214,   301,
     302,   303,   350,   304,    64,   305,   247,   306,   307,   225,
     235,   251,   361,   308,   309,   310,   311,   293,   599,   600,
     294,   376,   290,   362,   127,   149,   168,   186,   291,   416,
     391,   292,   276,   277,   278,   279,   439,   374,   714,   392,
      65,    66,   920,   921,   295,   393,   296,   396,   297,   885,
     886,   298,    44,    67,   226,   236,   252,   327,   398,    68,
     399,    69,    70,   328,   329,   330,   331,   332,   404,   413,
     299,   300,   418,   333,   334,   301,   302,   303,   452,   304,
     124,   305,   453,   306,   307,   164,   182,   198,   454,   308,
     309,   310,   311,   293,   448,   457,   294,   458,   290,   138,
     155,   174,   192,   460,   291,   475,   461,   292,   804,   405,
     406,   407,   408,   409,   410,   248,    65,    66,   463,   439,
     295,   465,   296,   481,   297,   165,   265,   298,    44,    67,
     242,   483,    71,   485,   486,    68,   502,    69,    70,   111,
     508,    72,   503,    73,   509,   510,   299,   300,   596,   597,
     598,   301,   302,   303,   517,   304,   183,   305,   519,   306,
     307,    65,    66,   525,   526,   308,   309,   310,   311,   293,
     529,   532,   294,    44,    67,   613,   614,   615,   616,   535,
      68,   506,    69,    70,   849,   850,   851,   806,   807,   808,
     536,   537,    65,    66,   540,   541,   295,   547,   296,   550,
     297,   223,   553,   298,    44,    67,   551,   557,    71,   555,
     558,    68,   564,    69,    70,   559,   565,    72,   249,    73,
     589,   566,   299,   300,   918,   918,   918,   301,   302,   303,
     575,   304,   586,   305,   611,   306,   307,    65,    66,   605,
     612,   308,   309,   310,   311,   607,   609,   610,   618,    44,
      67,   631,   632,    71,    65,    66,    68,   560,    69,    70,
     200,   637,    72,   640,    73,   642,    44,    67,   649,   662,
     653,   659,   656,    68,   660,    69,    70,   439,   661,  -219,
     128,   150,   169,   187,    71,   664,   680,   328,   329,   330,
     331,   332,   379,    72,   673,    73,   674,   675,   676,   380,
     381,   382,   677,   678,   328,   329,   330,   331,   332,   379,
     227,   237,   253,   681,   715,   718,   380,   381,   382,   135,
     152,   171,   189,   717,   719,   723,   725,   726,   136,   153,
     172,   190,   137,   154,   173,   191,   729,   733,    72,   734,
      73,   139,   156,   175,   193,   140,   157,   176,   194,   228,
     239,   255,   742,  -221,  -223,    72,  -225,    73,   229,   240,
     256,   751,   230,   241,   257,   747,   748,   783,   753,   754,
     786,   231,   243,   258,   781,   232,   244,   259,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   763,   764,   765,   766,   767,
     768,   769,   770,   771,   772,   788,   792,   837,   794,   797,
     799,   800,   801,   802,   836,   838,   846,   839,   840,   844,
     853,   862,   867,   865,   868,   881,   910,   869,   870,   871,
     911,   912,   915,   917,   872,    59,   873,   874,   875,   876,
     877,   878,   880,   883,   896,   219,   897,   898,   899,   900,
     901,   902,   903,   904,   585,   905,   906,   412,   268,   809,
     567,   482,   556,   648,   841,   710,   879,   285,    49,   129,
     736,   414,   440,   375,   477,   450,   630,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-675))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     108,    66,   204,    68,   206,   206,   208,   208,   362,   222,
      84,    44,   221,   328,   329,   397,   366,     7,   333,   334,
     370,   336,   372,   484,   223,    98,    27,    42,   343,   383,
     345,   558,   347,     7,   223,   709,    56,   564,    38,   354,
     355,    41,   312,    56,   280,    42,    35,    19,    20,    12,
      22,     7,    96,    56,    55,    98,    98,    96,   123,   206,
      98,   208,    32,    33,   379,     7,    33,    53,   110,    89,
      90,   386,   110,   143,   144,   390,    35,    53,   121,    49,
     289,    98,   436,   437,   611,   612,    89,    96,    92,    93,
      94,    95,     7,   110,   448,   449,    20,    21,    20,    21,
     454,   650,    39,    40,   631,   632,   655,   377,    98,    98,
     637,     9,    96,    11,    51,    13,    14,    89,    90,    17,
     153,    58,   649,   325,    98,   122,   123,    90,   201,    98,
     804,    98,    30,    31,   177,   148,    34,   150,    96,    98,
      38,   110,    98,    96,   141,   415,   673,   674,   675,   676,
     677,   678,    98,    51,     0,    53,    98,   511,   512,   513,
     514,   515,   516,   119,   110,   155,   156,   376,   183,   125,
     126,   127,   128,   129,    25,    26,   176,   192,   414,   135,
     136,   535,   536,    98,   383,   567,   540,   177,   542,   543,
     717,   177,   719,   547,   383,    96,   723,   658,   725,   726,
     156,   177,   729,   177,   474,   209,   755,   756,   757,   758,
     759,   760,   566,   155,   156,   742,   598,    96,   679,   366,
     749,   177,   208,   370,   180,   372,   148,   522,   150,   524,
      98,   155,   208,   175,    59,   177,    89,    90,    90,   211,
     789,   156,   791,    42,   181,   182,   541,   145,    89,   798,
      91,   175,   174,   151,   549,    54,   805,   172,   173,   786,
      89,    89,   177,   617,    27,   792,     3,   794,   563,    98,
     797,    90,   799,   800,   801,    44,   630,   806,   807,   808,
     634,    63,    50,    89,   638,    91,   640,   641,    56,   643,
      98,    59,    55,    90,   507,   148,   121,   150,   148,   848,
     150,    91,    39,    40,   433,   203,   855,   856,   857,    91,
     859,   860,   861,   442,    51,    52,   141,    39,    40,   156,
     208,    58,   147,    60,    61,   199,   853,   456,    89,    51,
      92,    93,    94,    95,    56,   862,    58,    98,   887,   148,
      41,   150,   416,    62,    63,   894,    89,   476,   561,   148,
     149,   150,    41,   121,   881,    98,   124,    89,   907,    41,
      60,    61,    62,    63,   718,   174,    98,   204,   205,   206,
     207,    16,    91,   922,   587,     8,    56,    89,    89,    90,
     148,   735,   150,    41,   152,    41,    98,   155,   915,    91,
      50,    91,    92,   192,   131,    10,    56,    89,    90,    59,
     201,   475,    97,   140,    39,   142,   174,   175,    96,    89,
      90,   179,   180,   181,    98,   183,    90,   185,    56,   187,
     188,   194,   195,    15,    16,   193,   194,   195,   196,    25,
      26,   785,   506,    25,    26,    27,    98,   787,   651,    89,
      90,   178,    89,    90,   552,   197,   554,   209,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   208,   181,
     182,   121,   208,    55,   124,    37,    50,    90,   148,    24,
     150,    90,    56,    28,    29,    59,    98,    99,   111,   112,
     113,   114,   115,   116,   117,   118,   560,    90,   148,    90,
     150,    90,   152,    90,   602,   155,    61,    62,    63,    60,
      61,    62,    63,   818,   168,   169,   170,   171,    89,   863,
     204,   205,   714,   714,   174,   175,   132,   133,   134,   179,
     180,   181,   177,   183,     3,   185,    91,   187,   188,    90,
      91,    92,    58,   193,   194,   195,   196,   121,    32,    33,
     124,   208,    50,   186,    60,    61,    62,    63,    56,   209,
      89,    59,    92,    93,    94,    95,    98,    35,   623,    23,
      39,    40,   911,   912,   148,    98,   150,   154,   152,   850,
     851,   155,    51,    52,    90,    91,    92,   119,    98,    58,
      43,    60,    61,   125,   126,   127,   128,   129,   144,   198,
     174,   175,    98,   135,   136,   179,   180,   181,   176,   183,
       3,   185,   176,   187,   188,    61,    62,    63,   196,   193,
     194,   195,   196,   121,   155,    89,   124,    45,    50,    60,
      61,    62,    63,   199,    56,   209,    44,    59,   736,   161,
     162,   163,   164,   165,   166,    91,    39,    40,    98,    98,
     148,    98,   150,    98,   152,     3,   153,   155,    51,    52,
      91,    89,   131,   157,    89,    58,    98,    60,    61,    53,
      35,   140,   167,   142,    98,    90,   174,   175,    46,    47,
      48,   179,   180,   181,    45,   183,     3,   185,    98,   187,
     188,    39,    40,    98,    98,   193,   194,   195,   196,   121,
      98,     5,   124,    51,    52,   157,   158,   159,   160,    98,
      58,   209,    60,    61,   189,   190,   191,   744,   745,   746,
      59,    98,    39,    40,    59,    98,   148,    98,   150,   184,
     152,     3,   193,   155,    51,    52,    36,    35,   131,    98,
       5,    58,     5,    60,    61,   157,    98,   140,     3,   142,
     157,    98,   174,   175,   910,   911,   912,   179,   180,   181,
      89,   183,    89,   185,     5,   187,   188,    39,    40,    99,
       5,   193,   194,   195,   196,    99,    99,    99,    35,    51,
      52,     5,     5,   131,    39,    40,    58,   209,    60,    61,
      98,     5,   140,    99,   142,    98,    51,    52,     5,   210,
      99,    90,    99,    58,    90,    60,    61,    98,    90,    89,
      60,    61,    62,    63,   131,    89,    89,   125,   126,   127,
     128,   129,   130,   140,     5,   142,     5,     5,     5,   137,
     138,   139,     5,     5,   125,   126,   127,   128,   129,   130,
      90,    91,    92,    89,     4,    89,   137,   138,   139,    60,
      61,    62,    63,     5,     5,     5,     5,     5,    60,    61,
      62,    63,    60,    61,    62,    63,     5,    89,   140,    57,
     142,    60,    61,    62,    63,    60,    61,    62,    63,    90,
      91,    92,     5,    89,    89,   140,    89,   142,    90,    91,
      92,    18,    90,    91,    92,    89,    89,   146,    90,    90,
       5,    90,    91,    92,   200,    90,    91,    92,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     3,     5,    89,     5,     5,
       5,     5,     5,    98,     6,    89,    89,    98,    90,   202,
       5,     5,    90,    89,    89,     5,     5,    98,    98,    98,
       5,     5,     5,    35,    98,    11,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    74,    99,    99,    99,    99,
      99,    99,    99,    99,   496,    99,    99,   285,    97,   747,
     482,   393,   462,   556,   779,   603,   836,   109,     1,    60,
     648,   288,   337,   217,   383,   346,   537,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   111,   112,   113,   114,   115,   116,   117,   118,
     213,   214,   215,   232,   233,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   247,   248,   249,   274,   275,   276,
     277,   278,   279,   280,   281,     9,    11,    13,    14,    17,
      30,    31,    34,    38,    51,    53,   145,   151,   203,   330,
      96,    96,    96,    96,    96,    96,    96,    96,     0,   215,
     216,   218,   220,   222,     3,    39,    40,    52,    58,    60,
      61,   131,   140,   142,   224,   225,   282,   283,   284,   292,
     294,   317,   326,   329,   330,   331,   337,   338,   339,   340,
     226,   228,   230,    12,    90,    98,    89,   250,   251,    44,
      90,    90,    98,    90,    91,   208,   143,   144,   199,   244,
     245,    53,   177,   208,   334,    38,    41,   176,    41,    41,
      41,    16,    41,    41,     3,   217,   282,   283,   284,   292,
     293,   317,   318,   319,   320,   326,   329,   337,   338,   339,
     340,   344,   378,   379,   380,     3,   178,   219,   282,   283,
     284,   317,   326,   329,   337,   338,   339,   340,   359,   368,
     374,   375,   377,   378,   380,     3,   221,   282,   283,   284,
     317,   326,   329,   337,   338,   339,   340,   370,   371,   372,
     374,   378,   380,     3,   223,   282,   283,   284,   317,   326,
     329,   337,   338,   339,   340,   359,   374,   378,   380,     7,
      98,   177,    89,    90,   285,   287,   285,    91,   285,    98,
     201,   201,   132,   133,   134,    97,    96,   341,   342,   225,
     177,   208,   334,     3,   227,   282,   283,   284,   326,   329,
     337,   339,   340,   347,   229,   282,   283,   284,   317,   326,
     329,   337,   338,   339,   340,   359,   374,   378,   380,     3,
     231,   282,   283,   284,   317,   326,   329,   337,   339,   340,
     343,    10,    39,   234,    44,   153,   289,    56,   251,   324,
      98,   168,   169,   170,   171,   373,    92,    93,    94,    95,
     335,   336,    90,    98,   324,   245,   197,   246,   208,   208,
      50,    56,    59,   121,   124,   148,   150,   152,   155,   174,
     175,   179,   180,   181,   183,   185,   187,   188,   193,   194,
     195,   196,   332,   333,    37,   382,    90,    90,    89,    90,
      90,    90,    90,    89,    90,   285,     7,   119,   125,   126,
     127,   128,   129,   135,   136,   156,   180,   345,   346,   350,
     353,   355,   356,   357,     7,   155,   156,   175,   177,   376,
     177,   376,     7,   156,   172,   173,   156,    42,   183,   192,
     295,    58,   186,    56,   148,   150,   286,   287,   288,   322,
     286,   322,   286,   322,    35,   342,   208,   332,   382,   130,
     137,   138,   139,   348,   349,   351,   352,   353,   354,   356,
     121,    89,    23,    98,    89,    91,   154,   290,    98,    43,
     291,   252,   209,   336,   144,   161,   162,   163,   164,   165,
     166,   300,   246,   198,   335,   332,   209,   333,    98,    56,
     323,    54,   148,   149,   150,   297,   156,   204,   205,   206,
     207,   360,   360,   360,   360,   360,   194,   195,   360,    98,
     346,   365,   360,    20,    21,   174,   369,   360,   155,   175,
     369,   360,   176,   176,   196,   360,   360,    89,    45,   381,
     199,    44,   296,    98,   365,    98,    89,    98,    89,    98,
     288,   322,   322,   322,   332,   209,   360,   349,   365,   360,
     360,    98,   289,    89,   300,   157,    89,    15,    16,    25,
      26,    27,    55,   253,   254,   257,   258,   259,   260,   261,
     262,   266,    98,   167,   299,   209,   209,   334,    35,    98,
      90,    89,    98,    89,    98,    89,    98,    45,   298,    98,
      98,   110,   358,    98,   358,    98,    98,   365,   365,    98,
      35,    98,     5,    98,   358,    98,    59,    98,   365,   365,
      59,    98,    89,    90,    89,    90,   365,    98,    98,   358,
     184,    36,   321,   193,   327,    98,   298,    35,     5,   157,
     209,   334,    98,   358,     5,    98,    98,   290,   299,    19,
      20,    22,    89,    90,   211,    89,    27,    55,    27,    55,
      25,    26,    25,    26,   255,   255,    89,   334,   382,   157,
     365,   365,   365,   365,   365,   365,    46,    47,    48,    32,
      33,    49,   301,   302,   303,    99,   373,    99,   373,    99,
      99,     5,     5,   157,   158,   159,   160,   361,    35,    39,
      40,    51,    58,   181,   182,   362,   363,   365,    33,   365,
     361,     5,     5,   365,   373,   365,   365,     5,    99,   365,
      99,   373,    98,   324,   204,   205,   328,   324,   301,     5,
     363,   334,   382,    99,   373,   363,    99,   365,   300,    90,
      90,    90,   210,   267,    89,    24,    28,    29,   256,   263,
     264,   265,   382,     5,     5,     5,     5,     5,     5,   300,
      89,    89,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   324,
     303,   363,   363,   365,   285,     4,   367,     5,    89,     5,
     365,   363,   363,     5,   365,     5,     5,   363,   365,     5,
     365,   365,   365,    89,    57,   325,   327,    56,   363,   367,
     382,   367,     5,   299,   268,   269,   270,    89,    89,   271,
     272,    18,   273,    90,    90,   363,   363,   363,   363,   363,
     363,   299,   308,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   315,   316,    42,   122,   123,   141,   304,
     305,   200,   306,   146,   314,   325,     5,   286,     3,   363,
     365,   363,     5,   363,     5,   363,   363,     5,   363,     5,
       5,     5,    98,   365,   324,   363,   271,   271,   271,   273,
     272,   367,   367,   367,   367,   367,   367,    59,   121,   141,
     147,   309,   310,   311,   312,   313,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,     6,    89,    89,    98,
      90,   305,    89,    91,   202,   307,    89,   365,   363,   189,
     190,   191,   367,     5,   367,   363,   363,   363,   367,   363,
     363,   363,     5,   325,   367,    89,   360,    90,    89,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,   316,
      98,     5,   367,    98,   366,   366,   366,   363,   367,   367,
     367,   367,   367,   367,   363,   365,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   363,    35,    98,
       5,     5,     5,   367,   367,     5,   367,    35,   362,   364,
     364,   364,   363,   367
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 497 "src/p.y"
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[(2) - (4)].string), &mailset, &Run.maillist);
                  }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 501 "src/p.y"
    {
                    addmail((yyvsp[(2) - (7)].string), &mailset, &Run.maillist);
                  }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 504 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(2) - (8)].string), &mailset, &Run.maillist);
                  }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 510 "src/p.y"
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[(3) - (4)].number);
                      Run.startdelay = (yyvsp[(4) - (4)].number);
                    }
                  }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 520 "src/p.y"
    { (yyval.number) = START_DELAY; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 521 "src/p.y"
    { (yyval.number) = (yyvsp[(3) - (3)].number); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 524 "src/p.y"
    {
                    Run.expectbuffer = (yyvsp[(3) - (4)].number) * (yyvsp[(4) - (4)].number);
                  }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 529 "src/p.y"
    {
                    Run.init = TRUE;
                  }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 534 "src/p.y"
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 541 "src/p.y"
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[(3) - (3)].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 549 "src/p.y"
    {
                    setsyslog(NULL);
                  }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 552 "src/p.y"
    {
                    setsyslog((yyvsp[(5) - (5)].string)); FREE((yyvsp[(5) - (5)].string));
                  }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 557 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 560 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (6)].string);
                    Run.eventlist_slots = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 564 "src/p.y"
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[(4) - (4)].number);
                  }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 570 "src/p.y"
    {
                    Run.idfile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 575 "src/p.y"
    {
                    Run.statefile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 580 "src/p.y"
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[(3) - (3)].string));
                   }
                 }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 595 "src/p.y"
    {
                    check_hostname(((yyvsp[(1) - (4)].url))->hostname);
                    addmmonit((yyvsp[(1) - (4)].url), (yyvsp[(2) - (4)].number), (yyvsp[(3) - (4)].number), (yyvsp[(4) - (4)].string));
                  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 602 "src/p.y"
    {
                    Run.dommonitcredentials = FALSE;
                  }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 607 "src/p.y"
    {
                   if (((yyvsp[(4) - (5)].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[(4) - (5)].number);
                   Run.mail_hostname = (yyvsp[(5) - (5)].string);
                  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 614 "src/p.y"
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 623 "src/p.y"
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[(4) - (5)].number);
                 }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 633 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[(1) - (5)].string));

                    check_hostname((yyvsp[(1) - (5)].string));
                    mailserverset.host = (yyvsp[(1) - (5)].string);
                    mailserverset.username = (yyvsp[(2) - (5)].string);
                    mailserverset.password = (yyvsp[(3) - (5)].string);
                    mailserverset.ssl.version = (yyvsp[(4) - (5)].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      if (mailserverset.ssl.version == SSL_VERSION_SSLV2 || mailserverset.ssl.version == SSL_VERSION_SSLV3)
                         mailserverset.port = PORT_SMTPS;
                      mailserverset.ssl.certmd5 = (yyvsp[(5) - (5)].string);
                    }
                    addmailserver(&mailserverset);
                  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 651 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = Str_dup((yyvsp[(1) - (7)].string));

                    check_hostname((yyvsp[(1) - (7)].string));
                    mailserverset.host = (yyvsp[(1) - (7)].string);
                    mailserverset.port = (yyvsp[(3) - (7)].number);
                    mailserverset.username = (yyvsp[(4) - (7)].string);
                    mailserverset.password = (yyvsp[(5) - (7)].string);
                    mailserverset.ssl.version = (yyvsp[(6) - (7)].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      mailserverset.ssl.certmd5 = (yyvsp[(7) - (7)].string);
                    }
                    addmailserver(&mailserverset);
                  }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 680 "src/p.y"
    {
                    Run.httpdssl = FALSE;
                  }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 683 "src/p.y"
    {
                    Run.httpdssl = TRUE;
                    if (! have_ssl())
                      yyerror("SSL is not supported");
                    else if (! Run.httpsslpem)
                      yyerror("SSL server PEM file is required (pemfile option)");
                    else if (! file_checkStat(Run.httpsslpem, "SSL server PEM file", S_IRWXU))
                      yyerror("SSL server PEM file permissions check failed");
                  }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 711 "src/p.y"
    { Run.httpdsig = TRUE; }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 712 "src/p.y"
    { Run.httpdsig = FALSE; }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 723 "src/p.y"
    { Run.bind_addr = (yyvsp[(2) - (2)].string); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 726 "src/p.y"
    {
                    Run.httpsslpem = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 731 "src/p.y"
    {
                    Run.httpsslclientpem = (yyvsp[(2) - (2)].string);
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 739 "src/p.y"
    {
                    Run.allowselfcert = TRUE;
                  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 744 "src/p.y"
    {
                    addcredentials((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string), DIGEST_CLEARTEXT, (yyvsp[(5) - (5)].number));
                  }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 747 "src/p.y"
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[(3) - (4)].string));
#endif
                  }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 755 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(2) - (2)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 759 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 763 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 767 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 771 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(2) - (2)].string);
                    digesttype = CLEARTEXT;
                  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 775 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 778 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 782 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 785 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_MD5;
                  }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 789 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 792 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CRYPT;
                  }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 796 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 799 "src/p.y"
    {
                    if (! (add_net_allow((yyvsp[(2) - (2)].string)) || add_host_allow((yyvsp[(2) - (2)].string)))) {
                      yyerror2("Erroneous network or host identifier %s", (yyvsp[(2) - (2)].string));
                    }
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 811 "src/p.y"
    { addhtpasswdentry(htpasswd_file, (yyvsp[(1) - (1)].string), digesttype);
                           FREE((yyvsp[(1) - (1)].string)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 815 "src/p.y"
    { (yyval.number) = FALSE; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 816 "src/p.y"
    { (yyval.number) = TRUE; }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 819 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 822 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 825 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 832 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 841 "src/p.y"
    {
                    createservice(TYPE_FILE, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_file);
                  }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 846 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 851 "src/p.y"
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_directory);
                  }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 856 "src/p.y"
    {
                    check_hostname((yyvsp[(4) - (4)].string));
                    createservice(TYPE_HOST, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_remote_host);
                  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 862 "src/p.y"
    {
                    char hostname[STRLEN];
                    if (Util_getfqdnhostname(hostname, sizeof(hostname))) {
                      LogError("Cannot get system hostname\n");
                      cfg_errflag++;
                    }
                    char *servicename = (yyvsp[(2) - (2)].string);
                    Util_replaceString(&servicename, "$HOST", hostname);
                    Run.system = createservice(TYPE_SYSTEM, servicename, Str_dup(""), check_system); // The name given in the 'check system' statement overrides system hostname
                  }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 874 "src/p.y"
    {
                    createservice(TYPE_FIFO, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_fifo);
                  }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 879 "src/p.y"
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(TYPE_PROGRAM, (yyvsp[(2) - (5)].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[(5) - (5)].number);
                  }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 887 "src/p.y"
    {
                    addcommand(START, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 890 "src/p.y"
    {
                    addcommand(START, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 895 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 898 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 904 "src/p.y"
    {
                    addcommand(RESTART, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 907 "src/p.y"
    {
                    addcommand(RESTART, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 920 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 921 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 924 "src/p.y"
    { addeuid( get_uid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 925 "src/p.y"
    { addegid( get_gid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 926 "src/p.y"
    { addeuid( get_uid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 927 "src/p.y"
    { addegid( get_gid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 930 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 931 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 932 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 935 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 936 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 939 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 940 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 944 "src/p.y"
    {
                    portset.timeout = (yyvsp[(8) - (13)].number);
                    portset.retry = (yyvsp[(9) - (13)].number);
                    /* This is a workaround to support content match without having to create
                     an URL object. 'urloption' creates the Request_T object we need minus the
                     URL object, but with enough information to perform content test. 
                     TODO: Parser is in need of refactoring */
                    portset.url_request = urlrequest;
                    addeventaction(&(portset).action, (yyvsp[(12) - (13)].number), (yyvsp[(13) - (13)].number));
                    addport(&portset);
                  }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 956 "src/p.y"
    {
                    prepare_urlrequest((yyvsp[(4) - (11)].url));
                    portset.timeout = (yyvsp[(6) - (11)].number);
                    portset.retry = (yyvsp[(7) - (11)].number);
                    addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addport(&portset);
                  }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 966 "src/p.y"
    {
                   portset.timeout = (yyvsp[(6) - (11)].number);
                   portset.retry = (yyvsp[(7) - (11)].number);
                   addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                   addport(&portset);
                  }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 975 "src/p.y"
    {
                   icmpset.type = (yyvsp[(4) - (10)].number);
                   icmpset.count = (yyvsp[(5) - (10)].number);
                   icmpset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(icmpset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addicmp(&icmpset);
                  }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 984 "src/p.y"
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = Str_dup(current->path);
                    else
                      portset.hostname = Str_dup(LOCALHOST);
                  }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 990 "src/p.y"
    { check_hostname((yyvsp[(2) - (2)].string)); portset.hostname = (yyvsp[(2) - (2)].string); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 993 "src/p.y"
    { portset.port = (yyvsp[(2) - (2)].number); portset.family = AF_INET; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 996 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string); portset.family = AF_UNIX;
                  }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1001 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1004 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1007 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[(3) - (4)].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1015 "src/p.y"
    {
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1020 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1021 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1024 "src/p.y"
    { (yyval.number) = SSL_VERSION_NONE; }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1025 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV2; }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1026 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV3; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1027 "src/p.y"
    { (yyval.number) = SSL_VERSION_TLSV1; }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1029 "src/p.y"
    {
#ifndef HAVE_TLSV1_1_CLIENT_METHOD
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_VERSION_TLSV11;
                }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1036 "src/p.y"
    {
#ifndef HAVE_TLSV1_1_CLIENT_METHOD
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_VERSION_TLSV12;
                }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1042 "src/p.y"
    { (yyval.number) = SSL_VERSION_AUTO; }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1045 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1048 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1051 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1054 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1057 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1060 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1063 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_HTTP);
                  }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1066 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_IMAP);
                  }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1069 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1072 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1075 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1078 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1081 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1084 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1087 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1091 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1094 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1097 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1100 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1103 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1106 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1109 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1112 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1115 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1118 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1121 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1124 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1127 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1130 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1139 "src/p.y"
    {
                    addgeneric(&portset, (yyvsp[(2) - (2)].string), NULL);
                  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1142 "src/p.y"
    {
                    addgeneric(&portset, NULL, (yyvsp[(2) - (2)].string));
                  }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1151 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1154 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1157 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1160 "src/p.y"
    {
                    portset.version = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1166 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1169 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1175 "src/p.y"
    {
                     portset.maxforward = verifyMaxForward((yyvsp[(2) - (2)].number));
                   }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1190 "src/p.y"
    {
                    portset.operator = (yyvsp[(2) - (3)].number);
                    portset.status = (yyvsp[(3) - (3)].number);
                  }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1196 "src/p.y"
    {
                    portset.request = Util_urlEncode((yyvsp[(2) - (2)].string));
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1202 "src/p.y"
    {
                    portset.request_checksum = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1207 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1212 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1221 "src/p.y"
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.loglimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1225 "src/p.y"
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.closelimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1229 "src/p.y"
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1233 "src/p.y"
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1237 "src/p.y"
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.replylimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1241 "src/p.y"
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1245 "src/p.y"
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.startlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1249 "src/p.y"
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1253 "src/p.y"
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1257 "src/p.y"
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1263 "src/p.y"
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                  }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1269 "src/p.y"
    {
                    seteventaction(&(current)->action_PID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1274 "src/p.y"
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1279 "src/p.y"
    {
                    uptimeset.operator = (yyvsp[(3) - (9)].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(uptimeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    adduptime(&uptimeset);
                  }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1286 "src/p.y"
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1289 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1294 "src/p.y"
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1297 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1302 "src/p.y"
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1305 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1310 "src/p.y"
    {
                   (yyval.number) = NET_TIMEOUT;
                  }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1313 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1318 "src/p.y"
    {
                   (yyval.number) = 1;
                  }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1321 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1326 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, (yyvsp[(7) - (7)].number), ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1332 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1341 "src/p.y"
    {
                    seturlrequest((yyvsp[(2) - (3)].number), (yyvsp[(3) - (3)].string));
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1347 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1348 "src/p.y"
    { (yyval.number) = Operator_NotEqual; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1351 "src/p.y"
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[(1) - (3)].string), &mailset, &current->maillist);
                  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1355 "src/p.y"
    {
                   addmail((yyvsp[(1) - (6)].string), &mailset, &current->maillist);
                  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1358 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(1) - (7)].string), &mailset, &current->maillist);
                  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1362 "src/p.y"
    {
                   addmail((yyvsp[(1) - (1)].string), &mailset, &current->maillist);
                  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1367 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1370 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1377 "src/p.y"
    { mailset.events |= Event_Action; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1378 "src/p.y"
    { mailset.events |= Event_Checksum; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1379 "src/p.y"
    { mailset.events |= Event_Connection; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1380 "src/p.y"
    { mailset.events |= Event_Content; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1381 "src/p.y"
    { mailset.events |= Event_Data; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1382 "src/p.y"
    { mailset.events |= Event_Exec; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1383 "src/p.y"
    { mailset.events |= Event_Fsflag; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1384 "src/p.y"
    { mailset.events |= Event_Gid; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1385 "src/p.y"
    { mailset.events |= Event_Icmp; }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1386 "src/p.y"
    { mailset.events |= Event_Instance; }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1387 "src/p.y"
    { mailset.events |= Event_Invalid; }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1388 "src/p.y"
    { mailset.events |= Event_Nonexist; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1389 "src/p.y"
    { mailset.events |= Event_Permission; }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1390 "src/p.y"
    { mailset.events |= Event_Pid; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1391 "src/p.y"
    { mailset.events |= Event_PPid; }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1392 "src/p.y"
    { mailset.events |= Event_Resource; }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1393 "src/p.y"
    { mailset.events |= Event_Size; }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1394 "src/p.y"
    { mailset.events |= Event_Status; }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1395 "src/p.y"
    { mailset.events |= Event_Timeout; }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1396 "src/p.y"
    { mailset.events |= Event_Timestamp; }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1397 "src/p.y"
    { mailset.events |= Event_Uid; }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1398 "src/p.y"
    { mailset.events |= Event_Uptime; }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1409 "src/p.y"
    { mailset.from = (yyvsp[(1) - (1)].string); }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1410 "src/p.y"
    { mailset.replyto = (yyvsp[(1) - (1)].string); }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1411 "src/p.y"
    { mailset.subject = (yyvsp[(1) - (1)].string); }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1412 "src/p.y"
    { mailset.message = (yyvsp[(1) - (1)].string); }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1415 "src/p.y"
    {
                   current->every.type = EVERY_SKIPCYCLES;
                   current->every.spec.cycle.number = (yyvsp[(2) - (3)].number);
                 }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1419 "src/p.y"
    {
                   current->every.type = EVERY_CRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1423 "src/p.y"
    {
                   current->every.type = EVERY_NOTINCRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1429 "src/p.y"
    {
                    current->mode = MODE_ACTIVE;
                  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1432 "src/p.y"
    {
                    current->mode = MODE_PASSIVE;
                  }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1435 "src/p.y"
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1441 "src/p.y"
    { addservicegroup((yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1452 "src/p.y"
    { adddependant((yyvsp[(1) - (1)].string)); }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1455 "src/p.y"
    {
                        statusset.operator = (yyvsp[(3) - (8)].number);
                        statusset.return_value = (yyvsp[(4) - (8)].number);
                        addeventaction(&(statusset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                        addstatus(&statusset);
                   }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1463 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 1479 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 1495 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 1500 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 1507 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (4)].number);
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 1514 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 1515 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 1516 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 1519 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 1524 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 1529 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 1534 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 1541 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 1546 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 1553 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) (yyvsp[(3) - (3)].number);
                  }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 1560 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (3)].number);
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (3)].real) * 10.0);
                  }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 1567 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD1; }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 1568 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD5; }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 1569 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD15; }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 1572 "src/p.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 1573 "src/p.y"
    { (yyval.real) = (float) (yyvsp[(1) - (1)].number); }
    break;

  case 458:

/* Line 1806 of yacc.c  */
#line 1576 "src/p.y"
    {
                    timestampset.operator = (yyvsp[(3) - (9)].number);
                    timestampset.time = ((yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(timestampset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addtimestamp(&timestampset, FALSE);
                  }
    break;

  case 459:

/* Line 1806 of yacc.c  */
#line 1582 "src/p.y"
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
    break;

  case 460:

/* Line 1806 of yacc.c  */
#line 1589 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 1590 "src/p.y"
    { (yyval.number) = Operator_Greater; }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 1591 "src/p.y"
    { (yyval.number) = Operator_Less; }
    break;

  case 463:

/* Line 1806 of yacc.c  */
#line 1592 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 464:

/* Line 1806 of yacc.c  */
#line 1593 "src/p.y"
    { (yyval.number) = Operator_NotEqual; }
    break;

  case 465:

/* Line 1806 of yacc.c  */
#line 1594 "src/p.y"
    { (yyval.number) = Operator_NotEqual; }
    break;

  case 466:

/* Line 1806 of yacc.c  */
#line 1597 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 467:

/* Line 1806 of yacc.c  */
#line 1598 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 468:

/* Line 1806 of yacc.c  */
#line 1599 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 1600 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 1601 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 1604 "src/p.y"
    { (yyval.number) = ACTION_ALERT; }
    break;

  case 472:

/* Line 1806 of yacc.c  */
#line 1605 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 1606 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 474:

/* Line 1806 of yacc.c  */
#line 1607 "src/p.y"
    { (yyval.number) = ACTION_RESTART; }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 1608 "src/p.y"
    { (yyval.number) = ACTION_START; }
    break;

  case 476:

/* Line 1806 of yacc.c  */
#line 1609 "src/p.y"
    { (yyval.number) = ACTION_STOP; }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 1610 "src/p.y"
    { (yyval.number) = ACTION_UNMONITOR; }
    break;

  case 478:

/* Line 1806 of yacc.c  */
#line 1613 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
    break;

  case 479:

/* Line 1806 of yacc.c  */
#line 1622 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
    break;

  case 481:

/* Line 1806 of yacc.c  */
#line 1632 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (2)].number);
                    rate1.cycles = (yyvsp[(1) - (2)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 1638 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (3)].number);
                    rate1.cycles = (yyvsp[(2) - (3)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 1649 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (2)].number);
                    rate2.cycles = (yyvsp[(1) - (2)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 1655 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (3)].number);
                    rate2.cycles = (yyvsp[(2) - (3)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 1665 "src/p.y"
    {
                    (yyval.number) = ACTION_ALERT;
                  }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 1668 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 1671 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 1674 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 490:

/* Line 1806 of yacc.c  */
#line 1679 "src/p.y"
    {
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 491:

/* Line 1806 of yacc.c  */
#line 1684 "src/p.y"
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[(6) - (10)].string));
                    FREE((yyvsp[(6) - (10)].string));
                    addeventaction(&(checksumset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 1690 "src/p.y"
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 1696 "src/p.y"
    { checksumset.type = HASH_UNKNOWN; }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 1697 "src/p.y"
    { checksumset.type = HASH_MD5; }
    break;

  case 495:

/* Line 1806 of yacc.c  */
#line 1698 "src/p.y"
    { checksumset.type = HASH_SHA1; }
    break;

  case 496:

/* Line 1806 of yacc.c  */
#line 1701 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (8)].number);
                    filesystemset.limit_absolute = (yyvsp[(4) - (8)].number);
                    addeventaction(&(filesystemset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 1708 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 1717 "src/p.y"
    {
                    if (!filesystem_usage(current->inf, current->path))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_absolute = (int)((float)(yyvsp[(4) - (9)].real) / (float)current->inf->priv.filesystem.f_bsize * (float)(yyvsp[(5) - (9)].number));
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 1726 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 1735 "src/p.y"
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 501:

/* Line 1806 of yacc.c  */
#line 1740 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 502:

/* Line 1806 of yacc.c  */
#line 1741 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 1742 "src/p.y"
    { (yyval.number) = UNIT_KILOBYTE; }
    break;

  case 504:

/* Line 1806 of yacc.c  */
#line 1743 "src/p.y"
    { (yyval.number) = UNIT_MEGABYTE; }
    break;

  case 505:

/* Line 1806 of yacc.c  */
#line 1744 "src/p.y"
    { (yyval.number) = UNIT_GIGABYTE; }
    break;

  case 506:

/* Line 1806 of yacc.c  */
#line 1747 "src/p.y"
    {
                    permset.perm = check_perm((yyvsp[(4) - (8)].number));
                    addeventaction(&(permset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addperm(&permset);
                  }
    break;

  case 507:

/* Line 1806 of yacc.c  */
#line 1754 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[(4) - (7)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[(7) - (7)].number));
                    FREE((yyvsp[(4) - (7)].string));
                  }
    break;

  case 508:

/* Line 1806 of yacc.c  */
#line 1761 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (7)].string);
                    addmatch(&matchset, (yyvsp[(7) - (7)].number), 0);
                  }
    break;

  case 509:

/* Line 1806 of yacc.c  */
#line 1767 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[(4) - (4)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[(4) - (4)].string));
                  }
    break;

  case 510:

/* Line 1806 of yacc.c  */
#line 1774 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (4)].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 511:

/* Line 1806 of yacc.c  */
#line 1782 "src/p.y"
    {
                    matchset.not = FALSE;
                  }
    break;

  case 512:

/* Line 1806 of yacc.c  */
#line 1785 "src/p.y"
    {
                    matchset.not = TRUE;
                  }
    break;

  case 513:

/* Line 1806 of yacc.c  */
#line 1791 "src/p.y"
    {
                    sizeset.operator = (yyvsp[(3) - (9)].number);
                    sizeset.size = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(sizeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addsize(&sizeset);
                  }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 1797 "src/p.y"
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
    break;

  case 515:

/* Line 1806 of yacc.c  */
#line 1804 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 516:

/* Line 1806 of yacc.c  */
#line 1810 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->uid = adduid(&uidset);
                  }
    break;

  case 517:

/* Line 1806 of yacc.c  */
#line 1817 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 518:

/* Line 1806 of yacc.c  */
#line 1823 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->euid = adduid(&uidset);
                  }
    break;

  case 519:

/* Line 1806 of yacc.c  */
#line 1830 "src/p.y"
    {
                    gidset.gid = get_gid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 520:

/* Line 1806 of yacc.c  */
#line 1836 "src/p.y"
    {
                    gidset.gid = get_gid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->gid = addgid(&gidset);
                  }
    break;

  case 521:

/* Line 1806 of yacc.c  */
#line 1843 "src/p.y"
    { (yyval.number) = ICMP_ECHO; }
    break;

  case 522:

/* Line 1806 of yacc.c  */
#line 1846 "src/p.y"
    { mailset.reminder = 0; }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 1847 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (2)].number); }
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 1848 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (3)].number); }
    break;



/* Line 1806 of yacc.c  */
#line 5768 "src/y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1851 "src/p.y"



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
      snprintf(cs->hash, sizeof(cs->hash), "00000000000000000000000000000000");
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


