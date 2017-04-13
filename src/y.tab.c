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

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include "net.h"
#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "ProcessTree.h"
#include "device.h"
#include "processor.h"

// libmonit
#include "io/File.h"
#include "util/Str.h"
#include "thread/Thread.h"


/* ------------------------------------------------------------- Definitions */


struct precedence_t {
        boolean_t daemon;
        boolean_t logfile;
        boolean_t pidfile;
};

struct rate_t {
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
static struct Uid_T uidset;
static struct Gid_T gidset;
static struct Pid_T pidset;
static struct Pid_T ppidset;
static struct FsFlag_T fsflagset;
static struct NonExist_T nonexistset;
static struct Exist_T existset;
static struct Status_T statusset;
static struct Perm_T permset;
static struct Size_T sizeset;
static struct Uptime_T uptimeset;
static struct LinkStatus_T linkstatusset;
static struct LinkSpeed_T linkspeedset;
static struct LinkSaturation_T linksaturationset;
static struct Bandwidth_T bandwidthset;
static struct Match_T matchset;
static struct Icmp_T icmpset;
static struct Mail_T mailset;
static struct SslOptions_T sslset;
static struct Port_T portset;
static struct MailServer_T mailserverset;
static struct Mmonit_T mmonitset;
static struct FileSystem_T filesystemset;
static struct Resource_T resourceset;
static struct Checksum_T checksumset;
static struct Timestamp_T timestampset;
static struct ActionRate_T actionrateset;
static struct precedence_t ihp = {false, false, false};
static struct rate_t rate = {1, 1};
static struct rate_t rate1 = {1, 1};
static struct rate_t rate2 = {1, 1};
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
static void  addtimestamp(Timestamp_T);
static void  addactionrate(ActionRate_T);
static void  addsize(Size_T);
static void  adduptime(Uptime_T);
static void  addpid(Pid_T);
static void  addppid(Pid_T);
static void  addfsflag(FsFlag_T);
static void  addnonexist(NonExist_T);
static void  addexist(Exist_T);
static void  addlinkstatus(Service_T, LinkStatus_T);
static void  addlinkspeed(Service_T, LinkSpeed_T);
static void  addlinksaturation(Service_T, LinkSaturation_T);
static void  addbandwidth(Bandwidth_T *, Bandwidth_T);
static void  addfilesystem(FileSystem_T);
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
static void  reset_existset();
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
static void  reset_rateset(struct rate_t *);
static void  check_name(char *);
static int   check_perm(int);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend();
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);
static void _setPEM(char **store, char *path, const char *description, boolean_t isFile);
static void _setSSLOptions(SslOptions_T options);


