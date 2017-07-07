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
    SPAMASSASSIN = 385,
    FAIL2BAN = 386,
    STRING = 387,
    PATH = 388,
    MAILADDR = 389,
    MAILFROM = 390,
    MAILREPLYTO = 391,
    MAILSUBJECT = 392,
    MAILBODY = 393,
    SERVICENAME = 394,
    STRINGNAME = 395,
    NUMBER = 396,
    PERCENT = 397,
    LOGLIMIT = 398,
    CLOSELIMIT = 399,
    DNSLIMIT = 400,
    KEEPALIVELIMIT = 401,
    REPLYLIMIT = 402,
    REQUESTLIMIT = 403,
    STARTLIMIT = 404,
    WAITLIMIT = 405,
    GRACEFULLIMIT = 406,
    CLEANUPLIMIT = 407,
    REAL = 408,
    CHECKPROC = 409,
    CHECKFILESYS = 410,
    CHECKFILE = 411,
    CHECKDIR = 412,
    CHECKHOST = 413,
    CHECKSYSTEM = 414,
    CHECKFIFO = 415,
    CHECKPROGRAM = 416,
    CHECKNET = 417,
    THREADS = 418,
    CHILDREN = 419,
    METHOD = 420,
    GET = 421,
    HEAD = 422,
    STATUS = 423,
    ORIGIN = 424,
    VERSIONOPT = 425,
    READ = 426,
    WRITE = 427,
    OPERATION = 428,
    SERVICETIME = 429,
    DISK = 430,
    RESOURCE = 431,
    MEMORY = 432,
    TOTALMEMORY = 433,
    LOADAVG1 = 434,
    LOADAVG5 = 435,
    LOADAVG15 = 436,
    SWAP = 437,
    MODE = 438,
    ACTIVE = 439,
    PASSIVE = 440,
    MANUAL = 441,
    ONREBOOT = 442,
    NOSTART = 443,
    LASTSTATE = 444,
    CPU = 445,
    TOTALCPU = 446,
    CPUUSER = 447,
    CPUSYSTEM = 448,
    CPUWAIT = 449,
    GROUP = 450,
    REQUEST = 451,
    DEPENDS = 452,
    BASEDIR = 453,
    SLOT = 454,
    EVENTQUEUE = 455,
    SECRET = 456,
    HOSTHEADER = 457,
    UID = 458,
    EUID = 459,
    GID = 460,
    MMONIT = 461,
    INSTANCE = 462,
    USERNAME = 463,
    PASSWORD = 464,
    TIME = 465,
    ATIME = 466,
    CTIME = 467,
    MTIME = 468,
    CHANGED = 469,
    MILLISECOND = 470,
    SECOND = 471,
    MINUTE = 472,
    HOUR = 473,
    DAY = 474,
    MONTH = 475,
    SSLAUTO = 476,
    SSLV2 = 477,
    SSLV3 = 478,
    TLSV1 = 479,
    TLSV11 = 480,
    TLSV12 = 481,
    CERTMD5 = 482,
    AUTO = 483,
    BYTE = 484,
    KILOBYTE = 485,
    MEGABYTE = 486,
    GIGABYTE = 487,
    INODE = 488,
    SPACE = 489,
    TFREE = 490,
    PERMISSION = 491,
    SIZE = 492,
    MATCH = 493,
    NOT = 494,
    IGNORE = 495,
    ACTION = 496,
    UPTIME = 497,
    EXEC = 498,
    UNMONITOR = 499,
    PING = 500,
    PING4 = 501,
    PING6 = 502,
    ICMP = 503,
    ICMPECHO = 504,
    NONEXIST = 505,
    EXIST = 506,
    INVALID = 507,
    DATA = 508,
    RECOVERED = 509,
    PASSED = 510,
    SUCCEEDED = 511,
    URL = 512,
    CONTENT = 513,
    PID = 514,
    PPID = 515,
    FSFLAG = 516,
    REGISTER = 517,
    CREDENTIALS = 518,
    URLOBJECT = 519,
    ADDRESSOBJECT = 520,
    TARGET = 521,
    TIMESPEC = 522,
    HTTPHEADER = 523,
    MAXFORWARD = 524,
    FIPS = 525,
    GREATER = 526,
    GREATEROREQUAL = 527,
    LESS = 528,
    LESSOREQUAL = 529,
    EQUAL = 530,
    NOTEQUAL = 531
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
#define SPAMASSASSIN 385
#define FAIL2BAN 386
#define STRING 387
#define PATH 388
#define MAILADDR 389
#define MAILFROM 390
#define MAILREPLYTO 391
#define MAILSUBJECT 392
#define MAILBODY 393
#define SERVICENAME 394
#define STRINGNAME 395
#define NUMBER 396
#define PERCENT 397
#define LOGLIMIT 398
#define CLOSELIMIT 399
#define DNSLIMIT 400
#define KEEPALIVELIMIT 401
#define REPLYLIMIT 402
#define REQUESTLIMIT 403
#define STARTLIMIT 404
#define WAITLIMIT 405
#define GRACEFULLIMIT 406
#define CLEANUPLIMIT 407
#define REAL 408
#define CHECKPROC 409
#define CHECKFILESYS 410
#define CHECKFILE 411
#define CHECKDIR 412
#define CHECKHOST 413
#define CHECKSYSTEM 414
#define CHECKFIFO 415
#define CHECKPROGRAM 416
#define CHECKNET 417
#define THREADS 418
#define CHILDREN 419
#define METHOD 420
#define GET 421
#define HEAD 422
#define STATUS 423
#define ORIGIN 424
#define VERSIONOPT 425
#define READ 426
#define WRITE 427
#define OPERATION 428
#define SERVICETIME 429
#define DISK 430
#define RESOURCE 431
#define MEMORY 432
#define TOTALMEMORY 433
#define LOADAVG1 434
#define LOADAVG5 435
#define LOADAVG15 436
#define SWAP 437
#define MODE 438
#define ACTIVE 439
#define PASSIVE 440
#define MANUAL 441
#define ONREBOOT 442
#define NOSTART 443
#define LASTSTATE 444
#define CPU 445
#define TOTALCPU 446
#define CPUUSER 447
#define CPUSYSTEM 448
#define CPUWAIT 449
#define GROUP 450
#define REQUEST 451
#define DEPENDS 452
#define BASEDIR 453
#define SLOT 454
#define EVENTQUEUE 455
#define SECRET 456
#define HOSTHEADER 457
#define UID 458
#define EUID 459
#define GID 460
#define MMONIT 461
#define INSTANCE 462
#define USERNAME 463
#define PASSWORD 464
#define TIME 465
#define ATIME 466
#define CTIME 467
#define MTIME 468
#define CHANGED 469
#define MILLISECOND 470
#define SECOND 471
#define MINUTE 472
#define HOUR 473
#define DAY 474
#define MONTH 475
#define SSLAUTO 476
#define SSLV2 477
#define SSLV3 478
#define TLSV1 479
#define TLSV11 480
#define TLSV12 481
#define CERTMD5 482
#define AUTO 483
#define BYTE 484
#define KILOBYTE 485
#define MEGABYTE 486
#define GIGABYTE 487
#define INODE 488
#define SPACE 489
#define TFREE 490
#define PERMISSION 491
#define SIZE 492
#define MATCH 493
#define NOT 494
#define IGNORE 495
#define ACTION 496
#define UPTIME 497
#define EXEC 498
#define UNMONITOR 499
#define PING 500
#define PING4 501
#define PING6 502
#define ICMP 503
#define ICMPECHO 504
#define NONEXIST 505
#define EXIST 506
#define INVALID 507
#define DATA 508
#define RECOVERED 509
#define PASSED 510
#define SUCCEEDED 511
#define URL 512
#define CONTENT 513
#define PID 514
#define PPID 515
#define FSFLAG 516
#define REGISTER 517
#define CREDENTIALS 518
#define URLOBJECT 519
#define ADDRESSOBJECT 520
#define TARGET 521
#define TIMESPEC 522
#define HTTPHEADER 523
#define MAXFORWARD 524
#define FIPS 525
#define GREATER 526
#define GREATEROREQUAL 527
#define LESS 528
#define LESSOREQUAL 529
#define EQUAL 530
#define NOTEQUAL 531

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

