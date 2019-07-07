/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

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
static struct Uid_T uidset = {};
static struct Gid_T gidset = {};
static struct Pid_T pidset = {};
static struct Pid_T ppidset = {};
static struct FsFlag_T fsflagset = {};
static struct NonExist_T nonexistset = {};
static struct Exist_T existset = {};
static struct Status_T statusset = {};
static struct Perm_T permset = {};
static struct Size_T sizeset = {};
static struct Uptime_T uptimeset = {};
static struct LinkStatus_T linkstatusset = {};
static struct LinkSpeed_T linkspeedset = {};
static struct LinkSaturation_T linksaturationset = {};
static struct Bandwidth_T bandwidthset = {};
static struct Match_T matchset = {};
static struct Icmp_T icmpset = {};
static struct Mail_T mailset = {};
static struct SslOptions_T sslset = {};
static struct Port_T portset = {};
static struct MailServer_T mailserverset = {};
static struct Mmonit_T mmonitset = {};
static struct FileSystem_T filesystemset = {};
static struct Resource_T resourceset = {};
static struct Checksum_T checksumset = {};
static struct Timestamp_T timestampset = {};
static struct ActionRate_T actionrateset = {};
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

static void  preparse(void);
static void  postparse(void);
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
static void  reset_sslset(void);
static void  reset_mailset(void);
static void  reset_mailserverset(void);
static void  reset_mmonitset(void);
static void  reset_portset(void);
static void  reset_resourceset(void);
static void  reset_timestampset(void);
static void  reset_actionrateset(void);
static void  reset_sizeset(void);
static void  reset_uptimeset(void);
static void  reset_pidset(void);
static void  reset_ppidset(void);
static void  reset_fsflagset(void);
static void  reset_nonexistset(void);
static void  reset_existset(void);
static void  reset_linkstatusset(void);
static void  reset_linkspeedset(void);
static void  reset_linksaturationset(void);
static void  reset_bandwidthset(void);
static void  reset_checksumset(void);
static void  reset_permset(void);
static void  reset_uidset(void);
static void  reset_gidset(void);
static void  reset_statusset(void);
static void  reset_filesystemset(void);
static void  reset_icmpset(void);
static void  reset_rateset(struct rate_t *);
static void  check_name(char *);
static int   check_perm(int);
static void  check_exec(char *);
static int   cleanup_hash_string(char *);
static void  check_depend(void);
static void  setsyslog(char *);
static command_t copycommand(command_t);
static int verifyMaxForward(int);
static void _setPEM(char **store, char *path, const char *description, boolean_t isFile);
static void _setSSLOptions(SslOptions_T options);
static void addsecurityattribute(char *, Action_Type, Action_Type);


#line 350 "src/y.tab.c" /* yacc.c:339  */

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
    MQTT = 368,
    SSH = 369,
    DWP = 370,
    LDAP2 = 371,
    LDAP3 = 372,
    RDATE = 373,
    RSYNC = 374,
    TNS = 375,
    PGSQL = 376,
    POSTFIXPOLICY = 377,
    SIP = 378,
    LMTP = 379,
    GPS = 380,
    RADIUS = 381,
    MEMCACHE = 382,
    REDIS = 383,
    MONGODB = 384,
    SIEVE = 385,
    SPAMASSASSIN = 386,
    FAIL2BAN = 387,
    STRING = 388,
    PATH = 389,
    MAILADDR = 390,
    MAILFROM = 391,
    MAILREPLYTO = 392,
    MAILSUBJECT = 393,
    MAILBODY = 394,
    SERVICENAME = 395,
    STRINGNAME = 396,
    NUMBER = 397,
    PERCENT = 398,
    LOGLIMIT = 399,
    CLOSELIMIT = 400,
    DNSLIMIT = 401,
    KEEPALIVELIMIT = 402,
    REPLYLIMIT = 403,
    REQUESTLIMIT = 404,
    STARTLIMIT = 405,
    WAITLIMIT = 406,
    GRACEFULLIMIT = 407,
    CLEANUPLIMIT = 408,
    REAL = 409,
    CHECKPROC = 410,
    CHECKFILESYS = 411,
    CHECKFILE = 412,
    CHECKDIR = 413,
    CHECKHOST = 414,
    CHECKSYSTEM = 415,
    CHECKFIFO = 416,
    CHECKPROGRAM = 417,
    CHECKNET = 418,
    THREADS = 419,
    CHILDREN = 420,
    METHOD = 421,
    GET = 422,
    HEAD = 423,
    STATUS = 424,
    ORIGIN = 425,
    VERSIONOPT = 426,
    READ = 427,
    WRITE = 428,
    OPERATION = 429,
    SERVICETIME = 430,
    DISK = 431,
    RESOURCE = 432,
    MEMORY = 433,
    TOTALMEMORY = 434,
    LOADAVG1 = 435,
    LOADAVG5 = 436,
    LOADAVG15 = 437,
    SWAP = 438,
    MODE = 439,
    ACTIVE = 440,
    PASSIVE = 441,
    MANUAL = 442,
    ONREBOOT = 443,
    NOSTART = 444,
    LASTSTATE = 445,
    CORE = 446,
    CPU = 447,
    TOTALCPU = 448,
    CPUUSER = 449,
    CPUSYSTEM = 450,
    CPUWAIT = 451,
    GROUP = 452,
    REQUEST = 453,
    DEPENDS = 454,
    BASEDIR = 455,
    SLOT = 456,
    EVENTQUEUE = 457,
    SECRET = 458,
    HOSTHEADER = 459,
    UID = 460,
    EUID = 461,
    GID = 462,
    MMONIT = 463,
    INSTANCE = 464,
    USERNAME = 465,
    PASSWORD = 466,
    TIME = 467,
    ATIME = 468,
    CTIME = 469,
    MTIME = 470,
    CHANGED = 471,
    MILLISECOND = 472,
    SECOND = 473,
    MINUTE = 474,
    HOUR = 475,
    DAY = 476,
    MONTH = 477,
    SSLAUTO = 478,
    SSLV2 = 479,
    SSLV3 = 480,
    TLSV1 = 481,
    TLSV11 = 482,
    TLSV12 = 483,
    TLSV13 = 484,
    CERTMD5 = 485,
    AUTO = 486,
    BYTE = 487,
    KILOBYTE = 488,
    MEGABYTE = 489,
    GIGABYTE = 490,
    INODE = 491,
    SPACE = 492,
    TFREE = 493,
    PERMISSION = 494,
    SIZE = 495,
    MATCH = 496,
    NOT = 497,
    IGNORE = 498,
    ACTION = 499,
    UPTIME = 500,
    EXEC = 501,
    UNMONITOR = 502,
    PING = 503,
    PING4 = 504,
    PING6 = 505,
    ICMP = 506,
    ICMPECHO = 507,
    NONEXIST = 508,
    EXIST = 509,
    INVALID = 510,
    DATA = 511,
    RECOVERED = 512,
    PASSED = 513,
    SUCCEEDED = 514,
    URL = 515,
    CONTENT = 516,
    PID = 517,
    PPID = 518,
    FSFLAG = 519,
    REGISTER = 520,
    CREDENTIALS = 521,
    URLOBJECT = 522,
    ADDRESSOBJECT = 523,
    TARGET = 524,
    TIMESPEC = 525,
    HTTPHEADER = 526,
    MAXFORWARD = 527,
    FIPS = 528,
    SECURITY = 529,
    ATTRIBUTE = 530,
    GREATER = 531,
    GREATEROREQUAL = 532,
    LESS = 533,
    LESSOREQUAL = 534,
    EQUAL = 535,
    NOTEQUAL = 536
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
#define MQTT 368
#define SSH 369
#define DWP 370
#define LDAP2 371
#define LDAP3 372
#define RDATE 373
#define RSYNC 374
#define TNS 375
#define PGSQL 376
#define POSTFIXPOLICY 377
#define SIP 378
#define LMTP 379
#define GPS 380
#define RADIUS 381
#define MEMCACHE 382
#define REDIS 383
#define MONGODB 384
#define SIEVE 385
#define SPAMASSASSIN 386
#define FAIL2BAN 387
#define STRING 388
#define PATH 389
#define MAILADDR 390
#define MAILFROM 391
#define MAILREPLYTO 392
#define MAILSUBJECT 393
#define MAILBODY 394
#define SERVICENAME 395
#define STRINGNAME 396
#define NUMBER 397
#define PERCENT 398
#define LOGLIMIT 399
#define CLOSELIMIT 400
#define DNSLIMIT 401
#define KEEPALIVELIMIT 402
#define REPLYLIMIT 403
#define REQUESTLIMIT 404
#define STARTLIMIT 405
#define WAITLIMIT 406
#define GRACEFULLIMIT 407
#define CLEANUPLIMIT 408
#define REAL 409
#define CHECKPROC 410
#define CHECKFILESYS 411
#define CHECKFILE 412
#define CHECKDIR 413
#define CHECKHOST 414
#define CHECKSYSTEM 415
#define CHECKFIFO 416
#define CHECKPROGRAM 417
#define CHECKNET 418
#define THREADS 419
#define CHILDREN 420
#define METHOD 421
#define GET 422
#define HEAD 423
#define STATUS 424
#define ORIGIN 425
#define VERSIONOPT 426
#define READ 427
#define WRITE 428
#define OPERATION 429
#define SERVICETIME 430
#define DISK 431
#define RESOURCE 432
#define MEMORY 433
#define TOTALMEMORY 434
#define LOADAVG1 435
#define LOADAVG5 436
#define LOADAVG15 437
#define SWAP 438
#define MODE 439
#define ACTIVE 440
#define PASSIVE 441
#define MANUAL 442
#define ONREBOOT 443
#define NOSTART 444
#define LASTSTATE 445
#define CORE 446
#define CPU 447
#define TOTALCPU 448
#define CPUUSER 449
#define CPUSYSTEM 450
#define CPUWAIT 451
#define GROUP 452
#define REQUEST 453
#define DEPENDS 454
#define BASEDIR 455
#define SLOT 456
#define EVENTQUEUE 457
#define SECRET 458
#define HOSTHEADER 459
#define UID 460
#define EUID 461
#define GID 462
#define MMONIT 463
#define INSTANCE 464
#define USERNAME 465
#define PASSWORD 466
#define TIME 467
#define ATIME 468
#define CTIME 469
#define MTIME 470
#define CHANGED 471
#define MILLISECOND 472
#define SECOND 473
#define MINUTE 474
#define HOUR 475
#define DAY 476
#define MONTH 477
#define SSLAUTO 478
#define SSLV2 479
#define SSLV3 480
#define TLSV1 481
#define TLSV11 482
#define TLSV12 483
#define TLSV13 484
#define CERTMD5 485
#define AUTO 486
#define BYTE 487
#define KILOBYTE 488
#define MEGABYTE 489
#define GIGABYTE 490
#define INODE 491
#define SPACE 492
#define TFREE 493
#define PERMISSION 494
#define SIZE 495
#define MATCH 496
#define NOT 497
#define IGNORE 498
#define ACTION 499
#define UPTIME 500
#define EXEC 501
#define UNMONITOR 502
#define PING 503
#define PING4 504
#define PING6 505
#define ICMP 506
#define ICMPECHO 507
#define NONEXIST 508
#define EXIST 509
#define INVALID 510
#define DATA 511
#define RECOVERED 512
#define PASSED 513
#define SUCCEEDED 514
#define URL 515
#define CONTENT 516
#define PID 517
#define PPID 518
#define FSFLAG 519
#define REGISTER 520
#define CREDENTIALS 521
#define URLOBJECT 522
#define ADDRESSOBJECT 523
#define TARGET 524
#define TIMESPEC 525
#define HTTPHEADER 526
#define MAXFORWARD 527
#define FIPS 528
#define SECURITY 529
#define ATTRIBUTE 530
#define GREATER 531
#define GREATEROREQUAL 532
#define LESS 533
#define LESSOREQUAL 534
#define EQUAL 535
#define NOTEQUAL 536

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 310 "src/p.y" /* yacc.c:355  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 960 "src/y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 977 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  288
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  241
/* YYNRULES -- Number of rules.  */
#define YYNRULES  783
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1460

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   536

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
       2,     2,     2,     2,     2,     2,     2,     2,   284,     2,
       2,     2,     2,     2,   285,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   286,     2,   287,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   282,     2,   283,     2,     2,     2,     2,
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
     275,   276,   277,   278,   279,   280,   281
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   361,   361,   362,   365,   366,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   398,   399,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   426,   427,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   450,   451,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   476,
     477,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   497,   498,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   516,   517,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   537,   538,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   555,   556,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   576,
     577,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   593,   597,   600,   606,   616,   621,   624,   629,
     634,   637,   640,   645,   651,   654,   655,   658,   661,   664,
     667,   670,   673,   676,   679,   682,   685,   688,   691,   694,
     697,   702,   707,   715,   718,   723,   726,   730,   736,   741,
     746,   754,   757,   758,   761,   767,   768,   771,   774,   775,
     776,   777,   780,   781,   786,   791,   794,   797,   798,   801,
     805,   809,   813,   817,   820,   824,   827,   830,   833,   838,
     844,   845,   848,   862,   869,   878,   879,   882,   886,   890,
     894,   902,   910,   919,   923,   929,   938,   945,   960,   961,
     964,   973,   984,   985,   988,   991,   994,   995,   996,   997,
    1000,  1017,  1018,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1033,  1039,  1045,  1051,  1057,  1063,  1064,  1067,
    1072,  1077,  1081,  1085,  1091,  1092,  1095,  1096,  1099,  1102,
    1107,  1112,  1115,  1123,  1127,  1131,  1135,  1139,  1139,  1146,
    1146,  1153,  1153,  1160,  1160,  1167,  1174,  1175,  1178,  1184,
    1187,  1192,  1195,  1198,  1205,  1214,  1219,  1222,  1227,  1232,
    1237,  1245,  1251,  1266,  1271,  1279,  1289,  1292,  1297,  1300,
    1306,  1309,  1314,  1315,  1318,  1319,  1322,  1325,  1330,  1334,
    1338,  1341,  1346,  1349,  1354,  1359,  1362,  1367,  1376,  1377,
    1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,
    1390,  1393,  1400,  1401,  1404,  1405,  1406,  1407,  1408,  1409,
    1412,  1418,  1419,  1422,  1423,  1424,  1425,  1426,  1429,  1435,
    1440,  1445,  1452,  1453,  1456,  1457,  1458,  1459,  1462,  1465,
    1470,  1475,  1481,  1484,  1489,  1492,  1496,  1501,  1502,  1505,
    1506,  1509,  1514,  1517,  1520,  1523,  1526,  1529,  1532,  1535,
    1540,  1543,  1548,  1551,  1554,  1557,  1560,  1563,  1566,  1569,
    1572,  1576,  1579,  1582,  1587,  1590,  1593,  1598,  1601,  1604,
    1607,  1610,  1613,  1616,  1619,  1622,  1625,  1628,  1631,  1636,
    1644,  1654,  1655,  1658,  1661,  1664,  1667,  1672,  1673,  1676,
    1679,  1684,  1685,  1688,  1691,  1696,  1697,  1700,  1708,  1713,
    1716,  1721,  1726,  1727,  1730,  1733,  1738,  1739,  1742,  1745,
    1748,  1749,  1750,  1751,  1752,  1753,  1756,  1766,  1769,  1774,
    1778,  1784,  1789,  1795,  1796,  1801,  1806,  1807,  1810,  1815,
    1816,  1819,  1822,  1825,  1828,  1832,  1836,  1840,  1844,  1848,
    1852,  1856,  1860,  1864,  1870,  1874,  1881,  1887,  1893,  1900,
    1905,  1915,  1920,  1925,  1928,  1933,  1936,  1941,  1944,  1949,
    1952,  1957,  1960,  1965,  1970,  1975,  1981,  1989,  1995,  1996,
    1999,  2003,  2006,  2010,  2015,  2018,  2021,  2022,  2025,  2026,
    2027,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,
    2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,  2057,  2058,
    2061,  2062,  2065,  2066,  2067,  2068,  2071,  2075,  2079,  2085,
    2088,  2091,  2097,  2100,  2104,  2109,  2116,  2119,  2120,  2123,
    2126,  2133,  2142,  2148,  2149,  2152,  2153,  2154,  2155,  2156,
    2157,  2158,  2161,  2167,  2168,  2171,  2172,  2173,  2174,  2177,
    2182,  2189,  2196,  2197,  2198,  2199,  2202,  2207,  2214,  2219,
    2224,  2229,  2236,  2241,  2248,  2255,  2262,  2282,  2283,  2284,
    2287,  2288,  2292,  2297,  2304,  2309,  2316,  2317,  2320,  2321,
    2322,  2323,  2326,  2333,  2341,  2342,  2343,  2344,  2345,  2346,
    2347,  2348,  2351,  2352,  2353,  2354,  2355,  2356,  2359,  2360,
    2361,  2363,  2364,  2366,  2369,  2372,  2380,  2383,  2386,  2390,
    2393,  2396,  2399,  2404,  2415,  2426,  2436,  2448,  2449,  2454,
    2461,  2462,  2467,  2474,  2477,  2480,  2483,  2488,  2492,  2499,
    2505,  2506,  2507,  2510,  2517,  2524,  2531,  2540,  2547,  2554,
    2561,  2570,  2577,  2586,  2593,  2602,  2609,  2618,  2624,  2625,
    2626,  2627,  2628,  2631,  2636,  2643,  2651,  2658,  2666,  2674,
    2681,  2687,  2694,  2702,  2705,  2711,  2717,  2724,  2730,  2737,
    2743,  2750,  2753,  2758,  2764,  2771,  2777,  2782,  2790,  2798,
    2806,  2814,  2822,  2830,  2840,  2848,  2856,  2864,  2872,  2880,
    2890,  2893,  2894,  2895
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
  "CLAMAV", "NNTP", "NTP3", "MYSQL", "DNS", "WEBSOCKET", "MQTT", "SSH",
  "DWP", "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL",
  "POSTFIXPOLICY", "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "REDIS",
  "MONGODB", "SIEVE", "SPAMASSASSIN", "FAIL2BAN", "STRING", "PATH",
  "MAILADDR", "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY",
  "SERVICENAME", "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT",
  "CLOSELIMIT", "DNSLIMIT", "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT",
  "STARTLIMIT", "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL",
  "CHECKPROC", "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST",
  "CHECKSYSTEM", "CHECKFIFO", "CHECKPROGRAM", "CHECKNET", "THREADS",
  "CHILDREN", "METHOD", "GET", "HEAD", "STATUS", "ORIGIN", "VERSIONOPT",
  "READ", "WRITE", "OPERATION", "SERVICETIME", "DISK", "RESOURCE",
  "MEMORY", "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP",
  "MODE", "ACTIVE", "PASSIVE", "MANUAL", "ONREBOOT", "NOSTART",
  "LASTSTATE", "CORE", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM",
  "CPUWAIT", "GROUP", "REQUEST", "DEPENDS", "BASEDIR", "SLOT",
  "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID", "GID", "MMONIT",
  "INSTANCE", "USERNAME", "PASSWORD", "TIME", "ATIME", "CTIME", "MTIME",
  "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "TLSV13",
  "CERTMD5", "AUTO", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE",
  "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT", "IGNORE",
  "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4", "PING6",
  "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "ADDRESSOBJECT", "TARGET",
  "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "SECURITY", "ATTRIBUTE",
  "GREATER", "GREATEROREQUAL", "LESS", "LESSOREQUAL", "EQUAL", "NOTEQUAL",
  "'{'", "'}'", "':'", "'@'", "'['", "']'", "$accept", "cfgfile",
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
  "httpdsocketoptionlist", "httpdsocketoption", "sigenable", "sigdisable",
  "signature", "bindaddress", "allow", "$@1", "$@2", "$@3", "$@4",
  "allowuserlist", "allowuser", "readonly", "checkproc", "checkfile",
  "checkfilesys", "checkdir", "checkhost", "checknet", "checksystem",
  "checkfifo", "checkprogram", "start", "stop", "restart", "argumentlist",
  "useroptionlist", "argument", "useroption", "username", "password",
  "hostname", "connection", "connectionoptlist", "connectionopt",
  "connectionurl", "connectionurloptlist", "connectionurlopt",
  "connectionunix", "connectionuxoptlist", "connectionuxopt", "icmp",
  "icmpoptlist", "icmpopt", "host", "port", "unixsocket", "ip", "type",
  "typeoptlist", "typeopt", "outgoing", "protocol", "sendexpect",
  "websocketlist", "websocket", "smtplist", "smtp", "mqttlist", "mqtt",
  "mysqllist", "mysql", "target", "maxforward", "siplist", "sip",
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
  "resourceload", "resourceloadavg", "coremultiplier", "resourceread",
  "resourcewrite", "value", "timestamptype", "timestamp", "operator",
  "time", "totaltime", "currenttime", "repeat", "action", "action1",
  "action2", "rateXcycles", "rateXYcycles", "rate1", "rate2", "recovery",
  "checksum", "hashtype", "inode", "space", "read", "write", "servicetime",
  "fsflag", "unit", "permission", "match", "matchflagnot", "size", "uid",
  "euid", "secattr", "gid", "linkstatus", "linkspeed", "linksaturation",
  "upload", "download", "icmptype", "reminder", YY_NULLPTR
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
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   123,   125,    58,    64,    91,    93
};
# endif