#line 349 "src/y.tab.c" /* yacc.c:339  */

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
    FAILED = 261,
    SET = 262,
    LOGFILE = 263,
    FACILITY = 264,
    DAEMON = 265,
    SYSLOG = 266,
    MAILSERVER = 267,
    HTTPD = 268,
    ALLOW = 269,
    REJECTOPT = 270,
    ADDRESS = 271,
    INIT = 272,
    TERMINAL = 273,
    BATCH = 274,
    READONLY = 275,
    CLEARTEXT = 276,
    MD5HASH = 277,
    SHA1HASH = 278,
    CRYPT = 279,
    DELAY = 280,
    PEMFILE = 281,
    ENABLE = 282,
    DISABLE = 283,
    SSL = 284,
    CIPHER = 285,
    CLIENTPEMFILE = 286,
    ALLOWSELFCERTIFICATION = 287,
    SELFSIGNED = 288,
    VERIFY = 289,
    CERTIFICATE = 290,
    CACERTIFICATEFILE = 291,
    CACERTIFICATEPATH = 292,
    VALID = 293,
    INTERFACE = 294,
    LINK = 295,
    PACKET = 296,
    BYTEIN = 297,
    BYTEOUT = 298,
    PACKETIN = 299,
    PACKETOUT = 300,
    SPEED = 301,
    SATURATION = 302,
    UPLOAD = 303,
    DOWNLOAD = 304,
    TOTAL = 305,
    IDFILE = 306,
    STATEFILE = 307,
    SEND = 308,
    EXPECT = 309,
    CYCLE = 310,
    COUNT = 311,
    REMINDER = 312,
    REPEAT = 313,
    LIMITS = 314,
    SENDEXPECTBUFFER = 315,
    EXPECTBUFFER = 316,
    FILECONTENTBUFFER = 317,
    HTTPCONTENTBUFFER = 318,
    PROGRAMOUTPUT = 319,
    NETWORKTIMEOUT = 320,
    PROGRAMTIMEOUT = 321,
    STARTTIMEOUT = 322,
    STOPTIMEOUT = 323,
    RESTARTTIMEOUT = 324,
    PIDFILE = 325,
    START = 326,
    STOP = 327,
    PATHTOK = 328,
    HOST = 329,
    HOSTNAME = 330,
    PORT = 331,
    IPV4 = 332,
    IPV6 = 333,
    TYPE = 334,
    UDP = 335,
    TCP = 336,
    TCPSSL = 337,
    PROTOCOL = 338,
    CONNECTION = 339,
    ALERT = 340,
    NOALERT = 341,
    MAILFORMAT = 342,
    UNIXSOCKET = 343,
    SIGNATURE = 344,
    TIMEOUT = 345,
    RETRY = 346,
    RESTART = 347,
    CHECKSUM = 348,
    EVERY = 349,
    NOTEVERY = 350,
    DEFAULT = 351,
    HTTP = 352,
    HTTPS = 353,
    APACHESTATUS = 354,
    FTP = 355,
    SMTP = 356,
    SMTPS = 357,
    POP = 358,
    POPS = 359,
    IMAP = 360,
    IMAPS = 361,
    CLAMAV = 362,
    NNTP = 363,
    NTP3 = 364,
    MYSQL = 365,
    DNS = 366,
    WEBSOCKET = 367,
    SSH = 368,
    DWP = 369,
    LDAP2 = 370,
    LDAP3 = 371,
    RDATE = 372,
    RSYNC = 373,
    TNS = 374,
    PGSQL = 375,
    POSTFIXPOLICY = 376,
    SIP = 377,
    LMTP = 378,
    GPS = 379,
    RADIUS = 380,
    MEMCACHE = 381,
    REDIS = 382,
    MONGODB = 383,
    SIEVE = 384,
    STRING = 385,
    PATH = 386,
    MAILADDR = 387,
    MAILFROM = 388,
    MAILREPLYTO = 389,
    MAILSUBJECT = 390,
    MAILBODY = 391,
    SERVICENAME = 392,
    STRINGNAME = 393,
    NUMBER = 394,
    PERCENT = 395,
    LOGLIMIT = 396,
    CLOSELIMIT = 397,
    DNSLIMIT = 398,
    KEEPALIVELIMIT = 399,
    REPLYLIMIT = 400,
    REQUESTLIMIT = 401,
    STARTLIMIT = 402,
    WAITLIMIT = 403,
    GRACEFULLIMIT = 404,
    CLEANUPLIMIT = 405,
    REAL = 406,
    CHECKPROC = 407,
    CHECKFILESYS = 408,
    CHECKFILE = 409,
    CHECKDIR = 410,
    CHECKHOST = 411,
    CHECKSYSTEM = 412,
    CHECKFIFO = 413,
    CHECKPROGRAM = 414,
    CHECKNET = 415,
    THREADS = 416,
    CHILDREN = 417,
    STATUS = 418,
    ORIGIN = 419,
    VERSIONOPT = 420,
    READ = 421,
    WRITE = 422,
    OPERATION = 423,
    SERVICETIME = 424,
    DISK = 425,
    RESOURCE = 426,
    MEMORY = 427,
    TOTALMEMORY = 428,
    LOADAVG1 = 429,
    LOADAVG5 = 430,
    LOADAVG15 = 431,
    SWAP = 432,
    MODE = 433,
    ACTIVE = 434,
    PASSIVE = 435,
    MANUAL = 436,
    ONREBOOT = 437,
    NOSTART = 438,
    LASTSTATE = 439,
    CPU = 440,
    TOTALCPU = 441,
    CPUUSER = 442,
    CPUSYSTEM = 443,
    CPUWAIT = 444,
    GROUP = 445,
    REQUEST = 446,
    DEPENDS = 447,
    BASEDIR = 448,
    SLOT = 449,
    EVENTQUEUE = 450,
    SECRET = 451,
    HOSTHEADER = 452,
    UID = 453,
    EUID = 454,
    GID = 455,
    MMONIT = 456,
    INSTANCE = 457,
    USERNAME = 458,
    PASSWORD = 459,
    TIMESTAMP = 460,
    CHANGED = 461,
    MILLISECOND = 462,
    SECOND = 463,
    MINUTE = 464,
    HOUR = 465,
    DAY = 466,
    MONTH = 467,
    SSLAUTO = 468,
    SSLV2 = 469,
    SSLV3 = 470,
    TLSV1 = 471,
    TLSV11 = 472,
    TLSV12 = 473,
    CERTMD5 = 474,
    AUTO = 475,
    BYTE = 476,
    KILOBYTE = 477,
    MEGABYTE = 478,
    GIGABYTE = 479,
    INODE = 480,
    SPACE = 481,
    TFREE = 482,
    PERMISSION = 483,
    SIZE = 484,
    MATCH = 485,
    NOT = 486,
    IGNORE = 487,
    ACTION = 488,
    UPTIME = 489,
    EXEC = 490,
    UNMONITOR = 491,
    PING = 492,
    PING4 = 493,
    PING6 = 494,
    ICMP = 495,
    ICMPECHO = 496,
    NONEXIST = 497,
    EXIST = 498,
    INVALID = 499,
    DATA = 500,
    RECOVERED = 501,
    PASSED = 502,
    SUCCEEDED = 503,
    URL = 504,
    CONTENT = 505,
    PID = 506,
    PPID = 507,
    FSFLAG = 508,
    REGISTER = 509,
    CREDENTIALS = 510,
    URLOBJECT = 511,
    ADDRESSOBJECT = 512,
    TARGET = 513,
    TIMESPEC = 514,
    HTTPHEADER = 515,
    MAXFORWARD = 516,
    FIPS = 517,
    GREATER = 518,
    GREATEROREQUAL = 519,
    LESS = 520,
    LESSOREQUAL = 521,
    EQUAL = 522,
    NOTEQUAL = 523
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define THEN 260
#define FAILED 261
#define SET 262
#define LOGFILE 263
#define FACILITY 264
#define DAEMON 265
#define SYSLOG 266
#define MAILSERVER 267
#define HTTPD 268
#define ALLOW 269
#define REJECTOPT 270
#define ADDRESS 271
#define INIT 272
#define TERMINAL 273
#define BATCH 274
#define READONLY 275
#define CLEARTEXT 276
#define MD5HASH 277
#define SHA1HASH 278
#define CRYPT 279
#define DELAY 280
#define PEMFILE 281
#define ENABLE 282
#define DISABLE 283
#define SSL 284
#define CIPHER 285
#define CLIENTPEMFILE 286
#define ALLOWSELFCERTIFICATION 287
#define SELFSIGNED 288
#define VERIFY 289
#define CERTIFICATE 290
#define CACERTIFICATEFILE 291
#define CACERTIFICATEPATH 292
#define VALID 293
#define INTERFACE 294
#define LINK 295
#define PACKET 296
#define BYTEIN 297
#define BYTEOUT 298
#define PACKETIN 299
#define PACKETOUT 300
#define SPEED 301
#define SATURATION 302
#define UPLOAD 303
#define DOWNLOAD 304
#define TOTAL 305
#define IDFILE 306
#define STATEFILE 307
#define SEND 308
#define EXPECT 309
#define CYCLE 310
#define COUNT 311
#define REMINDER 312
#define REPEAT 313
#define LIMITS 314
#define SENDEXPECTBUFFER 315
#define EXPECTBUFFER 316
#define FILECONTENTBUFFER 317
#define HTTPCONTENTBUFFER 318
#define PROGRAMOUTPUT 319
#define NETWORKTIMEOUT 320
#define PROGRAMTIMEOUT 321
#define STARTTIMEOUT 322
#define STOPTIMEOUT 323
#define RESTARTTIMEOUT 324
#define PIDFILE 325
#define START 326
#define STOP 327
#define PATHTOK 328
#define HOST 329
#define HOSTNAME 330
#define PORT 331
#define IPV4 332
#define IPV6 333
#define TYPE 334
#define UDP 335
#define TCP 336
#define TCPSSL 337
#define PROTOCOL 338
#define CONNECTION 339
#define ALERT 340
#define NOALERT 341
#define MAILFORMAT 342
#define UNIXSOCKET 343
#define SIGNATURE 344
#define TIMEOUT 345
#define RETRY 346
#define RESTART 347
#define CHECKSUM 348
#define EVERY 349
#define NOTEVERY 350
#define DEFAULT 351
#define HTTP 352
#define HTTPS 353
#define APACHESTATUS 354
#define FTP 355
#define SMTP 356
#define SMTPS 357
#define POP 358
#define POPS 359
#define IMAP 360
#define IMAPS 361
#define CLAMAV 362
#define NNTP 363
#define NTP3 364
#define MYSQL 365
#define DNS 366
#define WEBSOCKET 367
#define SSH 368
#define DWP 369
#define LDAP2 370
#define LDAP3 371
#define RDATE 372
#define RSYNC 373
#define TNS 374
#define PGSQL 375
#define POSTFIXPOLICY 376
#define SIP 377
#define LMTP 378
#define GPS 379
#define RADIUS 380
#define MEMCACHE 381
#define REDIS 382
#define MONGODB 383
#define SIEVE 384
#define STRING 385
#define PATH 386
#define MAILADDR 387
#define MAILFROM 388
#define MAILREPLYTO 389
#define MAILSUBJECT 390
#define MAILBODY 391
#define SERVICENAME 392
#define STRINGNAME 393
#define NUMBER 394
#define PERCENT 395
#define LOGLIMIT 396
#define CLOSELIMIT 397
#define DNSLIMIT 398
#define KEEPALIVELIMIT 399
#define REPLYLIMIT 400
#define REQUESTLIMIT 401
#define STARTLIMIT 402
#define WAITLIMIT 403
#define GRACEFULLIMIT 404
#define CLEANUPLIMIT 405
#define REAL 406
#define CHECKPROC 407
#define CHECKFILESYS 408
#define CHECKFILE 409
#define CHECKDIR 410
#define CHECKHOST 411
#define CHECKSYSTEM 412
#define CHECKFIFO 413
#define CHECKPROGRAM 414
#define CHECKNET 415
#define THREADS 416
#define CHILDREN 417
#define STATUS 418
#define ORIGIN 419
#define VERSIONOPT 420
#define READ 421
#define WRITE 422
#define OPERATION 423
#define SERVICETIME 424
#define DISK 425
#define RESOURCE 426
#define MEMORY 427
#define TOTALMEMORY 428
#define LOADAVG1 429
#define LOADAVG5 430
#define LOADAVG15 431
#define SWAP 432
#define MODE 433
#define ACTIVE 434
#define PASSIVE 435
#define MANUAL 436
#define ONREBOOT 437
#define NOSTART 438
#define LASTSTATE 439
#define CPU 440
#define TOTALCPU 441
#define CPUUSER 442
#define CPUSYSTEM 443
#define CPUWAIT 444
#define GROUP 445
#define REQUEST 446
#define DEPENDS 447
#define BASEDIR 448
#define SLOT 449
#define EVENTQUEUE 450
#define SECRET 451
#define HOSTHEADER 452
#define UID 453
#define EUID 454
#define GID 455
#define MMONIT 456
#define INSTANCE 457
#define USERNAME 458
#define PASSWORD 459
#define TIMESTAMP 460
#define CHANGED 461
#define MILLISECOND 462
#define SECOND 463
#define MINUTE 464
#define HOUR 465
#define DAY 466
#define MONTH 467
#define SSLAUTO 468
#define SSLV2 469
#define SSLV3 470
#define TLSV1 471
#define TLSV11 472
#define TLSV12 473
#define CERTMD5 474
#define AUTO 475
#define BYTE 476
#define KILOBYTE 477
#define MEGABYTE 478
#define GIGABYTE 479
#define INODE 480
#define SPACE 481
#define TFREE 482
#define PERMISSION 483
#define SIZE 484
#define MATCH 485
#define NOT 486
#define IGNORE 487
#define ACTION 488
#define UPTIME 489
#define EXEC 490
#define UNMONITOR 491
#define PING 492
#define PING4 493
#define PING6 494
#define ICMP 495
#define ICMPECHO 496
#define NONEXIST 497
#define EXIST 498
#define INVALID 499
#define DATA 500
#define RECOVERED 501
#define PASSED 502
#define SUCCEEDED 503
#define URL 504
#define CONTENT 505
#define PID 506
#define PPID 507
#define FSFLAG 508
#define REGISTER 509
#define CREDENTIALS 510
#define URLOBJECT 511
#define ADDRESSOBJECT 512
#define TARGET 513
#define TIMESPEC 514
#define HTTPHEADER 515
#define MAXFORWARD 516
#define FIPS 517
#define GREATER 518
#define GREATEROREQUAL 519
#define LESS 520
#define LESSOREQUAL 521
#define EQUAL 522
#define NOTEQUAL 523

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 309 "src/p.y" /* yacc.c:355  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 933 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 948 "src/y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1669

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  275
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  232
/* YYNRULES -- Number of rules.  */
#define YYNRULES  752
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1412

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   523

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
       2,     2,     2,     2,     2,     2,     2,     2,   271,     2,
       2,     2,     2,     2,   272,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   273,     2,   274,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   269,     2,   270,     2,     2,     2,     2,
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
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   359,   359,   360,   363,   364,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   396,   397,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   423,   424,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   447,   448,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   472,   473,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   493,   494,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   512,
     513,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   533,   534,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     551,   552,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   572,   573,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     589,   593,   596,   602,   612,   617,   620,   625,   630,   633,
     636,   641,   647,   650,   651,   654,   657,   660,   663,   666,
     669,   672,   675,   678,   681,   684,   687,   690,   693,   698,
     703,   711,   714,   719,   722,   726,   732,   737,   742,   750,
     753,   754,   757,   763,   764,   767,   770,   771,   772,   773,
     776,   777,   782,   787,   790,   793,   794,   797,   801,   805,
     809,   813,   816,   820,   823,   826,   829,   834,   840,   841,
     844,   858,   865,   874,   875,   878,   882,   886,   890,   898,
     906,   910,   916,   925,   932,   947,   948,   951,   960,   971,
     972,   975,   978,   981,   982,   983,   984,   987,  1004,  1005,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1020,
    1026,  1032,  1038,  1044,  1050,  1051,  1054,  1055,  1058,  1061,
    1066,  1071,  1074,  1082,  1086,  1090,  1094,  1098,  1098,  1105,
    1105,  1112,  1112,  1119,  1119,  1126,  1133,  1134,  1137,  1143,
    1146,  1151,  1154,  1157,  1164,  1173,  1178,  1181,  1186,  1191,
    1196,  1204,  1210,  1225,  1230,  1237,  1246,  1249,  1254,  1257,
    1263,  1266,  1271,  1272,  1275,  1276,  1279,  1282,  1287,  1291,
    1295,  1298,  1303,  1306,  1311,  1316,  1319,  1324,  1333,  1334,
    1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1350,  1357,  1358,  1361,  1362,  1363,  1364,  1365,  1366,
    1369,  1375,  1376,  1379,  1380,  1381,  1382,  1383,  1386,  1392,
    1397,  1402,  1409,  1410,  1413,  1414,  1415,  1416,  1419,  1422,
    1427,  1432,  1438,  1441,  1446,  1449,  1453,  1458,  1459,  1462,
    1463,  1466,  1471,  1474,  1477,  1480,  1483,  1486,  1489,  1494,
    1497,  1502,  1505,  1508,  1511,  1514,  1517,  1520,  1523,  1527,
    1530,  1533,  1538,  1541,  1544,  1549,  1552,  1555,  1558,  1561,
    1564,  1567,  1570,  1573,  1576,  1579,  1584,  1592,  1602,  1603,
    1606,  1609,  1612,  1615,  1620,  1621,  1624,  1627,  1632,  1633,
    1636,  1644,  1649,  1652,  1657,  1662,  1663,  1666,  1669,  1674,
    1675,  1678,  1681,  1684,  1685,  1686,  1687,  1688,  1691,  1697,
    1703,  1708,  1714,  1715,  1720,  1725,  1726,  1729,  1734,  1735,
    1738,  1741,  1744,  1747,  1751,  1755,  1759,  1763,  1767,  1771,
    1775,  1779,  1783,  1789,  1793,  1800,  1806,  1812,  1819,  1824,
    1829,  1834,  1839,  1842,  1847,  1850,  1855,  1858,  1863,  1866,
    1871,  1874,  1879,  1884,  1889,  1895,  1903,  1909,  1910,  1913,
    1917,  1920,  1924,  1929,  1932,  1935,  1936,  1939,  1940,  1941,
    1942,  1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,
    1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,
    1962,  1963,  1964,  1965,  1966,  1967,  1968,  1971,  1972,  1975,
    1976,  1979,  1980,  1981,  1982,  1985,  1989,  1993,  1999,  2002,
    2005,  2011,  2014,  2018,  2023,  2030,  2033,  2034,  2037,  2040,
    2047,  2056,  2062,  2063,  2066,  2067,  2068,  2069,  2070,  2071,
    2072,  2075,  2081,  2082,  2085,  2086,  2087,  2088,  2091,  2096,
    2103,  2110,  2111,  2112,  2113,  2116,  2121,  2126,  2131,  2138,
    2143,  2150,  2157,  2164,  2171,  2172,  2173,  2176,  2181,  2188,
    2193,  2200,  2201,  2204,  2210,  2217,  2218,  2219,  2220,  2221,
    2222,  2223,  2224,  2227,  2228,  2229,  2230,  2231,  2232,  2235,
    2236,  2237,  2239,  2240,  2242,  2245,  2248,  2256,  2259,  2262,
    2266,  2269,  2272,  2275,  2280,  2291,  2302,  2312,  2324,  2325,
    2330,  2337,  2338,  2343,  2350,  2353,  2356,  2359,  2364,  2368,
    2375,  2381,  2382,  2383,  2386,  2393,  2400,  2407,  2416,  2425,
    2432,  2441,  2450,  2457,  2466,  2473,  2482,  2489,  2498,  2504,
    2505,  2506,  2507,  2508,  2511,  2516,  2523,  2531,  2538,  2546,
    2554,  2561,  2567,  2574,  2582,  2585,  2591,  2597,  2604,  2610,
    2617,  2623,  2630,  2636,  2643,  2649,  2654,  2662,  2670,  2678,
    2686,  2694,  2702,  2712,  2720,  2728,  2736,  2744,  2752,  2762,
    2765,  2766,  2767
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "THEN", "FAILED", "SET",
  "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER", "HTTPD",
  "ALLOW", "REJECTOPT", "ADDRESS", "INIT", "TERMINAL", "BATCH", "READONLY",
  "CLEARTEXT", "MD5HASH", "SHA1HASH", "CRYPT", "DELAY", "PEMFILE",
  "ENABLE", "DISABLE", "SSL", "CIPHER", "CLIENTPEMFILE",
  "ALLOWSELFCERTIFICATION", "SELFSIGNED", "VERIFY", "CERTIFICATE",
  "CACERTIFICATEFILE", "CACERTIFICATEPATH", "VALID", "INTERFACE", "LINK",
  "PACKET", "BYTEIN", "BYTEOUT", "PACKETIN", "PACKETOUT", "SPEED",
  "SATURATION", "UPLOAD", "DOWNLOAD", "TOTAL", "IDFILE", "STATEFILE",
  "SEND", "EXPECT", "CYCLE", "COUNT", "REMINDER", "REPEAT", "LIMITS",
  "SENDEXPECTBUFFER", "EXPECTBUFFER", "FILECONTENTBUFFER",
  "HTTPCONTENTBUFFER", "PROGRAMOUTPUT", "NETWORKTIMEOUT", "PROGRAMTIMEOUT",
  "STARTTIMEOUT", "STOPTIMEOUT", "RESTARTTIMEOUT", "PIDFILE", "START",
  "STOP", "PATHTOK", "HOST", "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE",
  "UDP", "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT",
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
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS",
  "CHILDREN", "STATUS", "ORIGIN", "VERSIONOPT", "READ", "WRITE",
  "OPERATION", "SERVICETIME", "DISK", "RESOURCE", "MEMORY", "TOTALMEMORY",
  "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE",
  "MANUAL", "ONREBOOT", "NOSTART", "LASTSTATE", "CPU", "TOTALCPU",
  "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST", "DEPENDS",
  "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID",
  "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD", "TIMESTAMP",
  "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "CERTMD5",
  "AUTO", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE",
  "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE", "ACTION",
  "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6", "ICMP",
  "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "ADDRESSOBJECT", "TARGET",
  "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "GREATER",
  "GREATEROREQUAL", "LESS", "LESSOREQUAL", "EQUAL", "NOTEQUAL", "'{'",
  "'}'", "':'", "'@'", "'['", "']'", "$accept", "cfgfile",
  "statement_list", "statement", "optproclist", "optproc", "optfilelist",
  "optfile", "optfilesyslist", "optfilesys", "optdirlist", "optdir",
  "opthostlist", "opthost", "optnetlist", "optnet", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optprogramlist", "optprogram",
  "setalert", "setdaemon", "setterminal", "startdelay", "setinit",
  "setonreboot", "setexpectbuffer", "setlimits", "limitlist", "limit",
  "setfips", "setlog", "seteventqueue", "setidfile", "setstatefile",
  "setpid", "setmmonits", "mmonitlist", "mmonit", "mmonitoptlist",
  "mmonitopt", "credentials", "setssl", "ssl", "ssloptionlist",
  "ssloption", "sslexpire", "expireoperator", "sslchecksum",
  "checksumoperator", "sslversion", "certmd5", "setmailservers",
  "setmailformat", "mailserverlist", "mailserver", "mailserveroptlist",
  "mailserveropt", "sethttpd", "httpdlist", "httpdoption", "pemfile",
  "clientpemfile", "allowselfcert", "httpdport", "httpdsocket",
  "sigenable", "sigdisable", "signature", "bindaddress", "allow", "$@1",
  "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checknet", "checksystem", "checkfifo", "checkprogram", "start", "stop",
  "restart", "argumentlist", "useroptionlist", "argument", "useroption",
  "username", "password", "hostname", "connection", "connectionoptlist",
  "connectionopt", "connectionurl", "connectionurloptlist",
  "connectionurlopt", "connectionunix", "connectionuxoptlist",
  "connectionuxopt", "icmp", "icmpoptlist", "icmpopt", "host", "port",
  "unixsocket", "ip", "type", "typeoptlist", "typeopt", "outgoing",
  "protocol", "sendexpect", "websocketlist", "websocket", "smtplist",
  "smtp", "mysqllist", "mysql", "target", "maxforward", "siplist", "sip",
  "httplist", "http", "status", "request", "responsesum", "hostheader",
  "httpheaderlist", "secret", "radiuslist", "radius", "apache_stat_list",
  "apache_stat", "exist", "pid", "ppid", "uptime", "icmpcount", "icmpsize",
  "icmptimeout", "icmpoutgoing", "stoptimeout", "starttimeout",
  "restarttimeout", "programtimeout", "nettimeout", "connectiontimeout",
  "retry", "actionrate", "urloption", "urloperator", "alert", "alertmail",
  "noalertmail", "eventoptionlist", "eventoption", "formatlist",
  "formatoptionlist", "formatoption", "every", "mode", "onreboot", "group",
  "depend", "dependlist", "dependant", "statusvalue", "resourceprocess",
  "resourceprocesslist", "resourceprocessopt", "resourcesystem",
  "resourcesystemlist", "resourcesystemopt", "resourcecpuproc",
  "resourcecpu", "resourcecpuid", "resourcemem", "resourceswap",
  "resourcethreads", "resourcechild", "resourceload", "resourceloadavg",
  "resourceread", "resourcewrite", "value", "timestamp", "operator",
  "time", "totaltime", "currenttime", "repeat", "action", "action1",
  "action2", "rateXcycles", "rateXYcycles", "rate1", "rate2", "recovery",
  "checksum", "hashtype", "inode", "space", "read", "write", "servicetime",
  "fsflag", "unit", "permission", "match", "matchflagnot", "size", "uid",
  "euid", "gid", "linkstatus", "linkspeed", "linksaturation", "upload",
  "download", "icmptype", "reminder", YY_NULLPTR
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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   123,
     125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -651

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-651)))

