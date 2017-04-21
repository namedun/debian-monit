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
    METHOD = 418,
    GET = 419,
    HEAD = 420,
    STATUS = 421,
    ORIGIN = 422,
    VERSIONOPT = 423,
    READ = 424,
    WRITE = 425,
    OPERATION = 426,
    SERVICETIME = 427,
    DISK = 428,
    RESOURCE = 429,
    MEMORY = 430,
    TOTALMEMORY = 431,
    LOADAVG1 = 432,
    LOADAVG5 = 433,
    LOADAVG15 = 434,
    SWAP = 435,
    MODE = 436,
    ACTIVE = 437,
    PASSIVE = 438,
    MANUAL = 439,
    ONREBOOT = 440,
    NOSTART = 441,
    LASTSTATE = 442,
    CPU = 443,
    TOTALCPU = 444,
    CPUUSER = 445,
    CPUSYSTEM = 446,
    CPUWAIT = 447,
    GROUP = 448,
    REQUEST = 449,
    DEPENDS = 450,
    BASEDIR = 451,
    SLOT = 452,
    EVENTQUEUE = 453,
    SECRET = 454,
    HOSTHEADER = 455,
    UID = 456,
    EUID = 457,
    GID = 458,
    MMONIT = 459,
    INSTANCE = 460,
    USERNAME = 461,
    PASSWORD = 462,
    TIME = 463,
    ATIME = 464,
    CTIME = 465,
    MTIME = 466,
    CHANGED = 467,
    MILLISECOND = 468,
    SECOND = 469,
    MINUTE = 470,
    HOUR = 471,
    DAY = 472,
    MONTH = 473,
    SSLAUTO = 474,
    SSLV2 = 475,
    SSLV3 = 476,
    TLSV1 = 477,
    TLSV11 = 478,
    TLSV12 = 479,
    CERTMD5 = 480,
    AUTO = 481,
    BYTE = 482,
    KILOBYTE = 483,
    MEGABYTE = 484,
    GIGABYTE = 485,
    INODE = 486,
    SPACE = 487,
    TFREE = 488,
    PERMISSION = 489,
    SIZE = 490,
    MATCH = 491,
    NOT = 492,
    IGNORE = 493,
    ACTION = 494,
    UPTIME = 495,
    EXEC = 496,
    UNMONITOR = 497,
    PING = 498,
    PING4 = 499,
    PING6 = 500,
    ICMP = 501,
    ICMPECHO = 502,
    NONEXIST = 503,
    EXIST = 504,
    INVALID = 505,
    DATA = 506,
    RECOVERED = 507,
    PASSED = 508,
    SUCCEEDED = 509,
    URL = 510,
    CONTENT = 511,
    PID = 512,
    PPID = 513,
    FSFLAG = 514,
    REGISTER = 515,
    CREDENTIALS = 516,
    URLOBJECT = 517,
    ADDRESSOBJECT = 518,
    TARGET = 519,
    TIMESPEC = 520,
    HTTPHEADER = 521,
    MAXFORWARD = 522,
    FIPS = 523,
    GREATER = 524,
    GREATEROREQUAL = 525,
    LESS = 526,
    LESSOREQUAL = 527,
    EQUAL = 528,
    NOTEQUAL = 529
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
#define METHOD 418
#define GET 419
#define HEAD 420
#define STATUS 421
#define ORIGIN 422
#define VERSIONOPT 423
#define READ 424
#define WRITE 425
#define OPERATION 426
#define SERVICETIME 427
#define DISK 428
#define RESOURCE 429
#define MEMORY 430
#define TOTALMEMORY 431
#define LOADAVG1 432
#define LOADAVG5 433
#define LOADAVG15 434
#define SWAP 435
#define MODE 436
#define ACTIVE 437
#define PASSIVE 438
#define MANUAL 439
#define ONREBOOT 440
#define NOSTART 441
#define LASTSTATE 442
#define CPU 443
#define TOTALCPU 444
#define CPUUSER 445
#define CPUSYSTEM 446
#define CPUWAIT 447
#define GROUP 448
#define REQUEST 449
#define DEPENDS 450
#define BASEDIR 451
#define SLOT 452
#define EVENTQUEUE 453
#define SECRET 454
#define HOSTHEADER 455
#define UID 456
#define EUID 457
#define GID 458
#define MMONIT 459
#define INSTANCE 460
#define USERNAME 461
#define PASSWORD 462
#define TIME 463
#define ATIME 464
#define CTIME 465
#define MTIME 466
#define CHANGED 467
#define MILLISECOND 468
#define SECOND 469
#define MINUTE 470
#define HOUR 471
#define DAY 472
#define MONTH 473
#define SSLAUTO 474
#define SSLV2 475
#define SSLV3 476
#define TLSV1 477
#define TLSV11 478
#define TLSV12 479
#define CERTMD5 480
#define AUTO 481
#define BYTE 482
#define KILOBYTE 483
#define MEGABYTE 484
#define GIGABYTE 485
#define INODE 486
#define SPACE 487
#define TFREE 488
#define PERMISSION 489
#define SIZE 490
#define MATCH 491
#define NOT 492
#define IGNORE 493
#define ACTION 494
#define UPTIME 495
#define EXEC 496
#define UNMONITOR 497
#define PING 498
#define PING4 499
#define PING6 500
#define ICMP 501
#define ICMPECHO 502
#define NONEXIST 503
#define EXIST 504
#define INVALID 505
#define DATA 506
#define RECOVERED 507
#define PASSED 508
#define SUCCEEDED 509
#define URL 510
#define CONTENT 511
#define PID 512
#define PPID 513
#define FSFLAG 514
#define REGISTER 515
#define CREDENTIALS 516
#define URLOBJECT 517
#define ADDRESSOBJECT 518
#define TARGET 519
#define TIMESPEC 520
#define HTTPHEADER 521
#define MAXFORWARD 522
#define FIPS 523
#define GREATER 524
#define GREATEROREQUAL 525
#define LESS 526
#define LESSOREQUAL 527
#define EQUAL 528
#define NOTEQUAL 529

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

#line 945 "src/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 960 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  281
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  234
/* YYNRULES -- Number of rules.  */
#define YYNRULES  760
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1421

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   529

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
       2,     2,     2,     2,     2,     2,     2,     2,   277,     2,
       2,     2,     2,     2,   278,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   279,     2,   280,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   275,     2,   276,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274
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
    1675,  1678,  1681,  1684,  1685,  1686,  1687,  1688,  1689,  1692,
    1698,  1701,  1706,  1710,  1716,  1721,  1727,  1728,  1733,  1738,
    1739,  1742,  1747,  1748,  1751,  1754,  1757,  1760,  1764,  1768,
    1772,  1776,  1780,  1784,  1788,  1792,  1796,  1802,  1806,  1813,
    1819,  1825,  1832,  1837,  1842,  1847,  1852,  1855,  1860,  1863,
    1868,  1871,  1876,  1879,  1884,  1887,  1892,  1897,  1902,  1908,
    1916,  1922,  1923,  1926,  1930,  1933,  1937,  1942,  1945,  1948,
    1949,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,
    1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,
    1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,
    1981,  1984,  1985,  1988,  1989,  1992,  1993,  1994,  1995,  1998,
    2002,  2006,  2012,  2015,  2018,  2024,  2027,  2031,  2036,  2043,
    2046,  2047,  2050,  2053,  2060,  2069,  2075,  2076,  2079,  2080,
    2081,  2082,  2083,  2084,  2085,  2088,  2094,  2095,  2098,  2099,
    2100,  2101,  2104,  2109,  2116,  2123,  2124,  2125,  2126,  2129,
    2134,  2139,  2144,  2151,  2156,  2163,  2170,  2177,  2184,  2185,
    2186,  2189,  2194,  2201,  2206,  2213,  2214,  2217,  2218,  2219,
    2220,  2223,  2230,  2238,  2239,  2240,  2241,  2242,  2243,  2244,
    2245,  2248,  2249,  2250,  2251,  2252,  2253,  2256,  2257,  2258,
    2260,  2261,  2263,  2266,  2269,  2277,  2280,  2283,  2287,  2290,
    2293,  2296,  2301,  2312,  2323,  2333,  2345,  2346,  2351,  2358,
    2359,  2364,  2371,  2374,  2377,  2380,  2385,  2389,  2396,  2402,
    2403,  2404,  2407,  2414,  2421,  2428,  2437,  2446,  2453,  2462,
    2471,  2478,  2487,  2494,  2503,  2510,  2519,  2525,  2526,  2527,
    2528,  2529,  2532,  2537,  2544,  2552,  2559,  2567,  2575,  2582,
    2588,  2595,  2603,  2606,  2612,  2618,  2625,  2631,  2638,  2644,
    2651,  2657,  2664,  2670,  2675,  2683,  2691,  2699,  2707,  2715,
    2723,  2733,  2741,  2749,  2757,  2765,  2773,  2783,  2786,  2787,
    2788
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
  "CHILDREN", "METHOD", "GET", "HEAD", "STATUS", "ORIGIN", "VERSIONOPT",
  "READ", "WRITE", "OPERATION", "SERVICETIME", "DISK", "RESOURCE",
  "MEMORY", "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP",
  "MODE", "ACTIVE", "PASSIVE", "MANUAL", "ONREBOOT", "NOSTART",
  "LASTSTATE", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM", "CPUWAIT",
  "GROUP", "REQUEST", "DEPENDS", "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET",
  "HOSTHEADER", "UID", "EUID", "GID", "MMONIT", "INSTANCE", "USERNAME",
  "PASSWORD", "TIME", "ATIME", "CTIME", "MTIME", "CHANGED", "MILLISECOND",
  "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "SSLAUTO", "SSLV2", "SSLV3",
  "TLSV1", "TLSV11", "TLSV12", "CERTMD5", "AUTO", "BYTE", "KILOBYTE",
  "MEGABYTE", "GIGABYTE", "INODE", "SPACE", "TFREE", "PERMISSION", "SIZE",
  "MATCH", "NOT", "IGNORE", "ACTION", "UPTIME", "EXEC", "UNMONITOR",
  "PING", "PING4", "PING6", "ICMP", "ICMPECHO", "NONEXIST", "EXIST",
  "INVALID", "DATA", "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT",
  "PID", "PPID", "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT",
  "ADDRESSOBJECT", "TARGET", "TIMESPEC", "HTTPHEADER", "MAXFORWARD",
  "FIPS", "GREATER", "GREATEROREQUAL", "LESS", "LESSOREQUAL", "EQUAL",
  "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept",
  "cfgfile", "statement_list", "statement", "optproclist", "optproc",
  "optfilelist", "optfile", "optfilesyslist", "optfilesys", "optdirlist",
  "optdir", "opthostlist", "opthost", "optnetlist", "optnet",
  "optsystemlist", "optsystem", "optfifolist", "optfifo", "optprogramlist",
  "optprogram", "setalert", "setdaemon", "setterminal", "startdelay",
  "setinit", "setonreboot", "setexpectbuffer", "setlimits", "limitlist",
  "limit", "setfips", "setlog", "seteventqueue", "setidfile",
  "setstatefile", "setpid", "setmmonits", "mmonitlist", "mmonit",
  "mmonitoptlist", "mmonitopt", "credentials", "setssl", "ssl",
  "ssloptionlist", "ssloption", "sslexpire", "expireoperator",
  "sslchecksum", "checksumoperator", "sslversion", "certmd5",
  "setmailservers", "setmailformat", "mailserverlist", "mailserver",
  "mailserveroptlist", "mailserveropt", "sethttpd", "httpdlist",
  "httpdoption", "pemfile", "clientpemfile", "allowselfcert", "httpdport",
  "httpdsocket", "sigenable", "sigdisable", "signature", "bindaddress",
  "allow", "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser",
  "readonly", "checkproc", "checkfile", "checkfilesys", "checkdir",
  "checkhost", "checknet", "checksystem", "checkfifo", "checkprogram",
  "start", "stop", "restart", "argumentlist", "useroptionlist", "argument",
  "useroption", "username", "password", "hostname", "connection",
  "connectionoptlist", "connectionopt", "connectionurl",
  "connectionurloptlist", "connectionurlopt", "connectionunix",
  "connectionuxoptlist", "connectionuxopt", "icmp", "icmpoptlist",
  "icmpopt", "host", "port", "unixsocket", "ip", "type", "typeoptlist",
  "typeopt", "outgoing", "protocol", "sendexpect", "websocketlist",
  "websocket", "smtplist", "smtp", "mysqllist", "mysql", "target",
  "maxforward", "siplist", "sip", "httplist", "http", "status", "method",
  "request", "responsesum", "hostheader", "httpheaderlist", "secret",
  "radiuslist", "radius", "apache_stat_list", "apache_stat", "exist",
  "pid", "ppid", "uptime", "icmpcount", "icmpsize", "icmptimeout",
  "icmpoutgoing", "stoptimeout", "starttimeout", "restarttimeout",
  "programtimeout", "nettimeout", "connectiontimeout", "retry",
  "actionrate", "urloption", "urloperator", "alert", "alertmail",
  "noalertmail", "eventoptionlist", "eventoption", "formatlist",
  "formatoptionlist", "formatoption", "every", "mode", "onreboot", "group",
  "depend", "dependlist", "dependant", "statusvalue", "resourceprocess",
  "resourceprocesslist", "resourceprocessopt", "resourcesystem",
  "resourcesystemlist", "resourcesystemopt", "resourcecpuproc",
  "resourcecpu", "resourcecpuid", "resourcemem", "resourceswap",
  "resourcethreads", "resourcechild", "resourceload", "resourceloadavg",
  "resourceread", "resourcewrite", "value", "timestamptype", "timestamp",
  "operator", "time", "totaltime", "currenttime", "repeat", "action",
  "action1", "action2", "rateXcycles", "rateXYcycles", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "read", "write",
  "servicetime", "fsflag", "unit", "permission", "match", "matchflagnot",
  "size", "uid", "euid", "gid", "linkstatus", "linkspeed",
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   123,   125,    58,    64,    91,
      93
};
# endif