#define YYPACT_NINF -751

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-751)))

#define YYTABLE_NINF -708

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     542,    82,   -61,   -20,    44,   107,   120,   126,   138,   143,
     184,   365,   542,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,   111,   -39,    91,  -751,  -751,   291,    86,   251,   268,
     136,   302,   334,   336,   200,   103,  -151,   238,  -751,   -41,
      46,   437,   452,   460,   519,  -751,   506,   512,   142,  -751,
    -751,   553,   398,  1168,  1187,  1346,  1351,  1363,  1187,  1379,
     529,  -751,   518,   517,   -12,  -751,   991,  -751,  -751,  -751,
    -751,  -751,   490,  -751,  -751,   706,  -751,  -751,  -751,   420,
     461,  -751,   238,   345,   331,   358,  1152,   603,   524,   528,
      15,   427,   533,   535,   545,   562,   465,   554,   580,   249,
     465,   465,   585,   465,   -81,   468,   464,   186,   590,   611,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,   -30,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,   106,   -78,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,   153,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,   167,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,    37,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
      34,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,   776,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,   -56,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
     642,   757,  -751,   636,   250,   654,  -751,   732,     3,   681,
     685,   734,   736,   539,   693,  -751,   705,   722,   595,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,    11,   170,  -751,  -751,  -751,  -751,  -751,   586,   593,
    -751,  -751,    -7,  -751,   667,  -751,   405,   345,   600,  -751,
     706,  1152,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,   831,  -751,   728,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,   410,  -751,
    -751,  -751,    22,   793,   753,   753,   471,   753,   753,  -751,
    -751,  -751,   753,   753,   419,   645,   753,   761,  1135,  -751,
    -751,  -751,  -751,  -751,  -751,   738,  -751,  -751,   447,   450,
    -751,   478,   870,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,   611,  -751,   649,  1152,   603,    92,  -751,
    -751,  -751,  -751,   351,   753,   645,   409,   753,   686,  -751,
     409,   704,    84,   753,   753,   753,  -146,   852,   924,   625,
     -40,   903,   753,   753,   753,   658,   915,   753,   753,  -751,
    -751,  -751,  -751,  1113,  -751,  -751,   753,  -751,  -751,  -751,
     753,   806,  -751,   837,  -751,   888,   378,   856,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,   871,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,   788,   877,  -751,   890,   901,   905,
     758,   908,   911,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,   766,   768,   770,   772,   777,   785,   790,
     794,  -751,  -751,   799,   804,   805,   807,   812,   823,   828,
     834,   853,  -751,  -751,  -751,  -751,  -751,  -751,   895,   918,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,   383,   904,   985,
    -751,  1084,   999,    20,    52,     8,  -751,  -751,  -751,  1009,
    1011,    62,   284,   375,   880,   876,  1076,  -751,  1012,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  1014,  1019,   753,   753,
     158,   158,   158,   158,   761,   761,   761,  1021,    14,  -751,
    -751,  1148,  -751,  1164,  -751,   753,  1030,    67,  -751,  1033,
     110,  -751,  1035,   187,  -751,  -751,  -751,  1152,   969,  -751,
    -751,  -751,  1037,  1087,   761,   761,   761,  1089,  1041,  -751,
    -751,   609,  1042,   612,   634,   652,   261,   278,   301,   761,
     753,   310,   753,   158,  -751,  -751,  -751,  1106,   761,  1044,
    1046,  1047,   753,   753,   761,   158,   158,  -751,  1186,   158,
    1051,   761,  -751,   250,     6,  -751,  -751,  -751,  -751,  -751,
    -751,  1073,  1074,  1077,  1078,  1079,  1196,    71,   199,  1083,
    1085,  1092,   802,   824,  1093,  1094,   874,  1095,  1096,  1099,
    1101,  1102,  1104,  1105,  1108,  1109,  -751,  1001,  -751,   985,
     603,  -751,  1003,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,   761,   761,   761,   761,   761,   761,  -751,   696,  1114,
    -751,   883,  1174,  -751,  -751,   312,   343,  -751,  -751,   373,
     483,  1091,  1118,  1230,  1243,  1269,   720,  -751,  1220,    83,
      83,   158,  1058,  -751,  1060,  -751,  1062,  -751,  1080,   985,
     761,     0,  1278,  1279,  1281,   761,   490,   761,   761,   720,
     761,   761,  -751,  -751,  -751,  -751,  1116,   490,  1123,   490,
    1071,  1086,  1293,   347,    65,  1158,   158,   494,    35,    35,
      35,  1050,  -751,  1298,  1163,   105,   124,  1170,  1176,  1305,
     571,   578,    83,  1179,   761,  1318,  1052,  1052,  -751,  1197,
    1079,  1079,  1079,  1196,  -751,  1079,  -751,  -751,  -751,  -751,
     385,   413,  1195,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,   490,   490,   490,   490,   665,   679,
     688,   692,   702,  -751,   603,  -751,  -751,  1333,  1334,  1335,
    1340,  1341,  1342,    -3,   761,   761,  -751,   190,  1215,  1217,
     778,  1542,  1209,  1211,  -751,  -751,  -751,  -751,  -751,  -751,
    1350,  1353,  1188,   490,  1194,   490,  -751,  -751,  -751,  -751,
    -751,  -751,    83,    83,    83,  -751,  -751,  -751,  -751,  -751,
     761,  -751,  -751,  -751,  -751,  -751,   465,  -751,  -751,  1356,
    1356,  -751,  -751,  -751,  -751,   985,   603,  1364,  1237,  1367,
      83,    83,    83,  1368,   761,  1369,  1371,   761,  1372,  1373,
     761,  1161,   761,  1161,   761,   761,    83,    65,  1238,  1375,
     761,   601,   761,   761,  1250,  1245,  1246,  1247,  -751,  -751,
    -751,  -751,  -751,  1380,  1385,  1388,  -751,    35,    83,   761,
    1161,  1161,  1161,  1161,   164,   224,    83,  -751,  -751,  -751,
    -751,  1356,  -751,  1389,    83,  1262,  1266,  -751,  1079,  1079,
    1079,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,    83,    83,    83,    83,    83,    83,    42,
     409,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  1395,  1396,
    1397,  1271,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  1404,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,   742,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,     1,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  1193,
    -751,    83,    55,  -751,  1161,  -751,  1161,  -751,  -751,  1356,
    1405,   329,  1409,  -751,  -751,   603,  -751,    83,   761,    83,
    1356,  -751,  -751,    83,  1414,    83,    83,  1415,    83,    83,
    1416,  -751,   761,  1419,   761,  1420,  1421,  -751,  1422,   761,
      83,  1423,   761,   761,  1424,  1425,  -751,  -751,  1221,  -751,
      83,    83,    83,  1428,  1356,  1437,   761,   761,   761,   761,
     191,   203,   356,   400,  1356,  -751,    83,  -751,  -751,  -751,
    1356,  1356,  1356,  1356,  1356,  1356,  1171,  1311,    83,    83,
      83,  -751,    83,  1252,   -60,   -60,  1322,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,  -751,  -751,   742,
    -751,   712,   712,   712,  1326,  1327,  1319,  1328,     1,  -751,
     712,    72,  1260,  -751,  1356,  -751,  -751,  -751,  -751,  -751,
      83,  1374,   -27,  -751,   676,  -751,  1356,  1461,  1356,  -751,
    -751,    83,  -751,  -751,    83,  -751,  -751,    83,  1462,    83,
    1464,    83,    83,    83,  1465,  1356,    83,  1467,  1487,    83,
      83,  -751,  1356,  1356,  1356,    83,  -751,    83,  1488,  1489,
    1490,  1491,   744,  -751,  -751,  -751,   761,   744,   761,   744,
     761,   744,   761,  -751,  1356,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  1358,  -751,  1356,  1356,  1356,  1356,  -751,  -751,
    -751,  1370,   749,   753,   827,  1381,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  1359,  1376,  1377,  1387,
    1390,  1391,  1394,  1398,  1399,  1400,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,   481,  1402,  -751,  -751,  -751,  1382,  -751,  -751,  -751,
    1356,    19,  -751,   761,   761,   761,  -751,    83,  -751,  1356,
    1356,  1356,    83,  1356,    83,  1356,  1356,  1356,    83,  -751,
    1356,    83,    83,  1356,  1356,  -751,  -751,  -751,  1356,  1356,
      83,    83,    83,    83,   761,  1508,   761,  1526,   761,  1532,
     761,  1533,  -751,  1325,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  1407,  -751,  -751,  -751,    40,  1418,  1434,  1436,  1438,
    1439,  1440,  1441,  1442,  1453,  1454,  -751,  -751,  -751,  -751,
    -751,  -751,  1509,  -751,  -751,  1560,  1561,  1575,  1356,  -751,
    -751,  -751,  1356,  -751,  1356,  -751,  -751,  -751,  1356,  -751,
    1356,  1356,  -751,  -751,  -751,  -751,  1356,  1356,  1356,  1356,
    1593,    83,  1594,    83,  1595,    83,  1596,    83,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,    83,    83,    83,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,    83,  1356,    83,  1356,
      83,  1356,    83,  1356,  -751,  -751,  -751,  -751,  1356,  -751,
    1356,  -751,  1356,  -751,  1356,  -751,  -751,  -751,  -751,  -751
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    22,    19,
      21,    23,    10,    11,    17,    18,    16,    12,     7,    13,
      14,    15,    33,    57,    77,    99,   116,   131,   148,   162,
     179,     0,     0,     0,   291,   199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   598,
       0,     0,     0,     0,     0,   352,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     223,   222,   197,   282,   551,   278,   290,   196,   247,   228,
     229,   205,   738,   230,   564,     0,   200,   201,   202,     0,
       0,   235,   231,   242,     0,     0,     0,   781,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    46,    47,    48,    38,    39,    40,
      45,    49,    50,   598,   563,    51,    52,    53,    54,    55,
      56,    41,    42,    43,    44,   753,   753,    58,    59,    60,
      61,    62,    64,    66,    65,    73,    74,    75,    76,    63,
      70,    67,    72,    71,    68,    69,     0,    78,    79,    80,
      81,    82,    83,    85,    84,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    86,    87,    88,     0,   100,
     101,   102,   103,   104,   106,   108,   107,   112,   113,   114,
     115,   105,   109,   110,   111,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,   132,   133,   134,   135,   141,   145,   142,   143,   144,
     146,   147,   136,   137,   138,   139,   140,     0,   149,   150,
     151,   152,   161,   153,   154,   155,   156,   157,   158,   159,
     160,   163,   164,   165,   166,   167,   169,   171,   170,   175,
     176,   177,   178,   168,   172,   173,   174,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
       0,     0,   195,     0,   280,     0,   279,   375,     0,     0,
       0,     0,     0,   245,     0,   304,     0,     0,     0,   293,
     292,   294,   295,   296,   300,   301,   318,   319,   297,   298,
     299,     0,     0,   739,   740,   741,   742,   203,     0,     0,
     604,   605,     0,   600,   225,   227,   234,   242,     0,   232,
       0,     0,   582,   569,   570,   584,   585,   592,   590,   572,
     594,   571,   593,   589,   596,   578,   580,   595,   586,   591,
     568,   597,   575,   579,   583,   576,   581,   574,   573,   587,
     588,   577,     0,   566,     0,   192,   341,   342,   343,   344,
     347,   346,   345,   348,   349,   353,   366,   367,   549,   362,
     350,   351,   418,     0,   674,   674,     0,   674,   674,   657,
     658,   659,   674,   674,     0,     0,   674,   707,   707,   623,
     625,   626,   627,   628,   629,   660,   630,   631,   545,   543,
     565,   547,     0,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   619,   616,   617,     0,     0,   781,   720,   668,
     669,   670,   671,   720,   674,   754,     0,   674,     0,   754,
       0,     0,     0,   674,   674,   674,     0,   674,   674,     0,
     418,     0,   674,   674,   674,     0,     0,   674,   674,   645,
     642,   643,   644,   707,   633,   638,   674,   636,   637,   635,
     674,     0,   224,     0,   282,     0,     0,     0,   273,   267,
     268,   269,   270,   271,   272,     0,   274,   286,   287,   288,
     289,   283,   284,   285,     0,     0,   276,     0,     0,     0,
     335,   323,     0,   320,   302,   315,   317,   247,   303,   305,
     307,   314,   316,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   206,   602,   603,   277,   601,     0,     0,
     236,   238,   239,   240,   241,   233,   243,     0,     0,   598,
     567,   782,     0,     0,     0,   549,   363,   364,   354,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,   681,
     675,   676,   677,   678,   679,   680,     0,     0,   674,   674,
       0,     0,     0,     0,   707,   707,   707,     0,     0,   708,
     709,     0,   624,     0,   661,   674,     0,   545,   356,     0,
     543,   358,     0,   547,   360,   606,   618,     0,     0,   560,
     721,   722,     0,     0,   707,   707,   707,     0,     0,   558,
     559,     0,     0,     0,     0,     0,     0,     0,     0,   707,
     674,     0,   674,     0,   412,   412,   412,     0,   707,     0,
       0,     0,   674,   674,   707,     0,     0,   634,     0,     0,
       0,   707,   198,   281,   265,   373,   372,   374,   275,   552,
     376,   324,   325,   326,     0,     0,   339,     0,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,   599,   598,
     781,   783,     0,   368,   370,   369,   371,   365,   355,   419,
     421,   707,   707,   707,   707,   707,   707,   392,     0,     0,
     378,   707,     0,   654,   655,     0,     0,   667,   666,   738,
     738,     0,     0,     0,     0,     0,   682,   705,     0,     0,
       0,     0,     0,   357,     0,   359,     0,   361,     0,   598,
     707,   707,     0,     0,     0,   707,   738,   707,   707,   682,
     707,   707,   748,   747,   752,   751,   667,   738,   667,   738,
     667,     0,     0,     0,   667,     0,     0,   738,   707,   707,
     707,     0,   412,     0,     0,   738,   738,     0,     0,     0,
     738,   738,     0,     0,   707,     0,   265,   265,   266,     0,
       0,     0,     0,   339,   338,   328,   336,   340,   322,   246,
       0,     0,     0,   308,   255,   254,   256,   251,   252,   249,
     250,   257,   258,   253,   738,   738,   738,   738,     0,     0,
       0,     0,     0,   237,   781,   193,   550,     0,     0,     0,
       0,     0,     0,   707,   707,   707,   420,   707,     0,     0,
       0,     0,     0,     0,   402,   403,   404,   405,   406,   407,
       0,     0,   667,   738,   667,   738,   649,   648,   651,   650,
     639,   640,     0,     0,     0,   683,   684,   685,   686,   687,
     707,   706,   700,   701,   696,   699,     0,   702,   703,   713,
     713,   656,   546,   544,   548,   598,   781,     0,     0,     0,
       0,     0,     0,     0,   707,     0,     0,   707,     0,     0,
     707,   691,   707,   691,   707,   707,     0,   667,     0,     0,
     707,   738,   707,   707,     0,     0,     0,     0,   413,   414,
     415,   416,   417,     0,     0,     0,   780,   707,     0,   707,
     691,   691,   691,   691,   738,   738,     0,   647,   646,   653,
     652,   713,   641,     0,     0,     0,     0,   262,   330,   332,
     334,   321,   337,   309,   311,   310,   312,   313,   207,   208,
     209,   210,   211,   212,   213,   214,   217,   218,   215,   216,
     219,   220,   194,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   399,   398,   393,   395,   396,   394,     0,     0,
       0,     0,   422,   423,   388,   390,   389,   379,   380,   381,
     386,   382,   383,   385,   387,   384,     0,   469,   470,   426,
     424,   427,   433,   496,   496,     0,   437,   477,   477,   452,
     453,   440,   441,   442,   449,   450,   485,   434,     0,   481,
     458,   435,   443,   444,   459,   461,   462,   463,   451,   492,
     464,   465,   516,   467,   460,   445,   454,   457,   436,     0,
     554,     0,     0,   663,   691,   665,   691,   536,   537,   713,
       0,   693,     0,   535,   622,   781,   561,     0,   707,     0,
     713,   756,   673,     0,     0,     0,     0,     0,     0,     0,
       0,   692,   707,     0,   707,     0,     0,   737,     0,   707,
       0,     0,   707,   707,     0,     0,   542,   539,     0,   540,
       0,     0,     0,     0,   713,     0,   707,   707,   707,   707,
       0,     0,     0,     0,   713,   632,     0,   621,   263,   264,
     713,   713,   713,   713,   713,   713,   260,     0,     0,     0,
       0,   431,     0,   425,   438,   439,     0,   674,   674,   674,
     674,   674,   674,   674,   674,   674,   674,   521,   522,   432,
     519,   455,   456,   447,     0,     0,     0,     0,   468,   471,
     446,   448,   466,   553,   713,   556,   555,   662,   664,   534,
       0,     0,   693,   697,     0,   562,   713,     0,   713,   744,
     719,     0,   746,   745,     0,   750,   749,     0,     0,     0,
       0,     0,     0,     0,     0,   713,     0,     0,     0,     0,
       0,   541,   713,   713,   713,     0,   765,     0,     0,     0,
       0,     0,     0,   688,   689,   690,   707,     0,   707,     0,
     707,     0,   707,   766,   713,   757,   758,   759,   760,   763,
     764,   261,     0,   557,   713,   713,   713,   713,   429,   430,
     428,     0,     0,   674,     0,     0,   513,   498,   499,   497,
     502,   503,   500,   501,   504,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   520,   479,   480,   478,
     487,   488,   486,   475,   473,   476,   474,   472,   483,   484,
     482,     0,     0,   494,   495,   493,     0,   518,   517,   400,
     713,     0,   698,   710,   710,   710,   743,     0,   717,   713,
     713,   713,     0,   713,     0,   713,   713,   713,     0,   723,
     713,     0,     0,   713,   713,   409,   410,   411,   713,   713,
       0,     0,     0,     0,   707,     0,   707,     0,   707,     0,
     707,     0,   620,     0,   391,   761,   762,   377,   511,   507,
     508,     0,   510,   509,   512,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,   489,   491,   515,
     538,   694,     0,   711,   712,     0,     0,     0,   713,   755,
     672,   732,   713,   734,   713,   735,   736,   725,   713,   724,
     713,   713,   728,   727,   408,   767,   713,   713,   713,   713,
       0,     0,     0,     0,     0,     0,     0,     0,   259,   506,
     514,   505,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   695,     0,     0,     0,   718,   731,   733,   726,
     730,   729,   771,   768,   777,   774,     0,   713,     0,   713,
       0,   713,     0,   713,   704,   714,   715,   716,   713,   772,
     713,   769,   713,   778,   713,   775,   773,   770,   779,   776
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -751,  -751,  -751,  1615,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    1527,  -751,  -751,  1291,  -751,   -77,  1115,  -751,   783,  -751,
    -317,   189,  -335,  -334,  -751,  -751,  -751,  1549,  1147,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,   201,
    -737,   832,  -751,  -751,  -751,  -751,  -751,  -751,  -751,  -751,
    -751,  1192,  1412,  1433,  -107,  -398,  -383,  -555,  -592,  -313,
    -751,  1600,  -751,  -751,  1601,  -751,  -751,  -751,  -751,  -751,
    -751,  -586,  -751,  -751,  -751,  -751,  -751,   789,  -751,  -751,
    -751,   830,   833,  -751,   510,   651,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,   657,  -751,  -751,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -751,   523,   602,  -751,
    -751,  1606,  -751,  -751,  -751,  -751,  1075,  1081,  1082,  1119,
    -751,  -677,  -459,  1449,   839,  -432,  1480,  1686,  -751,  -319,
    -355,  -140,  1349,  -293,  1496,  1516,  1531,  1539,  1547,  -751,
    1257,  -751,  -751,  -751,  1283,  -751,  -751,  1219,  -751,  -751,
    -751,  -751,  -751,  -751,  -751,  -751,  -217,  -751,  -751,  -751,
    -751,   861,   -82,   454,  -391,   934,  -635,  -750,   514,  -397,
    -538,  -426,  -257,  -169,  -408,  -312,  -333,  -751,  1251,  -751,
    -751,  -751,  -751,  -751,  -751,   -37,    50,  -751,  1541,  -751,
     661,  -751,  -751,   699,  -751,  -751,  -751,  -751,  -751,  -751,
    -429
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    71,   130,    72,   157,    73,   177,
      74,   199,    75,   216,    76,   231,    77,   248,    78,   261,
      79,   278,    14,    15,    16,   292,    17,    18,    19,    20,
     322,   543,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   336,   550,   339,    28,   497,   321,   532,   992,  1242,
     498,   799,   499,   500,    29,    30,    84,    85,   294,   501,
      31,    86,   310,   311,   312,   313,   314,   315,   678,   813,
     316,   317,   318,   319,   320,   675,   800,   801,   802,   805,
     806,   808,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   131,   132,   133,   388,   565,   389,   567,   502,   503,
     506,   134,   847,  1007,   135,   843,   994,   136,   721,   854,
     222,   778,   928,   576,   720,   577,  1008,   855,  1143,  1250,
    1010,   856,   857,  1168,  1169,  1161,  1279,  1170,  1290,  1163,
    1282,  1293,  1294,  1171,  1295,  1144,  1259,  1260,  1261,  1262,
    1263,  1264,  1355,  1297,  1172,  1298,  1159,  1160,   137,   138,
     139,   140,   929,   930,   931,   932,   611,   608,   614,   568,
     297,   858,   859,   141,   997,   631,   142,   143,   144,   372,
     373,   107,   332,   333,   145,   146,   147,   148,   149,   433,
     434,   289,   150,   408,   409,   260,   473,   474,   410,   475,
     476,   477,   411,   478,   412,   413,   414,   415,   605,   416,
     417,   729,   447,   169,   586,   880,  1226,  1092,  1183,   888,
     889,  1445,   599,   600,   601,  1375,  1073,   170,   623,   189,
     190,   191,   192,   193,   194,   327,   171,   172,   448,   173,
     151,   152,   153,   154,   242,   243,   244,   245,   246,   782,
     375
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     603,   553,   554,   437,   587,   566,   590,   591,   619,   309,
     707,   592,   593,   418,   419,   597,   421,   560,   634,   552,
     607,   610,   558,   613,   507,   508,   303,   509,   796,   797,
     479,  1181,   989,  1251,   569,   566,   566,   523,   566,   547,
     461,   524,   525,   460,   526,   527,   104,   528,   529,    99,
     100,   924,   707,   628,   898,   707,   632,   104,   707,   779,
     780,   422,   636,   637,   638,   658,   641,   643,   962,   737,
    -707,   649,   650,   651,  1371,  1164,   655,   656,   295,    60,
    1136,   462,   463,   464,   465,   659,   393,   852,   853,   660,
      41,   925,    42,   624,    43,    44,   569,   523,   562,    45,
      46,   524,   525,    82,   526,   527,  1252,   528,   529,  1253,
     570,    47,   438,   480,   620,   621,   108,   618,   639,   109,
      61,    83,    80,   195,   212,   926,   882,   883,   274,   328,
     329,   330,   331,    48,    49,   664,   510,   511,  1254,   598,
     884,    50,   598,    51,  1255,  1175,   940,   885,   378,   379,
     486,   487,    52,   703,   882,   883,   738,   606,   117,   452,
     481,  1372,   704,  1094,   449,   942,   995,    53,   884,    54,
    1013,  1165,  1166,   452,    96,   885,   393,   598,   563,   393,
     564,   118,   530,   450,    62,   705,   733,   734,   735,   423,
    1116,  1117,  1118,  1119,   706,   711,   937,   725,   726,  1167,
     609,   105,   890,   560,   712,  1120,  1001,   598,   644,   645,
     646,   647,   435,   563,   741,   564,   752,   753,   754,   303,
     574,   962,   962,   962,    83,   989,  1256,   571,   572,   573,
     533,   772,   534,   535,   536,   537,   538,   539,   540,   541,
     783,   106,   530,   848,   849,    81,   789,    63,   393,   773,
     466,   776,   436,   795,   951,   392,   479,   428,   990,   551,
      64,   787,   788,   560,   547,  1122,    65,  1002,  1003,   850,
      55,   835,   563,   851,   564,   927,   546,   612,    66,   303,
     852,   853,   574,    67,    56,   485,   798,   110,   512,   571,
      57,   573,    97,    98,   531,   393,   575,   571,   748,   573,
     727,   886,   887,   837,   838,   839,   840,   841,   842,   393,
      87,  1410,   728,   860,  1177,   563,  1178,   564,   439,   440,
     441,   442,   443,   622,    68,   453,   454,  1411,   455,   886,
     887,   622,   598,  1222,  1067,  1068,  1069,   323,   324,   325,
     326,  1291,   897,   899,  1292,  1227,   444,   903,   445,   905,
     906,   823,   908,   909,   809,    58,   323,   324,   325,   326,
     407,   626,  1080,  1081,  1082,    69,   919,   446,    88,   456,
     933,   934,   935,   620,   621,   429,   430,   626,  1097,   439,
     440,   441,   442,   459,   996,    89,   953,  1181,  1014,   457,
     458,   393,   563,   560,   564,   405,   323,   324,   325,   326,
    1114,   155,    90,   766,   810,   982,   811,   407,  1124,   405,
    1223,  1224,  1225,   394,   395,   728,  1127,   713,    91,   700,
     768,   407,  1223,  1224,  1225,   396,   714,   397,   398,   399,
     400,   401,   728,  1157,   303,   998,   999,  1000,   812,  1016,
     485,   402,   403,   770,    92,  1130,  1131,  1132,  1133,  1134,
    1135,   990,   774,   542,   862,   728,   323,   324,   325,   326,
     486,   487,   386,   387,   728,   404,   728,  1076,    93,   120,
     121,    94,  1070,   488,   489,   490,   491,   492,   493,   494,
     495,   496,    95,    53,   122,   864,  1228,  1230,  1232,   917,
     123,   405,   124,   125,   406,   549,  1084,   728,  1229,  1087,
     562,   728,  1090,   407,  1093,   101,  1095,  1096,   715,  1098,
     111,   665,  1101,   666,  1104,  1105,   866,   716,   963,   328,
     329,   330,   331,  1174,  1176,   112,   993,   964,   211,  1113,
    1006,  1115,   273,   113,   563,   114,   564,   606,   290,  1186,
     609,  1188,  1231,   386,   387,  1190,   965,  1192,  1193,     1,
    1195,  1196,  1257,  1257,   334,   966,   119,  1074,  1137,   834,
     380,   381,  1205,   439,   440,   441,   442,  1157,   612,  1277,
    1277,  1280,  1212,  1213,  1214,  1223,  1224,  1225,  1288,   115,
     386,   387,   126,   386,   387,   116,   127,  1334,  1234,   291,
     624,   625,  1336,   293,  1338,   128,  1340,   129,   386,   387,
    1244,  1245,  1246,   335,  1247,   323,   324,   325,   326,   896,
     338,   386,   387,   340,  1366,   563,  1367,   564,  1125,  1223,
    1224,  1225,   521,   522,   120,   121,   868,   707,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   922,    53,   122,
     341,   156,  1300,   588,   589,   123,  1185,   124,   125,   425,
     426,   427,   563,  1309,   564,   563,  1310,   564,   376,  1311,
     374,  1313,   377,  1315,  1316,  1317,   698,   382,  1320,   383,
    1187,  1323,  1324,  1182,   161,   181,   203,  1328,   384,  1329,
     265,   594,   595,   563,  1198,   564,  1200,   390,   566,   629,
     630,  1204,   867,   869,  1207,  1208,   385,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   652,   653,  1218,  1219,
    1220,  1221,  1158,   391,   947,   323,   324,   325,   326,   904,
     420,   949,   323,   324,   325,   326,   323,   324,   325,   326,
     911,   431,   913,   174,   196,   213,  1179,   126,   424,   275,
     923,   127,   757,   758,  1102,   760,   761,  1189,   941,   943,
     128,   432,   129,   948,   950,  1075,  1266,  1267,  1268,  1269,
    1270,  1271,  1272,  1273,  1274,  1275,   991,   762,   763,  1378,
    1004,   175,   197,   214,  1382,   482,  1384,   276,   484,  1071,
    1388,  1216,   483,  1390,  1391,   764,   765,   968,   969,   970,
     971,  1233,  1396,  1397,  1398,  1399,   504,  1235,  1236,  1237,
    1238,  1239,  1240,   323,   324,   325,   326,   505,  1248,  1249,
     323,   324,   325,   326,   513,  1146,   817,   818,  1335,   514,
    1337,   517,  1339,   515,  1341,   516,  1064,   518,  1066,   844,
     845,  1258,  1258,   323,   324,   325,   326,   439,   440,   441,
     442,  1299,   328,   329,   330,   331,  1158,   519,  1278,  1278,
    1281,   819,   820,  1306,   544,  1308,   520,  1289,  1019,  1020,
    1021,   545,  1351,  1437,   624,  1439,   556,  1441,   548,  1443,
     561,   342,  1319,   343,   344,   345,   346,   347,   348,  1325,
    1326,  1327,   972,   973,  1103,   578,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,  1155,  1156,   974,   975,  1448,   596,
    1450,  1342,  1452,   598,  1454,   976,   977,  1121,  1123,   978,
     979,  1344,  1345,  1346,  1347,   349,  1349,  1350,   393,   980,
     981,   350,   486,   487,   351,   615,  1400,   633,  1402,   604,
    1404,   617,  1406,  1303,  1304,  1305,   848,   849,   875,   876,
     877,   878,   879,   648,   342,   635,   343,   344,   345,   346,
     347,   348,   486,   487,   467,   654,   399,   400,   401,   468,
    1352,  1353,   850,  1223,  1224,  1225,   851,  1370,   469,   579,
     470,   471,   472,   852,   853,   661,  1379,  1380,  1381,   662,
    1383,   664,  1385,  1386,  1387,   955,   956,  1389,   349,   667,
    1392,  1393,  1376,  1377,   350,  1394,  1395,   351,  1446,  1447,
     352,   958,   959,   960,   668,   298,   669,   299,   353,   342,
     670,   343,   344,   345,   346,   347,   348,   300,   301,   302,
     303,   406,   304,   305,   671,   598,  1444,  1444,  1444,   580,
     581,   582,   583,   584,   585,   672,   354,   696,   355,   673,
     356,  -327,   674,   357,   676,  1426,  1373,  1373,  1373,  1427,
     679,  1428,   680,   349,   681,  1429,   682,  1430,  1431,   350,
     697,   683,   351,  1432,  1433,  1434,  1435,   306,   579,   684,
     358,   359,   104,   352,   685,   360,   361,   362,   686,   307,
     308,   353,   363,   687,   364,   365,   366,   367,   688,   689,
     640,   690,   368,   369,   370,   371,   691,   488,   489,   490,
     491,   492,   493,   494,  1449,   496,  1451,   692,  1453,   354,
    1455,   355,   693,   356,   559,  1456,   357,  1457,   694,  1458,
     342,  1459,   343,   344,   345,   346,   347,   348,   580,   581,
     582,   583,   584,   585,  1374,  1374,  1374,   695,   352,   701,
     579,   702,   709,   358,   359,   710,   353,   717,   360,   361,
     362,   718,   719,   739,   722,   363,   723,   364,   365,   366,
     367,   724,   642,   736,   349,   368,   369,   370,   371,   740,
     350,   176,   742,   351,   354,   744,   355,   746,   356,   750,
     751,   357,   755,   756,   759,   781,   784,   699,   785,   786,
     198,   792,   342,   794,   343,   344,   345,   346,   347,   348,
     580,   581,   582,   583,   584,   585,  -329,  -331,   358,   359,
    -333,   803,   804,   360,   361,   362,   807,   814,   815,   833,
     363,   836,   364,   365,   366,   367,   816,   821,   822,   861,
     368,   369,   370,   371,   870,   872,   349,   824,   825,   120,
     121,   826,   350,   827,   828,   351,   829,   830,   873,   352,
     831,   832,   749,    53,   122,   598,   846,   353,   120,   121,
     123,   871,   124,   125,   158,   178,   200,   217,   232,   249,
     262,   279,    53,   122,   874,   881,   892,   598,   893,   123,
     894,   124,   125,   900,   901,   354,   902,   355,   914,   356,
     910,   467,   357,   399,   400,   401,   468,   912,   916,   394,
     395,   920,   936,   938,   915,   469,   939,   470,   471,   472,
     946,   396,   944,   397,   398,   399,   400,   401,   945,   358,
     359,   352,   952,   954,   360,   361,   362,   402,   403,   353,
     957,   363,   798,   364,   365,   366,   367,   967,   983,   984,
     985,   368,   369,   370,   371,   986,   987,   988,  1017,   215,
    1018,  1059,   126,  1060,   230,  1061,   127,   354,  1062,   355,
    1072,   356,  1063,   895,   357,   128,   247,   129,  1065,  1077,
    1078,   126,  1079,  1083,  1085,   127,  1086,  1088,  1089,  1091,
    1100,  1099,   277,  1106,   128,  1110,   129,  1107,  1108,  1109,
    1111,   358,   359,  1112,  1126,  1128,   360,   361,   362,  1129,
    1138,  1139,  1140,   363,  1141,   364,   365,   366,   367,  1142,
    1180,  1173,  1184,   368,   369,   370,   371,   120,   121,  1191,
    1194,  1197,   120,   121,  1199,  1201,  1202,  1203,  1206,  1209,
    1210,    53,   122,  1215,   120,   121,    53,   122,   123,  1211,
     124,   125,  1217,   123,  1243,   124,   125,  1241,    53,   122,
     120,   121,   730,   731,   732,   123,  1265,   124,   125,  1283,
    1284,  1285,  1286,  1296,    53,   122,  1307,  1312,  1301,  1314,
    1318,   123,  1321,   124,   125,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   159,   179,   201,   218,   233,   250,
     263,   280,  1322,  1330,  1331,  1332,  1333,   767,   769,   771,
    1343,  1356,   775,  1348,   777,   160,   180,   202,   219,   234,
     251,   264,   281,  1401,  1354,  1369,   790,   791,  1357,  1358,
     793,   162,   182,   204,   223,   235,   253,   266,   282,  1359,
     126,  1403,  1360,  1361,   127,   126,  1362,  1405,  1407,   127,
    1363,  1364,  1365,   128,  1368,   129,  1408,   126,   128,  1409,
     129,   127,   163,   183,   205,   224,   236,   254,   267,   283,
     128,  1412,   129,   126,  1422,  1423,  1424,   127,   164,   184,
     206,   225,   237,   255,   268,   284,   128,  1413,   129,  1414,
    1425,  1415,  1416,  1417,  1418,  1419,   863,   865,   165,   185,
     207,   226,   238,   256,   269,   285,  1420,  1421,  1436,  1438,
    1440,  1442,   891,   166,   186,   208,   227,   239,   257,   270,
     286,   167,   187,   209,   228,   240,   258,   271,   287,   168,
     188,   210,   229,   241,   259,   272,   288,    70,   555,   337,
    1005,   663,   677,   296,   918,   961,  1009,   921,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,   220,   221,  1011,  1287,  1162,
    1012,  1145,  1276,   252,   708,   745,  1015,    59,   743,   557,
     616,   602,   657,   907,   627,   747,  1302,   451
};