#define YYTABLE_NINF -679

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     400,    72,   -72,   -59,   -43,   -30,     2,    54,    57,    84,
      89,   182,   400,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,    20,    69,    19,  -651,  -651,   196,   -28,   118,   151,
     -23,   164,   175,   190,    61,     1,   -38,    77,  -651,   -39,
     -32,   254,   283,   312,   372,  -651,   347,   351,    71,  -651,
    -651,   491,   340,   603,   619,   771,   832,  1342,   619,  1401,
     444,  -651,   387,   410,   -44,  -651,   906,  -651,  -651,  -651,
    -651,  -651,   406,  -651,  -651,   574,  -651,  -651,  -651,   361,
     377,  -651,    77,   265,   255,   259,  1217,   474,   409,   419,
     158,   482,   430,   456,   462,   464,   490,   477,   486,   139,
     490,   490,   509,   490,   -87,   388,   324,    45,   524,   517,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,   -36,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,    29,  -106,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,    58,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,    31,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,    39,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   169,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  1105,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,   -13,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   535,   651,
    -651,   561,   177,   573,  -651,   643,     4,   602,   589,   655,
     662,   468,   622,  -651,   640,   638,   449,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,    66,
      98,  -651,  -651,  -651,  -651,  -651,   537,   539,  -651,  -651,
     -14,  -651,   593,  -651,   185,   265,   547,  -651,   574,  1217,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
     925,  -651,   674,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,   371,  -651,  -651,  -651,
     335,   723,   630,   630,   470,   630,   630,  -651,  -651,  -651,
     630,   630,   435,   578,   630,   678,  1190,  -651,  -651,  -651,
    -651,  -651,  -651,   630,  -651,  -651,   521,   616,  -651,   646,
     768,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,   517,  -651,   565,  1217,   474,   107,   630,    52,   630,
     578,   390,   607,  -651,   390,   615,   208,   630,   630,   630,
    -115,   827,   878,    -6,   225,   819,   630,   630,   630,   644,
     840,   630,  -651,  -651,  -651,  -651,  1159,  -651,  -651,   630,
    -651,  -651,  -651,   630,   719,  -651,   745,  -651,   793,   315,
     758,  -651,  -651,  -651,  -651,  -651,  -651,   760,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,   684,   769,  -651,   788,
     797,   805,   670,   813,   815,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,   681,   685,   686,   687,   688,
     689,   691,   693,  -651,  -651,   695,   703,   704,   705,   707,
     714,   715,   716,   718,  -651,  -651,  -651,  -651,  -651,  -651,
     808,   851,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   364,
     985,   909,  -651,   938,   861,    13,    44,   123,  -651,  -651,
    -651,   872,   875,   310,   316,   336,   751,   937,  -651,   880,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,   881,   884,   630,
     630,   -11,   -11,   -11,   -11,   678,   678,   678,   887,   -21,
    -651,  -651,  1016,  -651,  1029,   -11,   896,   149,  -651,   897,
     323,  -651,   898,   343,  -651,  -651,  -651,  1217,  1071,  -651,
    -651,  -651,   899,   946,   912,   678,   678,   678,   959,   914,
    -651,  -651,   604,   609,   618,   634,   112,   187,   218,   678,
     630,   232,   630,   -11,  -651,  -651,  -651,   976,   678,   917,
     918,   919,   630,   630,   678,   -11,  -651,  1054,   -11,   921,
     678,  -651,   177,    10,  -651,  -651,  -651,  -651,  -651,  -651,
     932,   933,   934,   936,   940,  1048,    78,   941,   947,   945,
     746,   755,   952,   954,   590,   948,   950,   958,   960,   961,
     962,   963,   967,   968,  -651,   890,  -651,   909,   474,  -651,
     902,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   678,
     678,   678,   678,   678,   678,  -651,   969,  -651,   901,  1031,
    -651,  -651,   233,   271,  -651,  -651,   375,   402,   972,   979,
    1104,  1116,  1123,   356,  -651,  1074,   346,   346,  -651,   924,
    -651,   926,  -651,   928,  -651,  1156,   909,   678,     9,   356,
    1133,  1134,  1135,   678,   406,   678,   678,   678,   678,  -651,
    -651,  -651,  -651,   981,   406,   982,   406,   944,   939,  1147,
     300,    38,  1017,   -11,   617,    37,    37,    37,   922,  -651,
    1157,  1026,    47,    96,  1032,  1033,  1168,   626,   346,  1034,
     678,  1174,   913,   913,  -651,  1051,   940,   940,   940,  1048,
    -651,   940,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,   406,   406,   406,   406,
     584,   647,   654,   667,   694,  -651,   474,  -651,  -651,  1177,
    1179,  1181,  1183,  1184,  1186,    15,  -651,   275,  1062,  1063,
     635,  1439,  1055,  1058,  -651,  -651,  -651,  -651,  -651,  -651,
    1207,  1210,  1049,   406,  1053,   406,  -651,  -651,  -651,  -651,
    -651,  -651,   346,   346,   346,  -651,  -651,  -651,  -651,  -651,
     678,  -651,  -651,  -651,  -651,  -651,   490,  -651,  -651,  1212,
    1212,  -651,  -651,  -651,   909,   474,  1218,  1092,  1219,   678,
     346,   346,   346,  1221,   678,  1226,  1227,  1228,  1234,   678,
    1035,   678,  1035,   678,   678,   346,    38,  1101,  1240,   678,
     649,   678,   678,  1117,  1109,  1111,  1112,  -651,  -651,  -651,
    -651,  -651,  1247,  1248,  1249,  -651,    37,   346,   678,  1035,
    1035,  1035,  1035,   155,   206,   346,  -651,  -651,  1212,  -651,
    1251,   346,  1128,  1136,  -651,   940,   940,   940,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,   346,   346,   346,   346,   346,
     346,    43,   390,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    1260,  1137,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  1263,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,   900,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   -18,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  1064,  -651,   346,   115,
    -651,  1035,  -651,  1035,  -651,  -651,  1212,  1265,   329,  1271,
    -651,  -651,   474,  -651,   346,   678,   346,  1270,  -651,  1212,
    -651,   346,  1278,   346,   346,   346,   346,  1279,  -651,   678,
    1280,   678,  1281,  1282,  -651,  1283,   678,   346,  1284,   678,
     678,  1286,  1290,  -651,  -651,  1088,  -651,   346,   346,   346,
    1292,  1212,  1297,   678,   678,   678,   678,    -7,   153,   298,
     328,  1212,  -651,   346,  -651,  -651,  -651,  1212,  1212,  1212,
    1212,  1212,  1212,  1040,  1178,   346,  -651,   346,   991,   253,
     253,  1187,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   630,  -651,  -651,   900,  -651,   648,   648,   648,  1182,
    1195,  1170,  1189,   -18,  -651,  -163,  1121,  -651,  1212,  -651,
    -651,  -651,  -651,  -651,   346,  1232,   -29,  -651,   424,  -651,
    1212,  1323,  1212,   346,  -651,  -651,   346,  -651,  -651,  -651,
    -651,   346,  1325,   346,  1332,   346,   346,   346,  1333,  1212,
     346,  1335,  1337,   346,   346,  -651,  1212,  1212,  1212,   346,
    -651,   346,  1338,  1344,  1345,  1348,   562,  -651,  -651,  -651,
     678,   562,   678,   562,   678,   562,   678,  -651,  1212,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  1216,  -651,  1212,  1212,
    -651,  -651,  -651,  1229,   630,  1246,  1252,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  1239,  1242,  1244,  1255,
    1256,  1258,  1264,  1266,  1272,  1273,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   359,  1277,
    -651,  -651,  -651,  1257,  -651,  -651,  -651,  1212,    14,  -651,
     678,   678,   678,  -651,   346,  -651,  1212,  1212,  1212,   346,
    1212,   346,  1212,  1212,  1212,   346,  -651,  1212,   346,   346,
    1212,  1212,  -651,  -651,  -651,  1212,  1212,   346,   346,   346,
     346,   678,  1352,   678,  1374,   678,  1381,   678,  1397,  -651,
    1199,  -651,  -651,  -651,  1285,  -651,  -651,  -183,  1289,  1291,
    1293,  1298,  1299,  1301,  1302,  1303,  1304,  1307,  -651,  -651,
    -651,  -651,  -651,  -651,  1363,  -651,  -651,  1416,  1418,  1420,
    1212,  -651,  -651,  -651,  1212,  -651,  1212,  -651,  -651,  -651,
    1212,  -651,  1212,  1212,  -651,  -651,  -651,  -651,  1212,  1212,
    1212,  1212,  1430,   346,  1449,   346,  1450,   346,  1451,   346,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,   346,   346,   346,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,   346,  1212,
     346,  1212,   346,  1212,   346,  1212,  -651,  -651,  -651,  -651,
    1212,  -651,  1212,  -651,  1212,  -651,  1212,  -651,  -651,  -651,
    -651,  -651
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    22,    19,
      21,    23,    10,    11,    17,    18,    16,    12,     7,    13,
      14,    15,    33,    56,    76,    97,   114,   129,   146,   160,
     177,     0,     0,     0,   288,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,   577,
       0,     0,     0,     0,     0,   342,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     221,   220,   195,   279,   530,   275,   287,   194,   245,   226,
     227,   203,   709,   228,   543,     0,   198,   199,   200,     0,
       0,   233,   229,   240,     0,     0,     0,   750,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    45,    46,    47,    38,    39,    40,
      44,    48,    49,   577,   542,    50,    51,    52,    53,    54,
      55,    41,    42,    43,   724,   724,    57,    58,    59,    60,
      61,    63,    65,    64,    72,    73,    74,    75,    62,    69,
      66,    71,    70,    67,    68,     0,    77,    78,    79,    80,
      81,    83,    82,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    84,    85,    86,     0,    98,    99,   100,
     101,   102,   104,   106,   105,   110,   111,   112,   113,   103,
     107,   108,   109,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,   130,
     131,   132,   133,   139,   143,   140,   141,   142,   144,   145,
     134,   135,   136,   137,   138,     0,   147,   148,   149,   150,
     159,   151,   152,   153,   154,   155,   156,   157,   158,   161,
     162,   163,   164,   165,   167,   169,   168,   173,   174,   175,
     176,   166,   170,   171,   172,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,     0,
     193,     0,   277,     0,   276,   365,     0,     0,     0,     0,
       0,   243,     0,   301,     0,     0,     0,   290,   289,   291,
     292,   293,   297,   298,   308,   309,   294,   295,   296,     0,
       0,   710,   711,   712,   713,   201,     0,     0,   583,   584,
       0,   579,   223,   225,   232,   240,     0,   230,     0,     0,
     561,   548,   549,   563,   564,   571,   569,   551,   573,   550,
     572,   568,   575,   557,   559,   574,   565,   570,   547,   576,
     554,   558,   562,   555,   560,   553,   552,   566,   567,   556,
       0,   545,     0,   190,   331,   332,   333,   334,   337,   336,
     335,   338,   339,   343,   356,   357,   528,   352,   340,   341,
     408,     0,   645,   645,     0,   645,   645,   634,   635,   636,
     645,   645,     0,     0,   645,   678,   678,   602,   604,   605,
     606,   607,   608,   645,   609,   610,   524,   522,   544,   526,
       0,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     598,   595,   596,     0,     0,   750,   691,   645,   691,   645,
     725,     0,     0,   725,     0,     0,     0,   645,   645,   645,
       0,   645,   645,     0,   408,     0,   645,   645,   645,     0,
       0,   645,   624,   621,   622,   623,   678,   612,   617,   645,
     615,   616,   614,   645,     0,   222,     0,   279,     0,     0,
       0,   270,   265,   266,   267,   268,   269,     0,   271,   283,
     284,   285,   286,   280,   281,   282,     0,     0,   273,     0,
       0,     0,   325,   313,     0,   310,   299,   305,   307,   245,
     300,   302,   303,   304,   306,     0,     0,     0,     0,     0,
       0,     0,     0,   242,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   202,   204,   581,   582,   274,   580,
       0,     0,   234,   236,   237,   238,   239,   231,   241,     0,
       0,   577,   546,   751,     0,     0,     0,   528,   353,   354,
     344,     0,     0,     0,     0,     0,     0,     0,   391,     0,
     652,   646,   647,   648,   649,   650,   651,     0,     0,   645,
     645,     0,     0,     0,     0,   678,   678,   678,     0,     0,
     679,   680,     0,   603,     0,     0,     0,   524,   346,     0,
     522,   348,     0,   526,   350,   585,   597,     0,     0,   539,
     692,   693,     0,     0,     0,   678,   678,   678,     0,     0,
     537,   538,     0,     0,     0,     0,     0,     0,     0,   678,
     645,     0,   645,     0,   402,   402,   402,     0,   678,     0,
       0,     0,   645,   645,   678,     0,   613,     0,     0,     0,
     678,   196,   278,   263,   363,   362,   364,   272,   531,   366,
     314,   315,   316,     0,     0,   329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,   578,   577,   750,   752,
       0,   358,   360,   359,   361,   355,   345,   409,   411,   678,
     678,   678,   678,   678,   678,   382,     0,   368,   678,     0,
     631,   632,     0,     0,   642,   641,   709,   709,     0,     0,
       0,     0,     0,   653,   676,     0,     0,     0,   633,     0,
     347,     0,   349,     0,   351,     0,   577,   678,   678,   653,
       0,     0,     0,   678,   709,   678,   678,   678,   678,   719,
     718,   723,   722,   642,   709,   642,   709,   642,     0,     0,
       0,   642,     0,     0,   709,   678,   678,   678,     0,   402,
       0,     0,   709,   709,     0,     0,     0,   709,     0,     0,
     678,     0,   263,   263,   264,     0,     0,     0,     0,   329,
     328,   318,   326,   330,   312,   244,   253,   252,   254,   249,
     250,   247,   248,   255,   256,   251,   709,   709,   709,   709,
       0,     0,     0,     0,     0,   235,   750,   191,   529,     0,
       0,     0,     0,     0,     0,   678,   410,   678,     0,     0,
       0,     0,     0,     0,   392,   393,   394,   395,   396,   397,
       0,     0,   642,   709,   642,   709,   626,   625,   628,   627,
     618,   619,     0,     0,     0,   654,   655,   656,   657,   658,
     678,   677,   671,   672,   667,   670,     0,   673,   674,   684,
     684,   525,   523,   527,   577,   750,     0,     0,     0,   678,
       0,     0,     0,     0,   678,     0,     0,     0,     0,   678,
     662,   678,   662,   678,   678,     0,   642,     0,     0,   678,
     709,   678,   678,     0,     0,     0,     0,   403,   404,   405,
     406,   407,     0,     0,     0,   749,   678,     0,   678,   662,
     662,   662,   662,   709,   709,     0,   630,   629,   684,   620,
       0,     0,     0,     0,   260,   320,   322,   324,   311,   327,
     205,   206,   207,   208,   209,   210,   211,   212,   215,   216,
     213,   214,   217,   218,   192,     0,     0,     0,     0,     0,
       0,     0,     0,   387,   389,   388,   383,   385,   386,   384,
       0,     0,   412,   413,   378,   380,   379,   369,   370,   371,
     376,   372,   373,   375,   377,   374,     0,   456,   457,   416,
     414,   417,   423,   479,   479,     0,   426,   464,   464,   440,
     441,   429,   430,   431,   437,   438,   468,   424,     0,   445,
     425,   432,   433,   446,   448,   449,   450,   439,   475,   451,
     452,   495,   454,   447,   434,   442,     0,   533,     0,     0,
     638,   662,   640,   662,   515,   516,   684,     0,   664,     0,
     514,   601,   750,   540,     0,   678,     0,     0,   644,   684,
     727,     0,     0,     0,     0,     0,     0,     0,   663,   678,
       0,   678,     0,     0,   708,     0,   678,     0,     0,   678,
     678,     0,     0,   521,   518,     0,   519,     0,     0,     0,
       0,   684,     0,   678,   678,   678,   678,     0,     0,     0,
       0,   684,   611,     0,   600,   261,   262,   684,   684,   684,
     684,   684,   684,   258,     0,     0,   421,     0,   415,   427,
     428,     0,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   645,   500,   501,   422,   498,   443,   444,   435,     0,
       0,     0,     0,   455,   458,   436,   453,   532,   684,   535,
     534,   637,   639,   513,     0,     0,   664,   668,     0,   541,
     684,     0,   684,     0,   715,   690,     0,   717,   716,   721,
     720,     0,     0,     0,     0,     0,     0,     0,     0,   684,
       0,     0,     0,     0,     0,   520,   684,   684,   684,     0,
     734,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     678,     0,   678,     0,   678,     0,   678,   735,   684,   728,
     729,   730,   731,   732,   733,   259,     0,   536,   684,   684,
     419,   420,   418,     0,   645,     0,     0,   492,   481,   482,
     480,   485,   483,   484,   486,   502,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   499,   466,   467,   465,
     470,   471,   469,   462,   460,   463,   461,   459,     0,     0,
     477,   478,   476,     0,   497,   496,   390,   684,     0,   669,
     681,   681,   681,   714,     0,   688,   684,   684,   684,     0,
     684,     0,   684,   684,   684,     0,   694,   684,     0,     0,
     684,   684,   399,   400,   401,   684,   684,     0,     0,     0,
       0,   678,     0,   678,     0,   678,     0,   678,     0,   599,
       0,   381,   367,   490,     0,   489,   491,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   473,   472,
     474,   494,   517,   665,     0,   682,   683,     0,     0,     0,
     684,   643,   726,   703,   684,   705,   684,   706,   707,   696,
     684,   695,   684,   684,   699,   698,   398,   736,   684,   684,
     684,   684,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   488,   493,   487,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   666,     0,     0,     0,   689,   702,
     704,   697,   701,   700,   740,   737,   746,   743,     0,   684,
       0,   684,     0,   684,     0,   684,   675,   685,   686,   687,
     684,   741,   684,   738,   684,   747,   684,   744,   742,   739,
     748,   745
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -651,  -651,  -651,  1446,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    1361,  -651,  -651,  1139,  -651,   -84,   966,  -651,   652,  -651,
    -314,   148,  -330,  -333,  -651,  -651,  -651,  1387,   999,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,    12,  -650,   692,
    -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  1295,
    1425,  1529,  -108,  -400,  -377,  -527,  -478,  -425,  -651,  1403,
    -651,  -651,  1405,  -651,  -651,  -651,  -651,  -651,  -651,  -581,
    -651,  -651,  -651,  -651,  -651,   661,  -651,  -651,  -651,   663,
     664,  -651,   373,   494,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,   495,  -651,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
    -651,  -651,   370,   530,  -651,  -651,  1428,  -651,  -651,  -651,
    -651,   907,   915,   908,   957,  -651,  -247,  -222,  1537,   690,
    -426,  1545,  1515,  -651,  -317,  -349,  -136,  1180,  -294,  1553,
    1561,  1574,  1582,  1590,  -651,  1091,  -651,  -651,  -651,  1119,
    -651,  -651,  1057,  -651,  -651,  -651,  -221,  -651,  -651,  -651,
    -218,  -651,  -651,  -651,   882,   394,  -390,   787,  -270,  -440,
     382,  -550,  -411,  -471,  -350,  -347,  -406,  -311,  -269,  -651,
    1093,  -651,  -651,  -651,  -651,  -651,  -651,   676,   536,  -651,
    1378,  -651,   501,  -651,   516,  -651,  -651,  -651,  -651,  -651,
    -651,  -427
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    71,   130,    72,   156,    73,   176,
      74,   197,    75,   214,    76,   229,    77,   246,    78,   259,
      79,   276,    14,    15,    16,   290,    17,    18,    19,    20,
     320,   535,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   334,   542,   337,    28,   489,   319,   524,   964,  1206,
     490,   785,   491,   492,    29,    30,    84,    85,   292,   493,
      31,    86,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   664,   786,   787,   788,   791,   792,   794,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   131,
     132,   133,   386,   557,   387,   559,   494,   495,   498,   134,
     827,   977,   135,   825,   966,   136,   708,   834,   220,   765,
     907,   567,   707,   568,   978,   835,  1108,  1212,   980,   836,
     837,  1133,  1134,  1126,  1239,  1128,  1242,  1250,  1251,  1135,
    1252,  1109,  1220,  1221,  1222,  1223,  1224,  1307,  1254,  1136,
    1255,  1124,  1125,   137,   138,   139,   140,   908,   909,   910,
     911,   601,   598,   604,   560,   295,   838,   839,   141,   969,
     622,   142,   143,   144,   370,   371,   107,   330,   331,   145,
     146,   147,   148,   149,   431,   432,   287,   150,   406,   407,
     258,   466,   467,   408,   468,   469,   409,   471,   410,   411,
     412,   413,   414,   415,   716,   168,   577,   860,  1190,  1059,
    1147,   868,   869,  1397,   590,   591,   592,  1327,  1040,   169,
     613,   187,   188,   189,   190,   191,   192,   325,   170,   171,
     442,   172,   151,   152,   153,   240,   241,   242,   243,   244,
     769,   373
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     594,   546,   307,   578,   545,   581,   582,   435,   609,   558,
     583,   584,   416,   417,   588,   419,   597,   600,   624,   603,
     544,   552,   550,   595,   470,   499,   500,   472,   501,  1145,
     695,    80,   782,   783,   724,   436,   539,   446,   108,   558,
     558,   109,   558,  -678,   301,   454,   293,   614,   104,   619,
     961,   104,   420,   903,   766,   767,  1129,   626,   627,   628,
     647,   631,   633,   877,   446,    60,   639,   640,   641,  1323,
     695,   645,    96,   695,   610,   611,   695,  1362,    61,   648,
      41,  1103,    42,   649,    43,    44,    83,   117,   919,    45,
      46,  1363,   515,   904,    62,  1248,   516,   517,  1249,   518,
     519,    47,   520,   521,   515,   832,   833,    63,   516,   517,
     118,   518,   519,   616,   520,   521,   426,   608,   725,   326,
     327,   328,   329,    48,    49,   443,   391,   905,   714,   610,
     611,    50,  1186,    51,   502,   503,   653,   921,   629,    64,
     715,   939,    52,   691,   444,   390,  1130,  1131,   589,    83,
     473,    81,   692,  1324,   589,    99,   100,    53,   525,    54,
     526,   527,   528,   529,   530,   531,   532,   533,   391,   555,
     391,   556,   421,  1132,   693,   455,   589,   589,   391,   720,
     721,   722,    69,   694,    97,    98,   862,   863,   916,   712,
     713,    65,   105,   474,    66,   433,  1087,   391,   110,   615,
     864,   552,  1187,  1188,  1189,  1139,   301,   865,    82,   740,
     741,   742,   478,   554,   301,    87,   456,   457,   458,   459,
     478,    67,   616,   759,   447,   448,    68,   449,   427,   428,
     106,   522,   770,   434,   437,   438,   437,   453,   776,   596,
     760,    88,   763,   522,   781,   470,    91,  1089,   472,    89,
     543,   753,   774,   775,    55,   539,   538,   615,   439,   552,
     440,   817,   403,   715,   450,   962,   906,    56,   321,   322,
     323,   324,   405,    57,   405,   541,   504,   784,   391,   441,
     616,   617,    90,   451,   452,   939,   939,   939,   376,   377,
     735,   971,  1191,   819,   820,   821,   822,   823,   824,   561,
     392,   393,   840,    92,   301,   563,    93,   565,   391,   394,
     961,   395,   396,   397,   398,   399,   870,   321,   322,   323,
     324,   555,    94,   556,   400,   401,   755,   111,   828,   829,
      95,   876,   878,   101,    58,   612,   523,   883,   715,   885,
     886,   887,   888,   154,   805,   402,  1213,   555,   795,   556,
     866,   867,   972,   973,   830,   898,   112,   757,   831,   912,
     913,   914,  1187,  1188,  1189,   832,   833,   928,   534,   715,
     403,   761,   842,   404,   930,   460,   321,   322,   323,   324,
     479,   480,   405,   715,   715,   113,   552,  1145,   114,   954,
     481,   482,   483,   484,   485,   486,   487,   488,   481,   482,
     483,   484,   485,   486,   487,   488,   563,     1,   565,   561,
     844,   120,   121,   599,   589,   688,  1214,   862,   863,   970,
     115,   986,   715,   562,   116,    53,   122,   321,   322,   323,
     324,   864,   123,   602,   124,   125,   612,  1193,   865,   896,
     699,  1034,  1035,  1036,  1215,   654,   701,   655,  1043,   700,
    1216,   715,  1061,   288,  1037,   702,   479,   480,   289,   384,
     385,   554,   634,   635,   636,   637,   703,  1195,   209,  1048,
    1049,  1050,   271,  1047,   566,   704,   513,   514,  1052,  1083,
    1084,  1085,  1086,  1057,  1064,  1060,   291,  1062,  1063,  1318,
    1065,  1319,   332,  1068,   119,  1071,  1072,   326,   327,   328,
     329,   384,   385,   423,   424,   425,  1081,  1187,  1188,  1189,
    1080,   965,  1082,   976,  1091,   846,   333,  1122,   126,   336,
    1094,   555,   127,   556,   338,   962,  1217,   555,   339,   556,
     128,   372,   129,   563,   564,   565,  1104,  1187,  1188,  1189,
     374,   555,   848,   556,  1097,  1098,  1099,  1100,  1101,  1102,
     375,   816,     2,     3,     4,     5,     6,     7,     8,     9,
      10,   380,   120,   121,   855,   856,   857,   858,   859,   555,
    1123,   556,   155,   173,   194,   211,    53,   122,   967,   273,
     983,   866,   867,   123,   566,   124,   125,   381,   174,   195,
     212,  1141,   382,  1142,   274,   383,   321,   322,   323,   324,
     875,  1041,   160,   968,   201,   984,   175,   388,   263,   193,
     210,   596,   378,   379,   272,  1149,   389,  1138,  1140,   695,
     384,   385,   196,   321,   322,   323,   324,   321,   322,   323,
     324,  1218,  1218,  1150,   686,  1152,   579,   580,  1146,  1151,
    1155,   418,  1157,  1158,  1159,  1160,  1122,   422,  1237,  1237,
    1240,   384,   385,  1162,   430,  1164,  1169,   620,   621,  1092,
    1168,   558,   429,  1171,  1172,   475,  1176,  1177,  1178,   126,
    1260,  1261,  1262,   127,   120,   121,   476,  1182,  1183,  1184,
    1185,   128,  1198,   129,  1219,  1219,   585,   586,    53,   122,
     120,   121,   642,   643,  1208,   123,  1209,   124,   125,  1123,
     477,  1238,  1238,  1241,    53,   122,   599,   326,   327,   328,
     329,   123,   496,   124,   125,   989,   990,   991,   497,   555,
     506,   556,  1226,  1227,  1228,  1229,  1230,  1231,  1232,  1233,
    1234,  1235,   505,  1257,   745,   746,   602,   509,  1042,   747,
     748,   963,  1266,   974,   507,  1267,   384,   385,   749,   750,
    1268,   508,  1270,   510,  1272,  1273,  1274,   901,  1038,  1277,
     799,   800,  1280,  1281,   751,   752,   926,  1143,  1285,   512,
    1286,  1187,  1188,  1189,   213,  1211,   384,   385,  1210,   511,
    1154,   126,   801,   802,  1292,   127,  1294,   540,  1296,  1069,
    1298,   944,   945,   128,   536,   129,   537,   126,   935,   936,
     937,   127,   548,   481,   482,   483,   484,   485,   486,   128,
     488,   129,  1180,   553,   555,   569,   556,   589,  1192,  1194,
    1196,   587,  1197,   605,  1304,  1396,  1396,  1396,  1199,  1200,
    1201,  1202,  1203,  1204,   607,   228,   570,   623,   321,   322,
     323,   324,   120,   121,   555,   625,   556,   321,   322,   323,
     324,   479,   480,  1330,   946,   947,    53,   122,  1334,   638,
    1336,   948,   949,   123,  1340,   124,   125,  1342,  1343,  1256,
     321,   322,   323,   324,   950,   951,  1348,  1349,  1350,  1351,
     644,  1263,   650,  1265,   651,  1352,   653,  1354,   656,  1356,
     657,  1358,   658,   571,   572,   573,   574,   575,   576,   659,
    1276,   952,   953,   120,   121,  1398,  1399,  1282,  1283,  1284,
    1325,  1325,  1325,  1326,  1326,  1326,  1291,    53,   122,   660,
     296,  1293,   297,  1295,   123,  1297,   124,   125,   661,  1299,
     932,   933,   298,   299,   300,   301,   662,   302,   303,  1301,
    1302,   663,  1389,  -317,  1391,   665,  1393,   684,  1395,   126,
    1328,  1329,   667,   127,   828,   829,   668,   669,   670,   671,
     672,   128,   673,   129,   674,   340,   675,   341,   342,   343,
     344,   345,   346,  1111,   676,   677,   678,  1400,   679,  1402,
     830,  1404,   304,  1406,   831,   680,   681,   682,  1322,   683,
     685,   832,   833,   689,   305,   306,   104,  1331,  1332,  1333,
     690,  1335,   697,  1337,  1338,  1339,   698,   705,  1341,   347,
     126,  1344,  1345,   706,   127,   348,  1346,  1347,   349,   709,
     710,   726,   128,   711,   129,   340,   723,   341,   342,   343,
     344,   345,   346,   570,   727,   729,   731,   733,   737,   738,
     589,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,
    1121,   739,   743,   744,   630,   768,   771,   772,   773,   778,
     780,  1378,  -319,  -321,  -323,  1379,   789,  1380,   793,   347,
     790,  1381,   796,  1382,  1383,   348,   798,   797,   349,  1384,
    1385,  1386,  1387,   803,   570,   804,   841,   806,   350,   807,
     571,   572,   573,   574,   575,   576,   351,   808,   815,   809,
     810,   811,   812,   479,   480,   632,   813,   814,   826,   852,
     818,   340,   850,   341,   342,   343,   344,   345,   346,   851,
    1401,   853,  1403,   352,  1405,   353,  1407,   354,   854,   861,
     355,  1408,   871,  1409,   872,  1410,   873,  1411,   880,   881,
     882,   571,   572,   573,   574,   575,   576,   894,   350,   889,
     891,   893,   895,   356,   357,   347,   351,   899,   358,   359,
     360,   348,   917,   915,   349,   361,   918,   362,   363,   364,
     365,   923,   924,   925,   929,   366,   367,   368,   369,   931,
     784,   934,   955,   352,   956,   353,   957,   354,   958,   959,
     355,   960,   987,   988,  1026,   551,   340,  1027,   341,   342,
     343,   344,   345,   346,   481,   482,   483,   484,   485,   486,
     487,   488,  1028,   356,   357,  1029,  1039,  1030,   358,   359,
     360,  1032,  1045,  1044,  1046,   361,  1051,   362,   363,   364,
     365,  1053,  1054,  1055,   350,   366,   367,   368,   369,  1056,
     347,  1066,   351,  1058,   391,  1067,   348,  1073,  1074,   349,
    1075,  1076,  1077,  1078,  1079,   687,  1093,   340,  1095,   341,
     342,   343,   344,   345,   346,  1105,  1096,  1106,  1107,   352,
    1144,   353,  1137,   354,  1148,  1153,   355,   395,   396,   397,
     398,   399,   461,  1156,  1161,  1163,  1165,  1166,  1167,  1170,
     462,  1173,   463,   464,   465,  1174,  1175,  1179,   589,   356,
     357,   347,  1181,  1205,   358,   359,   360,   348,  1207,  1245,
     349,   361,  1243,   362,   363,   364,   365,  1253,  1225,   350,
    1246,   366,   367,   368,   369,  1244,  1258,   351,  1264,   589,
    1269,   395,   396,   397,   398,   399,   461,  1271,  1275,   404,
    1278,   736,  1279,  1287,   462,   245,   463,   464,   465,  1288,
    1289,   392,   393,  1290,   352,  1300,   353,  1353,   354,  1303,
     394,   355,   395,   396,   397,   398,   399,   157,   177,   198,
     215,   230,   247,   260,   277,   400,   401,  1305,  1308,  1355,
     350,  1309,  1306,  1310,   356,   357,  1357,  1321,   351,   358,
     359,   360,   847,   849,  1311,  1312,   361,  1313,   362,   363,
     364,   365,  1359,  1314,   275,  1315,   366,   367,   368,   369,
    1360,  1316,  1317,   120,   121,   352,  1320,   353,  1374,   354,
     884,  1375,   355,  1376,  1361,  1377,   874,    53,   122,  1364,
     890,  1365,   892,  1366,   123,  1388,   124,   125,  1367,  1368,
     902,  1369,  1370,  1371,  1372,   356,   357,  1373,   920,   922,
     358,   359,   360,   927,  1390,  1392,  1394,   361,    70,   362,
     363,   364,   365,   335,   717,   718,   719,   366,   367,   368,
     369,   294,   120,   121,   547,   666,   652,   728,   218,   975,
     219,   938,   940,   941,   942,   943,    53,   122,   979,  1110,
     981,   982,  1127,   123,  1236,   124,   125,   158,   178,   199,
     216,   231,   248,   261,   278,   250,  1247,   732,   754,   756,
     758,   734,   730,   762,   696,   764,    59,   985,   549,  1031,
     126,  1033,   606,   646,   127,   593,   879,   777,  1259,     0,
     779,   618,   128,   445,   129,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,     0,
       0,     0,     0,     0,     0,     0,  1070,     0,     0,   126,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,   843,   845,     0,     0,     0,  1088,
    1090,   159,   179,   200,   217,   232,   249,   262,   279,   161,
     180,   202,   221,   233,   251,   264,   280,   162,   181,   203,
     222,   234,   252,   265,   281,   163,   182,   204,   223,   235,
     253,   266,   282,   164,   183,   205,   224,   236,   254,   267,
     283,     0,   897,     0,     0,   900,   165,   184,   206,   225,
     237,   255,   268,   284,   166,   185,   207,   226,   238,   256,
     269,   285,   167,   186,   208,   227,   239,   257,   270,   286
};