#define YYPACT_NINF -596

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-596)))

#define YYTABLE_NINF -687

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     549,    76,   -77,   -47,    10,    27,    38,    97,   112,   118,
     126,    53,   549,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,    74,   -14,    98,  -596,  -596,   121,    -4,   157,   164,
      56,   211,   222,   236,   122,    45,   124,   128,  -596,   -50,
     -27,   339,   353,   373,   472,  -596,   428,   432,    93,  -596,
    -596,   477,    94,   626,   746,   772,   843,  1232,   746,  1338,
     509,  -596,   458,   464,   -12,  -596,  1055,  -596,  -596,  -596,
    -596,  -596,   530,  -596,  -596,   679,  -596,  -596,  -596,   413,
     418,  -596,   128,   301,   295,   298,  1203,   526,   448,   455,
     230,   308,   461,   492,   498,   500,   348,   504,   507,   210,
     348,   348,   523,   348,  -103,   395,   726,   137,   528,   532,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,   -46,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,   102,  -133,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,    28,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,   165,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,   108,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,   346,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  1176,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,    96,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,   550,   685,
    -596,   611,   392,   630,  -596,   703,     8,   659,   660,   704,
     721,   541,   689,  -596,   683,   693,   575,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,    43,
      90,  -596,  -596,  -596,  -596,  -596,   567,   571,  -596,  -596,
     275,  -596,   639,  -596,   243,   301,   584,  -596,   679,  1203,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
     900,  -596,   714,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,   470,  -596,  -596,  -596,
      36,   763,   616,   616,   456,   616,   616,  -596,  -596,  -596,
     616,   616,   417,   610,   616,   730,  1326,  -596,  -596,  -596,
    -596,  -596,  -596,   616,  -596,  -596,   516,   560,  -596,   646,
     810,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,   532,  -596,   596,  1203,   526,   181,  -596,  -596,  -596,
    -596,    59,   616,   610,   347,   616,   648,  -596,   347,   656,
     -86,   616,   616,   616,  -128,   742,   821,   696,   350,   856,
     616,   616,   616,   647,   858,   616,  -596,  -596,  -596,  -596,
    1158,  -596,  -596,   616,  -596,  -596,  -596,   616,   734,  -596,
     787,  -596,   818,   173,   806,  -596,  -596,  -596,  -596,  -596,
    -596,   822,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
     720,   826,  -596,   817,   833,   835,   691,   841,   847,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,   708,
     717,   727,   740,   755,   760,   767,   771,  -596,  -596,   773,
     778,   793,   795,   808,   837,   839,   844,   845,  -596,  -596,
    -596,  -596,  -596,  -596,   907,   960,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,   309,   963,  1023,  -596,  1057,   981,   -71,
     151,   -52,  -596,  -596,  -596,   994,   996,   195,   310,   318,
     863,  1052,  -596,   991,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,   993,   997,   616,   616,   -18,   -18,   -18,   -18,   730,
     730,   730,   999,     2,  -596,  -596,  1128,  -596,  1137,   -18,
    1006,   106,  -596,  1008,   202,  -596,  1013,   323,  -596,  -596,
    -596,  1203,  1033,  -596,  -596,  -596,  1014,  1061,   730,   730,
     730,  1062,  1021,  -596,  -596,   569,  1022,   583,   613,   650,
      -9,   115,   187,   730,   616,   218,   616,   -18,  -596,  -596,
    -596,  1083,   730,  1024,  1026,  1028,   616,   616,   730,   -18,
    -596,  1164,   -18,  1031,   730,  -596,   392,     3,  -596,  -596,
    -596,  -596,  -596,  -596,  1042,  1043,  1044,  1045,  1047,  1160,
      65,  1064,  1048,  1065,   769,   759,  1069,  1070,  1306,  1066,
    1067,  1071,  1076,  1077,  1078,  1079,  1085,  1086,  -596,  1012,
    -596,  1023,   526,  -596,  1016,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,   730,   730,   730,   730,   730,   730,  -596,
    1088,  -596,   879,  1153,  -596,  -596,   228,   265,  -596,  -596,
      55,   380,  1091,  1093,  1223,  1235,  1237,   471,  -596,  1182,
     474,   474,  -596,  1030,  -596,  1056,  -596,  1063,  -596,  1139,
    1023,   730,    -5,  1264,  1266,  1270,   730,   530,   730,   730,
     471,   730,   730,  -596,  -596,  -596,  -596,  1105,   530,  1107,
     530,  1072,  1074,  1275,   278,    62,  1146,   -18,   449,    87,
      87,    87,  1051,  -596,  1289,  1155,   -10,    -6,  1161,  1162,
    1294,   495,   474,  1166,   730,  1297,  1034,  1034,  -596,  1178,
    1047,  1047,  1047,  1160,  -596,  1047,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
     530,   530,   530,   530,   586,   662,   809,   851,   854,  -596,
     526,  -596,  -596,  1305,  1307,  1309,  1311,  1314,  1315,    21,
    -596,    91,  1181,  1191,   452,  1470,  1183,  1184,  -596,  -596,
    -596,  -596,  -596,  -596,  1320,  1323,  1159,   530,  1168,   530,
    -596,  -596,  -596,  -596,  -596,  -596,   474,   474,   474,  -596,
    -596,  -596,  -596,  -596,   730,  -596,  -596,  -596,  -596,  -596,
     348,  -596,  -596,  1325,  1325,  -596,  -596,  -596,  1023,   526,
    1327,  1201,  1340,   474,   474,   474,  1352,   730,  1353,  1354,
     730,  1355,  1356,   730,  1129,   730,  1129,   730,   730,   474,
      62,  1222,  1358,   730,   633,   730,   730,  1240,  1226,  1233,
    1236,  -596,  -596,  -596,  -596,  -596,  1366,  1371,  1376,  -596,
      87,   474,   730,  1129,  1129,  1129,  1129,    88,   224,   474,
    -596,  -596,  1325,  -596,  1377,   474,  1253,  1254,  -596,  1047,
    1047,  1047,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,   474,
     474,   474,   474,   474,   474,    20,   347,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  1381,  1261,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    1387,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,   775,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,   288,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    1180,  -596,   474,   451,  -596,  1129,  -596,  1129,  -596,  -596,
    1325,  1388,    42,  1396,  -596,  -596,   526,  -596,   474,   730,
     474,  1325,  -596,  -596,   474,  1395,   474,   474,  1397,   474,
     474,  1398,  -596,   730,  1400,   730,  1402,  1407,  -596,  1409,
     730,   474,  1413,   730,   730,  1414,  1415,  -596,  -596,  1207,
    -596,   474,   474,   474,  1421,  1325,  1423,   730,   730,   730,
     730,   322,   436,   522,   635,  1325,  -596,   474,  -596,  -596,
    -596,  1325,  1325,  1325,  1325,  1325,  1325,  1132,  1292,   474,
    -596,   474,   776,   384,   384,  1298,   616,   616,   616,   616,
     616,   616,   616,   616,   616,   616,  -596,  -596,   775,  -596,
     782,   782,   782,  1301,  1310,  1300,  1317,   288,  -596,   -57,
    1242,  -596,  1325,  -596,  -596,  -596,  -596,  -596,   474,  1351,
     -11,  -596,   707,  -596,  1325,  1441,  1325,  -596,  -596,   474,
    -596,  -596,   474,  -596,  -596,   474,  1445,   474,  1450,   474,
     474,   474,  1451,  1325,   474,  1452,  1453,   474,   474,  -596,
    1325,  1325,  1325,   474,  -596,   474,  1458,  1459,  1469,  1472,
     804,  -596,  -596,  -596,   730,   804,   730,   804,   730,   804,
     730,  -596,  1325,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    1336,  -596,  1325,  1325,  -596,  -596,  -596,  1346,   870,   616,
     958,  1368,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  1342,  1343,  1345,  1347,  1378,  1379,  1382,  1383,
    1385,  1403,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,   363,  1420,  -596,  -596,  -596,  1386,
    -596,  -596,  -596,  1325,    37,  -596,   730,   730,   730,  -596,
     474,  -596,  1325,  1325,  1325,   474,  1325,   474,  1325,  1325,
    1325,   474,  -596,  1325,   474,   474,  1325,  1325,  -596,  -596,
    -596,  1325,  1325,   474,   474,   474,   474,   730,  1515,   730,
    1555,   730,  1556,   730,  1557,  -596,  1391,  -596,  -596,  -596,
    -596,  -596,  1424,  -596,  -596,  -596,  -144,  1473,  1474,  1476,
    1477,  1478,  1480,  1481,  1482,  1483,  1484,  -596,  -596,  -596,
    -596,  -596,  -596,  1554,  -596,  -596,  1605,  1606,  1614,  1325,
    -596,  -596,  -596,  1325,  -596,  1325,  -596,  -596,  -596,  1325,
    -596,  1325,  1325,  -596,  -596,  -596,  -596,  1325,  1325,  1325,
    1325,  1620,   474,  1621,   474,  1622,   474,  1623,   474,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,   474,   474,   474,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,   474,  1325,   474,
    1325,   474,  1325,   474,  1325,  -596,  -596,  -596,  -596,  1325,
    -596,  1325,  -596,  1325,  -596,  1325,  -596,  -596,  -596,  -596,
    -596
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
       0,     0,     0,     0,     0,     0,     0,     0,   219,   581,
       0,     0,     0,     0,     0,   342,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     221,   220,   195,   279,   534,   275,   287,   194,   245,   226,
     227,   203,   717,   228,   547,     0,   198,   199,   200,     0,
       0,   233,   229,   240,     0,     0,     0,   758,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    45,    46,    47,    38,    39,    40,
      44,    48,    49,   581,   546,    50,    51,    52,    53,    54,
      55,    41,    42,    43,   732,   732,    57,    58,    59,    60,
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
       0,   718,   719,   720,   721,   201,     0,     0,   587,   588,
       0,   583,   223,   225,   232,   240,     0,   230,     0,     0,
     565,   552,   553,   567,   568,   575,   573,   555,   577,   554,
     576,   572,   579,   561,   563,   578,   569,   574,   551,   580,
     558,   562,   566,   559,   564,   557,   556,   570,   571,   560,
       0,   549,     0,   190,   331,   332,   333,   334,   337,   336,
     335,   338,   339,   343,   356,   357,   532,   352,   340,   341,
     408,     0,   653,   653,     0,   653,   653,   638,   639,   640,
     653,   653,     0,     0,   653,   686,   686,   606,   608,   609,
     610,   611,   612,   653,   613,   614,   528,   526,   548,   530,
       0,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     602,   599,   600,     0,     0,   758,   699,   647,   648,   649,
     650,   699,   653,   733,     0,   653,     0,   733,     0,     0,
       0,   653,   653,   653,     0,   653,   653,     0,   408,     0,
     653,   653,   653,     0,     0,   653,   628,   625,   626,   627,
     686,   616,   621,   653,   619,   620,   618,   653,     0,   222,
       0,   279,     0,     0,     0,   270,   265,   266,   267,   268,
     269,     0,   271,   283,   284,   285,   286,   280,   281,   282,
       0,     0,   273,     0,     0,     0,   325,   313,     0,   310,
     299,   305,   307,   245,   300,   302,   303,   304,   306,     0,
       0,     0,     0,     0,     0,     0,     0,   242,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   204,
     585,   586,   274,   584,     0,     0,   234,   236,   237,   238,
     239,   231,   241,     0,     0,   581,   550,   759,     0,     0,
       0,   532,   353,   354,   344,     0,     0,     0,     0,     0,
       0,     0,   391,     0,   660,   654,   655,   656,   657,   658,
     659,     0,     0,   653,   653,     0,     0,     0,     0,   686,
     686,   686,     0,     0,   687,   688,     0,   607,     0,     0,
       0,   528,   346,     0,   526,   348,     0,   530,   350,   589,
     601,     0,     0,   543,   700,   701,     0,     0,   686,   686,
     686,     0,     0,   541,   542,     0,     0,     0,     0,     0,
       0,     0,     0,   686,   653,     0,   653,     0,   402,   402,
     402,     0,   686,     0,     0,     0,   653,   653,   686,     0,
     617,     0,     0,     0,   686,   196,   278,   263,   363,   362,
     364,   272,   535,   366,   314,   315,   316,     0,     0,   329,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     582,   581,   758,   760,     0,   358,   360,   359,   361,   355,
     345,   409,   411,   686,   686,   686,   686,   686,   686,   382,
       0,   368,   686,     0,   635,   636,     0,     0,   646,   645,
     717,   717,     0,     0,     0,     0,     0,   661,   684,     0,
       0,     0,   637,     0,   347,     0,   349,     0,   351,     0,
     581,   686,   686,     0,     0,     0,   686,   717,   686,   686,
     661,   686,   686,   727,   726,   731,   730,   646,   717,   646,
     717,   646,     0,     0,     0,   646,     0,     0,   717,   686,
     686,   686,     0,   402,     0,     0,   717,   717,     0,     0,
       0,   717,     0,     0,   686,     0,   263,   263,   264,     0,
       0,     0,     0,   329,   328,   318,   326,   330,   312,   244,
     253,   252,   254,   249,   250,   247,   248,   255,   256,   251,
     717,   717,   717,   717,     0,     0,     0,     0,     0,   235,
     758,   191,   533,     0,     0,     0,     0,     0,     0,   686,
     410,   686,     0,     0,     0,     0,     0,     0,   392,   393,
     394,   395,   396,   397,     0,     0,   646,   717,   646,   717,
     630,   629,   632,   631,   622,   623,     0,     0,     0,   662,
     663,   664,   665,   666,   686,   685,   679,   680,   675,   678,
       0,   681,   682,   692,   692,   529,   527,   531,   581,   758,
       0,     0,     0,     0,     0,     0,     0,   686,     0,     0,
     686,     0,     0,   686,   670,   686,   670,   686,   686,     0,
     646,     0,     0,   686,   717,   686,   686,     0,     0,     0,
       0,   403,   404,   405,   406,   407,     0,     0,     0,   757,
     686,     0,   686,   670,   670,   670,   670,   717,   717,     0,
     634,   633,   692,   624,     0,     0,     0,     0,   260,   320,
     322,   324,   311,   327,   205,   206,   207,   208,   209,   210,
     211,   212,   215,   216,   213,   214,   217,   218,   192,     0,
       0,     0,     0,     0,     0,     0,     0,   387,   389,   388,
     383,   385,   386,   384,     0,     0,   412,   413,   378,   380,
     379,   369,   370,   371,   376,   372,   373,   375,   377,   374,
       0,   456,   457,   416,   414,   417,   423,   479,   479,     0,
     426,   464,   464,   440,   441,   429,   430,   431,   437,   438,
     468,   424,     0,   445,   425,   432,   433,   446,   448,   449,
     450,   439,   475,   451,   452,   499,   454,   447,   434,   442,
       0,   537,     0,     0,   642,   670,   644,   670,   519,   520,
     692,     0,   672,     0,   518,   605,   758,   544,     0,   686,
       0,   692,   735,   652,     0,     0,     0,     0,     0,     0,
       0,     0,   671,   686,     0,   686,     0,     0,   716,     0,
     686,     0,     0,   686,   686,     0,     0,   525,   522,     0,
     523,     0,     0,     0,     0,   692,     0,   686,   686,   686,
     686,     0,     0,     0,     0,   692,   615,     0,   604,   261,
     262,   692,   692,   692,   692,   692,   692,   258,     0,     0,
     421,     0,   415,   427,   428,     0,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   504,   505,   422,   502,
     443,   444,   435,     0,     0,     0,     0,   455,   458,   436,
     453,   536,   692,   539,   538,   641,   643,   517,     0,     0,
     672,   676,     0,   545,   692,     0,   692,   723,   698,     0,
     725,   724,     0,   729,   728,     0,     0,     0,     0,     0,
       0,     0,     0,   692,     0,     0,     0,     0,     0,   524,
     692,   692,   692,     0,   742,     0,     0,     0,     0,     0,
       0,   667,   668,   669,   686,     0,   686,     0,   686,     0,
     686,   743,   692,   736,   737,   738,   739,   740,   741,   259,
       0,   540,   692,   692,   419,   420,   418,     0,     0,   653,
       0,     0,   496,   481,   482,   480,   485,   486,   483,   484,
     487,   506,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   503,   466,   467,   465,   470,   471,   469,   462,
     460,   463,   461,   459,     0,     0,   477,   478,   476,     0,
     501,   500,   390,   692,     0,   677,   689,   689,   689,   722,
       0,   696,   692,   692,   692,     0,   692,     0,   692,   692,
     692,     0,   702,   692,     0,     0,   692,   692,   399,   400,
     401,   692,   692,     0,     0,     0,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   603,     0,   381,   367,   494,
     490,   491,     0,   493,   492,   495,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   473,   472,   474,
     498,   521,   673,     0,   690,   691,     0,     0,     0,   692,
     734,   651,   711,   692,   713,   692,   714,   715,   704,   692,
     703,   692,   692,   707,   706,   398,   744,   692,   692,   692,
     692,     0,     0,     0,     0,     0,     0,     0,     0,   257,
     489,   497,   488,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   674,     0,     0,     0,   697,   710,   712,
     705,   709,   708,   748,   745,   754,   751,     0,   692,     0,
     692,     0,   692,     0,   692,   683,   693,   694,   695,   692,
     749,   692,   746,   692,   755,   692,   752,   750,   747,   756,
     753
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -596,  -596,  -596,  1617,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    1529,  -596,  -596,  1295,  -596,   -84,  1119,  -596,   802,  -596,
    -314,   320,  -330,  -333,  -596,  -596,  -596,  1550,  1154,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,   235,  -465,   846,
    -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  1115,
    1179,  1187,  -108,  -398,  -377,  -553,  -360,  -305,  -596,  1561,
    -596,  -596,  1562,  -596,  -596,  -596,  -596,  -596,  -596,  -595,
    -596,  -596,  -596,  -596,  -596,   807,  -596,  -596,  -596,   811,
     812,  -596,   508,   638,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,   643,  -596,  -596,  -596,  -596,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,   518,   424,  -596,  -596,  1567,  -596,  -596,
    -596,  -596,  1046,  1050,  1040,  1087,  -596,  -323,  -264,  1394,
     823,  -431,  1417,  1648,  -596,  -315,  -348,  -136,  1318,  -302,
    1434,  1462,  1471,  1479,  1528,  -596,  1221,  -596,  -596,  -596,
    1247,  -596,  -596,  1185,  -596,  -596,  -596,  -218,  -596,  -596,
    -596,  -212,  -596,  -596,  -596,   848,  -242,   412,  -390,   908,
    -296,  -413,   510,  -355,  -529,  -289,  -226,  -205,  -406,  -149,
    -300,  -596,  1216,  -596,  -596,  -596,  -596,  -596,  -596,  -340,
     503,  -596,  1504,  -596,   805,  -596,   877,  -596,  -596,  -596,
    -596,  -596,  -596,  -419
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    71,   130,    72,   156,    73,   176,
      74,   197,    75,   214,    76,   229,    77,   246,    78,   259,
      79,   276,    14,    15,    16,   290,    17,    18,    19,    20,
     320,   539,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   334,   546,   337,    28,   493,   319,   528,   968,  1210,
     494,   789,   495,   496,    29,    30,    84,    85,   292,   497,
      31,    86,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   668,   790,   791,   792,   795,   796,   798,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   131,
     132,   133,   386,   561,   387,   563,   498,   499,   502,   134,
     831,   981,   135,   829,   970,   136,   712,   838,   220,   769,
     911,   571,   711,   572,   982,   839,  1112,  1216,   984,   840,
     841,  1137,  1138,  1130,  1245,  1132,  1248,  1256,  1257,  1139,
    1258,  1113,  1225,  1226,  1227,  1228,  1229,  1230,  1316,  1260,
    1140,  1261,  1128,  1129,   137,   138,   139,   140,   912,   913,
     914,   915,   605,   602,   608,   564,   295,   842,   843,   141,
     973,   625,   142,   143,   144,   370,   371,   107,   330,   331,
     145,   146,   147,   148,   149,   431,   432,   287,   150,   406,
     407,   258,   470,   471,   408,   472,   473,   409,   475,   410,
     411,   412,   413,   414,   415,   720,   445,   168,   581,   864,
    1194,  1063,  1151,   872,   873,  1406,   594,   595,   596,  1336,
    1044,   169,   617,   187,   188,   189,   190,   191,   192,   325,
     170,   171,   446,   172,   151,   152,   153,   240,   241,   242,
     243,   244,   773,   373
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     598,   550,   307,   582,   549,   585,   586,   435,   699,   562,
     587,   588,   416,   417,   592,   419,   613,   628,   601,   604,
     548,   607,   556,   599,   554,   786,   787,   474,   543,   503,
     504,   923,   505,   476,   450,   925,   420,   104,   558,   562,
     562,   104,   562,   108,   770,   771,   109,  1149,   699,   881,
     301,   699,   622,    69,   699,   626,   965,   728,  1107,   695,
      60,   630,   631,   632,   651,   635,   637,  -686,   696,   519,
     643,   644,   645,   520,   521,   649,   522,   523,   293,   524,
     525,   614,   615,   652,    41,    80,    42,   653,    43,    44,
      61,   519,  1332,    45,    46,   520,   521,   154,   522,   523,
    1149,   524,   525,   907,   447,    47,   618,   975,   436,   117,
     565,   836,   837,   657,   458,   567,    96,   569,    83,   612,
     301,   718,  1371,   448,   566,    82,   965,    48,    49,  1091,
     757,   633,   118,   719,   593,    50,  1372,    51,   506,   507,
      87,   729,   719,   908,   832,   833,    52,    62,   616,   559,
     529,   560,   530,   531,   532,   533,   534,   535,   536,   537,
     593,    53,   421,    54,    63,   120,   121,   391,   976,   977,
     834,   450,   384,   385,   835,    64,  1333,   909,   920,    53,
     122,   836,   837,   724,   725,   726,   123,   105,   124,   125,
     559,   433,   560,   716,   717,   850,   600,   451,   452,   620,
     453,   593,   874,   614,   615,    81,   556,  1254,   426,   110,
    1255,   526,   743,   744,   745,   620,   390,   321,   322,   323,
     324,   321,   322,   323,   324,   106,   593,   763,    83,   434,
     593,    97,    98,   526,    65,   391,   774,   567,   568,   569,
     454,   391,   780,   559,   764,   560,   767,   391,   785,    66,
     547,   543,   474,   932,   759,    67,   778,   779,   476,   455,
     456,    55,   477,    68,   556,  1093,   719,   437,   438,   439,
     440,    88,   301,   821,    56,   126,   788,   966,   482,   127,
      57,   697,   321,   322,   323,   324,   508,   128,    89,   129,
     698,   570,   603,   618,   619,    90,   739,   823,   824,   825,
     826,   827,   828,   658,   391,   659,   844,   559,   478,   560,
     437,   438,   439,   440,   441,   321,   322,   323,   324,   527,
      99,   100,   910,   427,   428,   703,   761,  1038,  1039,  1040,
     943,    91,   155,   545,   704,   880,   882,   442,   719,   443,
     886,   799,   888,   889,    58,   891,   892,   966,   809,   391,
      92,   405,   459,    93,  1051,  1052,  1053,   765,   444,   902,
     376,   377,  1133,   916,   917,   918,   538,   846,    94,   719,
    1068,   392,   393,   437,   438,   439,   440,   457,   934,   719,
     851,   853,   567,   394,   569,   395,   396,   397,   398,   399,
     101,   556,  1085,   460,   461,   462,   463,    95,   400,   401,
    1095,   958,   403,   559,   848,   560,  1098,   887,   326,   327,
     328,   329,   111,   606,   405,   616,   719,   900,   894,   692,
     896,   301,   402,   974,   565,   990,   112,   482,   906,   719,
    1101,  1102,  1103,  1104,  1105,  1106,   924,   926,   378,   379,
     705,   931,   326,   327,   328,   329,   113,   403,   707,   706,
     404,   321,   322,   323,   324,  1134,  1135,   708,  1041,   405,
    1047,  1190,   485,   486,   487,   488,   489,   490,   491,   492,
     944,   945,   946,   947,   943,   943,   943,  1217,   384,   385,
     119,  1055,  1136,  1065,  1058,   391,   209,  1061,   114,  1064,
     271,  1066,  1067,  1327,  1069,  1328,   160,  1072,   201,  1075,
    1076,   115,   263,  1142,  1144,   116,   971,  1035,   987,  1037,
    1087,  1088,  1089,  1090,  1084,   969,  1086,   980,   288,  1154,
     852,  1156,   866,   867,   559,  1158,   560,  1160,  1161,   289,
    1163,  1164,   993,   994,   995,  1108,   868,  1191,  1192,  1193,
     291,  1143,  1173,   869,   332,   866,   867,  1218,   120,   121,
    1219,   542,  1180,  1181,  1182,   820,     1,   333,   464,   868,
     558,   336,    53,   122,  1074,   972,   869,   988,  1202,   123,
     338,   124,   125,   339,  1045,  1195,   193,   210,  1220,   374,
    1212,   272,  1213,   372,  1221,   690,   375,  1092,  1094,   905,
     483,   484,   380,   638,   639,   640,   641,   699,   483,   484,
     384,   385,   517,   518,   879,   570,   600,   321,   322,   323,
     324,   485,   486,   487,   488,   489,   490,   491,   492,  1263,
     623,   624,  1145,   381,  1146,   583,   584,  1153,   382,   175,
    1272,   383,  1096,  1273,   388,   930,  1274,   389,  1276,  1126,
    1278,  1279,  1280,  1155,  1150,  1283,   384,   385,  1286,  1287,
     603,  1191,  1192,  1193,  1291,   418,  1292,  1166,   126,  1168,
     422,  1197,   127,  1222,  1172,   562,   429,  1175,  1176,   430,
     128,   559,   129,   560,   589,   590,   321,   322,   323,   324,
     479,  1186,  1187,  1188,  1189,   859,   860,   861,   862,   863,
     384,   385,   870,   871,  1127,   646,   647,   120,   121,   748,
     749,     2,     3,     4,     5,     6,     7,     8,     9,    10,
     480,    53,   122,   751,   752,   870,   871,   559,   123,   560,
     124,   125,   321,   322,   323,   324,  1232,  1233,  1234,  1235,
    1236,  1237,  1238,  1239,  1240,  1241,   606,  1191,  1192,  1193,
    1147,  1339,  1046,   753,   754,   967,  1343,   978,  1345,   196,
     481,  1157,  1349,  1223,  1223,  1351,  1352,   321,   322,   323,
     324,   559,  1042,   560,  1357,  1358,  1359,  1360,  1126,   500,
    1243,  1243,  1246,  1073,  1199,   213,   384,   385,   501,  1215,
     755,   756,  1214,   803,   804,  1184,   805,   806,  1298,   509,
    1300,   510,  1302,   511,  1304,  1201,  1196,  1198,  1200,   948,
     949,  1203,  1204,  1205,  1206,  1207,  1208,   126,  1224,  1224,
     512,   127,   326,   327,   328,   329,   513,   120,   121,   128,
     514,   129,   515,  1127,   516,  1244,  1244,  1247,   574,  1312,
     540,    53,   122,  1398,   541,  1400,   544,  1402,   123,  1404,
     124,   125,  1262,   120,   121,   552,   228,   559,  1115,   560,
    1191,  1192,  1193,   557,  1269,   573,  1271,    53,   122,   591,
     321,   322,   323,   324,   123,   609,   124,   125,  1409,   593,
    1411,   611,  1413,  1282,  1415,   950,   951,   173,   194,   211,
    1288,  1289,  1290,   273,   627,   575,   576,   577,   578,   579,
     580,  1361,   629,  1363,  1297,  1365,   642,  1367,   648,  1299,
     654,  1301,  1305,  1303,   437,   438,   439,   440,   423,   424,
     425,   657,  1307,  1308,   120,   121,  1116,  1117,  1118,  1119,
    1120,  1121,  1122,  1123,  1124,  1125,   655,   126,    53,   122,
     618,   127,   832,   833,   662,   123,   660,   124,   125,   128,
     340,   129,   341,   342,   343,   344,   345,   346,   664,   174,
     195,   212,   661,   126,   574,   274,   663,   127,   834,  1266,
    1267,  1268,   835,  1331,   665,   128,   666,   129,   667,   836,
     837,  -317,  1340,  1341,  1342,   634,  1344,   669,  1346,  1347,
    1348,   483,   484,  1350,   347,   671,  1353,  1354,   483,   484,
     348,  1355,  1356,   349,   672,   485,   486,   487,   488,   489,
     490,   491,   492,   340,   673,   341,   342,   343,   344,   345,
     346,   575,   576,   577,   578,   579,   580,   674,   593,  1191,
    1192,  1193,   952,   953,   126,   939,   940,   941,   127,  1405,
    1405,  1405,   675,   574,  1310,  1311,   128,   676,   129,  1387,
    1334,  1334,  1334,  1388,   677,  1389,   688,   347,   678,  1390,
     679,  1391,  1392,   348,   636,   680,   349,  1393,  1394,  1395,
    1396,  1335,  1335,  1335,   954,   955,   350,   956,   957,   296,
     681,   297,   682,   340,   351,   341,   342,   343,   344,   345,
     346,   298,   299,   300,   301,   683,   302,   303,  1313,  1314,
     575,   576,   577,   578,   579,   580,  1407,  1408,  1410,   689,
    1412,   352,  1414,   353,  1416,   354,   936,   937,   355,  1417,
     104,  1418,   693,  1419,   684,  1420,   685,   347,  1337,  1338,
     694,   686,   687,   348,   701,   709,   349,   702,   710,   350,
     713,   304,   714,   730,   356,   357,   715,   351,   727,   358,
     359,   360,   731,   305,   306,   733,   361,   735,   362,   363,
     364,   365,   737,   741,   742,   746,   366,   367,   368,   369,
     747,   750,   772,   775,   352,   776,   353,   777,   354,   782,
     784,   355,  -319,  -321,  -323,   793,   555,   794,   801,   340,
     797,   341,   342,   343,   344,   345,   346,   157,   177,   198,
     215,   230,   247,   260,   277,   800,   802,   356,   357,   350,
     807,   808,   358,   359,   360,   810,   811,   351,   845,   361,
     812,   362,   363,   364,   365,   813,   814,   815,   816,   366,
     367,   368,   369,   347,   817,   818,   819,   830,   856,   348,
     822,   854,   349,   855,   352,   245,   353,   865,   354,   691,
     857,   355,   858,   340,   875,   341,   342,   343,   344,   345,
     346,   158,   178,   199,   216,   231,   248,   261,   278,   159,
     179,   200,   217,   232,   249,   262,   279,   356,   357,   883,
     876,   884,   358,   359,   360,   885,   893,   877,   895,   361,
     899,   362,   363,   364,   365,   897,   903,   347,   898,   366,
     367,   368,   369,   348,   921,   922,   349,   593,   919,   929,
     927,   928,   935,   120,   121,   350,   933,   788,   938,   740,
     959,   991,   960,   351,   961,   391,   962,    53,   122,   963,
     964,   992,  1030,  1031,   123,  1032,   124,   125,  1033,  1043,
    1034,  1049,  1048,   395,   396,   397,   398,   399,   465,  1036,
     352,   275,   353,  1062,   354,  1050,   466,   355,   467,   468,
     469,   395,   396,   397,   398,   399,   465,  1054,  1056,  1057,
    1059,  1060,  1070,  1071,   466,  1078,   467,   468,   469,   350,
    1077,  1081,  1079,   356,   357,  1080,  1082,   351,   358,   359,
     360,  1083,  1097,  1099,  1100,   361,  1109,   362,   363,   364,
     365,  1110,  1111,  1148,  1141,   366,   367,   368,   369,  1152,
    1159,  1209,  1162,  1165,   352,  1167,   353,  1169,   354,   120,
     121,   355,  1170,   126,  1171,   878,   404,   127,  1174,  1177,
    1178,  1179,  1211,    53,   122,   128,  1183,   129,  1185,  1231,
     123,  1249,   124,   125,   721,   722,   723,   356,   357,  1251,
    1250,  1259,   358,   359,   360,  1264,  1270,   732,  1252,   361,
    1275,   362,   363,   364,   365,  1277,  1281,  1284,  1285,   366,
     367,   368,   369,  1293,  1294,   593,   161,   180,   202,   221,
     233,   251,   264,   280,  1295,  1306,  1309,  1296,   758,   760,
     762,  1317,  1318,   766,  1319,   768,  1320,   392,   393,   162,
     181,   203,   222,   234,   252,   265,   281,   781,  1315,   394,
     783,   395,   396,   397,   398,   399,   163,   182,   204,   223,
     235,   253,   266,   282,   400,   401,  1330,  1321,  1322,   126,
    1362,  1323,  1324,   127,  1325,   485,   486,   487,   488,   489,
     490,   128,   492,   129,   164,   183,   205,   224,   236,   254,
     267,   283,  1326,   165,   184,   206,   225,   237,   255,   268,
     284,   166,   185,   207,   226,   238,   256,   269,   285,  1329,
    1364,  1366,  1368,  1370,   847,   849,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
     167,   186,   208,   227,   239,   257,   270,   286,  1369,  1383,
    1384,  1385,   901,  1373,  1374,   904,  1375,  1376,  1377,  1386,
    1378,  1379,  1380,  1381,  1382,  1397,  1399,  1401,  1403,    70,
     551,   335,   670,   979,   294,   656,   218,   219,   983,   942,
    1131,  1114,   985,   986,   250,  1253,  1242,   738,   700,    59,
     736,   734,   610,   597,   989,   650,   553,   621,   890,   449,
    1265
};