static const yytype_uint16 yycheck[] =
{
     408,   336,   336,   143,   395,   388,   397,   398,   437,    86,
     565,   402,   403,   120,   121,   406,   123,   372,   450,   336,
     418,   419,   341,   421,    21,    22,    29,    24,    22,    23,
     247,    58,    35,    93,    74,   418,   419,    26,   421,   332,
       6,    30,    31,     6,    33,    34,    87,    36,    37,   200,
     201,    16,   607,   444,    54,   610,   447,    87,   613,   645,
     646,   142,   453,   454,   455,   473,   457,   458,   805,    55,
       5,   462,   463,   464,    55,    74,   467,   468,    90,   140,
      38,    47,    48,    49,    50,   476,   142,    90,    91,   480,
       8,    56,    10,   239,    12,    13,    74,    26,    90,    17,
      18,    30,    31,   142,    33,    34,   166,    36,    37,   169,
      88,    29,     6,   169,    22,    23,    70,   436,   264,    73,
     140,   133,    11,    73,    74,    90,    71,    72,    78,   136,
     137,   138,   139,    51,    52,    93,   133,   134,   198,   142,
      85,    59,   142,    61,   204,    90,    41,    92,   133,   134,
     210,   211,    70,   133,    71,    72,   142,    90,    16,     6,
     216,   142,   142,   913,   242,    41,   843,    85,    85,    87,
     847,   170,   171,     6,    71,    92,   142,   142,   205,   142,
     207,    39,   171,   261,   140,   133,   594,   595,   596,   270,
     940,   941,   942,   943,   142,   133,   782,   588,   589,   198,
      90,   242,   740,   558,   142,    41,    16,   142,   248,   249,
     250,   251,   242,   205,   605,   207,   624,   625,   626,    29,
     260,   958,   959,   960,   133,    35,   286,   205,   206,   207,
      60,   639,    62,    63,    64,    65,    66,    67,    68,    69,
     648,   282,   171,    53,    54,   134,   654,   140,   142,   640,
     216,   642,   282,   661,   792,     6,   473,    71,   261,   336,
     140,   652,   653,   618,   557,    41,   140,    77,    78,    79,
     188,   700,   205,    83,   207,   240,   283,    90,   140,    29,
      90,    91,   260,   140,   202,    35,   280,   241,   285,   205,
     208,   207,   189,   190,   283,   142,   274,   205,   617,   207,
     142,   246,   247,   711,   712,   713,   714,   715,   716,   142,
      19,   271,   154,   721,  1064,   205,  1066,   207,   212,   213,
     214,   215,   216,   239,   140,   172,   173,   287,   175,   246,
     247,   239,   142,   142,   872,   873,   874,   232,   233,   234,
     235,   269,   750,   751,   272,   142,   240,   755,   242,   757,
     758,   686,   760,   761,   283,   273,   232,   233,   234,   235,
     254,   443,   900,   901,   902,     0,   774,   261,   282,   216,
     778,   779,   780,    22,    23,   189,   190,   459,   916,   212,
     213,   214,   215,   216,   843,   134,   794,    58,   847,   236,
     237,   142,   205,   748,   207,   242,   232,   233,   234,   235,
     938,     3,   134,   142,   205,   834,   207,   254,   946,   242,
     219,   220,   221,   164,   165,   154,   954,   133,   282,   559,
     142,   254,   219,   220,   221,   176,   142,   178,   179,   180,
     181,   182,   154,  1025,    29,   843,   844,   845,   239,   847,
      35,   192,   193,   142,   142,   983,   984,   985,   986,   987,
     988,   261,   142,   283,   142,   154,   232,   233,   234,   235,
     210,   211,   133,   134,   154,   216,   154,   896,   134,    71,
      72,   135,   880,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   282,    85,    86,   142,  1121,  1122,  1123,   142,
      92,   242,    94,    95,   245,    90,   904,   154,   142,   907,
      90,   154,   910,   254,   912,   267,   914,   915,   133,   917,
      73,   133,   920,   135,   922,   923,   143,   142,   133,   136,
     137,   138,   139,  1061,  1062,    73,   843,   142,    74,   937,
     847,   939,    78,    73,   205,    16,   207,    90,     9,  1077,
      90,  1079,   142,   133,   134,  1083,   133,  1085,  1086,     7,
    1088,  1089,  1144,  1145,   134,   142,     3,   890,   990,   699,
     133,   134,  1100,   212,   213,   214,   215,  1159,    90,  1161,
    1162,  1163,  1110,  1111,  1112,   219,   220,   221,  1170,    73,
     133,   134,   184,   133,   134,    73,   188,  1222,  1126,    71,
     239,   240,  1227,    76,  1229,   197,  1231,   199,   133,   134,
    1138,  1139,  1140,   142,  1142,   232,   233,   234,   235,   749,
     265,   133,   134,   282,   133,   205,   135,   207,   951,   219,
     220,   221,    27,    28,    71,    72,   143,  1182,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   143,    85,    86,
     282,   243,  1180,   172,   173,    92,  1075,    94,    95,   185,
     186,   187,   205,  1191,   207,   205,  1194,   207,   134,  1197,
      57,  1199,   134,  1201,  1202,  1203,   283,   134,  1206,   134,
    1078,  1209,  1210,  1071,    72,    73,    74,  1215,   133,  1217,
      78,   262,   263,   205,  1092,   207,  1094,   133,  1071,   280,
     281,  1099,   729,   730,  1102,  1103,   134,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    48,    49,  1116,  1117,
    1118,  1119,  1025,   133,   143,   232,   233,   234,   235,   756,
     135,   143,   232,   233,   234,   235,   232,   233,   234,   235,
     767,   141,   769,    72,    73,    74,  1069,   184,   270,    78,
     777,   188,   133,   134,   143,   133,   134,  1080,   785,   786,
     197,   140,   199,   790,   791,   895,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,  1155,  1156,   843,   133,   134,  1307,
     847,    72,    73,    74,  1312,   133,  1314,    78,   142,   886,
    1318,  1114,    25,  1321,  1322,   133,   134,   824,   825,   826,
     827,  1124,  1330,  1331,  1332,  1333,   142,  1130,  1131,  1132,
    1133,  1134,  1135,   232,   233,   234,   235,    75,  1143,  1143,
     232,   233,   234,   235,   133,    73,    14,    15,  1226,   134,
    1228,   282,  1230,    89,  1232,    89,   863,   134,   865,   133,
     134,  1144,  1145,   232,   233,   234,   235,   212,   213,   214,
     215,  1174,   136,   137,   138,   139,  1159,   142,  1161,  1162,
    1163,    27,    28,  1186,   268,  1188,   134,  1170,    80,    81,
      82,   268,  1253,  1401,   239,  1403,   266,  1405,   201,  1407,
     142,    40,  1205,    42,    43,    44,    45,    46,    47,  1212,
    1213,  1214,   217,   218,   921,    92,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   217,   218,  1436,   254,
    1438,  1234,  1440,   142,  1442,   217,   218,   944,   945,   217,
     218,  1244,  1245,  1246,  1247,    84,   167,   168,   142,   217,
     218,    90,   210,   211,    93,    55,  1334,   241,  1336,   191,
    1338,   282,  1340,   257,   258,   259,    53,    54,   218,   219,
     220,   221,   222,    40,    40,   241,    42,    43,    44,    45,
      46,    47,   210,   211,   178,    40,   180,   181,   182,   183,
     133,   134,    79,   219,   220,   221,    83,  1300,   192,   216,
     194,   195,   196,    90,    91,   169,  1309,  1310,  1311,   142,
    1313,    93,  1315,  1316,  1317,   796,   797,  1320,    84,   133,
    1323,  1324,  1304,  1305,    90,  1328,  1329,    93,  1424,  1425,
     169,   800,   801,   802,   133,    14,   218,    16,   177,    40,
     133,    42,    43,    44,    45,    46,    47,    26,    27,    28,
      29,   245,    31,    32,   134,   142,  1423,  1424,  1425,   276,
     277,   278,   279,   280,   281,   134,   205,   142,   207,   134,
     209,   133,   284,   212,   133,  1378,  1303,  1304,  1305,  1382,
     284,  1384,   284,    84,   284,  1388,   284,  1390,  1391,    90,
     142,   284,    93,  1396,  1397,  1398,  1399,    76,   216,   284,
     239,   240,    87,   169,   284,   244,   245,   246,   284,    88,
      89,   177,   251,   284,   253,   254,   255,   256,   284,   284,
     238,   284,   261,   262,   263,   264,   284,   223,   224,   225,
     226,   227,   228,   229,  1437,   231,  1439,   284,  1441,   205,
    1443,   207,   284,   209,   283,  1448,   212,  1450,   284,  1452,
      40,  1454,    42,    43,    44,    45,    46,    47,   276,   277,
     278,   279,   280,   281,  1303,  1304,  1305,   284,   169,    55,
     216,   142,   133,   239,   240,   134,   177,   267,   244,   245,
     246,   275,    76,     5,   142,   251,   142,   253,   254,   255,
     256,   142,   238,   142,    84,   261,   262,   263,   264,     5,
      90,     3,   142,    93,   205,   142,   207,   142,   209,   142,
      93,   212,    93,   142,   142,    79,   142,   283,   142,   142,
       3,     5,    40,   142,    42,    43,    44,    45,    46,    47,
     276,   277,   278,   279,   280,   281,   133,   133,   239,   240,
     133,   133,   133,   244,   245,   246,    20,   134,   133,   218,
     251,   218,   253,   254,   255,   256,   134,   134,   134,    55,
     261,   262,   263,   264,   143,     5,    84,   142,   142,    71,
      72,   142,    90,   142,   142,    93,   142,   142,     5,   169,
     142,   142,   283,    85,    86,   142,   142,   177,    71,    72,
      92,   143,    94,    95,    72,    73,    74,    75,    76,    77,
      78,    79,    85,    86,     5,    55,   218,   142,   218,    92,
     218,    94,    95,     5,     5,   205,     5,   207,   217,   209,
     174,   178,   212,   180,   181,   182,   183,   174,     5,   164,
     165,   143,   252,     5,   218,   192,   143,   194,   195,   196,
       5,   176,   142,   178,   179,   180,   181,   182,   142,   239,
     240,   169,   143,     5,   244,   245,   246,   192,   193,   177,
     133,   251,   280,   253,   254,   255,   256,   142,     5,     5,
       5,   261,   262,   263,   264,     5,     5,     5,   133,     3,
     133,   142,   184,   142,     3,     5,   188,   205,     5,   207,
       4,   209,   174,   283,   212,   197,     3,   199,   174,     5,
     133,   184,     5,     5,     5,   188,     5,     5,     5,   218,
       5,   143,     3,   133,   197,     5,   199,   142,   142,   142,
       5,   239,   240,     5,     5,   133,   244,   245,   246,   133,
       5,     5,     5,   251,   133,   253,   254,   255,   256,     5,
       5,   218,     3,   261,   262,   263,   264,    71,    72,     5,
       5,     5,    71,    72,     5,     5,     5,     5,     5,     5,
       5,    85,    86,     5,    71,    72,    85,    86,    92,   218,
      94,    95,     5,    92,   133,    94,    95,   276,    85,    86,
      71,    72,   591,   592,   593,    92,   134,    94,    95,   133,
     133,   142,   134,   203,    85,    86,     5,     5,    94,     5,
       5,    92,     5,    94,    95,   223,   224,   225,   226,   227,
     228,   229,   230,   231,    72,    73,    74,    75,    76,    77,
      78,    79,     5,     5,     5,     5,     5,   636,   637,   638,
     142,   142,   641,   133,   643,    72,    73,    74,    75,    76,
      77,    78,    79,     5,   133,   133,   655,   656,   142,   142,
     659,    72,    73,    74,    75,    76,    77,    78,    79,   142,
     184,     5,   142,   142,   188,   184,   142,     5,     5,   188,
     142,   142,   142,   197,   142,   199,   221,   184,   197,   142,
     199,   188,    72,    73,    74,    75,    76,    77,    78,    79,
     197,   143,   199,   184,    55,     5,     5,   188,    72,    73,
      74,    75,    76,    77,    78,    79,   197,   143,   199,   143,
       5,   143,   143,   143,   143,   143,   725,   726,    72,    73,
      74,    75,    76,    77,    78,    79,   143,   143,     5,     5,
       5,     5,   741,    72,    73,    74,    75,    76,    77,    78,
      79,    72,    73,    74,    75,    76,    77,    78,    79,    72,
      73,    74,    75,    76,    77,    78,    79,    12,   337,   102,
     847,   484,   517,    84,   773,   803,   847,   776,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    75,    75,   847,  1168,  1028,
     847,  1024,  1159,    77,   565,   610,   847,     1,   607,   340,
     433,   408,   473,   759,   443,   613,  1182,   156
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   289,   290,   291,   310,   311,   312,   314,   315,   316,
     317,   320,   321,   322,   323,   324,   325,   326,   332,   342,
     343,   348,   370,   371,   372,   373,   374,   375,   376,   377,
     378,     8,    10,    12,    13,    17,    18,    29,    51,    52,
      59,    61,    70,    85,    87,   188,   202,   208,   273,   455,
     140,   140,   140,   140,   140,   140,   140,   140,   140,     0,
     291,   292,   294,   296,   298,   300,   302,   304,   306,   308,
      11,   134,   142,   133,   344,   345,   349,    19,   282,   134,
     134,   282,   142,   134,   135,   282,    71,   189,   190,   200,
     201,   267,   327,   328,    87,   242,   282,   459,    70,    73,
     241,    73,    73,    73,    16,    73,    73,    16,    39,     3,
      71,    72,    86,    92,    94,    95,   184,   188,   197,   199,
     293,   379,   380,   381,   389,   392,   395,   436,   437,   438,
     439,   451,   454,   455,   456,   462,   463,   464,   465,   466,
     470,   518,   519,   520,   521,     3,   243,   295,   379,   380,
     381,   436,   451,   454,   462,   463,   464,   465,   466,   491,
     505,   514,   515,   517,   518,   521,     3,   297,   379,   380,
     381,   436,   451,   454,   462,   463,   464,   465,   466,   507,
     508,   509,   510,   511,   512,   514,   518,   521,     3,   299,
     379,   380,   381,   436,   451,   454,   462,   463,   464,   465,
     466,   491,   514,   518,   521,     3,   301,   379,   380,   381,
     389,   392,   398,   451,   454,   462,   463,   464,   465,   466,
       3,   303,   379,   380,   381,   451,   454,   462,   463,   464,
     465,   466,   522,   523,   524,   525,   526,     3,   305,   379,
     380,   381,   439,   451,   454,   462,   463,   464,   465,   466,
     473,   307,   379,   380,   381,   436,   451,   454,   462,   463,
     464,   465,   466,   491,   514,   518,   521,     3,   309,   379,
     380,   381,   451,   454,   462,   463,   464,   465,   466,   469,
       9,    71,   313,    76,   346,    90,   345,   448,    14,    16,
      26,    27,    28,    29,    31,    32,    76,    88,    89,   333,
     350,   351,   352,   353,   354,   355,   358,   359,   360,   361,
     362,   334,   318,   232,   233,   234,   235,   513,   136,   137,
     138,   139,   460,   461,   134,   142,   329,   328,   265,   331,
     282,   282,    40,    42,    43,    44,    45,    46,    47,    84,
      90,    93,   169,   177,   205,   207,   209,   212,   239,   240,
     244,   245,   246,   251,   253,   254,   255,   256,   261,   262,
     263,   264,   457,   458,    57,   528,   134,   134,   133,   134,
     133,   134,   134,   134,   133,   134,   133,   134,   382,   384,
     133,   133,     6,   142,   164,   165,   176,   178,   179,   180,
     181,   182,   192,   193,   216,   242,   245,   254,   471,   472,
     476,   480,   482,   483,   484,   485,   487,   488,   382,   382,
     135,   382,   142,   270,   270,   185,   186,   187,    71,   189,
     190,   141,   140,   467,   468,   242,   282,   459,     6,   212,
     213,   214,   215,   216,   240,   242,   261,   490,   516,   242,
     261,   516,     6,   172,   173,   175,   216,   236,   237,   216,
       6,     6,    47,    48,    49,    50,   216,   178,   183,   192,
     194,   195,   196,   474,   475,   477,   478,   479,   481,   484,
     169,   216,   133,    25,   142,    35,   210,   211,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   333,   338,   340,
     341,   347,   386,   387,   142,    75,   388,    21,    22,    24,
     133,   134,   285,   133,   134,    89,    89,   282,   134,   142,
     134,    27,    28,    26,    30,    31,    33,    34,    36,    37,
     171,   283,   335,    60,    62,    63,    64,    65,    66,    67,
      68,    69,   283,   319,   268,   268,   283,   461,   201,    90,
     330,   333,   338,   340,   341,   331,   266,   460,   457,   283,
     458,   142,    90,   205,   207,   383,   384,   385,   447,    74,
      88,   205,   206,   207,   260,   274,   401,   403,    92,   216,
     276,   277,   278,   279,   280,   281,   492,   492,   172,   173,
     492,   492,   492,   492,   262,   263,   254,   492,   142,   500,
     501,   502,   472,   502,   191,   486,    90,   383,   445,    90,
     383,   444,    90,   383,   446,    55,   468,   282,   457,   528,
      22,    23,   239,   506,   239,   240,   490,   506,   492,   280,
     281,   453,   492,   241,   453,   241,   492,   492,   492,   264,
     238,   492,   238,   492,   248,   249,   250,   251,    40,   492,
     492,   492,    48,    49,    40,   492,   492,   475,   502,   492,
     492,   169,   142,   346,    93,   133,   135,   133,   133,   218,
     133,   134,   134,   134,   284,   363,   133,   334,   356,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   142,   142,   283,   283,
     459,    55,   142,   133,   142,   133,   142,   385,   447,   133,
     134,   133,   142,   133,   142,   133,   142,   267,   275,    76,
     402,   396,   142,   142,   142,   492,   492,   142,   154,   489,
     489,   489,   489,   502,   502,   502,   142,    55,   142,     5,
       5,   492,   142,   445,   142,   444,   142,   446,   457,   283,
     142,    93,   502,   502,   502,    93,   142,   133,   134,   142,
     133,   134,   133,   134,   133,   134,   142,   489,   142,   489,
     142,   489,   502,   492,   142,   489,   492,   489,   399,   399,
     399,    79,   527,   502,   142,   142,   142,   492,   492,   502,
     489,   489,     5,   489,   142,   502,    22,    23,   280,   339,
     364,   365,   366,   133,   133,   367,   368,    20,   369,   283,
     205,   207,   239,   357,   134,   133,   134,    14,    15,    27,
      28,   134,   134,   340,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   218,   459,   528,   218,   502,   502,   502,
     502,   502,   502,   393,   133,   134,   142,   390,    53,    54,
      79,    83,    90,    91,   397,   405,   409,   410,   449,   450,
     502,    55,   142,   489,   142,   489,   143,   513,   143,   513,
     143,   143,     5,     5,     5,   218,   219,   220,   221,   222,
     493,    55,    71,    72,    85,    92,   246,   247,   497,   498,
     498,   489,   218,   218,   218,   283,   459,   502,    54,   502,
       5,     5,     5,   502,   513,   502,   502,   493,   502,   502,
     174,   513,   174,   513,   217,   218,     5,   142,   489,   502,
     143,   489,   143,   513,    16,    56,    90,   240,   400,   440,
     441,   442,   443,   502,   502,   502,   252,   399,     5,   143,
      41,   513,    41,   513,   142,   142,     5,   143,   513,   143,
     513,   498,   143,   502,     5,   339,   339,   133,   367,   367,
     367,   369,   368,   133,   142,   133,   142,   142,   513,   513,
     513,   513,   217,   218,   217,   218,   217,   218,   217,   218,
     217,   218,   528,     5,     5,     5,     5,     5,     5,    35,
     261,   333,   336,   338,   394,   449,   450,   452,   502,   502,
     502,    16,    77,    78,   333,   336,   338,   391,   404,   405,
     408,   409,   410,   449,   450,   452,   502,   133,   133,    80,
      81,    82,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   142,
     142,     5,     5,   174,   513,   174,   513,   498,   498,   498,
     502,   382,     4,   504,   504,   459,   528,     5,   133,     5,
     498,   498,   498,     5,   502,     5,     5,   502,     5,     5,
     502,   218,   495,   502,   495,   502,   502,   498,   502,   143,
       5,   502,   143,   513,   502,   502,   133,   142,   142,   142,
       5,     5,     5,   502,   498,   502,   495,   495,   495,   495,
      41,   513,    41,   513,   498,   504,     5,   498,   133,   133,
     498,   498,   498,   498,   498,   498,    38,   453,     5,     5,
       5,   133,     5,   406,   423,   423,    73,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   386,   387,   434,
     435,   413,   413,   417,    74,   170,   171,   198,   411,   412,
     415,   421,   432,   218,   498,    90,   498,   495,   495,   504,
       5,    58,   383,   496,     3,   528,   498,   502,   498,   504,
     498,     5,   498,   498,     5,   498,   498,     5,   502,     5,
     502,     5,     5,     5,   502,   498,     5,   502,   502,     5,
       5,   218,   498,   498,   498,     5,   504,     5,   502,   502,
     502,   502,   142,   219,   220,   221,   494,   142,   494,   142,
     494,   142,   494,   504,   498,   504,   504,   504,   504,   504,
     504,   276,   337,   133,   498,   498,   498,   498,   340,   341,
     407,    93,   166,   169,   198,   204,   286,   386,   387,   424,
     425,   426,   427,   428,   429,   134,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   435,   386,   387,   414,
     386,   387,   418,   133,   133,   142,   134,   412,   386,   387,
     416,   269,   272,   419,   420,   422,   203,   431,   433,   504,
     498,    94,   496,   257,   258,   259,   504,     5,   504,   498,
     498,   498,     5,   498,     5,   498,   498,   498,     5,   504,
     498,     5,     5,   498,   498,   504,   504,   504,   498,   498,
       5,     5,     5,     5,   494,   502,   494,   502,   494,   502,
     494,   502,   504,   142,   504,   504,   504,   504,   133,   167,
     168,   492,   133,   134,   133,   430,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   133,   135,   142,   133,
     504,    55,   142,   500,   501,   503,   503,   503,   498,   504,
     504,   504,   498,   504,   498,   504,   504,   504,   498,   504,
     498,   498,   504,   504,   504,   504,   498,   498,   498,   498,
     502,     5,   502,     5,   502,     5,   502,     5,   221,   142,
     271,   287,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,    55,     5,     5,     5,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,     5,   498,     5,   498,
       5,   498,     5,   498,   497,   499,   499,   499,   498,   504,
     498,   504,   498,   504,   498,   504,   504,   504,   504,   504
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   288,   289,   289,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   292,   292,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   294,   294,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   296,   296,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   298,
     298,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   300,   300,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   302,   302,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   304,   304,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   308,
     308,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   310,   310,   310,   311,   312,   313,   313,   314,
     315,   315,   315,   316,   317,   318,   318,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   320,   321,   321,   321,   322,   322,   322,   323,   324,
     325,   326,   327,   327,   328,   329,   329,   330,   330,   330,
     330,   330,   331,   331,   332,   333,   333,   334,   334,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   336,
     337,   337,   338,   338,   338,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   342,   343,   344,   344,
     345,   345,   346,   346,   347,   347,   347,   347,   347,   347,
     348,   349,   349,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   351,   352,   353,   354,   355,   356,   356,   357,
     357,   357,   357,   357,   358,   358,   359,   359,   360,   360,
     361,   362,   362,   362,   362,   362,   362,   363,   362,   364,
     362,   365,   362,   366,   362,   362,   367,   367,   368,   369,
     369,   370,   370,   370,   370,   371,   372,   372,   373,   374,
     375,   375,   376,   377,   378,   378,   379,   379,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     385,   385,   386,   386,   387,   388,   388,   389,   390,   390,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   392,   393,   393,   394,   394,   394,   394,   394,   394,
     395,   396,   396,   397,   397,   397,   397,   397,   398,   398,
     398,   398,   399,   399,   400,   400,   400,   400,   401,   401,
     402,   403,   404,   404,   405,   405,   405,   406,   406,   407,
     407,   408,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   410,
     410,   411,   411,   412,   412,   412,   412,   413,   413,   414,
     414,   415,   415,   416,   416,   417,   417,   418,   418,   419,
     419,   420,   421,   421,   422,   422,   423,   423,   424,   424,
     424,   424,   424,   424,   424,   424,   425,   426,   426,   427,
     427,   428,   429,   430,   430,   431,   432,   432,   433,   434,
     434,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   436,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   444,   445,   445,   446,   446,   447,
     447,   448,   448,   449,   450,   451,   451,   452,   453,   453,
     454,   454,   454,   454,   455,   456,   457,   457,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   459,   459,
     460,   460,   461,   461,   461,   461,   462,   462,   462,   463,
     463,   463,   464,   464,   464,   465,   466,   467,   467,   468,
     469,   469,   470,   471,   471,   472,   472,   472,   472,   472,
     472,   472,   473,   474,   474,   475,   475,   475,   475,   476,
     476,   477,   478,   478,   478,   478,   479,   479,   480,   480,
     480,   480,   481,   481,   482,   483,   484,   485,   485,   485,
     486,   486,   487,   487,   488,   488,   489,   489,   490,   490,
     490,   490,   491,   491,   492,   492,   492,   492,   492,   492,
     492,   492,   493,   493,   493,   493,   493,   493,   494,   494,
     494,   495,   495,   496,   496,   496,   497,   497,   497,   497,
     497,   497,   497,   498,   499,   500,   501,   502,   502,   502,
     503,   503,   503,   504,   504,   504,   504,   505,   505,   505,
     506,   506,   506,   507,   507,   507,   507,   508,   508,   508,
     508,   509,   509,   510,   510,   511,   511,   512,   513,   513,
     513,   513,   513,   514,   514,   515,   515,   515,   515,   515,
     515,   515,   515,   516,   516,   517,   517,   518,   518,   519,
     519,   520,   520,   521,   521,   522,   523,   524,   525,   525,
     525,   525,   525,   525,   526,   526,   526,   526,   526,   526,
     527,   528,   528,   528
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     7,     8,     4,     3,     0,     3,     2,
       3,     3,     3,     4,     5,     0,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     3,     3,     5,     4,     6,     4,     3,     3,
       3,     3,     2,     3,     2,     0,     2,     3,     1,     1,
       1,     1,     0,     2,     5,     1,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       0,     1,     4,     5,     5,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     5,     1,     2,
       2,     4,     0,     2,     1,     1,     1,     1,     1,     1,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
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
       1,     2,     3,     2,     2,     2,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       2,     1,     2,     2,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     1,     1,     0,     2,     1,     1,     2,
       2,     2,     0,     2,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     0,     2,     2,     0,     2,     1,     1,
       2,     1,     1,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     7,     6,     6,     6,     9,     2,
       2,     3,     2,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     3,     2,     7,     7,     3,     1,     1,
       3,     6,     7,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     2,     2,     2,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     1,
       8,     6,     6,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     6,     1,     2,     1,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     3,     4,     1,     1,     1,
       0,     1,     6,     5,     6,     5,     1,     1,     1,     1,
       1,     1,     9,     6,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     3,     4,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     2,     3,     0,     1,     1,
       0,     1,     1,     0,     6,     6,     6,     8,    10,     7,
       0,     1,     1,     8,     9,     9,    10,     9,     9,    10,
      10,    10,     9,    10,     9,     9,     9,     6,     0,     1,
       1,     1,     1,     8,     7,     7,     7,     4,     4,     7,
       7,     4,     4,     0,     1,     9,     6,     8,     8,     8,
       8,     9,     9,     8,     8,     7,     7,     9,    10,    11,
      12,    10,    11,    12,    10,    11,    12,    10,    11,    12,
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
        case 192:
#line 593 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 597 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3257 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 600 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 606 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                                ihp.daemon     = true;
                                Run.flags      |= Run_Daemon;
                                Run.polltime   = (yyvsp[-1].number);
                                Run.startdelay = (yyvsp[0].number);
                        }
                  }