#line 949 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 964 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1707

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  283
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  235
/* YYNRULES -- Number of rules.  */
#define YYNRULES  765
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1429

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   531

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
       2,     2,     2,     2,     2,     2,     2,     2,   279,     2,
       2,     2,     2,     2,   280,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   281,     2,   282,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   277,     2,   278,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276
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
     463,   464,   465,   466,   467,   468,   469,   470,   473,   474,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   494,   495,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     513,   514,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   534,   535,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   552,   553,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   573,   574,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   590,   594,   597,   603,   613,   618,   621,   626,   631,
     634,   637,   642,   648,   651,   652,   655,   658,   661,   664,
     667,   670,   673,   676,   679,   682,   685,   688,   691,   694,
     699,   704,   712,   715,   720,   723,   727,   733,   738,   743,
     751,   754,   755,   758,   764,   765,   768,   771,   772,   773,
     774,   777,   778,   783,   788,   791,   794,   795,   798,   802,
     806,   810,   814,   817,   821,   824,   827,   830,   835,   841,
     842,   845,   859,   866,   875,   876,   879,   883,   887,   891,
     899,   907,   911,   917,   926,   933,   948,   949,   952,   961,
     972,   973,   976,   979,   982,   983,   984,   985,   988,  1005,
    1006,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1021,  1027,  1033,  1039,  1045,  1051,  1052,  1055,  1056,  1059,
    1062,  1067,  1072,  1075,  1083,  1087,  1091,  1095,  1099,  1099,
    1106,  1106,  1113,  1113,  1120,  1120,  1127,  1134,  1135,  1138,
    1144,  1147,  1152,  1155,  1158,  1165,  1174,  1179,  1182,  1187,
    1192,  1197,  1205,  1211,  1226,  1231,  1238,  1247,  1250,  1255,
    1258,  1264,  1267,  1272,  1273,  1276,  1277,  1280,  1283,  1288,
    1292,  1296,  1299,  1304,  1307,  1312,  1317,  1320,  1325,  1334,
    1335,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,  1351,  1358,  1359,  1362,  1363,  1364,  1365,  1366,
    1367,  1370,  1376,  1377,  1380,  1381,  1382,  1383,  1384,  1387,
    1393,  1398,  1403,  1410,  1411,  1414,  1415,  1416,  1417,  1420,
    1423,  1428,  1433,  1439,  1442,  1447,  1450,  1454,  1459,  1460,
    1463,  1464,  1467,  1472,  1475,  1478,  1481,  1484,  1487,  1490,
    1493,  1498,  1501,  1506,  1509,  1512,  1515,  1518,  1521,  1524,
    1527,  1531,  1534,  1537,  1542,  1545,  1548,  1553,  1556,  1559,
    1562,  1565,  1568,  1571,  1574,  1577,  1580,  1583,  1586,  1591,
    1599,  1609,  1610,  1613,  1616,  1619,  1622,  1627,  1628,  1631,
    1634,  1639,  1640,  1643,  1651,  1656,  1659,  1664,  1669,  1670,
    1673,  1676,  1681,  1682,  1685,  1688,  1691,  1692,  1693,  1694,
    1695,  1696,  1699,  1705,  1708,  1713,  1717,  1723,  1728,  1734,
    1735,  1740,  1745,  1746,  1749,  1754,  1755,  1758,  1761,  1764,
    1767,  1771,  1775,  1779,  1783,  1787,  1791,  1795,  1799,  1803,
    1809,  1813,  1820,  1826,  1832,  1839,  1844,  1849,  1854,  1859,
    1862,  1867,  1870,  1875,  1878,  1883,  1886,  1891,  1894,  1899,
    1904,  1909,  1915,  1923,  1929,  1930,  1933,  1937,  1940,  1944,
    1949,  1952,  1955,  1956,  1959,  1960,  1961,  1962,  1963,  1964,
    1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,
    1985,  1986,  1987,  1988,  1991,  1992,  1995,  1996,  1999,  2000,
    2001,  2002,  2005,  2009,  2013,  2019,  2022,  2025,  2031,  2034,
    2038,  2043,  2050,  2053,  2054,  2057,  2060,  2067,  2076,  2082,
    2083,  2086,  2087,  2088,  2089,  2090,  2091,  2092,  2095,  2101,
    2102,  2105,  2106,  2107,  2108,  2111,  2116,  2123,  2130,  2131,
    2132,  2133,  2136,  2141,  2148,  2153,  2158,  2163,  2170,  2175,
    2182,  2189,  2196,  2203,  2204,  2205,  2208,  2213,  2220,  2225,
    2232,  2233,  2236,  2237,  2238,  2239,  2242,  2249,  2257,  2258,
    2259,  2260,  2261,  2262,  2263,  2264,  2267,  2268,  2269,  2270,
    2271,  2272,  2275,  2276,  2277,  2279,  2280,  2282,  2285,  2288,
    2296,  2299,  2302,  2306,  2309,  2312,  2315,  2320,  2331,  2342,
    2352,  2364,  2365,  2370,  2377,  2378,  2383,  2390,  2393,  2396,
    2399,  2404,  2408,  2415,  2421,  2422,  2423,  2426,  2433,  2440,
    2447,  2456,  2465,  2472,  2481,  2490,  2497,  2506,  2513,  2522,
    2529,  2538,  2544,  2545,  2546,  2547,  2548,  2551,  2556,  2563,
    2571,  2578,  2586,  2594,  2601,  2607,  2614,  2622,  2625,  2631,
    2637,  2644,  2650,  2657,  2663,  2670,  2676,  2683,  2689,  2694,
    2702,  2710,  2718,  2726,  2734,  2742,  2752,  2760,  2768,  2776,
    2784,  2792,  2802,  2805,  2806,  2807
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
  "SPAMASSASSIN", "FAIL2BAN", "STRING", "PATH", "MAILADDR", "MAILFROM",
  "MAILREPLYTO", "MAILSUBJECT", "MAILBODY", "SERVICENAME", "STRINGNAME",
  "NUMBER", "PERCENT", "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT",
  "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT", "STARTLIMIT",
  "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL", "CHECKPROC",
  "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST", "CHECKSYSTEM",
  "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS", "CHILDREN", "METHOD",
  "GET", "HEAD", "STATUS", "ORIGIN", "VERSIONOPT", "READ", "WRITE",
  "OPERATION", "SERVICETIME", "DISK", "RESOURCE", "MEMORY", "TOTALMEMORY",
  "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE", "ACTIVE", "PASSIVE",
  "MANUAL", "ONREBOOT", "NOSTART", "LASTSTATE", "CPU", "TOTALCPU",
  "CPUUSER", "CPUSYSTEM", "CPUWAIT", "GROUP", "REQUEST", "DEPENDS",
  "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID",
  "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD", "TIME", "ATIME",
  "CTIME", "MTIME", "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12",
  "CERTMD5", "AUTO", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE",
  "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE",
  "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6",
  "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
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
  "httplist", "http", "status", "method", "request", "responsesum",
  "hostheader", "httpheaderlist", "secret", "radiuslist", "radius",
  "apache_stat_list", "apache_stat", "exist", "pid", "ppid", "uptime",
  "icmpcount", "icmpsize", "icmptimeout", "icmpoutgoing", "stoptimeout",
  "starttimeout", "restarttimeout", "programtimeout", "nettimeout",
  "connectiontimeout", "retry", "actionrate", "urloption", "urloperator",
  "alert", "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "onreboot", "group", "depend", "dependlist", "dependant", "statusvalue",
  "resourceprocess", "resourceprocesslist", "resourceprocessopt",
  "resourcesystem", "resourcesystemlist", "resourcesystemopt",
  "resourcecpuproc", "resourcecpu", "resourcecpuid", "resourcemem",
  "resourcememproc", "resourceswap", "resourcethreads", "resourcechild",
  "resourceload", "resourceloadavg", "resourceread", "resourcewrite",
  "value", "timestamptype", "timestamp", "operator", "time", "totaltime",
  "currenttime", "repeat", "action", "action1", "action2", "rateXcycles",
  "rateXYcycles", "rate1", "rate2", "recovery", "checksum", "hashtype",
  "inode", "space", "read", "write", "servicetime", "fsflag", "unit",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   123,   125,    58,
      64,    91,    93
};
# endif

#define YYPACT_NINF -757

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-757)))