static const yytype_uint16 yycheck[] =
{
     406,   334,    86,   393,   334,   395,   396,   143,   561,   386,
     400,   401,   120,   121,   404,   123,   435,   448,   416,   417,
     334,   419,   370,   413,   339,    22,    23,   245,   330,    21,
      22,    41,    24,   245,     6,    41,   139,    87,    90,   416,
     417,    87,   419,    70,   639,   640,    73,    58,   601,    54,
      29,   604,   442,     0,   607,   445,    35,    55,    38,   130,
     137,   451,   452,   453,   470,   455,   456,     5,   139,    26,
     460,   461,   462,    30,    31,   465,    33,    34,    90,    36,
      37,    22,    23,   473,     8,    11,    10,   477,    12,    13,
     137,    26,    55,    17,    18,    30,    31,     3,    33,    34,
      58,    36,    37,    16,   237,    29,   234,    16,     6,    16,
      74,    90,    91,    93,     6,   201,    71,   203,   130,   434,
      29,   139,   266,   256,    88,   139,    35,    51,    52,    41,
     139,   259,    39,   151,   139,    59,   280,    61,   130,   131,
      19,   139,   151,    56,    53,    54,    70,   137,   234,   201,
      60,   203,    62,    63,    64,    65,    66,    67,    68,    69,
     139,    85,   265,    87,   137,    71,    72,   139,    77,    78,
      79,     6,   130,   131,    83,   137,   139,    90,   773,    85,
      86,    90,    91,   589,   590,   591,    92,   237,    94,    95,
     201,   237,   203,   583,   584,   140,    90,   169,   170,   441,
     172,   139,   731,    22,    23,   131,   554,   264,    71,   236,
     267,   168,   618,   619,   620,   457,     6,   227,   228,   229,
     230,   227,   228,   229,   230,   275,   139,   633,   130,   275,
     139,   186,   187,   168,   137,   139,   642,   201,   202,   203,
     212,   139,   648,   201,   634,   203,   636,   139,   654,   137,
     334,   553,   470,   782,   139,   137,   646,   647,   470,   231,
     232,   185,   166,   137,   612,    41,   151,   208,   209,   210,
     211,   275,    29,   692,   198,   181,   273,   256,    35,   185,
     204,   130,   227,   228,   229,   230,   278,   193,   131,   195,
     139,   255,    90,   234,   235,   131,   611,   703,   704,   705,
     706,   707,   708,   130,   139,   132,   712,   201,   212,   203,
     208,   209,   210,   211,   212,   227,   228,   229,   230,   276,
     196,   197,   235,   186,   187,   130,   139,   856,   857,   858,
     795,   275,   238,    90,   139,   741,   742,   235,   151,   237,
     746,   276,   748,   749,   268,   751,   752,   256,   678,   139,
     139,   249,     6,   131,   883,   884,   885,   139,   256,   765,
     130,   131,    74,   769,   770,   771,   276,   139,   132,   151,
     899,   161,   162,   208,   209,   210,   211,   212,   784,   151,
     720,   721,   201,   173,   203,   175,   176,   177,   178,   179,
     262,   739,   921,    47,    48,    49,    50,   275,   188,   189,
     929,   820,   237,   201,   139,   203,   935,   747,   133,   134,
     135,   136,    73,    90,   249,   234,   151,   139,   758,   555,
     760,    29,   212,   829,    74,   831,    73,    35,   768,   151,
     959,   960,   961,   962,   963,   964,   776,   777,   130,   131,
     130,   781,   133,   134,   135,   136,    73,   237,   130,   139,
     240,   227,   228,   229,   230,   167,   168,   139,   864,   249,
     879,   139,   219,   220,   221,   222,   223,   224,   225,   226,
     810,   811,   812,   813,   939,   940,   941,    93,   130,   131,
       3,   887,   194,   896,   890,   139,    74,   893,    16,   895,
      78,   897,   898,   130,   900,   132,    72,   903,    74,   905,
     906,    73,    78,  1032,  1033,    73,   829,   847,   831,   849,
     923,   924,   925,   926,   920,   829,   922,   831,     9,  1048,
     140,  1050,    71,    72,   201,  1054,   203,  1056,  1057,    71,
    1059,  1060,    80,    81,    82,   966,    85,   215,   216,   217,
      76,    90,  1071,    92,   131,    71,    72,   163,    71,    72,
     166,   276,  1081,  1082,  1083,   691,     7,   139,   212,    85,
      90,   260,    85,    86,   904,   829,    92,   831,  1097,    92,
     275,    94,    95,   275,   874,   139,    73,    74,   194,   131,
    1109,    78,  1111,    57,   200,   276,   131,   927,   928,   140,
     206,   207,   131,   243,   244,   245,   246,  1150,   206,   207,
     130,   131,    27,    28,   740,   255,    90,   227,   228,   229,
     230,   219,   220,   221,   222,   223,   224,   225,   226,  1148,
     273,   274,  1035,   131,  1037,   169,   170,  1046,   130,     3,
    1159,   131,   932,  1162,   130,   140,  1165,   130,  1167,   999,
    1169,  1170,  1171,  1049,  1042,  1174,   130,   131,  1177,  1178,
      90,   215,   216,   217,  1183,   132,  1185,  1063,   181,  1065,
     265,   139,   185,   279,  1070,  1042,   138,  1073,  1074,   137,
     193,   201,   195,   203,   257,   258,   227,   228,   229,   230,
     130,  1087,  1088,  1089,  1090,   214,   215,   216,   217,   218,
     130,   131,   241,   242,   999,    48,    49,    71,    72,   130,
     131,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      25,    85,    86,   130,   131,   241,   242,   201,    92,   203,
      94,    95,   227,   228,   229,   230,  1116,  1117,  1118,  1119,
    1120,  1121,  1122,  1123,  1124,  1125,    90,   215,   216,   217,
    1040,  1270,   878,   130,   131,   829,  1275,   831,  1277,     3,
     139,  1051,  1281,  1113,  1114,  1284,  1285,   227,   228,   229,
     230,   201,   870,   203,  1293,  1294,  1295,  1296,  1128,   139,
    1130,  1131,  1132,   140,   139,     3,   130,   131,    75,  1112,
     130,   131,  1112,    14,    15,  1085,    27,    28,  1194,   130,
    1196,   131,  1198,    89,  1200,  1095,  1092,  1093,  1094,   213,
     214,  1101,  1102,  1103,  1104,  1105,  1106,   181,  1113,  1114,
      89,   185,   133,   134,   135,   136,   275,    71,    72,   193,
     131,   195,   139,  1128,   131,  1130,  1131,  1132,   212,  1219,
     263,    85,    86,  1362,   263,  1364,   197,  1366,    92,  1368,
      94,    95,  1142,    71,    72,   261,     3,   201,    73,   203,
     215,   216,   217,   139,  1154,    92,  1156,    85,    86,   249,
     227,   228,   229,   230,    92,    55,    94,    95,  1397,   139,
    1399,   275,  1401,  1173,  1403,   213,   214,    72,    73,    74,
    1180,  1181,  1182,    78,   236,   269,   270,   271,   272,   273,
     274,  1297,   236,  1299,  1190,  1301,    40,  1303,    40,  1195,
     166,  1197,  1202,  1199,   208,   209,   210,   211,   182,   183,
     184,    93,  1212,  1213,    71,    72,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   139,   181,    85,    86,
     234,   185,    53,    54,   214,    92,   130,    94,    95,   193,
      40,   195,    42,    43,    44,    45,    46,    47,   131,    72,
      73,    74,   130,   181,   212,    78,   130,   185,    79,   252,
     253,   254,    83,  1263,   131,   193,   131,   195,   277,    90,
      91,   130,  1272,  1273,  1274,   233,  1276,   130,  1278,  1279,
    1280,   206,   207,  1283,    84,   277,  1286,  1287,   206,   207,
      90,  1291,  1292,    93,   277,   219,   220,   221,   222,   223,
     224,   225,   226,    40,   277,    42,    43,    44,    45,    46,
      47,   269,   270,   271,   272,   273,   274,   277,   139,   215,
     216,   217,   213,   214,   181,   790,   791,   792,   185,  1384,
    1385,  1386,   277,   212,   164,   165,   193,   277,   195,  1339,
    1266,  1267,  1268,  1343,   277,  1345,   139,    84,   277,  1349,
     277,  1351,  1352,    90,   233,   277,    93,  1357,  1358,  1359,
    1360,  1266,  1267,  1268,   213,   214,   166,   213,   214,    14,
     277,    16,   277,    40,   174,    42,    43,    44,    45,    46,
      47,    26,    27,    28,    29,   277,    31,    32,   130,   131,
     269,   270,   271,   272,   273,   274,  1385,  1386,  1398,   139,
    1400,   201,  1402,   203,  1404,   205,   786,   787,   208,  1409,
      87,  1411,    55,  1413,   277,  1415,   277,    84,  1267,  1268,
     139,   277,   277,    90,   130,   262,    93,   131,    76,   166,
     139,    76,   139,     5,   234,   235,   139,   174,   139,   239,
     240,   241,     5,    88,    89,   139,   246,   139,   248,   249,
     250,   251,   139,   139,    93,    93,   256,   257,   258,   259,
     139,   139,    79,   139,   201,   139,   203,   139,   205,     5,
     139,   208,   130,   130,   130,   130,   276,   130,   130,    40,
      20,    42,    43,    44,    45,    46,    47,    72,    73,    74,
      75,    76,    77,    78,    79,   131,   131,   234,   235,   166,
     131,   131,   239,   240,   241,   139,   139,   174,    55,   246,
     139,   248,   249,   250,   251,   139,   139,   139,   139,   256,
     257,   258,   259,    84,   139,   139,   214,   139,     5,    90,
     214,   140,    93,   140,   201,     3,   203,    55,   205,   276,
       5,   208,     5,    40,   214,    42,    43,    44,    45,    46,
      47,    72,    73,    74,    75,    76,    77,    78,    79,    72,
      73,    74,    75,    76,    77,    78,    79,   234,   235,     5,
     214,     5,   239,   240,   241,     5,   171,   214,   171,   246,
       5,   248,   249,   250,   251,   213,   140,    84,   214,   256,
     257,   258,   259,    90,     5,   140,    93,   139,   247,     5,
     139,   139,     5,    71,    72,   166,   140,   273,   130,   276,
       5,   130,     5,   174,     5,   139,     5,    85,    86,     5,
       5,   130,   139,   139,    92,     5,    94,    95,     5,     4,
     171,   130,     5,   175,   176,   177,   178,   179,   180,   171,
     201,     3,   203,   214,   205,     5,   188,   208,   190,   191,
     192,   175,   176,   177,   178,   179,   180,     5,     5,     5,
       5,     5,   140,     5,   188,   139,   190,   191,   192,   166,
     130,     5,   139,   234,   235,   139,     5,   174,   239,   240,
     241,     5,     5,   130,   130,   246,     5,   248,   249,   250,
     251,   130,     5,     5,   214,   256,   257,   258,   259,     3,
       5,   269,     5,     5,   201,     5,   203,     5,   205,    71,
      72,   208,     5,   181,     5,   276,   240,   185,     5,     5,
       5,   214,   130,    85,    86,   193,     5,   195,     5,   131,
      92,   130,    94,    95,   586,   587,   588,   234,   235,   139,
     130,   199,   239,   240,   241,    94,     5,   599,   131,   246,
       5,   248,   249,   250,   251,     5,     5,     5,     5,   256,
     257,   258,   259,     5,     5,   139,    72,    73,    74,    75,
      76,    77,    78,    79,     5,   139,   130,     5,   630,   631,
     632,   139,   139,   635,   139,   637,   139,   161,   162,    72,
      73,    74,    75,    76,    77,    78,    79,   649,   130,   173,
     652,   175,   176,   177,   178,   179,    72,    73,    74,    75,
      76,    77,    78,    79,   188,   189,   130,   139,   139,   181,
       5,   139,   139,   185,   139,   219,   220,   221,   222,   223,
     224,   193,   226,   195,    72,    73,    74,    75,    76,    77,
      78,    79,   139,    72,    73,    74,    75,    76,    77,    78,
      79,    72,    73,    74,    75,    76,    77,    78,    79,   139,
       5,     5,     5,   139,   716,   717,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      72,    73,    74,    75,    76,    77,    78,    79,   217,    55,
       5,     5,   764,   140,   140,   767,   140,   140,   140,     5,
     140,   140,   140,   140,   140,     5,     5,     5,     5,    12,
     335,   102,   513,   831,    84,   481,    75,    75,   831,   793,
    1002,   998,   831,   831,    77,  1137,  1128,   607,   561,     1,
     604,   601,   431,   406,   831,   470,   338,   441,   750,   155,
    1150
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   282,   283,   284,   303,   304,   305,   307,   308,   309,
     310,   313,   314,   315,   316,   317,   318,   319,   325,   335,
     336,   341,   361,   362,   363,   364,   365,   366,   367,   368,
     369,     8,    10,    12,    13,    17,    18,    29,    51,    52,
      59,    61,    70,    85,    87,   185,   198,   204,   268,   444,
     137,   137,   137,   137,   137,   137,   137,   137,   137,     0,
     284,   285,   287,   289,   291,   293,   295,   297,   299,   301,
      11,   131,   139,   130,   337,   338,   342,    19,   275,   131,
     131,   275,   139,   131,   132,   275,    71,   186,   187,   196,
     197,   262,   320,   321,    87,   237,   275,   448,    70,    73,
     236,    73,    73,    73,    16,    73,    73,    16,    39,     3,
      71,    72,    86,    92,    94,    95,   181,   185,   193,   195,
     286,   370,   371,   372,   380,   383,   386,   425,   426,   427,
     428,   440,   443,   444,   445,   451,   452,   453,   454,   455,
     459,   505,   506,   507,     3,   238,   288,   370,   371,   372,
     425,   440,   443,   451,   452,   453,   454,   455,   478,   492,
     501,   502,   504,   505,   507,     3,   290,   370,   371,   372,
     440,   443,   451,   452,   453,   454,   455,   494,   495,   496,
     497,   498,   499,   501,   505,   507,     3,   292,   370,   371,
     372,   425,   440,   443,   451,   452,   453,   454,   455,   478,
     501,   505,   507,     3,   294,   370,   371,   372,   380,   383,
     389,   440,   443,   451,   452,   453,   454,   455,     3,   296,
     370,   371,   372,   440,   443,   451,   452,   453,   454,   455,
     508,   509,   510,   511,   512,     3,   298,   370,   371,   372,
     428,   440,   443,   451,   452,   453,   454,   455,   462,   300,
     370,   371,   372,   425,   440,   443,   451,   452,   453,   454,
     455,   478,   501,   505,   507,     3,   302,   370,   371,   372,
     440,   443,   451,   452,   453,   454,   455,   458,     9,    71,
     306,    76,   339,    90,   338,   437,    14,    16,    26,    27,
      28,    29,    31,    32,    76,    88,    89,   326,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   327,
     311,   227,   228,   229,   230,   500,   133,   134,   135,   136,
     449,   450,   131,   139,   322,   321,   260,   324,   275,   275,
      40,    42,    43,    44,    45,    46,    47,    84,    90,    93,
     166,   174,   201,   203,   205,   208,   234,   235,   239,   240,
     241,   246,   248,   249,   250,   251,   256,   257,   258,   259,
     446,   447,    57,   514,   131,   131,   130,   131,   130,   131,
     131,   131,   130,   131,   130,   131,   373,   375,   130,   130,
       6,   139,   161,   162,   173,   175,   176,   177,   178,   179,
     188,   189,   212,   237,   240,   249,   460,   461,   465,   468,
     470,   471,   472,   473,   474,   475,   373,   373,   132,   373,
     139,   265,   265,   182,   183,   184,    71,   186,   187,   138,
     137,   456,   457,   237,   275,   448,     6,   208,   209,   210,
     211,   212,   235,   237,   256,   477,   503,   237,   256,   503,
       6,   169,   170,   172,   212,   231,   232,   212,     6,     6,
      47,    48,    49,    50,   212,   180,   188,   190,   191,   192,
     463,   464,   466,   467,   468,   469,   472,   166,   212,   130,
      25,   139,    35,   206,   207,   219,   220,   221,   222,   223,
     224,   225,   226,   326,   331,   333,   334,   340,   377,   378,
     139,    75,   379,    21,    22,    24,   130,   131,   278,   130,
     131,    89,    89,   275,   131,   139,   131,    27,    28,    26,
      30,    31,    33,    34,    36,    37,   168,   276,   328,    60,
      62,    63,    64,    65,    66,    67,    68,    69,   276,   312,
     263,   263,   276,   450,   197,    90,   323,   326,   331,   333,
     334,   324,   261,   449,   446,   276,   447,   139,    90,   201,
     203,   374,   375,   376,   436,    74,    88,   201,   202,   203,
     255,   392,   394,    92,   212,   269,   270,   271,   272,   273,
     274,   479,   479,   169,   170,   479,   479,   479,   479,   257,
     258,   249,   479,   139,   487,   488,   489,   461,   489,   479,
      90,   374,   434,    90,   374,   433,    90,   374,   435,    55,
     457,   275,   446,   514,    22,    23,   234,   493,   234,   235,
     477,   493,   479,   273,   274,   442,   479,   236,   442,   236,
     479,   479,   479,   259,   233,   479,   233,   479,   243,   244,
     245,   246,    40,   479,   479,   479,    48,    49,    40,   479,
     464,   489,   479,   479,   166,   139,   339,    93,   130,   132,
     130,   130,   214,   130,   131,   131,   131,   277,   354,   130,
     327,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   139,   139,
     276,   276,   448,    55,   139,   130,   139,   130,   139,   376,
     436,   130,   131,   130,   139,   130,   139,   130,   139,   262,
      76,   393,   387,   139,   139,   139,   479,   479,   139,   151,
     476,   476,   476,   476,   489,   489,   489,   139,    55,   139,
       5,     5,   476,   139,   434,   139,   433,   139,   435,   446,
     276,   139,    93,   489,   489,   489,    93,   139,   130,   131,
     139,   130,   131,   130,   131,   130,   131,   139,   476,   139,
     476,   139,   476,   489,   479,   139,   476,   479,   476,   390,
     390,   390,    79,   513,   489,   139,   139,   139,   479,   479,
     489,   476,     5,   476,   139,   489,    22,    23,   273,   332,
     355,   356,   357,   130,   130,   358,   359,    20,   360,   276,
     131,   130,   131,    14,    15,    27,    28,   131,   131,   333,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   214,
     448,   514,   214,   489,   489,   489,   489,   489,   489,   384,
     139,   381,    53,    54,    79,    83,    90,    91,   388,   396,
     400,   401,   438,   439,   489,    55,   139,   476,   139,   476,
     140,   500,   140,   500,   140,   140,     5,     5,     5,   214,
     215,   216,   217,   218,   480,    55,    71,    72,    85,    92,
     241,   242,   484,   485,   485,   214,   214,   214,   276,   448,
     489,    54,   489,     5,     5,     5,   489,   500,   489,   489,
     480,   489,   489,   171,   500,   171,   500,   213,   214,     5,
     139,   476,   489,   140,   476,   140,   500,    16,    56,    90,
     235,   391,   429,   430,   431,   432,   489,   489,   489,   247,
     390,     5,   140,    41,   500,    41,   500,   139,   139,     5,
     140,   500,   485,   140,   489,     5,   332,   332,   130,   358,
     358,   358,   360,   359,   500,   500,   500,   500,   213,   214,
     213,   214,   213,   214,   213,   214,   213,   214,   514,     5,
       5,     5,     5,     5,     5,    35,   256,   326,   329,   331,
     385,   438,   439,   441,   489,    16,    77,    78,   326,   329,
     331,   382,   395,   396,   399,   400,   401,   438,   439,   441,
     489,   130,   130,    80,    81,    82,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     139,   139,     5,     5,   171,   500,   171,   500,   485,   485,
     485,   489,   373,     4,   491,   491,   448,   514,     5,   130,
       5,   485,   485,   485,     5,   489,     5,     5,   489,     5,
       5,   489,   214,   482,   489,   482,   489,   489,   485,   489,
     140,     5,   489,   140,   500,   489,   489,   130,   139,   139,
     139,     5,     5,     5,   489,   485,   489,   482,   482,   482,
     482,    41,   500,    41,   500,   485,   491,     5,   485,   130,
     130,   485,   485,   485,   485,   485,   485,    38,   442,     5,
     130,     5,   397,   412,   412,    73,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   377,   378,   423,   424,
     404,   404,   406,    74,   167,   168,   194,   402,   403,   410,
     421,   214,   485,    90,   485,   482,   482,   491,     5,    58,
     374,   483,     3,   514,   485,   489,   485,   491,   485,     5,
     485,   485,     5,   485,   485,     5,   489,     5,   489,     5,
       5,     5,   489,   485,     5,   489,   489,     5,     5,   214,
     485,   485,   485,     5,   491,     5,   489,   489,   489,   489,
     139,   215,   216,   217,   481,   139,   481,   139,   481,   139,
     481,   491,   485,   491,   491,   491,   491,   491,   491,   269,
     330,   130,   485,   485,   333,   334,   398,    93,   163,   166,
     194,   200,   279,   377,   378,   413,   414,   415,   416,   417,
     418,   131,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   424,   377,   378,   405,   377,   378,   407,   130,
     130,   139,   131,   403,   264,   267,   408,   409,   411,   199,
     420,   422,   491,   485,    94,   483,   252,   253,   254,   491,
       5,   491,   485,   485,   485,     5,   485,     5,   485,   485,
     485,     5,   491,   485,     5,     5,   485,   485,   491,   491,
     491,   485,   485,     5,     5,     5,     5,   481,   489,   481,
     489,   481,   489,   481,   489,   491,   139,   491,   491,   130,
     164,   165,   479,   130,   131,   130,   419,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   130,   132,   139,
     130,   491,    55,   139,   487,   488,   490,   490,   490,   485,
     491,   491,   491,   485,   491,   485,   491,   491,   491,   485,
     491,   485,   485,   491,   491,   491,   491,   485,   485,   485,
     485,   489,     5,   489,     5,   489,     5,   489,     5,   217,
     139,   266,   280,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,    55,     5,     5,     5,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,     5,   485,     5,
     485,     5,   485,     5,   485,   484,   486,   486,   486,   485,
     491,   485,   491,   485,   491,   485,   491,   491,   491,   491,
     491
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   281,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   285,   285,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   287,   287,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   291,   291,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   293,   293,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   295,
     295,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     299,   299,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   301,   301,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     303,   303,   303,   304,   305,   306,   306,   307,   308,   308,
     308,   309,   310,   311,   311,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   313,
     314,   314,   314,   315,   315,   315,   316,   317,   318,   319,
     320,   320,   321,   322,   322,   323,   323,   323,   323,   323,
     324,   324,   325,   326,   326,   327,   327,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   329,   330,   330,
     331,   331,   331,   332,   332,   333,   333,   333,   333,   333,
     333,   333,   334,   335,   336,   337,   337,   338,   338,   339,
     339,   340,   340,   340,   340,   340,   340,   341,   342,   342,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   344,
     345,   346,   347,   348,   349,   349,   350,   350,   351,   351,
     352,   353,   353,   353,   353,   353,   353,   354,   353,   355,
     353,   356,   353,   357,   353,   353,   358,   358,   359,   360,
     360,   361,   361,   361,   361,   362,   363,   363,   364,   365,
     366,   366,   367,   368,   369,   369,   370,   370,   371,   371,
     372,   372,   373,   373,   374,   374,   375,   375,   376,   376,
     376,   376,   377,   377,   378,   379,   379,   380,   381,   381,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   383,   384,   384,   385,   385,   385,   385,   385,   385,
     386,   387,   387,   388,   388,   388,   388,   388,   389,   389,
     389,   389,   390,   390,   391,   391,   391,   391,   392,   392,
     393,   394,   395,   395,   396,   396,   396,   397,   397,   398,
     398,   399,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   401,   401,   402,   402,
     403,   403,   403,   403,   404,   404,   405,   405,   406,   406,
     407,   407,   408,   408,   409,   410,   410,   411,   411,   412,
     412,   413,   413,   413,   413,   413,   413,   413,   413,   414,
     415,   415,   416,   416,   417,   418,   419,   419,   420,   421,
     421,   422,   423,   423,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   425,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   433,   434,   434,
     435,   435,   436,   436,   437,   437,   438,   439,   440,   440,
     441,   442,   442,   443,   443,   443,   443,   444,   445,   446,
     446,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   448,   448,   449,   449,   450,   450,   450,   450,   451,
     451,   451,   452,   452,   452,   453,   453,   453,   454,   455,
     456,   456,   457,   458,   458,   459,   460,   460,   461,   461,
     461,   461,   461,   461,   461,   462,   463,   463,   464,   464,
     464,   464,   465,   465,   466,   467,   467,   467,   467,   468,
     468,   468,   468,   469,   469,   470,   471,   472,   473,   473,
     473,   474,   474,   475,   475,   476,   476,   477,   477,   477,
     477,   478,   478,   479,   479,   479,   479,   479,   479,   479,
     479,   480,   480,   480,   480,   480,   480,   481,   481,   481,
     482,   482,   483,   483,   483,   484,   484,   484,   484,   484,
     484,   484,   485,   486,   487,   488,   489,   489,   489,   490,
     490,   490,   491,   491,   491,   491,   492,   492,   492,   493,
     493,   493,   494,   494,   494,   494,   495,   495,   495,   495,
     496,   496,   497,   497,   498,   498,   499,   500,   500,   500,
     500,   500,   501,   501,   502,   502,   502,   502,   502,   502,
     502,   502,   503,   503,   504,   504,   505,   505,   506,   506,
     507,   507,   508,   509,   510,   511,   511,   511,   511,   511,
     511,   512,   512,   512,   512,   512,   512,   513,   514,   514,
     514
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
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     0,     2,     2,     0,
       2,     1,     1,     2,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     7,     6,     6,
       6,     9,     2,     2,     3,     2,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     3,     2,     7,     7,
       3,     1,     1,     3,     6,     7,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     2,     2,     2,     1,     1,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     8,     6,     6,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     6,     1,     2,     1,     1,
       1,     1,     4,     4,     4,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     3,     3,     3,     1,     1,
       1,     6,     5,     6,     5,     1,     1,     1,     1,     1,
       1,     9,     6,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     4,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     1,     1,     0,
       1,     1,     0,     6,     6,     6,     8,    10,     7,     0,
       1,     1,     8,     9,     9,    10,     9,     9,    10,    10,
      10,     9,    10,     9,     9,     9,     6,     0,     1,     1,
       1,     1,     8,     7,     7,     7,     4,     4,     7,     7,
       4,     4,     0,     1,     9,     6,     8,     8,     8,     8,
       8,     8,     7,     7,     9,    10,    11,    12,    10,    11,
      12,    10,    11,    12,    10,    11,    12,     2,     0,     2,
       3
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
#line 3205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 593 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 596 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3222 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3235 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 612 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3243 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 617 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = START_DELAY;
                  }