#line 3279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 616 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3287 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 621 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = 0;
                  }
#line 3295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 624 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 629 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 634 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 637 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3327 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 640 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3335 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 645 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3344 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 658 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3352 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 661 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3360 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 664 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3368 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 667 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3376 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 670 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3384 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 673 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 676 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 679 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 682 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 685 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 688 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 691 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3440 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 694 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 697 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3456 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 702 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3464 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 707 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.log || ihp.logfile) {
                                ihp.logfile = true;
                                setlogfile((yyvsp[0].string));
                                Run.flags &= ~Run_UseSyslog;
                                Run.flags |= Run_Log;
                        }
                  }
#line 3477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog(NULL);
                  }
#line 3485 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 718 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3493 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 723 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3501 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 726 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 730 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3519 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 736 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.id = (yyvsp[0].string);
                  }
#line 3527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 741 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.state = (yyvsp[0].string);
                  }
#line 3535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 746 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        }
                  }
#line 3546 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 761 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 771 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 781 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 786 "src/p.y" /* yacc.c:1646  */
    {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3579 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 791 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 801 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 805 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3605 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 809 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 813 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 817 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 820 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 824 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 827 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 830 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3664 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 833 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3672 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 838 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 848 "src/p.y" /* yacc.c:1646  */
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
#line 3700 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 862 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3712 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 869 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3724 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 882 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V2;
                  }