#define YYTABLE_NINF -692

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     522,    82,   -59,   -11,     0,    44,    54,   118,   134,   148,
     189,   119,   522,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,    27,   138,    38,  -757,  -757,   204,    56,   184,   203,
      64,   205,   220,   266,   131,    22,     9,   159,  -757,   -41,
     -36,   360,   384,   398,   437,  -757,   402,   406,    90,  -757,
    -757,   630,    79,   720,   801,   918,  1116,  1243,   801,  1315,
     474,  -757,   415,   432,   -20,  -757,   917,  -757,  -757,  -757,
    -757,  -757,   770,  -757,  -757,   897,  -757,  -757,  -757,   378,
     412,  -757,   159,   295,   284,   290,  1208,   513,   440,   443,
     227,   231,   454,   456,   463,   464,   335,   467,   492,   234,
     335,   335,   509,   335,   -91,   382,   336,   109,   516,   514,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,    29,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,    81,  -126,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,   140,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,    21,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,    68,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   321,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  1336,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,   -72,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   529,
     638,  -757,   524,   392,   551,  -757,   628,     4,   538,   572,
     618,   621,   435,   581,  -757,   580,   615,   511,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
      18,   320,  -757,  -757,  -757,  -757,  -757,   485,   488,  -757,
    -757,   -77,  -757,   564,  -757,   472,   295,   502,  -757,   897,
    1208,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   804,  -757,   646,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,   244,  -757,  -757,
    -757,   247,   698,   893,   893,   371,   893,   893,  -757,  -757,
    -757,   893,   893,   287,   542,   893,   655,  1402,  -757,  -757,
    -757,  -757,  -757,  -757,   893,  -757,  -757,   327,   366,  -757,
     391,   743,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,   514,  -757,   523,  1208,   513,   104,  -757,  -757,
    -757,  -757,     8,   893,   542,   356,   893,   573,  -757,   356,
     588,   277,   893,   893,   893,  -152,   948,  1248,   672,   197,
     776,   893,   893,   893,   586,   796,   893,   893,  -757,  -757,
    -757,  -757,  1354,  -757,  -757,   893,  -757,  -757,  -757,   893,
     670,  -757,   699,  -757,   749,   357,   745,  -757,  -757,  -757,
    -757,  -757,  -757,   747,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,   659,   767,  -757,   768,   783,   793,   651,   777,
     815,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   671,   675,   677,   684,   685,   688,   689,   690,  -757,
    -757,   694,   695,   696,   700,   702,   707,   708,   712,   713,
    -757,  -757,  -757,  -757,  -757,  -757,   836,   837,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,   -13,   892,   896,  -757,   939,
     854,    98,   106,    58,  -757,  -757,  -757,   865,   875,   331,
     364,   374,   751,   940,  -757,   876,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,   878,   879,   893,   893,     6,     6,     6,
       6,   655,   655,   655,   880,    31,  -757,  -757,  1018,  -757,
    1020,     6,   885,   190,  -757,   886,   196,  -757,   888,   215,
    -757,  -757,  -757,  1208,  1027,  -757,  -757,  -757,   901,   950,
     655,   655,   655,   951,   908,  -757,  -757,   505,   909,   508,
     526,   585,    34,    59,    76,   655,   893,   169,   893,     6,
    -757,  -757,  -757,   969,   655,   910,   912,   920,   893,   893,
     655,     6,     6,  -757,  1053,     6,   925,   655,  -757,   392,
      10,  -757,  -757,  -757,  -757,  -757,  -757,   927,   943,   944,
     946,   954,  1060,    84,   956,   955,   958,   714,   718,   960,
     963,   968,   957,   959,   965,   967,   971,   975,   977,   989,
     990,  -757,   916,  -757,   896,   513,  -757,   921,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,   655,   655,   655,   655,
     655,   655,  -757,   995,  -757,  1031,  1049,  -757,  -757,   202,
     237,  -757,  -757,   -74,   351,   996,   997,  1104,  1136,  1141,
     907,  -757,  1092,   483,   483,  -757,   932,  -757,   933,  -757,
     947,  -757,  1114,   896,   655,    25,  1150,  1166,  1179,   655,
     770,   655,   655,   907,   655,   655,  -757,  -757,  -757,  -757,
    1012,   770,  1013,   770,   982,   983,  1195,   305,    40,  1063,
       6,   578,    41,    41,    41,   964,  -757,  1201,  1067,    -5,
      94,  1071,  1073,  1210,   624,   633,   483,  1074,   655,  1212,
     952,   952,  -757,  1086,   954,   954,   954,  1060,  -757,   954,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,   770,   770,   770,   770,   544,   553,
     587,   607,   616,  -757,   513,  -757,  -757,  1220,  1221,  1223,
    1224,  1226,  1228,    12,  -757,   387,  1103,  1108,   530,  1528,
    1095,  1100,  -757,  -757,  -757,  -757,  -757,  -757,  1237,  1238,
    1072,   770,  1076,   770,  -757,  -757,  -757,  -757,  -757,  -757,
     483,   483,   483,  -757,  -757,  -757,  -757,  -757,   655,  -757,
    -757,  -757,  -757,  -757,   335,  -757,  -757,  1240,  1240,  -757,
    -757,  -757,   896,   513,  1242,  1124,  1252,   483,   483,   483,
    1253,   655,  1254,  1255,   655,  1256,  1257,   655,  1050,   655,
    1050,   655,   655,   483,    40,  1123,  1262,   655,   637,   655,
     655,  1139,  1131,  1132,  1133,  -757,  -757,  -757,  -757,  -757,
    1271,  1276,  1278,  -757,    41,   483,   655,  1050,  1050,  1050,
    1050,   175,   200,   483,  -757,  -757,  -757,  -757,  1240,  -757,
    1279,   483,  1157,  1159,  -757,   954,   954,   954,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,   483,   483,   483,   483,   483,
     483,    45,   356,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    1288,  1162,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  1290,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  1030,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   120,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  1080,  -757,
     483,   107,  -757,  1050,  -757,  1050,  -757,  -757,  1240,  1292,
      72,  1297,  -757,  -757,   513,  -757,   483,   655,   483,  1240,
    -757,  -757,   483,  1299,   483,   483,  1301,   483,   483,  1302,
    -757,   655,  1303,   655,  1304,  1305,  -757,  1307,   655,   483,
    1311,   655,   655,  1317,  1318,  -757,  -757,  1109,  -757,   483,
     483,   483,  1321,  1240,  1322,   655,   655,   655,   655,   333,
     347,   385,   404,  1240,  -757,   483,  -757,  -757,  -757,  1240,
    1240,  1240,  1240,  1240,  1240,  1059,  1170,   483,  -757,   483,
    1331,   376,   376,  1187,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,  -757,  -757,  1030,  -757,   649,   649,
     649,  1199,  1200,  1192,  1203,   120,  -757,  -168,  1138,  -757,
    1240,  -757,  -757,  -757,  -757,  -757,   483,  1246,   110,  -757,
     373,  -757,  1240,  1329,  1240,  -757,  -757,   483,  -757,  -757,
     483,  -757,  -757,   483,  1339,   483,  1340,   483,   483,   483,
    1341,  1240,   483,  1342,  1343,   483,   483,  -757,  1240,  1240,
    1240,   483,  -757,   483,  1344,  1347,  1348,  1349,   468,  -757,
    -757,  -757,   655,   468,   655,   468,   655,   468,   655,  -757,
    1240,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  1217,  -757,
    1240,  1240,  -757,  -757,  -757,  1209,   704,   893,   757,  1227,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    1219,  1222,  1229,  1230,  1236,  1244,  1247,  1250,  1261,  1264,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,   380,  1265,  -757,  -757,  -757,  1249,  -757,  -757,
    -757,  1240,    36,  -757,   655,   655,   655,  -757,   483,  -757,
    1240,  1240,  1240,   483,  1240,   483,  1240,  1240,  1240,   483,
    -757,  1240,   483,   483,  1240,  1240,  -757,  -757,  -757,  1240,
    1240,   483,   483,   483,   483,   655,  1356,   655,  1363,   655,
    1373,   655,  1374,  -757,  1164,  -757,  -757,  -757,  -757,  -757,
    1267,  -757,  -757,  -757,  -128,  1251,  1270,  1272,  1274,  1275,
    1277,  1280,  1281,  1282,  1283,  -757,  -757,  -757,  -757,  -757,
    -757,  1334,  -757,  -757,  1389,  1390,  1391,  1240,  -757,  -757,
    -757,  1240,  -757,  1240,  -757,  -757,  -757,  1240,  -757,  1240,
    1240,  -757,  -757,  -757,  -757,  1240,  1240,  1240,  1240,  1392,
     483,  1415,   483,  1416,   483,  1422,   483,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,   483,   483,   483,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,   483,  1240,   483,  1240,   483,
    1240,   483,  1240,  -757,  -757,  -757,  -757,  1240,  -757,  1240,
    -757,  1240,  -757,  1240,  -757,  -757,  -757,  -757,  -757
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    22,    19,
      21,    23,    10,    11,    17,    18,    16,    12,     7,    13,
      14,    15,    33,    56,    76,    98,   115,   130,   147,   161,
     178,     0,     0,     0,   289,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   584,
       0,     0,     0,     0,     0,   343,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     222,   221,   196,   280,   537,   276,   288,   195,   246,   227,
     228,   204,   722,   229,   550,     0,   199,   200,   201,     0,
       0,   234,   230,   241,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    45,    46,    47,    38,    39,    40,
      44,    48,    49,   584,   549,    50,    51,    52,    53,    54,
      55,    41,    42,    43,   737,   737,    57,    58,    59,    60,
      61,    63,    65,    64,    72,    73,    74,    75,    62,    69,
      66,    71,    70,    67,    68,     0,    77,    78,    79,    80,
      81,    82,    84,    83,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    85,    86,    87,     0,    99,   100,
     101,   102,   103,   105,   107,   106,   111,   112,   113,   114,
     104,   108,   109,   110,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     0,
     131,   132,   133,   134,   140,   144,   141,   142,   143,   145,
     146,   135,   136,   137,   138,   139,     0,   148,   149,   150,
     151,   160,   152,   153,   154,   155,   156,   157,   158,   159,
     162,   163,   164,   165,   166,   168,   170,   169,   174,   175,
     176,   177,   167,   171,   172,   173,     0,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
       0,   194,     0,   278,     0,   277,   366,     0,     0,     0,
       0,     0,   244,     0,   302,     0,     0,     0,   291,   290,
     292,   293,   294,   298,   299,   309,   310,   295,   296,   297,
       0,     0,   723,   724,   725,   726,   202,     0,     0,   590,
     591,     0,   586,   224,   226,   233,   241,     0,   231,     0,
       0,   568,   555,   556,   570,   571,   578,   576,   558,   580,
     557,   579,   575,   582,   564,   566,   581,   572,   577,   554,
     583,   561,   565,   569,   562,   567,   560,   559,   573,   574,
     563,     0,   552,     0,   191,   332,   333,   334,   335,   338,
     337,   336,   339,   340,   344,   357,   358,   535,   353,   341,
     342,   409,     0,   658,   658,     0,   658,   658,   643,   644,
     645,   658,   658,     0,     0,   658,   691,   691,   609,   611,
     612,   613,   614,   615,   658,   616,   617,   531,   529,   551,
     533,     0,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   605,   602,   603,     0,     0,   763,   704,   652,   653,
     654,   655,   704,   658,   738,     0,   658,     0,   738,     0,
       0,     0,   658,   658,   658,     0,   658,   658,     0,   409,
       0,   658,   658,   658,     0,     0,   658,   658,   631,   628,
     629,   630,   691,   619,   624,   658,   622,   623,   621,   658,
       0,   223,     0,   280,     0,     0,     0,   271,   266,   267,
     268,   269,   270,     0,   272,   284,   285,   286,   287,   281,
     282,   283,     0,     0,   274,     0,     0,     0,   326,   314,
       0,   311,   300,   306,   308,   246,   301,   303,   304,   305,
     307,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   205,   588,   589,   275,   587,     0,     0,   235,   237,
     238,   239,   240,   232,   242,     0,     0,   584,   553,   764,
       0,     0,     0,   535,   354,   355,   345,     0,     0,     0,
       0,     0,     0,     0,   392,     0,   665,   659,   660,   661,
     662,   663,   664,     0,     0,   658,   658,     0,     0,     0,
       0,   691,   691,   691,     0,     0,   692,   693,     0,   610,
       0,     0,     0,   531,   347,     0,   529,   349,     0,   533,
     351,   592,   604,     0,     0,   546,   705,   706,     0,     0,
     691,   691,   691,     0,     0,   544,   545,     0,     0,     0,
       0,     0,     0,     0,     0,   691,   658,     0,   658,     0,
     403,   403,   403,     0,   691,     0,     0,     0,   658,   658,
     691,     0,     0,   620,     0,     0,     0,   691,   197,   279,
     264,   364,   363,   365,   273,   538,   367,   315,   316,   317,
       0,     0,   330,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,   585,   584,   763,   765,     0,   359,   361,
     360,   362,   356,   346,   410,   412,   691,   691,   691,   691,
     691,   691,   383,     0,   369,   691,     0,   640,   641,     0,
       0,   651,   650,   722,   722,     0,     0,     0,     0,     0,
     666,   689,     0,     0,     0,   642,     0,   348,     0,   350,
       0,   352,     0,   584,   691,   691,     0,     0,     0,   691,
     722,   691,   691,   666,   691,   691,   732,   731,   736,   735,
     651,   722,   651,   722,   651,     0,     0,     0,   651,     0,
       0,   722,   691,   691,   691,     0,   403,     0,     0,   722,
     722,     0,     0,     0,   722,   722,     0,     0,   691,     0,
     264,   264,   265,     0,     0,     0,     0,   330,   329,   319,
     327,   331,   313,   245,   254,   253,   255,   250,   251,   248,
     249,   256,   257,   252,   722,   722,   722,   722,     0,     0,
       0,     0,     0,   236,   763,   192,   536,     0,     0,     0,
       0,     0,     0,   691,   411,   691,     0,     0,     0,     0,
       0,     0,   393,   394,   395,   396,   397,   398,     0,     0,
     651,   722,   651,   722,   635,   634,   637,   636,   625,   626,
       0,     0,     0,   667,   668,   669,   670,   671,   691,   690,
     684,   685,   680,   683,     0,   686,   687,   697,   697,   532,
     530,   534,   584,   763,     0,     0,     0,     0,     0,     0,
       0,   691,     0,     0,   691,     0,     0,   691,   675,   691,
     675,   691,   691,     0,   651,     0,     0,   691,   722,   691,
     691,     0,     0,     0,     0,   404,   405,   406,   407,   408,
       0,     0,     0,   762,   691,     0,   691,   675,   675,   675,
     675,   722,   722,     0,   633,   632,   639,   638,   697,   627,
       0,     0,     0,     0,   261,   321,   323,   325,   312,   328,
     206,   207,   208,   209,   210,   211,   212,   213,   216,   217,
     214,   215,   218,   219,   193,     0,     0,     0,     0,     0,
       0,     0,     0,   388,   390,   389,   384,   386,   387,   385,
       0,     0,   413,   414,   379,   381,   380,   370,   371,   372,
     377,   373,   374,   376,   378,   375,     0,   459,   460,   417,
     415,   418,   424,   482,   482,     0,   428,   467,   467,   442,
     443,   431,   432,   433,   439,   440,   471,   425,     0,   448,
     426,   434,   435,   449,   451,   452,   453,   441,   478,   454,
     455,   502,   457,   450,   436,   444,   447,   427,     0,   540,
       0,     0,   647,   675,   649,   675,   522,   523,   697,     0,
     677,     0,   521,   608,   763,   547,     0,   691,     0,   697,
     740,   657,     0,     0,     0,     0,     0,     0,     0,     0,
     676,   691,     0,   691,     0,     0,   721,     0,   691,     0,
       0,   691,   691,     0,     0,   528,   525,     0,   526,     0,
       0,     0,     0,   697,     0,   691,   691,   691,   691,     0,
       0,     0,     0,   697,   618,     0,   607,   262,   263,   697,
     697,   697,   697,   697,   697,   259,     0,     0,   422,     0,
     416,   429,   430,     0,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   507,   508,   423,   505,   445,   446,
     437,     0,     0,     0,     0,   458,   461,   438,   456,   539,
     697,   542,   541,   646,   648,   520,     0,     0,   677,   681,
       0,   548,   697,     0,   697,   728,   703,     0,   730,   729,
       0,   734,   733,     0,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,     0,     0,     0,   527,   697,   697,
     697,     0,   747,     0,     0,     0,     0,     0,     0,   672,
     673,   674,   691,     0,   691,     0,   691,     0,   691,   748,
     697,   741,   742,   743,   744,   745,   746,   260,     0,   543,
     697,   697,   420,   421,   419,     0,     0,   658,     0,     0,
     499,   484,   485,   483,   488,   489,   486,   487,   490,   509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   469,   470,   468,   473,   474,   472,   465,   463,   466,
     464,   462,     0,     0,   480,   481,   479,     0,   504,   503,
     391,   697,     0,   682,   694,   694,   694,   727,     0,   701,
     697,   697,   697,     0,   697,     0,   697,   697,   697,     0,
     707,   697,     0,     0,   697,   697,   400,   401,   402,   697,
     697,     0,     0,     0,     0,   691,     0,   691,     0,   691,
       0,   691,     0,   606,     0,   382,   368,   497,   493,   494,
       0,   496,   495,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,   475,   477,   501,   524,
     678,     0,   695,   696,     0,     0,     0,   697,   739,   656,
     716,   697,   718,   697,   719,   720,   709,   697,   708,   697,
     697,   712,   711,   399,   749,   697,   697,   697,   697,     0,
       0,     0,     0,     0,     0,     0,     0,   258,   492,   500,
     491,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   679,     0,     0,     0,   702,   715,   717,   710,   714,
     713,   753,   750,   759,   756,     0,   697,     0,   697,     0,
     697,     0,   697,   688,   698,   699,   700,   697,   754,   697,
     751,   697,   760,   697,   757,   755,   752,   761,   758
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -757,  -757,  -757,  1417,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    1326,  -757,  -757,  1096,  -757,   -84,   922,  -757,   596,  -757,
    -317,   128,  -332,  -334,  -757,  -757,  -757,  1355,   970,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,   -63,  -756,   650,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  1512,
    1522,  1530,  -107,  -398,  -378,  -528,  -216,  -211,  -757,  1371,
    -757,  -757,  1377,  -757,  -757,  -757,  -757,  -757,  -757,  -534,
    -757,  -757,  -757,  -757,  -757,   613,  -757,  -757,  -757,   620,
     622,  -757,   318,   457,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   460,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,   337,   595,  -757,  -757,  1394,  -757,  -757,
    -757,  -757,   868,   872,   867,   915,  -757,  -672,  -256,  1538,
     644,  -432,  1588,  1479,  -757,  -330,  -350,  -138,  1142,  -302,
    1596,  1604,  1612,  1620,  1628,  -757,  1052,  -757,  -757,  -757,
    1075,  -757,  -757,  1016,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -223,  -757,  -757,  -757,   853,  -354,   178,  -390,
     736,  -494,  -337,   338,  -637,  -531,  -453,  -498,  -362,  -407,
    -315,  -329,  -757,  1051,  -757,  -757,  -757,  -757,  -757,  -757,
     619,    71,  -757,  1345,  -757,   746,  -757,   756,  -757,  -757,
    -757,  -757,  -757,  -757,  -428
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    71,   130,    72,   156,    73,   176,
      74,   198,    75,   215,    76,   230,    77,   247,    78,   260,
      79,   277,    14,    15,    16,   291,    17,    18,    19,    20,
     321,   541,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   335,   548,   338,    28,   495,   320,   530,   974,  1218,
     496,   793,   497,   498,    29,    30,    84,    85,   293,   499,
      31,    86,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   671,   794,   795,   796,   799,   800,   802,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   131,
     132,   133,   387,   563,   388,   565,   500,   501,   504,   134,
     835,   987,   135,   833,   976,   136,   715,   842,   221,   772,
     915,   573,   714,   574,   988,   843,  1120,  1224,   990,   844,
     845,  1145,  1146,  1138,  1253,  1140,  1256,  1264,  1265,  1147,
    1266,  1121,  1233,  1234,  1235,  1236,  1237,  1238,  1324,  1268,
    1148,  1269,  1136,  1137,   137,   138,   139,   140,   916,   917,
     918,   919,   607,   604,   610,   566,   296,   846,   847,   141,
     979,   627,   142,   143,   144,   371,   372,   107,   331,   332,
     145,   146,   147,   148,   149,   432,   433,   288,   150,   407,
     408,   259,   472,   473,   409,   474,   475,   476,   410,   477,
     411,   412,   413,   414,   415,   416,   723,   446,   168,   583,
     868,  1202,  1071,  1159,   876,   877,  1414,   596,   597,   598,
    1344,  1052,   169,   619,   188,   189,   190,   191,   192,   193,
     326,   170,   171,   447,   172,   151,   152,   153,   241,   242,
     243,   244,   245,   776,   374
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     600,   552,   308,   551,   584,   436,   587,   588,   615,   564,
     556,   589,   590,   417,   418,   594,   420,   630,   550,   603,
     606,   558,   609,   478,   601,   505,   506,   451,   507,   545,
     616,   617,   790,   791,   108,   702,   927,   109,    80,   564,
     564,   302,   564,   949,   521,  -691,   104,   971,   522,   523,
     421,   524,   525,   624,   526,   527,   628,   911,   327,   328,
     329,   330,   632,   633,   634,   654,   637,   639,   854,   392,
     294,   645,   646,   647,   459,   702,   651,   652,   702,   885,
      60,   702,   154,  1115,   620,   655,   731,   437,   622,   656,
      41,  1340,    42,    96,    43,    44,   479,   912,  1262,    45,
      46,  1263,   840,   841,   622,   614,   117,   773,   774,   635,
     521,    47,    83,   448,   522,   523,   104,   524,   525,    69,
     526,   527,   327,   328,   329,   330,   616,   617,    61,   118,
    1157,   913,   449,    48,    49,   929,   508,   509,   660,    62,
    1379,    50,   480,    51,   194,   211,   451,   721,   560,   273,
     120,   121,    52,   595,  1380,   322,   323,   324,   325,   722,
      81,   977,   392,   993,    53,   122,   595,    53,  1157,    54,
      83,   123,   732,   124,   125,   760,   422,  1341,   870,   871,
     427,   595,   595,    63,   727,   728,   729,   722,   528,   949,
     949,   949,   872,    64,  1141,   719,   720,  1151,   105,   873,
     762,   544,   110,   878,   385,   386,   558,    99,   100,   392,
      97,    98,   722,   746,   747,   748,  1099,   764,   438,   439,
     440,   441,   392,    87,   322,   323,   324,   325,   766,   722,
     698,   438,   439,   440,   441,   458,   106,   777,   700,   699,
     391,  1101,   924,   783,   620,   621,   767,   701,   770,   478,
     789,   549,   210,   545,   528,   938,   272,    65,   781,   782,
     404,   561,   126,   562,   558,   693,   127,   825,   434,    55,
     972,   567,   406,    66,   128,   561,   129,   562,   914,    82,
     602,   392,    56,   742,   510,   792,   605,    67,    57,  1142,
    1143,   438,   439,   440,   441,   442,   529,   428,   429,   827,
     828,   829,   830,   831,   832,   608,   435,   569,   848,   571,
     768,   452,   453,   561,   454,   562,  1144,    89,   443,   155,
     444,   567,   722,   322,   323,   324,   325,   460,    68,  1046,
    1047,  1048,   406,    88,   560,   568,    90,   884,   886,   445,
     618,    91,   890,   850,   892,   893,    92,   895,   896,   813,
     874,   875,    58,    93,   455,   722,  1059,  1060,  1061,   377,
     378,   906,   803,   379,   380,   920,   921,   922,   461,   462,
     463,   464,  1076,   456,   457,   392,   385,   386,   852,   404,
     531,   940,   532,   533,   534,   535,   536,   537,   538,   539,
     722,   406,   558,   561,  1093,   562,   964,   393,   394,   561,
      94,   562,  1103,   981,   322,   323,   324,   325,    95,   395,
    1106,   396,   397,   398,   399,   400,   302,   602,   561,   695,
     562,   302,   971,   101,   401,   402,   980,   484,   996,   322,
     323,   324,   325,   111,  1109,  1110,  1111,  1112,  1113,  1114,
     836,   837,   640,   641,   642,   643,   904,   561,   403,   562,
     569,   570,   571,   114,   572,  1055,   605,   112,   722,   385,
     386,  1049,   392,   706,   982,   983,   838,   385,   386,  1225,
     839,   113,   707,   404,  1198,   115,   405,   840,   841,   116,
     569,   608,   571,   289,  1063,   406,   290,  1066,  1203,   661,
    1069,   662,  1072,   856,  1074,  1075,   708,  1077,   385,   386,
    1080,   302,  1083,  1084,   572,   709,   710,   484,   292,  1150,
    1152,   333,  1335,   618,  1336,   711,   975,  1092,   986,  1094,
     424,   425,   426,   385,   386,  1162,  1205,  1164,   595,     1,
     561,  1166,   562,  1168,  1169,   465,  1171,  1172,   519,   520,
    1116,  1226,   585,   586,  1227,  1207,   591,   592,  1181,  1053,
    1199,  1200,  1201,   334,   870,   871,   824,   337,  1188,  1189,
    1190,   339,   547,  1073,  1199,  1200,  1201,   340,   872,   561,
     373,   562,  1228,   375,  1210,   873,   376,   978,  1229,   994,
     322,   323,   324,   325,   485,   486,  1220,   381,  1221,   382,
    1095,  1096,  1097,  1098,   561,   383,   562,   384,   540,   389,
     485,   486,  1199,  1200,  1201,   883,  1204,  1206,  1208,  1104,
     999,  1000,  1001,   487,   488,   489,   490,   491,   492,   493,
     494,  1199,  1200,  1201,   390,  1271,  1161,  1274,  1275,  1276,
     702,   625,   626,   119,   648,   649,  1280,   751,   752,  1281,
     754,   755,  1282,   419,  1284,   972,  1286,  1287,  1288,   423,
    1163,  1291,  1158,   431,  1294,  1295,   430,  1230,   756,   757,
    1299,   481,  1300,   482,  1174,   483,  1176,   160,   180,   202,
     511,  1180,   564,   264,  1183,  1184,     2,     3,     4,     5,
       6,     7,     8,     9,    10,  1199,  1200,  1201,  1194,  1195,
    1196,  1197,   502,   487,   488,   489,   490,   491,   492,   493,
     494,   120,   121,   503,  1305,   512,  1153,   513,  1154,  1307,
     514,  1309,   515,  1311,   516,    53,   122,   758,   759,  1155,
     909,   517,   123,   175,   124,   125,   874,   875,   807,   808,
    1165,   945,   946,   947,  1240,  1241,  1242,  1243,  1244,  1245,
    1246,  1247,  1248,  1249,  1054,   809,   810,  1347,   518,   973,
     542,   984,  1351,   543,  1353,  1413,  1413,  1413,  1357,   954,
     955,  1359,  1360,   546,  1192,   554,   934,  1050,   956,   957,
    1365,  1366,  1367,  1368,  1209,   936,  1342,  1342,  1342,  1081,
    1211,  1212,  1213,  1214,  1215,  1216,  1223,   559,  1222,  1134,
     575,   120,   121,   593,  1135,  1306,   595,  1308,   611,  1310,
     613,  1312,   958,   959,   197,    53,   122,   322,   323,   324,
     325,   629,   123,   126,   124,   125,   644,   127,   173,   195,
     212,  1270,   960,   961,   274,   128,   631,   129,   174,   196,
     213,   962,   963,  1277,   275,  1279,   650,  1320,   657,  1406,
     658,  1408,   660,  1410,   341,  1412,   342,   343,   344,   345,
     346,   347,  1290,   322,   323,   324,   325,   485,   486,  1296,
    1297,  1298,   322,   323,   324,   325,   322,   323,   324,   325,
    1318,  1319,   120,   121,  1417,   665,  1419,   663,  1421,   664,
    1423,  1313,   438,   439,   440,   441,    53,   122,   348,  1321,
    1322,  1315,  1316,   123,   349,   124,   125,   350,  1369,   666,
    1371,   667,  1373,   126,  1375,  1231,  1231,   127,   620,  -318,
    1232,  1232,  1343,  1343,  1343,   128,   668,   129,   942,   943,
    1134,   214,  1251,  1251,  1254,  1135,   669,  1252,  1252,  1255,
     670,   297,   341,   298,   342,   343,   344,   345,   346,   347,
    1415,  1416,  1339,   299,   300,   301,   302,   672,   303,   304,
     674,  1348,  1349,  1350,   675,  1352,   676,  1354,  1355,  1356,
    1345,  1346,  1358,   677,   678,  1361,  1362,   679,   680,   681,
    1363,  1364,   351,   682,   683,   684,   348,   691,   692,   685,
     352,   686,   349,   104,   126,   350,   687,   688,   127,   120,
     121,   689,   690,   305,   696,   697,   128,   704,   129,   322,
     323,   324,   325,    53,   122,   306,   307,   353,   705,   354,
     123,   355,   124,   125,   356,   712,   713,   716,  1395,   717,
     718,   730,  1396,   733,  1397,   734,   736,   738,  1398,   740,
    1399,  1400,   327,   328,   329,   330,  1401,  1402,  1403,  1404,
     357,   358,   744,   745,   749,   359,   360,   361,   775,   750,
     753,   778,   362,   779,   363,   364,   365,   366,   786,  -320,
     351,   780,   367,   368,   369,   370,   788,   341,   352,   342,
     343,   344,   345,   346,   347,  -322,  -324,  1418,   797,  1420,
     801,  1422,   557,  1424,   836,   837,   798,   805,  1425,   804,
    1426,   806,  1427,   811,  1428,   353,   812,   354,   814,   355,
     815,   126,   356,  1123,   849,   127,   816,   576,   817,   860,
     838,   348,   818,   128,   839,   129,   819,   349,   820,   229,
     350,   840,   841,   863,   864,   865,   866,   867,   357,   358,
     821,   822,   823,   359,   360,   361,   834,   826,   858,   859,
     362,   861,   363,   364,   365,   366,   862,   869,   879,   880,
     367,   368,   369,   370,   341,   887,   342,   343,   344,   345,
     346,   347,   576,   881,   577,   578,   579,   580,   581,   582,
     694,   888,   595,  1124,  1125,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1133,   636,   889,   897,   899,   120,   121,   487,
     488,   489,   490,   491,   492,   351,   494,   901,   348,   902,
     903,    53,   122,   352,   349,   907,   925,   350,   123,   926,
     124,   125,   931,   923,   932,   933,   939,   941,   944,   577,
     578,   579,   580,   581,   582,   965,   966,   792,   967,   968,
     353,   969,   354,   970,   355,   997,  1038,   356,   485,   486,
     998,  1039,  1040,  1041,  1051,  1042,   246,  1056,   341,  1044,
     342,   343,   344,   345,   346,   347,  1057,  1058,  1062,  1064,
    1065,  1067,  1068,   357,   358,  1078,  1070,  1079,   359,   360,
     361,  1085,  1086,  1087,  1088,   362,  1089,   363,   364,   365,
     366,  1090,   351,  1091,  1105,   367,   368,   369,   370,  1107,
     352,  1108,   348,  1117,  1118,  1119,  1149,  1156,   349,   126,
    1160,   350,  1219,   127,  1167,   743,  1170,  1173,  1175,  1177,
    1178,   128,  1179,   129,   120,   121,  1182,   353,   276,   354,
    1239,   355,  1185,  1186,   356,  1187,  1191,  1193,    53,   122,
    1217,  1257,  1258,  1259,  1278,   123,  1260,   124,   125,  1267,
    1272,  1317,   855,   857,  1283,  1285,  1289,  1292,  1293,  1301,
     357,   358,  1302,  1303,  1304,   359,   360,   361,  1314,  1323,
    1325,  1370,   362,  1326,   363,   364,   365,   366,  1372,   891,
    1327,  1328,   367,   368,   369,   370,   351,  1329,  1374,  1376,
     898,  1338,   900,  1377,   352,  1330,   120,   121,  1331,  1391,
     910,  1332,   882,  1381,  1392,  1393,  1394,  1405,   928,   930,
      53,   122,  1333,   935,   937,  1334,  1337,   123,  1378,   124,
     125,   353,  1382,   354,  1383,   355,  1384,  1385,   356,  1386,
    1407,  1409,  1387,  1388,  1389,  1390,   126,  1411,   336,    70,
     127,   985,   553,   950,   951,   952,   953,   673,   128,   295,
     129,   724,   725,   726,   357,   358,   219,   948,   989,   359,
     360,   361,   220,   659,   735,   991,   362,   992,   363,   364,
     365,   366,   576,  1261,  1122,  1139,   367,   368,   369,   370,
    1043,   251,  1045,  1250,   739,   737,   741,   392,   703,   995,
      59,   555,   599,   638,   612,   761,   763,   765,   653,   894,
     769,     0,   771,   623,     0,   595,  1273,     0,   126,     0,
     450,     0,   127,     0,   784,   785,     0,     0,   787,     0,
     128,     0,   129,   466,     0,   398,   399,   400,   467,   577,
     578,   579,   580,   581,   582,     0,   468,  1082,   469,   470,
     471,   466,     0,   398,   399,   400,   467,     0,     0,     0,
       0,     0,     0,   595,   468,     0,   469,   470,   471,     0,
    1100,  1102,   487,   488,   489,   490,   491,   492,   493,   494,
       0,     0,     0,     0,     0,   393,   394,     0,     0,     0,
       0,     0,   851,   853,     0,     0,     0,   395,   405,   396,
     397,   398,   399,   400,   157,   177,   199,   216,   231,   248,
     261,   278,   401,   402,   158,   178,   200,   217,   232,   249,
     262,   279,   159,   179,   201,   218,   233,   250,   263,   280,
     161,   181,   203,   222,   234,   252,   265,   281,     0,     0,
     905,     0,     0,   908,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
     162,   182,   204,   223,   235,   253,   266,   282,   163,   183,
     205,   224,   236,   254,   267,   283,   164,   184,   206,   225,
     237,   255,   268,   284,   165,   185,   207,   226,   238,   256,
     269,   285,   166,   186,   208,   227,   239,   257,   270,   286,
     167,   187,   209,   228,   240,   258,   271,   287
};