static const yytype_int16 yycheck[] =
{
     406,   334,    86,   393,   334,   395,   396,   143,   435,   386,
     400,   401,   120,   121,   404,   123,   416,   417,   444,   419,
     334,   370,   339,   413,   245,    21,    22,   245,    24,    58,
     557,    11,    22,    23,    55,     6,   330,     6,    70,   416,
     417,    73,   419,     5,    29,     6,    90,   437,    87,   439,
      35,    87,   139,    16,   635,   636,    74,   447,   448,   449,
     466,   451,   452,    54,     6,   137,   456,   457,   458,    55,
     597,   461,    71,   600,    22,    23,   603,   260,   137,   469,
       8,    38,    10,   473,    12,    13,   130,    16,    41,    17,
      18,   274,    26,    56,   137,   258,    30,    31,   261,    33,
      34,    29,    36,    37,    26,    90,    91,   137,    30,    31,
      39,    33,    34,   228,    36,    37,    71,   434,   139,   133,
     134,   135,   136,    51,    52,   231,   139,    90,   139,    22,
      23,    59,   139,    61,   130,   131,    93,    41,   253,   137,
     151,   791,    70,   130,   250,     6,   164,   165,   139,   130,
     163,   131,   139,   139,   139,   193,   194,    85,    60,    87,
      62,    63,    64,    65,    66,    67,    68,    69,   139,   198,
     139,   200,   259,   191,   130,     6,   139,   139,   139,   585,
     586,   587,     0,   139,   183,   184,    71,    72,   769,   579,
     580,   137,   231,   206,   137,   231,    41,   139,   230,   205,
      85,   550,   209,   210,   211,    90,    29,    92,   139,   615,
     616,   617,    35,    90,    29,    19,    47,    48,    49,    50,
      35,   137,   228,   629,   166,   167,   137,   169,   183,   184,
     269,   165,   638,   269,   205,   206,   205,   206,   644,    90,
     630,   269,   632,   165,   650,   466,   269,    41,   466,   131,
     334,   139,   642,   643,   182,   549,   270,   205,   229,   608,
     231,   688,   231,   151,   206,   250,   229,   195,   221,   222,
     223,   224,   243,   201,   243,    90,   272,   267,   139,   250,
     228,   229,   131,   225,   226,   935,   936,   937,   130,   131,
     607,    16,   139,   699,   700,   701,   702,   703,   704,    74,
     161,   162,   708,   139,    29,   198,   131,   200,   139,   170,
      35,   172,   173,   174,   175,   176,   727,   221,   222,   223,
     224,   198,   132,   200,   185,   186,   139,    73,    53,    54,
     269,   737,   738,   256,   262,   228,   270,   743,   151,   745,
     746,   747,   748,     3,   674,   206,    93,   198,   270,   200,
     235,   236,    77,    78,    79,   761,    73,   139,    83,   765,
     766,   767,   209,   210,   211,    90,    91,   778,   270,   151,
     231,   139,   139,   234,   780,   206,   221,   222,   223,   224,
     203,   204,   243,   151,   151,    73,   735,    58,    16,   816,
     213,   214,   215,   216,   217,   218,   219,   220,   213,   214,
     215,   216,   217,   218,   219,   220,   198,     7,   200,    74,
     139,    71,    72,    90,   139,   551,   163,    71,    72,   825,
      73,   827,   151,    88,    73,    85,    86,   221,   222,   223,
     224,    85,    92,    90,    94,    95,   228,   139,    92,   139,
     130,   852,   853,   854,   191,   130,   130,   132,   875,   139,
     197,   151,   892,     9,   860,   139,   203,   204,    71,   130,
     131,    90,   237,   238,   239,   240,   130,   139,    74,   880,
     881,   882,    78,   879,   249,   139,    27,    28,   884,   919,
     920,   921,   922,   889,   895,   891,    76,   893,   894,   130,
     896,   132,   131,   899,     3,   901,   902,   133,   134,   135,
     136,   130,   131,   179,   180,   181,   917,   209,   210,   211,
     916,   825,   918,   827,   925,   140,   139,   995,   178,   254,
     931,   198,   182,   200,   269,   250,   273,   198,   269,   200,
     190,    57,   192,   198,   199,   200,   962,   209,   210,   211,
     131,   198,   140,   200,   955,   956,   957,   958,   959,   960,
     131,   687,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   131,    71,    72,   208,   209,   210,   211,   212,   198,
     995,   200,   232,    72,    73,    74,    85,    86,   825,    78,
     827,   235,   236,    92,   249,    94,    95,   131,    72,    73,
      74,  1031,   130,  1033,    78,   131,   221,   222,   223,   224,
     736,   870,    72,   825,    74,   827,     3,   130,    78,    73,
      74,    90,   130,   131,    78,  1042,   130,  1028,  1029,  1146,
     130,   131,     3,   221,   222,   223,   224,   221,   222,   223,
     224,  1109,  1110,  1044,   270,  1046,   166,   167,  1038,  1045,
    1051,   132,  1053,  1054,  1055,  1056,  1124,   259,  1126,  1127,
    1128,   130,   131,  1059,   137,  1061,  1067,   267,   268,   928,
    1066,  1038,   138,  1069,  1070,   130,  1077,  1078,  1079,   178,
     246,   247,   248,   182,    71,    72,    25,  1083,  1084,  1085,
    1086,   190,  1093,   192,  1109,  1110,   251,   252,    85,    86,
      71,    72,    48,    49,  1105,    92,  1107,    94,    95,  1124,
     139,  1126,  1127,  1128,    85,    86,    90,   133,   134,   135,
     136,    92,   139,    94,    95,    80,    81,    82,    75,   198,
     131,   200,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,
    1120,  1121,   130,  1144,   130,   131,    90,   269,   874,   130,
     131,   825,  1153,   827,    89,  1156,   130,   131,   130,   131,
    1161,    89,  1163,   131,  1165,  1166,  1167,   140,   866,  1170,
      14,    15,  1173,  1174,   130,   131,   140,  1036,  1179,   131,
    1181,   209,   210,   211,     3,  1108,   130,   131,  1108,   139,
    1049,   178,    27,    28,  1190,   182,  1192,   194,  1194,   140,
    1196,   207,   208,   190,   257,   192,   257,   178,   786,   787,
     788,   182,   255,   213,   214,   215,   216,   217,   218,   190,
     220,   192,  1081,   139,   198,    92,   200,   139,  1088,  1089,
    1090,   243,  1091,    55,  1214,  1375,  1376,  1377,  1097,  1098,
    1099,  1100,  1101,  1102,   269,     3,   206,   230,   221,   222,
     223,   224,    71,    72,   198,   230,   200,   221,   222,   223,
     224,   203,   204,  1264,   207,   208,    85,    86,  1269,    40,
    1271,   207,   208,    92,  1275,    94,    95,  1278,  1279,  1138,
     221,   222,   223,   224,   207,   208,  1287,  1288,  1289,  1290,
      40,  1150,   163,  1152,   139,  1291,    93,  1293,   130,  1295,
     130,  1297,   208,   263,   264,   265,   266,   267,   268,   130,
    1169,   207,   208,    71,    72,  1376,  1377,  1176,  1177,  1178,
    1260,  1261,  1262,  1260,  1261,  1262,  1186,    85,    86,   131,
      14,  1191,    16,  1193,    92,  1195,    94,    95,   131,  1198,
     782,   783,    26,    27,    28,    29,   131,    31,    32,  1208,
    1209,   271,  1353,   130,  1355,   130,  1357,   139,  1359,   178,
    1261,  1262,   271,   182,    53,    54,   271,   271,   271,   271,
     271,   190,   271,   192,   271,    40,   271,    42,    43,    44,
      45,    46,    47,    73,   271,   271,   271,  1388,   271,  1390,
      79,  1392,    76,  1394,    83,   271,   271,   271,  1257,   271,
     139,    90,    91,    55,    88,    89,    87,  1266,  1267,  1268,
     139,  1270,   130,  1272,  1273,  1274,   131,   256,  1277,    84,
     178,  1280,  1281,    76,   182,    90,  1285,  1286,    93,   139,
     139,     5,   190,   139,   192,    40,   139,    42,    43,    44,
      45,    46,    47,   206,     5,   139,   139,   139,   139,    93,
     139,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   139,    93,   139,   227,    79,   139,   139,   139,     5,
     139,  1330,   130,   130,   130,  1334,   130,  1336,    20,    84,
     130,  1340,   131,  1342,  1343,    90,   131,   130,    93,  1348,
    1349,  1350,  1351,   131,   206,   131,    55,   139,   163,   139,
     263,   264,   265,   266,   267,   268,   171,   139,   208,   139,
     139,   139,   139,   203,   204,   227,   139,   139,   139,     5,
     208,    40,   140,    42,    43,    44,    45,    46,    47,   140,
    1389,     5,  1391,   198,  1393,   200,  1395,   202,     5,    55,
     205,  1400,   208,  1402,   208,  1404,   208,  1406,     5,     5,
       5,   263,   264,   265,   266,   267,   268,   208,   163,   168,
     168,   207,     5,   228,   229,    84,   171,   140,   233,   234,
     235,    90,     5,   241,    93,   240,   140,   242,   243,   244,
     245,   139,   139,     5,   140,   250,   251,   252,   253,     5,
     267,   130,     5,   198,     5,   200,     5,   202,     5,     5,
     205,     5,   130,   130,   139,   270,    40,   139,    42,    43,
      44,    45,    46,    47,   213,   214,   215,   216,   217,   218,
     219,   220,     5,   228,   229,     5,     4,   168,   233,   234,
     235,   168,   130,     5,     5,   240,     5,   242,   243,   244,
     245,     5,     5,     5,   163,   250,   251,   252,   253,     5,
      84,   140,   171,   208,   139,     5,    90,   130,   139,    93,
     139,   139,     5,     5,     5,   270,     5,    40,   130,    42,
      43,    44,    45,    46,    47,     5,   130,   130,     5,   198,
       5,   200,   208,   202,     3,     5,   205,   172,   173,   174,
     175,   176,   177,     5,     5,     5,     5,     5,     5,     5,
     185,     5,   187,   188,   189,     5,   208,     5,   139,   228,
     229,    84,     5,   263,   233,   234,   235,    90,   130,   139,
      93,   240,   130,   242,   243,   244,   245,   196,   131,   163,
     131,   250,   251,   252,   253,   130,    94,   171,     5,   139,
       5,   172,   173,   174,   175,   176,   177,     5,     5,   234,
       5,   270,     5,     5,   185,     3,   187,   188,   189,     5,
       5,   161,   162,     5,   198,   139,   200,     5,   202,   130,
     170,   205,   172,   173,   174,   175,   176,    72,    73,    74,
      75,    76,    77,    78,    79,   185,   186,   131,   139,     5,
     163,   139,   130,   139,   228,   229,     5,   130,   171,   233,
     234,   235,   716,   717,   139,   139,   240,   139,   242,   243,
     244,   245,     5,   139,     3,   139,   250,   251,   252,   253,
     211,   139,   139,    71,    72,   198,   139,   200,    55,   202,
     744,     5,   205,     5,   139,     5,   270,    85,    86,   140,
     754,   140,   756,   140,    92,     5,    94,    95,   140,   140,
     764,   140,   140,   140,   140,   228,   229,   140,   772,   773,
     233,   234,   235,   777,     5,     5,     5,   240,    12,   242,
     243,   244,   245,   102,   582,   583,   584,   250,   251,   252,
     253,    84,    71,    72,   335,   509,   477,   595,    75,   827,
      75,   789,   806,   807,   808,   809,    85,    86,   827,   994,
     827,   827,   998,    92,  1124,    94,    95,    72,    73,    74,
      75,    76,    77,    78,    79,    77,  1133,   600,   626,   627,
     628,   603,   597,   631,   557,   633,     1,   827,   338,   843,
     178,   845,   431,   466,   182,   406,   739,   645,  1146,    -1,
     648,   438,   190,   155,   192,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   900,    -1,    -1,   178,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,   192,   712,   713,    -1,    -1,    -1,   923,
     924,    72,    73,    74,    75,    76,    77,    78,    79,    72,
      73,    74,    75,    76,    77,    78,    79,    72,    73,    74,
      75,    76,    77,    78,    79,    72,    73,    74,    75,    76,
      77,    78,    79,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,   760,    -1,    -1,   763,    72,    73,    74,    75,
      76,    77,    78,    79,    72,    73,    74,    75,    76,    77,
      78,    79,    72,    73,    74,    75,    76,    77,    78,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   276,   277,   278,   297,   298,   299,   301,   302,   303,
     304,   307,   308,   309,   310,   311,   312,   313,   319,   329,
     330,   335,   355,   356,   357,   358,   359,   360,   361,   362,
     363,     8,    10,    12,    13,    17,    18,    29,    51,    52,
      59,    61,    70,    85,    87,   182,   195,   201,   262,   437,
     137,   137,   137,   137,   137,   137,   137,   137,   137,     0,
     278,   279,   281,   283,   285,   287,   289,   291,   293,   295,
      11,   131,   139,   130,   331,   332,   336,    19,   269,   131,
     131,   269,   139,   131,   132,   269,    71,   183,   184,   193,
     194,   256,   314,   315,    87,   231,   269,   441,    70,    73,
     230,    73,    73,    73,    16,    73,    73,    16,    39,     3,
      71,    72,    86,    92,    94,    95,   178,   182,   190,   192,
     280,   364,   365,   366,   374,   377,   380,   418,   419,   420,
     421,   433,   436,   437,   438,   444,   445,   446,   447,   448,
     452,   497,   498,   499,     3,   232,   282,   364,   365,   366,
     418,   433,   436,   444,   445,   446,   447,   448,   470,   484,
     493,   494,   496,   497,   499,     3,   284,   364,   365,   366,
     433,   436,   444,   445,   446,   447,   448,   486,   487,   488,
     489,   490,   491,   493,   497,   499,     3,   286,   364,   365,
     366,   418,   433,   436,   444,   445,   446,   447,   448,   470,
     493,   497,   499,     3,   288,   364,   365,   366,   374,   377,
     383,   433,   436,   444,   445,   446,   447,   448,     3,   290,
     364,   365,   366,   433,   436,   444,   445,   446,   447,   448,
     500,   501,   502,   503,   504,     3,   292,   364,   365,   366,
     421,   433,   436,   444,   445,   446,   447,   448,   455,   294,
     364,   365,   366,   418,   433,   436,   444,   445,   446,   447,
     448,   470,   493,   497,   499,     3,   296,   364,   365,   366,
     433,   436,   444,   445,   446,   447,   448,   451,     9,    71,
     300,    76,   333,    90,   332,   430,    14,    16,    26,    27,
      28,    29,    31,    32,    76,    88,    89,   320,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   321,
     305,   221,   222,   223,   224,   492,   133,   134,   135,   136,
     442,   443,   131,   139,   316,   315,   254,   318,   269,   269,
      40,    42,    43,    44,    45,    46,    47,    84,    90,    93,
     163,   171,   198,   200,   202,   205,   228,   229,   233,   234,
     235,   240,   242,   243,   244,   245,   250,   251,   252,   253,
     439,   440,    57,   506,   131,   131,   130,   131,   130,   131,
     131,   131,   130,   131,   130,   131,   367,   369,   130,   130,
       6,   139,   161,   162,   170,   172,   173,   174,   175,   176,
     185,   186,   206,   231,   234,   243,   453,   454,   458,   461,
     463,   464,   465,   466,   467,   468,   367,   367,   132,   367,
     139,   259,   259,   179,   180,   181,    71,   183,   184,   138,
     137,   449,   450,   231,   269,   441,     6,   205,   206,   229,
     231,   250,   495,   231,   250,   495,     6,   166,   167,   169,
     206,   225,   226,   206,     6,     6,    47,    48,    49,    50,
     206,   177,   185,   187,   188,   189,   456,   457,   459,   460,
     461,   462,   465,   163,   206,   130,    25,   139,    35,   203,
     204,   213,   214,   215,   216,   217,   218,   219,   220,   320,
     325,   327,   328,   334,   371,   372,   139,    75,   373,    21,
      22,    24,   130,   131,   272,   130,   131,    89,    89,   269,
     131,   139,   131,    27,    28,    26,    30,    31,    33,    34,
      36,    37,   165,   270,   322,    60,    62,    63,    64,    65,
      66,    67,    68,    69,   270,   306,   257,   257,   270,   443,
     194,    90,   317,   320,   325,   327,   328,   318,   255,   442,
     439,   270,   440,   139,    90,   198,   200,   368,   369,   370,
     429,    74,    88,   198,   199,   200,   249,   386,   388,    92,
     206,   263,   264,   265,   266,   267,   268,   471,   471,   166,
     167,   471,   471,   471,   471,   251,   252,   243,   471,   139,
     479,   480,   481,   454,   481,   471,    90,   368,   427,    90,
     368,   426,    90,   368,   428,    55,   450,   269,   439,   506,
      22,    23,   228,   485,   471,   205,   228,   229,   485,   471,
     267,   268,   435,   230,   435,   230,   471,   471,   471,   253,
     227,   471,   227,   471,   237,   238,   239,   240,    40,   471,
     471,   471,    48,    49,    40,   471,   457,   481,   471,   471,
     163,   139,   333,    93,   130,   132,   130,   130,   208,   130,
     131,   131,   131,   271,   348,   130,   321,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   139,   139,   270,   270,   441,    55,
     139,   130,   139,   130,   139,   370,   429,   130,   131,   130,
     139,   130,   139,   130,   139,   256,    76,   387,   381,   139,
     139,   139,   471,   471,   139,   151,   469,   469,   469,   469,
     481,   481,   481,   139,    55,   139,     5,     5,   469,   139,
     427,   139,   426,   139,   428,   439,   270,   139,    93,   139,
     481,   481,   481,    93,   139,   130,   131,   130,   131,   130,
     131,   130,   131,   139,   469,   139,   469,   139,   469,   481,
     471,   139,   469,   471,   469,   384,   384,   384,    79,   505,
     481,   139,   139,   139,   471,   471,   481,   469,     5,   469,
     139,   481,    22,    23,   267,   326,   349,   350,   351,   130,
     130,   352,   353,    20,   354,   270,   131,   130,   131,    14,
      15,    27,    28,   131,   131,   327,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   208,   441,   506,   208,   481,
     481,   481,   481,   481,   481,   378,   139,   375,    53,    54,
      79,    83,    90,    91,   382,   390,   394,   395,   431,   432,
     481,    55,   139,   469,   139,   469,   140,   492,   140,   492,
     140,   140,     5,     5,     5,   208,   209,   210,   211,   212,
     472,    55,    71,    72,    85,    92,   235,   236,   476,   477,
     477,   208,   208,   208,   270,   441,   481,    54,   481,   472,
       5,     5,     5,   481,   492,   481,   481,   481,   481,   168,
     492,   168,   492,   207,   208,     5,   139,   469,   481,   140,
     469,   140,   492,    16,    56,    90,   229,   385,   422,   423,
     424,   425,   481,   481,   481,   241,   384,     5,   140,    41,
     492,    41,   492,   139,   139,     5,   140,   492,   477,   140,
     481,     5,   326,   326,   130,   352,   352,   352,   354,   353,
     492,   492,   492,   492,   207,   208,   207,   208,   207,   208,
     207,   208,   207,   208,   506,     5,     5,     5,     5,     5,
       5,    35,   250,   320,   323,   325,   379,   431,   432,   434,
     481,    16,    77,    78,   320,   323,   325,   376,   389,   390,
     393,   394,   395,   431,   432,   434,   481,   130,   130,    80,
      81,    82,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   139,   139,     5,     5,
     168,   492,   168,   492,   477,   477,   477,   481,   367,     4,
     483,   483,   441,   506,     5,   130,     5,   481,   477,   477,
     477,     5,   481,     5,     5,     5,     5,   481,   208,   474,
     481,   474,   481,   481,   477,   481,   140,     5,   481,   140,
     492,   481,   481,   130,   139,   139,   139,     5,     5,     5,
     481,   477,   481,   474,   474,   474,   474,    41,   492,    41,
     492,   477,   483,     5,   477,   130,   130,   477,   477,   477,
     477,   477,   477,    38,   435,     5,   130,     5,   391,   406,
     406,    73,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   371,   372,   416,   417,   398,   398,   400,    74,
     164,   165,   191,   396,   397,   404,   414,   208,   477,    90,
     477,   474,   474,   483,     5,    58,   368,   475,     3,   506,
     477,   481,   477,     5,   483,   477,     5,   477,   477,   477,
     477,     5,   481,     5,   481,     5,     5,     5,   481,   477,
       5,   481,   481,     5,     5,   208,   477,   477,   477,     5,
     483,     5,   481,   481,   481,   481,   139,   209,   210,   211,
     473,   139,   473,   139,   473,   139,   473,   483,   477,   483,
     483,   483,   483,   483,   483,   263,   324,   130,   477,   477,
     327,   328,   392,    93,   163,   191,   197,   273,   371,   372,
     407,   408,   409,   410,   411,   131,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   417,   371,   372,   399,
     371,   372,   401,   130,   130,   139,   131,   397,   258,   261,
     402,   403,   405,   196,   413,   415,   483,   477,    94,   475,
     246,   247,   248,   483,     5,   483,   477,   477,   477,     5,
     477,     5,   477,   477,   477,     5,   483,   477,     5,     5,
     477,   477,   483,   483,   483,   477,   477,     5,     5,     5,
       5,   473,   481,   473,   481,   473,   481,   473,   481,   483,
     139,   483,   483,   130,   471,   131,   130,   412,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   130,   132,
     139,   130,   483,    55,   139,   479,   480,   482,   482,   482,
     477,   483,   483,   483,   477,   483,   477,   483,   483,   483,
     477,   483,   477,   477,   483,   483,   483,   483,   477,   477,
     477,   477,   481,     5,   481,     5,   481,     5,   481,     5,
     211,   139,   260,   274,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,    55,     5,     5,     5,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,     5,   477,
       5,   477,     5,   477,     5,   477,   476,   478,   478,   478,
     477,   483,   477,   483,   477,   483,   477,   483,   483,   483,
     483,   483
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   275,   276,   276,   277,   277,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   281,   281,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   283,   283,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   285,   285,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   289,
     289,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   291,   291,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   298,   299,   300,   300,   301,   302,   302,
     302,   303,   304,   305,   305,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   307,
     308,   308,   308,   309,   309,   309,   310,   311,   312,   313,
     314,   314,   315,   316,   316,   317,   317,   317,   317,   317,
     318,   318,   319,   320,   320,   321,   321,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   323,   324,   324,
     325,   325,   325,   326,   326,   327,   327,   327,   327,   327,
     327,   327,   328,   329,   330,   331,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   334,   334,   335,   336,   336,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   338,
     339,   340,   341,   342,   343,   343,   344,   344,   345,   345,
     346,   347,   347,   347,   347,   347,   347,   348,   347,   349,
     347,   350,   347,   351,   347,   347,   352,   352,   353,   354,
     354,   355,   355,   355,   355,   356,   357,   357,   358,   359,
     360,   360,   361,   362,   363,   363,   364,   364,   365,   365,
     366,   366,   367,   367,   368,   368,   369,   369,   370,   370,
     370,   370,   371,   371,   372,   373,   373,   374,   375,   375,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   377,   378,   378,   379,   379,   379,   379,   379,   379,
     380,   381,   381,   382,   382,   382,   382,   382,   383,   383,
     383,   383,   384,   384,   385,   385,   385,   385,   386,   386,
     387,   388,   389,   389,   390,   390,   390,   391,   391,   392,
     392,   393,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   395,   395,   396,   396,
     397,   397,   397,   397,   398,   398,   399,   399,   400,   400,
     401,   401,   402,   402,   403,   404,   404,   405,   405,   406,
     406,   407,   407,   407,   407,   407,   407,   407,   408,   409,
     410,   411,   412,   412,   413,   414,   414,   415,   416,   416,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   418,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   426,   427,   427,   428,   428,   429,   429,
     430,   430,   431,   432,   433,   433,   434,   435,   435,   436,
     436,   436,   436,   437,   438,   439,   439,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   441,   441,   442,
     442,   443,   443,   443,   443,   444,   444,   444,   445,   445,
     445,   446,   446,   446,   447,   448,   449,   449,   450,   451,
     451,   452,   453,   453,   454,   454,   454,   454,   454,   454,
     454,   455,   456,   456,   457,   457,   457,   457,   458,   458,
     459,   460,   460,   460,   460,   461,   461,   461,   461,   462,
     462,   463,   464,   465,   466,   466,   466,   467,   467,   468,
     468,   469,   469,   470,   470,   471,   471,   471,   471,   471,
     471,   471,   471,   472,   472,   472,   472,   472,   472,   473,
     473,   473,   474,   474,   475,   475,   475,   476,   476,   476,
     476,   476,   476,   476,   477,   478,   479,   480,   481,   481,
     481,   482,   482,   482,   483,   483,   483,   483,   484,   484,
     484,   485,   485,   485,   486,   486,   486,   486,   487,   487,
     487,   487,   488,   488,   489,   489,   490,   490,   491,   492,
     492,   492,   492,   492,   493,   493,   494,   494,   494,   494,
     494,   494,   494,   494,   495,   495,   496,   496,   497,   497,
     498,   498,   499,   499,   500,   501,   502,   503,   503,   503,
     503,   503,   503,   504,   504,   504,   504,   504,   504,   505,
     506,   506,   506
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     8,     4,     3,     0,     3,     2,     3,     3,
       3,     4,     5,     0,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       3,     3,     5,     4,     6,     4,     3,     3,     3,     3,
       2,     3,     2,     0,     2,     3,     1,     1,     1,     1,
       0,     2,     5,     1,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     0,     1,
       4,     5,     5,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     5,     1,     2,     2,     4,     0,
       2,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     5,     4,     2,     3,     3,     3,     0,     4,     0,
       5,     0,     5,     0,     5,     2,     1,     2,     1,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     5,     6,     3,     4,     3,     4,
       3,     4,     1,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     0,     2,     9,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     9,     0,     2,     1,     1,     1,     1,     1,     1,
       8,     0,     2,     1,     1,     1,     1,     1,     9,     8,
       8,     8,     0,     2,     1,     1,     1,     1,     0,     2,
       2,     2,     1,     1,     2,     3,     2,     0,     2,     1,
       1,     2,     3,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     2,     2,     1,     2,
       2,     2,     2,     2,     0,     2,     1,     1,     0,     2,
       1,     1,     2,     2,     2,     0,     2,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2,     2,     0,     2,     2,     0,     2,     1,     1,     2,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     7,     6,     6,     6,     9,     2,     2,
       3,     2,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     3,     2,     7,     7,     3,     1,     1,     3,
       6,     7,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     1,
       2,     2,     2,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     8,
       6,     6,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     6,     1,     2,     1,     1,     1,     1,     4,     4,
       4,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     1,     1,     1,     6,     5,     6,
       5,     1,     1,     9,     6,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     3,     4,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     2,     3,     0,     1,
       1,     0,     1,     1,     0,     6,     6,     6,     8,    10,
       7,     0,     1,     1,     8,     9,     9,    10,     9,     9,
      10,    10,    10,     9,    10,     9,     9,     9,     6,     0,
       1,     1,     1,     1,     8,     7,     7,     7,     4,     4,
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
        case 190:
#line 589 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3185 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 593 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 596 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3202 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 602 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                                ihp.daemon     = true;
                                Run.flags      |= Run_Daemon;
                                Run.polltime   = (yyvsp[-1].number);
                                Run.startdelay = (yyvsp[0].number);
                        }
                  }