#line 3733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_V3;
                  }
#line 3742 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 890 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV1;
                  }
#line 3751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 895 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_1
                        yyerror("Your SSL Library does not support TLS version 1.1");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV11;
                }
#line 3763 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 903 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_2
                        yyerror("Your SSL Library does not support TLS version 1.2");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV12;
                }
#line 3775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 911 "src/p.y" /* yacc.c:1646  */
    {
#ifndef HAVE_TLSV1_3
                        yyerror("Your SSL Library does not support TLS version 1.3");
#endif
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_TLSV13;
                }
#line 3787 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 919 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3796 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 923 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.version = SSL_Auto;
                  }
#line 3805 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 929 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 938 "src/p.y" /* yacc.c:1646  */
    {
                        if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                                Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 3827 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 945 "src/p.y" /* yacc.c:1646  */
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
#line 3845 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 964 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 3859 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 973 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overriden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 3873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 988 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 3881 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 991 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 3889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1000 "src/p.y" /* yacc.c:1646  */
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
#line 3909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1033 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3917 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1039 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1045 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1051 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[0].number);
                  }
#line 3943 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1057 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                  }
#line 3952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1067 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 3962 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1072 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 3972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1077 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid(NULL, (yyvsp[0].number));
                    }
#line 3981 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1081 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid(NULL, (yyvsp[0].number));
                    }