static const yytype_int16 yycheck[] =
{
     407,   335,    86,   335,   394,   143,   396,   397,   436,   387,
     340,   401,   402,   120,   121,   405,   123,   449,   335,   417,
     418,   371,   420,   246,   414,    21,    22,     6,    24,   331,
      22,    23,    22,    23,    70,   563,    41,    73,    11,   417,
     418,    29,   420,   799,    26,     5,    87,    35,    30,    31,
     141,    33,    34,   443,    36,    37,   446,    16,   135,   136,
     137,   138,   452,   453,   454,   472,   456,   457,   142,   141,
      90,   461,   462,   463,     6,   603,   466,   467,   606,    54,
     139,   609,     3,    38,   236,   475,    55,     6,   442,   479,
       8,    55,    10,    71,    12,    13,   168,    56,   266,    17,
      18,   269,    90,    91,   458,   435,    16,   641,   642,   261,
      26,    29,   132,   239,    30,    31,    87,    33,    34,     0,
      36,    37,   135,   136,   137,   138,    22,    23,   139,    39,
      58,    90,   258,    51,    52,    41,   132,   133,    93,   139,
     268,    59,   214,    61,    73,    74,     6,   141,    90,    78,
      71,    72,    70,   141,   282,   229,   230,   231,   232,   153,
     133,   833,   141,   835,    85,    86,   141,    85,    58,    87,
     132,    92,   141,    94,    95,   141,   267,   141,    71,    72,
      71,   141,   141,   139,   591,   592,   593,   153,   170,   945,
     946,   947,    85,   139,    74,   585,   586,    90,   239,    92,
     141,   278,   238,   734,   132,   133,   556,   198,   199,   141,
     188,   189,   153,   620,   621,   622,    41,   141,   210,   211,
     212,   213,   141,    19,   229,   230,   231,   232,   635,   153,
     132,   210,   211,   212,   213,   214,   277,   644,   132,   141,
       6,    41,   776,   650,   236,   237,   636,   141,   638,   472,
     657,   335,    74,   555,   170,   786,    78,   139,   648,   649,
     239,   203,   183,   205,   614,   278,   187,   695,   239,   187,
     258,    74,   251,   139,   195,   203,   197,   205,   237,   141,
      90,   141,   200,   613,   280,   275,    90,   139,   206,   169,
     170,   210,   211,   212,   213,   214,   278,   188,   189,   706,
     707,   708,   709,   710,   711,    90,   277,   203,   715,   205,
     141,   171,   172,   203,   174,   205,   196,   133,   237,   240,
     239,    74,   153,   229,   230,   231,   232,     6,   139,   860,
     861,   862,   251,   277,    90,    88,   133,   744,   745,   258,
     236,   277,   749,   141,   751,   752,   141,   754,   755,   681,
     243,   244,   270,   133,   214,   153,   887,   888,   889,   132,
     133,   768,   278,   132,   133,   772,   773,   774,    47,    48,
      49,    50,   903,   233,   234,   141,   132,   133,   141,   239,
      60,   788,    62,    63,    64,    65,    66,    67,    68,    69,
     153,   251,   742,   203,   925,   205,   824,   163,   164,   203,
     134,   205,   933,    16,   229,   230,   231,   232,   277,   175,
     941,   177,   178,   179,   180,   181,    29,    90,   203,   557,
     205,    29,    35,   264,   190,   191,   833,    35,   835,   229,
     230,   231,   232,    73,   965,   966,   967,   968,   969,   970,
      53,    54,   245,   246,   247,   248,   141,   203,   214,   205,
     203,   204,   205,    16,   257,   883,    90,    73,   153,   132,
     133,   868,   141,   132,    77,    78,    79,   132,   133,    93,
      83,    73,   141,   239,   141,    73,   242,    90,    91,    73,
     203,    90,   205,     9,   891,   251,    71,   894,   141,   132,
     897,   134,   899,   142,   901,   902,   132,   904,   132,   133,
     907,    29,   909,   910,   257,   141,   132,    35,    76,  1040,
    1041,   133,   132,   236,   134,   141,   833,   924,   835,   926,
     184,   185,   186,   132,   133,  1056,   141,  1058,   141,     7,
     203,  1062,   205,  1064,  1065,   214,  1067,  1068,    27,    28,
     972,   165,   171,   172,   168,   141,   259,   260,  1079,   878,
     217,   218,   219,   141,    71,    72,   694,   262,  1089,  1090,
    1091,   277,    90,   900,   217,   218,   219,   277,    85,   203,
      57,   205,   196,   133,  1105,    92,   133,   833,   202,   835,
     229,   230,   231,   232,   208,   209,  1117,   133,  1119,   133,
     927,   928,   929,   930,   203,   132,   205,   133,   278,   132,
     208,   209,   217,   218,   219,   743,  1100,  1101,  1102,   938,
      80,    81,    82,   221,   222,   223,   224,   225,   226,   227,
     228,   217,   218,   219,   132,  1156,  1054,   254,   255,   256,
    1158,   275,   276,     3,    48,    49,  1167,   132,   133,  1170,
     132,   133,  1173,   134,  1175,   258,  1177,  1178,  1179,   267,
    1057,  1182,  1050,   139,  1185,  1186,   140,   281,   132,   133,
    1191,   132,  1193,    25,  1071,   141,  1073,    72,    73,    74,
     132,  1078,  1050,    78,  1081,  1082,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   217,   218,   219,  1095,  1096,
    1097,  1098,   141,   221,   222,   223,   224,   225,   226,   227,
     228,    71,    72,    75,  1198,   133,  1043,    89,  1045,  1203,
      89,  1205,   277,  1207,   133,    85,    86,   132,   133,  1048,
     142,   141,    92,     3,    94,    95,   243,   244,    14,    15,
    1059,   794,   795,   796,  1124,  1125,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,  1133,   882,    27,    28,  1278,   133,   833,
     265,   835,  1283,   265,  1285,  1392,  1393,  1394,  1289,   215,
     216,  1292,  1293,   199,  1093,   263,   142,   874,   215,   216,
    1301,  1302,  1303,  1304,  1103,   142,  1274,  1275,  1276,   142,
    1109,  1110,  1111,  1112,  1113,  1114,  1120,   141,  1120,  1005,
      92,    71,    72,   251,  1005,  1202,   141,  1204,    55,  1206,
     277,  1208,   215,   216,     3,    85,    86,   229,   230,   231,
     232,   238,    92,   183,    94,    95,    40,   187,    72,    73,
      74,  1150,   215,   216,    78,   195,   238,   197,    72,    73,
      74,   215,   216,  1162,    78,  1164,    40,  1227,   168,  1370,
     141,  1372,    93,  1374,    40,  1376,    42,    43,    44,    45,
      46,    47,  1181,   229,   230,   231,   232,   208,   209,  1188,
    1189,  1190,   229,   230,   231,   232,   229,   230,   231,   232,
     166,   167,    71,    72,  1405,   216,  1407,   132,  1409,   132,
    1411,  1210,   210,   211,   212,   213,    85,    86,    84,   132,
     133,  1220,  1221,    92,    90,    94,    95,    93,  1305,   132,
    1307,   133,  1309,   183,  1311,  1121,  1122,   187,   236,   132,
    1121,  1122,  1274,  1275,  1276,   195,   133,   197,   790,   791,
    1136,     3,  1138,  1139,  1140,  1136,   133,  1138,  1139,  1140,
     279,    14,    40,    16,    42,    43,    44,    45,    46,    47,
    1393,  1394,  1271,    26,    27,    28,    29,   132,    31,    32,
     279,  1280,  1281,  1282,   279,  1284,   279,  1286,  1287,  1288,
    1275,  1276,  1291,   279,   279,  1294,  1295,   279,   279,   279,
    1299,  1300,   168,   279,   279,   279,    84,   141,   141,   279,
     176,   279,    90,    87,   183,    93,   279,   279,   187,    71,
      72,   279,   279,    76,    55,   141,   195,   132,   197,   229,
     230,   231,   232,    85,    86,    88,    89,   203,   133,   205,
      92,   207,    94,    95,   210,   264,    76,   141,  1347,   141,
     141,   141,  1351,     5,  1353,     5,   141,   141,  1357,   141,
    1359,  1360,   135,   136,   137,   138,  1365,  1366,  1367,  1368,
     236,   237,   141,    93,    93,   241,   242,   243,    79,   141,
     141,   141,   248,   141,   250,   251,   252,   253,     5,   132,
     168,   141,   258,   259,   260,   261,   141,    40,   176,    42,
      43,    44,    45,    46,    47,   132,   132,  1406,   132,  1408,
      20,  1410,   278,  1412,    53,    54,   132,   132,  1417,   133,
    1419,   133,  1421,   133,  1423,   203,   133,   205,   141,   207,
     141,   183,   210,    73,    55,   187,   141,   214,   141,     5,
      79,    84,   141,   195,    83,   197,   141,    90,   141,     3,
      93,    90,    91,   216,   217,   218,   219,   220,   236,   237,
     141,   141,   216,   241,   242,   243,   141,   216,   142,   142,
     248,     5,   250,   251,   252,   253,     5,    55,   216,   216,
     258,   259,   260,   261,    40,     5,    42,    43,    44,    45,
      46,    47,   214,   216,   271,   272,   273,   274,   275,   276,
     278,     5,   141,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   235,     5,   173,   173,    71,    72,   221,
     222,   223,   224,   225,   226,   168,   228,   215,    84,   216,
       5,    85,    86,   176,    90,   142,     5,    93,    92,   142,
      94,    95,   141,   249,   141,     5,   142,     5,   132,   271,
     272,   273,   274,   275,   276,     5,     5,   275,     5,     5,
     203,     5,   205,     5,   207,   132,   141,   210,   208,   209,
     132,   141,     5,     5,     4,   173,     3,     5,    40,   173,
      42,    43,    44,    45,    46,    47,   132,     5,     5,     5,
       5,     5,     5,   236,   237,   142,   216,     5,   241,   242,
     243,   132,   141,   141,   141,   248,     5,   250,   251,   252,
     253,     5,   168,     5,     5,   258,   259,   260,   261,   132,
     176,   132,    84,     5,   132,     5,   216,     5,    90,   183,
       3,    93,   132,   187,     5,   278,     5,     5,     5,     5,
       5,   195,     5,   197,    71,    72,     5,   203,     3,   205,
     133,   207,     5,     5,   210,   216,     5,     5,    85,    86,
     271,   132,   132,   141,     5,    92,   133,    94,    95,   201,
      94,   132,   723,   724,     5,     5,     5,     5,     5,     5,
     236,   237,     5,     5,     5,   241,   242,   243,   141,   132,
     141,     5,   248,   141,   250,   251,   252,   253,     5,   750,
     141,   141,   258,   259,   260,   261,   168,   141,     5,     5,
     761,   132,   763,   219,   176,   141,    71,    72,   141,    55,
     771,   141,   278,   142,     5,     5,     5,     5,   779,   780,
      85,    86,   141,   784,   785,   141,   141,    92,   141,    94,
      95,   203,   142,   205,   142,   207,   142,   142,   210,   142,
       5,     5,   142,   142,   142,   142,   183,     5,   102,    12,
     187,   835,   336,   814,   815,   816,   817,   515,   195,    84,
     197,   588,   589,   590,   236,   237,    75,   797,   835,   241,
     242,   243,    75,   483,   601,   835,   248,   835,   250,   251,
     252,   253,   214,  1145,  1004,  1008,   258,   259,   260,   261,
     851,    77,   853,  1136,   606,   603,   609,   141,   563,   835,
       1,   339,   407,   235,   432,   632,   633,   634,   472,   753,
     637,    -1,   639,   442,    -1,   141,  1158,    -1,   183,    -1,
     155,    -1,   187,    -1,   651,   652,    -1,    -1,   655,    -1,
     195,    -1,   197,   177,    -1,   179,   180,   181,   182,   271,
     272,   273,   274,   275,   276,    -1,   190,   908,   192,   193,
     194,   177,    -1,   179,   180,   181,   182,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   190,    -1,   192,   193,   194,    -1,
     931,   932,   221,   222,   223,   224,   225,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,   163,   164,    -1,    -1,    -1,
      -1,    -1,   719,   720,    -1,    -1,    -1,   175,   242,   177,
     178,   179,   180,   181,    72,    73,    74,    75,    76,    77,
      78,    79,   190,   191,    72,    73,    74,    75,    76,    77,
      78,    79,    72,    73,    74,    75,    76,    77,    78,    79,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    -1,
     767,    -1,    -1,   770,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      72,    73,    74,    75,    76,    77,    78,    79,    72,    73,
      74,    75,    76,    77,    78,    79,    72,    73,    74,    75,
      76,    77,    78,    79,    72,    73,    74,    75,    76,    77,
      78,    79,    72,    73,    74,    75,    76,    77,    78,    79,
      72,    73,    74,    75,    76,    77,    78,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   284,   285,   286,   305,   306,   307,   309,   310,   311,
     312,   315,   316,   317,   318,   319,   320,   321,   327,   337,
     338,   343,   363,   364,   365,   366,   367,   368,   369,   370,
     371,     8,    10,    12,    13,    17,    18,    29,    51,    52,
      59,    61,    70,    85,    87,   187,   200,   206,   270,   446,
     139,   139,   139,   139,   139,   139,   139,   139,   139,     0,
     286,   287,   289,   291,   293,   295,   297,   299,   301,   303,
      11,   133,   141,   132,   339,   340,   344,    19,   277,   133,
     133,   277,   141,   133,   134,   277,    71,   188,   189,   198,
     199,   264,   322,   323,    87,   239,   277,   450,    70,    73,
     238,    73,    73,    73,    16,    73,    73,    16,    39,     3,
      71,    72,    86,    92,    94,    95,   183,   187,   195,   197,
     288,   372,   373,   374,   382,   385,   388,   427,   428,   429,
     430,   442,   445,   446,   447,   453,   454,   455,   456,   457,
     461,   508,   509,   510,     3,   240,   290,   372,   373,   374,
     427,   442,   445,   453,   454,   455,   456,   457,   481,   495,
     504,   505,   507,   508,   510,     3,   292,   372,   373,   374,
     427,   442,   445,   453,   454,   455,   456,   457,   497,   498,
     499,   500,   501,   502,   504,   508,   510,     3,   294,   372,
     373,   374,   427,   442,   445,   453,   454,   455,   456,   457,
     481,   504,   508,   510,     3,   296,   372,   373,   374,   382,
     385,   391,   442,   445,   453,   454,   455,   456,   457,     3,
     298,   372,   373,   374,   442,   445,   453,   454,   455,   456,
     457,   511,   512,   513,   514,   515,     3,   300,   372,   373,
     374,   430,   442,   445,   453,   454,   455,   456,   457,   464,
     302,   372,   373,   374,   427,   442,   445,   453,   454,   455,
     456,   457,   481,   504,   508,   510,     3,   304,   372,   373,
     374,   442,   445,   453,   454,   455,   456,   457,   460,     9,
      71,   308,    76,   341,    90,   340,   439,    14,    16,    26,
      27,    28,    29,    31,    32,    76,    88,    89,   328,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     329,   313,   229,   230,   231,   232,   503,   135,   136,   137,
     138,   451,   452,   133,   141,   324,   323,   262,   326,   277,
     277,    40,    42,    43,    44,    45,    46,    47,    84,    90,
      93,   168,   176,   203,   205,   207,   210,   236,   237,   241,
     242,   243,   248,   250,   251,   252,   253,   258,   259,   260,
     261,   448,   449,    57,   517,   133,   133,   132,   133,   132,
     133,   133,   133,   132,   133,   132,   133,   375,   377,   132,
     132,     6,   141,   163,   164,   175,   177,   178,   179,   180,
     181,   190,   191,   214,   239,   242,   251,   462,   463,   467,
     471,   473,   474,   475,   476,   477,   478,   375,   375,   134,
     375,   141,   267,   267,   184,   185,   186,    71,   188,   189,
     140,   139,   458,   459,   239,   277,   450,     6,   210,   211,
     212,   213,   214,   237,   239,   258,   480,   506,   239,   258,
     506,     6,   171,   172,   174,   214,   233,   234,   214,     6,
       6,    47,    48,    49,    50,   214,   177,   182,   190,   192,
     193,   194,   465,   466,   468,   469,   470,   472,   475,   168,
     214,   132,    25,   141,    35,   208,   209,   221,   222,   223,
     224,   225,   226,   227,   228,   328,   333,   335,   336,   342,
     379,   380,   141,    75,   381,    21,    22,    24,   132,   133,
     280,   132,   133,    89,    89,   277,   133,   141,   133,    27,
      28,    26,    30,    31,    33,    34,    36,    37,   170,   278,
     330,    60,    62,    63,    64,    65,    66,    67,    68,    69,
     278,   314,   265,   265,   278,   452,   199,    90,   325,   328,
     333,   335,   336,   326,   263,   451,   448,   278,   449,   141,
      90,   203,   205,   376,   377,   378,   438,    74,    88,   203,
     204,   205,   257,   394,   396,    92,   214,   271,   272,   273,
     274,   275,   276,   482,   482,   171,   172,   482,   482,   482,
     482,   259,   260,   251,   482,   141,   490,   491,   492,   463,
     492,   482,    90,   376,   436,    90,   376,   435,    90,   376,
     437,    55,   459,   277,   448,   517,    22,    23,   236,   496,
     236,   237,   480,   496,   482,   275,   276,   444,   482,   238,
     444,   238,   482,   482,   482,   261,   235,   482,   235,   482,
     245,   246,   247,   248,    40,   482,   482,   482,    48,    49,
      40,   482,   482,   466,   492,   482,   482,   168,   141,   341,
      93,   132,   134,   132,   132,   216,   132,   133,   133,   133,
     279,   356,   132,   329,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   141,   141,   278,   278,   450,    55,   141,   132,   141,
     132,   141,   378,   438,   132,   133,   132,   141,   132,   141,
     132,   141,   264,    76,   395,   389,   141,   141,   141,   482,
     482,   141,   153,   479,   479,   479,   479,   492,   492,   492,
     141,    55,   141,     5,     5,   479,   141,   436,   141,   435,
     141,   437,   448,   278,   141,    93,   492,   492,   492,    93,
     141,   132,   133,   141,   132,   133,   132,   133,   132,   133,
     141,   479,   141,   479,   141,   479,   492,   482,   141,   479,
     482,   479,   392,   392,   392,    79,   516,   492,   141,   141,
     141,   482,   482,   492,   479,   479,     5,   479,   141,   492,
      22,    23,   275,   334,   357,   358,   359,   132,   132,   360,
     361,    20,   362,   278,   133,   132,   133,    14,    15,    27,
      28,   133,   133,   335,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   216,   450,   517,   216,   492,   492,   492,
     492,   492,   492,   386,   141,   383,    53,    54,    79,    83,
      90,    91,   390,   398,   402,   403,   440,   441,   492,    55,
     141,   479,   141,   479,   142,   503,   142,   503,   142,   142,
       5,     5,     5,   216,   217,   218,   219,   220,   483,    55,
      71,    72,    85,    92,   243,   244,   487,   488,   488,   216,
     216,   216,   278,   450,   492,    54,   492,     5,     5,     5,
     492,   503,   492,   492,   483,   492,   492,   173,   503,   173,
     503,   215,   216,     5,   141,   479,   492,   142,   479,   142,
     503,    16,    56,    90,   237,   393,   431,   432,   433,   434,
     492,   492,   492,   249,   392,     5,   142,    41,   503,    41,
     503,   141,   141,     5,   142,   503,   142,   503,   488,   142,
     492,     5,   334,   334,   132,   360,   360,   360,   362,   361,
     503,   503,   503,   503,   215,   216,   215,   216,   215,   216,
     215,   216,   215,   216,   517,     5,     5,     5,     5,     5,
       5,    35,   258,   328,   331,   333,   387,   440,   441,   443,
     492,    16,    77,    78,   328,   331,   333,   384,   397,   398,
     401,   402,   403,   440,   441,   443,   492,   132,   132,    80,
      81,    82,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   141,   141,
       5,     5,   173,   503,   173,   503,   488,   488,   488,   492,
     375,     4,   494,   494,   450,   517,     5,   132,     5,   488,
     488,   488,     5,   492,     5,     5,   492,     5,     5,   492,
     216,   485,   492,   485,   492,   492,   488,   492,   142,     5,
     492,   142,   503,   492,   492,   132,   141,   141,   141,     5,
       5,     5,   492,   488,   492,   485,   485,   485,   485,    41,
     503,    41,   503,   488,   494,     5,   488,   132,   132,   488,
     488,   488,   488,   488,   488,    38,   444,     5,   132,     5,
     399,   414,   414,    73,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   379,   380,   425,   426,   406,   406,
     408,    74,   169,   170,   196,   404,   405,   412,   423,   216,
     488,    90,   488,   485,   485,   494,     5,    58,   376,   486,
       3,   517,   488,   492,   488,   494,   488,     5,   488,   488,
       5,   488,   488,     5,   492,     5,   492,     5,     5,     5,
     492,   488,     5,   492,   492,     5,     5,   216,   488,   488,
     488,     5,   494,     5,   492,   492,   492,   492,   141,   217,
     218,   219,   484,   141,   484,   141,   484,   141,   484,   494,
     488,   494,   494,   494,   494,   494,   494,   271,   332,   132,
     488,   488,   335,   336,   400,    93,   165,   168,   196,   202,
     281,   379,   380,   415,   416,   417,   418,   419,   420,   133,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     426,   379,   380,   407,   379,   380,   409,   132,   132,   141,
     133,   405,   266,   269,   410,   411,   413,   201,   422,   424,
     494,   488,    94,   486,   254,   255,   256,   494,     5,   494,
     488,   488,   488,     5,   488,     5,   488,   488,   488,     5,
     494,   488,     5,     5,   488,   488,   494,   494,   494,   488,
     488,     5,     5,     5,     5,   484,   492,   484,   492,   484,
     492,   484,   492,   494,   141,   494,   494,   132,   166,   167,
     482,   132,   133,   132,   421,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   132,   134,   141,   132,   494,
      55,   141,   490,   491,   493,   493,   493,   488,   494,   494,
     494,   488,   494,   488,   494,   494,   494,   488,   494,   488,
     488,   494,   494,   494,   494,   488,   488,   488,   488,   492,
       5,   492,     5,   492,     5,   492,     5,   219,   141,   268,
     282,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,    55,     5,     5,     5,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,     5,   488,     5,   488,     5,
     488,     5,   488,   487,   489,   489,   489,   488,   494,   488,
     494,   488,   494,   488,   494,   494,   494,   494,   494
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   283,   284,   284,   285,   285,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   287,   287,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   291,   291,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   295,   295,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   297,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   299,   299,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   301,   301,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   305,   305,   305,   306,   307,   308,   308,   309,   310,
     310,   310,   311,   312,   313,   313,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     315,   316,   316,   316,   317,   317,   317,   318,   319,   320,
     321,   322,   322,   323,   324,   324,   325,   325,   325,   325,
     325,   326,   326,   327,   328,   328,   329,   329,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   331,   332,
     332,   333,   333,   333,   334,   334,   335,   335,   335,   335,
     335,   335,   335,   336,   337,   338,   339,   339,   340,   340,
     341,   341,   342,   342,   342,   342,   342,   342,   343,   344,
     344,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     346,   347,   348,   349,   350,   351,   351,   352,   352,   353,
     353,   354,   355,   355,   355,   355,   355,   355,   356,   355,
     357,   355,   358,   355,   359,   355,   355,   360,   360,   361,
     362,   362,   363,   363,   363,   363,   364,   365,   365,   366,
     367,   368,   368,   369,   370,   371,   371,   372,   372,   373,
     373,   374,   374,   375,   375,   376,   376,   377,   377,   378,
     378,   378,   378,   379,   379,   380,   381,   381,   382,   383,
     383,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   385,   386,   386,   387,   387,   387,   387,   387,
     387,   388,   389,   389,   390,   390,   390,   390,   390,   391,
     391,   391,   391,   392,   392,   393,   393,   393,   393,   394,
     394,   395,   396,   397,   397,   398,   398,   398,   399,   399,
     400,   400,   401,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   403,
     403,   404,   404,   405,   405,   405,   405,   406,   406,   407,
     407,   408,   408,   409,   409,   410,   410,   411,   412,   412,
     413,   413,   414,   414,   415,   415,   415,   415,   415,   415,
     415,   415,   416,   417,   417,   418,   418,   419,   420,   421,
     421,   422,   423,   423,   424,   425,   425,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     427,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     435,   436,   436,   437,   437,   438,   438,   439,   439,   440,
     441,   442,   442,   443,   444,   444,   445,   445,   445,   445,
     446,   447,   448,   448,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   450,   450,   451,   451,   452,   452,
     452,   452,   453,   453,   453,   454,   454,   454,   455,   455,
     455,   456,   457,   458,   458,   459,   460,   460,   461,   462,
     462,   463,   463,   463,   463,   463,   463,   463,   464,   465,
     465,   466,   466,   466,   466,   467,   467,   468,   469,   469,
     469,   469,   470,   470,   471,   471,   471,   471,   472,   472,
     473,   474,   475,   476,   476,   476,   477,   477,   478,   478,
     479,   479,   480,   480,   480,   480,   481,   481,   482,   482,
     482,   482,   482,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   484,   484,   484,   485,   485,   486,   486,   486,
     487,   487,   487,   487,   487,   487,   487,   488,   489,   490,
     491,   492,   492,   492,   493,   493,   493,   494,   494,   494,
     494,   495,   495,   495,   496,   496,   496,   497,   497,   497,
     497,   498,   498,   498,   498,   499,   499,   500,   500,   501,
     501,   502,   503,   503,   503,   503,   503,   504,   504,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   507,
     507,   508,   508,   509,   509,   510,   510,   511,   512,   513,
     514,   514,   514,   514,   514,   514,   515,   515,   515,   515,
     515,   515,   516,   517,   517,   517
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     7,     8,     4,     3,     0,     3,     2,     3,
       3,     3,     4,     5,     0,     2,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     3,     3,     5,     4,     6,     4,     3,     3,     3,
       3,     2,     3,     2,     0,     2,     3,     1,     1,     1,
       1,     0,     2,     5,     1,     4,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     0,
       1,     4,     5,     5,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     5,     1,     2,     2,     4,
       0,     2,     1,     1,     1,     1,     1,     1,     3,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     5,     4,     2,     3,     3,     3,     0,     4,
       0,     5,     0,     5,     0,     5,     2,     1,     2,     1,
       0,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     2,     4,     5,     6,     3,     4,     3,
       4,     3,     4,     1,     2,     1,     2,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     0,     2,     9,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     0,     2,     1,     1,     1,     1,     1,
       1,     8,     0,     2,     1,     1,     1,     1,     1,     9,
       8,     8,     8,     0,     2,     1,     1,     1,     1,     0,
       2,     2,     2,     1,     1,     2,     3,     2,     0,     2,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       2,     1,     2,     2,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     1,     1,     2,     2,     2,     0,     2,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     0,     2,     1,     1,     2,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       7,     6,     6,     6,     9,     2,     2,     3,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     3,
       2,     7,     7,     3,     1,     1,     3,     6,     7,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     2,     2,
       1,     1,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     8,     6,     6,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     6,     1,
       2,     1,     1,     1,     1,     4,     4,     4,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     3,     3,     1,     1,     1,     6,     5,     6,     5,
       1,     1,     1,     1,     1,     1,     9,     6,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     3,     4,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     1,     1,     0,     1,     1,     0,     6,     6,
       6,     8,    10,     7,     0,     1,     1,     8,     9,     9,
      10,     9,     9,    10,    10,    10,     9,    10,     9,     9,
       9,     6,     0,     1,     1,     1,     1,     8,     7,     7,
       7,     4,     4,     7,     7,     4,     4,     0,     1,     9,
       6,     8,     8,     8,     8,     8,     8,     7,     7,     9,
      10,    11,    12,    10,    11,    12,    10,    11,    12,    10,
      11,    12,     2,     0,     2,     3
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
        case 191:
#line 590 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 594 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 597 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 603 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                                ihp.daemon     = true;
                                Run.flags      |= Run_Daemon;
                                Run.polltime   = (yyvsp[-1].number);
                                Run.startdelay = (yyvsp[0].number);
                        }
                  }