#line 3215 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 612 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3223 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 617 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = START_DELAY;
                  }
#line 3231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 620 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 625 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 630 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 633 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 636 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 641 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 654 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3288 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 657 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 660 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3304 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 663 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3312 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 666 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 669 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 672 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3336 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 675 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 678 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 681 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 684 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 687 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 690 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 693 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 698 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 703 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.log || ihp.logfile) {
                                ihp.logfile = true;
                                setlogfile((yyvsp[0].string));
                                Run.flags &= ~Run_UseSyslog;
                                Run.flags |= Run_Log;
                        }
                  }
#line 3413 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog(NULL);
                  }
#line 3421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 714 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 719 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3437 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 722 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 726 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 732 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.id = (yyvsp[0].string);
                  }
#line 3463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 737 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.state = (yyvsp[0].string);
                  }
#line 3471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 742 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        }
                  }
#line 3482 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 757 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 767 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 777 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3507 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 782 "src/p.y" /* yacc.c:1646  */
    {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3515 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 787 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 797 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3532 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 809 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 813 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3567 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 816 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3576 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 820 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3584 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 823 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 826 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 829 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 834 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3617 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 844 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
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
#line 3636 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 858 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 865 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3660 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 878 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 882 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3678 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 891 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV11;
                }
#line 3699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 899 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV12;
                }