#line 3990 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1085 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixPermission;
                        Run.httpd.socket.unix.permission = check_perm((yyvsp[0].number));
                    }
#line 3999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1099 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 4007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1102 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 4015 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1107 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 4023 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1112 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 4031 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1115 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 4044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1123 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1127 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4062 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1131 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 4071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1135 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 4080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4089 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4097 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1146 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4106 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1150 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4114 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1153 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1157 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1160 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4140 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1164 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4148 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1167 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4158 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1178 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4167 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1184 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = false;
                  }
#line 4175 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1187 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = true;
                  }
#line 4183 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1192 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4191 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1195 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4199 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1198 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4211 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1205 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4223 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1214 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1219 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4239 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1222 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1227 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1232 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1237 "src/p.y" /* yacc.c:1646  */
    {
                        if (Link_isGetByAddressSupported()) {
                                createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                                current->inf.net->stats = Link_createForAddress((yyvsp[0].string));
                        } else {
                                yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                        }
                  }
#line 4276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1245 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1251 "src/p.y" /* yacc.c:1646  */
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
#line 4303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1266 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4311 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1271 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1279 "src/p.y" /* yacc.c:1646  */
    {
                        command_t c = command; // Current command
                        check_exec(c->arg[0]);
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4337 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1289 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4345 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1292 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4353 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1297 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4361 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1300 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4369 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1306 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4377 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1309 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4385 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1322 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4393 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1325 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4401 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1330 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4410 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1334 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1338 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1341 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1346 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1349 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1354 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1359 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1362 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1367 "src/p.y" /* yacc.c:1646  */
    {
                        /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                           TODO: Parser is in need of refactoring */
                        portset.url_request = urlrequest;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4487 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1393 "src/p.y" /* yacc.c:1646  */
    {
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1412 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4506 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1429 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1435 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4527 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1440 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1445 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4547 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1462 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4555 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1465 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1470 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1475 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4580 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1481 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip4;
                  }
#line 4588 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1484 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip6;
                  }
#line 4596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1489 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                  }
#line 4604 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1492 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1496 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Udp;
                  }
