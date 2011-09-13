#include <config.h>

/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
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
  static struct mygid gidset;
  static struct myuid uidset;
  static struct myprogram programset;
  static struct myperm permset;
  static struct mysize sizeset;
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
  static int    hassystem = FALSE;

#define BITMAP_MAX (sizeof(long long) * 8)

  
/* -------------------------------------------------------------- Prototypes */

  static void  preparse();
  static void  postparse();
  static void  addservice(Service_T);
  static void  addmail(char *, Mail_T, Mail_T *);
  static void  createservice(int, char *, char *, int (*)(Service_T));
  static void  adddependant(char *);
  static void  addservicegroup(char *);
  static void  addport(Port_T);
  static void  addresource(Resource_T);
  static void  addtimestamp(Timestamp_T, int);
  static void  addactionrate(ActionRate_T);
  static void  addsize(Size_T);
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
  static void  addprogram(Program_T);
  static void  adduid(Uid_T);
  static void  addgid(Gid_T);
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
  static void  reset_checksumset();
  static void  reset_permset();
  static void  reset_uidset();
  static void  reset_programset();
  static void  reset_gidset();
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



/* Line 189 of yacc.c  */
#line 305 "src/y.tab.c"

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
     SSH = 329,
     DWP = 330,
     LDAP2 = 331,
     LDAP3 = 332,
     RDATE = 333,
     RSYNC = 334,
     TNS = 335,
     PGSQL = 336,
     POSTFIXPOLICY = 337,
     SIP = 338,
     LMTP = 339,
     GPS = 340,
     RADIUS = 341,
     MEMCACHE = 342,
     STRING = 343,
     PATH = 344,
     MAILADDR = 345,
     MAILFROM = 346,
     MAILREPLYTO = 347,
     MAILSUBJECT = 348,
     MAILBODY = 349,
     SERVICENAME = 350,
     STRINGNAME = 351,
     NUMBER = 352,
     PERCENT = 353,
     LOGLIMIT = 354,
     CLOSELIMIT = 355,
     DNSLIMIT = 356,
     KEEPALIVELIMIT = 357,
     REPLYLIMIT = 358,
     REQUESTLIMIT = 359,
     STARTLIMIT = 360,
     WAITLIMIT = 361,
     GRACEFULLIMIT = 362,
     CLEANUPLIMIT = 363,
     REAL = 364,
     CHECKPROC = 365,
     CHECKFILESYS = 366,
     CHECKFILE = 367,
     CHECKDIR = 368,
     CHECKHOST = 369,
     CHECKSYSTEM = 370,
     CHECKFIFO = 371,
     CHECKPROGRAM = 372,
     CHILDREN = 373,
     SYSTEM = 374,
     STATUS = 375,
     RESOURCE = 376,
     MEMORY = 377,
     TOTALMEMORY = 378,
     LOADAVG1 = 379,
     LOADAVG5 = 380,
     LOADAVG15 = 381,
     SWAP = 382,
     MODE = 383,
     ACTIVE = 384,
     PASSIVE = 385,
     MANUAL = 386,
     CPU = 387,
     TOTALCPU = 388,
     CPUUSER = 389,
     CPUSYSTEM = 390,
     CPUWAIT = 391,
     GROUP = 392,
     REQUEST = 393,
     DEPENDS = 394,
     BASEDIR = 395,
     SLOT = 396,
     EVENTQUEUE = 397,
     SECRET = 398,
     HOSTHEADER = 399,
     UID = 400,
     GID = 401,
     MMONIT = 402,
     INSTANCE = 403,
     USERNAME = 404,
     PASSWORD = 405,
     TIMESTAMP = 406,
     CHANGED = 407,
     SECOND = 408,
     MINUTE = 409,
     HOUR = 410,
     DAY = 411,
     SSLAUTO = 412,
     SSLV2 = 413,
     SSLV3 = 414,
     TLSV1 = 415,
     CERTMD5 = 416,
     BYTE = 417,
     KILOBYTE = 418,
     MEGABYTE = 419,
     GIGABYTE = 420,
     INODE = 421,
     SPACE = 422,
     PERMISSION = 423,
     SIZE = 424,
     MATCH = 425,
     NOT = 426,
     IGNORE = 427,
     ACTION = 428,
     EXEC = 429,
     UNMONITOR = 430,
     ICMP = 431,
     ICMPECHO = 432,
     NONEXIST = 433,
     EXIST = 434,
     INVALID = 435,
     DATA = 436,
     RECOVERED = 437,
     PASSED = 438,
     SUCCEEDED = 439,
     URL = 440,
     CONTENT = 441,
     PID = 442,
     PPID = 443,
     FSFLAG = 444,
     REGISTER = 445,
     CREDENTIALS = 446,
     URLOBJECT = 447,
     TARGET = 448,
     TIMESPEC = 449,
     MAXFORWARD = 450,
     FIPS = 451,
     NOTEQUAL = 452,
     EQUAL = 453,
     LESS = 454,
     GREATER = 455
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
#define SSH 329
#define DWP 330
#define LDAP2 331
#define LDAP3 332
#define RDATE 333
#define RSYNC 334
#define TNS 335
#define PGSQL 336
#define POSTFIXPOLICY 337
#define SIP 338
#define LMTP 339
#define GPS 340
#define RADIUS 341
#define MEMCACHE 342
#define STRING 343
#define PATH 344
#define MAILADDR 345
#define MAILFROM 346
#define MAILREPLYTO 347
#define MAILSUBJECT 348
#define MAILBODY 349
#define SERVICENAME 350
#define STRINGNAME 351
#define NUMBER 352
#define PERCENT 353
#define LOGLIMIT 354
#define CLOSELIMIT 355
#define DNSLIMIT 356
#define KEEPALIVELIMIT 357
#define REPLYLIMIT 358
#define REQUESTLIMIT 359
#define STARTLIMIT 360
#define WAITLIMIT 361
#define GRACEFULLIMIT 362
#define CLEANUPLIMIT 363
#define REAL 364
#define CHECKPROC 365
#define CHECKFILESYS 366
#define CHECKFILE 367
#define CHECKDIR 368
#define CHECKHOST 369
#define CHECKSYSTEM 370
#define CHECKFIFO 371
#define CHECKPROGRAM 372
#define CHILDREN 373
#define SYSTEM 374
#define STATUS 375
#define RESOURCE 376
#define MEMORY 377
#define TOTALMEMORY 378
#define LOADAVG1 379
#define LOADAVG5 380
#define LOADAVG15 381
#define SWAP 382
#define MODE 383
#define ACTIVE 384
#define PASSIVE 385
#define MANUAL 386
#define CPU 387
#define TOTALCPU 388
#define CPUUSER 389
#define CPUSYSTEM 390
#define CPUWAIT 391
#define GROUP 392
#define REQUEST 393
#define DEPENDS 394
#define BASEDIR 395
#define SLOT 396
#define EVENTQUEUE 397
#define SECRET 398
#define HOSTHEADER 399
#define UID 400
#define GID 401
#define MMONIT 402
#define INSTANCE 403
#define USERNAME 404
#define PASSWORD 405
#define TIMESTAMP 406
#define CHANGED 407
#define SECOND 408
#define MINUTE 409
#define HOUR 410
#define DAY 411
#define SSLAUTO 412
#define SSLV2 413
#define SSLV3 414
#define TLSV1 415
#define CERTMD5 416
#define BYTE 417
#define KILOBYTE 418
#define MEGABYTE 419
#define GIGABYTE 420
#define INODE 421
#define SPACE 422
#define PERMISSION 423
#define SIZE 424
#define MATCH 425
#define NOT 426
#define IGNORE 427
#define ACTION 428
#define EXEC 429
#define UNMONITOR 430
#define ICMP 431
#define ICMPECHO 432
#define NONEXIST 433
#define EXIST 434
#define INVALID 435
#define DATA 436
#define RECOVERED 437
#define PASSED 438
#define SUCCEEDED 439
#define URL 440
#define CONTENT 441
#define PID 442
#define PPID 443
#define FSFLAG 444
#define REGISTER 445
#define CREDENTIALS 446
#define URLOBJECT 447
#define TARGET 448
#define TIMESPEC 449
#define MAXFORWARD 450
#define FIPS 451
#define NOTEQUAL 452
#define EQUAL 453
#define LESS 454
#define GREATER 455




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 257 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 214 of yacc.c  */
#line 750 "src/y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 762 "src/y.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   951

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  493
/* YYNRULES -- Number of states.  */
#define YYNSTATES  868

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   455

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
       2,     2,     2,     2,     2,     2,     2,     2,   203,     2,
       2,     2,     2,     2,   204,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   201,     2,   202,     2,     2,     2,     2,
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
     195,   196,   197,   198,   199,   200
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
      87,    89,    91,    93,    95,    96,    99,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   132,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     166,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   223,   226,
     228,   230,   232,   234,   236,   238,   240,   242,   243,   246,
     248,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   273,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   299,   307,   316,   321,   322,   326,
     331,   334,   337,   341,   345,   351,   356,   363,   368,   372,
     376,   380,   384,   387,   391,   396,   397,   400,   406,   412,
     418,   420,   423,   429,   437,   438,   441,   443,   445,   447,
     449,   451,   456,   458,   461,   464,   467,   470,   474,   478,
     481,   483,   485,   488,   491,   494,   497,   500,   503,   504,
     507,   508,   510,   516,   521,   524,   528,   532,   536,   537,
     542,   543,   549,   550,   556,   557,   563,   566,   568,   571,
     573,   574,   576,   581,   586,   591,   596,   601,   606,   611,
     616,   619,   624,   629,   633,   638,   642,   647,   649,   652,
     654,   657,   659,   661,   664,   667,   670,   673,   674,   677,
     680,   681,   684,   685,   688,   701,   713,   725,   736,   737,
     740,   743,   746,   747,   750,   755,   758,   759,   762,   763,
     765,   767,   769,   771,   772,   776,   779,   782,   785,   788,
     792,   795,   798,   801,   804,   807,   812,   815,   818,   821,
     824,   827,   830,   833,   836,   839,   842,   845,   848,   852,
     855,   857,   859,   862,   865,   868,   869,   872,   875,   876,
     879,   880,   884,   890,   891,   894,   897,   899,   903,   908,
     913,   918,   923,   928,   933,   938,   943,   948,   953,   961,
     968,   975,   976,   979,   980,   984,   985,   989,   990,   994,
     995,   998,  1006,  1014,  1015,  1019,  1021,  1023,  1027,  1034,
    1042,  1044,  1047,  1050,  1052,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1089,  1091,  1093,  1095,  1097,  1098,  1103,  1105,
    1108,  1110,  1112,  1114,  1116,  1120,  1123,  1126,  1129,  1132,
    1135,  1138,  1141,  1143,  1146,  1148,  1158,  1165,  1167,  1170,
    1172,  1174,  1176,  1178,  1185,  1187,  1190,  1192,  1194,  1196,
    1198,  1203,  1208,  1213,  1215,  1217,  1219,  1224,  1229,  1234,
    1239,  1244,  1249,  1253,  1257,  1259,  1261,  1263,  1265,  1267,
    1277,  1284,  1285,  1287,  1289,  1291,  1293,  1295,  1296,  1298,
    1300,  1302,  1304,  1306,  1309,  1313,  1315,  1317,  1319,  1321,
    1323,  1325,  1326,  1329,  1333,  1334,  1337,  1341,  1342,  1349,
    1356,  1363,  1372,  1383,  1391,  1392,  1394,  1396,  1405,  1415,
    1425,  1435,  1442,  1443,  1445,  1447,  1449,  1451,  1460,  1468,
    1476,  1481,  1486,  1487,  1489,  1499,  1506,  1515,  1524,  1533,
    1542,  1545,  1546,  1549
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     206,     0,    -1,    -1,   207,    -1,   208,    -1,   207,   208,
      -1,   225,    -1,   226,    -1,   231,    -1,   232,    -1,   236,
      -1,   240,    -1,   241,    -1,   242,    -1,   235,    -1,   233,
      -1,   234,    -1,   228,    -1,   229,    -1,   230,    -1,   265,
     209,    -1,   266,   211,    -1,   267,   213,    -1,   268,   215,
      -1,   269,   217,    -1,   270,   219,    -1,   271,   221,    -1,
     272,   223,    -1,    -1,   209,   210,    -1,   273,    -1,   274,
      -1,   301,    -1,   302,    -1,   303,    -1,   282,    -1,   283,
      -1,   309,    -1,   312,    -1,   320,    -1,   321,    -1,   322,
      -1,   323,    -1,   327,    -1,    -1,   211,   212,    -1,   273,
      -1,   274,    -1,   301,    -1,   342,    -1,   309,    -1,   320,
      -1,   312,    -1,   357,    -1,   361,    -1,   362,    -1,   351,
      -1,   360,    -1,   358,    -1,   321,    -1,   322,    -1,   323,
      -1,    -1,   213,   214,    -1,   273,    -1,   274,    -1,   301,
      -1,   309,    -1,   320,    -1,   312,    -1,   357,    -1,   361,
      -1,   362,    -1,   321,    -1,   322,    -1,   323,    -1,   353,
      -1,   354,    -1,   355,    -1,    -1,   215,   216,    -1,   273,
      -1,   274,    -1,   301,    -1,   342,    -1,   309,    -1,   320,
      -1,   312,    -1,   357,    -1,   361,    -1,   362,    -1,   321,
      -1,   322,    -1,   323,    -1,   218,    -1,   217,   218,    -1,
     273,    -1,   274,    -1,   301,    -1,   282,    -1,   284,    -1,
     309,    -1,   312,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,    -1,   219,   220,    -1,   273,    -1,   274,    -1,
     309,    -1,   312,    -1,   320,    -1,   322,    -1,   323,    -1,
     330,    -1,    -1,   221,   222,    -1,   273,    -1,   274,    -1,
     301,    -1,   342,    -1,   309,    -1,   320,    -1,   312,    -1,
     357,    -1,   361,    -1,   362,    -1,   321,    -1,   322,    -1,
     323,    -1,    -1,   223,   224,    -1,   273,    -1,   274,    -1,
     309,    -1,   301,    -1,   312,    -1,   320,    -1,   322,    -1,
     323,    -1,   326,    -1,     8,   313,   317,   364,    -1,     8,
     313,   201,   315,   202,   317,   364,    -1,     8,   313,   171,
     201,   315,   202,   317,   364,    -1,     8,    11,    97,   227,
      -1,    -1,    39,    23,    97,    -1,     8,    34,    97,   356,
      -1,     8,    17,    -1,     8,   196,    -1,     8,     9,    89,
      -1,     8,     9,    12,    -1,     8,     9,    12,    10,    88,
      -1,     8,   142,   140,    89,    -1,     8,   142,   140,    89,
     141,    97,    -1,     8,   142,   141,    97,    -1,     8,    30,
      89,    -1,     8,    31,    89,    -1,     8,    38,    89,    -1,
       8,   147,   237,    -1,   238,   239,    -1,   237,   238,   239,
      -1,   192,   307,   290,   289,    -1,    -1,   190,   191,    -1,
       8,    13,   243,   307,   281,    -1,     8,    53,   201,   318,
     202,    -1,     8,    14,    44,    97,   245,    -1,   244,    -1,
     243,   244,    -1,    88,   279,   280,   290,   289,    -1,    88,
      44,    97,   279,   280,   290,   289,    -1,    -1,   245,   246,
      -1,   247,    -1,   250,    -1,   253,    -1,   257,    -1,   249,
      -1,   248,   254,   255,   256,    -1,    27,    -1,    27,    25,
      -1,    25,    27,    -1,    27,    26,    -1,    26,    27,    -1,
     249,    24,    89,    -1,   249,    28,    89,    -1,   249,    29,
      -1,   251,    -1,   252,    -1,    55,    25,    -1,    25,    55,
      -1,    55,    26,    -1,    26,    55,    -1,    16,    88,    -1,
      24,    89,    -1,    -1,    28,    89,    -1,    -1,    29,    -1,
      15,    88,   203,    88,   264,    -1,    15,   204,    88,   264,
      -1,    15,    89,    -1,    15,    19,    89,    -1,    15,    20,
      89,    -1,    15,    22,    89,    -1,    -1,    15,    89,   258,
     262,    -1,    -1,    15,    19,    89,   259,   262,    -1,    -1,
      15,    20,    89,   260,   262,    -1,    -1,    15,    22,    89,
     261,   262,    -1,    15,    88,    -1,   263,    -1,   262,   263,
      -1,    88,    -1,    -1,    18,    -1,   110,    95,    38,    89,
      -1,   110,    95,    41,    89,    -1,   110,    95,   170,    88,
      -1,   110,    95,   170,    89,    -1,   112,    95,    41,    89,
      -1,   111,    95,    41,    89,    -1,   113,    95,    41,    89,
      -1,   114,    95,    16,    88,    -1,   115,    95,    -1,   116,
      95,    41,    89,    -1,   117,    95,    41,    89,    -1,    39,
     275,   305,    -1,    39,   275,   276,   305,    -1,    40,   275,
     305,    -1,    40,   275,   276,   305,    -1,   277,    -1,   275,
     277,    -1,   278,    -1,   276,   278,    -1,    88,    -1,    89,
      -1,   145,    88,    -1,   146,    88,    -1,   145,    97,    -1,
     146,    97,    -1,    -1,   149,    90,    -1,   149,    88,    -1,
      -1,   150,    88,    -1,    -1,    43,    88,    -1,     3,     7,
     285,   286,   288,   291,   307,   308,   348,     5,   346,   350,
      -1,     3,     7,   185,   192,   310,   307,   308,   348,     5,
     346,   350,    -1,     3,     7,   287,   288,   291,   307,   308,
     348,     5,   346,   350,    -1,     3,     7,   176,   363,   304,
     307,   348,     5,   346,   350,    -1,    -1,    42,    88,    -1,
      44,    97,    -1,    54,    89,    -1,    -1,    45,    47,    -1,
      45,    48,   290,   289,    -1,    45,    46,    -1,    -1,   161,
      88,    -1,    -1,   158,    -1,   159,    -1,   160,    -1,   157,
      -1,    -1,    49,    64,   299,    -1,    49,    62,    -1,    49,
      73,    -1,    49,    75,    -1,    49,    65,    -1,    49,    63,
     296,    -1,    49,    68,    -1,    49,    69,    -1,    49,    76,
      -1,    49,    77,    -1,    49,    72,    -1,    49,    83,   294,
     295,    -1,    49,    70,    -1,    49,    71,    -1,    49,    82,
      -1,    49,    67,    -1,    49,    66,    -1,    49,    74,    -1,
      49,    78,    -1,    49,    79,    -1,    49,    80,    -1,    49,
      81,    -1,    49,    84,    -1,    49,    85,    -1,    49,    86,
     298,    -1,    49,    87,    -1,   292,    -1,   293,    -1,   292,
     293,    -1,    32,    88,    -1,    33,    88,    -1,    -1,   193,
      90,    -1,   193,    88,    -1,    -1,   195,    97,    -1,    -1,
     138,    89,   297,    -1,   138,    89,    59,    88,   297,    -1,
      -1,   144,    88,    -1,   143,    88,    -1,   300,    -1,   299,
       6,   300,    -1,    99,   343,    97,    98,    -1,   100,   343,
      97,    98,    -1,   101,   343,    97,    98,    -1,   102,   343,
      97,    98,    -1,   103,   343,    97,    98,    -1,   104,   343,
      97,    98,    -1,   105,   343,    97,    98,    -1,   106,   343,
      97,    98,    -1,   107,   343,    97,    98,    -1,   108,   343,
      97,    98,    -1,     3,   171,   179,   348,     5,   346,   350,
      -1,     3,   152,   187,   348,     5,   346,    -1,     3,   152,
     188,   348,     5,   346,    -1,    -1,    36,    97,    -1,    -1,
      56,    97,   153,    -1,    -1,    56,    97,   153,    -1,    -1,
      56,    97,   153,    -1,    -1,    57,    97,    -1,     3,    97,
      58,    97,    35,     5,   346,    -1,     3,    97,    58,    97,
      35,     5,    56,    -1,    -1,   186,   311,    88,    -1,   198,
      -1,   197,    -1,   313,   317,   364,    -1,   313,   201,   315,
     202,   317,   364,    -1,   313,   171,   201,   315,   202,   317,
     364,    -1,   314,    -1,    51,    90,    -1,    52,    90,    -1,
     316,    -1,   315,   316,    -1,   173,    -1,    59,    -1,    50,
      -1,   186,    -1,   181,    -1,   174,    -1,   189,    -1,   146,
      -1,   176,    -1,   148,    -1,   180,    -1,   178,    -1,   168,
      -1,   187,    -1,   188,    -1,   121,    -1,   169,    -1,   120,
      -1,    56,    -1,   151,    -1,   145,    -1,    -1,    53,   201,
     318,   202,    -1,   319,    -1,   318,   319,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    60,    97,    35,    -1,
      60,   194,    -1,    61,   194,    -1,   128,   129,    -1,   128,
     130,    -1,   128,   131,    -1,   137,    96,    -1,   139,   324,
      -1,   325,    -1,   324,   325,    -1,    95,    -1,     3,   120,
     343,    97,   306,   348,     5,   346,   350,    -1,     3,   328,
     348,     5,   346,   350,    -1,   329,    -1,   328,   329,    -1,
     333,    -1,   336,    -1,   338,    -1,   339,    -1,     3,   331,
     348,     5,   346,   350,    -1,   332,    -1,   331,   332,    -1,
     339,    -1,   336,    -1,   337,    -1,   334,    -1,   132,   343,
      97,    98,    -1,   133,   343,    97,    98,    -1,   335,   343,
      97,    98,    -1,   134,    -1,   135,    -1,   136,    -1,   122,
     343,   341,   356,    -1,   122,   343,    97,    98,    -1,   123,
     343,   341,   356,    -1,   123,   343,    97,    98,    -1,   127,
     343,   341,   356,    -1,   127,   343,    97,    98,    -1,   118,
     343,    97,    -1,   340,   343,   341,    -1,   124,    -1,   125,
      -1,   126,    -1,   109,    -1,    97,    -1,     3,   151,   343,
      97,   344,   348,     5,   346,   350,    -1,     3,   152,   151,
     348,     5,   346,    -1,    -1,   200,    -1,   199,    -1,   198,
      -1,   197,    -1,   152,    -1,    -1,   153,    -1,   154,    -1,
     155,    -1,   156,    -1,    51,    -1,   174,   275,    -1,   174,
     275,   276,    -1,    58,    -1,    39,    -1,    40,    -1,   175,
      -1,   345,    -1,   345,    -1,    -1,    97,    35,    -1,    97,
      97,    35,    -1,    -1,    97,    35,    -1,    97,    97,    35,
      -1,    -1,     4,     3,   182,   349,     5,   347,    -1,     4,
       3,   183,   349,     5,   347,    -1,     4,     3,   184,   349,
       5,   347,    -1,     3,     7,   352,    59,   348,     5,   346,
     350,    -1,     3,     7,   352,    59,    33,    88,   348,     5,
     346,   350,    -1,     3,   152,   352,    59,   348,     5,   346,
      -1,    -1,    20,    -1,    21,    -1,     3,   166,   343,    97,
     348,     5,   346,   350,    -1,     3,   166,   343,    97,    98,
     348,     5,   346,   350,    -1,     3,   167,   343,   341,   356,
     348,     5,   346,   350,    -1,     3,   167,   343,    97,    98,
     348,     5,   346,   350,    -1,     3,   152,   189,   348,     5,
     346,    -1,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,     3,     7,   168,    97,   348,     5,   346,   350,    -1,
       3,   359,   170,    89,   348,     5,   346,    -1,     3,   359,
     170,    88,   348,     5,   346,    -1,   172,   359,   170,    89,
      -1,   172,   359,   170,    88,    -1,    -1,   171,    -1,     3,
     169,   343,    97,   356,   348,     5,   346,   350,    -1,     3,
     152,   169,   348,     5,   346,    -1,     3,     7,   145,    88,
     348,     5,   346,   350,    -1,     3,     7,   145,    97,   348,
       5,   346,   350,    -1,     3,     7,   146,    88,   348,     5,
     346,   350,    -1,     3,     7,   146,    97,   348,     5,   346,
     350,    -1,    45,   177,    -1,    -1,    37,    97,    -1,    37,
      97,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   303,   303,   304,   307,   308,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   335,   336,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   355,   356,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   377,   378,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   398,
     399,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   417,   418,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   434,   435,   438,
     439,   440,   441,   442,   443,   444,   445,   448,   449,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   467,   468,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   482,   486,   489,   495,   505,   506,   509,
     514,   519,   526,   534,   537,   542,   545,   549,   555,   560,
     565,   573,   576,   577,   580,   586,   587,   592,   598,   607,
     613,   614,   617,   636,   655,   656,   659,   660,   661,   662,
     665,   666,   673,   674,   675,   678,   679,   680,   681,   682,
     685,   686,   689,   690,   693,   694,   697,   700,   707,   708,
     716,   720,   726,   729,   737,   741,   745,   749,   753,   753,
     760,   760,   767,   767,   774,   774,   781,   789,   790,   793,
     797,   798,   801,   804,   807,   814,   823,   828,   833,   838,
     844,   850,   855,   861,   864,   869,   872,   877,   878,   881,
     882,   885,   886,   889,   890,   891,   892,   895,   896,   897,
     900,   901,   904,   905,   908,   915,   925,   934,   944,   950,
     953,   956,   961,   964,   967,   975,   980,   981,   984,   985,
     986,   987,   988,   991,   994,   997,  1000,  1003,  1006,  1009,
    1012,  1015,  1018,  1021,  1024,  1027,  1030,  1033,  1037,  1040,
    1043,  1046,  1049,  1052,  1055,  1058,  1061,  1064,  1067,  1070,
    1073,  1078,  1079,  1082,  1083,  1086,  1087,  1090,  1095,  1096,
    1101,  1102,  1106,  1113,  1114,  1119,  1124,  1125,  1128,  1132,
    1136,  1140,  1144,  1148,  1152,  1156,  1160,  1164,  1170,  1176,
    1181,  1186,  1189,  1194,  1197,  1202,  1205,  1210,  1213,  1218,
    1221,  1226,  1232,  1240,  1241,  1247,  1248,  1251,  1255,  1258,
    1262,  1267,  1270,  1273,  1274,  1277,  1278,  1279,  1280,  1281,
    1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,
    1292,  1293,  1294,  1295,  1296,  1297,  1300,  1301,  1304,  1305,
    1308,  1309,  1310,  1311,  1314,  1318,  1322,  1328,  1331,  1334,
    1340,  1344,  1347,  1348,  1351,  1354,  1363,  1369,  1370,  1373,
    1374,  1375,  1376,  1379,  1385,  1386,  1389,  1390,  1391,  1392,
    1395,  1400,  1407,  1414,  1415,  1416,  1419,  1424,  1429,  1434,
    1441,  1446,  1453,  1460,  1467,  1468,  1469,  1472,  1473,  1476,
    1482,  1489,  1490,  1491,  1492,  1493,  1494,  1497,  1498,  1499,
    1500,  1501,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1513,
    1522,  1531,  1532,  1538,  1548,  1549,  1555,  1565,  1568,  1571,
    1574,  1579,  1583,  1590,  1596,  1597,  1598,  1601,  1608,  1617,
    1626,  1635,  1640,  1641,  1642,  1643,  1644,  1647,  1654,  1661,
    1667,  1674,  1682,  1685,  1691,  1697,  1704,  1710,  1717,  1723,
    1730,  1733,  1734,  1735
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
  "SSH", "DWP", "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL",
  "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "STRING",
  "PATH", "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY",
  "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHILDREN", "SYSTEM",
  "STATUS", "RESOURCE", "MEMORY", "TOTALMEMORY", "LOADAVG1", "LOADAVG5",
  "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE", "MANUAL", "CPU",
  "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST",
  "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER",
  "UID", "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD", "TIMESTAMP",
  "CHANGED", "SECOND", "MINUTE", "HOUR", "DAY", "SSLAUTO", "SSLV2",
  "SSLV3", "TLSV1", "CERTMD5", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE",
  "INODE", "SPACE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE",
  "ACTION", "EXEC", "UNMONITOR", "ICMP", "ICMPECHO", "NONEXIST", "EXIST",
  "INVALID", "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT",
  "PID", "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT",
  "TARGET", "TIMESPEC", "MAXFORWARD", "FIPS", "NOTEQUAL", "EQUAL", "LESS",
  "GREATER", "'{'", "'}'", "':'", "'@'", "$accept", "cfgfile",
  "statement_list", "statement", "optproclist", "optproc", "optfilelist",
  "optfile", "optfilesyslist", "optfilesys", "optdirlist", "optdir",
  "opthostlist", "opthost", "optsystemlist", "optsystem", "optfifolist",
  "optfifo", "optstatuslist", "optstatus", "setalert", "setdaemon",
  "startdelay", "setexpectbuffer", "setinit", "setfips", "setlog",
  "seteventqueue", "setidfile", "setstatefile", "setpid", "setmmonits",
  "mmonitlist", "mmonit", "credentials", "setmailservers", "setmailformat",
  "sethttpd", "mailserverlist", "mailserver", "httpdlist", "httpdoption",
  "ssl", "sslenable", "ssldisable", "signature", "sigenable", "sigdisable",
  "bindaddress", "pemfile", "clientpemfile", "allowselfcert", "allow",
  "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checksystem", "checkfifo", "checkprogram", "start", "stop",
  "argumentlist", "useroptionlist", "argument", "useroption", "username",
  "password", "hostname", "connection", "connectionunix", "icmp", "host",
  "port", "unixsocket", "type", "certmd5", "sslversion", "protocol",
  "sendexpectlist", "sendexpect", "target", "maxforward", "request",
  "hostheader", "secret", "apache_stat_list", "apache_stat", "exist",
  "pid", "ppid", "icmpcount", "exectimeout", "programtimeout",
  "nettimeout", "retry", "actionrate", "urloption", "urloperator", "alert",
  "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "group", "depend", "dependlist", "dependant", "exitvalue",
  "resourceprocess", "resourceprocesslist", "resourceprocessopt",
  "resourcesystem", "resourcesystemlist", "resourcesystemopt",
  "resourcecpuproc", "resourcecpu", "resourcecpuid", "resourcemem",
  "resourceswap", "resourcechild", "resourceload", "resourceloadavg",
  "value", "timestamp", "operator", "time", "action", "action1", "action2",
  "rate1", "rate2", "recovery", "checksum", "hashtype", "inode", "space",
  "fsflag", "unit", "permission", "match", "matchflagnot", "size", "uid",
  "gid", "icmptype", "reminder", 0
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
     455,   123,   125,    58,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   205,   206,   206,   207,   207,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   211,   211,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   215,
     215,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   217,   217,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   219,   220,
     220,   220,   220,   220,   220,   220,   220,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   223,   223,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   225,   225,   225,   226,   227,   227,   228,
     229,   230,   231,   231,   231,   232,   232,   232,   233,   234,
     235,   236,   237,   237,   238,   239,   239,   240,   241,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     247,   247,   248,   248,   248,   249,   249,   249,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   254,   255,   255,
     256,   256,   257,   257,   257,   257,   257,   257,   258,   257,
     259,   257,   260,   257,   261,   257,   257,   262,   262,   263,
     264,   264,   265,   265,   265,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   273,   274,   274,   275,   275,   276,
     276,   277,   277,   278,   278,   278,   278,   279,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   284,   285,   285,
     286,   287,   288,   288,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   292,   292,   293,   293,   294,   294,   294,   295,   295,
     296,   296,   296,   297,   297,   298,   299,   299,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   301,   302,
     303,   304,   304,   305,   305,   306,   306,   307,   307,   308,
     308,   309,   309,   310,   310,   311,   311,   312,   312,   312,
     312,   313,   314,   315,   315,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   317,   317,   318,   318,
     319,   319,   319,   319,   320,   320,   320,   321,   321,   321,
     322,   323,   324,   324,   325,   326,   327,   328,   328,   329,
     329,   329,   329,   330,   331,   331,   332,   332,   332,   332,
     333,   333,   334,   335,   335,   335,   336,   336,   336,   336,
     337,   337,   338,   339,   340,   340,   340,   341,   341,   342,
     342,   343,   343,   343,   343,   343,   343,   344,   344,   344,
     344,   344,   345,   345,   345,   345,   345,   345,   345,   346,
     347,   348,   348,   348,   349,   349,   349,   350,   350,   350,
     350,   351,   351,   351,   352,   352,   352,   353,   353,   354,
     354,   355,   356,   356,   356,   356,   356,   357,   358,   358,
     358,   358,   359,   359,   360,   360,   361,   361,   362,   362,
     363,   364,   364,   364
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     7,     8,     4,     0,     3,     4,
       2,     2,     3,     3,     5,     4,     6,     4,     3,     3,
       3,     3,     2,     3,     4,     0,     2,     5,     5,     5,
       1,     2,     5,     7,     0,     2,     1,     1,     1,     1,
       1,     4,     1,     2,     2,     2,     2,     3,     3,     2,
       1,     1,     2,     2,     2,     2,     2,     2,     0,     2,
       0,     1,     5,     4,     2,     3,     3,     3,     0,     4,
       0,     5,     0,     5,     0,     5,     2,     1,     2,     1,
       0,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     4,     4,     3,     4,     3,     4,     1,     2,     1,
       2,     1,     1,     2,     2,     2,     2,     0,     2,     2,
       0,     2,     0,     2,    12,    11,    11,    10,     0,     2,
       2,     2,     0,     2,     4,     2,     0,     2,     0,     1,
       1,     1,     1,     0,     3,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     2,     4,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       1,     1,     2,     2,     2,     0,     2,     2,     0,     2,
       0,     3,     5,     0,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     7,     6,
       6,     0,     2,     0,     3,     0,     3,     0,     3,     0,
       2,     7,     7,     0,     3,     1,     1,     3,     6,     7,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     2,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     9,     6,     1,     2,     1,
       1,     1,     1,     6,     1,     2,     1,     1,     1,     1,
       4,     4,     4,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     3,     3,     1,     1,     1,     1,     1,     9,
       6,     0,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     0,     2,     3,     0,     2,     3,     0,     6,     6,
       6,     8,    10,     7,     0,     1,     1,     8,     9,     9,
       9,     6,     0,     1,     1,     1,     1,     8,     7,     7,
       4,     4,     0,     1,     9,     6,     8,     8,     8,     8,
       2,     0,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     6,     7,    17,    18,    19,     8,     9,
      15,    16,    14,    10,    11,    12,    13,    28,    44,    62,
      79,     0,   107,   117,   132,     0,     0,     0,     0,   150,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   376,
       0,     0,     0,     0,     0,   230,     0,     0,     1,     5,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    94,    96,    97,    99,   100,    98,
     101,   102,   376,   350,   103,   104,   105,   106,    25,    26,
      27,   153,   152,   147,   247,   337,   170,     0,   158,   159,
     472,   160,   351,     0,     0,     0,   337,   161,   165,     0,
       0,     0,   491,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    35,    36,    32,    33,
      34,    37,    38,    39,    40,    41,    42,    43,   482,   482,
      45,    46,    47,    48,    50,    52,    51,    59,    60,    61,
      49,    56,    53,    58,    57,    54,    55,     0,    63,    64,
      65,    66,    67,    69,    68,    73,    74,    75,    76,    77,
      78,    70,    71,    72,     0,    80,    81,    82,    83,    85,
      87,    86,    91,    92,    93,    84,    88,    89,    90,   258,
       0,     0,   241,   242,   333,   237,   333,   352,     0,   385,
     386,   387,   388,   389,   390,   394,   391,   392,    95,     0,
       0,   491,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   119,   120,   121,   123,   125,   124,   129,
     130,   131,   122,   126,   127,   128,     0,   133,   134,   135,
     137,   136,   138,   139,   140,   141,   142,     0,     0,   146,
       0,     0,   250,     0,   171,   252,   174,   473,   474,   475,
     476,   149,   380,   381,   382,   383,     0,   378,   155,   157,
     268,   165,     0,   162,     0,     0,   357,   373,   356,   372,
     370,   375,   362,   364,   374,   367,   371,   355,   360,   363,
     366,   365,   359,   358,   368,   369,   361,     0,   353,     0,
     143,   222,   223,   224,   225,   227,   226,   228,   229,   231,
     232,   258,   431,   431,   431,   424,   425,   426,   431,   431,
       0,   451,   397,   399,   400,   401,   402,   431,   464,   431,
     464,   431,   483,     0,   483,     0,     0,     0,   431,   431,
       0,     0,     0,     0,     0,     0,   451,     0,     0,     0,
     333,   238,   239,   233,   333,   235,   384,   393,     0,     0,
     347,   431,   413,   414,   415,   451,   404,   409,   431,   407,
     408,   406,   431,   154,     0,   247,   249,   248,     0,   268,
       0,     0,   167,   169,   168,   379,     0,   272,   269,   270,
     271,   266,   163,   166,     0,     0,   376,   354,   492,     0,
     262,   436,   435,   434,   433,   432,     0,     0,     0,     0,
       0,   451,   451,     0,   398,     0,     0,   465,   466,     0,
       0,     0,     0,     0,   451,   451,     0,     0,     0,     0,
     451,     0,     0,   259,     0,   331,   343,     0,   262,     0,
       0,     0,   243,   245,   244,   246,   240,   234,   236,     0,
     376,     0,   405,     0,     0,     0,   148,   250,   251,   266,
     338,   253,     0,     0,     0,     0,   182,     0,   175,   176,
       0,   180,   177,   190,   191,   178,   179,   156,     0,   164,
     377,   376,   491,   493,   261,     0,   273,   422,   428,   427,
     472,   428,   472,     0,     0,     0,     0,   452,     0,     0,
     428,   423,   451,   451,   451,   451,   451,   451,   437,     0,
       0,   451,   472,   451,   451,   481,   480,     0,   451,   428,
     472,   490,     0,   337,     0,   337,   260,   273,     0,     0,
     334,   376,   491,   428,   472,     0,     0,   335,   268,   172,
       0,     0,     0,   216,   204,     0,   196,   184,   193,   186,
     195,   183,   185,   192,   194,     0,   198,     0,     0,   189,
     267,   491,   144,   265,   263,   268,     0,     0,     0,   337,
     300,   301,   417,   416,   419,   418,   410,   411,     0,     0,
     453,   446,   447,   442,   445,     0,   448,   449,   457,     0,
       0,     0,     0,     0,     0,     0,   438,   439,   440,   441,
     451,     0,     0,     0,   451,     0,     0,     0,   451,     0,
     451,   451,   332,   451,   346,   345,     0,   339,   337,     0,
     457,   491,   348,   421,   420,   457,   412,     0,   451,   266,
     205,   206,   207,     0,     0,   220,   197,     0,   200,   187,
     188,   145,   266,   303,   304,   275,   310,     0,   278,   290,
     289,   280,   281,   286,   287,   284,   276,   291,   277,   282,
     283,   292,   293,   294,   295,   288,   305,   296,   297,     0,
     299,   339,   302,   329,   330,   443,     0,   396,     0,     0,
       0,     0,     0,   451,     0,     0,   430,   485,     0,     0,
       0,     0,   471,     0,     0,     0,     0,     0,   344,     0,
     451,   339,   342,   341,   328,   349,   403,     0,     0,   173,
       0,     0,     0,   220,   219,   209,   217,   221,   203,   199,
     201,   181,   264,     0,   279,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   274,   316,     0,   308,     0,
     298,   451,   444,     0,   457,   457,   457,   457,   457,     0,
     457,     0,   463,     0,   479,   478,     0,   457,     0,     0,
       0,   340,     0,   451,   336,     0,   211,   213,   215,   202,
     218,   313,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   306,     0,   285,   315,     0,   454,
     454,   454,   486,   487,   488,   489,   477,     0,   461,   457,
     457,   457,   467,   457,   457,   457,     0,     0,   457,     0,
       0,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,   309,     0,     0,     0,     0,     0,   457,
     429,   484,   468,   470,   469,   257,   457,     0,   395,   313,
     314,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   457,   455,     0,     0,     0,     0,   462,   255,   457,
     312,   256,   456,   450,   458,   459,   460,   254
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    60,   123,    61,   140,    62,   158,
      63,   175,    73,    74,    88,   213,    89,   222,    90,   237,
      13,    14,   249,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   107,   108,   273,    24,    25,    26,    95,    96,
     383,   468,   469,   470,   471,   472,   473,   474,   475,   556,
     638,   721,   476,   634,   710,   711,   712,   715,   716,   718,
      27,    28,    29,    30,    31,    32,    33,    34,    75,    76,
     194,   350,   195,   352,   252,   379,   382,    77,   127,    78,
     344,   438,   400,   486,   479,   391,   569,   570,   571,   738,
     786,   724,   811,   740,   735,   736,    79,   129,   130,   523,
     353,   628,   255,   700,    80,   525,   616,    81,    82,    83,
     297,   298,   112,   266,   267,    84,    85,    86,    87,   206,
     207,   246,   137,   321,   322,   221,   365,   366,   323,   367,
     368,   324,   370,   325,   326,   327,   490,   150,   406,   600,
     587,   588,   864,   415,   826,   677,   151,   422,   168,   169,
     170,   261,   152,   153,   333,   154,   155,   156,   435,   300
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -608
static const yytype_int16 yypact[] =
{
     333,    41,   -36,   -32,   -15,   -11,     2,    14,    71,   118,
     111,   333,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,   251,  -608,  -608,  -608,    36,    58,   128,   186,  -608,
     147,   151,   149,   164,   161,    56,   194,    75,  -608,    32,
      40,   233,   254,   274,   285,  -608,   279,   291,  -608,  -608,
     341,    63,   456,   585,    19,   264,   264,   250,   -59,   148,
     284,   259,   263,   251,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,    57,  -608,  -608,  -608,  -608,  -608,   635,   585,
     641,   356,  -608,   331,    -4,    48,  -608,   303,  -608,  -608,
     329,  -608,  -608,   406,   314,   308,   353,    75,   227,   218,
     235,   531,   402,   373,   388,   309,   390,   399,   429,   378,
     439,   441,   137,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,     1,   365,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,    60,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,   142,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,   -18,
     495,   379,  -608,  -608,   176,  -608,   176,  -608,   521,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   263,  -608,  -608,   359,
     531,   402,   260,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   -50,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,   490,   557,  -608,
     492,   -49,   444,   494,  -608,   555,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   -48,  -608,   462,  -608,
     346,   227,   415,  -608,   406,   531,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,   287,  -608,   511,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,    -5,   162,   162,   162,  -608,  -608,  -608,   162,   162,
     189,   626,  -608,  -608,  -608,  -608,  -608,   162,    79,   162,
      10,   162,   379,   451,  -608,   458,   223,   421,   162,   162,
     484,   546,   594,   448,   603,   551,   556,   559,    54,   229,
      17,  -608,  -608,  -608,    17,  -608,  -608,  -608,   531,   381,
    -608,   162,  -608,  -608,  -608,   606,  -608,  -608,   162,  -608,
    -608,  -608,   162,  -608,   561,   514,  -608,  -608,   572,   346,
     512,   576,  -608,   323,  -608,  -608,   569,  -608,  -608,  -608,
    -608,   510,  -608,  -608,    39,   431,   619,  -608,   638,   589,
     639,  -608,  -608,  -608,  -608,  -608,   588,    59,    62,   591,
     592,   556,   556,    16,  -608,   685,   159,  -608,  -608,   275,
     277,   597,   632,   600,   556,   556,   647,   601,   369,   426,
     556,   611,   191,  -608,   533,   678,   529,   624,   639,   681,
     720,   573,  -608,  -608,  -608,  -608,  -608,  -608,  -608,   481,
     619,   219,  -608,   722,   642,   646,  -608,   444,  -608,   510,
    -608,  -608,     0,   650,   193,   211,   499,   516,  -608,  -608,
     721,   382,  -608,  -608,  -608,  -608,  -608,  -608,   658,  -608,
    -608,   619,   402,  -608,  -608,   405,   115,  -608,   649,  -608,
     329,   659,   329,   662,   663,   764,   765,  -608,   736,    68,
    -608,  -608,   556,   556,   556,   556,   556,    20,   367,   768,
     770,   556,   329,   556,   556,  -608,  -608,   771,   450,   679,
     329,  -608,   682,   353,   377,   353,  -608,   115,   787,    68,
    -608,   619,   402,   708,   329,    68,   709,   752,   346,  -608,
     726,   756,   758,   607,   723,   760,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,   761,   781,   762,   763,  -608,
    -608,   402,  -608,  -608,  -608,   346,   766,   767,   757,   353,
     564,  -608,  -608,  -608,  -608,  -608,  -608,  -608,    68,    68,
    -608,  -608,  -608,  -608,  -608,   264,  -608,  -608,   842,   844,
     848,   851,   852,   853,   772,   854,  -608,  -608,  -608,  -608,
     556,    68,    68,   856,   556,   857,   858,    68,   556,   859,
     556,   556,  -608,   556,  -608,  -608,   777,   809,   353,   267,
     842,   402,  -608,  -608,  -608,   842,  -608,   773,   556,   510,
     779,   780,   783,   784,   785,   860,  -608,   786,   840,  -608,
    -608,  -608,   510,  -608,  -608,  -608,   738,   697,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   684,  -608,  -608,   731,
    -608,   809,  -608,  -608,  -608,   184,   876,  -608,    68,    68,
      68,    68,    68,   556,    68,   875,  -608,  -608,    68,   877,
      68,    68,  -608,   878,    68,   879,   880,   881,  -608,   790,
     556,   809,  -608,  -608,  -608,  -608,  -608,   735,   884,  -608,
     785,   785,   785,   860,  -608,   785,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,   792,  -608,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   885,  -608,   -14,   695,   804,
    -608,   556,   440,   288,   842,   842,   842,   842,   842,   888,
     842,    68,  -608,    68,  -608,  -608,    68,   842,    68,    68,
      68,  -608,   889,   556,  -608,    68,   785,   785,   785,  -608,
    -608,   -26,   798,   799,   800,   801,   802,   803,   805,   806,
     807,   808,   697,  -608,  -608,   810,  -608,  -608,   896,   811,
     811,   811,  -608,  -608,  -608,  -608,  -608,    68,  -608,   842,
     842,   842,  -608,   842,   842,   842,    68,   901,   842,   821,
     822,  -608,   813,   814,   815,   816,   817,   818,   819,   820,
     823,   824,  -608,  -608,    68,    25,   914,   915,   918,   842,
    -608,  -608,  -608,  -608,  -608,  -608,   842,    68,  -608,   782,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,   842,  -608,   890,    68,    68,    68,  -608,  -608,   842,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -608,  -608,  -608,   913,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,   855,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,   825,   656,  -608,  -608,  -608,  -608,   834,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -226,  -470,   217,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,   483,   553,
     -66,  -193,  -192,  -343,   558,   474,  -608,   874,  -608,  -608,
    -608,  -608,  -608,   497,  -443,  -351,   409,  -608,   368,  -608,
    -608,  -608,    98,  -608,  -608,   157,   449,  -608,  -608,  -608,
    -131,  -608,  -105,  -581,   674,  -608,  -608,   693,   939,  -608,
    -189,  -268,   -77,   667,  -234,   705,   503,   724,   728,  -608,
     737,  -608,  -608,  -608,   621,  -608,  -608,   579,  -608,  -608,
    -608,  -200,  -608,  -608,  -170,  -608,  -339,    -2,  -304,  -608,
    -321,  -473,  -233,  -329,  -160,  -607,  -608,   615,  -608,  -608,
    -608,  -145,   187,  -608,   812,  -608,   242,   247,  -608,  -205
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -215
static const yytype_int16 yytable[] =
{
     196,   270,   351,   354,   351,   211,   360,   446,   328,   407,
     408,   446,   369,   704,   409,   410,   539,   440,   706,   540,
     541,   359,   542,   416,   341,   423,   189,   427,   459,   397,
     417,   418,   385,   809,   431,   432,   453,   341,   198,   376,
     250,   377,   371,   262,   263,   264,   265,   190,    91,   399,
      35,   497,    36,   594,    37,    38,   620,   451,    39,    50,
     852,   185,   625,    51,   454,   355,   138,   336,   455,   492,
     372,    40,    41,   347,   783,    42,   784,   501,   113,    43,
      52,   114,   495,   496,    53,   109,   395,   232,   543,   544,
     741,   397,    44,   520,    45,   509,   510,    54,   190,   417,
     418,   517,    65,    66,   253,   673,   674,   581,   582,    55,
     109,    58,   534,   498,    44,    67,   190,   413,   810,   583,
     763,   191,   853,    68,    69,    92,   584,   397,   686,   687,
     262,   263,   264,   265,   692,   199,    94,   792,   793,   794,
     795,   796,   442,   798,   311,   251,   703,   566,   567,   336,
     802,   443,   329,   330,   384,    93,   488,   190,   342,   491,
     385,   424,   348,   349,   568,   369,    56,   343,   489,   449,
     331,   489,   332,   589,   590,   591,   592,   593,   595,   425,
     343,   397,   603,    46,   605,   606,   709,   629,    47,   609,
     191,    70,   830,   831,   832,   371,   833,   834,   835,   722,
      71,   838,    72,   110,   545,   744,   745,   746,   747,   748,
     115,   750,   337,    57,   642,   752,    94,   754,   755,   447,
     547,   757,   857,   448,   419,   420,   338,   339,   209,   858,
      97,   191,   347,   111,   190,   139,    98,    48,   549,   190,
      99,   480,   585,   586,   861,   770,   100,   421,   548,   171,
     186,   102,   867,   101,    64,   312,   500,   103,   210,   313,
     314,   315,   316,   317,   192,   193,   550,   106,   489,   318,
     319,   685,   192,   193,   116,   689,   233,   562,   799,   693,
     800,   695,   696,   801,   697,   803,   804,   805,   519,   320,
      65,    66,   808,   329,   340,   117,   770,   770,   770,   708,
     489,   119,    44,    67,   172,   187,   581,   582,   191,   173,
     188,    68,    69,   191,   401,   118,   533,   444,   583,   482,
     120,   348,   349,   702,   829,   584,   445,   622,   489,   348,
     349,   234,   121,   836,   104,   105,   235,   276,   462,   463,
     197,     1,   200,   277,   122,   573,   278,   575,   464,   465,
     466,   851,   192,   193,   749,   204,   641,   190,   205,   402,
     403,   404,   405,   502,   859,   504,   247,   604,   419,   420,
     248,   762,   503,   532,   505,   611,   411,   412,   467,    70,
      65,    66,   313,   314,   315,   316,   317,   361,    71,   624,
      72,   421,    44,    67,   362,   363,   364,   303,   304,   446,
     256,    68,    69,   268,   561,   269,   557,   279,   280,   253,
     558,   559,   788,   201,   202,   203,   705,   272,   613,   274,
     617,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   276,   281,   282,   807,   283,   275,   277,   284,   299,
     278,   585,   586,     2,     3,     4,     5,     6,     7,     8,
       9,   563,   564,   565,   621,   285,   286,   513,   514,   157,
     287,   288,   301,   289,   671,   290,   308,   291,   292,    70,
     789,   790,   791,   293,   294,   295,   296,   302,    71,   305,
      72,   276,   742,   351,   766,   767,   768,   277,   306,   396,
     278,   257,   258,   259,   260,    65,    66,   262,   263,   264,
     265,   279,   280,   387,   388,   389,   390,    44,    67,   128,
     143,   161,   178,   701,   515,   516,    68,    69,   307,   675,
     596,   597,   598,   599,   551,   552,   281,   282,   309,   283,
     310,   276,   284,   863,   863,   863,   334,   277,   225,   240,
     278,   553,   554,   124,   141,   159,   176,   413,   608,   285,
     286,   279,   280,   345,   287,   288,   356,   289,   346,   290,
     358,   291,   292,   134,   147,   165,   182,   293,   294,   295,
     296,   214,   223,   238,   614,   615,   281,   282,   373,   283,
     374,   276,   284,   450,    70,   348,   349,   277,   174,   375,
     278,   380,   229,    71,   378,    72,   566,   567,   381,   285,
     286,   279,   280,   386,   287,   288,   393,   289,   398,   290,
     430,   291,   292,   125,   142,   160,   177,   293,   294,   295,
     296,   428,   865,   866,    65,    66,   281,   282,   429,   283,
     827,   828,   284,   481,   433,   424,    44,    67,   212,   434,
     436,   215,   224,   239,   236,    68,    69,   437,   439,   285,
     286,   279,   280,   413,   287,   288,   441,   289,   456,   290,
     458,   291,   292,   251,   461,   460,   477,   293,   294,   295,
     296,   478,   109,   483,    65,    66,   281,   282,   484,   283,
      65,    66,   284,   531,   485,   487,    44,    67,   493,   494,
     499,   507,    44,    67,   506,    68,    69,   508,   512,   285,
     286,    68,    69,   413,   287,   288,   511,   289,   518,   290,
     521,   291,   292,    70,   522,   524,   528,   293,   294,   295,
     296,   526,    71,   413,    72,   529,   530,   535,   313,   314,
     315,   316,   317,   361,   131,   144,   162,   179,   546,   536,
     362,   363,   364,   537,   312,   555,   560,   572,   313,   314,
     315,   316,   317,   132,   145,   163,   180,   574,   318,   319,
     576,   577,   216,   226,   241,   133,   146,   164,   181,   578,
     579,   580,    71,   601,    72,   602,   607,   610,    71,   612,
      72,   217,   227,   242,   135,   148,   166,   183,   136,   149,
     167,   184,   619,   218,   228,   243,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   623,   626,   627,   637,
     633,  -208,   219,   230,   244,   630,   220,   231,   245,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   631,   676,   632,   635,   678,
     636,   639,   640,   679,   643,   644,   680,   681,   682,   684,
     683,   688,   690,   691,   694,   698,   699,  -210,  -212,   720,
     707,  -214,   713,   714,   739,   719,   723,   737,   717,   743,
     751,   771,   753,   756,   758,   759,   760,   761,   764,   765,
     785,   782,   787,   797,   806,   812,   813,   814,   815,   816,
     817,   824,   818,   819,   820,   821,   837,   823,   825,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   854,
     855,   849,   850,   856,    59,   862,   810,   392,   208,   254,
     769,   538,   271,   457,   126,   527,   618,   860,   672,   822,
      49,   394,   414,   357,   452,   426,     0,     0,     0,     0,
       0,   335
};

static const yytype_int16 yycheck[] =
{
      66,   106,   194,   196,   196,    82,   211,   350,     7,   313,
     314,   354,   212,   620,   318,   319,   459,   346,   625,    19,
      20,   210,    22,   327,    42,   329,     7,   331,   379,   297,
      20,    21,   266,    59,   338,   339,   365,    42,    97,    88,
      44,    90,   212,    91,    92,    93,    94,    97,    12,    54,
       9,    35,    11,    33,    13,    14,   529,   361,    17,    95,
      35,    63,   535,    95,   368,   196,     3,     7,   372,   408,
     120,    30,    31,    56,    88,    34,    90,   416,    38,    38,
      95,    41,   411,   412,    95,    53,   275,    89,    88,    89,
     671,   359,    51,   432,    53,   424,   425,    95,    97,    20,
      21,   430,    39,    40,    56,   578,   579,    39,    40,    95,
      53,     0,   451,    97,    51,    52,    97,    97,   144,    51,
     701,   171,    97,    60,    61,    89,    58,   395,   601,   602,
      91,    92,    93,    94,   607,   194,    88,   744,   745,   746,
     747,   748,    88,   750,     7,   149,   619,    32,    33,     7,
     757,    97,   151,   152,   202,    97,    97,    97,   176,    97,
     394,   151,   145,   146,    49,   365,    95,   185,   109,   358,
     169,   109,   171,   502,   503,   504,   505,   506,   507,   169,
     185,   449,   511,   142,   513,   514,   629,   538,   147,   518,
     171,   128,   799,   800,   801,   365,   803,   804,   805,   642,
     137,   808,   139,   171,   204,   678,   679,   680,   681,   682,
     170,   684,   152,    95,   565,   688,    88,   690,   691,   350,
      27,   694,   829,   354,   145,   146,   166,   167,   171,   836,
      44,   171,    56,   201,    97,   172,    89,   196,    27,    97,
      89,   202,   174,   175,   851,   715,    97,   168,    55,    62,
      63,    90,   859,    89,     3,   118,    97,   201,   201,   122,
     123,   124,   125,   126,    88,    89,    55,   192,   109,   132,
     133,   600,    88,    89,    41,   604,    89,   482,   751,   608,
     753,   610,   611,   756,   613,   758,   759,   760,    97,   152,
      39,    40,   765,   151,   152,    41,   766,   767,   768,   628,
     109,    16,    51,    52,    62,    63,    39,    40,   171,    62,
      63,    60,    61,   171,   152,    41,    97,    88,    51,   396,
      41,   145,   146,    56,   797,    58,    97,   532,   109,   145,
     146,    89,    41,   806,   140,   141,    89,    50,    15,    16,
      90,     8,   194,    56,     3,   490,    59,   492,    25,    26,
      27,   824,    88,    89,   683,    96,   561,    97,    95,   197,
     198,   199,   200,    88,   837,    88,    10,   512,   145,   146,
      39,   700,    97,   450,    97,   520,   187,   188,    55,   128,
      39,    40,   122,   123,   124,   125,   126,   127,   137,   534,
     139,   168,    51,    52,   134,   135,   136,    88,    89,   742,
      97,    60,    61,    89,   481,    97,    24,   120,   121,    56,
      28,    29,   741,   129,   130,   131,   621,   190,   523,   201,
     525,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,    50,   145,   146,   763,   148,   201,    56,   151,    37,
      59,   174,   175,   110,   111,   112,   113,   114,   115,   116,
     117,    46,    47,    48,   531,   168,   169,    88,    89,     3,
     173,   174,    89,   176,   569,   178,    88,   180,   181,   128,
     182,   183,   184,   186,   187,   188,   189,    89,   137,    89,
     139,    50,   675,   675,   710,   711,   712,    56,    89,   202,
      59,   162,   163,   164,   165,    39,    40,    91,    92,    93,
      94,   120,   121,   157,   158,   159,   160,    51,    52,    60,
      61,    62,    63,   618,    88,    89,    60,    61,    89,   585,
     153,   154,   155,   156,    25,    26,   145,   146,    89,   148,
      89,    50,   151,   854,   855,   856,   171,    56,    89,    90,
      59,    25,    26,    60,    61,    62,    63,    97,    98,   168,
     169,   120,   121,    58,   173,   174,    35,   176,   179,   178,
     201,   180,   181,    60,    61,    62,    63,   186,   187,   188,
     189,    88,    89,    90,   197,   198,   145,   146,    88,   148,
      23,    50,   151,   202,   128,   145,   146,    56,     3,    97,
      59,    97,    89,   137,   150,   139,    32,    33,    43,   168,
     169,   120,   121,   141,   173,   174,   191,   176,    97,   178,
     189,   180,   181,    60,    61,    62,    63,   186,   187,   188,
     189,   170,   855,   856,    39,    40,   145,   146,   170,   148,
     790,   791,   151,   202,    88,   151,    51,    52,     3,    45,
     192,    88,    89,    90,     3,    60,    61,    44,    97,   168,
     169,   120,   121,    97,   173,   174,    97,   176,    97,   178,
      88,   180,   181,   149,    88,   153,    97,   186,   187,   188,
     189,   161,    53,    35,    39,    40,   145,   146,    89,   148,
      39,    40,   151,   202,    45,    97,    51,    52,    97,    97,
       5,    59,    51,    52,    97,    60,    61,    97,    97,   168,
     169,    60,    61,    97,   173,   174,    59,   176,    97,   178,
     177,   180,   181,   128,    36,   186,    35,   186,   187,   188,
     189,    97,   137,    97,   139,     5,   153,     5,   122,   123,
     124,   125,   126,   127,    60,    61,    62,    63,    88,    97,
     134,   135,   136,    97,   118,    24,    88,    98,   122,   123,
     124,   125,   126,    60,    61,    62,    63,    98,   132,   133,
      98,    98,    88,    89,    90,    60,    61,    62,    63,     5,
       5,    35,   137,     5,   139,     5,     5,    98,   137,    97,
     139,    88,    89,    90,    60,    61,    62,    63,    60,    61,
      62,    63,     5,    88,    89,    90,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    98,    98,    56,    28,
     203,    88,    88,    89,    90,    89,    88,    89,    90,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    89,     4,    89,    88,     5,
      89,    89,    89,     5,    88,    88,     5,     5,     5,     5,
      88,     5,     5,     5,     5,    88,    57,    88,    88,    29,
      97,    88,    88,    88,   143,    89,   138,   193,    18,     3,
       5,    89,     5,     5,     5,     5,     5,    97,   153,     5,
     195,     6,    88,     5,     5,    97,    97,    97,    97,    97,
      97,     5,    97,    97,    97,    97,     5,    97,    97,    88,
      88,    98,    98,    98,    98,    98,    98,    98,    98,     5,
       5,    98,    98,     5,    11,    35,   144,   271,    73,    95,
     713,   457,   107,   375,    60,   438,   527,   839,   570,   782,
       1,   274,   321,   206,   365,   330,    -1,    -1,    -1,    -1,
      -1,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   110,   111,   112,   113,   114,   115,   116,   117,
     206,   207,   208,   225,   226,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   240,   241,   242,   265,   266,   267,
     268,   269,   270,   271,   272,     9,    11,    13,    14,    17,
      30,    31,    34,    38,    51,    53,   142,   147,   196,   313,
      95,    95,    95,    95,    95,    95,    95,    95,     0,   208,
     209,   211,   213,   215,     3,    39,    40,    52,    60,    61,
     128,   137,   139,   217,   218,   273,   274,   282,   284,   301,
     309,   312,   313,   314,   320,   321,   322,   323,   219,   221,
     223,    12,    89,    97,    88,   243,   244,    44,    89,    89,
      97,    89,    90,   201,   140,   141,   192,   237,   238,    53,
     171,   201,   317,    38,    41,   170,    41,    41,    41,    16,
      41,    41,     3,   210,   273,   274,   282,   283,   301,   302,
     303,   309,   312,   320,   321,   322,   323,   327,     3,   172,
     212,   273,   274,   301,   309,   312,   320,   321,   322,   323,
     342,   351,   357,   358,   360,   361,   362,     3,   214,   273,
     274,   301,   309,   312,   320,   321,   322,   323,   353,   354,
     355,   357,   361,   362,     3,   216,   273,   274,   301,   309,
     312,   320,   321,   322,   323,   342,   357,   361,   362,     7,
      97,   171,    88,    89,   275,   277,   275,    90,    97,   194,
     194,   129,   130,   131,    96,    95,   324,   325,   218,   171,
     201,   317,     3,   220,   273,   274,   309,   312,   320,   322,
     323,   330,   222,   273,   274,   301,   309,   312,   320,   321,
     322,   323,   342,   357,   361,   362,     3,   224,   273,   274,
     301,   309,   312,   320,   322,   323,   326,    10,    39,   227,
      44,   149,   279,    56,   244,   307,    97,   162,   163,   164,
     165,   356,    91,    92,    93,    94,   318,   319,    89,    97,
     307,   238,   190,   239,   201,   201,    50,    56,    59,   120,
     121,   145,   146,   148,   151,   168,   169,   173,   174,   176,
     178,   180,   181,   186,   187,   188,   189,   315,   316,    37,
     364,    89,    89,    88,    89,    89,    89,    89,    88,    89,
      89,     7,   118,   122,   123,   124,   125,   126,   132,   133,
     152,   328,   329,   333,   336,   338,   339,   340,     7,   151,
     152,   169,   171,   359,   171,   359,     7,   152,   166,   167,
     152,    42,   176,   185,   285,    58,   179,    56,   145,   146,
     276,   277,   278,   305,   276,   305,    35,   325,   201,   315,
     364,   127,   134,   135,   136,   331,   332,   334,   335,   336,
     337,   339,   120,    88,    23,    97,    88,    90,   150,   280,
      97,    43,   281,   245,   202,   319,   141,   157,   158,   159,
     160,   290,   239,   191,   318,   315,   202,   316,    97,    54,
     287,   152,   197,   198,   199,   200,   343,   343,   343,   343,
     343,   187,   188,    97,   329,   348,   343,    20,    21,   145,
     146,   168,   352,   343,   151,   169,   352,   343,   170,   170,
     189,   343,   343,    88,    45,   363,   192,    44,   286,    97,
     348,    97,    88,    97,    88,    97,   278,   305,   305,   315,
     202,   343,   332,   348,   343,   343,    97,   279,    88,   290,
     153,    88,    15,    16,    25,    26,    27,    55,   246,   247,
     248,   249,   250,   251,   252,   253,   257,    97,   161,   289,
     202,   202,   317,    35,    89,    45,   288,    97,    97,   109,
     341,    97,   341,    97,    97,   348,   348,    35,    97,     5,
      97,   341,    88,    97,    88,    97,    97,    59,    97,   348,
     348,    59,    97,    88,    89,    88,    89,   348,    97,    97,
     341,   177,    36,   304,   186,   310,    97,   288,    35,     5,
     153,   202,   317,    97,   341,     5,    97,    97,   280,   289,
      19,    20,    22,    88,    89,   204,    88,    27,    55,    27,
      55,    25,    26,    25,    26,    24,   254,    24,    28,    29,
      88,   317,   364,    46,    47,    48,    32,    33,    49,   291,
     292,   293,    98,   356,    98,   356,    98,    98,     5,     5,
      35,    39,    40,    51,    58,   174,   175,   345,   346,   348,
     348,   348,   348,   348,    33,   348,   153,   154,   155,   156,
     344,     5,     5,   348,   356,   348,   348,     5,    98,   348,
      98,   356,    97,   307,   197,   198,   311,   307,   291,     5,
     346,   317,   364,    98,   356,   346,    98,    56,   306,   290,
      89,    89,    89,   203,   258,    88,    89,    28,   255,    89,
      89,   364,   290,    88,    88,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,   307,   293,   346,   346,   275,     4,   350,     5,     5,
       5,     5,     5,    88,     5,   348,   346,   346,     5,   348,
       5,     5,   346,   348,     5,   348,   348,   348,    88,    57,
     308,   307,    56,   346,   350,   364,   350,    97,   348,   289,
     259,   260,   261,    88,    88,   262,   263,    18,   264,    89,
      29,   256,   289,   138,   296,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   299,   300,   193,   294,   143,
     298,   308,   276,     3,   346,   346,   346,   346,   346,   348,
     346,     5,   346,     5,   346,   346,     5,   346,     5,     5,
       5,    97,   348,   308,   153,     5,   262,   262,   262,   264,
     263,    89,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,     6,    88,    90,   195,   295,    88,   348,   182,
     183,   184,   350,   350,   350,   350,   350,     5,   350,   346,
     346,   346,   350,   346,   346,   346,     5,   348,   346,    59,
     144,   297,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,   300,    97,     5,    97,   349,   349,   349,   346,
     350,   350,   350,   350,   350,   350,   346,     5,   350,    88,
      88,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,   346,    35,    97,     5,     5,     5,   350,   350,   346,
     297,   350,    35,   345,   347,   347,   347,   350
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 143:

/* Line 1455 of yacc.c  */
#line 482 "src/p.y"
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[(2) - (4)].string), &mailset, &Run.maillist);
                  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 486 "src/p.y"
    {
                    addmail((yyvsp[(2) - (7)].string), &mailset, &Run.maillist);
                  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 489 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(2) - (8)].string), &mailset, &Run.maillist);
                  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 495 "src/p.y"
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[(3) - (4)].number);
                      Run.startdelay = (yyvsp[(4) - (4)].number);
                    }
                  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 505 "src/p.y"
    { (yyval.number) = START_DELAY; }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 506 "src/p.y"
    { (yyval.number) = (yyvsp[(3) - (3)].number); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 509 "src/p.y"
    {
                    Run.expectbuffer = (yyvsp[(3) - (4)].number) * (yyvsp[(4) - (4)].number);
                  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 514 "src/p.y"
    {
                    Run.init = TRUE;
                  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 519 "src/p.y"
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 526 "src/p.y"
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[(3) - (3)].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 534 "src/p.y"
    {
                    setsyslog(NULL);
                  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 537 "src/p.y"
    {
                    setsyslog((yyvsp[(5) - (5)].string)); FREE((yyvsp[(5) - (5)].string));
                  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 542 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 545 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (6)].string);
                    Run.eventlist_slots = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 549 "src/p.y"
    {
                    Run.eventlist_dir = xstrdup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[(4) - (4)].number);
                  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 555 "src/p.y"
    {
                    Run.idfile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 560 "src/p.y"
    {
                    Run.statefile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 565 "src/p.y"
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[(3) - (3)].string));
                   }
                 }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 580 "src/p.y"
    {
                    check_hostname(((yyvsp[(1) - (4)].url))->hostname);
                    addmmonit((yyvsp[(1) - (4)].url), (yyvsp[(2) - (4)].number), (yyvsp[(3) - (4)].number), (yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 587 "src/p.y"
    {
                    Run.dommonitcredentials = FALSE;
                  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 592 "src/p.y"
    {
                   Run.mailserver_timeout = (yyvsp[(4) - (5)].number);
                   Run.mail_hostname = (yyvsp[(5) - (5)].string);
                  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 598 "src/p.y"
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : xstrdup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : xstrdup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : xstrdup(ALERT_MESSAGE);
                   reset_mailset();
                 }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 607 "src/p.y"
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[(4) - (5)].number);
                 }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 617 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = xstrdup((yyvsp[(1) - (5)].string));

                    check_hostname((yyvsp[(1) - (5)].string));
                    mailserverset.host = (yyvsp[(1) - (5)].string);
                    mailserverset.username = (yyvsp[(2) - (5)].string);
                    mailserverset.password = (yyvsp[(3) - (5)].string);
                    mailserverset.ssl.version = (yyvsp[(4) - (5)].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      if (mailserverset.ssl.version == SSL_VERSION_SSLV2 ||
                         mailserverset.ssl.version == SSL_VERSION_SSLV3)
                         mailserverset.port = PORT_SMTPS;
                      mailserverset.ssl.certmd5 = (yyvsp[(5) - (5)].string);
                    }
                    addmailserver(&mailserverset);
                  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 636 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = xstrdup((yyvsp[(1) - (7)].string));

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

  case 180:

/* Line 1455 of yacc.c  */
#line 665 "src/p.y"
    { Run.httpdssl = FALSE; }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 666 "src/p.y"
    { 
                    Run.httpdssl = TRUE;                   
                    if (!have_ssl())
                      yyerror("SSL is not supported");
                  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 680 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 681 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 685 "src/p.y"
    { Run.httpdsig = TRUE; }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 686 "src/p.y"
    { Run.httpdsig = FALSE; }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 697 "src/p.y"
    { Run.bind_addr = (yyvsp[(2) - (2)].string); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 700 "src/p.y"
    {
                    Run.httpsslpem = (yyvsp[(2) - (2)].string);
                    if (!file_checkStat(Run.httpsslpem, "SSL server PEM file", S_IRWXU))
                      yyerror2("SSL server PEM file has too loose permissions");
                  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 708 "src/p.y"
    {
                    Run.httpsslclientpem = (yyvsp[(2) - (2)].string); 
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 716 "src/p.y"
    { 
                   Run.allowselfcert = FALSE; 
                   config_ssl(Run.allowselfcert); 
                 }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 720 "src/p.y"
    {   
                    Run.allowselfcert = TRUE;
                    config_ssl(Run.allowselfcert); 
                  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 726 "src/p.y"
    {
                    addcredentials((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string), DIGEST_CLEARTEXT, (yyvsp[(5) - (5)].number));
                  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 729 "src/p.y"
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[(3) - (4)].string));
#endif
                  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 737 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(2) - (2)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 741 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 745 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 749 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 753 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(2) - (2)].string);
                    digesttype = CLEARTEXT;
                  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 757 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 760 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 764 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 767 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_MD5;
                  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 771 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 774 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CRYPT;
                  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 778 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 781 "src/p.y"
    {
                    if (! (add_net_allow((yyvsp[(2) - (2)].string)) || add_host_allow((yyvsp[(2) - (2)].string)))) {
                      yyerror2("erroneous network or host identifier %s", (yyvsp[(2) - (2)].string)); 
                    }
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 793 "src/p.y"
    { addhtpasswdentry(htpasswd_file, (yyvsp[(1) - (1)].string), digesttype);
                           FREE((yyvsp[(1) - (1)].string)); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 797 "src/p.y"
    { (yyval.number) = FALSE; }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 798 "src/p.y"
    { (yyval.number) = TRUE; }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 801 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 804 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 807 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 814 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 823 "src/p.y"
    {
                    createservice(TYPE_FILE, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_file);
                  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 828 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 833 "src/p.y"
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_directory);
                  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 838 "src/p.y"
    {
                    check_hostname((yyvsp[(4) - (4)].string)); 
                    createservice(TYPE_HOST, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_remote_host);
                  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 844 "src/p.y"
    {
                    createservice(TYPE_SYSTEM, (yyvsp[(2) - (2)].string), xstrdup(""), check_system);
                    hassystem = TRUE;
                  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 850 "src/p.y"
    {
                    createservice(TYPE_FIFO, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_fifo);
                  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 855 "src/p.y"
    {
                        check_exec((yyvsp[(4) - (4)].string));
                        createservice(TYPE_PROGRAM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_program);
                  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 861 "src/p.y"
    {
                    addcommand(START, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 864 "src/p.y"
    {
                    addcommand(START, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 869 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 872 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 885 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 886 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 889 "src/p.y"
    { addeuid( get_uid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 890 "src/p.y"
    { addegid( get_gid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 891 "src/p.y"
    { addeuid( get_uid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 892 "src/p.y"
    { addegid( get_gid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 895 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 896 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 897 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 900 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 901 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 904 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 905 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 909 "src/p.y"
    {
                    portset.timeout = (yyvsp[(7) - (12)].number);
                    portset.retry = (yyvsp[(8) - (12)].number);
                    addeventaction(&(portset).action, (yyvsp[(11) - (12)].number), (yyvsp[(12) - (12)].number));
                    addport(&portset);
                  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 916 "src/p.y"
    { 
                    prepare_urlrequest((yyvsp[(4) - (11)].url));
                    portset.timeout = (yyvsp[(6) - (11)].number);
                    portset.retry = (yyvsp[(7) - (11)].number);
                    addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addport(&portset);
                  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 926 "src/p.y"
    {
                   portset.timeout = (yyvsp[(6) - (11)].number);
                   portset.retry = (yyvsp[(7) - (11)].number);
                   addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                   addport(&portset);
                  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 935 "src/p.y"
    {
                   icmpset.type = (yyvsp[(4) - (10)].number);
                   icmpset.count = (yyvsp[(5) - (10)].number);
                   icmpset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(icmpset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addicmp(&icmpset);
                  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 944 "src/p.y"
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = xstrdup(current->path);
                    else
                      portset.hostname = xstrdup(LOCALHOST);
                  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 950 "src/p.y"
    { check_hostname((yyvsp[(2) - (2)].string)); portset.hostname = (yyvsp[(2) - (2)].string); }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 953 "src/p.y"
    { portset.port = (yyvsp[(2) - (2)].number); portset.family = AF_INET; }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 956 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string); portset.family = AF_UNIX;
                  }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 961 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 964 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 967 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[(3) - (4)].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 975 "src/p.y"
    {
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 980 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 981 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 984 "src/p.y"
    { (yyval.number) = SSL_VERSION_NONE; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 985 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV2; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 986 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV3; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 987 "src/p.y"
    { (yyval.number) = SSL_VERSION_TLS; }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 988 "src/p.y"
    { (yyval.number) = SSL_VERSION_AUTO; }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 991 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 994 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 997 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1000 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1003 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1006 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1009 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_HTTP);
                  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1012 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_IMAP);
                  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1015 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1018 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1021 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1024 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1027 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1030 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1033 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1037 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1040 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1043 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1046 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1049 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1052 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1055 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1058 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1061 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1064 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1067 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1070 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1073 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1082 "src/p.y"
    { addgeneric(&portset, (yyvsp[(2) - (2)].string), NULL); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1083 "src/p.y"
    { addgeneric(&portset, NULL, (yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1087 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1090 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1096 "src/p.y"
    {
                     portset.maxforward = verifyMaxForward((yyvsp[(2) - (2)].number)); 
                   }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1102 "src/p.y"
    { 
                    portset.request = Util_urlEncode((yyvsp[(2) - (3)].string)); 
                    FREE((yyvsp[(2) - (3)].string)); 
                  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1106 "src/p.y"
    {
                    portset.request = Util_urlEncode((yyvsp[(2) - (5)].string));
                    FREE((yyvsp[(2) - (5)].string));
                    portset.request_checksum = (yyvsp[(4) - (5)].string);
                  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1114 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1119 "src/p.y"
    { 
                    portset.request = (yyvsp[(2) - (2)].string); 
                  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1128 "src/p.y"
    { 
                    portset.ApacheStatus.loglimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.loglimit = (int)(yyvsp[(3) - (4)].number); 
                  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1132 "src/p.y"
    { 
                    portset.ApacheStatus.closelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.closelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1136 "src/p.y"
    { 
                    portset.ApacheStatus.dnslimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.dnslimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1140 "src/p.y"
    { 
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.keepalivelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1144 "src/p.y"
    { 
                    portset.ApacheStatus.replylimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.replylimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1148 "src/p.y"
    { 
                    portset.ApacheStatus.requestlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.requestlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1152 "src/p.y"
    { 
                    portset.ApacheStatus.startlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.startlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1156 "src/p.y"
    { 
                    portset.ApacheStatus.waitlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.waitlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1160 "src/p.y"
    { 
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.gracefullimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1164 "src/p.y"
    { 
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.cleanuplimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1170 "src/p.y"
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1176 "src/p.y"
    {
                    seteventaction(&(current)->action_PID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1181 "src/p.y"
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1186 "src/p.y"
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1189 "src/p.y"
    {    
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1194 "src/p.y"
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1197 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1202 "src/p.y"
    {
                   (yyval.number) = 600; // Default program status check timeout is 5 min
                  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1205 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1210 "src/p.y"
    {
                   (yyval.number) = NET_TIMEOUT;
                  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1213 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1218 "src/p.y"
    {
                   (yyval.number) = 1;
                  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1221 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1226 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1232 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1241 "src/p.y"
    {
                    seturlrequest((yyvsp[(2) - (3)].number), (yyvsp[(3) - (3)].string));
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1247 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1248 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1251 "src/p.y"
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[(1) - (3)].string), &mailset, &current->maillist);
                  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1255 "src/p.y"
    {
                   addmail((yyvsp[(1) - (6)].string), &mailset, &current->maillist);
                  }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1258 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(1) - (7)].string), &mailset, &current->maillist);
                  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1262 "src/p.y"
    {
                   addmail((yyvsp[(1) - (1)].string), &mailset, &current->maillist);
                  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1267 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1270 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1277 "src/p.y"
    { mailset.events |= Event_Action; }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1278 "src/p.y"
    { mailset.events |= Event_Checksum; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1279 "src/p.y"
    { mailset.events |= Event_Connection; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1280 "src/p.y"
    { mailset.events |= Event_Content; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1281 "src/p.y"
    { mailset.events |= Event_Data; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1282 "src/p.y"
    { mailset.events |= Event_Exec; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1283 "src/p.y"
    { mailset.events |= Event_Fsflag; }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1284 "src/p.y"
    { mailset.events |= Event_Gid; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1285 "src/p.y"
    { mailset.events |= Event_Icmp; }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1286 "src/p.y"
    { mailset.events |= Event_Instance; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1287 "src/p.y"
    { mailset.events |= Event_Invalid; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1288 "src/p.y"
    { mailset.events |= Event_Nonexist; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1289 "src/p.y"
    { mailset.events |= Event_Permission; }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1290 "src/p.y"
    { mailset.events |= Event_Pid; }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1291 "src/p.y"
    { mailset.events |= Event_PPid; }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1292 "src/p.y"
    { mailset.events |= Event_Resource; }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1293 "src/p.y"
    { mailset.events |= Event_Size; }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1294 "src/p.y"
    { mailset.events |= Event_Status; }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1295 "src/p.y"
    { mailset.events |= Event_Timeout; }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1296 "src/p.y"
    { mailset.events |= Event_Timestamp; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1297 "src/p.y"
    { mailset.events |= Event_Uid; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1308 "src/p.y"
    { mailset.from = (yyvsp[(1) - (1)].string); }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1309 "src/p.y"
    { mailset.replyto = (yyvsp[(1) - (1)].string); }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1310 "src/p.y"
    { mailset.subject = (yyvsp[(1) - (1)].string); }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1311 "src/p.y"
    { mailset.message = (yyvsp[(1) - (1)].string); }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1314 "src/p.y"
    {
                   current->every.type = EVERY_SKIPCYCLES;
                   current->every.spec.cycle.number = (yyvsp[(2) - (3)].number);
                 }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1318 "src/p.y"
    {
                   current->every.type = EVERY_CRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1322 "src/p.y"
    {
                   current->every.type = EVERY_NOTINCRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1328 "src/p.y"
    {
                    current->mode = MODE_ACTIVE;
                  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1331 "src/p.y"
    {
                    current->mode = MODE_PASSIVE;
                  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1334 "src/p.y"
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1340 "src/p.y"
    { addservicegroup((yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1351 "src/p.y"
    { adddependant((yyvsp[(1) - (1)].string)); }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1354 "src/p.y"
    {
                        programset.operator = (yyvsp[(3) - (9)].number);
                        programset.return_value = (yyvsp[(4) - (9)].number);
                        programset.timeout = (yyvsp[(5) - (9)].number);
                        addeventaction(&(programset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                        addprogram(&programset);
                   }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1363 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1379 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1395 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1400 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1407 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (4)].number);
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1414 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1415 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1416 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1419 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0)); 
                  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1424 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1429 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1434 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1441 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1446 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1453 "src/p.y"
    { 
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) (yyvsp[(3) - (3)].number); 
                  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1460 "src/p.y"
    { 
                    resourceset.resource_id = (yyvsp[(1) - (3)].number);
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (3)].real) * 10.0); 
                  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1467 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD1; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1468 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD5; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1469 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD15; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1472 "src/p.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1473 "src/p.y"
    { (yyval.real) = (float) (yyvsp[(1) - (1)].number); }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1476 "src/p.y"
    {
                    timestampset.operator = (yyvsp[(3) - (9)].number);
                    timestampset.time = ((yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(timestampset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addtimestamp(&timestampset, FALSE);
                  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1482 "src/p.y"
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1489 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1490 "src/p.y"
    { (yyval.number) = OPERATOR_GREATER; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1491 "src/p.y"
    { (yyval.number) = OPERATOR_LESS; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1492 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1493 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1494 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1497 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1498 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1499 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1500 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1501 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1504 "src/p.y"
    { (yyval.number) = ACTION_ALERT; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1505 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1506 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1507 "src/p.y"
    { (yyval.number) = ACTION_RESTART; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1508 "src/p.y"
    { (yyval.number) = ACTION_START; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1509 "src/p.y"
    { (yyval.number) = ACTION_STOP; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1510 "src/p.y"
    { (yyval.number) = ACTION_UNMONITOR; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1513 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1522 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1532 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (2)].number);
                    rate1.cycles = (yyvsp[(1) - (2)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1538 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (3)].number);
                    rate1.cycles = (yyvsp[(2) - (3)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1549 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (2)].number);
                    rate2.cycles = (yyvsp[(1) - (2)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1555 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (3)].number);
                    rate2.cycles = (yyvsp[(2) - (3)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1565 "src/p.y"
    {
                    (yyval.number) = ACTION_ALERT;
                  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1568 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1571 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1574 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1579 "src/p.y"
    {
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1584 "src/p.y"
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[(6) - (10)].string));
                    FREE((yyvsp[(6) - (10)].string));
                    addeventaction(&(checksumset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1590 "src/p.y"
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1596 "src/p.y"
    { checksumset.type = HASH_UNKNOWN; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1597 "src/p.y"
    { checksumset.type = HASH_MD5; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1598 "src/p.y"
    { checksumset.type = HASH_SHA1; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1601 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (8)].number);
                    filesystemset.limit_absolute = (yyvsp[(4) - (8)].number);
                    addeventaction(&(filesystemset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1608 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1617 "src/p.y"
    {
                    if (!filesystem_usage(current->inf, current->path))
                      yyerror2("cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_absolute = (int)((float)(yyvsp[(4) - (9)].real) / (float)current->inf->priv.filesystem.f_bsize * (float)(yyvsp[(5) - (9)].number));
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1626 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1635 "src/p.y"
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1640 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1641 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1642 "src/p.y"
    { (yyval.number) = UNIT_KILOBYTE; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1643 "src/p.y"
    { (yyval.number) = UNIT_MEGABYTE; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1644 "src/p.y"
    { (yyval.number) = UNIT_GIGABYTE; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1647 "src/p.y"
    {
                    permset.perm = check_perm((yyvsp[(4) - (8)].number));
                    addeventaction(&(permset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addperm(&permset);
                  }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 1654 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[(4) - (7)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[(7) - (7)].number));
                    FREE((yyvsp[(4) - (7)].string)); 
                  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 1661 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (7)].string);
                    addmatch(&matchset, (yyvsp[(7) - (7)].number), 0);
                  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 1667 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[(4) - (4)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 1674 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (4)].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 1682 "src/p.y"
    {
                    matchset.not = FALSE;
                  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 1685 "src/p.y"
    {
                    matchset.not = TRUE;
                  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 1691 "src/p.y"
    {
                    sizeset.operator = (yyvsp[(3) - (9)].number);
                    sizeset.size = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(sizeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addsize(&sizeset);
                  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 1697 "src/p.y"
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 1704 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 1710 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 1717 "src/p.y"
    {
                    gidset.gid = get_gid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 1723 "src/p.y"
    {
                    gidset.gid = get_gid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 1730 "src/p.y"
    { (yyval.number) = ICMP_ECHO; }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 1733 "src/p.y"
    { mailset.reminder = 0; }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 1734 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (2)].number); }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 1735 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (3)].number); }
    break;



/* Line 1455 of yacc.c  */
#line 5525 "src/y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 1738 "src/p.y"



/* -------------------------------------------------------- Parser interface */


/**
 * Syntactic error routine
 *
 * This routine is automatically called by the lexer!
 */
void yyerror(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogError("%s:%i: Error: %s '%s'\n", currentfile, lineno, msg, yytext);
  cfg_errflag++;
 
  FREE(msg);
  
}

/**
 * Syntactical warning routine
 */
void yywarning(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogWarning("%s:%i: Warning: %s '%s'\n", currentfile, lineno, msg, yytext);
 
  FREE(msg);
  
}

/**
 * Argument error routine
 */
void yyerror2(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogError("%s:%i: Error: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
  cfg_errflag++;
 
  FREE(msg);
  
}

/**
 * Argument warning routine
 */
void yywarning2(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogWarning("%s:%i: Warning: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
 
  FREE(msg);
  
}

/*
 * The Parser hook - start parsing the control file
 * Returns TRUE if parsing succeeded, otherwise FALSE
 */
int parse(char *controlfile) {

  ASSERT(controlfile);

  servicelist = tail = current = NULL;

  /*
   * Secure check the monitrc file. The run control file must have the
   * same uid as the REAL uid of this process, it must have permissions
   * no greater than 700 and it must not be a symbolic link.
   */
  if (! file_checkStat(controlfile, "control file", S_IRUSR|S_IWUSR|S_IXUSR))
    return FALSE;

  if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
    LogError("%s: Error: cannot open the control file '%s' -- %s\n", prog, controlfile, STRERROR);
    return FALSE;
  }

  currentfile = xstrdup(controlfile);

  /* 
   * Creation of the global service list is synchronized  
   */
  LOCK(Run.mutex)
    preparse();
    yyparse();
    fclose(yyin);
    /* Add the default general system service if not specified explicitly */
    if (!hassystem) {
      char *name = Util_getString("system_%s", Run.localhostname);
      if (Util_existService(name) || (current && IS(name, current->name))) {
        LogError("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", name, name);
        FREE(name);
        cfg_errflag++;
      } else {
        createservice(TYPE_SYSTEM, name, xstrdup(""), check_system);
      }
    }
    /* If defined - add the last service to the service list */
    if (current) {
      addservice(current);
      FREE(current);
    }
    postparse();
  END_LOCK;

  FREE(currentfile);

  if (argyytext != NULL)
    FREE(argyytext);

  return(cfg_errflag == 0);
}


/* ----------------------------------------------------------------- Private */


/**
 * Initialize objects used by the parser.
 */
static void preparse() {
  int i;
  char localhost[STRLEN];

  /*
   * Get the localhost name
   */
  if (Util_getfqdnhostname(localhost, sizeof(localhost)))
    snprintf(localhost, STRLEN, "%s", LOCALHOST);

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
  Run.mailserver_timeout  = NET_TIMEOUT;
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
  Run.localhostname       = xstrdup(localhost);
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
  reset_programset();
  reset_gidset();
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
        Service_T s;
        
        if (cfg_errflag || ! servicelist)
        return;
        
        /* Check the sanity of any dependency graph */
        check_depend();
        
        /* Check that we do not start monit in daemon mode without having a
         * poll time */
        if (!Run.polltime && (Run.isdaemon || Run.init)) {
                LogError("%s: Error: Poll time not defined. Please define poll time in the\n control file or use the -d option when starting monit\n", prog);
                cfg_errflag++;
        }
        
        if (Run.logfile)
        Run.dolog = TRUE;
        
        for (s = servicelist; s; s = s->next) {
                /* Set the general system service shortcut */
                if (s->type == TYPE_SYSTEM)
                        Run.system = s;
                else if (s->type == TYPE_HOST) {
                        /* Verify that a remote service has a port or an icmp list */
                        if (!s->portlist && !s->icmplist) {
                                LogError("%s: Error: 'check host' statement is incomplete; Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", prog, s->name);
                                cfg_errflag++;
                        }
                }
                else if (s->type == TYPE_PROGRAM) {
                        /* Verify that a program test has a status test */
                        if (! s->program) {
                                LogError("%s: Error: 'check program %s' is incomplete; Please add an 'if status != n' test\n", prog, s->name);
                                cfg_errflag++;
                        }
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
                                LogWarning("%s: Warning: M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n", prog);
                        }
                } else
                LogWarning("%s: Warning: M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n", prog);
        }
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static void createservice(int type, char *name, char *value, int (*check)(Service_T s)) {

  ASSERT(name);
  ASSERT(value);

  check_name(name);

  if (current) {
    addservice(current);
    memset(current, 0, sizeof(*current));
  } else {
    NEW(current);
  }

  current->type = type;

  NEW(current->inf);
  Util_resetInfo(current);

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
}


/*
 * Add a service object to the servicelist
 */
static void addservice(Service_T s) {
  Service_T n;

  ASSERT(s);
 
  NEW(n);
  memcpy(n, s, sizeof(*s));
  /* Add the service to the end of the service list */
  if (tail != NULL) {
    tail->next = n;
    tail->next_conf = n;
  } else {
    servicelist = n;
    servicelist_conf = n;
  }
  tail = n;
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
    g->name = xstrdup(name);
    g->next = servicegrouplist;
    servicegrouplist = g;
  }

  NEW(m);
  m->name = xstrdup(current->name);
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
      DEBUG("%s: Debug: the path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", prog, current->path);
    } else if (!(t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG))) {
      yyerror2("cannot get the timestamp for '%s'", current->path);
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
    yyerror2("the number of restarts must be less than poll cycles");
  if (ar->count <= 0 || ar->cycle <= 0)
    yyerror2("zero or negative values not allowed in a action rate statement");

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
    s->test_changes_ok = !stat(current->path, &buf);
    if (s->test_changes_ok)
      s->size = (unsigned long long)buf.st_size;
  }
 
  s->next = current->sizelist;
  current->sizelist = s;

  reset_sizeset();
}


/*
 * Set Checksum object in the current service
 */
static void addchecksum(Checksum_T cs) {

  int len;
  Checksum_T c;

  ASSERT(cs);

  cs->test_changes_ok = TRUE;

  if (! *cs->hash) {
    if (cs->type == HASH_UNKNOWN)
      cs->type = DEFAULT_HASH;
    if ( !(Util_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
      if (cs->test_changes == TRUE) {
        /* If the file doesn't exist and we're checking for checksum changes, set dummy value */
        cs->test_changes_ok = FALSE;
        snprintf(cs->hash, sizeof(cs->hash), "00000000000000000000000000000000");
      } else {
        yyerror2("cannot compute a checksum for file %s", current->path);
        reset_checksumset();
        return;
      }
    }
  }

  len = cleanup_hash_string(cs->hash);

  if (cs->type == HASH_UNKNOWN) {
    if (len == 32) {
      cs->type = HASH_MD5;
    } else if (len == 40) {
      cs->type = HASH_SHA1;
    } else {
      yyerror2("invalid checksum [%s] for file %s", cs->hash, current->path);
      reset_checksumset();
      return;
    }
  } else if (( cs->type == HASH_MD5 && len!=32 ) || ( cs->type == HASH_SHA1 && len != 40 )) {
    yyerror2("invalid checksum [%s] for file %s", cs->hash, current->path);
    reset_checksumset();
    return;
  }

  NEW(c);

  c->type            = cs->type;
  c->test_changes    = cs->test_changes;
  c->test_changes_ok = cs->test_changes_ok;
  c->action          = cs->action;
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

/*
 * Set Match object in the current service
 */
static void addmatch(Match_T ms, int actionnumber, int linenumber) {
  Match_T m;
  Match_T ml;
  int     reg_return;
  
  ASSERT(ms);

  NEW(m);
#ifdef HAVE_REGEX_H
  NEW(m->regex_comp);
#endif

  m->match_string = ms->match_string;
  m->match_path   = ms->match_path ? xstrdup(ms->match_path) : NULL;
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
      yyerror2("regex parsing error:%s on line %i of", errbuf, linenumber);
    else
      yyerror2("regex parsing error:%s", errbuf);
  }
#endif

  if (current->matchlist) {
    /* Find the end of the list */
    for (ml = current->matchlist; ml->next; ml = ml->next)
      ;

    ml->next = m;
    
  } else
    current->matchlist = m;
}


static void addmatchpath(Match_T ms, int actionnumber) {

  FILE *handle;
  command_t savecommand = NULL;
  char buf[2048];
  int linenumber = 0;

  ASSERT(ms->match_path);

  handle = fopen(ms->match_path, "r");
  if (handle == NULL) {
    yyerror2("cannot read regex match file (%s)", ms->match_path);
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

    ms->match_string = xstrdup(buf);

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
 * Set program object in the current service
 */
static void addprogram(Program_T program) {
        Program_T p;
        ASSERT(program);
        NEW(p);
        p->return_value = program->return_value;
        p->operator = program->operator;
        p->action = program->action;
        p->timeout = program->timeout;
        p->C = program->C;
        current->program = p;
        reset_programset();
}


/*
 * Set Uid object in the current service
 */
static void adduid(Uid_T us) {
  Uid_T u;

  ASSERT(us);

  NEW(u);
  u->uid       = us->uid;
  u->action    = us->action;
  current->uid = u;
  reset_uidset();
}


/*
 * Set Gid object in the current service
 */
static void addgid(Gid_T gs) {
  Gid_T g;

  ASSERT(gs);

  NEW(g);
  g->gid       = gs->gid;
  g->action    = gs->action;
  current->gid = g;
  reset_gidset();
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
    g->send = xstrdup(send);
    g->expect = NULL;
  } else if (expect != NULL) {
#ifdef HAVE_REGEX_H
    
    int   reg_return;
    NEW(g->expect);
    reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
    if (reg_return != 0) {
      char errbuf[STRLEN];
      regerror(reg_return, g->expect, errbuf, STRLEN);
      yyerror2("regex parsing error:%s", errbuf);
    }
#else
    g->expect = xstrdup(expect);
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
  case START: current->start = command; break;
  case STOP:  current->stop = command; break;
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
    yyerror("exceeded maximum number of program arguments");
  
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
  portset.hostname = xstrdup(U->hostname);
  check_hostname(portset.hostname);
  portset.port = U->port;
  portset.url_request = urlrequest;
  portset.type = SOCK_STREAM;
  portset.request = Util_getString("%s%s%s", U->path, U->query ? "?" : "", U->query ? U->query : "");
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
      yyerror2("regex parsing error: %s", errbuf);
    }
  }
#else
  urlrequest->regex = xstrdup(regex);
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
      yyerror("ssl check cannot be activated. SSL is not supported");
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
      yyerror2("requested user not found on the system");
      return(0);
    }

  } else {

    if ( (pwd = getpwuid(uid)) == NULL ) {
      yyerror2("requested uid not found on the system");
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
      yyerror2("requested group not found on the system");
      return(0);
    }

  } else {

    if ( (grd = getgrgid(gid)) == NULL ) {
      yyerror2("requested gid not found on the system");
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
    yyerror("uid statement requires root privileges");
}


/*
 * Add a new group id to the current command object.
 */
static void addegid(gid_t gid) {
  if (!getuid()) {
    command->has_gid = TRUE;
    command->gid = gid;
  } else
    yyerror("gid statement requires root privileges");
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
      yyerror2("cannot read htpasswd (%s)", filename);
    else
      yyerror2("cannot read htpasswd", filename);
    return;
  }
  
  while (!feof(handle)) {
    char *colonindex = NULL;
    int i;
    
    if (! fgets(buf, STRLEN, handle))
      continue;

    /* strip trailing non visible characters */
    for (i = (int)strlen(buf)-1; i >= 0; i--) {
      if ( buf[i] == ' '  || buf[i] == '\r' || buf[i] == '\n' || buf[i] == '\t' )
        buf[i] ='\0';
      else
        break;
    }

    if ( NULL == (colonindex = strchr(buf, ':')))
      continue;

    ht_passwd = xstrdup(colonindex+1);
    *colonindex = '\0';

    /* In case we have a file in /etc/passwd or /etc/shadow style we
     *  want to remove ":.*$" and Crypt and MD5 hashed dont have a colon
     */ 
    
    if ( (NULL != (colonindex = strchr(ht_passwd, ':'))) && ( dtype != DIGEST_CLEARTEXT) )
      *colonindex = '\0';

    ht_username = xstrdup(buf);

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
  
  DEBUG("%s: Adding PAM group '%s'.\n", prog, groupname); 

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
      yywarning2("credentials for user %s were already added, entry ignored", uname);
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
  
  DEBUG("%s: Debug: Adding credentials for user '%s'.\n", prog, uname); 
  
  return TRUE;
  
}


/*
 * Set the syslog and the facilities to be used
 */
static void setsyslog(char *facility) {

  if (!Run.logfile || ihp.logfile) {
    ihp.logfile = TRUE;
    setlogfile(xstrdup("syslog"));
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
      yyerror2("invalid syslog facility");
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
  urlrequest = NULL;
}


/*
 * Reset the Proc set to default values
 */
static void reset_resourceset() {
  resourceset.resource_id = 0;
  resourceset.limit = 0;
  resourceset.action = NULL;
  resourceset.operator = OPERATOR_EQUAL;
}


/*
 * Reset the Timestamp set to default values
 */
static void reset_timestampset() {
  timestampset.operator = OPERATOR_EQUAL;
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
  sizeset.operator = OPERATOR_EQUAL;
  sizeset.size = 0;
  sizeset.test_changes = FALSE;
  sizeset.action = NULL;
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
static void reset_programset() {
        programset.return_value = 0;
        programset.operator = OPERATOR_EQUAL;
        programset.action = NULL;
        programset.timeout = EXEC_TIMEOUT;
        programset.started = 0;
        programset.P = NULL;
        programset.C = NULL;
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
  filesystemset.operator = OPERATOR_EQUAL;
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
    yyerror2("service name conflict, %s already defined", name);
  if (name && *name == '/')		
          yyerror2("service name '%s' must not start with '/' -- ", name);	
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
    yyerror2("permission statements must have an octal value between 0 and 7777");

  return result;
}


/*
 * Check hostname 
 */
static void check_hostname(char *hostname) {

  ASSERT(hostname);

  if (!check_host(hostname))
    yywarning2("hostname did not resolve");
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
          LogError("%s: Error: Depend service '%s' is not defined in the control file\n", prog, d->dependant);
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
	LogError("%s: Error: Found a depend loop in the control file involving the service '%s'\n", prog, depends_on->name);
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
     copy->arg[i] = xstrdup(source->arg[i]);
  copy->arg[copy->length] = NULL;

  return copy;
}