#line 3711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 906 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3720 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 910 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 916 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 925 "src/p.y" /* yacc.c:1646  */
    {
                        if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                                Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 932 "src/p.y" /* yacc.c:1646  */
    {
                        if (mailset.from) {
                                Run.MailFormat.from = mailset.from;
                        } else {
                                Run.MailFormat.from = Address_new();
                                Run.MailFormat.from->address = Str_dup(ALERT_FROM);
                        }
                        if (mailset.replyto)
                                Run.MailFormat.replyto = mailset.replyto;
                        Run.MailFormat.subject = mailset.subject ?  mailset.subject : Str_dup(ALERT_SUBJECT);
                        Run.MailFormat.message = mailset.message ?  mailset.message : Str_dup(ALERT_MESSAGE);
                        reset_mailset();
                  }
#line 3769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 951 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 960 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3797 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 975 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 978 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3813 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 987 "src/p.y" /* yacc.c:1646  */
    {
                        if (sslset.flags & SSL_Enabled) {
#ifdef HAVE_OPENSSL
                                if (! sslset.pemfile) {
                                        yyerror("SSL server PEM file is required (please use ssl pemfile option)");
                                } else if (! file_checkStat(sslset.pemfile, "SSL server PEM file", S_IRWXU)) {
                                        yyerror("SSL server PEM file permissions check failed");
                                } else  {
                                        _setSSLOptions(&(Run.httpd.socket.net.ssl));
                                }
#else
                                yyerror("SSL is not supported");
#endif
                        }
                  }
#line 3833 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1020 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1026 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1032 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3858 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1038 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[0].number);
                  }