#line 4621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1509 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1514 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1517 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4645 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1523 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1526 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FAIL2BAN);
                }
#line 4669 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1529 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4677 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1532 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1535 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4695 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1540 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4703 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1543 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4713 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1548 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1551 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4729 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1554 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1557 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1560 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MQTT);
                  }
#line 4753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1563 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1566 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1569 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1572 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4786 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1576 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4794 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1579 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4802 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1582 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4812 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1587 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 4820 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 4828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1593 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 4838 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1598 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SPAMASSASSIN);
                  }
#line 4846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1601 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 4854 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1604 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 4862 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1607 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 4870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1610 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 4878 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1613 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 4886 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1616 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 4894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1619 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 4902 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1622 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 4910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1625 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 4918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1628 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 4926 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1631 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 4934 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1636 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, (yyvsp[0].string), NULL);
                        } else {
                                yyerror("The SEND statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4947 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1644 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, NULL, (yyvsp[0].string));
                        } else {
                                yyerror("The EXPECT statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 4960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1658 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 4968 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1661 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 4976 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1664 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 4984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1667 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 4992 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1676 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 5000 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1679 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 5008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1688 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mqtt.username = (yyvsp[0].string);
                  }
#line 5016 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1691 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mqtt.password = (yyvsp[0].string);
                  }
#line 5024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1700 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].string)) {
                                if (strlen((yyvsp[0].string)) > 16)
                                        yyerror2("Username too long -- Maximum MySQL username length is 16 characters");
                                else
                                        portset.parameters.mysql.username = (yyvsp[0].string);
                        }
                  }
