#include <config.h>
/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
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
  static struct mypid pidset;
  static struct mypid ppidset;
  static struct mystatus statusset;
  static struct myperm permset;
  static struct mysize sizeset;
  static struct myuptime uptimeset;
  static struct mynetlinkstatus netlinkstatusset;
  static struct mynetlinkspeed netlinkspeedset;
  static struct mynetlinksaturation netlinksaturationset;
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
  static void  addpid(Pid_T);
  static void  addppid(Pid_T);
  static void  addnetlinkstatus(Service_T, NetLinkStatus_T);
  static void  addnetlinkspeed(Service_T, NetLinkSpeed_T);
  static void  addnetlinksaturation(Service_T, NetLinkSaturation_T);
  static void  addbandwidth(Bandwidth_T *, Bandwidth_T);
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
  static void  reset_pidset();
  static void  reset_ppidset();
  static void  reset_netlinkstatusset();
  static void  reset_netlinkspeedset();
  static void  reset_netlinksaturationset();
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


/* Line 371 of yacc.c  */
#line 320 "src/y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
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
     NOTEQUAL = 482,
     EQUAL = 483,
     LESS = 484,
     GREATER = 485
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
#define NOTEQUAL 482
#define EQUAL 483
#define LESS 484
#define GREATER 485



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 278 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;