#line 3249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 613 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3257 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 618 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = START_DELAY;
                  }
#line 3265 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 621 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 626 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3281 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 631 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3289 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 634 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 637 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 642 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 655 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 658 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 661 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 664 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 667 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3354 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 670 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 673 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 676 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3378 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 679 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3386 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 682 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3394 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 685 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3402 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 688 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 691 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 694 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3426 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 699 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3434 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 704 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.log || ihp.logfile) {
                                ihp.logfile = true;
                                setlogfile((yyvsp[0].string));
                                Run.flags &= ~Run_UseSyslog;
                                Run.flags |= Run_Log;
                        }
                  }
#line 3447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 712 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog(NULL);
                  }
#line 3455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 720 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3471 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 723 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 727 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 733 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.id = (yyvsp[0].string);
                  }
#line 3497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 738 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.state = (yyvsp[0].string);
                  }
#line 3505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 743 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        }
                  }
#line 3516 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 758 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 768 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 778 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 783 "src/p.y" /* yacc.c:1646  */
    {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 788 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 798 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 802 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 806 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3584 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 810 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 814 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 817 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 821 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3618 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 824 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3626 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 827 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 830 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3642 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 835 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3651 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 845 "src/p.y" /* yacc.c:1646  */
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
#line 3670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 859 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 866 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 879 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 883 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3712 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 887 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 892 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV11;
                }