#line 5037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1708 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 5045 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1713 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5053 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1716 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5061 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1721 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 5069 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1730 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 5077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1733 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 5085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1742 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 5093 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1745 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 5101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1756 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].number) < 0) {
                                yyerror2("The status value must be greater or equal to 0");
                        }
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                        portset.parameters.http.hasStatus = true;
                  }
#line 5114 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1766 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Get;
                  }
#line 5122 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 1769 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Head;
                  }
#line 5130 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 1774 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5139 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1778 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5148 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1784 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 5156 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 1789 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 5165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 5173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1801 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 1810 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 5189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 1819 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1822 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1825 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1828 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1832 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1836 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1840 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1844 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5258 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 1848 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5267 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1852 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1856 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 1860 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 1864 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5303 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1870 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5312 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 1874 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5321 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 1881 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1887 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5339 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1893 "src/p.y" /* yacc.c:1646  */
    {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1900 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5358 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1905 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                        if (icmpset.size < 8) {
                                yyerror2("The minimum ping size is 8 bytes");
                        } else if (icmpset.size > 1492) {
                                yyerror2("The maximum ping size is 1492 bytes");
                        }
                 }
#line 5371 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1915 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1920 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5387 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1925 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5395 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1928 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5403 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1933 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5411 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1936 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5419 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1941 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1944 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5435 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1949 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5443 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1952 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5451 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1957 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5459 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1960 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5467 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1965 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5475 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1970 "src/p.y" /* yacc.c:1646  */
    {
                        portset.retry = (yyvsp[0].number);
                  }
#line 5483 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1975 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5494 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1981 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 1995 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5520 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 1996 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 1999 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2003 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5543 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2006 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5552 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2010 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5560 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2015 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5566 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2018 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5572 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2025 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5578 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2026 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5584 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2027 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2028 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5596 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2029 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5602 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2030 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5608 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2031 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2032 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5620 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2033 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exist; }
#line 5626 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2034 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_FsFlag; }
#line 5632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2035 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5638 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2036 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5644 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2037 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5650 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2038 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5656 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2039 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5662 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2040 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_NonExist; }
#line 5668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2041 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5674 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2042 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5680 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2043 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5686 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2044 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2045 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5698 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2046 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5704 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2047 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5710 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2048 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5716 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2049 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5722 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2050 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5728 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2051 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5734 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2052 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2053 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2054 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5752 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2065 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5758 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2066 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5764 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2067 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 5770 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2068 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 5776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2071 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 5785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2075 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5794 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2079 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 5803 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2085 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 5811 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2088 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 5819 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2091 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2097 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 5836 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2100 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 5845 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2104 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 5853 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2109 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5862 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2123 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 5868 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2126 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 5880 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2133 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 5892 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2142 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2161 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 5910 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2177 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2182 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2189 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5940 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2196 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuUser; }
#line 5946 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2197 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuSystem; }
#line 5952 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2198 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuWait; }
#line 5958 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2199 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_CpuPercent; }
#line 5964 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2202 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5974 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2207 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 5984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2214 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 5994 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2219 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6004 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2224 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6014 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2229 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6024 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2236 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6034 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2241 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2248 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6054 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2255 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6064 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2262 "src/p.y" /* yacc.c:1646  */
    {
                        switch ((yyvsp[-3].number)) {
                                case Resource_LoadAverage1m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore1m : (yyvsp[-3].number);
                                        break;
                                case Resource_LoadAverage5m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore5m : (yyvsp[-3].number);
                                        break;
                                case Resource_LoadAverage15m:
                                        resourceset.resource_id = (yyvsp[-2].number) > 1 ? Resource_LoadAveragePerCore15m : (yyvsp[-3].number);
                                        break;
                                default:
                                        resourceset.resource_id = (yyvsp[-3].number);
                                        break;
                        }
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].real);
                  }
#line 6087 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2282 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 6093 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2283 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 6099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2284 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 6105 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2287 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = 1; }
#line 6111 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2288 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = systeminfo.cpu.count; }
#line 6117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2292 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6127 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2297 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6137 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2304 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6147 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2309 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2316 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 6163 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2317 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 6169 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2320 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Default; }
#line 6175 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2321 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Access; }
#line 6181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2322 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Change; }
#line 6187 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2323 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Modification; }
#line 6193 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2326 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-7].number);
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 6205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2333 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-3].number);
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 6216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2341 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6222 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2342 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 6228 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2343 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 6234 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2344 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 6240 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2345 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 6246 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2346 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6252 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2347 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 6258 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2348 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 6264 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2351 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6270 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2352 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6276 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2353 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6282 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2354 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6288 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2355 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6294 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2356 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 6300 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2359 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6306 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2360 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6312 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2361 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6318 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2363 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6324 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2364 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6330 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2366 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 6338 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2369 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 6346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2372 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6357 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2380 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6365 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2383 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6373 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2387 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6381 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2390 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 6389 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2393 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 6397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2396 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 6405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2399 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6413 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2404 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 6427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2415 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 6441 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2426 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %d", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2436 "src/p.y" /* yacc.c:1646  */
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
#line 6469 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2449 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6479 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2454 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2462 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2467 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6509 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2474 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2477 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2480 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2483 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2488 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6550 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2493 "src/p.y" /* yacc.c:1646  */
    {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2499 "src/p.y" /* yacc.c:1646  */
    {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 6571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2505 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2506 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6583 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2507 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2510 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6601 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2517 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6613 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 2524 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6625 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 2531 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6637 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 2540 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6649 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 2547 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6661 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 2554 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 2561 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 2570 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6697 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 2577 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 2586 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6721 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 2593 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6733 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 2602 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6745 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 2609 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6757 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 2618 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 6766 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 2624 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6772 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 2625 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 6778 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 2626 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 6784 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 2627 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 6790 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 2628 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 6796 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 2631 "src/p.y" /* yacc.c:1646  */
    {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 6806 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 2636 "src/p.y" /* yacc.c:1646  */
    {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 6816 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 2643 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 2651 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 2658 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6854 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 2666 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6866 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 2674 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 6878 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 2681 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 6889 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 2687 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 6901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 2694 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 6912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 2702 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = false;
                  }
#line 6920 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 2705 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = true;
                  }
#line 6928 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 2711 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 6939 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 2717 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 6949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 2724 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 2730 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 6970 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 2737 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 6981 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 2743 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 6991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 2750 "src/p.y" /* yacc.c:1646  */
    {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 6999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 2753 "src/p.y" /* yacc.c:1646  */
    {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7007 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 2758 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7018 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 2764 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 7028 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 2771 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 7037 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 2777 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 7046 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 2782 "src/p.y" /* yacc.c:1646  */
    {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 7057 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 2790 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7070 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 2798 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 2806 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7096 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 2814 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 2822 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7122 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 2830 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7135 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 2840 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7148 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 2848 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7161 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 2856 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7174 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 2864 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7187 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 2872 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7200 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 2880 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 2890 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 7219 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 2893 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 7225 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 2894 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 7231 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 2895 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 7237 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 7241 "src/y.tab.c" /* yacc.c:1646  */
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
#line 2898 "src/p.y" /* yacc.c:1906  */



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
        servicelist = tail = current = NULL;
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
        current->name_escaped = Util_urlEncode(name, false);
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
 */
static void adddependant(char *dependant) {
        Dependant_T d;

        ASSERT(dependant);

        NEW(d);

        if (current->dependantlist)
                d->next = current->dependantlist;

        d->dependant = dependant;
        d->dependant_escaped = Util_urlEncode(dependant, false);
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
                        yyerror("SSL check cannot be activated -- Monit was not built with SSL support");
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
                        p->parameters.http.method = Http_Get;
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
        ASSERT(ms->match_path);

        FILE *handle = fopen(ms->match_path, "r");
        if (handle == NULL) {
                yyerror2("Cannot read regex match file (%s)", ms->match_path);
                return;
        }

        // The addeventaction() called from addmatch() will reset the command1 to NULL, but we need to duplicate the command for each line, thus need to save it here
        command_t savecommand = command1;
        for (int linenumber = 1; ! feof(handle); linenumber++) {
                char buf[2048];

                if (! fgets(buf, sizeof(buf), handle))
                        continue;

                size_t len = strlen(buf);

                if (len == 0 || buf[0] == '\n')
                        continue;

                if (buf[len - 1] == '\n')
                        buf[len - 1] = 0;

                ms->match_string = Str_dup(buf);

                if (actionnumber == Action_Exec) {
                        if (command1 == NULL) {
                                ASSERT(savecommand);
                                command1 = copycommand(savecommand);
                        }
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

        if (handle == NULL) {
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

                if (NULL == (colonindex = strchr(buf, ':')))
                continue;

                ht_passwd = Str_dup(colonindex+1);
                *colonindex = '\0';

                /* In case we have a file in /etc/passwd or /etc/shadow style we
                 *  want to remove ":.*$" and Crypt and MD5 hashed dont have a colon
                 */

                if ((NULL != (colonindex = strchr(ht_passwd, ':'))) && (dtype != Digest_Cleartext))
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
                if (username == NULL)
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
        Service_T depends_on = NULL;
        Service_T* dlt = &depend_list; /* the current tail of it                                 */
        boolean_t done;                /* no unvisited nodes left?                               */
        boolean_t found_some;          /* last iteration found anything new ?                    */
        depend_list = NULL;            /* depend_list will be the topological sorted servicelist */

        do {
                done = true;
                found_some = false;
                for (Service_T s = servicelist; s; s = s->next) {
                        Dependant_T d;
                        if (s->visited)
                                continue;
                        done = false; // still unvisited nodes
                        depends_on = NULL;
                        for (d = s->dependantlist; d; d = d->next) {
                                Service_T dp = Util_getService(d->dependant);
                                if (! dp) {
                                        LogError("Depending service '%s' is not defined in the control file\n", d->dependant);
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

        for (Service_T s = depend_list; s; s = s->next_depend)
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
        if (mf == 0) {
                return INT_MAX; // Differentiate unitialized (0) and explicit zero
        } else if (mf > 0 && mf <= 255) {
                return mf;
        }
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

static void addsecurityattribute(char *value, Action_Type failed, Action_Type succeeded) {
        SecurityAttribute_T attr;
        NEW(attr);
        addeventaction(&(attr->action), failed, succeeded);
        attr->attribute = value;
        attr->next = current->secattrlist;
        current->secattrlist = attr;
}