/* Line 387 of yacc.c  */
#line 831 "src/y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 859 "src/y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  182
/* YYNRULES -- Number of rules.  */
#define YYNRULES  583
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1090

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    42,    45,    48,    51,    54,    57,    60,    63,    66,
      67,    70,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   109,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   140,   142,   144,   146,
     147,   150,   152,   154,   156,   158,   160,   162,   164,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   183,   186,
     188,   190,   192,   194,   196,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   237,   239,   241,   243,   244,   247,
     249,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     269,   271,   273,   274,   277,   279,   281,   283,   285,   287,
     289,   291,   293,   295,   296,   299,   301,   303,   305,   307,
     309,   311,   313,   315,   317,   319,   321,   323,   325,   327,
     328,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   356,   364,   373,   378,   379,   383,   388,   391,
     394,   398,   402,   408,   413,   420,   425,   429,   433,   437,
     441,   444,   448,   453,   454,   457,   463,   469,   475,   477,
     480,   486,   494,   495,   498,   500,   502,   504,   506,   509,
     512,   513,   516,   518,   520,   522,   525,   528,   531,   534,
     536,   538,   541,   544,   547,   550,   553,   556,   559,   561,
     567,   572,   575,   579,   583,   587,   588,   593,   594,   600,
     601,   607,   608,   614,   617,   619,   622,   624,   625,   627,
     632,   637,   642,   647,   652,   657,   662,   667,   672,   677,
     682,   685,   690,   696,   703,   707,   712,   716,   721,   725,
     730,   732,   735,   737,   740,   742,   744,   747,   750,   753,
     756,   757,   760,   763,   764,   767,   768,   771,   785,   797,
     809,   820,   830,   831,   834,   837,   840,   841,   844,   849,
     852,   853,   856,   857,   859,   861,   863,   865,   867,   869,
     870,   874,   877,   880,   883,   886,   890,   894,   897,   900,
     903,   906,   909,   912,   915,   920,   923,   926,   929,   932,
     935,   938,   941,   944,   947,   950,   953,   956,   959,   962,
     965,   969,   972,   976,   978,   980,   983,   986,   989,   991,
     994,   997,  1000,  1003,  1006,  1007,  1010,  1013,  1014,  1017,
    1018,  1021,  1023,  1025,  1027,  1029,  1033,  1037,  1040,  1043,
    1046,  1047,  1050,  1053,  1055,  1059,  1064,  1069,  1074,  1079,
    1084,  1089,  1094,  1099,  1104,  1109,  1117,  1124,  1131,  1141,
    1142,  1145,  1146,  1150,  1151,  1155,  1156,  1160,  1161,  1164,
    1172,  1180,  1181,  1185,  1187,  1189,  1193,  1200,  1208,  1210,
    1213,  1216,  1218,  1221,  1223,  1225,  1227,  1229,  1231,  1233,
    1235,  1237,  1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,
    1255,  1257,  1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,
    1275,  1277,  1279,  1280,  1285,  1287,  1290,  1292,  1294,  1296,
    1298,  1302,  1305,  1308,  1311,  1314,  1317,  1320,  1323,  1325,
    1328,  1330,  1339,  1346,  1353,  1355,  1358,  1360,  1362,  1364,
    1366,  1373,  1375,  1378,  1380,  1382,  1384,  1386,  1391,  1396,
    1401,  1403,  1405,  1407,  1412,  1417,  1422,  1427,  1432,  1437,
    1441,  1445,  1447,  1449,  1451,  1453,  1455,  1465,  1472,  1473,
    1475,  1477,  1479,  1481,  1483,  1484,  1486,  1488,  1490,  1492,
    1494,  1496,  1498,  1500,  1501,  1503,  1505,  1508,  1512,  1514,
    1516,  1518,  1520,  1522,  1524,  1525,  1528,  1532,  1533,  1536,
    1540,  1541,  1548,  1555,  1562,  1571,  1582,  1590,  1591,  1593,
    1595,  1604,  1614,  1624,  1634,  1641,  1642,  1644,  1646,  1648,
    1650,  1659,  1667,  1675,  1680,  1685,  1686,  1688,  1698,  1705,
    1714,  1723,  1732,  1741,  1750,  1759,  1767,  1775,  1785,  1796,
    1808,  1821,  1832,  1844,  1857,  1868,  1880,  1893,  1904,  1916,
    1929,  1932,  1933,  1936
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     238,     0,    -1,    -1,   239,    -1,   240,    -1,   239,   240,
      -1,   259,    -1,   260,    -1,   265,    -1,   266,    -1,   270,
      -1,   274,    -1,   275,    -1,   276,    -1,   269,    -1,   267,
      -1,   268,    -1,   262,    -1,   263,    -1,   264,    -1,   301,
     241,    -1,   302,   243,    -1,   303,   245,    -1,   304,   247,
      -1,   305,   249,    -1,   307,   253,    -1,   308,   255,    -1,
     309,   257,    -1,   306,   251,    -1,    -1,   241,   242,    -1,
     310,    -1,   311,    -1,   312,    -1,   346,    -1,   347,    -1,
     348,    -1,   409,    -1,   410,    -1,   411,    -1,   349,    -1,
     320,    -1,   321,    -1,   355,    -1,   358,    -1,   366,    -1,
     367,    -1,   368,    -1,   369,    -1,   373,    -1,    -1,   243,
     244,    -1,   310,    -1,   311,    -1,   312,    -1,   346,    -1,
     388,    -1,   355,    -1,   366,    -1,   358,    -1,   405,    -1,
     409,    -1,   411,    -1,   399,    -1,   408,    -1,   406,    -1,
     367,    -1,   368,    -1,   369,    -1,    -1,   245,   246,    -1,
     310,    -1,   311,    -1,   312,    -1,   346,    -1,   355,    -1,
     366,    -1,   358,    -1,   405,    -1,   409,    -1,   411,    -1,
     367,    -1,   368,    -1,   369,    -1,   401,    -1,   402,    -1,
     403,    -1,    -1,   247,   248,    -1,   310,    -1,   311,    -1,
     312,    -1,   346,    -1,   388,    -1,   355,    -1,   366,    -1,
     358,    -1,   405,    -1,   409,    -1,   411,    -1,   367,    -1,
     368,    -1,   369,    -1,   250,    -1,   249,   250,    -1,   310,
      -1,   311,    -1,   312,    -1,   346,    -1,   320,    -1,   322,
      -1,   355,    -1,   358,    -1,   366,    -1,   367,    -1,   368,
      -1,   369,    -1,    -1,   251,   252,    -1,   310,    -1,   311,
      -1,   312,    -1,   412,    -1,   413,    -1,   414,    -1,   415,
      -1,   416,    -1,   355,    -1,   366,    -1,   358,    -1,   368,
      -1,   369,    -1,    -1,   253,   254,    -1,   310,    -1,   311,
      -1,   312,    -1,   355,    -1,   358,    -1,   366,    -1,   368,
      -1,   369,    -1,   376,    -1,    -1,   255,   256,    -1,   310,
      -1,   311,    -1,   312,    -1,   346,    -1,   388,    -1,   355,
      -1,   366,    -1,   358,    -1,   405,    -1,   409,    -1,   411,
      -1,   367,    -1,   368,    -1,   369,    -1,    -1,   257,   258,
      -1,   310,    -1,   311,    -1,   312,    -1,   355,    -1,   346,
      -1,   358,    -1,   366,    -1,   368,    -1,   369,    -1,   372,
      -1,     8,   359,   363,   418,    -1,     8,   359,   231,   361,
     232,   363,   418,    -1,     8,   359,   198,   231,   361,   232,
     363,   418,    -1,     8,    11,   117,   261,    -1,    -1,    52,
      23,   117,    -1,     8,    47,   117,   404,    -1,     8,    17,
      -1,     8,   226,    -1,     8,     9,   109,    -1,     8,     9,
      12,    -1,     8,     9,    12,    10,   108,    -1,     8,   165,
     163,   109,    -1,     8,   165,   163,   109,   164,   117,    -1,
       8,   165,   164,   117,    -1,     8,    43,   109,    -1,     8,
      44,   109,    -1,     8,    51,   109,    -1,     8,   171,   271,
      -1,   272,   273,    -1,   271,   272,   273,    -1,   221,   353,
     328,   327,    -1,    -1,   219,   220,    -1,     8,    13,   277,
     353,   319,    -1,     8,    66,   231,   364,   232,    -1,     8,
      14,    57,   117,   279,    -1,   278,    -1,   277,   278,    -1,
     108,   317,   318,   328,   327,    -1,   108,    57,   117,   317,
     318,   328,   327,    -1,    -1,   279,   280,    -1,   281,    -1,
     286,    -1,   289,    -1,   293,    -1,   285,   282,    -1,   284,
     282,    -1,    -1,   282,   283,    -1,   290,    -1,   291,    -1,
     292,    -1,    27,    25,    -1,    25,    27,    -1,    27,    26,
      -1,    26,    27,    -1,   287,    -1,   288,    -1,    68,    25,
      -1,    25,    68,    -1,    68,    26,    -1,    26,    68,    -1,
      16,   108,    -1,    24,   109,    -1,    28,   109,    -1,    29,
      -1,    15,   108,   233,   108,   300,    -1,    15,   234,   108,
     300,    -1,    15,   109,    -1,    15,    19,   109,    -1,    15,
      20,   109,    -1,    15,    22,   109,    -1,    -1,    15,   109,
     294,   298,    -1,    -1,    15,    19,   109,   295,   298,    -1,
      -1,    15,    20,   109,   296,   298,    -1,    -1,    15,    22,
     109,   297,   298,    -1,    15,   108,    -1,   299,    -1,   298,
     299,    -1,   108,    -1,    -1,    18,    -1,   130,   115,    51,
     109,    -1,   130,   115,    54,   109,    -1,   130,   115,   197,
     108,    -1,   130,   115,   197,   109,    -1,   132,   115,    54,
     109,    -1,   131,   115,    54,   109,    -1,   131,   115,    54,
     108,    -1,   133,   115,    54,   109,    -1,   134,   115,    16,
     108,    -1,   138,   115,    16,   108,    -1,   138,   115,    30,
     108,    -1,   135,   115,    -1,   136,   115,    54,   109,    -1,
     137,   115,    54,   313,   352,    -1,   137,   115,    54,   313,
     314,   352,    -1,    52,   313,   351,    -1,    52,   313,   314,
     351,    -1,    53,   313,   351,    -1,    53,   313,   314,   351,
      -1,    71,   313,   351,    -1,    71,   313,   314,   351,    -1,
     315,    -1,   313,   315,    -1,   316,    -1,   314,   316,    -1,
     108,    -1,   109,    -1,   168,   108,    -1,   170,   108,    -1,
     168,   117,    -1,   170,   117,    -1,    -1,   173,   110,    -1,
     173,   108,    -1,    -1,   174,   108,    -1,    -1,    56,   108,
      -1,     3,     7,   323,   324,   326,   329,   356,   353,   354,
     396,     5,   394,   398,    -1,     3,     7,   214,   221,   356,
     353,   354,   396,     5,   394,   398,    -1,     3,     7,   325,
     326,   329,   353,   354,   396,     5,   394,   398,    -1,     3,
       7,   205,   417,   350,   353,   396,     5,   394,   398,    -1,
       3,     7,   204,   350,   353,   396,     5,   394,   398,    -1,
      -1,    55,   108,    -1,    57,   117,    -1,    67,   109,    -1,
      -1,    58,    60,    -1,    58,    61,   328,   327,    -1,    58,
      59,    -1,    -1,   188,   108,    -1,    -1,   183,    -1,   184,
      -1,   185,    -1,   186,    -1,   187,    -1,   182,    -1,    -1,
      62,    78,   344,    -1,    62,    75,    -1,    62,    89,    -1,
      62,    92,    -1,    62,    79,    -1,    62,    76,   336,    -1,
      62,    77,   336,    -1,    62,    83,    -1,    62,    84,    -1,
      62,    85,    -1,    62,    93,    -1,    62,    94,    -1,    62,
     106,    -1,    62,    88,    -1,    62,   100,   334,   335,    -1,
      62,    86,    -1,    62,    87,    -1,    62,    99,    -1,    62,
      82,    -1,    62,   107,    -1,    62,    80,    -1,    62,    81,
      -1,    62,    91,    -1,    62,    95,    -1,    62,   105,    -1,
      62,    96,    -1,    62,    97,    -1,    62,    98,    -1,    62,
     101,    -1,    62,   102,    -1,    62,   103,   343,    -1,    62,
     104,    -1,    62,    90,   332,    -1,   330,    -1,   331,    -1,
     330,   331,    -1,    45,   108,    -1,    46,   108,    -1,   333,
      -1,   332,   333,    -1,   142,   108,    -1,   161,   109,    -1,
      55,   108,    -1,   143,   117,    -1,    -1,   222,   110,    -1,
     222,   108,    -1,    -1,   225,   117,    -1,    -1,   336,   337,
      -1,   339,    -1,   340,    -1,   338,    -1,   341,    -1,   235,
     342,   236,    -1,   141,   389,   117,    -1,   161,   109,    -1,
      72,   108,    -1,   167,   108,    -1,    -1,   342,   224,    -1,
     166,   108,    -1,   345,    -1,   344,     6,   345,    -1,   119,
     389,   117,   118,    -1,   120,   389,   117,   118,    -1,   121,
     389,   117,   118,    -1,   122,   389,   117,   118,    -1,   123,
     389,   117,   118,    -1,   124,   389,   117,   118,    -1,   125,
     389,   117,   118,    -1,   126,   389,   117,   118,    -1,   127,
     389,   117,   118,    -1,   128,   389,   117,   118,    -1,     3,
     198,   208,   396,     5,   394,   398,    -1,     3,   176,   216,
     396,     5,   394,    -1,     3,   176,   217,   396,     5,   394,
      -1,     3,   201,   389,   117,   390,   396,     5,   394,   398,
      -1,    -1,    49,   117,    -1,    -1,    69,   117,   177,    -1,
      -1,    69,   117,   177,    -1,    -1,    69,   117,   177,    -1,
      -1,    70,   117,    -1,     3,   117,    71,   117,    48,     5,
     394,    -1,     3,   117,    71,   117,    48,     5,    69,    -1,
      -1,   215,   357,   108,    -1,   228,    -1,   227,    -1,   359,
     363,   418,    -1,   359,   231,   361,   232,   363,   418,    -1,
     359,   198,   231,   361,   232,   363,   418,    -1,   360,    -1,
      64,   110,    -1,    65,   110,    -1,   362,    -1,   361,   362,
      -1,   200,    -1,    34,    -1,    35,    -1,    72,    -1,    63,
      -1,   215,    -1,   210,    -1,   202,    -1,   218,    -1,   170,
      -1,   205,    -1,   172,    -1,   209,    -1,    31,    -1,   207,
      -1,    36,    -1,    37,    -1,   195,    -1,   216,    -1,   217,
      -1,   144,    -1,    39,    -1,   196,    -1,    38,    -1,   141,
      -1,    69,    -1,   175,    -1,   168,    -1,   201,    -1,    -1,
      66,   231,   364,   232,    -1,   365,    -1,   364,   365,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,    73,   117,
      48,    -1,    73,   223,    -1,    74,   223,    -1,   151,   152,
      -1,   151,   153,    -1,   151,   154,    -1,   160,   116,    -1,
     162,   370,    -1,   371,    -1,   370,   371,    -1,   115,    -1,
       3,   141,   389,   117,   396,     5,   394,   398,    -1,     3,
     176,   141,   396,     5,   394,    -1,     3,   374,   396,     5,
     394,   398,    -1,   375,    -1,   374,   375,    -1,   379,    -1,
     382,    -1,   384,    -1,   385,    -1,     3,   377,   396,     5,
     394,   398,    -1,   378,    -1,   377,   378,    -1,   385,    -1,
     382,    -1,   383,    -1,   380,    -1,   155,   389,   117,   118,
      -1,   156,   389,   117,   118,    -1,   381,   389,   117,   118,
      -1,   157,    -1,   158,    -1,   159,    -1,   145,   389,   387,
     404,    -1,   145,   389,   117,   118,    -1,   146,   389,   387,
     404,    -1,   146,   389,   117,   118,    -1,   150,   389,   387,
     404,    -1,   150,   389,   117,   118,    -1,   139,   389,   117,
      -1,   386,   389,   387,    -1,   147,    -1,   148,    -1,   149,
      -1,   129,    -1,   117,    -1,     3,   175,   389,   117,   390,
     396,     5,   394,   398,    -1,     3,   176,   175,   396,     5,
     394,    -1,    -1,   230,    -1,   229,    -1,   228,    -1,   227,
      -1,   176,    -1,    -1,   177,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   178,    -1,   179,    -1,   180,    -1,
      -1,   177,    -1,    64,    -1,   202,   313,    -1,   202,   313,
     314,    -1,    71,    -1,    52,    -1,    53,    -1,   203,    -1,
     393,    -1,   393,    -1,    -1,   117,    48,    -1,   117,   117,
      48,    -1,    -1,   117,    48,    -1,   117,   117,    48,    -1,
      -1,     4,     3,   211,   397,     5,   395,    -1,     4,     3,
     212,   397,     5,   395,    -1,     4,     3,   213,   397,     5,
     395,    -1,     3,     7,   400,    72,   396,     5,   394,   398,
      -1,     3,     7,   400,    72,    46,   108,   396,     5,   394,
     398,    -1,     3,   176,   400,    72,   396,     5,   394,    -1,
      -1,    20,    -1,    21,    -1,     3,   193,   389,   117,   396,
       5,   394,   398,    -1,     3,   193,   389,   117,   118,   396,
       5,   394,   398,    -1,     3,   194,   389,   387,   404,   396,
       5,   394,   398,    -1,     3,   194,   389,   117,   118,   396,
       5,   394,   398,    -1,     3,   176,   218,   396,     5,   394,
      -1,    -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,
       3,     7,   195,   117,   396,     5,   394,   398,    -1,     3,
     407,   197,   109,   396,     5,   394,    -1,     3,   407,   197,
     108,   396,     5,   394,    -1,   199,   407,   197,   109,    -1,
     199,   407,   197,   108,    -1,    -1,   198,    -1,     3,   196,
     389,   117,   404,   396,     5,   394,   398,    -1,     3,   176,
     196,   396,     5,   394,    -1,     3,     7,   168,   108,   396,
       5,   394,   398,    -1,     3,     7,   168,   117,   396,     5,
     394,   398,    -1,     3,     7,   169,   108,   396,     5,   394,
     398,    -1,     3,     7,   169,   117,   396,     5,   394,   398,
      -1,     3,     7,   170,   108,   396,     5,   394,   398,    -1,
       3,     7,   170,   117,   396,     5,   394,   398,    -1,     3,
       7,    31,   396,     5,   394,   398,    -1,     3,   176,    31,
     396,     5,   394,   398,    -1,     3,    39,   389,   117,   118,
     396,     5,   394,   398,    -1,     3,    40,   389,   117,   404,
     392,   396,     5,   394,   398,    -1,     3,    42,    40,   389,
     117,   404,   391,   396,     5,   394,   398,    -1,     3,    42,
      40,   389,   117,   404,   117,   391,   396,     5,   394,   398,
      -1,     3,    40,   389,   117,    32,   392,   396,     5,   394,
     398,    -1,     3,    42,    40,   389,   117,    32,   391,   396,
       5,   394,   398,    -1,     3,    42,    40,   389,   117,    32,
     117,   391,   396,     5,   394,   398,    -1,     3,    41,   389,
     117,   404,   392,   396,     5,   394,   398,    -1,     3,    42,
      41,   389,   117,   404,   391,   396,     5,   394,   398,    -1,
       3,    42,    41,   389,   117,   404,   117,   391,   396,     5,
     394,   398,    -1,     3,    41,   389,   117,    32,   392,   396,
       5,   394,   398,    -1,     3,    42,    41,   389,   117,    32,
     391,   396,     5,   394,   398,    -1,     3,    42,    41,   389,
     117,    32,   117,   391,   396,     5,   394,   398,    -1,    58,
     206,    -1,    -1,    50,   117,    -1,    50,   117,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   325,   325,   326,   329,   330,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   358,
     359,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     383,   384,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   406,
     407,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   428,   429,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   448,   449,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   466,   467,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   485,   486,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   500,   501,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   520,
     521,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   536,   540,   543,   549,   559,   560,   563,   570,   575,
     582,   590,   593,   598,   601,   605,   611,   616,   621,   629,
     632,   633,   636,   642,   643,   648,   655,   664,   670,   671,
     674,   692,   711,   712,   715,   716,   717,   718,   721,   724,
     735,   736,   739,   740,   741,   744,   745,   748,   749,   752,
     753,   756,   757,   760,   761,   764,   767,   772,   780,   785,
     788,   796,   800,   804,   808,   812,   812,   819,   819,   826,
     826,   833,   833,   840,   848,   849,   852,   856,   857,   860,
     863,   866,   873,   882,   887,   890,   895,   900,   906,   914,
     920,   932,   937,   944,   953,   956,   961,   964,   970,   973,
     978,   979,   982,   983,   986,   987,   990,   991,   992,   993,
     996,   997,   998,  1001,  1002,  1005,  1006,  1009,  1021,  1031,
    1040,  1047,  1056,  1062,  1065,  1068,  1073,  1076,  1079,  1087,
    1092,  1093,  1096,  1097,  1098,  1099,  1100,  1107,  1114,  1117,
    1120,  1123,  1126,  1129,  1132,  1135,  1138,  1144,  1147,  1153,
    1156,  1159,  1162,  1165,  1168,  1171,  1174,  1178,  1181,  1184,
    1187,  1190,  1196,  1199,  1202,  1205,  1208,  1211,  1214,  1217,
    1220,  1223,  1226,  1229,  1234,  1235,  1238,  1241,  1246,  1247,
    1250,  1253,  1256,  1259,  1264,  1265,  1268,  1273,  1274,  1279,
    1280,  1283,  1284,  1285,  1286,  1287,  1290,  1296,  1302,  1307,
    1312,  1313,  1321,  1326,  1327,  1330,  1334,  1338,  1342,  1346,
    1350,  1354,  1358,  1362,  1366,  1372,  1378,  1384,  1390,  1397,
    1400,  1405,  1408,  1413,  1416,  1421,  1424,  1429,  1432,  1437,
    1443,  1451,  1452,  1458,  1459,  1462,  1466,  1469,  1473,  1478,
    1481,  1484,  1485,  1488,  1489,  1490,  1491,  1492,  1493,  1494,
    1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,
    1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,
    1515,  1516,  1519,  1520,  1523,  1524,  1527,  1528,  1529,  1530,
    1533,  1537,  1541,  1547,  1550,  1553,  1559,  1563,  1566,  1567,
    1570,  1573,  1580,  1589,  1595,  1596,  1599,  1600,  1601,  1602,
    1605,  1611,  1612,  1615,  1616,  1617,  1618,  1621,  1626,  1633,
    1640,  1641,  1642,  1645,  1650,  1655,  1660,  1667,  1672,  1679,
    1686,  1693,  1694,  1695,  1698,  1699,  1702,  1708,  1715,  1716,
    1717,  1718,  1719,  1720,  1723,  1724,  1725,  1726,  1727,  1728,
    1731,  1732,  1733,  1735,  1736,  1738,  1739,  1740,  1741,  1742,
    1743,  1744,  1747,  1756,  1765,  1766,  1772,  1782,  1783,  1789,
    1799,  1802,  1805,  1808,  1813,  1817,  1824,  1830,  1831,  1832,
    1835,  1842,  1851,  1860,  1869,  1874,  1875,  1876,  1877,  1878,
    1881,  1888,  1895,  1901,  1908,  1916,  1919,  1925,  1931,  1938,
    1944,  1951,  1957,  1964,  1970,  1977,  1983,  1988,  1996,  2004,
    2012,  2020,  2028,  2036,  2046,  2054,  2062,  2070,  2078,  2086,
    2096,  2099,  2100,  2101
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
  "HTTPHEADER", "MAXFORWARD", "FIPS", "NOTEQUAL", "EQUAL", "LESS",
  "GREATER", "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept",
  "cfgfile", "statement_list", "statement", "optproclist", "optproc",
  "optfilelist", "optfile", "optfilesyslist", "optfilesys", "optdirlist",
  "optdir", "opthostlist", "opthost", "optnetlist", "optnet",
  "optsystemlist", "optsystem", "optfifolist", "optfifo", "optstatuslist",
  "optstatus", "setalert", "setdaemon", "startdelay", "setexpectbuffer",
  "setinit", "setfips", "setlog", "seteventqueue", "setidfile",
  "setstatefile", "setpid", "setmmonits", "mmonitlist", "mmonit",
  "credentials", "setmailservers", "setmailformat", "sethttpd",
  "mailserverlist", "mailserver", "httpdlist", "httpdoption", "ssl",
  "optssllist", "optssl", "sslenable", "ssldisable", "signature",
  "sigenable", "sigdisable", "bindaddress", "pemfile", "clientpemfile",
  "allowselfcert", "allow", "$@1", "$@2", "$@3", "$@4", "allowuserlist",
  "allowuser", "readonly", "checkproc", "checkfile", "checkfilesys",
  "checkdir", "checkhost", "checknet", "checksystem", "checkfifo",
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
  "resourceloadavg", "value", "timestamp", "operator", "time", "totaltime",
  "currenttime", "action", "action1", "action2", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "fsflag", "unit",
  "permission", "match", "matchflagnot", "size", "uid", "euid", "gid",
  "netlinkstatus", "netlinkspeed", "netlinksaturation", "upload",
  "download", "icmptype", "reminder", YY_NULL
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
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   123,   125,    58,    64,    91,    93
};
# endif

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
     246,   246,   246,   246,   246,   246,   246,   247,   247,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   249,   249,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   251,   251,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   253,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   259,   260,   261,   261,   262,   263,   264,
     265,   265,   265,   266,   266,   266,   267,   268,   269,   270,
     271,   271,   272,   273,   273,   274,   275,   276,   277,   277,
     278,   278,   279,   279,   280,   280,   280,   280,   281,   281,
     282,   282,   283,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   289,   290,   291,   292,   293,
     293,   293,   293,   293,   293,   294,   293,   295,   293,   296,
     293,   297,   293,   293,   298,   298,   299,   300,   300,   301,
     301,   301,   301,   302,   303,   303,   304,   305,   306,   306,
     307,   308,   309,   309,   310,   310,   311,   311,   312,   312,
     313,   313,   314,   314,   315,   315,   316,   316,   316,   316,
     317,   317,   317,   318,   318,   319,   319,   320,   320,   321,
     322,   322,   323,   323,   324,   325,   326,   326,   326,   326,
     327,   327,   328,   328,   328,   328,   328,   328,   328,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   330,   330,   331,   331,   332,   332,
     333,   333,   333,   333,   334,   334,   334,   335,   335,   336,
     336,   337,   337,   337,   337,   337,   338,   339,   340,   341,
     342,   342,   343,   344,   344,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   346,   347,   348,   349,   350,
     350,   351,   351,   352,   352,   353,   353,   354,   354,   355,
     355,   356,   356,   357,   357,   358,   358,   358,   358,   359,
     360,   361,   361,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   363,   363,   364,   364,   365,   365,   365,   365,
     366,   366,   366,   367,   367,   367,   368,   369,   370,   370,
     371,   372,   372,   373,   374,   374,   375,   375,   375,   375,
     376,   377,   377,   378,   378,   378,   378,   379,   379,   380,
     381,   381,   381,   382,   382,   382,   382,   383,   383,   384,
     385,   386,   386,   386,   387,   387,   388,   388,   389,   389,
     389,   389,   389,   389,   390,   390,   390,   390,   390,   390,
     391,   391,   391,   392,   392,   393,   393,   393,   393,   393,
     393,   393,   394,   395,   396,   396,   396,   397,   397,   397,
     398,   398,   398,   398,   399,   399,   399,   400,   400,   400,
     401,   401,   402,   402,   403,   404,   404,   404,   404,   404,
     405,   406,   406,   406,   406,   407,   407,   408,   408,   409,
     409,   410,   410,   411,   411,   412,   413,   414,   415,   415,
     415,   415,   415,   415,   416,   416,   416,   416,   416,   416,
     417,   418,   418,   418
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     7,     8,     4,     0,     3,     4,     2,     2,
       3,     3,     5,     4,     6,     4,     3,     3,     3,     3,
       2,     3,     4,     0,     2,     5,     5,     5,     1,     2,
       5,     7,     0,     2,     1,     1,     1,     1,     2,     2,
       0,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     5,
       4,     2,     3,     3,     3,     0,     4,     0,     5,     0,
       5,     0,     5,     2,     1,     2,     1,     0,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     4,     5,     6,     3,     4,     3,     4,     3,     4,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       0,     2,     2,     0,     2,     0,     2,    13,    11,    11,
      10,     9,     0,     2,     2,     2,     0,     2,     4,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     0,
       3,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     1,     1,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     0,     2,     2,     0,     2,     0,
       2,     1,     1,     1,     1,     3,     3,     2,     2,     2,
       0,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     7,     6,     6,     9,     0,
       2,     0,     3,     0,     3,     0,     3,     0,     2,     7,
       7,     0,     3,     1,     1,     3,     6,     7,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     2,     1,     1,     1,     1,
       3,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     8,     6,     6,     1,     2,     1,     1,     1,     1,
       6,     1,     2,     1,     1,     1,     1,     4,     4,     4,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     3,
       3,     1,     1,     1,     1,     1,     9,     6,     0,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     0,     2,     3,     0,     2,     3,
       0,     6,     6,     6,     8,    10,     7,     0,     1,     1,
       8,     9,     9,     9,     6,     0,     1,     1,     1,     1,
       8,     7,     7,     4,     4,     0,     1,     9,     6,     8,
       8,     8,     8,     8,     8,     7,     7,     9,    10,    11,
      12,    10,    11,    12,    10,    11,    12,    10,    11,    12,
       2,     0,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     7,    17,    18,    19,     8,
       9,    15,    16,    14,    10,    11,    12,    13,    29,    50,
      69,    87,     0,   117,   132,   143,   159,     0,     0,     0,
       0,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   442,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     1,     5,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,   103,   105,
     106,   107,   109,   110,   108,   111,   112,   442,   408,   113,
     114,   115,   116,    28,    25,    26,    27,   181,   180,   175,
     280,   395,   198,     0,   186,   187,   545,   188,   409,     0,
       0,     0,   395,   189,   193,     0,     0,     0,   581,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    41,    42,    34,    35,    36,
      40,    43,    44,    45,    46,    47,    48,    49,    37,    38,
      39,   555,   555,    51,    52,    53,    54,    55,    57,    59,
      58,    66,    67,    68,    56,    63,    60,    65,    64,    61,
      62,     0,    70,    71,    72,    73,    74,    75,    77,    76,
      81,    82,    83,    84,    85,    86,    78,    79,    80,     0,
      88,    89,    90,    91,    92,    94,    96,    95,   100,   101,
     102,    93,    97,    98,    99,   292,     0,     0,   274,   275,
     391,   270,   391,   410,   391,     0,   451,   452,   453,   454,
     455,   456,   460,   457,   458,   104,     0,     0,   581,     0,
     118,   119,   120,   121,   127,   129,   128,   130,   131,   122,
     123,   124,   125,   126,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   144,   145,   146,   147,   148,
     150,   152,   151,   156,   157,   158,   149,   153,   154,   155,
       0,   160,   161,   162,   163,   165,   164,   166,   167,   168,
     169,   170,     0,     0,   174,     0,     0,   283,     0,   199,
     285,   202,   546,   547,   548,   549,   177,   446,   447,   448,
     449,     0,   444,   183,   185,   302,   193,     0,   190,     0,
       0,   426,   414,   415,   428,   429,   436,   434,   417,   438,
     416,   437,   433,   440,   422,   424,   439,   430,   435,   413,
     441,   420,   423,   427,   425,   419,   418,   431,   432,   421,
       0,   411,     0,   171,   249,   250,   251,   252,   255,   254,
     253,   256,   257,   261,   393,   258,   259,   292,   498,   498,
     498,   491,   492,   493,   498,   498,     0,   498,   524,   464,
     466,   467,   468,   469,   498,   537,   498,   537,   498,   556,
       0,   556,     0,     0,     0,   498,   498,     0,     0,   389,
       0,     0,     0,     0,   524,     0,     0,     0,   391,   271,
     272,   264,   391,   266,   391,   268,   450,   459,     0,     0,
     405,     0,   498,   498,   498,     0,     0,   498,   480,   481,
     482,   524,   471,   476,   498,   474,   475,   473,   498,     0,
     182,     0,   280,   282,   281,     0,   302,     0,     0,   195,
     197,   196,   445,     0,   308,   303,   304,   305,   306,   307,
     300,   191,   194,     0,     0,   442,   412,   582,     0,   393,
     262,     0,     0,     0,     0,   296,   503,   502,   501,   500,
     499,     0,     0,     0,     0,     0,   524,   524,     0,     0,
     465,     0,     0,   538,   539,     0,     0,     0,   524,   524,
       0,     0,     0,     0,   524,     0,     0,   293,     0,   395,
       0,   389,   401,     0,   296,     0,     0,     0,   276,   278,
     277,   279,   273,   265,   267,   269,     0,   442,   524,     0,
       0,     0,   498,   498,   524,     0,   472,     0,     0,     0,
     524,   176,   283,   284,   300,   396,   286,     0,     0,     0,
       0,     0,     0,   203,   204,   210,   210,   205,   219,   220,
     206,   207,   184,     0,   192,   443,   442,   581,   583,     0,
     263,   295,   524,   524,   524,   524,   524,   524,     0,   309,
     489,   495,   494,   545,   495,   545,     0,     0,     0,     0,
     504,   525,     0,     0,   495,   490,   524,   524,   504,     0,
       0,   524,   545,   524,   524,   554,   553,     0,   524,   495,
     545,   390,   524,   580,   395,     0,   395,   294,   309,     0,
       0,   392,   442,   581,     0,     0,   545,   545,     0,     0,
       0,   495,   545,     0,     0,   524,     0,   302,   200,     0,
       0,     0,   243,   231,     0,   225,   216,   222,   218,   224,
     215,   217,   221,   223,   209,   208,   301,   581,   172,   394,
       0,     0,     0,     0,     0,     0,   299,   297,   302,     0,
       0,     0,   395,   343,   344,   484,   483,   486,   485,   477,
     478,     0,     0,   505,   506,   507,   508,   509,   524,   526,
     519,   520,   515,   518,     0,   521,   522,   530,     0,     0,
       0,   524,     0,     0,     0,   524,     0,     0,     0,   524,
       0,   524,   524,     0,   524,   404,   403,     0,   397,   401,
       0,   530,   581,   406,     0,   524,   513,   513,   513,   513,
     545,   545,     0,   488,   487,   530,   479,     0,     0,   300,
     232,   233,   234,     0,     0,   247,     0,     0,   228,   211,
     212,   213,   214,   173,     0,     0,     0,     0,     0,     0,
     300,   346,   347,   311,   359,   359,     0,   314,   330,   331,
     328,   317,   318,   319,   325,   326,   323,   312,     0,   332,
     313,   320,   321,   333,   335,   336,   337,   327,   354,   338,
     339,     0,   341,   334,   322,   329,   397,   345,   386,   387,
       0,   516,     0,   463,     0,   524,     0,     0,   497,   558,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,   402,     0,   524,   395,   400,   399,   385,   407,   530,
       0,   514,   524,   524,   524,   524,     0,     0,     0,     0,
     530,   470,     0,   462,   201,     0,     0,     0,   247,   246,
     236,   244,   248,   230,   226,   227,   530,   530,   530,   530,
     530,   530,   298,   315,   316,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   310,   373,     0,     0,     0,
       0,   342,   348,     0,   357,     0,   340,   524,     0,   517,
       0,   530,     0,   530,     0,   536,     0,   552,   551,     0,
     530,     0,     0,   530,     0,   398,     0,   397,   565,     0,
       0,     0,     0,     0,     0,   510,   511,   512,   524,     0,
     524,     0,   524,     0,   524,   566,   530,   238,   240,   242,
     229,   245,   559,   560,   561,   562,   563,   564,     0,   498,
       0,     0,   370,   360,   363,   361,   362,   364,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     350,   353,   351,   349,   356,   355,     0,   324,   372,     0,
     530,   527,   527,   527,   550,     0,   534,   530,   530,   530,
     540,   530,   530,   291,   530,     0,   524,   530,     0,     0,
       0,     0,   524,     0,   524,     0,   524,     0,   524,     0,
     461,   368,     0,   367,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   374,   358,     0,   388,
       0,     0,     0,     0,   530,   496,   557,   541,   543,   542,
     290,   530,     0,   567,   530,   530,   530,   530,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   371,   365,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   530,
     528,     0,     0,     0,     0,   535,   288,     0,   571,   568,
     577,   574,     0,   530,     0,   530,     0,   530,     0,   530,
     289,   529,   523,   531,   532,   533,   530,   530,   572,   530,
     569,   530,   578,   530,   575,   287,   573,   570,   579,   576
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    63,   131,    64,   153,    65,   172,
      66,   190,    77,    78,    93,   230,    94,   245,    95,   255,
      96,   271,    14,    15,   284,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   113,   114,   308,    25,    26,    27,
     101,   102,   440,   543,   544,   644,   739,   545,   546,   547,
     548,   549,   550,   740,   741,   742,   551,   734,   835,   836,
     837,   840,   841,   843,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    79,    80,    81,   210,   398,   211,   400,
     287,   436,   439,    82,   136,    83,   392,   504,   465,   569,
     554,   450,   662,   663,   664,   871,   872,   874,   957,   853,
     933,   934,   935,   936,   937,   995,   876,   865,   866,    84,
     138,   139,   140,   499,   401,   460,   290,   813,    85,   606,
     707,    86,    87,    88,   340,   341,   118,   301,   302,    89,
      90,    91,    92,   223,   224,   281,   147,   368,   369,   254,
     421,   422,   370,   423,   424,   371,   426,   372,   373,   374,
     573,   164,   471,   678,   908,   822,   686,   687,  1073,   481,
    1011,   793,   165,   486,   183,   184,   185,   296,   166,   167,
     380,   168,   148,   149,   150,   239,   240,   241,   242,   243,
     501,   343
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -739
static const yytype_int16 yypact[] =
{
     316,    11,   -65,   -11,    15,    66,    73,   116,   150,   167,
     170,   177,   316,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,   305,  -739,  -739,  -739,  -739,    20,    92,   142,
     254,  -739,   213,   220,   231,   247,   272,   166,   -96,   -86,
    -739,   -48,    -8,   323,   331,   350,   392,  -739,   371,   401,
     135,  -739,  -739,   336,    54,   715,   799,    19,   303,   303,
     347,   303,   -76,   238,   207,   355,   348,   305,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,    32,  -739,  -739,
    -739,  -739,  -739,   600,   655,   799,   969,   465,  -739,   426,
     -19,   111,  -739,   380,  -739,  -739,   581,  -739,  -739,   771,
     379,   386,   448,   -86,   304,   324,   326,   910,   510,   463,
     467,   314,   470,   472,   474,   458,   482,   303,   466,   485,
     149,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,    45,   397,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,    62,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,    49,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,    18,   526,   391,  -739,  -739,
     351,  -739,   351,  -739,   351,   554,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,   348,  -739,  -739,   377,   910,   510,    24,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,   565,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
     317,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,   503,   590,  -739,   507,   -36,   480,   514,  -739,
     605,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,     3,  -739,   506,  -739,   457,   304,   476,  -739,   771,
     910,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
      74,  -739,   569,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,   400,  -739,  -739,   185,   137,   137,
     137,  -739,  -739,  -739,   137,   137,   430,   137,   542,  -739,
    -739,  -739,  -739,  -739,   137,   132,   137,    16,   137,   391,
     509,  -739,   524,   267,   486,   137,   137,   525,   617,   684,
     677,   528,   695,   644,   657,   665,   -17,   160,    94,  -739,
    -739,  -739,    94,  -739,    94,  -739,  -739,  -739,   910,   405,
    -739,   754,   137,   137,   137,   643,   756,   137,  -739,  -739,
    -739,   664,  -739,  -739,   137,  -739,  -739,  -739,   137,   651,
    -739,   682,   621,  -739,  -739,   693,   457,   639,   712,  -739,
     641,  -739,  -739,   709,  -739,  -739,  -739,  -739,  -739,  -739,
     648,  -739,  -739,   315,   706,   763,  -739,   793,   726,   158,
    -739,   736,   232,   288,   378,   791,  -739,  -739,  -739,  -739,
    -739,   737,   -39,    38,   740,   744,   657,   657,   750,    22,
    -739,   848,   119,  -739,  -739,   769,   807,   775,   657,   657,
     808,   776,   608,   622,   657,   777,   122,  -739,   782,   448,
     685,   684,   656,   783,   791,   855,   899,   728,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,   796,   763,   657,   792,
     795,   797,   137,   137,   657,   128,  -739,   905,   812,   813,
     657,  -739,   480,  -739,   648,  -739,  -739,    25,   823,    52,
      53,   729,   751,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,   825,  -739,  -739,   763,   510,  -739,   755,
    -739,  -739,   657,   657,   657,   657,   657,   657,   446,    78,
    -739,   816,  -739,   581,   817,   581,   818,   821,   937,   938,
     333,  -739,   903,   342,  -739,  -739,   657,   -16,   333,   947,
     952,   657,   581,   657,   657,  -739,  -739,   953,   673,   842,
     581,  -739,   657,  -739,   448,   570,   448,  -739,    78,   957,
     342,  -739,   763,   510,   958,   847,   125,   129,   850,   852,
     965,   856,   581,   342,   857,   657,   971,   457,  -739,   868,
     869,   871,   748,   885,   886,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,   243,   243,  -739,   510,  -739,  -739,
     990,   994,   995,   997,   999,  1002,  -739,  -739,   457,   900,
     901,  1057,   448,   762,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,   342,   342,  -739,  -739,  -739,  -739,  -739,   657,  -739,
    -739,  -739,  -739,  -739,   303,  -739,  -739,  1011,  1005,   908,
    1018,   657,   342,   342,  1019,   657,  1020,  1021,   342,   657,
    1022,   657,   657,  1034,   657,  -739,  -739,   933,   978,   656,
     322,  1011,   510,  -739,   342,   657,   872,   872,   872,   872,
     146,   154,   342,  -739,  -739,  1011,  -739,  1045,   342,   648,
     944,   945,   948,   949,   950,  1037,   954,   955,  -739,  -739,
    -739,  -739,  -739,  -739,   342,   342,   342,   342,   342,   342,
     648,  -739,  -739,  -739,  -739,  -739,   967,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,    26,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,   851,  -739,
    -739,   913,  -739,  -739,  -739,  -739,   978,  -739,  -739,  -739,
    1076,   -26,  1080,  -739,   342,   657,   342,  1079,  -739,  -739,
     342,  1091,   342,   342,  -739,  1092,   342,  1093,  1098,   342,
    1099,  -739,   991,   657,   448,  -739,  -739,  -739,  -739,  1011,
    1102,  -739,   657,   657,   657,   657,   321,   363,   409,   454,
    1011,  -739,   342,  -739,  -739,   950,   950,   950,  1037,  -739,
     950,  -739,  -739,  -739,  -739,  -739,  1011,  1011,  1011,  1011,
    1011,  1011,  -739,    23,    23,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,  1103,  -739,  1008,  1010,   996,
    1012,    26,  -739,    50,   889,  1014,  -739,   657,   342,    58,
     406,  1011,  1118,  1011,   342,  -739,   342,  -739,  -739,   342,
    1011,   342,   342,  1011,   342,  -739,  1119,   978,  -739,   342,
    1125,  1160,  1161,  1162,   349,  -739,  -739,  -739,   657,   349,
     657,   349,   657,   349,   657,  -739,  1011,   950,   950,   950,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  1060,   137,
    1061,  1063,  -739,  -739,  -739,  -739,  -739,  -739,  1052,  1055,
    1056,  1058,  1059,  1062,  1064,  1065,  1066,  1067,   967,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  1068,  -739,  -739,  1169,
    1011,  1069,  1069,  1069,  -739,   342,  -739,  1011,  1011,  1011,
    -739,  1011,  1011,  -739,  1011,   342,   657,  1011,   342,   342,
     342,   342,   657,  1172,   657,  1173,   657,  1175,   657,  1182,
    -739,  -739,  1071,  -739,  -739,    37,  1072,  1073,  1074,  1075,
    1077,  1078,  1081,  1082,  1083,  1084,  -739,  -739,   342,  -739,
      28,  1184,  1189,  1192,  1011,  -739,  -739,  -739,  -739,  -739,
    -739,  1011,  1193,  -739,  1011,  1011,  1011,  1011,  1198,   342,
    1199,   342,  1200,   342,  1201,   342,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  1011,
    -739,  1159,   342,   342,   342,  -739,  -739,   342,  -739,  -739,
    -739,  -739,   342,  1011,   342,  1011,   342,  1011,   342,  1011,
    -739,  -739,  -739,  -739,  -739,  -739,  1011,  1011,  -739,  1011,
    -739,  1011,  -739,  1011,  -739,  -739,  -739,  -739,  -739,  -739
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -739,  -739,  -739,  1196,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  1132,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  1097,   906,  -739,  -739,  -739,
    -739,  1110,  -739,  -739,  -739,   667,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -160,  -586,   376,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,   824,   832,   890,   -68,  -205,  -206,  -388,
     784,   683,  -739,  1154,  -739,  -739,  -739,  -739,  -739,   714,
    -521,  -424,   611,  -739,   557,  -739,   352,  -739,  -739,   469,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,   273,   700,
    -739,  -739,  -739,   721,  -191,   766,  -112,  -738,   924,   517,
    -739,   966,  1226,  -739,  -216,  -323,   -72,   919,  -268,   972,
     774,   981,  1006,  -739,  1007,  -739,  -739,  -739,   861,  -739,
    -739,   810,  -739,  -739,  -739,  -225,  -739,  -739,  -217,  -739,
    -195,    27,  -325,   645,  -346,   -25,  -295,  -330,  -235,  -392,
    -138,  -221,  -739,   858,  -739,  -739,  -739,    63,   286,  -739,
    1085,  -739,   307,  -739,   487,  -739,  -739,  -739,  -739,  -739,
    -739,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -242
static const yytype_int16 yytable[] =
{
     305,   212,   506,   214,   399,   410,   399,   402,   399,   404,
     512,   409,   534,   628,   512,   228,   512,   456,   115,   425,
      37,   403,    38,   405,    39,    40,   205,   427,    41,   527,
     689,   411,    97,   442,   472,   473,   483,   484,   285,   474,
     475,   215,   478,   119,   629,   630,   120,   631,   877,   482,
      52,   487,   375,   491,    42,    43,   383,   151,    44,   354,
     495,   496,    45,   412,   413,   414,   415,   110,   111,   383,
     581,   512,   433,   388,   434,    46,  1050,    47,   571,   636,
     638,   867,   208,   209,   578,   579,   456,   519,   520,   521,
     572,   508,   525,   201,   454,   928,   589,   590,   115,   528,
     509,   479,   597,   529,    53,   311,    68,    69,   312,   313,
     314,   315,   316,   317,   297,   298,   299,   300,    46,    70,
     637,   639,   266,   659,   660,    71,   614,    72,    73,    98,
      54,   456,   620,   632,   633,   112,   206,   318,   626,   582,
     661,   206,   396,   319,   397,  1051,   320,   216,   399,   459,
     116,   128,   483,   484,   286,   574,   357,   716,   954,   976,
     955,   718,   206,   395,   929,   129,   206,   572,   868,   869,
     650,   651,   652,   653,   654,   655,    48,    61,   826,   206,
     288,    55,    49,   117,   930,   442,   828,   870,    56,   121,
     931,   488,   516,   456,   688,   690,   425,   618,   619,   694,
     416,   696,   697,   729,   427,    74,   700,   513,   834,    99,
     703,   514,   489,   515,    75,   321,    76,   207,   322,   100,
     376,   377,   389,   390,   376,   387,   396,   458,   397,   852,
     226,    57,   391,   727,   750,   441,   584,    50,   384,   599,
     388,   378,   323,   379,   324,   621,   325,   207,   572,   326,
     100,   572,   461,   152,   921,   385,   386,   572,   932,   634,
     207,  1037,   396,   227,   397,    58,   206,   736,   510,   327,
     328,   737,   738,  1038,   329,   330,   331,   511,   575,   332,
     711,   333,    59,   334,   335,    60,   790,   585,   358,   336,
     337,   338,   339,   725,   359,   360,   361,   362,   363,   797,
     462,   600,   464,   801,   364,   365,   455,   805,    67,   807,
     808,   103,   810,   466,   292,   293,   294,   295,   292,   293,
     294,   295,   104,   820,     1,   366,   396,   485,   397,   105,
     622,   921,   921,   921,   648,   292,   293,   294,   295,   130,
     562,   788,   789,   292,   293,   294,   295,   207,   106,   563,
     367,   186,   202,   462,   463,   464,   107,    68,    69,   218,
     219,   220,   798,   799,   467,   468,   469,   470,   804,    46,
      70,   169,   187,   203,   680,   681,    71,   122,    72,    73,
     816,   267,   108,   557,   819,   123,   682,   602,    68,    69,
     713,   815,   830,   683,   680,   681,   564,   109,   833,   391,
      46,    70,   268,   882,   124,   565,   682,    71,   125,    72,
      73,   208,   209,   683,   846,   847,   848,   849,   850,   851,
     395,   896,   346,   347,   743,   126,   297,   298,   299,   300,
     900,   901,   902,   903,   206,   462,   311,   464,   904,   312,
     313,   314,   315,   316,   317,   613,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   127,    74,   213,   428,   208,
     209,   217,   485,   222,   881,    75,   883,    76,   318,   458,
     885,   221,   887,   888,   319,   282,   890,   320,   283,   893,
     909,   910,   912,   914,   647,   959,   566,    74,   303,   818,
     817,   512,   704,   429,   708,   567,    75,   291,    76,   905,
     906,   907,   916,   304,   831,   656,   657,   658,   208,   209,
     673,   674,   675,   676,   677,   207,   983,   288,   985,   396,
     987,   397,   989,   307,   684,   685,   911,   905,   906,   907,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     712,   905,   906,   907,   684,   685,   321,   555,   960,   322,
     786,   170,   188,   204,   967,   309,   968,   310,   982,   969,
     342,   971,   972,   984,   974,   986,   352,   988,   396,   977,
     397,   913,   344,   323,   355,   324,   345,   325,   348,   349,
     326,   350,   269,   351,  1022,   399,   879,   905,   906,   907,
    1028,   353,  1030,   356,  1032,   381,  1034,   393,   898,   394,
     327,   328,   406,   229,   992,   329,   330,   331,   408,   915,
     332,   430,   333,   431,   334,   335,   791,   961,   962,   963,
     336,   337,   338,   339,   432,   922,   923,   924,   925,   926,
     927,   437,   905,   906,   907,  1014,   666,   517,   668,   444,
     445,   446,   447,   448,   449,  1021,   476,   477,  1024,  1025,
    1026,  1027,    68,    69,   435,   695,   537,   538,   244,   479,
     964,   438,   966,   702,    46,    70,   539,   540,   541,   970,
     443,    71,   973,    72,    73,   917,   918,   919,  1049,   717,
     719,   358,   206,   522,   523,   724,   457,   359,   360,   361,
     362,   363,   823,   824,   825,   990,   452,   364,   365,  1063,
     488,  1065,   897,  1067,   494,  1069,   492,    68,    69,   542,
     359,   360,   361,   362,   363,   417,   593,   594,   171,    46,
      70,   493,   418,   419,   420,   497,    71,  1076,    72,    73,
     595,   596,  1077,   498,  1079,   500,  1081,   311,  1083,  1009,
     312,   313,   314,   315,   316,   317,  1015,  1016,  1017,   502,
    1018,  1019,   503,  1020,   640,   641,  1023,  1072,  1072,  1072,
      75,   505,    76,   137,   157,   176,   194,    68,    69,   318,
     292,   293,   294,   295,   479,   319,   642,   643,   320,    46,
      70,   479,   507,   827,   829,   518,    71,   524,    72,    73,
     479,   699,   530,  1055,   286,   259,   275,   705,   706,   531,
    1056,   533,   189,  1058,  1059,  1060,  1061,   659,   660,   359,
     360,   361,   362,   363,   417,    75,   535,    76,  1074,  1075,
     536,   418,   419,   420,  1012,  1013,   552,   311,  1070,   115,
     312,   313,   314,   315,   316,   317,   553,   144,   161,   180,
     198,   558,  1078,   559,  1080,   561,  1082,   321,  1084,   568,
     322,    68,    69,   583,   570,  1085,  1086,   576,  1087,   318,
    1088,   577,  1089,    46,    70,   319,    74,   580,   320,   263,
      71,   605,    72,    73,   323,    75,   324,    76,   325,   587,
     591,   326,   297,   298,   299,   300,   586,   132,   154,   173,
     191,   603,   588,   592,   598,   133,   155,   174,   192,   601,
     607,   327,   328,   609,   610,   611,   329,   330,   331,   615,
     623,   332,   616,   333,   617,   334,   335,   231,   246,   256,
     272,   336,   337,   338,   339,   232,   247,   257,   273,   624,
     625,   635,   649,   646,   665,   667,   669,   321,   556,   670,
     322,   311,   671,   672,   312,   313,   314,   315,   316,   317,
      74,   679,   692,   134,   156,   175,   193,   693,   698,    75,
     701,    76,   710,   714,   323,   715,   324,   720,   325,   721,
     722,   326,   270,   318,   723,   726,   728,   730,   731,   319,
     732,   733,   320,   233,   248,   258,   274,   141,   158,   177,
     195,   327,   328,  -235,   735,   744,   329,   330,   331,   745,
     746,   332,   747,   333,   748,   334,   335,   749,   751,   752,
     794,   336,   337,   338,   339,   792,   795,   234,   249,   260,
     276,    68,    69,   796,   800,   802,   803,   806,   612,   142,
     159,   178,   196,    46,    70,   143,   160,   179,   197,   809,
      71,   811,    72,    73,   145,   162,   181,   199,   812,   821,
     832,   321,  -237,  -239,   322,   842,  -241,   838,   839,   235,
     250,   261,   277,   844,   845,   236,   251,   262,   278,   146,
     163,   182,   200,   873,   237,   252,   264,   279,   323,   875,
     324,   878,   325,   880,   884,   326,   855,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   886,   889,   891,   238,
     253,   265,   280,   892,   894,   327,   328,   899,   895,   948,
     329,   330,   331,   951,   956,   332,   949,   333,   950,   334,
     335,   952,   958,   965,   975,   336,   337,   338,   339,    75,
     978,    76,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   979,   980,   981,   991,   996,
     993,   994,   997,   998,  1008,   999,  1000,  1029,  1031,  1001,
    1033,  1002,  1003,  1004,  1005,  1007,  1010,  1035,  1036,  1052,
    1039,  1040,  1041,  1042,  1053,  1043,  1044,  1054,  1057,  1045,
    1046,  1047,  1048,  1062,  1064,  1066,  1068,  1071,    62,   225,
     306,   289,   451,   645,   920,   627,   532,   135,   608,   709,
     787,  1006,   604,   953,   854,   560,   814,    51,   453,   480,
     407,   526,     0,   691,     0,   490,     0,   382
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-739)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     112,    69,   394,    71,   210,   228,   212,   212,   214,   214,
     398,   227,   436,   534,   402,    87,   404,   340,    66,   244,
       9,   212,    11,   214,    13,    14,     7,   244,    17,   421,
      46,     7,    12,   301,   359,   360,    20,    21,    57,   364,
     365,   117,   367,    51,    19,    20,    54,    22,   786,   374,
     115,   376,     7,   378,    43,    44,     7,     3,    47,   127,
     385,   386,    51,    39,    40,    41,    42,   163,   164,     7,
      48,   459,   108,    55,   110,    64,    48,    66,   117,    27,
      27,    55,   108,   109,   476,   477,   409,   412,   413,   414,
     129,   108,   417,    66,   310,    72,   488,   489,    66,   424,
     117,   117,   494,   428,   115,    31,    52,    53,    34,    35,
      36,    37,    38,    39,   111,   112,   113,   114,    64,    65,
      68,    68,    95,    45,    46,    71,   518,    73,    74,   109,
     115,   454,   524,   108,   109,   221,   117,    63,   530,   117,
      62,   117,   168,    69,   170,   117,    72,   223,   354,   354,
     198,    16,    20,    21,   173,   117,     7,    32,   108,   897,
     110,    32,   117,    69,   141,    30,   117,   129,   142,   143,
     562,   563,   564,   565,   566,   567,   165,     0,    32,   117,
      69,   115,   171,   231,   161,   453,    32,   161,   115,   197,
     167,   175,   408,   516,   586,   587,   421,   522,   523,   591,
     176,   593,   594,   627,   421,   151,   598,   398,   729,   117,
     602,   402,   196,   404,   160,   141,   162,   198,   144,   108,
     175,   176,   204,   205,   175,   176,   168,    69,   170,   750,
     198,   115,   214,   625,   658,   232,   117,   226,   176,   117,
      55,   196,   168,   198,   170,   117,   172,   198,   129,   175,
     108,   129,    67,   199,   840,   193,   194,   129,   235,   234,
     198,   224,   168,   231,   170,   115,   117,    24,   108,   195,
     196,    28,    29,   236,   200,   201,   202,   117,   473,   205,
     610,   207,   115,   209,   210,   115,   678,   482,   139,   215,
     216,   217,   218,   623,   145,   146,   147,   148,   149,   691,
     168,   496,   170,   695,   155,   156,   232,   699,     3,   701,
     702,    57,   704,   176,   189,   190,   191,   192,   189,   190,
     191,   192,   109,   715,     8,   176,   168,   195,   170,   109,
     525,   917,   918,   919,   557,   189,   190,   191,   192,     3,
     108,   671,   672,   189,   190,   191,   192,   198,   117,   117,
     201,    65,    66,   168,   169,   170,   109,    52,    53,   152,
     153,   154,   692,   693,   227,   228,   229,   230,   698,    64,
      65,    64,    65,    66,    52,    53,    71,    54,    73,    74,
     710,    95,   110,   455,   714,    54,    64,   499,    52,    53,
     613,    69,   722,    71,    52,    53,   108,   231,   728,   214,
      64,    65,    95,   795,    54,   117,    64,    71,    16,    73,
      74,   108,   109,    71,   744,   745,   746,   747,   748,   749,
      69,   813,   108,   109,   647,    54,   111,   112,   113,   114,
     822,   823,   824,   825,   117,   168,    31,   170,   117,    34,
      35,    36,    37,    38,    39,   517,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    54,   151,   110,   141,   108,
     109,   223,   195,   115,   794,   160,   796,   162,    63,    69,
     800,   116,   802,   803,    69,    10,   806,    72,    52,   809,
     117,   827,   828,   829,   556,   877,   108,   151,   109,   712,
     711,   879,   604,   176,   606,   117,   160,   117,   162,   178,
     179,   180,   832,   117,   725,    59,    60,    61,   108,   109,
     177,   178,   179,   180,   181,   198,   908,    69,   910,   168,
     912,   170,   914,   219,   202,   203,   117,   178,   179,   180,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     612,   178,   179,   180,   202,   203,   141,   232,   878,   144,
     662,    64,    65,    66,   884,   231,   886,   231,   904,   889,
      50,   891,   892,   909,   894,   911,   108,   913,   168,   899,
     170,   117,   109,   168,   108,   170,   109,   172,   108,   109,
     175,   109,    95,   109,   976,   791,   791,   178,   179,   180,
     982,   109,   984,   108,   986,   198,   988,    71,   819,   208,
     195,   196,    48,     3,   929,   200,   201,   202,   231,   830,
     205,   108,   207,    23,   209,   210,   684,   211,   212,   213,
     215,   216,   217,   218,   117,   846,   847,   848,   849,   850,
     851,   117,   178,   179,   180,   965,   573,   232,   575,   182,
     183,   184,   185,   186,   187,   975,   216,   217,   978,   979,
     980,   981,    52,    53,   174,   592,    15,    16,     3,   117,
     881,    56,   883,   600,    64,    65,    25,    26,    27,   890,
     164,    71,   893,    73,    74,   835,   836,   837,  1008,   616,
     617,   139,   117,    40,    41,   622,   117,   145,   146,   147,
     148,   149,   717,   718,   719,   916,   220,   155,   156,  1029,
     175,  1031,   814,  1033,   218,  1035,   197,    52,    53,    68,
     145,   146,   147,   148,   149,   150,   108,   109,     3,    64,
      65,   197,   157,   158,   159,   108,    71,  1057,    73,    74,
     108,   109,  1062,    49,  1064,    58,  1066,    31,  1068,   960,
      34,    35,    36,    37,    38,    39,   967,   968,   969,   221,
     971,   972,    57,   974,    25,    26,   977,  1052,  1053,  1054,
     160,   117,   162,    63,    64,    65,    66,    52,    53,    63,
     189,   190,   191,   192,   117,    69,    25,    26,    72,    64,
      65,   117,   117,   720,   721,    31,    71,    31,    73,    74,
     117,   118,   141,  1014,   173,    95,    96,   227,   228,   117,
    1021,   108,     3,  1024,  1025,  1026,  1027,    45,    46,   145,
     146,   147,   148,   149,   150,   160,   177,   162,  1053,  1054,
     108,   157,   158,   159,   962,   963,   117,    31,  1049,    66,
      34,    35,    36,    37,    38,    39,   188,    63,    64,    65,
      66,    48,  1063,   117,  1065,   109,  1067,   141,  1069,    58,
     144,    52,    53,     5,   117,  1076,  1077,   117,  1079,    63,
    1081,   117,  1083,    64,    65,    69,   151,   117,    72,    95,
      71,   215,    73,    74,   168,   160,   170,   162,   172,    72,
      72,   175,   111,   112,   113,   114,   117,    63,    64,    65,
      66,   206,   117,   117,   117,    63,    64,    65,    66,   117,
     117,   195,   196,    48,     5,   177,   200,   201,   202,   117,
       5,   205,   117,   207,   117,   209,   210,    93,    94,    95,
      96,   215,   216,   217,   218,    93,    94,    95,    96,   117,
     117,   108,   177,   108,   118,   118,   118,   141,   232,   118,
     144,    31,     5,     5,    34,    35,    36,    37,    38,    39,
     151,    48,     5,    63,    64,    65,    66,     5,     5,   160,
     118,   162,     5,     5,   168,   118,   170,   117,   172,   117,
       5,   175,     3,    63,   118,   118,     5,   109,   109,    69,
     109,   233,    72,    93,    94,    95,    96,    63,    64,    65,
      66,   195,   196,   108,   108,     5,   200,   201,   202,     5,
       5,   205,     5,   207,     5,   209,   210,     5,   108,   108,
       5,   215,   216,   217,   218,     4,   108,    93,    94,    95,
      96,    52,    53,     5,     5,     5,     5,     5,   232,    63,
      64,    65,    66,    64,    65,    63,    64,    65,    66,     5,
      71,   108,    73,    74,    63,    64,    65,    66,    70,   177,
       5,   141,   108,   108,   144,    18,   108,   108,   108,    93,
      94,    95,    96,   109,   109,    93,    94,    95,    96,    63,
      64,    65,    66,   222,    93,    94,    95,    96,   168,   166,
     170,     5,   172,     3,     5,   175,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     5,     5,     5,    93,
      94,    95,    96,     5,     5,   195,   196,     5,   117,     6,
     200,   201,   202,   117,   225,   205,   108,   207,   108,   209,
     210,   109,   108,     5,     5,   215,   216,   217,   218,   160,
       5,   162,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     5,     5,     5,   108,   117,
     109,   108,   117,   117,     5,   117,   117,     5,     5,   117,
       5,   117,   117,   117,   117,   117,   117,     5,   117,     5,
     118,   118,   118,   118,     5,   118,   118,     5,     5,   118,
     118,   118,   118,     5,     5,     5,     5,    48,    12,    77,
     113,   101,   306,   546,   838,   532,   432,    63,   504,   608,
     663,   948,   501,   871,   755,   459,   709,     1,   309,   368,
     223,   421,    -1,   588,    -1,   377,    -1,   152
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   238,   239,   240,   259,   260,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   274,   275,   276,   301,   302,
     303,   304,   305,   306,   307,   308,   309,     9,    11,    13,
      14,    17,    43,    44,    47,    51,    64,    66,   165,   171,
     226,   359,   115,   115,   115,   115,   115,   115,   115,   115,
     115,     0,   240,   241,   243,   245,   247,     3,    52,    53,
      65,    71,    73,    74,   151,   160,   162,   249,   250,   310,
     311,   312,   320,   322,   346,   355,   358,   359,   360,   366,
     367,   368,   369,   251,   253,   255,   257,    12,   109,   117,
     108,   277,   278,    57,   109,   109,   117,   109,   110,   231,
     163,   164,   221,   271,   272,    66,   198,   231,   363,    51,
      54,   197,    54,    54,    54,    16,    54,    54,    16,    30,
       3,   242,   310,   311,   312,   320,   321,   346,   347,   348,
     349,   355,   358,   366,   367,   368,   369,   373,   409,   410,
     411,     3,   199,   244,   310,   311,   312,   346,   355,   358,
     366,   367,   368,   369,   388,   399,   405,   406,   408,   409,
     411,     3,   246,   310,   311,   312,   346,   355,   358,   366,
     367,   368,   369,   401,   402,   403,   405,   409,   411,     3,
     248,   310,   311,   312,   346,   355,   358,   366,   367,   368,
     369,   388,   405,   409,   411,     7,   117,   198,   108,   109,
     313,   315,   313,   110,   313,   117,   223,   223,   152,   153,
     154,   116,   115,   370,   371,   250,   198,   231,   363,     3,
     252,   310,   311,   312,   355,   358,   366,   368,   369,   412,
     413,   414,   415,   416,     3,   254,   310,   311,   312,   355,
     358,   366,   368,   369,   376,   256,   310,   311,   312,   346,
     355,   358,   366,   367,   368,   369,   388,   405,   409,   411,
       3,   258,   310,   311,   312,   346,   355,   358,   366,   368,
     369,   372,    10,    52,   261,    57,   173,   317,    69,   278,
     353,   117,   189,   190,   191,   192,   404,   111,   112,   113,
     114,   364,   365,   109,   117,   353,   272,   219,   273,   231,
     231,    31,    34,    35,    36,    37,    38,    39,    63,    69,
      72,   141,   144,   168,   170,   172,   175,   195,   196,   200,
     201,   202,   205,   207,   209,   210,   215,   216,   217,   218,
     361,   362,    50,   418,   109,   109,   108,   109,   108,   109,
     109,   109,   108,   109,   313,   108,   108,     7,   139,   145,
     146,   147,   148,   149,   155,   156,   176,   201,   374,   375,
     379,   382,   384,   385,   386,     7,   175,   176,   196,   198,
     407,   198,   407,     7,   176,   193,   194,   176,    55,   204,
     205,   214,   323,    71,   208,    69,   168,   170,   314,   315,
     316,   351,   314,   351,   314,   351,    48,   371,   231,   361,
     418,     7,    39,    40,    41,    42,   176,   150,   157,   158,
     159,   377,   378,   380,   381,   382,   383,   385,   141,   176,
     108,    23,   117,   108,   110,   174,   318,   117,    56,   319,
     279,   232,   365,   164,   182,   183,   184,   185,   186,   187,
     328,   273,   220,   364,   361,   232,   362,   117,    69,   314,
     352,    67,   168,   169,   170,   325,   176,   227,   228,   229,
     230,   389,   389,   389,   389,   389,   216,   217,   389,   117,
     375,   396,   389,    20,    21,   195,   400,   389,   175,   196,
     400,   389,   197,   197,   218,   389,   389,   108,    49,   350,
      58,   417,   221,    57,   324,   117,   396,   117,   108,   117,
     108,   117,   316,   351,   351,   351,   361,   232,    31,   389,
     389,   389,    40,    41,    31,   389,   378,   396,   389,   389,
     141,   117,   317,   108,   328,   177,   108,    15,    16,    25,
      26,    27,    68,   280,   281,   284,   285,   286,   287,   288,
     289,   293,   117,   188,   327,   232,   232,   363,    48,   117,
     352,   109,   108,   117,   108,   117,   108,   117,    58,   326,
     117,   117,   129,   387,   117,   387,   117,   117,   396,   396,
     117,    48,   117,     5,   117,   387,   117,    72,   117,   396,
     396,    72,   117,   108,   109,   108,   109,   396,   117,   117,
     387,   117,   353,   206,   350,   215,   356,   117,   326,    48,
       5,   177,   232,   363,   396,   117,   117,   117,   389,   389,
     396,   117,   387,     5,   117,   117,   396,   318,   327,    19,
      20,    22,   108,   109,   234,   108,    27,    68,    27,    68,
      25,    26,    25,    26,   282,   282,   108,   363,   418,   177,
     396,   396,   396,   396,   396,   396,    59,    60,    61,    45,
      46,    62,   329,   330,   331,   118,   404,   118,   404,   118,
     118,     5,     5,   177,   178,   179,   180,   181,   390,    48,
      52,    53,    64,    71,   202,   203,   393,   394,   396,    46,
     396,   390,     5,     5,   396,   404,   396,   396,     5,   118,
     396,   118,   404,   396,   353,   227,   228,   357,   353,   329,
       5,   394,   363,   418,     5,   118,    32,   404,    32,   404,
     117,   117,     5,   118,   404,   394,   118,   396,     5,   328,
     109,   109,   109,   233,   294,   108,    24,    28,    29,   283,
     290,   291,   292,   418,     5,     5,     5,     5,     5,     5,
     328,   108,   108,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   353,   331,   394,   394,
     396,   313,     4,   398,     5,   108,     5,   396,   394,   394,
       5,   396,     5,     5,   394,   396,     5,   396,   396,     5,
     396,   108,    70,   354,   356,    69,   394,   398,   418,   394,
     396,   177,   392,   392,   392,   392,    32,   404,    32,   404,
     394,   398,     5,   394,   327,   295,   296,   297,   108,   108,
     298,   299,    18,   300,   109,   109,   394,   394,   394,   394,
     394,   394,   327,   336,   336,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   344,   345,    55,   142,   143,
     161,   332,   333,   222,   334,   166,   343,   354,     5,   314,
       3,   394,   396,   394,     5,   394,     5,   394,   394,     5,
     394,     5,     5,   394,     5,   117,   396,   353,   398,     5,
     396,   396,   396,   396,   117,   178,   179,   180,   391,   117,
     391,   117,   391,   117,   391,   398,   394,   298,   298,   298,
     300,   299,   398,   398,   398,   398,   398,   398,    72,   141,
     161,   167,   235,   337,   338,   339,   340,   341,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,     6,   108,
     108,   117,   109,   333,   108,   110,   225,   335,   108,   396,
     394,   211,   212,   213,   398,     5,   398,   394,   394,   394,
     398,   394,   394,   398,   394,     5,   354,   394,     5,     5,
       5,     5,   391,   396,   391,   396,   391,   396,   391,   396,
     398,   108,   389,   109,   108,   342,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   345,   117,     5,   398,
     117,   397,   397,   397,   394,   398,   398,   398,   398,   398,
     398,   394,   396,   398,   394,   394,   394,   394,   396,     5,
     396,     5,   396,     5,   396,     5,   117,   224,   236,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   394,
      48,   117,     5,     5,     5,   398,   398,     5,   398,   398,
     398,   398,     5,   394,     5,   394,     5,   394,     5,   394,
     398,    48,   393,   395,   395,   395,   394,   394,   398,   394,
     398,   394,   398,   394,   398,   398,   398,   398,   398,   398
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
        case 171:
/* Line 1787 of yacc.c  */
#line 536 "src/p.y"
    {
                   mailset.events = Event_All;
                    addmail((yyvsp[(2) - (4)].string), &mailset, &Run.maillist);
                  }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 540 "src/p.y"
    {
                    addmail((yyvsp[(2) - (7)].string), &mailset, &Run.maillist);
                  }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 543 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(2) - (8)].string), &mailset, &Run.maillist);
                  }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 549 "src/p.y"
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[(3) - (4)].number);
                      Run.startdelay = (yyvsp[(4) - (4)].number);
                    }
                  }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 559 "src/p.y"
    { (yyval.number) = START_DELAY; }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 560 "src/p.y"
    { (yyval.number) = (yyvsp[(3) - (3)].number); }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 563 "src/p.y"
    {
                    Run.expectbuffer = (yyvsp[(3) - (4)].number) * (yyvsp[(4) - (4)].number);
                    if (Run.expectbuffer > EXPECT_BUFFER_MAX)
                        yyerror("Maximum value for expect buffer is 100 KB");
                  }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 570 "src/p.y"
    {
                    Run.init = TRUE;
                  }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 575 "src/p.y"
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 582 "src/p.y"
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[(3) - (3)].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 590 "src/p.y"
    {
                    setsyslog(NULL);
                  }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 593 "src/p.y"
    {
                    setsyslog((yyvsp[(5) - (5)].string)); FREE((yyvsp[(5) - (5)].string));
                  }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 598 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 601 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (6)].string);
                    Run.eventlist_slots = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 605 "src/p.y"
    {
                    Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[(4) - (4)].number);
                  }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 611 "src/p.y"
    {
                    Run.idfile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 616 "src/p.y"
    {
                    Run.statefile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 621 "src/p.y"
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[(3) - (3)].string));
                   }
                 }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 636 "src/p.y"
    {
                    check_hostname(((yyvsp[(1) - (4)].url))->hostname);
                    addmmonit((yyvsp[(1) - (4)].url), (yyvsp[(2) - (4)].number), (yyvsp[(3) - (4)].number), (yyvsp[(4) - (4)].string));
                  }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 643 "src/p.y"
    {
                    Run.dommonitcredentials = FALSE;
                  }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 648 "src/p.y"
    {
                   if (((yyvsp[(4) - (5)].number)) > SMTP_TIMEOUT)
                     Run.mailserver_timeout = (yyvsp[(4) - (5)].number);
                   Run.mail_hostname = (yyvsp[(5) - (5)].string);
                  }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 655 "src/p.y"
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : Str_dup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                   reset_mailset();
                 }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 664 "src/p.y"
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[(4) - (5)].number);
                 }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 674 "src/p.y"
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

  case 201:
/* Line 1787 of yacc.c  */
#line 692 "src/p.y"
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

  case 208:
/* Line 1787 of yacc.c  */
#line 721 "src/p.y"
    {
                    Run.httpdssl = FALSE;
                  }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 724 "src/p.y"
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

  case 219:
/* Line 1787 of yacc.c  */
#line 752 "src/p.y"
    { Run.httpdsig = TRUE; }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 753 "src/p.y"
    { Run.httpdsig = FALSE; }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 764 "src/p.y"
    { Run.bind_addr = (yyvsp[(2) - (2)].string); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 767 "src/p.y"
    {
                    Run.httpsslpem = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 772 "src/p.y"
    {
                    Run.httpsslclientpem = (yyvsp[(2) - (2)].string);
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 780 "src/p.y"
    {
                    Run.allowselfcert = TRUE;
                  }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 785 "src/p.y"
    {
                    addcredentials((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string), DIGEST_CLEARTEXT, (yyvsp[(5) - (5)].number));
                  }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 788 "src/p.y"
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[(3) - (4)].string));
#endif
                  }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 796 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(2) - (2)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 800 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 804 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 808 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 812 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(2) - (2)].string);
                    digesttype = CLEARTEXT;
                  }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 816 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 819 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 823 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 826 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_MD5;
                  }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 830 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 833 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CRYPT;
                  }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 837 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 840 "src/p.y"
    {
                    if (! (add_net_allow((yyvsp[(2) - (2)].string)) || add_host_allow((yyvsp[(2) - (2)].string)))) {
                      yyerror2("Erroneous network or host identifier %s", (yyvsp[(2) - (2)].string));
                    }
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 852 "src/p.y"
    { addhtpasswdentry(htpasswd_file, (yyvsp[(1) - (1)].string), digesttype);
                           FREE((yyvsp[(1) - (1)].string)); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 856 "src/p.y"
    { (yyval.number) = FALSE; }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 857 "src/p.y"
    { (yyval.number) = TRUE; }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 860 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 863 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 866 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 873 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = Str_dup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 882 "src/p.y"
    {
                    createservice(TYPE_FILE, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_file);
                  }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 887 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 890 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 895 "src/p.y"
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_directory);
                  }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 900 "src/p.y"
    {
                    check_hostname((yyvsp[(4) - (4)].string));
                    createservice(TYPE_HOST, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_remote_host);
                  }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 906 "src/p.y"
    {
                    if (NetStatistics_isGetByAddressSupported()) {
                        createservice(TYPE_NET, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_net);
                        current->inf->priv.net.stats = NetStatistics_createForAddress((yyvsp[(4) - (4)].string));
                    } else {
                        yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                    }
                  }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 914 "src/p.y"
    {
                    createservice(TYPE_NET, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_net);
                    current->inf->priv.net.stats = NetStatistics_createForInterface((yyvsp[(4) - (4)].string));
                  }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 920 "src/p.y"
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

  case 261:
/* Line 1787 of yacc.c  */
#line 932 "src/p.y"
    {
                    createservice(TYPE_FIFO, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_fifo);
                  }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 937 "src/p.y"
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(TYPE_PROGRAM, (yyvsp[(2) - (5)].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[(5) - (5)].number);
                        current->program->output = StringBuffer_create(64);
                 }
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 944 "src/p.y"
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(TYPE_PROGRAM, (yyvsp[(2) - (6)].string), Str_dup(c->arg[0]), check_program);
                        current->program->timeout = (yyvsp[(5) - (6)].number);
                        current->program->output = StringBuffer_create(64);
                 }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 953 "src/p.y"
    {
                    addcommand(START, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 956 "src/p.y"
    {
                    addcommand(START, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 961 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 964 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 970 "src/p.y"
    {
                    addcommand(RESTART, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 973 "src/p.y"
    {
                    addcommand(RESTART, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 986 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 987 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 990 "src/p.y"
    { addeuid( get_uid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 991 "src/p.y"
    { addegid( get_gid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 992 "src/p.y"
    { addeuid( get_uid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 993 "src/p.y"
    { addegid( get_gid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 996 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 997 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 998 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1001 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1002 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1005 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 1006 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 1010 "src/p.y"
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

  case 288:
/* Line 1787 of yacc.c  */
#line 1022 "src/p.y"
    {
                    prepare_urlrequest((yyvsp[(4) - (11)].url));
                    portset.timeout = (yyvsp[(6) - (11)].number);
                    portset.retry = (yyvsp[(7) - (11)].number);
                    addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addport(&portset);
                  }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 1032 "src/p.y"
    {
                   portset.timeout = (yyvsp[(6) - (11)].number);
                   portset.retry = (yyvsp[(7) - (11)].number);
                   addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                   addport(&portset);
                  }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1040 "src/p.y"
    {
                   icmpset.type = (yyvsp[(4) - (10)].number);
                   icmpset.count = (yyvsp[(5) - (10)].number);
                   icmpset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(icmpset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addicmp(&icmpset);
                  }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1047 "src/p.y"
    {
                        icmpset.type = ICMP_ECHO;
                        icmpset.count = (yyvsp[(4) - (9)].number);
                        icmpset.timeout = (yyvsp[(5) - (9)].number);
                        addeventaction(&(icmpset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                        addicmp(&icmpset);
                 }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1056 "src/p.y"
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = Str_dup(current->path);
                    else
                      portset.hostname = Str_dup(LOCALHOST);
                  }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1062 "src/p.y"
    { check_hostname((yyvsp[(2) - (2)].string)); portset.hostname = (yyvsp[(2) - (2)].string); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1065 "src/p.y"
    { portset.port = (yyvsp[(2) - (2)].number); portset.family = AF_INET; }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1068 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string); portset.family = AF_UNIX;
                  }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1073 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1076 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1079 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[(3) - (4)].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1087 "src/p.y"
    {
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1092 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 1093 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 1096 "src/p.y"
    { (yyval.number) = SSL_VERSION_NONE; }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 1097 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV2; }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 1098 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV3; }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 1099 "src/p.y"
    { (yyval.number) = SSL_VERSION_TLSV1; }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 1101 "src/p.y"
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        (yyval.number) = SSL_VERSION_TLSV11;
                }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 1108 "src/p.y"
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        (yyval.number) = SSL_VERSION_TLSV12;
                }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 1114 "src/p.y"
    { (yyval.number) = SSL_VERSION_AUTO; }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 1117 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 1120 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 1123 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 1126 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DNS);
                  }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 1129 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_DWP);
                  }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 1132 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_FTP);
                  }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 1135 "src/p.y"
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 1138 "src/p.y"
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 1144 "src/p.y"
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 1147 "src/p.y"
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 1153 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 1156 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 1159 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 1162 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 1165 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 1168 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SIP);
                  }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 1171 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NNTP);
                  }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 1174 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 1178 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 1181 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_POP);
                  }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 1184 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 1187 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SMTP);
                  }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 1190 "src/p.y"
    {
                        portset.type = SOCK_STREAM;
                        portset.SSL.use_ssl = TRUE;
                        portset.SSL.version = SSL_VERSION_AUTO;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 1196 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_SSH);
                  }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 1199 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RDATE);
                  }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 1202 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_REDIS);
                  }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 1205 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 1208 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_TNS);
                  }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 1211 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 1214 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_LMTP);
                  }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 1217 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GPS);
                  }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 1220 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 1223 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 1226 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 1229 "src/p.y"
    {
                    portset.protocol = Protocol_get(Protocol_GENERIC);
                  }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 1238 "src/p.y"
    {
                    addgeneric(&portset, (yyvsp[(2) - (2)].string), NULL);
                  }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 1241 "src/p.y"
    {
                    addgeneric(&portset, NULL, (yyvsp[(2) - (2)].string));
                  }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 1250 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 1253 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 1256 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 1259 "src/p.y"
    {
                    portset.version = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 1265 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 1268 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 1274 "src/p.y"
    {
                     portset.maxforward = verifyMaxForward((yyvsp[(2) - (2)].number));
                   }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 1290 "src/p.y"
    {
                    portset.operator = (yyvsp[(2) - (3)].number);
                    portset.status = (yyvsp[(3) - (3)].number);
                  }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 1296 "src/p.y"
    {
                    portset.request = Util_urlEncode((yyvsp[(2) - (2)].string));
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 1302 "src/p.y"
    {
                    portset.request_checksum = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 1307 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 1313 "src/p.y"
    {
                        if (! portset.http_headers) {
                                portset.http_headers = List_new();
                        }
                        List_append(portset.http_headers, (yyvsp[(2) - (2)].string));
                 }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 1321 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 1330 "src/p.y"
    {
                    portset.ApacheStatus.loglimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.loglimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 1334 "src/p.y"
    {
                    portset.ApacheStatus.closelimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.closelimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 1338 "src/p.y"
    {
                    portset.ApacheStatus.dnslimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.dnslimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 1342 "src/p.y"
    {
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.keepalivelimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 1346 "src/p.y"
    {
                    portset.ApacheStatus.replylimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.replylimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 1350 "src/p.y"
    {
                    portset.ApacheStatus.requestlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.requestlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 1354 "src/p.y"
    {
                    portset.ApacheStatus.startlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.startlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 1358 "src/p.y"
    {
                    portset.ApacheStatus.waitlimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.waitlimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 1362 "src/p.y"
    {
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.gracefullimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 1366 "src/p.y"
    {
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[(2) - (4)].number);
                    portset.ApacheStatus.cleanuplimit = (yyvsp[(3) - (4)].number);
                  }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 1372 "src/p.y"
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                  }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 1378 "src/p.y"
    {
                    addeventaction(&(pidset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addpid(&pidset);
                  }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 1384 "src/p.y"
    {
                    addeventaction(&(ppidset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addppid(&ppidset);
                  }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 1390 "src/p.y"
    {
                    uptimeset.operator = (yyvsp[(3) - (9)].number);
                    uptimeset.uptime = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(uptimeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    adduptime(&uptimeset);
                  }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 1397 "src/p.y"
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 1400 "src/p.y"
    {
                        (yyval.number) = (yyvsp[(2) - (2)].number);
                 }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 1405 "src/p.y"
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 1408 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 1413 "src/p.y"
    {
                   (yyval.number) = PROGRAM_TIMEOUT; // Default program status check timeout is 5 min
                  }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 1416 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 1421 "src/p.y"
    {
                   (yyval.number) = NET_TIMEOUT; // timeout is in milliseconds
                  }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 1424 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number) * 1000; // net timeout is in milliseconds internally
                  }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 1429 "src/p.y"
    {
                   (yyval.number) = 1;
                  }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 1432 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 1437 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, (yyvsp[(7) - (7)].number), ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 1443 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_ALERT);
                   addactionrate(&actionrateset);
                 }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 1452 "src/p.y"
    {
                    seturlrequest((yyvsp[(2) - (3)].number), (yyvsp[(3) - (3)].string));
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 1458 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 1459 "src/p.y"
    { (yyval.number) = Operator_NotEqual; }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 1462 "src/p.y"
    {
                   mailset.events = Event_All;
                   addmail((yyvsp[(1) - (3)].string), &mailset, &current->maillist);
                  }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 1466 "src/p.y"
    {
                   addmail((yyvsp[(1) - (6)].string), &mailset, &current->maillist);
                  }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 1469 "src/p.y"
    {
                   mailset.events = ~mailset.events;
                   addmail((yyvsp[(1) - (7)].string), &mailset, &current->maillist);
                  }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 1473 "src/p.y"
    {
                   addmail((yyvsp[(1) - (1)].string), &mailset, &current->maillist);
                  }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 1478 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 1481 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 1488 "src/p.y"
    { mailset.events |= Event_Action; }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 1489 "src/p.y"
    { mailset.events |= Event_ByteIn; }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 1490 "src/p.y"
    { mailset.events |= Event_ByteOut; }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 1491 "src/p.y"
    { mailset.events |= Event_Checksum; }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 1492 "src/p.y"
    { mailset.events |= Event_Connection; }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 1493 "src/p.y"
    { mailset.events |= Event_Content; }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 1494 "src/p.y"
    { mailset.events |= Event_Data; }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 1495 "src/p.y"
    { mailset.events |= Event_Exec; }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 1496 "src/p.y"
    { mailset.events |= Event_Fsflag; }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 1497 "src/p.y"
    { mailset.events |= Event_Gid; }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 1498 "src/p.y"
    { mailset.events |= Event_Icmp; }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 1499 "src/p.y"
    { mailset.events |= Event_Instance; }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 1500 "src/p.y"
    { mailset.events |= Event_Invalid; }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 1501 "src/p.y"
    { mailset.events |= Event_Link; }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 1502 "src/p.y"
    { mailset.events |= Event_Nonexist; }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 1503 "src/p.y"
    { mailset.events |= Event_PacketIn; }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 1504 "src/p.y"
    { mailset.events |= Event_PacketOut; }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 1505 "src/p.y"
    { mailset.events |= Event_Permission; }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 1506 "src/p.y"
    { mailset.events |= Event_Pid; }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 1507 "src/p.y"
    { mailset.events |= Event_PPid; }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1508 "src/p.y"
    { mailset.events |= Event_Resource; }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1509 "src/p.y"
    { mailset.events |= Event_Saturation; }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1510 "src/p.y"
    { mailset.events |= Event_Size; }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1511 "src/p.y"
    { mailset.events |= Event_Speed; }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1512 "src/p.y"
    { mailset.events |= Event_Status; }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1513 "src/p.y"
    { mailset.events |= Event_Timeout; }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1514 "src/p.y"
    { mailset.events |= Event_Timestamp; }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1515 "src/p.y"
    { mailset.events |= Event_Uid; }
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1516 "src/p.y"
    { mailset.events |= Event_Uptime; }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1527 "src/p.y"
    { mailset.from = (yyvsp[(1) - (1)].string); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1528 "src/p.y"
    { mailset.replyto = (yyvsp[(1) - (1)].string); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1529 "src/p.y"
    { mailset.subject = (yyvsp[(1) - (1)].string); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1530 "src/p.y"
    { mailset.message = (yyvsp[(1) - (1)].string); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1533 "src/p.y"
    {
                   current->every.type = EVERY_SKIPCYCLES;
                   current->every.spec.cycle.number = (yyvsp[(2) - (3)].number);
                 }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1537 "src/p.y"
    {
                   current->every.type = EVERY_CRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1541 "src/p.y"
    {
                   current->every.type = EVERY_NOTINCRON;
                   current->every.spec.cron = (yyvsp[(2) - (2)].string);
                 }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1547 "src/p.y"
    {
                    current->mode = MODE_ACTIVE;
                  }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1550 "src/p.y"
    {
                    current->mode = MODE_PASSIVE;
                  }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1553 "src/p.y"
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1559 "src/p.y"
    { addservicegroup((yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1570 "src/p.y"
    { adddependant((yyvsp[(1) - (1)].string)); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1573 "src/p.y"
    {
                        statusset.initialized = TRUE;
                        statusset.operator = (yyvsp[(3) - (8)].number);
                        statusset.return_value = (yyvsp[(4) - (8)].number);
                        addeventaction(&(statusset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                        addstatus(&statusset);
                   }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1580 "src/p.y"
    {
                        statusset.initialized = FALSE;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                        addstatus(&statusset);
                   }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1589 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1605 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1621 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1626 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1633 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (4)].number);
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1640 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1641 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1642 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1645 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1650 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1655 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1660 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1667 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1672 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1679 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) (yyvsp[(3) - (3)].number);
                  }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1686 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (3)].number);
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (3)].real) * 10.0);
                  }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1693 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD1; }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1694 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD5; }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1695 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD15; }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1698 "src/p.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1699 "src/p.y"
    { (yyval.real) = (float) (yyvsp[(1) - (1)].number); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1702 "src/p.y"
    {
                    timestampset.operator = (yyvsp[(3) - (9)].number);
                    timestampset.time = ((yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(timestampset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addtimestamp(&timestampset, FALSE);
                  }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1708 "src/p.y"
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1715 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1716 "src/p.y"
    { (yyval.number) = Operator_Greater; }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1717 "src/p.y"
    { (yyval.number) = Operator_Less; }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1718 "src/p.y"
    { (yyval.number) = Operator_Equal; }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1719 "src/p.y"
    { (yyval.number) = Operator_NotEqual; }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1720 "src/p.y"
    { (yyval.number) = Operator_Changed; }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1723 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1724 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1725 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1726 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1727 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1728 "src/p.y"
    { (yyval.number) = TIME_MONTH; }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1731 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1732 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1733 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1735 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1736 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1738 "src/p.y"
    { (yyval.number) = ACTION_ALERT; }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1739 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1740 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1741 "src/p.y"
    { (yyval.number) = ACTION_RESTART; }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1742 "src/p.y"
    { (yyval.number) = ACTION_START; }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1743 "src/p.y"
    { (yyval.number) = ACTION_STOP; }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1744 "src/p.y"
    { (yyval.number) = ACTION_UNMONITOR; }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1747 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1756 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1766 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (2)].number);
                    rate1.cycles = (yyvsp[(1) - (2)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1772 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (3)].number);
                    rate1.cycles = (yyvsp[(2) - (3)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1783 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (2)].number);
                    rate2.cycles = (yyvsp[(1) - (2)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1789 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (3)].number);
                    rate2.cycles = (yyvsp[(2) - (3)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("The number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1799 "src/p.y"
    {
                    (yyval.number) = ACTION_ALERT;
                  }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1802 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1805 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1808 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1813 "src/p.y"
    {
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1818 "src/p.y"
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[(6) - (10)].string));
                    FREE((yyvsp[(6) - (10)].string));
                    addeventaction(&(checksumset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1824 "src/p.y"
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1830 "src/p.y"
    { checksumset.type = HASH_UNKNOWN; }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1831 "src/p.y"
    { checksumset.type = HASH_MD5; }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1832 "src/p.y"
    { checksumset.type = HASH_SHA1; }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1835 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (8)].number);
                    filesystemset.limit_absolute = (yyvsp[(4) - (8)].number);
                    addeventaction(&(filesystemset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1842 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1851 "src/p.y"
    {
                    if (! filesystem_usage(current))
                      yyerror2("Cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_absolute = (long long)((double)(yyvsp[(4) - (9)].real) / (double)current->inf->priv.filesystem.f_bsize * (double)(yyvsp[(5) - (9)].number));
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1860 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1869 "src/p.y"
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1874 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1875 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1876 "src/p.y"
    { (yyval.number) = UNIT_KILOBYTE; }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1877 "src/p.y"
    { (yyval.number) = UNIT_MEGABYTE; }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1878 "src/p.y"
    { (yyval.number) = UNIT_GIGABYTE; }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1881 "src/p.y"
    {
                    permset.perm = check_perm((yyvsp[(4) - (8)].number));
                    addeventaction(&(permset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addperm(&permset);
                  }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1888 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[(4) - (7)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[(7) - (7)].number));
                    FREE((yyvsp[(4) - (7)].string));
                  }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1895 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (7)].string);
                    addmatch(&matchset, (yyvsp[(7) - (7)].number), 0);
                  }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1901 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[(4) - (4)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[(4) - (4)].string));
                  }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1908 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (4)].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1916 "src/p.y"
    {
                    matchset.not = FALSE;
                  }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1919 "src/p.y"
    {
                    matchset.not = TRUE;
                  }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1925 "src/p.y"
    {
                    sizeset.operator = (yyvsp[(3) - (9)].number);
                    sizeset.size = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(sizeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addsize(&sizeset);
                  }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1931 "src/p.y"
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1938 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->uid = adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1944 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->uid = adduid(&uidset);
                  }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1951 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->euid = adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1957 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->euid = adduid(&uidset);
                  }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1964 "src/p.y"
    {
                    gidset.gid = get_gid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->gid = addgid(&gidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1970 "src/p.y"
    {
                    gidset.gid = get_gid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    current->gid = addgid(&gidset);
                  }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1977 "src/p.y"
    {
                    addeventaction(&(netlinkstatusset).action, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                    addnetlinkstatus(current, &netlinkstatusset);
                  }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1983 "src/p.y"
    {
                    addeventaction(&(netlinkspeedset).action, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                    addnetlinkspeed(current, &netlinkspeedset);
                  }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1988 "src/p.y"
    {
                    netlinksaturationset.operator = (yyvsp[(3) - (9)].number);
                    netlinksaturationset.limit = (unsigned long long)(yyvsp[(4) - (9)].number);
                    addeventaction(&(netlinksaturationset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addnetlinksaturation(current, &netlinksaturationset);
                  }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1996 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(3) - (10)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(4) - (10)].number) * (yyvsp[(5) - (10)].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(6) - (10)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 2004 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (11)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(5) - (11)].number) * (yyvsp[(6) - (11)].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(7) - (11)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 2012 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (12)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(5) - (12)].number) * (yyvsp[(6) - (12)].number));
                    bandwidthset.rangecount = (yyvsp[(7) - (12)].number);
                    bandwidthset.range = (yyvsp[(8) - (12)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(11) - (12)].number), (yyvsp[(12) - (12)].number));
                    addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 2020 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(3) - (10)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(4) - (10)].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(6) - (10)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 2028 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (11)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(5) - (11)].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(7) - (11)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 2036 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (12)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(5) - (12)].number);
                    bandwidthset.rangecount = (yyvsp[(7) - (12)].number);
                    bandwidthset.range = (yyvsp[(8) - (12)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(11) - (12)].number), (yyvsp[(12) - (12)].number));
                    addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 2046 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(3) - (10)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(4) - (10)].number) * (yyvsp[(5) - (10)].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(6) - (10)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 2054 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (11)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(5) - (11)].number) * (yyvsp[(6) - (11)].number));
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(7) - (11)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 2062 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (12)].number);
                    bandwidthset.limit = ((unsigned long long)(yyvsp[(5) - (12)].number) * (yyvsp[(6) - (12)].number));
                    bandwidthset.rangecount = (yyvsp[(7) - (12)].number);
                    bandwidthset.range = (yyvsp[(8) - (12)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(11) - (12)].number), (yyvsp[(12) - (12)].number));
                    addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 2070 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(3) - (10)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(4) - (10)].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(6) - (10)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 2078 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (11)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(5) - (11)].number);
                    bandwidthset.rangecount = 1;
                    bandwidthset.range = (yyvsp[(7) - (11)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 2086 "src/p.y"
    {
                    bandwidthset.operator = (yyvsp[(4) - (12)].number);
                    bandwidthset.limit = (unsigned long long)(yyvsp[(5) - (12)].number);
                    bandwidthset.rangecount = (yyvsp[(7) - (12)].number);
                    bandwidthset.range = (yyvsp[(8) - (12)].number);
                    addeventaction(&(bandwidthset).action, (yyvsp[(11) - (12)].number), (yyvsp[(12) - (12)].number));
                    addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 2096 "src/p.y"
    { (yyval.number) = ICMP_ECHO; }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 2099 "src/p.y"
    { mailset.reminder = 0; }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 2100 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (2)].number); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 2101 "src/p.y"
    { mailset.reminder = (yyvsp[(2) - (3)].number); }
    break;


/* Line 1787 of yacc.c  */
#line 6072 "src/y.tab.c"
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


/* Line 2050 of yacc.c  */
#line 2104 "src/p.y"



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
  reset_netlinkstatusset();
  reset_netlinkspeedset();
  reset_netlinksaturationset();
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
        if (!Run.polltime && (Run.isdaemon || Run.init)) {
                LogError("Poll time is invalid or not defined. Please define poll time in the control file\nas a number (> 0)  or use the -d option when starting monit\n");
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
                } else if (s->type == TYPE_NET && ! s->netlinkstatuslist) {
                        addeventaction(&(netlinkstatusset).action, ACTION_ALERT, ACTION_ALERT);
                        addnetlinkstatus(s, &netlinkstatusset);
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


static void addnetlinkstatus(Service_T s, NetLinkStatus_T L) {
  ASSERT(L);

  NetLinkStatus_T l;
  NEW(l);
  l->action = L->action;

  l->next = s->netlinkstatuslist;
  s->netlinkstatuslist = l;

  reset_netlinkstatusset();
}


static void addnetlinkspeed(Service_T s, NetLinkSpeed_T L) {
  ASSERT(L);

  NetLinkSpeed_T l;
  NEW(l);
  l->action = L->action;

  l->next = s->netlinkspeedlist;
  s->netlinkspeedlist = l;

  reset_netlinkspeedset();
}


static void addnetlinksaturation(Service_T s, NetLinkSaturation_T L) {
  ASSERT(L);

  NetLinkSaturation_T l;
  NEW(l);
  l->operator = L->operator;
  l->limit = L->limit;
  l->action = L->action;

  l->next = s->netlinksaturationlist;
  s->netlinksaturationlist = l;

  reset_netlinksaturationset();
}


/*
 * Return Bandwidth object
 */
static void addbandwidth(Bandwidth_T *list, Bandwidth_T b) {
        ASSERT(list);
        ASSERT(b);

        if (b->rangecount * b->range > 24 * TIME_HOUR) {
                yyerror2("Maximum range for total test is 24 hours");
        } else if (b->range == TIME_MINUTE && b->rangecount > 60) {
                yyerror2("Maximum value for [minute(s)] unit is 60");
        } else if (b->range == TIME_HOUR && b->rangecount > 24) {
                yyerror2("Maximum value for [hour(s)] unit is 24");
        } else if (b->range == TIME_DAY && b->rangecount > 1) {
                yyerror2("Maximum value for [day(s)] unit is 1");
        } else {
                if (b->range == TIME_DAY) {
                        // translate last day -> last 24 hours
                        b->rangecount = 24;
                        b->range = TIME_HOUR;
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


static void reset_netlinkstatusset() {
  netlinkstatusset.action = NULL;
}


static void reset_netlinkspeedset() {
  netlinkspeedset.action = NULL;
}


static void reset_netlinksaturationset() {
  netlinksaturationset.limit = 0.;
  netlinksaturationset.operator = Operator_Equal;
  netlinksaturationset.action = NULL;
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