#line 3733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 900 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV12;
                }
#line 3745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 907 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3754 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 911 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 917 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 926 "src/p.y" /* yacc.c:1646  */
    {
                        if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                                Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 933 "src/p.y" /* yacc.c:1646  */
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
#line 3803 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 952 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 961 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 976 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3839 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 979 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 988 "src/p.y" /* yacc.c:1646  */
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
#line 3867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1021 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3875 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1027 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3883 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1033 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1039 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[0].number);
                  }
#line 3901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1045 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[0].string);
                  }
#line 3910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1059 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1062 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1067 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1072 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3942 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1075 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 3955 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1083 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3964 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1087 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3973 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1091 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3982 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1095 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1099 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1103 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1106 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1110 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1113 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4034 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1117 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4042 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1120 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1124 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1127 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1138 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4078 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1144 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = false;
                  }
#line 4086 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1147 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = true;
                  }
#line 4094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1152 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4102 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1155 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4110 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1158 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4122 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1165 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4134 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1174 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1179 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4150 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1182 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1187 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1192 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1197 "src/p.y" /* yacc.c:1646  */
    {
                        if (Link_isGetByAddressSupported()) {
                                createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                                current->inf.net->stats = Link_createForAddress((yyvsp[0].string));
                        } else {
                                yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                        }
                  }