#line 3867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1044 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[0].string);
                  }
#line 3876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1058 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3884 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1061 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1066 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1071 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3908 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1074 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3921 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1082 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1086 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1090 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1094 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3957 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1098 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3966 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3974 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1105 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1116 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1119 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1126 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1137 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = false;
                  }
#line 4052 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1146 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = true;
                  }
#line 4060 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1151 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4068 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1154 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4076 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1157 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4088 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1164 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4100 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1173 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4108 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1178 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4116 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1181 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4124 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1186 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4132 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1191 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4140 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1196 "src/p.y" /* yacc.c:1646  */
    {
                        if (Link_isGetByAddressSupported()) {
                                createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                                current->inf.net->stats = Link_createForAddress((yyvsp[0].string));
                        } else {
                                yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                        }
                  }
#line 4153 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1204 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1210 "src/p.y" /* yacc.c:1646  */
    {
                        char *servicename = (yyvsp[0].string);
                        if (Str_sub(servicename, "$HOST")) {
                                char hostname[STRLEN];
                                if (gethostname(hostname, sizeof(hostname))) {
                                        LogError("System hostname error -- %s\n", STRERROR);
                                        cfg_errflag++;
                                } else {
                                        Util_replaceString(&servicename, "$HOST", hostname);
                                }
                        }
                        Run.system = createservice(Service_System, servicename, NULL, check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 4180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1225 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4188 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1230 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4200 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1237 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1246 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4220 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1249 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1254 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1257 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4244 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1263 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4252 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1266 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1279 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4268 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1282 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1287 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1291 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1295 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1298 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1303 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4318 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1306 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1311 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4334 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1316 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1319 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1324 "src/p.y" /* yacc.c:1646  */
    {
                        /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                           TODO: Parser is in need of refactoring */
                        portset.url_request = urlrequest;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1369 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1386 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1392 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4402 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1397 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1402 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4422 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1419 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1422 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1427 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1432 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1438 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip4;
                  }
#line 4463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1441 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip6;
                  }
#line 4471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1446 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                  }
#line 4479 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1449 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1453 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Udp;
                  }