#line 3251 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 620 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3259 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 625 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 630 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3275 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 633 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3283 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 636 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3291 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 641 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 654 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3308 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 657 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 660 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 663 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 666 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 669 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3348 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 672 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3356 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 675 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 678 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 681 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 684 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3388 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 687 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3396 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 690 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3404 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 693 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 698 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3420 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3433 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 711 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog(NULL);
                  }
#line 3441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 714 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3449 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 719 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 722 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 726 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 732 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.id = (yyvsp[0].string);
                  }
#line 3483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 737 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.state = (yyvsp[0].string);
                  }
#line 3491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 742 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        }
                  }
#line 3502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 757 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3511 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 767 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 777 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 782 "src/p.y" /* yacc.c:1646  */
    {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 787 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 797 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3552 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3570 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 809 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 813 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 816 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 820 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 823 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3612 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 826 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3620 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 829 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3628 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 834 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3637 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3656 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3668 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3680 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 878 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3689 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 882 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3707 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3719 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3731 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 906 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 910 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3749 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 925 "src/p.y" /* yacc.c:1646  */
    {
                        if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                                Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3771 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3789 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3803 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 975 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 978 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3833 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3853 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1020 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3861 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1026 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3869 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1032 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3878 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1038 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[0].number);
                  }
#line 3887 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1044 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[0].string);
                  }