#line 4187 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1205 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4196 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1211 "src/p.y" /* yacc.c:1646  */
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
#line 4214 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1226 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1231 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4234 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1238 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->output = StringBuffer_create(64);
                 }
#line 4246 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1247 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4254 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1250 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4262 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1255 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1258 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1264 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4286 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1267 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1280 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4302 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1283 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1288 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1292 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4328 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1296 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4336 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1299 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1304 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1307 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1312 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1317 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1320 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1325 "src/p.y" /* yacc.c:1646  */
    {
                        /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                           TODO: Parser is in need of refactoring */
                        portset.url_request = urlrequest;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1351 "src/p.y" /* yacc.c:1646  */
    {
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1370 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4415 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1387 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4426 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1393 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1398 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4446 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1403 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1420 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1423 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1428 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4480 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1433 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1439 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip4;
                  }
#line 4497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1442 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip6;
                  }
#line 4505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1447 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                  }
#line 4513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1450 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4522 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1454 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Udp;
                  }
#line 4530 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1467 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1472 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4546 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1475 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4554 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1478 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1481 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1484 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FAIL2BAN);
                }
#line 4578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1487 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1490 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4594 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1493 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1498 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1501 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1506 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4630 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1509 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4638 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1512 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1515 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4654 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1518 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4662 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1521 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1524 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4678 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1527 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1531 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1534 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1537 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4713 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1542 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1545 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1548 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4739 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1553 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SPAMASSASSIN);
                  }