#line 4496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1466 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1471 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1474 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4520 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1477 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1480 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4536 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1483 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1486 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4552 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1489 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1494 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1497 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1502 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1505 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1508 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1511 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1514 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4620 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1517 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4636 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1523 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1527 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1530 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1533 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4671 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1538 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1541 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1544 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1549 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1552 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4713 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1555 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1558 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1561 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1564 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1567 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1570 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1573 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1576 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1579 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1584 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, (yyvsp[0].string), NULL);
                        } else {
                                yyerror("The SEND statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1592 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, NULL, (yyvsp[0].string));
                        } else {
                                yyerror("The EXPECT statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1606 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4827 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1612 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1615 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4843 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1624 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 4851 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1627 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 4859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1636 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username length is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4872 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1644 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4880 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1649 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4888 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1652 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1657 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4904 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1666 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1669 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1678 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 4928 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1681 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 4936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1691 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4945 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1697 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 4954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1703 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 4962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 4971 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1715 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 4979 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1720 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1729 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 4995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1738 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1741 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1744 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5019 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1747 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5028 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1751 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1755 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1759 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1763 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1767 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5073 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1771 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5082 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1775 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1779 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5100 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1783 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1789 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5118 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1793 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1800 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5136 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1806 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5145 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1812 "src/p.y" /* yacc.c:1646  */
    {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1819 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5164 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1824 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 5172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1829 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5180 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1834 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5188 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1839 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5196 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1842 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5204 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1847 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5212 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1850 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5220 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1855 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1858 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1863 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5244 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1866 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5252 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1871 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1874 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5268 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1879 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1884 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 5284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1889 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1895 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5306 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1903 "src/p.y" /* yacc.c:1646  */
    {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5315 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1909 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1910 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5327 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1913 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5336 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1917 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1920 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5353 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1924 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5361 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1929 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1932 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1939 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1940 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5385 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1941 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5391 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1942 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1943 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5403 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1944 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5409 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1945 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5415 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1946 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1947 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exist; }
#line 5427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1948 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_FsFlag; }
#line 5433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1949 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5439 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1950 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1951 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1952 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1953 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1954 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_NonExist; }
#line 5469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1955 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1956 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1957 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1958 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1959 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1960 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1961 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 1962 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 1963 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5523 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 1964 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1965 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 1966 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 1967 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1968 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 1979 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5559 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 1980 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 1981 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 1982 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 1985 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 1993 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 1999 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 5612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2002 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 5620 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2005 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2011 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 5637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2014 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 5646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2018 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2023 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2037 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2040 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2047 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5693 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2056 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5702 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2075 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5711 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2091 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2096 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5731 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2103 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2110 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2111 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2112 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2113 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2116 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2121 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2126 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2131 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2138 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5815 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2143 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2150 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2157 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5845 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2164 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-2].number);
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].real);
                  }
#line 5855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2171 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2172 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2173 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2176 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5883 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2181 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 5893 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2188 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5903 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2193 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 5913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2200 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5919 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2201 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2204 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 5936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2210 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 5946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2217 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2218 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 5958 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2219 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 5964 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2220 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 5970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2221 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 5976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2222 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5982 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2223 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2224 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 5994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2227 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2228 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2229 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6012 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2230 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6018 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2231 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2232 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 6030 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2235 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6036 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2236 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6042 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2237 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6048 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2239 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6054 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2240 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6060 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2242 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 6068 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2245 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 6076 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2248 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6087 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2256 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6095 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2259 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6103 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2263 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2266 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 6119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2269 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 6127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2272 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 6135 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2275 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6143 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2280 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 6157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2291 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 6171 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2302 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6184 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2312 "src/p.y" /* yacc.c:1646  */
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
#line 6199 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2325 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6209 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2330 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2338 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6229 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2343 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2350 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2353 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2356 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2359 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2364 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2369 "src/p.y" /* yacc.c:1646  */
    {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6291 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2375 "src/p.y" /* yacc.c:1646  */
    {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 6301 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2381 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6307 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2382 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2383 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2386 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6331 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2393 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2400 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6355 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2407 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2416 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2425 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6393 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2432 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6407 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2441 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2450 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6431 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2457 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2466 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2473 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2482 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6479 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2489 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2498 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 6500 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2504 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6506 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2505 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2506 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6518 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2507 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6524 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2508 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2511 "src/p.y" /* yacc.c:1646  */
    {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 6540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2516 "src/p.y" /* yacc.c:1646  */
    {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 6550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2523 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2531 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2538 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2546 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2554 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2561 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2567 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2574 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2582 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = false;
                  }
#line 6654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 2585 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = true;
                  }
#line 6662 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 2591 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 6673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 2597 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 6683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 2604 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 2610 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6704 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 2617 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 2623 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 6725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 2630 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 2636 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 6746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 2643 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 6755 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 2649 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 6764 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 2654 "src/p.y" /* yacc.c:1646  */
    {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 6775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 2662 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6788 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 2670 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 2678 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6814 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 2686 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6827 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 2694 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 2702 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6853 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 2712 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6866 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 2720 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6879 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 2728 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 2736 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 2744 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 2752 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6931 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 2762 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 6937 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 2765 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 6943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 2766 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 6949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 2767 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 6955 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 6959 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2770 "src/p.y" /* yacc.c:1906  */



/* -------------------------------------------------------- Parser interface */


/**
 * Syntactic error routine
 *
 * This routine is automatically called by the lexer!
 */
void yyerror(const char *s, ...) {
        ASSERT(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
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
        ASSERT(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
        msg = Str_vcat(s, ap);
        va_end(ap);
        LogWarning("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
        FREE(msg);
}


/**
 * Argument error routine
 */
void yyerror2(const char *s, ...) {
        ASSERT(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
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
        ASSERT(s);
        char *msg = NULL;
        va_list ap;
        va_start(ap, s);
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
        Run.limits.programTimeout    = LIMIT_PROGRAMTIMEOUT;
        Run.limits.stopTimeout       = LIMIT_STOPTIMEOUT;
        Run.limits.startTimeout      = LIMIT_STARTTIMEOUT;
        Run.limits.restartTimeout    = LIMIT_RESTARTTIMEOUT;
        Run.onreboot                 = Onreboot_Start;
        Run.mmonitcredentials        = NULL;
        Run.httpd.flags              = Httpd_Disabled | Httpd_Signature;
        Run.httpd.credentials        = NULL;
        memset(&(Run.httpd.socket), 0, sizeof(Run.httpd.socket));
        Run.mailserver_timeout       = SMTP_TIMEOUT;
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
        for (int i = 0; i <= Handler_Max; i++)
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
                if (gethostname(hostname, sizeof(hostname))) {
                        LogError("Cannot get system hostname -- please add 'check system <name>'\n");
                        cfg_errflag++;
                }
                if (Util_existService(hostname)) {
                        LogError("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", hostname);
                        cfg_errflag++;
                }
                Run.system = createservice(Service_System, Str_dup(hostname), NULL, check_system);
                addservice(Run.system);
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

        Processor_setHttpPostLimit();
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

        check_name(name);

        if (current)
                addservice(current);

        NEW(current);
        current->type = type;
        switch (type) {
                case Service_Directory:
                        NEW(current->inf.directory);
                        break;
                case Service_Fifo:
                        NEW(current->inf.fifo);
                        break;
                case Service_File:
                        NEW(current->inf.file);
                        break;
                case Service_Filesystem:
                        NEW(current->inf.filesystem);
                        break;
                case Service_Net:
                        NEW(current->inf.net);
                        break;
                case Service_Process:
                        NEW(current->inf.process);
                        break;
                default:
                        break;
        }
        Util_resetInfo(current);

        if (type == Service_Program) {
                NEW(current->program);
                current->program->args = command;
                command = NULL;
                current->program->timeout = Run.limits.programTimeout;
        }

        /* Set default values */
        current->mode     = Monitor_Active;
        current->monitor  = Monitor_Init;
        current->onreboot = Run.onreboot;
        current->name     = name;
        current->check    = check;
        current->path     = value;

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
                        char program[PATH_MAX];
                        strncpy(program, s->program->args->arg[0], sizeof(program) - 1);
                        s->program->C = Command_new(program, NULL);
                        for (int i = 1; i < s->program->args->length; i++) {
                                Command_appendArgument(s->program->C, s->program->args->arg[i]);
                                snprintf(program + strlen(program), sizeof(program) - strlen(program) - 1, " %s", s->program->args->arg[i]);
                        }
                        s->path = Str_dup(program);
                        if (s->program->args->has_uid)
                                Command_setUid(s->program->C, s->program->args->uid);
                        if (s->program->args->has_gid)
                                Command_setGid(s->program->C, s->program->args->gid);
                        // Set environment
                        Command_setEnv(s->program->C, "MONIT_SERVICE", s->name);
                        break;
                case Service_Net:
                        if (! s->linkstatuslist) {
                                // Add link status test if not defined
                                addeventaction(&(linkstatusset).action, Action_Alert, Action_Alert);
                                addlinkstatus(s, &linkstatusset);
                        }
                        break;
                case Service_Filesystem:
                        if (! s->nonexistlist && ! s->existlist) {
                                // Add non-existence test if not defined
                                addeventaction(&(nonexistset).action, Action_Restart, Action_Alert);
                                addnonexist(&nonexistset);
                        }
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
                        if (! s->nonexistlist && ! s->existlist) {
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
        m->replyto  = f->replyto;
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
                if (sslset.flags) {
#ifdef HAVE_OPENSSL
                        p->target.net.ssl.certificate.minimumDays = port->target.net.ssl.certificate.minimumDays;
                        if (sslset.flags && (p->target.net.port == 25 || p->target.net.port == 587))
                                sslset.flags = SSL_StartTLS;
                        _setSSLOptions(&(p->target.net.ssl.options));
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
        ASSERT(rr);
        if (Run.flags & Run_ProcessEngineEnabled) {
                Resource_T r;
                NEW(r);
                r->resource_id = rr->resource_id;
                r->limit       = rr->limit;
                r->action      = rr->action;
                r->operator    = rr->operator;
                r->next        = current->resourcelist;
                current->resourcelist = r;
        } else {
                yywarning("Cannot activate service check. The process status engine was disabled. On certain systems you must run monit as root to utilize this feature)\n");
        }
        reset_resourceset();
}


/*
 * Add a new file object to the current service timestamp list
 */
static void addtimestamp(Timestamp_T ts) {
        ASSERT(ts);

        Timestamp_T t;
        NEW(t);
        t->operator     = ts->operator;
        t->time         = ts->time;
        t->action       = ts->action;
        t->test_changes = ts->test_changes;

        if (t->test_changes) {
                if (! File_exist(current->path))
                        DEBUG("The path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", current->path);
                else if (! (t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG)))
                        yyerror2("Cannot get the timestamp for '%s'", current->path);
                else
                        t->initialized = true;
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
static void addfsflag(FsFlag_T ff) {
        ASSERT(ff);

        FsFlag_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->fsflaglist;
        current->fsflaglist = f;

        reset_fsflagset();
}


/*
 * Add a new Nonexist object to the current service list
 */
static void addnonexist(NonExist_T ff) {
        ASSERT(ff);

        NonExist_T f;
        NEW(f);
        f->action = ff->action;

        f->next = current->nonexistlist;
        current->nonexistlist = f;

        reset_nonexistset();
}


static void addexist(Exist_T rule) {
        ASSERT(rule);
        Exist_T r;
        NEW(r);
        r->action = rule->action;
        r->next = current->existlist;
        current->existlist = r;
        reset_existset();
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
        NEW(m->regex_comp);

        m->match_string = ms->match_string;
        m->match_path   = ms->match_path ? Str_dup(ms->match_path) : NULL;
        m->action       = ms->action;
        m->not          = ms->not;
        m->ignore       = ms->ignore;
        m->next         = NULL;

        addeventaction(&(m->action), actionnumber, Action_Ignored);

        int reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, ms->regex_comp, errbuf, STRLEN);
                if (m->match_path != NULL)
                        yyerror2("Regex parsing error: %s on line %i of", errbuf, linenumber);
                else
                        yyerror2("Regex parsing error: %s", errbuf);
        }
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
static void addfilesystem(FileSystem_T ds) {
        FileSystem_T dev;

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
                int reg_return;
                NEW(g->expect);
                reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
                FREE(expect);
                if (reg_return != 0) {
                        char errbuf[STRLEN];
                        regerror(reg_return, g->expect, errbuf, STRLEN);
                        yyerror2("Regex parsing error: %s", errbuf);
                }
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
                sslset.flags = SSL_Enabled;
}


/*
 * Set the url request for a port
 */
static void  seturlrequest(int operator, char *regex) {

        ASSERT(regex);

        if (! urlrequest)
                NEW(urlrequest);
        urlrequest->operator = operator;
        int reg_return;
        NEW(urlrequest->regex);
        reg_return = regcomp(urlrequest->regex, regex, REG_NOSUB|REG_EXTENDED);
        if (reg_return != 0) {
                char errbuf[STRLEN];
                regerror(reg_return, urlrequest->regex, errbuf, STRLEN);
                yyerror2("Regex parsing error: %s", errbuf);
        }
}


/*
 * Add a new data recipient server to the mmonit server list
 */
static void addmmonit(Mmonit_T mmonit) {
        ASSERT(mmonit->url);

        Mmonit_T c;
        NEW(c);
        c->url = mmonit->url;
        c->compress = MmonitCompress_Init;
        _setSSLOptions(&(c->ssl));
        if (IS(c->url->protocol, "https")) {
#ifdef HAVE_OPENSSL
                c->ssl.flags = SSL_Enabled;
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

        if (sslset.flags && (mailserver->port == 25 || mailserver->port == 587))
                sslset.flags = SSL_StartTLS;
        _setSSLOptions(&(s->ssl));

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
        sslset.version = sslset.verify = sslset.allowSelfSigned = -1;
}


/*
 * Reset the current mailset for reuse
 */
static void reset_mailset() {
        memset(&mailset, 0, sizeof(struct Mail_T));
}


/*
 * Reset the mailserver set to default values
 */
static void reset_mailserverset() {
        memset(&mailserverset, 0, sizeof(struct MailServer_T));
        mailserverset.port = PORT_SMTP;
}


/*
 * Reset the mmonit set to default values
 */
static void reset_mmonitset() {
        memset(&mmonitset, 0, sizeof(struct Mmonit_T));
        mmonitset.timeout = Run.limits.networkTimeout;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
        memset(&portset, 0, sizeof(struct Port_T));
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
        timestampset.initialized = false;
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


static void reset_existset() {
        existset.action = NULL;
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
static void reset_rateset(struct rate_t *r) {
        r->count = 1;
        r->cycles = 1;
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


static void _setPEM(char **store, char *path, const char *description, boolean_t isFile) {
        if (*store) {
                yyerror2("Duplicate %s", description);
        } else if (! File_exist(path)) {
                yyerror2("%s doesn't exist", description);
        } else if (! (isFile ? File_isFile(path) : File_isDirectory(path))) {
                yyerror2("%s is not a %s", description, isFile ? "file" : "directory");
        } else if (! File_isReadable(path)) {
                yyerror2("Cannot read %s", description);
        } else {
                sslset.flags = SSL_Enabled;
                *store = path;
        }
}


static void _setSSLOptions(SslOptions_T options) {
        options->allowSelfSigned = sslset.allowSelfSigned;
        options->CACertificateFile = sslset.CACertificateFile;
        options->CACertificatePath = sslset.CACertificatePath;
        options->checksum = sslset.checksum;
        options->checksumType = sslset.checksumType;
        options->ciphers = sslset.ciphers;
        options->clientpemfile = sslset.clientpemfile;
        options->flags = sslset.flags;
        options->pemfile = sslset.pemfile;
        options->verify = sslset.verify;
        options->version = sslset.version;
        reset_sslset();
}