#line 3896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1058 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 3904 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1061 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 3912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1066 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 3920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1071 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 3928 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1082 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3950 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1086 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 3959 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1090 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 3968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1094 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 3977 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1098 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 3986 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 3994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1105 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4003 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1109 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4011 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1116 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4028 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1119 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1126 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1137 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = false;
                  }
#line 4072 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1146 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = true;
                  }
#line 4080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1151 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4088 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1154 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4096 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4108 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4120 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1173 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4128 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1178 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4136 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1181 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1186 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4152 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1191 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4160 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1204 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4182 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4200 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1225 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4208 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4220 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4232 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1246 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1249 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4248 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1254 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4256 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1257 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1263 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4272 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1266 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1279 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4288 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1282 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4296 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1287 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1291 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4314 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1295 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4322 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1298 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1303 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1306 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1311 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4354 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1316 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1319 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4370 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4382 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1369 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1386 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1392 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4422 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1397 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1402 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1419 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4450 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1422 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4458 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1427 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1432 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1438 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip4;
                  }
#line 4483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1441 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip6;
                  }
#line 4491 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1446 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                  }
#line 4499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1449 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1453 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Udp;
                  }
#line 4516 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1466 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4524 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1471 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4532 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1474 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1477 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4548 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1480 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1483 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4564 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1486 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1489 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4582 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1494 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1497 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4600 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1502 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1505 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1508 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4624 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1511 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1514 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1517 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1523 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4665 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1527 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1530 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1533 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1538 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1541 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4707 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1544 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1549 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1552 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1555 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4741 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1558 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4749 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1561 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1564 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1567 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4773 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1570 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4781 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1573 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1576 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4797 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1579 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4805 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4818 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4831 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1606 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4839 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4847 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1612 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4855 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1615 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4863 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1624 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 4871 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1627 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 4879 "src/y.tab.c" /* yacc.c:1646  */
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
#line 4892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1644 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 4900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1649 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4908 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1652 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4916 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1657 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 4924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1666 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 4932 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1669 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 4940 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1678 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 4948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1681 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 4956 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1692 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                  }
#line 4965 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1698 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Get;
                  }