#line 4747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1556 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4755 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1559 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1562 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4771 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1565 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4779 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1568 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1571 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4795 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1574 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4803 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1577 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1580 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1583 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4827 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1586 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1591 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, (yyvsp[0].string), NULL);
                        } else {
                                yyerror("The SEND statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4848 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1599 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, NULL, (yyvsp[0].string));
                        } else {
                                yyerror("The EXPECT statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1613 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4869 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1616 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4877 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1619 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1622 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4893 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1631 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 4901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1634 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 4909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1643 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username length is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 4922 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1651 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1656 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4938 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1659 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1664 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1673 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1676 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1685 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 4978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1688 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 4986 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1699 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4995 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1705 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Get;
                  }
#line 5003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Head;
                  }
#line 5011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1713 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1717 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5029 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1723 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 5037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 5046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1735 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 5054 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1740 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5062 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1749 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 5070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1758 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5078 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1761 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5086 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1764 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1767 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5103 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1771 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5112 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1775 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1779 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5130 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1783 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1787 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5148 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1791 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1795 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1799 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5175 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1803 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5184 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1809 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1813 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5202 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1820 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5211 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1826 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5220 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1832 "src/p.y" /* yacc.c:1646  */
    {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1839 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1844 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 5247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1849 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1854 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1859 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1862 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1867 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1870 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1875 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1878 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1883 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1886 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5327 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1891 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5335 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1894 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5343 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1899 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5351 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1904 "src/p.y" /* yacc.c:1646  */
    {
                        portset.retry = (yyvsp[0].number);
                  }
#line 5359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1909 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1915 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1923 "src/p.y" /* yacc.c:1646  */
    {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5390 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1929 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1930 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5402 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5411 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1937 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1940 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5428 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1944 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1949 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1952 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1959 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1960 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5460 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1961 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1962 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1963 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1964 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5484 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1965 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1966 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1967 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exist; }
#line 5502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1968 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_FsFlag; }
#line 5508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1969 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1970 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5520 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1971 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1972 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5532 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1973 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1974 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_NonExist; }
#line 5544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 1975 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 1976 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 1977 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1978 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5568 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 1979 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 1980 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1981 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 1982 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 1983 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 1984 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 1985 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 1986 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 1987 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 1988 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 1999 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2000 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2001 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2002 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5652 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2005 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2009 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5670 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2013 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5679 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2019 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 5687 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2022 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 5695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2025 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5704 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2031 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 5712 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2034 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 5721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2038 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2043 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5738 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2057 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2060 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2067 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2076 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2095 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2111 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5796 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2116 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5806 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2123 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5816 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2130 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2131 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2132 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2133 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2136 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2141 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5860 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2148 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2153 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5880 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2158 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5890 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2163 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2170 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2175 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2182 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2189 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5940 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2196 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-2].number);
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].real);
                  }
#line 5950 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2203 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5956 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2204 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2205 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2208 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2213 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 5988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2220 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5998 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2225 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2232 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 6014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2233 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 6020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2236 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Default; }
#line 6026 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2237 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Access; }
#line 6032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2238 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Change; }
#line 6038 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2239 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Modification; }
#line 6044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2242 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-7].number);
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 6056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2249 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-3].number);
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 6067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2257 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6073 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2258 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 6079 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2259 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 6085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2260 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 6091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2261 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 6097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2262 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6103 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2263 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 6109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2264 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 6115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2267 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6121 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2268 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2269 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2270 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2271 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6145 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2272 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 6151 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2275 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2276 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6163 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2277 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2279 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6175 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2280 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2282 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 6189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2285 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 6197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2288 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6208 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2296 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2299 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2303 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6232 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2306 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 6240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2309 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 6248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2312 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 6256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2315 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2320 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 6278 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2331 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 6292 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2342 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2352 "src/p.y" /* yacc.c:1646  */
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
#line 6320 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2365 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2370 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2378 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2383 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2390 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2393 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2396 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2399 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2404 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2409 "src/p.y" /* yacc.c:1646  */
    {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2415 "src/p.y" /* yacc.c:1646  */
    {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 6422 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2421 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6428 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2422 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6434 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2423 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6440 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2426 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6452 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2433 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2440 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6476 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2447 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6488 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2456 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2465 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2472 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2481 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2490 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6552 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2497 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6564 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2506 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6576 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2513 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2522 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2529 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2538 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 6621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2544 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2545 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6633 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2546 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6639 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 2547 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 2548 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6651 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 2551 "src/p.y" /* yacc.c:1646  */
    {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 6661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 2556 "src/p.y" /* yacc.c:1646  */
    {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 6671 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 2563 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6684 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 2571 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6696 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 2578 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 2586 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 2594 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 2601 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 2607 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 2614 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 2622 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = false;
                  }
#line 6775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 2625 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = true;
                  }
#line 6783 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 2631 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 6794 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 2637 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 6804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 2644 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6815 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 2650 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 2657 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6836 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 2663 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 6846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 2670 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 2676 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 6867 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 2683 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 6876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 2689 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 6885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 2694 "src/p.y" /* yacc.c:1646  */
    {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 6896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 2702 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 2710 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6922 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 2718 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6935 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 2726 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 2734 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6961 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 2742 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6974 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 2752 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 2760 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 2768 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7013 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 2776 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7026 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 2784 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7039 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 2792 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7052 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 2802 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 7058 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 2805 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 7064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 2806 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 7070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 2807 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 7076 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 7080 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2810 "src/p.y" /* yacc.c:1906  */



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
                if (! p->parameters.http.method) {
                        if ((p->url_request && p->url_request->regex) || p->parameters.http.checksum) {
                                p->parameters.http.method = Http_Get;
                        } else {
                                p->parameters.http.method = Http_Head;
                        }
                } else if (p->parameters.http.method == Http_Head) {
                        // Sanity check: if content or checksum test is used, the method Http_Head is not allowed, as we need the content
                        if ((p->url_request && p->url_request->regex) || p->parameters.http.checksum) {
                                yyerror2("if response content or checksum test is enabled, the HEAD method is not allowed");
                        }
                }
        }

        p->next = *list;
        *list = p;

        reset_sslset();
        reset_portset();

}


static void addhttpheader(Port_T port, const char *header) {
        if (! port->parameters.http.headers) {
                port->parameters.http.headers = List_new();
        }
        if (Str_startsWith(header, "Connection:") && ! Str_sub(header, "close")) {
                yywarning("We don't recommend setting the Connection header. Monit will always close the connection even if 'keep-alive' is set\n");
        }
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
        t->type         = ts->type;
        t->operator     = ts->operator;
        t->time         = ts->time;
        t->action       = ts->action;
        t->test_changes = ts->test_changes;

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

        if (STR_UNDEF(cs->hash)) {
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
        timestampset.type = Timestamp_Default;
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