#line 4973 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1701 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Head;
                  }
#line 4981 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1706 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 4990 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1710 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 4999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1716 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 5007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1721 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 5016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1728 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 5024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1733 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1742 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 5040 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1751 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5048 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1754 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1757 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1760 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5073 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1764 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5082 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1768 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1772 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5100 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1776 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1780 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5118 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 1784 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1788 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5136 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1792 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5145 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5154 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 1802 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5163 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1806 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 1813 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 1819 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1825 "src/p.y" /* yacc.c:1646  */
    {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1832 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5209 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1837 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                 }
#line 5217 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1842 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1847 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5233 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1852 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5241 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1855 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1860 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5257 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1863 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5265 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1868 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5273 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1871 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5281 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1876 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5289 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1879 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5297 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1884 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1887 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5313 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1892 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1897 "src/p.y" /* yacc.c:1646  */
    {
                        portset.retry = (yyvsp[0].number);
                  }
#line 5329 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1902 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1908 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5351 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1916 "src/p.y" /* yacc.c:1646  */
    {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1922 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5366 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1923 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1926 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1930 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5389 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5398 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1937 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5406 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1942 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5412 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1945 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1952 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1953 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5430 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1954 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1955 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1956 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1957 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1958 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5460 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1959 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5466 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1960 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exist; }
#line 5472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1961 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_FsFlag; }
#line 5478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 1962 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5484 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 1963 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 1964 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5496 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 1965 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 1966 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 1967 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_NonExist; }
#line 5514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 1968 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5520 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 1969 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 1970 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5532 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 1971 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 1972 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 1973 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 1974 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5556 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 1975 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 1976 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5568 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 1977 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5574 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 1978 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 1979 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5586 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 1980 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5592 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 1981 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 1992 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 1993 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5610 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 1994 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5616 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 1995 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5622 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 1998 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2002 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2006 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2012 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 5657 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2015 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 5665 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2018 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2024 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 5682 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2027 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 5691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2031 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2036 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5708 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2050 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5714 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2053 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5726 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2060 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5738 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2069 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5747 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2088 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5756 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2104 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5766 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2109 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2116 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2123 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2124 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2125 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2126 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2129 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5820 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2134 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5830 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2139 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2144 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5850 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2151 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5860 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2156 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2163 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5880 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2170 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 5890 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2177 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-2].number);
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].real);
                  }
#line 5900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2184 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 5906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2185 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 5912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2186 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 5918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2189 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5928 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2194 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 5938 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2201 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 5948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2206 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 5958 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2213 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 5964 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2214 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 5970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2217 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Default; }
#line 5976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2218 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Access; }
#line 5982 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2219 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Change; }
#line 5988 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2220 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Modification; }
#line 5994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2223 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-7].number);
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 6006 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2230 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-3].number);
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 6017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2238 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2239 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 6029 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2240 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 6035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2241 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 6041 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2242 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 6047 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2243 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2244 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 6059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2245 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 6065 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2248 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2249 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2250 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2251 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6089 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2252 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6095 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2253 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 6101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2256 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2257 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2258 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2260 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6125 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2261 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2263 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 6139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2266 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 6147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2269 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2277 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6166 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2280 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2284 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2287 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 6190 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2290 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 6198 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2293 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 6206 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2296 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6214 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2301 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 6228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2312 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 6242 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2323 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2333 "src/p.y" /* yacc.c:1646  */
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
#line 6270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2346 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6280 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2351 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6290 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2359 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2364 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6310 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2371 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6318 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2374 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2377 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6334 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2380 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2385 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6351 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2390 "src/p.y" /* yacc.c:1646  */
    {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2396 "src/p.y" /* yacc.c:1646  */
    {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 6372 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2402 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6378 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2403 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2404 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6390 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2407 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6402 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2414 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6414 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2421 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6426 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2428 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6438 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2437 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6452 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2446 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2453 "src/p.y" /* yacc.c:1646  */
    {
                        if (! filesystem_usage(current))
                                yyerror2("Cannot read usage of filesystem %s", current->path);
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (long long)((double)(yyvsp[-5].real) / (double)current->inf.filesystem->f_bsize * (double)(yyvsp[-4].number));
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6478 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2462 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2471 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6502 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2478 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2487 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2494 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2503 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2510 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2519 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 6571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2525 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2526 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2527 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2528 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6595 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2529 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2532 "src/p.y" /* yacc.c:1646  */
    {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 6611 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2537 "src/p.y" /* yacc.c:1646  */
    {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 6621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2544 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6634 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 2552 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6646 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 2559 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 2567 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6671 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 2575 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 2582 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 2588 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6706 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 2595 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6717 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 2603 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = false;
                  }
#line 6725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 2606 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = true;
                  }
#line 6733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 2612 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 6744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 2618 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 6754 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 2625 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6765 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 2631 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 2638 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 2644 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 6796 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 2651 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6807 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 2657 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 6817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 2664 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 6826 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 2670 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 6835 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 2675 "src/p.y" /* yacc.c:1646  */
    {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 6846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 2683 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 2691 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6872 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 2699 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 6885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 2707 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6898 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 2715 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6911 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 2723 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 6924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 2733 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6937 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 2741 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6950 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 2749 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 6963 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 2757 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 2765 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 6989 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 2773 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7002 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 2783 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 7008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 2786 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 7014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 2787 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 7020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 2788 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 7026 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 7030 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2791 "src/p.y" /* yacc.c:1906  */



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

