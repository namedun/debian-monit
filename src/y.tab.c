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

#ifdef HAVE_OPENSSL
#include <openssl/ssl.h>
#endif

#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "ProcessTree.h"
#include "device.h"
#include "processor.h"
#include "md5.h"
#include "sha1.h"
#include "checksum.h"
#include "process_sysdep.h"

// libmonit
#include "io/File.h"
#include "util/Str.h"
#include "thread/Thread.h"


/* ------------------------------------------------------------- Definitions */


struct precedence_t {
        bool daemon;
        bool logfile;
        bool pidfile;
};

struct rate_t {
        unsigned int count;
        unsigned int cycles;
};

/* yacc interface */
void  yyerror(const char *,...) __attribute__((format (printf, 1, 2)));
void  yyerror2(const char *,...) __attribute__((format (printf, 1, 2)));
void  yywarning(const char *,...) __attribute__((format (printf, 1, 2)));
void  yywarning2(const char *,...) __attribute__((format (printf, 1, 2)));

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
static unsigned int repeat = 0;
static unsigned int repeat1 = 0;
static unsigned int repeat2 = 0;
static Digest_Type digesttype = Digest_Cleartext;

#define BITMAP_MAX (sizeof(long long) * 8)


/* -------------------------------------------------------------- Prototypes */

static void  preparse(void);
static void  postparse(void);
static bool _parseOutgoingAddress(const char *ip, Outgoing_T *outgoing);
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
static bool addcredentials(char *, char *, Digest_Type, bool);
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
static void _setPEM(char **store, char *path, const char *description, bool isFile);
static void _setSSLOptions(SslOptions_T options);
#ifdef HAVE_OPENSSL
static void _setSSLVersion(short version);
#endif
static void _unsetSSLVersion(short version);
static void addsecurityattribute(char *, Action_Type, Action_Type);
static void addfiledescriptors(Operator_Type, bool, long long, float, Action_Type, Action_Type);


#line 362 "src/y.tab.c" /* yacc.c:339  */

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
    PEMKEY = 282,
    PEMCHAIN = 283,
    ENABLE = 284,
    DISABLE = 285,
    SSLTOKEN = 286,
    CIPHER = 287,
    CLIENTPEMFILE = 288,
    ALLOWSELFCERTIFICATION = 289,
    SELFSIGNED = 290,
    VERIFY = 291,
    CERTIFICATE = 292,
    CACERTIFICATEFILE = 293,
    CACERTIFICATEPATH = 294,
    VALID = 295,
    INTERFACE = 296,
    LINK = 297,
    PACKET = 298,
    BYTEIN = 299,
    BYTEOUT = 300,
    PACKETIN = 301,
    PACKETOUT = 302,
    SPEED = 303,
    SATURATION = 304,
    UPLOAD = 305,
    DOWNLOAD = 306,
    TOTAL = 307,
    IDFILE = 308,
    STATEFILE = 309,
    SEND = 310,
    EXPECT = 311,
    CYCLE = 312,
    COUNT = 313,
    REMINDER = 314,
    REPEAT = 315,
    LIMITS = 316,
    SENDEXPECTBUFFER = 317,
    EXPECTBUFFER = 318,
    FILECONTENTBUFFER = 319,
    HTTPCONTENTBUFFER = 320,
    PROGRAMOUTPUT = 321,
    NETWORKTIMEOUT = 322,
    PROGRAMTIMEOUT = 323,
    STARTTIMEOUT = 324,
    STOPTIMEOUT = 325,
    RESTARTTIMEOUT = 326,
    PIDFILE = 327,
    START = 328,
    STOP = 329,
    PATHTOK = 330,
    RSAKEY = 331,
    HOST = 332,
    HOSTNAME = 333,
    PORT = 334,
    IPV4 = 335,
    IPV6 = 336,
    TYPE = 337,
    UDP = 338,
    TCP = 339,
    TCPSSL = 340,
    PROTOCOL = 341,
    CONNECTION = 342,
    ALERT = 343,
    NOALERT = 344,
    MAILFORMAT = 345,
    UNIXSOCKET = 346,
    SIGNATURE = 347,
    TIMEOUT = 348,
    RETRY = 349,
    RESTART = 350,
    CHECKSUM = 351,
    EVERY = 352,
    NOTEVERY = 353,
    DEFAULT = 354,
    HTTP = 355,
    HTTPS = 356,
    APACHESTATUS = 357,
    FTP = 358,
    SMTP = 359,
    SMTPS = 360,
    POP = 361,
    POPS = 362,
    IMAP = 363,
    IMAPS = 364,
    CLAMAV = 365,
    NNTP = 366,
    NTP3 = 367,
    MYSQL = 368,
    MYSQLS = 369,
    DNS = 370,
    WEBSOCKET = 371,
    MQTT = 372,
    SSH = 373,
    DWP = 374,
    LDAP2 = 375,
    LDAP3 = 376,
    RDATE = 377,
    RSYNC = 378,
    TNS = 379,
    PGSQL = 380,
    POSTFIXPOLICY = 381,
    SIP = 382,
    LMTP = 383,
    GPS = 384,
    RADIUS = 385,
    MEMCACHE = 386,
    REDIS = 387,
    MONGODB = 388,
    SIEVE = 389,
    SPAMASSASSIN = 390,
    FAIL2BAN = 391,
    STRING = 392,
    PATH = 393,
    MAILADDR = 394,
    MAILFROM = 395,
    MAILREPLYTO = 396,
    MAILSUBJECT = 397,
    MAILBODY = 398,
    SERVICENAME = 399,
    STRINGNAME = 400,
    NUMBER = 401,
    PERCENT = 402,
    LOGLIMIT = 403,
    CLOSELIMIT = 404,
    DNSLIMIT = 405,
    KEEPALIVELIMIT = 406,
    REPLYLIMIT = 407,
    REQUESTLIMIT = 408,
    STARTLIMIT = 409,
    WAITLIMIT = 410,
    GRACEFULLIMIT = 411,
    CLEANUPLIMIT = 412,
    REAL = 413,
    CHECKPROC = 414,
    CHECKFILESYS = 415,
    CHECKFILE = 416,
    CHECKDIR = 417,
    CHECKHOST = 418,
    CHECKSYSTEM = 419,
    CHECKFIFO = 420,
    CHECKPROGRAM = 421,
    CHECKNET = 422,
    THREADS = 423,
    CHILDREN = 424,
    METHOD = 425,
    GET = 426,
    HEAD = 427,
    STATUS = 428,
    ORIGIN = 429,
    VERSIONOPT = 430,
    READ = 431,
    WRITE = 432,
    OPERATION = 433,
    SERVICETIME = 434,
    DISK = 435,
    RESOURCE = 436,
    MEMORY = 437,
    TOTALMEMORY = 438,
    LOADAVG1 = 439,
    LOADAVG5 = 440,
    LOADAVG15 = 441,
    SWAP = 442,
    MODE = 443,
    ACTIVE = 444,
    PASSIVE = 445,
    MANUAL = 446,
    ONREBOOT = 447,
    NOSTART = 448,
    LASTSTATE = 449,
    CORE = 450,
    CPU = 451,
    TOTALCPU = 452,
    CPUUSER = 453,
    CPUSYSTEM = 454,
    CPUWAIT = 455,
    CPUNICE = 456,
    CPUHARDIRQ = 457,
    CPUSOFTIRQ = 458,
    CPUSTEAL = 459,
    CPUGUEST = 460,
    CPUGUESTNICE = 461,
    GROUP = 462,
    REQUEST = 463,
    DEPENDS = 464,
    BASEDIR = 465,
    SLOT = 466,
    EVENTQUEUE = 467,
    SECRET = 468,
    HOSTHEADER = 469,
    UID = 470,
    EUID = 471,
    GID = 472,
    MMONIT = 473,
    INSTANCE = 474,
    USERNAME = 475,
    PASSWORD = 476,
    TIME = 477,
    ATIME = 478,
    CTIME = 479,
    MTIME = 480,
    CHANGED = 481,
    MILLISECOND = 482,
    SECOND = 483,
    MINUTE = 484,
    HOUR = 485,
    DAY = 486,
    MONTH = 487,
    SSLV2 = 488,
    SSLV3 = 489,
    TLSV1 = 490,
    TLSV11 = 491,
    TLSV12 = 492,
    TLSV13 = 493,
    CERTMD5 = 494,
    AUTO = 495,
    NOSSLV2 = 496,
    NOSSLV3 = 497,
    NOTLSV1 = 498,
    NOTLSV11 = 499,
    NOTLSV12 = 500,
    NOTLSV13 = 501,
    BYTE = 502,
    KILOBYTE = 503,
    MEGABYTE = 504,
    GIGABYTE = 505,
    INODE = 506,
    SPACE = 507,
    TFREE = 508,
    PERMISSION = 509,
    SIZE = 510,
    MATCH = 511,
    NOT = 512,
    IGNORE = 513,
    ACTION = 514,
    UPTIME = 515,
    EXEC = 516,
    UNMONITOR = 517,
    PING = 518,
    PING4 = 519,
    PING6 = 520,
    ICMP = 521,
    ICMPECHO = 522,
    NONEXIST = 523,
    EXIST = 524,
    INVALID = 525,
    DATA = 526,
    RECOVERED = 527,
    PASSED = 528,
    SUCCEEDED = 529,
    URL = 530,
    CONTENT = 531,
    PID = 532,
    PPID = 533,
    FSFLAG = 534,
    REGISTER = 535,
    CREDENTIALS = 536,
    URLOBJECT = 537,
    ADDRESSOBJECT = 538,
    TARGET = 539,
    TIMESPEC = 540,
    HTTPHEADER = 541,
    MAXFORWARD = 542,
    FIPS = 543,
    SECURITY = 544,
    ATTRIBUTE = 545,
    FILEDESCRIPTORS = 546,
    GREATER = 547,
    GREATEROREQUAL = 548,
    LESS = 549,
    LESSOREQUAL = 550,
    EQUAL = 551,
    NOTEQUAL = 552
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
#define PEMKEY 282
#define PEMCHAIN 283
#define ENABLE 284
#define DISABLE 285
#define SSLTOKEN 286
#define CIPHER 287
#define CLIENTPEMFILE 288
#define ALLOWSELFCERTIFICATION 289
#define SELFSIGNED 290
#define VERIFY 291
#define CERTIFICATE 292
#define CACERTIFICATEFILE 293
#define CACERTIFICATEPATH 294
#define VALID 295
#define INTERFACE 296
#define LINK 297
#define PACKET 298
#define BYTEIN 299
#define BYTEOUT 300
#define PACKETIN 301
#define PACKETOUT 302
#define SPEED 303
#define SATURATION 304
#define UPLOAD 305
#define DOWNLOAD 306
#define TOTAL 307
#define IDFILE 308
#define STATEFILE 309
#define SEND 310
#define EXPECT 311
#define CYCLE 312
#define COUNT 313
#define REMINDER 314
#define REPEAT 315
#define LIMITS 316
#define SENDEXPECTBUFFER 317
#define EXPECTBUFFER 318
#define FILECONTENTBUFFER 319
#define HTTPCONTENTBUFFER 320
#define PROGRAMOUTPUT 321
#define NETWORKTIMEOUT 322
#define PROGRAMTIMEOUT 323
#define STARTTIMEOUT 324
#define STOPTIMEOUT 325
#define RESTARTTIMEOUT 326
#define PIDFILE 327
#define START 328
#define STOP 329
#define PATHTOK 330
#define RSAKEY 331
#define HOST 332
#define HOSTNAME 333
#define PORT 334
#define IPV4 335
#define IPV6 336
#define TYPE 337
#define UDP 338
#define TCP 339
#define TCPSSL 340
#define PROTOCOL 341
#define CONNECTION 342
#define ALERT 343
#define NOALERT 344
#define MAILFORMAT 345
#define UNIXSOCKET 346
#define SIGNATURE 347
#define TIMEOUT 348
#define RETRY 349
#define RESTART 350
#define CHECKSUM 351
#define EVERY 352
#define NOTEVERY 353
#define DEFAULT 354
#define HTTP 355
#define HTTPS 356
#define APACHESTATUS 357
#define FTP 358
#define SMTP 359
#define SMTPS 360
#define POP 361
#define POPS 362
#define IMAP 363
#define IMAPS 364
#define CLAMAV 365
#define NNTP 366
#define NTP3 367
#define MYSQL 368
#define MYSQLS 369
#define DNS 370
#define WEBSOCKET 371
#define MQTT 372
#define SSH 373
#define DWP 374
#define LDAP2 375
#define LDAP3 376
#define RDATE 377
#define RSYNC 378
#define TNS 379
#define PGSQL 380
#define POSTFIXPOLICY 381
#define SIP 382
#define LMTP 383
#define GPS 384
#define RADIUS 385
#define MEMCACHE 386
#define REDIS 387
#define MONGODB 388
#define SIEVE 389
#define SPAMASSASSIN 390
#define FAIL2BAN 391
#define STRING 392
#define PATH 393
#define MAILADDR 394
#define MAILFROM 395
#define MAILREPLYTO 396
#define MAILSUBJECT 397
#define MAILBODY 398
#define SERVICENAME 399
#define STRINGNAME 400
#define NUMBER 401
#define PERCENT 402
#define LOGLIMIT 403
#define CLOSELIMIT 404
#define DNSLIMIT 405
#define KEEPALIVELIMIT 406
#define REPLYLIMIT 407
#define REQUESTLIMIT 408
#define STARTLIMIT 409
#define WAITLIMIT 410
#define GRACEFULLIMIT 411
#define CLEANUPLIMIT 412
#define REAL 413
#define CHECKPROC 414
#define CHECKFILESYS 415
#define CHECKFILE 416
#define CHECKDIR 417
#define CHECKHOST 418
#define CHECKSYSTEM 419
#define CHECKFIFO 420
#define CHECKPROGRAM 421
#define CHECKNET 422
#define THREADS 423
#define CHILDREN 424
#define METHOD 425
#define GET 426
#define HEAD 427
#define STATUS 428
#define ORIGIN 429
#define VERSIONOPT 430
#define READ 431
#define WRITE 432
#define OPERATION 433
#define SERVICETIME 434
#define DISK 435
#define RESOURCE 436
#define MEMORY 437
#define TOTALMEMORY 438
#define LOADAVG1 439
#define LOADAVG5 440
#define LOADAVG15 441
#define SWAP 442
#define MODE 443
#define ACTIVE 444
#define PASSIVE 445
#define MANUAL 446
#define ONREBOOT 447
#define NOSTART 448
#define LASTSTATE 449
#define CORE 450
#define CPU 451
#define TOTALCPU 452
#define CPUUSER 453
#define CPUSYSTEM 454
#define CPUWAIT 455
#define CPUNICE 456
#define CPUHARDIRQ 457
#define CPUSOFTIRQ 458
#define CPUSTEAL 459
#define CPUGUEST 460
#define CPUGUESTNICE 461
#define GROUP 462
#define REQUEST 463
#define DEPENDS 464
#define BASEDIR 465
#define SLOT 466
#define EVENTQUEUE 467
#define SECRET 468
#define HOSTHEADER 469
#define UID 470
#define EUID 471
#define GID 472
#define MMONIT 473
#define INSTANCE 474
#define USERNAME 475
#define PASSWORD 476
#define TIME 477
#define ATIME 478
#define CTIME 479
#define MTIME 480
#define CHANGED 481
#define MILLISECOND 482
#define SECOND 483
#define MINUTE 484
#define HOUR 485
#define DAY 486
#define MONTH 487
#define SSLV2 488
#define SSLV3 489
#define TLSV1 490
#define TLSV11 491
#define TLSV12 492
#define TLSV13 493
#define CERTMD5 494
#define AUTO 495
#define NOSSLV2 496
#define NOSSLV3 497
#define NOTLSV1 498
#define NOTLSV11 499
#define NOTLSV12 500
#define NOTLSV13 501
#define BYTE 502
#define KILOBYTE 503
#define MEGABYTE 504
#define GIGABYTE 505
#define INODE 506
#define SPACE 507
#define TFREE 508
#define PERMISSION 509
#define SIZE 510
#define MATCH 511
#define NOT 512
#define IGNORE 513
#define ACTION 514
#define UPTIME 515
#define EXEC 516
#define UNMONITOR 517
#define PING 518
#define PING4 519
#define PING6 520
#define ICMP 521
#define ICMPECHO 522
#define NONEXIST 523
#define EXIST 524
#define INVALID 525
#define DATA 526
#define RECOVERED 527
#define PASSED 528
#define SUCCEEDED 529
#define URL 530
#define CONTENT 531
#define PID 532
#define PPID 533
#define FSFLAG 534
#define REGISTER 535
#define CREDENTIALS 536
#define URLOBJECT 537
#define ADDRESSOBJECT 538
#define TARGET 539
#define TIMESPEC 540
#define HTTPHEADER 541
#define MAXFORWARD 542
#define FIPS 543
#define SECURITY 544
#define ATTRIBUTE 545
#define FILEDESCRIPTORS 546
#define GREATER 547
#define GREATEROREQUAL 548
#define LESS 549
#define LESSOREQUAL 550
#define EQUAL 551
#define NOTEQUAL 552

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 322 "src/p.y" /* yacc.c:355  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 1004 "src/y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 1021 "src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1839

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  304
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  812
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1537

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   552

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
       2,     2,     2,     2,     2,     2,     2,     2,   300,     2,
       2,     2,     2,     2,   301,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   302,     2,   303,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   298,     2,   299,     2,     2,     2,     2,
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   376,   376,   377,   380,   381,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   413,   414,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   443,
     444,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   467,
     468,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   493,   494,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   514,   515,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   533,   534,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     554,   555,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   573,   574,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   594,   595,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   611,   615,   618,   624,   634,
     639,   642,   647,   652,   655,   658,   663,   669,   672,   673,
     676,   679,   682,   685,   688,   691,   694,   697,   700,   703,
     706,   709,   712,   715,   720,   725,   733,   736,   741,   744,
     748,   754,   759,   764,   772,   775,   776,   779,   785,   786,
     789,   792,   793,   794,   795,   798,   799,   804,   809,   812,
     815,   816,   819,   823,   827,   831,   835,   838,   842,   845,
     848,   851,   854,   857,   862,   868,   869,   872,   886,   893,
     902,   903,   906,   907,   910,   917,   920,   927,   930,   937,
     940,   947,   950,   957,   960,   967,   970,   981,   990,   997,
    1012,  1013,  1016,  1025,  1036,  1037,  1040,  1043,  1046,  1047,
    1048,  1049,  1052,  1079,  1080,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1095,  1101,  1107,  1113,  1119,  1125,
    1126,  1129,  1134,  1139,  1143,  1147,  1153,  1154,  1157,  1158,
    1161,  1164,  1169,  1174,  1177,  1185,  1189,  1193,  1197,  1201,
    1201,  1208,  1208,  1215,  1215,  1222,  1222,  1229,  1236,  1237,
    1240,  1246,  1249,  1254,  1257,  1260,  1267,  1276,  1281,  1284,
    1289,  1294,  1299,  1307,  1313,  1328,  1333,  1339,  1347,  1350,
    1355,  1358,  1364,  1367,  1372,  1373,  1376,  1377,  1380,  1383,
    1388,  1392,  1396,  1399,  1404,  1407,  1412,  1417,  1420,  1425,
    1434,  1435,  1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1448,  1451,  1458,  1459,  1462,  1463,  1464,  1465,
    1466,  1467,  1470,  1476,  1477,  1480,  1481,  1482,  1483,  1484,
    1487,  1493,  1498,  1503,  1510,  1511,  1514,  1515,  1516,  1517,
    1520,  1523,  1528,  1533,  1539,  1542,  1547,  1550,  1554,  1559,
    1560,  1563,  1564,  1567,  1572,  1575,  1578,  1581,  1584,  1587,
    1590,  1593,  1598,  1601,  1606,  1609,  1612,  1615,  1618,  1621,
    1624,  1628,  1631,  1634,  1638,  1641,  1644,  1649,  1652,  1655,
    1660,  1663,  1666,  1669,  1672,  1675,  1678,  1681,  1684,  1687,
    1690,  1693,  1698,  1706,  1716,  1717,  1720,  1723,  1726,  1729,
    1734,  1735,  1738,  1741,  1746,  1747,  1750,  1753,  1758,  1759,
    1762,  1765,  1768,  1781,  1787,  1796,  1799,  1804,  1809,  1810,
    1813,  1816,  1821,  1822,  1825,  1828,  1831,  1832,  1833,  1834,
    1835,  1836,  1839,  1849,  1852,  1857,  1861,  1867,  1872,  1878,
    1879,  1884,  1889,  1890,  1893,  1898,  1899,  1902,  1905,  1908,
    1911,  1915,  1919,  1923,  1927,  1931,  1935,  1939,  1943,  1947,
    1953,  1957,  1964,  1970,  1976,  1984,  1989,  1999,  2004,  2009,
    2012,  2017,  2020,  2025,  2028,  2033,  2036,  2041,  2044,  2049,
    2054,  2059,  2065,  2073,  2079,  2080,  2083,  2087,  2090,  2094,
    2099,  2102,  2105,  2106,  2109,  2110,  2111,  2112,  2113,  2114,
    2115,  2116,  2117,  2118,  2119,  2120,  2121,  2122,  2123,  2124,
    2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,  2133,  2134,
    2135,  2136,  2137,  2138,  2141,  2142,  2145,  2146,  2149,  2150,
    2151,  2152,  2155,  2159,  2163,  2169,  2172,  2175,  2181,  2184,
    2188,  2193,  2200,  2203,  2204,  2207,  2210,  2217,  2226,  2232,
    2233,  2236,  2237,  2238,  2239,  2240,  2241,  2242,  2245,  2251,
    2252,  2255,  2256,  2257,  2258,  2261,  2266,  2273,  2280,  2286,
    2292,  2298,  2304,  2310,  2316,  2322,  2328,  2334,  2339,  2344,
    2351,  2356,  2361,  2366,  2373,  2378,  2385,  2392,  2399,  2419,
    2420,  2421,  2424,  2425,  2429,  2434,  2439,  2446,  2451,  2456,
    2463,  2464,  2467,  2468,  2469,  2470,  2473,  2480,  2488,  2489,
    2490,  2491,  2492,  2493,  2494,  2495,  2498,  2499,  2500,  2501,
    2502,  2503,  2506,  2507,  2508,  2510,  2511,  2513,  2516,  2519,
    2527,  2530,  2533,  2537,  2540,  2543,  2546,  2551,  2562,  2573,
    2583,  2595,  2596,  2601,  2608,  2609,  2614,  2621,  2624,  2627,
    2630,  2635,  2639,  2646,  2652,  2653,  2654,  2657,  2664,  2671,
    2678,  2687,  2694,  2701,  2708,  2717,  2724,  2733,  2740,  2749,
    2756,  2765,  2771,  2772,  2773,  2774,  2775,  2778,  2783,  2790,
    2798,  2805,  2813,  2821,  2828,  2834,  2841,  2849,  2852,  2858,
    2864,  2871,  2877,  2884,  2890,  2897,  2900,  2905,  2911,  2919,
    2925,  2933,  2941,  2947,  2954,  2960,  2965,  2973,  2981,  2989,
    2997,  3005,  3013,  3023,  3031,  3039,  3047,  3055,  3063,  3073,
    3076,  3077,  3078
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
  "PEMKEY", "PEMCHAIN", "ENABLE", "DISABLE", "SSLTOKEN", "CIPHER",
  "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "SELFSIGNED", "VERIFY",
  "CERTIFICATE", "CACERTIFICATEFILE", "CACERTIFICATEPATH", "VALID",
  "INTERFACE", "LINK", "PACKET", "BYTEIN", "BYTEOUT", "PACKETIN",
  "PACKETOUT", "SPEED", "SATURATION", "UPLOAD", "DOWNLOAD", "TOTAL",
  "IDFILE", "STATEFILE", "SEND", "EXPECT", "CYCLE", "COUNT", "REMINDER",
  "REPEAT", "LIMITS", "SENDEXPECTBUFFER", "EXPECTBUFFER",
  "FILECONTENTBUFFER", "HTTPCONTENTBUFFER", "PROGRAMOUTPUT",
  "NETWORKTIMEOUT", "PROGRAMTIMEOUT", "STARTTIMEOUT", "STOPTIMEOUT",
  "RESTARTTIMEOUT", "PIDFILE", "START", "STOP", "PATHTOK", "RSAKEY",
  "HOST", "HOSTNAME", "PORT", "IPV4", "IPV6", "TYPE", "UDP", "TCP",
  "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT", "MAILFORMAT",
  "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RETRY", "RESTART", "CHECKSUM",
  "EVERY", "NOTEVERY", "DEFAULT", "HTTP", "HTTPS", "APACHESTATUS", "FTP",
  "SMTP", "SMTPS", "POP", "POPS", "IMAP", "IMAPS", "CLAMAV", "NNTP",
  "NTP3", "MYSQL", "MYSQLS", "DNS", "WEBSOCKET", "MQTT", "SSH", "DWP",
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
  "MANUAL", "ONREBOOT", "NOSTART", "LASTSTATE", "CORE", "CPU", "TOTALCPU",
  "CPUUSER", "CPUSYSTEM", "CPUWAIT", "CPUNICE", "CPUHARDIRQ", "CPUSOFTIRQ",
  "CPUSTEAL", "CPUGUEST", "CPUGUESTNICE", "GROUP", "REQUEST", "DEPENDS",
  "BASEDIR", "SLOT", "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "EUID",
  "GID", "MMONIT", "INSTANCE", "USERNAME", "PASSWORD", "TIME", "ATIME",
  "CTIME", "MTIME", "CHANGED", "MILLISECOND", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "SSLV2", "SSLV3", "TLSV1", "TLSV11", "TLSV12", "TLSV13",
  "CERTMD5", "AUTO", "NOSSLV2", "NOSSLV3", "NOTLSV1", "NOTLSV11",
  "NOTLSV12", "NOTLSV13", "BYTE", "KILOBYTE", "MEGABYTE", "GIGABYTE",
  "INODE", "SPACE", "TFREE", "PERMISSION", "SIZE", "MATCH", "NOT",
  "IGNORE", "ACTION", "UPTIME", "EXEC", "UNMONITOR", "PING", "PING4",
  "PING6", "ICMP", "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA",
  "RECOVERED", "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID",
  "FSFLAG", "REGISTER", "CREDENTIALS", "URLOBJECT", "ADDRESSOBJECT",
  "TARGET", "TIMESPEC", "HTTPHEADER", "MAXFORWARD", "FIPS", "SECURITY",
  "ATTRIBUTE", "FILEDESCRIPTORS", "GREATER", "GREATEROREQUAL", "LESS",
  "LESSOREQUAL", "EQUAL", "NOTEQUAL", "'{'", "'}'", "':'", "'@'", "'['",
  "']'", "$accept", "cfgfile", "statement_list", "statement",
  "optproclist", "optproc", "optfilelist", "optfile", "optfilesyslist",
  "optfilesys", "optdirlist", "optdir", "opthostlist", "opthost",
  "optnetlist", "optnet", "optsystemlist", "optsystem", "optfifolist",
  "optfifo", "optprogramlist", "optprogram", "setalert", "setdaemon",
  "setterminal", "startdelay", "setinit", "setonreboot", "setexpectbuffer",
  "setlimits", "limitlist", "limit", "setfips", "setlog", "seteventqueue",
  "setidfile", "setstatefile", "setpid", "setmmonits", "mmonitlist",
  "mmonit", "mmonitoptlist", "mmonitopt", "credentials", "setssl", "ssl",
  "ssloptionlist", "ssloption", "sslexpire", "expireoperator",
  "sslchecksum", "checksumoperator", "sslversionlist", "sslversion",
  "certmd5", "setmailservers", "setmailformat", "mailserverlist",
  "mailserver", "mailserveroptlist", "mailserveropt", "sethttpd",
  "httpdlist", "httpdoption", "pemfile", "clientpemfile", "allowselfcert",
  "httpdport", "httpdsocket", "httpdsocketoptionlist", "httpdsocketoption",
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
  "smtp", "mqttlist", "mqtt", "mysqllist", "mysql", "target", "maxforward",
  "siplist", "sip", "httplist", "http", "status", "method", "request",
  "responsesum", "hostheader", "httpheaderlist", "secret", "radiuslist",
  "radius", "apache_stat_list", "apache_stat", "exist", "pid", "ppid",
  "uptime", "icmpcount", "icmpsize", "icmptimeout", "icmpoutgoing",
  "stoptimeout", "starttimeout", "restarttimeout", "programtimeout",
  "nettimeout", "connectiontimeout", "retry", "actionrate", "urloption",
  "urloperator", "alert", "alertmail", "noalertmail", "eventoptionlist",
  "eventoption", "formatlist", "formatoptionlist", "formatoption", "every",
  "mode", "onreboot", "group", "depend", "dependlist", "dependant",
  "statusvalue", "resourceprocess", "resourceprocesslist",
  "resourceprocessopt", "resourcesystem", "resourcesystemlist",
  "resourcesystemopt", "resourcecpuproc", "resourcecpu", "resourcecpuid",
  "resourcemem", "resourcememproc", "resourceswap", "resourcethreads",
  "resourcechild", "resourceload", "resourceloadavg", "coremultiplier",
  "resourceread", "resourcewrite", "value", "timestamptype", "timestamp",
  "operator", "time", "totaltime", "currenttime", "repeat", "action",
  "action1", "action2", "rateXcycles", "rateXYcycles", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "read", "write",
  "servicetime", "fsflag", "unit", "permission", "match", "matchflagnot",
  "size", "uid", "euid", "secattr", "filedescriptorssystem",
  "filedescriptorsprocess", "filedescriptorsprocesstotal", "gid",
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
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   123,   125,
      58,    64,    91,    93
};
# endif

#define YYPACT_NINF -806

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-806)))

#define YYTABLE_NINF -732

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     408,    96,   -47,     7,    12,    17,    38,    84,   109,   131,
     138,   136,   408,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,    82,   146,   204,  -806,  -806,   336,    88,   253,   256,
     111,   231,   269,   281,   124,    44,   276,   158,  -806,   -57,
      -8,   383,   385,   396,   468,  -806,   449,   452,    75,  -806,
    -806,   756,   329,   838,   904,  1121,  1141,  1263,   904,  1407,
     534,  -806,   434,   466,    77,  -806,  1167,  -806,  -806,  -806,
    -806,  -806,   388,  -806,  -806,   776,  -806,  -806,  -806,   410,
     405,  -806,   158,   283,   259,   263,  1468,   521,   445,   448,
     417,   474,   464,   490,   496,   508,   518,   511,   513,    83,
     518,   518,   524,   518,   -84,   380,   482,   177,   533,   525,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,   -41,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,    81,  -161,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,    94,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
      21,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,    69,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,   249,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  1419,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
     -96,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,   558,   674,  -806,   561,   528,   581,  -806,
     647,    10,   592,   599,   651,   653,   523,   613,  -806,   650,
     708,   693,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,    19,   107,  -806,  -806,  -806,  -806,
    -806,   601,   615,  -806,  -806,    48,  -806,   664,  -806,   836,
     283,   620,  -806,   776,  1468,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,   432,  -806,   750,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,   296,  -806,  -806,  -806,   240,   623,   825,   883,   883,
     883,   883,   564,   883,   883,  -806,  -806,  -806,   883,   883,
     498,   659,   883,   786,   883,  1462,  -806,  -806,  -806,  -806,
    -806,  -806,   727,  -806,  -806,   447,   453,  -806,   529,   877,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
     525,  -806,   639,  1468,   521,    79,  -806,  -806,  -806,  -806,
     239,   883,   659,   489,   883,   691,  -806,   489,   700,  -129,
     883,   883,   883,  -169,   857,   874,   638,   -33,   918,   883,
     883,   883,   738,   933,   883,   883,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,   883,  1213,  -806,  -806,
     883,  -806,  -806,  -806,   883,   808,  -806,   837,  -806,   889,
     -11,   850,  -806,  -806,  -806,  -806,  -806,  -806,   852,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,   762,   858,  -806,   856,   860,   862,   696,
     868,   870,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,   709,   714,   717,   719,   723,   724,   732,   733,
     735,   737,  -806,  -806,   740,   742,   746,   751,   753,   784,
     790,   791,   793,  -806,  -806,  -806,  -806,  -806,  -806,   866,
     869,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   219,   789,
     937,  -806,   974,   892,   156,   212,   184,  -806,  -806,  -806,
     919,   948,   244,   307,   322,   807,   797,  1015,  -806,   883,
     951,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   952,   953,
     -39,   -39,   883,   883,   -39,   -39,   -39,   -39,   786,   786,
     786,   955,    33,  -806,  -806,  1097,   -34,  -806,  1107,  -806,
     883,   979,   228,  -806,   980,   237,  -806,   982,   255,  -806,
    -806,  -806,  1468,  1208,  -806,  -806,  -806,   983,  1034,   786,
     786,   786,  1035,   987,  -806,  -806,   662,   988,   682,   686,
     702,   -15,     0,     6,   786,   883,   242,   883,   -39,  -806,
    -806,  -806,  1053,   786,   990,   992,   994,   883,   883,   786,
     -39,   -39,   258,  -806,  1136,   -39,   996,   786,  -806,   528,
      14,  -806,  -806,  -806,  -806,  -806,  -806,  1008,  1022,  1024,
    1025,  1027,  1152,   106,   165,  1036,  1046,  1047,  1051,  1054,
     828,   851,  1061,  1064,  -806,  1057,  1058,  1059,  1060,  1062,
    1066,  1071,  1074,  1075,  -806,   945,  -806,   937,   521,  -806,
     999,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   786,
     786,   786,   786,   786,   786,  -806,   757,  1076,  -806,   548,
    1082,  1150,  -806,  -806,  -806,  -806,   388,   388,   267,   277,
     359,   469,  1085,  1087,  1235,  1236,  1237,   574,  -806,  1186,
     435,    56,  1098,   435,   -39,  1016,  -806,  1019,  -806,  1020,
    -806,  1275,   937,   786,    49,  1244,  1246,  1255,   786,   388,
     786,   786,   574,   786,   786,  -806,  -806,  -806,  -806,  1083,
     388,  1084,   388,  1037,  1039,  1258,   293,    56,  1118,   -39,
     530,    60,    60,    60,  1001,  -806,  1264,  1124,   117,   181,
    1127,  1129,  1272,   600,   640,    56,  1131,   435,  1132,   786,
    1277,   989,   989,  -806,  1146,  1027,  1027,  1027,  1152,  -806,
    1027,  -806,  -806,  -806,  -806,   355,   366,  1138,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    1553,   388,   388,   388,   388,   681,   703,   712,   715,   718,
    -806,   521,  -806,  -806,  1281,  1282,  1284,  1285,  1286,  1292,
      61,   786,   786,  -806,   356,  1165,  1168,   541,  1649,  1162,
    1164,  -806,  -806,  -806,  -806,  -806,  -806,  1309,   786,  1310,
    1088,  1088,  1140,   388,  1147,   388,  -806,  -806,  -806,  -806,
    -806,  -806,   435,   435,   435,  -806,  -806,  -806,  -806,  -806,
     786,  -806,  -806,  -806,  -806,  -806,   518,  -806,  -806,  1323,
    1326,   786,  1323,  -806,  -806,  -806,  -806,   937,   521,  1327,
    1197,  1330,   435,   435,   435,  1341,   786,  1342,  1344,   786,
    1348,  1349,   786,  1088,   786,  1088,   786,   786,   435,    56,
    1209,  1350,   786,   814,   786,   786,  1220,  1217,  1218,  1219,
    -806,  -806,  -806,  -806,  -806,  1362,  1364,  1368,  -806,    60,
     435,   786,  1088,  1088,  1088,  1088,   241,   248,   435,  -806,
    -806,  -806,  -806,  1369,   786,  1323,  -806,  1370,   435,  1240,
    1243,  -806,  1027,  1027,  1027,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   435,   435,
     435,   435,   435,   435,    26,   489,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  1377,  1378,  1383,  1253,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  1386,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
     966,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,   -12,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  1166,  -806,   435,  1387,    92,
    -806,  -806,  -806,  -806,  1088,  -806,  1088,  -806,  -806,  1323,
    1388,    80,  1393,  -806,   435,  1415,  -806,   521,  -806,   435,
     786,   435,  1323,  -806,  -806,   435,  1416,   435,   435,  1417,
     435,   435,  1421,   786,  1423,   786,  1427,  1429,  -806,  1431,
     786,   435,  1432,   786,   786,  1433,  1434,  -806,  -806,  1196,
    -806,   435,   435,   435,  1435,  1323,  1436,   786,   786,   786,
     786,   364,   368,   430,   450,  1323,   435,  1437,  -806,   435,
    -806,  -806,  -806,  1323,  1323,  1323,  1323,  1323,  1323,  1154,
    1307,   435,   435,   435,  -806,   435,  1458,   312,   312,  1312,
     883,   883,   883,   883,   883,   883,   883,   883,   883,   883,
    -806,  -806,   966,  -806,   731,   731,   -28,   -28,  1315,  1316,
    1308,  1319,   -12,  -806,   731,    29,  1245,  -806,  1323,   435,
    -806,  -806,  -806,  -806,  -806,   435,  1363,     8,  -806,   440,
    1323,   435,  -806,  1323,  1454,  1323,  -806,  -806,   435,  -806,
    -806,   435,  -806,  -806,   435,  1456,   435,  1459,   435,   435,
     435,  1460,  1323,   435,  1461,  1466,   435,   435,  -806,  1323,
    1323,  1323,   435,  -806,   435,  1470,  1477,  1478,  1483,   503,
    -806,  -806,  -806,   786,   503,   786,   503,   786,   503,   786,
    -806,  1323,   435,  1323,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  1343,  -806,  1323,  1323,  1323,  1323,  -806,  -806,  -806,
    1336,   787,   883,   834,  1354,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  1347,  1352,  1353,  1355,  1357,
    1360,  1365,  1373,  1374,  1379,  -806,  -806,  -806,  -806,  1404,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,   246,  1380,  -806,  -806,  -806,  1371,  -806,  -806,  -806,
    1323,  1323,    63,  -806,   786,   786,   786,  -806,  1323,  -806,
     435,  -806,  1323,  1323,  1323,   435,  1323,   435,  1323,  1323,
    1323,   435,  -806,  1323,   435,   435,  1323,  1323,  -806,  -806,
    -806,  1323,  1323,   435,   435,   435,   435,   786,  1522,   786,
    1523,   786,  1526,   786,  1527,  -806,  1323,  -806,  1278,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  1391,  -806,  -806,  -806,
    -192,  1392,  1395,  1400,  1401,  1402,  1403,  1409,  1410,  1411,
    1412,    16,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  1481,
    -806,  -806,  1535,  1555,  1557,  -806,  1323,  -806,  -806,  -806,
    1323,  -806,  1323,  -806,  -806,  -806,  1323,  -806,  1323,  1323,
    -806,  -806,  -806,  -806,  1323,  1323,  1323,  1323,  1558,   435,
    1561,   435,  1562,   435,  1566,   435,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,   989,   989,  1447,  -806,   435,   435,   435,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   435,  1323,
     435,  1323,   435,  1323,   435,  1323,  1448,  1449,  -806,  -806,
    -806,  -806,  -806,  1323,  -806,  1323,  -806,  1323,  -806,  1323,
    -806,  -806,  -806,  -806,  -806,  -806,  -806
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     6,     8,     9,    20,    22,    19,
      21,    23,    10,    11,    17,    18,    16,    12,     7,    13,
      14,    15,    33,    59,    79,   101,   118,   133,   150,   165,
     182,     0,     0,     0,   303,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   614,
       0,     0,     0,     0,     0,   364,     0,     0,     0,     1,
       5,    24,    25,    26,    27,    28,    32,    29,    30,    31,
     226,   225,   200,   294,   567,   290,   302,   199,   250,   231,
     232,   208,   762,   233,   580,     0,   203,   204,   205,     0,
       0,   238,   234,   245,     0,     0,     0,   810,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,    48,    49,    50,    38,    39,    40,
      47,    51,    52,   614,   579,    53,    54,    55,    56,    57,
      58,    41,    42,    43,    44,    45,    46,   777,   777,    60,
      61,    62,    63,    64,    66,    68,    67,    75,    76,    77,
      78,    65,    72,    69,    74,    73,    70,    71,     0,    80,
      81,    82,    83,    84,    85,    87,    86,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    88,    89,    90,
       0,   102,   103,   104,   105,   106,   108,   110,   109,   114,
     115,   116,   117,   107,   111,   112,   113,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,     0,   134,   135,   136,   137,   143,   147,   144,
     145,   146,   148,   149,   138,   139,   140,   141,   142,     0,
     151,   152,   153,   154,   163,   155,   156,   157,   158,   159,
     160,   161,   162,   164,   166,   167,   168,   169,   170,   172,
     174,   173,   178,   179,   180,   181,   171,   175,   176,   177,
       0,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,     0,   198,     0,   292,     0,   291,
     387,     0,     0,     0,     0,     0,   248,     0,   316,     0,
       0,     0,   305,   304,   306,   307,   308,   312,   313,   330,
     331,   309,   310,   311,     0,     0,   763,   764,   765,   766,
     206,     0,     0,   620,   621,     0,   616,   228,   230,   237,
     245,     0,   235,     0,     0,   598,   585,   586,   600,   601,
     608,   606,   588,   610,   587,   609,   605,   612,   594,   596,
     611,   602,   607,   584,   613,   591,   595,   599,   592,   597,
     590,   589,   603,   604,   593,     0,   582,     0,   195,   353,
     354,   355,   356,   359,   358,   357,   360,   361,   365,   378,
     379,   565,   374,   362,   363,   430,     0,     0,   698,   698,
     698,   698,     0,   698,   698,   679,   680,   681,   698,   698,
       0,     0,   698,   731,   698,   731,   639,   641,   642,   643,
     644,   645,   682,   646,   647,   561,   559,   581,   563,     0,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   635,
     632,   633,     0,     0,   810,   744,   692,   693,   694,   695,
     744,   698,   778,     0,   698,     0,   778,     0,     0,     0,
     698,   698,   698,     0,   698,   698,     0,   430,     0,   698,
     698,   698,     0,     0,   698,   698,   667,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   698,   731,   649,   654,
     698,   652,   653,   651,   698,     0,   227,     0,   294,     0,
       0,     0,   274,   276,   278,   280,   282,   284,     0,   286,
     275,   277,   279,   281,   283,   285,   298,   299,   300,   301,
     295,   296,   297,     0,     0,   288,     0,     0,     0,   347,
     335,     0,   332,   314,   327,   329,   250,   315,   317,   319,
     326,   328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,   209,   618,   619,   289,   617,     0,
       0,   239,   241,   242,   243,   244,   236,   246,     0,     0,
     614,   583,   811,     0,     0,     0,   565,   375,   376,   366,
       0,     0,     0,     0,     0,     0,     0,     0,   413,   698,
       0,   705,   699,   700,   701,   702,   703,   704,     0,     0,
       0,     0,   698,   698,     0,     0,     0,     0,   731,   731,
     731,     0,     0,   732,   733,     0,     0,   640,     0,   683,
     698,     0,   561,   368,     0,   559,   370,     0,   563,   372,
     622,   634,     0,     0,   576,   745,   746,     0,     0,   731,
     731,   731,     0,     0,   574,   575,     0,     0,     0,     0,
       0,     0,     0,     0,   731,   698,     0,   698,     0,   424,
     424,   424,     0,   731,     0,     0,     0,   698,   698,   731,
       0,     0,     0,   650,     0,     0,     0,   731,   201,   293,
     270,   385,   384,   386,   287,   568,   388,   336,   337,   338,
       0,     0,   351,     0,   318,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,     0,   615,   614,   810,   812,
       0,   380,   382,   381,   383,   377,   367,   431,   433,   731,
     731,   731,   731,   731,   731,   404,     0,     0,   390,   731,
       0,     0,   676,   677,   691,   690,   762,   762,     0,     0,
     762,   762,     0,     0,     0,     0,     0,   706,   729,     0,
       0,   691,     0,     0,     0,     0,   369,     0,   371,     0,
     373,     0,   614,   731,   731,     0,     0,     0,   731,   762,
     731,   731,   706,   731,   731,   772,   771,   776,   775,   691,
     762,   691,   762,   691,     0,     0,     0,   691,     0,     0,
     762,   731,   731,   731,     0,   424,     0,     0,   762,   762,
       0,     0,     0,   762,   762,   691,     0,     0,     0,   731,
       0,   270,   270,   271,     0,     0,     0,     0,   351,   350,
     340,   348,   352,   334,   249,     0,     0,     0,   320,   258,
     260,   259,   257,   261,   254,   255,   252,   253,   262,   263,
     256,   762,   762,   762,   762,     0,     0,     0,     0,     0,
     240,   810,   196,   566,     0,     0,     0,     0,     0,     0,
     731,   731,   731,   432,   731,     0,     0,     0,     0,     0,
       0,   414,   415,   416,   417,   418,   419,     0,   731,     0,
     715,   715,   691,   762,   691,   762,   671,   670,   673,   672,
     655,   656,     0,     0,     0,   707,   708,   709,   710,   711,
     731,   730,   724,   725,   720,   723,     0,   726,   727,   737,
       0,   731,   737,   678,   562,   560,   564,   614,   810,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,   731,
       0,     0,   731,   715,   731,   715,   731,   731,     0,   691,
       0,     0,   731,   762,   731,   731,     0,     0,     0,     0,
     425,   426,   427,   428,   429,     0,     0,     0,   809,   731,
       0,   731,   715,   715,   715,   715,   762,   762,     0,   669,
     668,   675,   674,     0,   731,   737,   657,     0,     0,     0,
       0,   267,   342,   344,   346,   333,   349,   321,   323,   322,
     324,   325,   273,   210,   211,   212,   213,   214,   215,   216,
     217,   220,   221,   218,   219,   222,   223,   197,     0,     0,
       0,     0,     0,     0,     0,     0,   409,   411,   410,   405,
     407,   408,   406,     0,     0,     0,     0,   434,   435,   400,
     402,   401,   391,   392,   393,   398,   394,   395,   397,   399,
     396,     0,   482,   483,   438,   436,   439,   445,   512,   512,
       0,   449,   490,   490,   465,   466,   452,   453,   454,   462,
     463,   498,   498,   446,     0,   494,   471,   447,   455,   456,
     472,   474,   475,   476,   464,   508,   477,   478,   532,   480,
     473,   457,   467,   470,   448,     0,   570,     0,     0,     0,
     716,   684,   687,   686,   715,   689,   715,   552,   553,   737,
       0,   717,     0,   551,     0,     0,   638,   810,   577,     0,
     731,     0,   737,   780,   697,     0,     0,     0,     0,     0,
       0,     0,     0,   731,     0,   731,     0,     0,   761,     0,
     731,     0,     0,   731,   731,     0,     0,   558,   555,     0,
     556,     0,     0,     0,     0,   737,     0,   731,   731,   731,
     731,     0,     0,     0,     0,   737,     0,     0,   648,     0,
     637,   268,   269,   737,   737,   737,   737,   737,   737,   265,
       0,     0,     0,     0,   443,     0,   437,   450,   451,     0,
     698,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     537,   538,   444,   535,   468,   469,   459,   460,     0,     0,
       0,     0,   481,   484,   458,   461,   479,   569,   737,     0,
     572,   571,   685,   688,   550,     0,     0,   717,   721,     0,
     737,     0,   578,   737,     0,   737,   768,   743,     0,   770,
     769,     0,   774,   773,     0,     0,     0,     0,     0,     0,
       0,     0,   737,     0,     0,     0,     0,     0,   557,   737,
     737,   737,     0,   794,     0,     0,     0,     0,     0,     0,
     712,   713,   714,   731,     0,   731,     0,   731,     0,   731,
     795,   737,     0,   737,   781,   782,   783,   784,   792,   793,
     266,     0,   573,   737,   737,   737,   737,   441,   442,   440,
       0,     0,   698,     0,     0,   529,   514,   515,   513,   518,
     519,   516,   517,   520,   539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   536,   492,   493,   491,     0,
     500,   501,   499,   488,   486,   489,   487,   485,   496,   497,
     495,     0,     0,   510,   511,   509,     0,   534,   533,   412,
     737,   737,     0,   722,   734,   734,   734,   789,   737,   767,
       0,   741,   737,   737,   737,     0,   737,     0,   737,   737,
     737,     0,   747,   737,     0,     0,   737,   737,   421,   422,
     423,   737,   737,     0,     0,     0,     0,   731,     0,   731,
       0,   731,     0,   731,     0,   787,   737,   636,     0,   403,
     785,   786,   389,   527,   523,   524,     0,   526,   525,   528,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   270,   506,   505,   507,   531,   791,   554,   718,     0,
     735,   736,     0,     0,     0,   790,   737,   779,   696,   756,
     737,   758,   737,   759,   760,   749,   737,   748,   737,   737,
     752,   751,   420,   796,   737,   737,   737,   737,     0,     0,
       0,     0,     0,     0,     0,     0,   788,   264,   522,   530,
     521,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   270,   270,     0,   719,     0,     0,     0,   742,   755,
     757,   750,   754,   753,   800,   797,   806,   803,     0,   737,
       0,   737,     0,   737,     0,   737,     0,     0,   502,   728,
     738,   739,   740,   737,   801,   737,   798,   737,   807,   737,
     804,   503,   504,   802,   799,   808,   805
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -806,  -806,  -806,  1560,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    1488,  -806,  -806,  1251,  -806,   -83,  1073,  -806,   710,  -806,
    -328,  -802,  -806,  -338,  -337,  -806,  -806,  -806,  1509,  1099,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
     -79,  -805,   758,  -806,  -806,  -806,  -806,  -806,  -806,  -806,
    -806,  -806,  1266,  1329,  1504,  -101,  -400,  -385,  -579,  -597,
    -248,  -806,  1525,  -806,  -806,  1532,  -806,  -806,  -806,  -806,
    -806,  -806,  -589,  -806,  -806,  -806,  -806,  -806,   726,  -806,
    -806,  -806,   728,   729,  -806,   376,   538,  -806,  -806,  -806,
     520,  -806,  -806,  -806,  -806,  -806,   557,  -806,  -806,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -806,   415,   754,
    -806,  -806,  1551,  -806,  -806,  -806,  -806,   997,  1002,   991,
    1049,  -806,  -561,  -545,  1578,   749,  -443,  1595,  1635,  -806,
    -320,  -360,  -139,  1294,  -293,  1728,  1736,  1744,  1752,  1760,
    -806,  1200,  -806,  -806,  -806,  1228,  -806,  -806,  1173,  -806,
    -806,  -806,  -806,  -806,  -806,  -806,  -806,  -233,  -806,  -806,
    -806,  -806,   907,  -329,   426,  -391,   871,  -726,  -772,   424,
    -714,  -238,  -523,  -509,  -500,  -415,  -386,   -80,  -806,  1212,
    -806,  -806,  -806,  -806,  -806,  -806,  -179,   579,  -806,  1506,
    -806,   805,  -806,  -806,  -806,  -806,  -806,   832,  -806,  -806,
    -806,  -806,  -806,  -806,  -439
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    71,   130,    72,   159,    73,   179,
      74,   201,    75,   218,    76,   233,    77,   250,    78,   264,
      79,   281,    14,    15,    16,   295,    17,    18,    19,    20,
     325,   564,    21,    22,    23,    24,    25,    26,    27,   102,
     103,   339,   571,   342,    28,   516,   324,   553,  1037,  1301,
     517,   834,   860,   518,   519,    29,    30,    84,    85,   297,
     520,    31,    86,   313,   314,   315,   316,   317,   318,   704,
     848,   319,   320,   321,   322,   323,   701,   835,   836,   837,
     840,   841,   843,    32,    33,    34,    35,    36,    37,    38,
      39,    40,   131,   132,   133,   391,   586,   392,   588,   521,
     522,   525,   134,   884,  1052,   135,   880,  1039,   136,   749,
     891,   224,   811,   970,   597,   748,   598,  1053,   892,  1196,
    1309,  1055,   893,   894,  1222,  1223,  1214,  1338,  1224,  1350,
    1216,  1342,  1353,  1354,  1225,  1355,  1197,  1318,  1319,  1320,
    1321,  1322,  1323,  1420,  1357,  1226,  1358,  1212,  1213,   137,
     138,   139,   140,   971,   972,   973,   974,   636,   633,   639,
     589,   300,   895,   896,   141,  1042,   656,   142,   143,   144,
     375,   376,   107,   335,   336,   145,   146,   147,   148,   149,
     440,   441,   292,   150,   415,   416,   262,   487,   488,   417,
     489,   490,   491,   418,   492,   419,   420,   421,   422,   630,
     423,   424,   756,   454,   171,   608,   920,  1283,  1111,  1238,
     928,   929,  1520,   623,   624,   625,  1442,  1123,   172,   648,
     191,   192,   193,   194,   195,   196,   330,   173,   174,   455,
     175,   151,   152,   153,   263,   154,   155,   156,   244,   245,
     246,   247,   248,   815,   378
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     628,   574,   575,   312,   444,   644,   587,   735,   609,   610,
     611,   573,   614,   615,   659,   581,   493,   616,   617,   425,
     426,   621,   428,   626,   579,   632,   635,   459,   638,   999,
    1000,   526,   527,   104,   528,  1006,   831,   832,  1491,  1492,
     587,   587,   568,   587,   590,   542,   543,   544,  1339,   104,
     397,   545,   546,   735,   547,   548,   735,   549,   550,   735,
     653,  -731,   429,   657,   108,  1218,  1189,   109,  1236,   661,
     662,   663,   684,   666,   668,   467,   966,   494,   674,   675,
     676,   812,   813,   680,   681,   649,   592,   445,   594,   395,
     768,   117,   306,    80,  1479,   682,   456,    60,  1034,   685,
     459,   645,   646,   686,    41,   940,    42,   754,    43,    44,
     664,  1480,   771,    45,    46,   457,   118,    96,   967,   755,
    1438,   651,   690,   643,   755,   647,   691,    47,   692,  1112,
     495,   799,   542,   543,   544,   396,    69,   651,   545,   546,
    1236,   547,   548,   755,   549,   550,   801,   529,   530,    48,
      49,    61,   803,   968,   889,   890,    62,    50,   755,    51,
     982,    63,  1219,  1220,   755,   922,   923,   397,    52,   554,
     298,   555,   556,   557,   558,   559,   560,   561,   562,   769,
     924,  1143,    64,  1145,    53,  1230,    54,   925,   331,   332,
     333,   334,   500,   501,   551,   622,  1221,  1006,  1006,  1006,
     105,   430,   622,   764,   765,   766,   622,   622,   750,  1439,
    1167,  1168,  1169,  1170,    83,   397,   442,   389,   390,   581,
      81,   758,   759,   584,   984,   585,   979,   397,    65,   397,
     669,   670,   671,   672,   785,   786,   787,    97,    98,   774,
     397,   106,   595,   446,   447,   448,   449,   466,   110,   805,
     435,   398,   399,    66,   493,   468,   572,   443,   816,   400,
     401,   645,   646,   402,   822,   403,   404,   405,   406,   407,
     460,   461,   830,   462,   806,    67,   809,   583,   411,   408,
     409,   551,    68,   581,  1171,   568,   820,   821,    55,   872,
     413,  1173,    82,   731,   592,   584,   594,   585,   469,   470,
     471,   472,   732,   446,   447,   448,   449,   450,    56,   410,
     833,   531,   833,  1351,    57,   969,  1352,   590,   552,  1040,
     463,   631,   781,  1058,   874,   875,   876,   877,   878,   879,
     634,   591,   157,   647,   897,  1041,   451,  1035,   452,  1059,
     411,    83,  1232,   412,  1233,   464,   465,   567,   637,   733,
     413,   411,   413,   926,   927,    87,   930,   453,   734,   331,
     332,   333,   334,   413,   326,   327,   328,   329,   939,   941,
     436,   437,  1046,   945,   414,   947,   948,    92,   950,   951,
     845,   739,   846,  1432,    58,  1433,    88,   306,   807,   583,
     740,    89,   961,  1034,    90,   397,   975,   976,   977,   584,
     755,   585,   120,   121,   825,   844,   563,    93,  1310,    91,
     993,   885,   886,   902,   997,     1,   755,    53,   122,   847,
      94,   581,    95,   904,   123,   755,   124,   125,   326,   327,
     328,   329,  1027,   389,   390,   755,  1047,  1048,   887,   959,
     101,   728,   888,   584,   741,   585,  1285,  1287,  1289,   889,
     890,   755,   584,   742,   585,   592,   593,   594,   111,   743,
     112,   446,   447,   448,   449,  1043,  1044,  1045,   744,  1061,
     584,   113,   585,  1210,   345,   473,   346,   347,   348,   349,
     350,   351,  1311,  1108,   114,  1312,    99,   100,   326,   327,
     328,   329,  1007,   649,   650,   326,   327,   328,   329,  1128,
     213,  1008,   622,  1009,   276,  1120,   906,   294,   922,   923,
    1279,   584,  1010,   585,  1284,   595,  1125,   126,   726,   352,
    1313,   127,  1012,   924,   115,   353,  1314,   116,   354,   596,
     925,  1136,   500,   501,  1139,   932,   128,  1142,   129,  1144,
     631,  1146,  1147,   293,  1149,   296,   634,  1152,   337,  1155,
    1156,   338,  1038,  1397,   381,   382,  1051,   343,  1399,   306,
    1401,   344,  1403,   341,  1164,   499,  1166,     2,     3,     4,
       5,     6,     7,     8,     9,    10,  1286,   900,   901,  1177,
     377,   907,   909,   379,   389,   390,   380,   158,   871,   995,
     389,   390,  1190,  1280,  1281,  1282,  1288,  1280,  1281,  1282,
    1316,  1316,   385,   885,   886,   355,   326,   327,   328,   329,
     946,   383,   384,   356,  1315,  1210,   908,  1336,  1336,  1340,
    1340,   953,   637,   955,  1064,  1065,  1066,  1348,   386,  1493,
     887,   965,  1035,   387,   888,   326,   327,   328,   329,   983,
     985,   889,   890,   938,   990,   992,   388,   357,   393,   358,
     394,   359,   197,   214,   360,   389,   390,   277,   735,  1280,
    1281,  1282,   584,   427,   585,   431,   389,   390,   584,   439,
     585,   432,   433,   434,  1117,  1118,  1119,   964,   438,  1280,
    1281,  1282,  1013,  1014,  1015,  1016,   361,   362,  1242,  1516,
    1517,   363,   364,   365,   622,   496,   926,   927,   366,   497,
     367,   368,   369,   370,  1132,  1133,  1134,   498,   371,   372,
     373,   374,  1364,  1365,  1366,  1244,   326,   327,   328,   329,
    1148,  1237,   540,   541,  1114,   524,  1116,   523,  1255,   532,
    1257,   580,  1280,  1281,  1282,  1261,   587,   533,  1264,  1265,
     612,   613,  1165,   534,   584,   535,   585,   989,   500,   501,
    1175,   537,  1275,  1276,  1277,  1278,  1002,  1003,  1004,   119,
    1180,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   618,   619,   326,   327,   328,
     329,  1519,  1519,  1519,  1154,   654,   655,   991,   677,   678,
    1183,  1184,  1185,  1186,  1187,  1188,   538,  1036,  1127,   790,
     791,  1049,   915,   916,   917,   918,   919,  1172,  1174,  1325,
    1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,   793,
     794,   536,  1211,   795,   796,  1121,   163,   183,   205,   120,
     121,   345,   268,   346,   347,   348,   349,   350,   351,   797,
     798,   178,   854,   855,    53,   122,   539,   326,   327,   328,
     329,   123,  1126,   124,   125,  1440,  1440,  1440,  1307,  1308,
     446,   447,   448,   449,  1441,  1441,  1441,   306,  1398,  1228,
    1400,  1231,  1402,   499,  1404,   569,   352,   176,   198,   215,
     856,   857,   353,   278,   565,   354,  1240,   326,   327,   328,
     329,  1243,   649,  1245,   881,   882,   582,  1247,   566,  1249,
    1250,   577,  1252,  1253,   177,   199,   216,   200,  1017,  1018,
     279,   120,   121,  1262,   599,  1178,   331,   332,   333,   334,
     600,  1416,   629,  1269,  1270,  1271,    53,   122,   620,   570,
    1019,  1020,   622,   123,   640,   124,   125,   642,  1291,  1021,
    1022,  1293,  1023,  1024,   126,  1025,  1026,   658,   127,  1317,
    1317,   500,   501,  1303,  1304,  1305,   660,  1306,  1414,  1415,
     673,  1153,   355,   128,  1211,   129,  1337,  1337,  1341,  1341,
     356,  1417,  1418,  1521,  1522,   679,  1349,   120,   121,  1443,
    1444,   687,  1468,   688,  1470,   690,  1472,   693,  1474,   694,
     695,  1360,    53,   122,   697,   696,   700,  1361,   698,   123,
     699,   124,   125,  1368,   357,  -339,   358,   702,   359,   705,
    1372,   360,   724,  1373,   706,   725,  1374,   707,  1376,   708,
    1378,  1379,  1380,   709,   710,  1383,   126,   104,  1386,  1387,
     127,   729,   711,   712,  1391,   713,  1392,   714,   730,  1234,
     715,  1199,   716,   361,   362,   128,   717,   129,   363,   364,
     365,   718,  1246,   719,  1406,   366,   737,   367,   368,   369,
     370,   326,   327,   328,   329,   371,   372,   373,   374,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   601,   720,  1273,   738,   746,   727,   745,
     721,   722,   126,   723,   747,  1290,   127,   751,   752,   753,
     601,   767,   770,  1294,  1295,  1296,  1297,  1298,  1299,   601,
     665,   128,   773,   129,  1200,  1201,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,  1209,   217,   775,   777,   667,   779,   783,
     784,   788,  1446,   789,   792,   814,   817,  1450,   818,  1452,
     819,   827,   829,  1456,   232,  -341,  1458,  1459,  1359,   602,
     603,   604,   605,   606,   607,  1464,  1465,  1466,  1467,  -343,
    1367,  -345,   838,  1369,   839,  1371,   602,   603,   604,   605,
     606,   607,   842,   870,   849,   602,   603,   604,   605,   606,
     607,   301,  1382,   302,   850,   851,   500,   501,   852,  1388,
    1389,  1390,   853,   303,   120,   121,   304,   305,   306,   858,
     307,   308,   859,   861,   862,   863,   864,   899,   865,    53,
     122,  1405,   866,  1407,   120,   121,   123,   867,   124,   125,
     868,   869,   883,  1409,  1410,  1411,  1412,   873,   898,    53,
     122,  1509,   910,  1511,   911,  1513,   123,  1515,   124,   125,
     912,   913,   914,   921,   934,   931,   309,   935,   936,   942,
     345,   943,   346,   347,   348,   349,   350,   351,   310,   311,
     944,   952,   954,   958,   956,   962,   249,   957,   978,   980,
    1523,   981,  1525,   986,  1527,   987,  1529,   988,   994,   996,
    1436,  1437,   998,  1001,  1011,   833,  1028,  1029,  1445,  1030,
    1031,  1032,  1447,  1448,  1449,   352,  1451,  1033,  1453,  1454,
    1455,   353,  1062,  1457,   354,  1063,  1460,  1461,  1105,   126,
    1106,  1462,  1463,   127,  1107,  1109,  1110,   345,  1113,   346,
     347,   348,   349,   350,   351,  1115,  1476,  1122,   128,   126,
     129,  1124,  1129,   127,  1130,  1131,   120,   121,   160,   180,
     202,   219,   234,   251,   265,   282,  1135,  1137,   128,  1138,
     129,    53,   122,  1140,  1141,  1151,  1150,  1157,   123,   622,
     124,   125,   352,  1158,  1159,  1160,  1498,  1161,   353,  1162,
    1499,   354,  1500,  1163,  1176,  1179,  1501,  1181,  1502,  1503,
    1182,   355,  1191,  1192,  1504,  1505,  1506,  1507,  1193,   356,
    1194,  1195,  1229,  1235,  1227,   474,  1239,   405,   406,   407,
     475,   161,   181,   203,   220,   235,   252,   266,   283,   476,
     280,   477,   478,   479,   480,   481,   482,   483,   484,   485,
    1241,  1248,  1251,   357,  1268,   358,  1254,   359,  1256,  1524,
     360,  1526,  1258,  1528,  1259,  1530,  1260,  1263,  1266,  1267,
    1272,  1274,  1292,  1533,  1302,  1534,  1300,  1535,   355,  1536,
    1324,   126,  1343,  1344,  1345,   127,   356,  1346,  1356,  1370,
    1362,  1375,   361,   362,  1377,  1381,  1384,   363,   364,   365,
     128,  1385,   129,  1413,   366,  1393,   367,   368,   369,   370,
     120,   121,  1394,  1395,   371,   372,   373,   374,  1396,  1408,
     357,  1419,   358,  1421,   359,    53,   122,   360,  1422,  1423,
    1431,  1424,   123,  1425,   124,   125,  1426,   782,  1435,  1477,
     345,  1427,   346,   347,   348,   349,   350,   351,   757,  1428,
    1429,   760,   761,   762,   763,  1430,  1434,  1469,  1471,   361,
     362,  1473,  1475,   772,   363,   364,   365,  1478,  1494,  1481,
    1495,   366,  1482,   367,   368,   369,   370,  1483,  1484,  1485,
    1486,   371,   372,   373,   374,   352,  1487,  1488,  1489,  1490,
    1496,   353,  1497,  1508,   354,   397,  1510,  1512,   800,   802,
     804,  1514,    70,   808,   937,   810,   162,   182,   204,   221,
     236,   253,   267,   284,  1518,  1531,  1532,   823,   824,   826,
     340,   576,   828,   299,  1050,   126,  1005,   689,  1347,   127,
     222,   474,  1217,   405,   406,   407,   475,   223,   622,   703,
    1054,  1215,  1056,  1057,   128,   476,   129,   477,   478,   479,
     480,   481,   482,   483,   484,   485,  1198,  1335,   254,   780,
     398,   399,   778,  1060,   776,   736,    59,   578,   400,   401,
     641,   355,   402,   627,   403,   404,   405,   406,   407,   356,
     164,   184,   206,   225,   237,   255,   269,   285,   408,   409,
     683,  1363,   652,   949,   458,   903,   905,   165,   185,   207,
     226,   238,   256,   270,   286,     0,     0,     0,     0,   412,
       0,   933,     0,   357,     0,   358,     0,   359,     0,     0,
     360,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,     0,     0,     0,     0,     0,
     486,     0,     0,   960,     0,     0,   963,     0,     0,     0,
       0,     0,   361,   362,     0,     0,     0,   363,   364,   365,
       0,     0,     0,     0,   366,     0,   367,   368,   369,   370,
       0,     0,     0,     0,   371,   372,   373,   374,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,   502,   503,   504,   505,
     506,   507,     0,   509,   510,   511,   512,   513,   514,   515,
     166,   186,   208,   227,   239,   257,   271,   287,   167,   187,
     209,   228,   240,   258,   272,   288,   168,   188,   210,   229,
     241,   259,   273,   289,   169,   189,   211,   230,   242,   260,
     274,   290,   170,   190,   212,   231,   243,   261,   275,   291
};

static const yytype_int16 yycheck[] =
{
     415,   339,   339,    86,   143,   444,   391,   586,   399,   400,
     401,   339,   403,   404,   457,   375,   249,   408,   409,   120,
     121,   412,   123,   414,   344,   425,   426,     6,   428,   831,
     832,    21,    22,    90,    24,   840,    22,    23,    22,    23,
     425,   426,   335,   428,    77,    26,    27,    28,    76,    90,
     146,    32,    33,   632,    35,    36,   635,    38,    39,   638,
     451,     5,   146,   454,    72,    77,    40,    75,    60,   460,
     461,   462,   487,   464,   465,     6,    16,   173,   469,   470,
     471,   670,   671,   474,   475,   254,   215,     6,   217,     6,
      57,    16,    31,    11,   286,   486,   257,   144,    37,   490,
       6,    22,    23,   494,     8,    56,    10,   146,    12,    13,
     279,   303,   146,    17,    18,   276,    41,    73,    58,   158,
      57,   450,    96,   443,   158,   254,   137,    31,   139,   901,
     226,   146,    26,    27,    28,    52,     0,   466,    32,    33,
      60,    35,    36,   158,    38,    39,   146,   137,   138,    53,
      54,   144,   146,    93,    93,    94,   144,    61,   158,    63,
      43,   144,   174,   175,   158,    73,    74,   146,    72,    62,
      93,    64,    65,    66,    67,    68,    69,    70,    71,   146,
      88,   953,   144,   955,    88,    93,    90,    95,   140,   141,
     142,   143,   220,   221,   175,   146,   208,  1002,  1003,  1004,
     257,   285,   146,   618,   619,   620,   146,   146,   599,   146,
     982,   983,   984,   985,   137,   146,   257,   137,   138,   579,
     138,   612,   613,   215,    43,   217,   815,   146,   144,   146,
     263,   264,   265,   266,   649,   650,   651,   193,   194,   630,
     146,   298,   275,   222,   223,   224,   225,   226,   256,   664,
      73,   168,   169,   144,   487,     6,   339,   298,   673,   176,
     177,    22,    23,   180,   679,   182,   183,   184,   185,   186,
     176,   177,   687,   179,   665,   144,   667,    93,   257,   196,
     197,   175,   144,   643,    43,   578,   677,   678,   192,   728,
     269,    43,   146,   137,   215,   215,   217,   217,    49,    50,
      51,    52,   146,   222,   223,   224,   225,   226,   212,   226,
     296,   301,   296,   284,   218,   255,   287,    77,   299,   880,
     226,    93,   642,   884,   739,   740,   741,   742,   743,   744,
      93,    91,     3,   254,   749,   880,   255,   276,   257,   884,
     257,   137,  1114,   260,  1116,   251,   252,   299,    93,   137,
     269,   257,   269,   261,   262,    19,   771,   276,   146,   140,
     141,   142,   143,   269,   247,   248,   249,   250,   783,   784,
     193,   194,    16,   788,   291,   790,   791,   146,   793,   794,
     215,   137,   217,   137,   288,   139,   298,    31,   146,    93,
     146,   138,   807,    37,   138,   146,   811,   812,   813,   215,
     158,   217,    73,    74,   146,   299,   299,   138,    96,   298,
     825,    55,    56,   146,   829,     7,   158,    88,    89,   254,
     139,   781,   298,   146,    95,   158,    97,    98,   247,   248,
     249,   250,   871,   137,   138,   158,    80,    81,    82,   146,
     282,   580,    86,   215,   137,   217,  1172,  1173,  1174,    93,
      94,   158,   215,   146,   217,   215,   216,   217,    75,   137,
      75,   222,   223,   224,   225,   880,   881,   882,   146,   884,
     215,    75,   217,  1070,    42,   226,    44,    45,    46,    47,
      48,    49,   170,   898,    16,   173,   210,   211,   247,   248,
     249,   250,   137,   254,   255,   247,   248,   249,   250,   938,
      74,   146,   146,   137,    78,   920,   147,    73,    73,    74,
     146,   215,   146,   217,   146,   275,   931,   188,   299,    87,
     208,   192,   860,    88,    75,    93,   214,    75,    96,   289,
      95,   946,   220,   221,   949,   773,   207,   952,   209,   954,
      93,   956,   957,     9,   959,    79,    93,   962,   138,   964,
     965,   146,   880,  1279,   137,   138,   884,   298,  1284,    31,
    1286,   298,  1288,   280,   979,    37,   981,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   146,   756,   757,   994,
      59,   760,   761,   138,   137,   138,   138,   258,   727,   827,
     137,   138,  1035,   229,   230,   231,   146,   229,   230,   231,
    1197,  1198,   138,    55,    56,   173,   247,   248,   249,   250,
     789,   137,   138,   181,   302,  1212,   147,  1214,  1215,  1216,
    1217,   800,    93,   802,    83,    84,    85,  1224,   138,  1431,
      82,   810,   276,   137,    86,   247,   248,   249,   250,   818,
     819,    93,    94,   782,   823,   824,   138,   215,   137,   217,
     137,   219,    73,    74,   222,   137,   138,    78,  1237,   229,
     230,   231,   215,   139,   217,   285,   137,   138,   215,   144,
     217,   189,   190,   191,   912,   913,   914,   147,   145,   229,
     230,   231,   861,   862,   863,   864,   254,   255,  1127,  1491,
    1492,   259,   260,   261,   146,   137,   261,   262,   266,    25,
     268,   269,   270,   271,   942,   943,   944,   146,   276,   277,
     278,   279,   272,   273,   274,  1130,   247,   248,   249,   250,
     958,  1121,    29,    30,   903,    78,   905,   146,  1143,   137,
    1145,   299,   229,   230,   231,  1150,  1121,   138,  1153,  1154,
     176,   177,   980,    92,   215,    92,   217,   147,   220,   221,
     988,   138,  1167,  1168,  1169,  1170,   835,   836,   837,     3,
     998,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   277,   278,   247,   248,   249,
     250,  1495,  1496,  1497,   963,   296,   297,   147,    50,    51,
    1028,  1029,  1030,  1031,  1032,  1033,   146,   880,   937,   137,
     138,   884,   228,   229,   230,   231,   232,   986,   987,  1200,
    1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,   137,
     138,   298,  1070,   137,   138,   926,    72,    73,    74,    73,
      74,    42,    78,    44,    45,    46,    47,    48,    49,   137,
     138,     3,    14,    15,    88,    89,   138,   247,   248,   249,
     250,    95,   932,    97,    98,  1364,  1365,  1366,  1196,  1196,
     222,   223,   224,   225,  1364,  1365,  1366,    31,  1283,  1107,
    1285,  1109,  1287,    37,  1289,   211,    87,    72,    73,    74,
      29,    30,    93,    78,   283,    96,  1124,   247,   248,   249,
     250,  1129,   254,  1131,   137,   138,   146,  1135,   283,  1137,
    1138,   281,  1140,  1141,    72,    73,    74,     3,   227,   228,
      78,    73,    74,  1151,   291,   995,   140,   141,   142,   143,
      95,  1312,   195,  1161,  1162,  1163,    88,    89,   269,    93,
     227,   228,   146,    95,    57,    97,    98,   298,  1176,   227,
     228,  1179,   227,   228,   188,   227,   228,   256,   192,  1197,
    1198,   220,   221,  1191,  1192,  1193,   256,  1195,   171,   172,
      42,   147,   173,   207,  1212,   209,  1214,  1215,  1216,  1217,
     181,   137,   138,  1496,  1497,    42,  1224,    73,    74,  1365,
    1366,   173,  1397,   146,  1399,    96,  1401,   137,  1403,   137,
     228,  1229,    88,    89,   138,   137,   300,  1235,   138,    95,
     138,    97,    98,  1241,   215,   137,   217,   137,   219,   300,
    1248,   222,   146,  1251,   300,   146,  1254,   300,  1256,   300,
    1258,  1259,  1260,   300,   300,  1263,   188,    90,  1266,  1267,
     192,    57,   300,   300,  1272,   300,  1274,   300,   146,  1119,
     300,    75,   300,   254,   255,   207,   300,   209,   259,   260,
     261,   300,  1132,   300,  1292,   266,   137,   268,   269,   270,
     271,   247,   248,   249,   250,   276,   277,   278,   279,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   226,   300,  1165,   138,   290,   299,   282,
     300,   300,   188,   300,    79,  1175,   192,   146,   146,   146,
     226,   146,     5,  1183,  1184,  1185,  1186,  1187,  1188,   226,
     253,   207,     5,   209,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,   146,   146,   253,   146,   146,
      96,    96,  1370,   146,   146,    82,   146,  1375,   146,  1377,
     146,     5,   146,  1381,     3,   137,  1384,  1385,  1228,   292,
     293,   294,   295,   296,   297,  1393,  1394,  1395,  1396,   137,
    1240,   137,   137,  1243,   137,  1245,   292,   293,   294,   295,
     296,   297,    20,   228,   138,   292,   293,   294,   295,   296,
     297,    14,  1262,    16,   138,   138,   220,   221,   137,  1269,
    1270,  1271,   138,    26,    73,    74,    29,    30,    31,   138,
      33,    34,   138,   146,   146,   146,   146,    57,   146,    88,
      89,  1291,   146,  1293,    73,    74,    95,   146,    97,    98,
     146,   146,   146,  1303,  1304,  1305,  1306,   228,   146,    88,
      89,  1469,   147,  1471,   147,  1473,    95,  1475,    97,    98,
       5,     5,     5,    57,   228,   147,    79,   228,   228,     5,
      42,     5,    44,    45,    46,    47,    48,    49,    91,    92,
       5,   178,   178,     5,   227,   147,     3,   228,   267,     5,
    1508,   147,  1510,   146,  1512,   146,  1514,     5,   147,   147,
    1360,  1361,     5,   137,   146,   296,     5,     5,  1368,     5,
       5,     5,  1372,  1373,  1374,    87,  1376,     5,  1378,  1379,
    1380,    93,   137,  1383,    96,   137,  1386,  1387,   146,   188,
     146,  1391,  1392,   192,     5,     5,   228,    42,   178,    44,
      45,    46,    47,    48,    49,   178,  1406,     4,   207,   188,
     209,     5,     5,   192,   137,     5,    73,    74,    72,    73,
      74,    75,    76,    77,    78,    79,     5,     5,   207,     5,
     209,    88,    89,     5,     5,     5,   147,   137,    95,   146,
      97,    98,    87,   146,   146,   146,  1446,     5,    93,     5,
    1450,    96,  1452,     5,     5,     5,  1456,   137,  1458,  1459,
     137,   173,     5,     5,  1464,  1465,  1466,  1467,     5,   181,
     137,     5,     5,     5,   228,   182,     3,   184,   185,   186,
     187,    72,    73,    74,    75,    76,    77,    78,    79,   196,
       3,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       5,     5,     5,   215,   228,   217,     5,   219,     5,  1509,
     222,  1511,     5,  1513,     5,  1515,     5,     5,     5,     5,
       5,     5,     5,  1523,   137,  1525,   292,  1527,   173,  1529,
     138,   188,   137,   137,   146,   192,   181,   138,   213,     5,
      97,     5,   254,   255,     5,     5,     5,   259,   260,   261,
     207,     5,   209,   137,   266,     5,   268,   269,   270,   271,
      73,    74,     5,     5,   276,   277,   278,   279,     5,   146,
     215,   137,   217,   146,   219,    88,    89,   222,   146,   146,
      96,   146,    95,   146,    97,    98,   146,   299,   137,   231,
      42,   146,    44,    45,    46,    47,    48,    49,   611,   146,
     146,   614,   615,   616,   617,   146,   146,     5,     5,   254,
     255,     5,     5,   626,   259,   260,   261,   146,    57,   147,
       5,   266,   147,   268,   269,   270,   271,   147,   147,   147,
     147,   276,   277,   278,   279,    87,   147,   147,   147,   147,
       5,    93,     5,     5,    96,   146,     5,     5,   661,   662,
     663,     5,    12,   666,   299,   668,    72,    73,    74,    75,
      76,    77,    78,    79,   137,   137,   137,   680,   681,   682,
     102,   340,   685,    84,   884,   188,   838,   498,  1222,   192,
      75,   182,  1082,   184,   185,   186,   187,    75,   146,   536,
     884,  1073,   884,   884,   207,   196,   209,   198,   199,   200,
     201,   202,   203,   204,   205,   206,  1069,  1212,    77,   638,
     168,   169,   635,   884,   632,   586,     1,   343,   176,   177,
     440,   173,   180,   415,   182,   183,   184,   185,   186,   181,
      72,    73,    74,    75,    76,    77,    78,    79,   196,   197,
     487,  1237,   450,   792,   158,   758,   759,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,   260,
      -1,   774,    -1,   215,    -1,   217,    -1,   219,    -1,    -1,
     222,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,    -1,    -1,    -1,    -1,
     291,    -1,    -1,   806,    -1,    -1,   809,    -1,    -1,    -1,
      -1,    -1,   254,   255,    -1,    -1,    -1,   259,   260,   261,
      -1,    -1,    -1,    -1,   266,    -1,   268,   269,   270,   271,
      -1,    -1,    -1,    -1,   276,   277,   278,   279,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   233,   234,   235,   236,
     237,   238,    -1,   240,   241,   242,   243,   244,   245,   246,
      72,    73,    74,    75,    76,    77,    78,    79,    72,    73,
      74,    75,    76,    77,    78,    79,    72,    73,    74,    75,
      76,    77,    78,    79,    72,    73,    74,    75,    76,    77,
      78,    79,    72,    73,    74,    75,    76,    77,    78,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   305,   306,   307,   326,   327,   328,   330,   331,   332,
     333,   336,   337,   338,   339,   340,   341,   342,   348,   359,
     360,   365,   387,   388,   389,   390,   391,   392,   393,   394,
     395,     8,    10,    12,    13,    17,    18,    31,    53,    54,
      61,    63,    72,    88,    90,   192,   212,   218,   288,   472,
     144,   144,   144,   144,   144,   144,   144,   144,   144,     0,
     307,   308,   310,   312,   314,   316,   318,   320,   322,   324,
      11,   138,   146,   137,   361,   362,   366,    19,   298,   138,
     138,   298,   146,   138,   139,   298,    73,   193,   194,   210,
     211,   282,   343,   344,    90,   257,   298,   476,    72,    75,
     256,    75,    75,    75,    16,    75,    75,    16,    41,     3,
      73,    74,    89,    95,    97,    98,   188,   192,   207,   209,
     309,   396,   397,   398,   406,   409,   412,   453,   454,   455,
     456,   468,   471,   472,   473,   479,   480,   481,   482,   483,
     487,   535,   536,   537,   539,   540,   541,     3,   258,   311,
     396,   397,   398,   453,   468,   471,   479,   480,   481,   482,
     483,   508,   522,   531,   532,   534,   535,   541,     3,   313,
     396,   397,   398,   453,   468,   471,   479,   480,   481,   482,
     483,   524,   525,   526,   527,   528,   529,   531,   535,   541,
       3,   315,   396,   397,   398,   453,   468,   471,   479,   480,
     481,   482,   483,   508,   531,   535,   541,     3,   317,   396,
     397,   398,   406,   409,   415,   468,   471,   479,   480,   481,
     482,   483,     3,   319,   396,   397,   398,   468,   471,   479,
     480,   481,   482,   483,   542,   543,   544,   545,   546,     3,
     321,   396,   397,   398,   456,   468,   471,   479,   480,   481,
     482,   483,   490,   538,   323,   396,   397,   398,   453,   468,
     471,   479,   480,   481,   482,   483,   508,   531,   535,   541,
       3,   325,   396,   397,   398,   468,   471,   479,   480,   481,
     482,   483,   486,     9,    73,   329,    79,   363,    93,   362,
     465,    14,    16,    26,    29,    30,    31,    33,    34,    79,
      91,    92,   349,   367,   368,   369,   370,   371,   372,   375,
     376,   377,   378,   379,   350,   334,   247,   248,   249,   250,
     530,   140,   141,   142,   143,   477,   478,   138,   146,   345,
     344,   280,   347,   298,   298,    42,    44,    45,    46,    47,
      48,    49,    87,    93,    96,   173,   181,   215,   217,   219,
     222,   254,   255,   259,   260,   261,   266,   268,   269,   270,
     271,   276,   277,   278,   279,   474,   475,    59,   548,   138,
     138,   137,   138,   137,   138,   138,   138,   137,   138,   137,
     138,   399,   401,   137,   137,     6,    52,   146,   168,   169,
     176,   177,   180,   182,   183,   184,   185,   186,   196,   197,
     226,   257,   260,   269,   291,   488,   489,   493,   497,   499,
     500,   501,   502,   504,   505,   399,   399,   139,   399,   146,
     285,   285,   189,   190,   191,    73,   193,   194,   145,   144,
     484,   485,   257,   298,   476,     6,   222,   223,   224,   225,
     226,   255,   257,   276,   507,   533,   257,   276,   533,     6,
     176,   177,   179,   226,   251,   252,   226,     6,     6,    49,
      50,    51,    52,   226,   182,   187,   196,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   291,   491,   492,   494,
     495,   496,   498,   501,   173,   226,   137,    25,   146,    37,
     220,   221,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   349,   354,   357,   358,
     364,   403,   404,   146,    78,   405,    21,    22,    24,   137,
     138,   301,   137,   138,    92,    92,   298,   138,   146,   138,
      29,    30,    26,    27,    28,    32,    33,    35,    36,    38,
      39,   175,   299,   351,    62,    64,    65,    66,    67,    68,
      69,    70,    71,   299,   335,   283,   283,   299,   478,   211,
      93,   346,   349,   354,   357,   358,   347,   281,   477,   474,
     299,   475,   146,    93,   215,   217,   400,   401,   402,   464,
      77,    91,   215,   216,   217,   275,   289,   418,   420,   291,
      95,   226,   292,   293,   294,   295,   296,   297,   509,   509,
     509,   509,   176,   177,   509,   509,   509,   509,   277,   278,
     269,   509,   146,   517,   518,   519,   509,   489,   519,   195,
     503,    93,   400,   462,    93,   400,   461,    93,   400,   463,
      57,   485,   298,   474,   548,    22,    23,   254,   523,   254,
     255,   507,   523,   509,   296,   297,   470,   509,   256,   470,
     256,   509,   509,   509,   279,   253,   509,   253,   509,   263,
     264,   265,   266,    42,   509,   509,   509,    50,    51,    42,
     509,   509,   509,   492,   519,   509,   509,   173,   146,   363,
      96,   137,   139,   137,   137,   228,   137,   138,   138,   138,
     300,   380,   137,   350,   373,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   146,   146,   299,   299,   476,    57,
     146,   137,   146,   137,   146,   402,   464,   137,   138,   137,
     146,   137,   146,   137,   146,   282,   290,    79,   419,   413,
     509,   146,   146,   146,   146,   158,   506,   506,   509,   509,
     506,   506,   506,   506,   519,   519,   519,   146,    57,   146,
       5,   146,   506,     5,   509,   146,   462,   146,   461,   146,
     463,   474,   299,   146,    96,   519,   519,   519,    96,   146,
     137,   138,   146,   137,   138,   137,   138,   137,   138,   146,
     506,   146,   506,   146,   506,   519,   509,   146,   506,   509,
     506,   416,   416,   416,    82,   547,   519,   146,   146,   146,
     509,   509,   519,   506,   506,   146,   506,     5,   506,   146,
     519,    22,    23,   296,   355,   381,   382,   383,   137,   137,
     384,   385,    20,   386,   299,   215,   217,   254,   374,   138,
     138,   138,   137,   138,    14,    15,    29,    30,   138,   138,
     356,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     228,   476,   548,   228,   519,   519,   519,   519,   519,   519,
     410,   137,   138,   146,   407,    55,    56,    82,    86,    93,
      94,   414,   422,   426,   427,   466,   467,   519,   146,    57,
     530,   530,   146,   506,   146,   506,   147,   530,   147,   530,
     147,   147,     5,     5,     5,   228,   229,   230,   231,   232,
     510,    57,    73,    74,    88,    95,   261,   262,   514,   515,
     519,   147,   515,   506,   228,   228,   228,   299,   476,   519,
      56,   519,     5,     5,     5,   519,   530,   519,   519,   510,
     519,   519,   178,   530,   178,   530,   227,   228,     5,   146,
     506,   519,   147,   506,   147,   530,    16,    58,    93,   255,
     417,   457,   458,   459,   460,   519,   519,   519,   267,   416,
       5,   147,    43,   530,    43,   530,   146,   146,     5,   147,
     530,   147,   530,   519,   147,   515,   147,   519,     5,   355,
     355,   137,   384,   384,   384,   386,   385,   137,   146,   137,
     146,   146,   357,   530,   530,   530,   530,   227,   228,   227,
     228,   227,   228,   227,   228,   227,   228,   548,     5,     5,
       5,     5,     5,     5,    37,   276,   349,   352,   354,   411,
     466,   467,   469,   519,   519,   519,    16,    80,    81,   349,
     352,   354,   408,   421,   422,   425,   426,   427,   466,   467,
     469,   519,   137,   137,    83,    84,    85,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   146,   146,     5,   519,     5,
     228,   512,   512,   178,   530,   178,   530,   515,   515,   515,
     519,   399,     4,   521,     5,   519,   521,   476,   548,     5,
     137,     5,   515,   515,   515,     5,   519,     5,     5,   519,
       5,     5,   519,   512,   519,   512,   519,   519,   515,   519,
     147,     5,   519,   147,   530,   519,   519,   137,   146,   146,
     146,     5,     5,     5,   519,   515,   519,   512,   512,   512,
     512,    43,   530,    43,   530,   515,     5,   519,   521,     5,
     515,   137,   137,   515,   515,   515,   515,   515,   515,    40,
     470,     5,     5,     5,   137,     5,   423,   440,   440,    75,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     403,   404,   451,   452,   430,   430,   434,   434,    77,   174,
     175,   208,   428,   429,   432,   438,   449,   228,   515,     5,
      93,   515,   512,   512,   521,     5,    60,   400,   513,     3,
     515,     5,   548,   515,   519,   515,   521,   515,     5,   515,
     515,     5,   515,   515,     5,   519,     5,   519,     5,     5,
       5,   519,   515,     5,   519,   519,     5,     5,   228,   515,
     515,   515,     5,   521,     5,   519,   519,   519,   519,   146,
     229,   230,   231,   511,   146,   511,   146,   511,   146,   511,
     521,   515,     5,   515,   521,   521,   521,   521,   521,   521,
     292,   353,   137,   515,   515,   515,   515,   357,   358,   424,
      96,   170,   173,   208,   214,   302,   403,   404,   441,   442,
     443,   444,   445,   446,   138,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   452,   403,   404,   431,    76,
     403,   404,   435,   137,   137,   146,   138,   429,   403,   404,
     433,   284,   287,   436,   437,   439,   213,   448,   450,   521,
     515,   515,    97,   513,   272,   273,   274,   521,   515,   521,
       5,   521,   515,   515,   515,     5,   515,     5,   515,   515,
     515,     5,   521,   515,     5,     5,   515,   515,   521,   521,
     521,   515,   515,     5,     5,     5,     5,   511,   519,   511,
     519,   511,   519,   511,   519,   521,   515,   521,   146,   521,
     521,   521,   521,   137,   171,   172,   509,   137,   138,   137,
     447,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,    96,   137,   139,   146,   137,   521,   521,    57,   146,
     517,   518,   520,   520,   520,   521,   515,   521,   521,   521,
     515,   521,   515,   521,   521,   521,   515,   521,   515,   515,
     521,   521,   521,   521,   515,   515,   515,   515,   519,     5,
     519,     5,   519,     5,   519,     5,   521,   231,   146,   286,
     303,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,    22,    23,   355,    57,     5,     5,     5,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,     5,   515,
       5,   515,     5,   515,     5,   515,   355,   355,   137,   514,
     516,   516,   516,   515,   521,   515,   521,   515,   521,   515,
     521,   137,   137,   521,   521,   521,   521
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   304,   305,   305,   306,   306,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   308,   308,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   310,
     310,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   312,
     312,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   314,   314,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   318,   318,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     320,   320,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   322,   322,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   324,   324,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   326,   326,   326,   327,   328,
     329,   329,   330,   331,   331,   331,   332,   333,   334,   334,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   336,   337,   337,   337,   338,   338,
     338,   339,   340,   341,   342,   343,   343,   344,   345,   345,
     346,   346,   346,   346,   346,   347,   347,   348,   349,   349,
     350,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   352,   353,   353,   354,   354,   354,
     355,   355,   356,   356,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   358,   359,   360,
     361,   361,   362,   362,   363,   363,   364,   364,   364,   364,
     364,   364,   365,   366,   366,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   368,   369,   370,   371,   372,   373,
     373,   374,   374,   374,   374,   374,   375,   375,   376,   376,
     377,   377,   378,   379,   379,   379,   379,   379,   379,   380,
     379,   381,   379,   382,   379,   383,   379,   379,   384,   384,
     385,   386,   386,   387,   387,   387,   387,   388,   389,   389,
     390,   391,   392,   392,   393,   394,   395,   395,   396,   396,
     397,   397,   398,   398,   399,   399,   400,   400,   401,   401,
     402,   402,   402,   402,   403,   403,   404,   405,   405,   406,
     407,   407,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   409,   410,   410,   411,   411,   411,   411,
     411,   411,   412,   413,   413,   414,   414,   414,   414,   414,
     415,   415,   415,   415,   416,   416,   417,   417,   417,   417,
     418,   418,   419,   420,   421,   421,   422,   422,   422,   423,
     423,   424,   424,   425,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   427,   427,   428,   428,   429,   429,   429,   429,
     430,   430,   431,   431,   432,   432,   433,   433,   434,   434,
     435,   435,   435,   435,   435,   436,   436,   437,   438,   438,
     439,   439,   440,   440,   441,   441,   441,   441,   441,   441,
     441,   441,   442,   443,   443,   444,   444,   445,   446,   447,
     447,   448,   449,   449,   450,   451,   451,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     453,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     461,   462,   462,   463,   463,   464,   464,   465,   465,   466,
     467,   468,   468,   469,   470,   470,   471,   471,   471,   471,
     472,   473,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   476,   476,   477,   477,   478,   478,
     478,   478,   479,   479,   479,   480,   480,   480,   481,   481,
     481,   482,   483,   484,   484,   485,   486,   486,   487,   488,
     488,   489,   489,   489,   489,   489,   489,   489,   490,   491,
     491,   492,   492,   492,   492,   493,   493,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   496,   496,
     497,   497,   497,   497,   498,   498,   499,   500,   501,   502,
     502,   502,   503,   503,   504,   504,   504,   505,   505,   505,
     506,   506,   507,   507,   507,   507,   508,   508,   509,   509,
     509,   509,   509,   509,   509,   509,   510,   510,   510,   510,
     510,   510,   511,   511,   511,   512,   512,   513,   513,   513,
     514,   514,   514,   514,   514,   514,   514,   515,   516,   517,
     518,   519,   519,   519,   520,   520,   520,   521,   521,   521,
     521,   522,   522,   522,   523,   523,   523,   524,   524,   524,
     524,   525,   525,   525,   525,   526,   526,   527,   527,   528,
     528,   529,   530,   530,   530,   530,   530,   531,   531,   532,
     532,   532,   532,   532,   532,   532,   532,   533,   533,   534,
     534,   535,   535,   536,   536,   537,   537,   538,   538,   539,
     539,   540,   541,   541,   542,   543,   544,   545,   545,   545,
     545,   545,   545,   546,   546,   546,   546,   546,   546,   547,
     548,   548,   548
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     7,     8,     4,     3,
       0,     3,     2,     3,     3,     3,     4,     5,     0,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     3,     3,     5,     4,     6,
       4,     3,     3,     3,     3,     2,     3,     2,     0,     2,
       3,     1,     1,     1,     1,     0,     2,     5,     1,     4,
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     0,     1,     4,     5,     5,
       0,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       1,     2,     2,     4,     0,     2,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     5,     4,     2,     3,     3,     3,     0,
       4,     0,     5,     0,     5,     0,     5,     2,     1,     2,
       1,     0,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     4,     5,     6,     3,     4,
       3,     4,     3,     4,     1,     2,     1,     2,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     0,     2,     9,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     9,     0,     2,     1,     1,     1,     1,
       1,     1,     8,     0,     2,     1,     1,     1,     1,     1,
       9,     8,     8,     8,     0,     2,     1,     1,     1,     1,
       0,     2,     2,     2,     1,     1,     2,     3,     2,     0,
       2,     1,     1,     2,     3,     2,     2,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     2,     1,     2,     2,     2,     2,     2,
       0,     2,     1,     1,     0,     2,     1,     1,     0,     2,
       1,     1,     4,     5,     5,     2,     2,     2,     0,     2,
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
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     3,     4,     1,
       1,     1,     0,     1,     5,     6,     5,     5,     6,     5,
       1,     1,     1,     1,     1,     1,     9,     6,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     3,     4,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     1,     1,     0,     1,     1,     0,     6,     6,
       6,     8,    10,     7,     0,     1,     1,     8,     9,     9,
      10,     9,     9,    10,    10,    10,     9,    10,     9,     9,
       9,     6,     0,     1,     1,     1,     1,     8,     7,     7,
       7,     4,     4,     7,     7,     4,     4,     0,     1,     9,
       6,     8,     8,     8,     8,     9,     9,     8,     9,     8,
       9,     9,     8,     8,     7,     7,     9,    10,    11,    12,
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
        case 195:
#line 611 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &Run.maillist);
                  }
#line 3362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 615 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &Run.maillist);
                  }
#line 3370 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 618 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &Run.maillist);
                  }
#line 3379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 624 "src/p.y" /* yacc.c:1646  */
    {
                        if (! (Run.flags & Run_Daemon) || ihp.daemon) {
                                ihp.daemon     = true;
                                Run.flags      |= Run_Daemon;
                                Run.polltime   = (yyvsp[-1].number);
                                Run.startdelay = (yyvsp[0].number);
                        }
                  }
#line 3392 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 634 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Batch;
                  }
#line 3400 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 639 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = 0;
                  }
#line 3408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 642 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 3416 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 647 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_Foreground;
                  }
#line 3424 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 652 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Start;
                  }
#line 3432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 655 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Nostart;
                  }
#line 3440 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 658 "src/p.y" /* yacc.c:1646  */
    {
                        Run.onreboot = Onreboot_Laststate;
                  }
#line 3448 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 663 "src/p.y" /* yacc.c:1646  */
    {
                        // Note: deprecated (replaced by "set limits" statement's "sendExpectBuffer" option)
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3457 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 676 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.sendExpectBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3465 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 679 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.fileContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3473 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 682 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.httpContentBuffer = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 685 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programOutput = (yyvsp[-1].number) * (yyvsp[0].number);
                  }
#line 3489 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 688 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number);
                  }
#line 3497 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 691 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.networkTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3505 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 694 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number);
                  }
#line 3513 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 697 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.programTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3521 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 700 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number);
                  }
#line 3529 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 703 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.stopTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3537 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 706 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number);
                  }
#line 3545 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 709 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.startTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 712 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number);
                  }
#line 3561 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 715 "src/p.y" /* yacc.c:1646  */
    {
                        Run.limits.restartTimeout = (yyvsp[-1].number) * 1000;
                  }
#line 3569 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 720 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags |= Run_FipsEnabled;
                  }
#line 3577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 725 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.log || ihp.logfile) {
                                ihp.logfile = true;
                                setlogfile((yyvsp[0].string));
                                Run.flags &= ~Run_UseSyslog;
                                Run.flags |= Run_Log;
                        }
                  }
#line 3590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 733 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog(NULL);
                  }
#line 3598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 736 "src/p.y" /* yacc.c:1646  */
    {
                        setsyslog((yyvsp[0].string)); FREE((yyvsp[0].string));
                  }
#line 3606 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 741 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[0].string);
                  }
#line 3614 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 744 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = (yyvsp[-2].string);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 748 "src/p.y" /* yacc.c:1646  */
    {
                        Run.eventlist_dir = Str_dup(MYEVENTLISTBASE);
                        Run.eventlist_slots = (yyvsp[0].number);
                  }
#line 3632 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 754 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.id = (yyvsp[0].string);
                  }
#line 3640 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 759 "src/p.y" /* yacc.c:1646  */
    {
                        Run.files.state = (yyvsp[0].string);
                  }
#line 3648 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 764 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Run.files.pid || ihp.pidfile) {
                                ihp.pidfile = true;
                                setpidfile((yyvsp[0].string));
                        }
                  }
#line 3659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 779 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.url = (yyvsp[-1].url);
                        addmmonit(&mmonitset);
                  }
#line 3668 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 789 "src/p.y" /* yacc.c:1646  */
    {
                        mmonitset.timeout = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 3676 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 799 "src/p.y" /* yacc.c:1646  */
    {
                        Run.flags &= ~Run_MmonitCredentials;
                  }
#line 3684 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 804 "src/p.y" /* yacc.c:1646  */
    {
                        _setSSLOptions(&(Run.ssl));
                  }
#line 3692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 809 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3700 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 819 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = true;
                  }
#line 3709 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 823 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.verify = false;
                  }
#line 3718 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 827 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 3727 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 831 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = false;
                  }
#line 3736 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 835 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                  }
#line 3744 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 838 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(sslset.ciphers);
                        sslset.ciphers = (yyvsp[0].string);
                  }
#line 3753 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 842 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 3761 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 845 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemchain), (yyvsp[0].string), "SSL certificate chain PEM file", true);
                  }
#line 3769 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 848 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemkey), (yyvsp[0].string), "SSL server private key PEM file", true);
                  }
#line 3777 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 851 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 3785 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 854 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificateFile), (yyvsp[0].string), "SSL CA certificates file", true);
                  }
#line 3793 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 857 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.CACertificatePath), (yyvsp[0].string), "SSL CA certificates directory", false);
                  }
#line 3801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 862 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.target.net.ssl.certificate.minimumDays = (yyvsp[-1].number);
                  }
#line 3810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 872 "src/p.y" /* yacc.c:1646  */
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
#line 3829 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 886 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 893 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", sslset.checksum);
                        sslset.checksumType = Hash_Sha1;
                  }
#line 3853 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 910 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_SSL2 || ! defined HAVE_SSLV2 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support SSL version 2");
#else
                        _setSSLVersion(SSL_V2);
#endif
                  }
#line 3865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 917 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_V2);
                  }
#line 3873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 920 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_SSL3 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support SSL version 3");
#else
                        _setSSLVersion(SSL_V3);
#endif
                  }
#line 3885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 927 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_V3);
                  }
#line 3893 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 930 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_TLS1_METHOD || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.0");
#else
                        _setSSLVersion(SSL_TLSV1);
#endif
                  }
#line 3905 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 937 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_TLSV1);
                  }
#line 3913 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 940 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_TLS1_1_METHOD || ! defined HAVE_TLSV1_1 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.1");
#else
                        _setSSLVersion(SSL_TLSV11);
#endif
                }
#line 3925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 947 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_TLSV11);
                  }
#line 3933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 950 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_TLS1_2_METHOD || ! defined HAVE_TLSV1_2 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.2");
#else
                        _setSSLVersion(SSL_TLSV12);
#endif
                }
#line 3945 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 957 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_TLSV12);
                  }
#line 3953 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 960 "src/p.y" /* yacc.c:1646  */
    {
#if defined OPENSSL_NO_TLS1_3_METHOD || ! defined HAVE_TLSV1_3 || ! defined HAVE_OPENSSL
                        yyerror("Your SSL Library does not support TLS version 1.3");
#else
                        _setSSLVersion(SSL_TLSV13);
#endif
                }
#line 3965 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 967 "src/p.y" /* yacc.c:1646  */
    {
                        _unsetSSLVersion(SSL_TLSV13);
                  }
#line 3973 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 970 "src/p.y" /* yacc.c:1646  */
    {
                        // Enable just TLS 1.2 and 1.3 by default
#if ! defined OPENSSL_NO_TLS1_2_METHOD && defined HAVE_TLSV1_2 && defined HAVE_OPENSSL
                        _setSSLVersion(SSL_TLSV12);
#endif
#if ! defined OPENSSL_NO_TLS1_3_METHOD && defined HAVE_TLSV1_3 && defined HAVE_OPENSSL
                        _setSSLVersion(SSL_TLSV13);
#endif
                  }
#line 3987 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 981 "src/p.y" /* yacc.c:1646  */
    { // Backward compatibility
                        sslset.flags = SSL_Enabled;
                        sslset.checksum = (yyvsp[0].string);
                        if (cleanup_hash_string(sslset.checksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", sslset.checksum);
                        sslset.checksumType = Hash_Md5;
                  }
#line 3999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 990 "src/p.y" /* yacc.c:1646  */
    {
                        if (((yyvsp[-1].number)) > SMTP_TIMEOUT)
                                Run.mailserver_timeout = (yyvsp[-1].number);
                        Run.mail_hostname = (yyvsp[0].string);
                  }
#line 4009 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 997 "src/p.y" /* yacc.c:1646  */
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
#line 4027 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1016 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overridden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-1].string));

                        mailserverset.host = (yyvsp[-1].string);
                        mailserverset.port = PORT_SMTP;
                        addmailserver(&mailserverset);
                  }
#line 4041 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1025 "src/p.y" /* yacc.c:1646  */
    {
                        /* Restore the current text overridden by lookahead */
                        FREE(argyytext);
                        argyytext = Str_dup((yyvsp[-3].string));

                        mailserverset.host = (yyvsp[-3].string);
                        mailserverset.port = (yyvsp[-1].number);
                        addmailserver(&mailserverset);
                  }
#line 4055 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1040 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.username = (yyvsp[0].string);
                  }
#line 4063 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1043 "src/p.y" /* yacc.c:1646  */
    {
                        mailserverset.password = (yyvsp[0].string);
                  }
#line 4071 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1052 "src/p.y" /* yacc.c:1646  */
    {
                        if (sslset.flags & SSL_Enabled) {
#ifdef HAVE_OPENSSL
                                if (sslset.pemfile) {
                                        if (sslset.pemchain || sslset.pemkey) {
                                                yyerror("SSL server option pemfile and pemchain|pemkey are mutually exclusive");
                                        } else if (! file_checkStat(sslset.pemfile, "SSL server PEM file", S_IRWXU)) {
                                                yyerror("SSL server PEM file permissions check failed");
                                        } else {
                                                _setSSLOptions(&(Run.httpd.socket.net.ssl));
                                        }
                                } else if (sslset.pemchain && sslset.pemkey) {
                                        if (! file_checkStat(sslset.pemkey, "SSL server private key PEM file", S_IRWXU)) {
                                                yyerror("SSL server private key PEM file permissions check failed");
                                        } else {
                                                _setSSLOptions(&(Run.httpd.socket.net.ssl));
                                        }
                                } else {
                                        yyerror("SSL server PEM file is required (please use ssl pemfile option)");
                                }
#else
                                yyerror("SSL is not supported");
#endif
                        }
                  }
#line 4101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1095 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.pemfile), (yyvsp[0].string), "SSL server PEM file", true);
                  }
#line 4109 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1101 "src/p.y" /* yacc.c:1646  */
    {
                        _setPEM(&(sslset.clientpemfile), (yyvsp[0].string), "SSL client PEM file", true);
                  }
#line 4117 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1107 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        sslset.allowSelfSigned = true;
                  }
#line 4126 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1113 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Net;
                        Run.httpd.socket.net.port = (yyvsp[0].number);
                  }
#line 4135 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1119 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Unix;
                        Run.httpd.socket.unix.path = (yyvsp[-1].string);
                  }
#line 4144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1129 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 4154 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1134 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid((yyvsp[0].string), 0);
                        FREE((yyvsp[0].string));
                    }
#line 4164 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1139 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixUid;
                        Run.httpd.socket.unix.uid = get_uid(NULL, (yyvsp[0].number));
                    }
#line 4173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1143 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixGid;
                        Run.httpd.socket.unix.gid = get_gid(NULL, (yyvsp[0].number));
                    }
#line 4182 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1147 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_UnixPermission;
                        Run.httpd.socket.unix.permission = check_perm((yyvsp[0].number));
                    }
#line 4191 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1161 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags |= Httpd_Signature;
                  }
#line 4199 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1164 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.flags &= ~Httpd_Signature;
                  }
#line 4207 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1169 "src/p.y" /* yacc.c:1646  */
    {
                        Run.httpd.socket.net.address = (yyvsp[0].string);
                  }
#line 4215 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1174 "src/p.y" /* yacc.c:1646  */
    {
                        addcredentials((yyvsp[-3].string), (yyvsp[-1].string), Digest_Cleartext, (yyvsp[0].number));
                  }
#line 4223 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1177 "src/p.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBPAM
                        addpamauth((yyvsp[-1].string), (yyvsp[0].number));
#else
                        yyerror("PAM is not supported");
                        FREE((yyvsp[-1].string));
#endif
                  }
#line 4236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1185 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4245 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1189 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Cleartext);
                        FREE((yyvsp[0].string));
                  }
#line 4254 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1193 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Md5);
                        FREE((yyvsp[0].string));
                  }
#line 4263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1197 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry((yyvsp[0].string), NULL, Digest_Crypt);
                        FREE((yyvsp[0].string));
                  }
#line 4272 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1201 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4281 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1205 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4289 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1208 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Cleartext;
                  }
#line 4298 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1212 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4306 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1215 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Md5;
                  }
#line 4315 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1219 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4323 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1222 "src/p.y" /* yacc.c:1646  */
    {
                        htpasswd_file = (yyvsp[0].string);
                        digesttype = Digest_Crypt;
                  }
#line 4332 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1226 "src/p.y" /* yacc.c:1646  */
    {
                        FREE(htpasswd_file);
                  }
#line 4340 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1229 "src/p.y" /* yacc.c:1646  */
    {
                        if (! Engine_addAllow((yyvsp[0].string)))
                                yywarning2("invalid allow option: %s", (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 4350 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1240 "src/p.y" /* yacc.c:1646  */
    {
                        addhtpasswdentry(htpasswd_file, (yyvsp[0].string), digesttype);
                        FREE((yyvsp[0].string));
                  }
#line 4359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1246 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = false;
                  }
#line 4367 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1249 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = true;
                  }
#line 4375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1254 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4383 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1257 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                  }
#line 4391 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1260 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4403 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1267 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Process, (yyvsp[-2].string), (yyvsp[0].string), check_process);
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = Str_dup((yyvsp[0].string));
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 4415 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1276 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_File, (yyvsp[-2].string), (yyvsp[0].string), check_file);
                  }
#line 4423 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1281 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4431 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1284 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Filesystem, (yyvsp[-2].string), (yyvsp[0].string), check_filesystem);
                  }
#line 4439 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1289 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Directory, (yyvsp[-2].string), (yyvsp[0].string), check_directory);
                  }
#line 4447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1294 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Host, (yyvsp[-2].string), (yyvsp[0].string), check_remote_host);
                  }
#line 4455 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1299 "src/p.y" /* yacc.c:1646  */
    {
                        if (Link_isGetByAddressSupported()) {
                                createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                                current->inf.net->stats = Link_createForAddress((yyvsp[0].string));
                        } else {
                                yyerror("Network monitoring by IP address is not supported on this platform, please use 'check network <foo> with interface <bar>' instead");
                        }
                  }
#line 4468 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1307 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Net, (yyvsp[-2].string), (yyvsp[0].string), check_net);
                        current->inf.net->stats = Link_createForInterface((yyvsp[0].string));
                  }
#line 4477 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1313 "src/p.y" /* yacc.c:1646  */
    {
                        char *servicename = (yyvsp[0].string);
                        if (Str_sub(servicename, "$HOST")) {
                                char hostname[STRLEN];
                                if (gethostname(hostname, sizeof(hostname))) {
                                        Log_error("System hostname error -- %s\n", STRERROR);
                                        cfg_errflag++;
                                } else {
                                        Util_replaceString(&servicename, "$HOST", hostname);
                                }
                        }
                        Run.system = createservice(Service_System, servicename, NULL, check_system); // The name given in the 'check system' statement overrides system hostname
                  }
#line 4495 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1328 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Fifo, (yyvsp[-2].string), (yyvsp[0].string), check_fifo);
                  }
#line 4503 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1333 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Program, (yyvsp[-3].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4514 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1339 "src/p.y" /* yacc.c:1646  */
    {
                        createservice(Service_Program, (yyvsp[-4].string), NULL, check_program);
                        current->program->timeout = (yyvsp[0].number);
                        current->program->lastOutput = StringBuffer_create(64);
                        current->program->inprogressOutput = StringBuffer_create(64);
                 }
#line 4525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1347 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4533 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1350 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(START, (yyvsp[0].number));
                  }
#line 4541 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1355 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4549 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1358 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(STOP, (yyvsp[0].number));
                  }
#line 4557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1364 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4565 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1367 "src/p.y" /* yacc.c:1646  */
    {
                        addcommand(RESTART, (yyvsp[0].number));
                  }
#line 4573 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1380 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1383 "src/p.y" /* yacc.c:1646  */
    {
                        addargument((yyvsp[0].string));
                  }
#line 4589 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1388 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4598 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1392 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid((yyvsp[0].string), 0));
                        FREE((yyvsp[0].string));
                  }
#line 4607 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1396 "src/p.y" /* yacc.c:1646  */
    {
                        addeuid(get_uid(NULL, (yyvsp[0].number)));
                  }
#line 4615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1399 "src/p.y" /* yacc.c:1646  */
    {
                        addegid(get_gid(NULL, (yyvsp[0].number)));
                  }
#line 4623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1404 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4631 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1407 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4639 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1412 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4647 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1417 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = NULL;
                  }
#line 4655 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1420 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 4663 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1425 "src/p.y" /* yacc.c:1646  */
    {
                        /* This is a workaround to support content match without having to create an URL object. 'urloption' creates the Request_T object we need minus the URL object, but with enough information to perform content test.
                           TODO: Parser is in need of refactoring */
                        portset.url_request = urlrequest;
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4675 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1451 "src/p.y" /* yacc.c:1646  */
    {
                        prepare_urlrequest((yyvsp[-5].url));
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->portlist), &portset);
                  }
#line 4685 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1470 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(portset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addport(&(current->socketlist), &portset);
                  }
#line 4694 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1487 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        icmpset.type = (yyvsp[-5].number);
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                  }
#line 4705 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1493 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1498 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip4;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4725 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1503 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.family = Socket_Ip6;
                        addeventaction(&(icmpset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addicmp(&icmpset);
                 }
#line 4735 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1520 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = Str_dup(current->type == Service_Host ? current->path : LOCALHOST);
                  }
#line 4743 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1523 "src/p.y" /* yacc.c:1646  */
    {
                        portset.hostname = (yyvsp[0].string);
                  }
#line 4751 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1528 "src/p.y" /* yacc.c:1646  */
    {
                        portset.target.net.port = (yyvsp[0].number);
                  }
#line 4759 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1533 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Unix;
                        portset.target.unix.pathname = (yyvsp[0].string);
                  }
#line 4768 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1539 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip4;
                  }
#line 4776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1542 "src/p.y" /* yacc.c:1646  */
    {
                        portset.family = Socket_Ip6;
                  }
#line 4784 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1547 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Tcp;
                  }
#line 4792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1550 "src/p.y" /* yacc.c:1646  */
    { // The typelist is kept for backward compatibility (replaced by ssloptionlist)
                        portset.type = Socket_Tcp;
                        sslset.flags = SSL_Enabled;
                  }
#line 4801 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1554 "src/p.y" /* yacc.c:1646  */
    {
                        portset.type = Socket_Udp;
                  }
#line 4809 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1567 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(portset.outgoing));
                  }
#line 4817 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1572 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_APACHESTATUS);
                  }
#line 4825 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1575 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DEFAULT);
                  }
#line 4833 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1578 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DNS);
                  }
#line 4841 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1581 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_DWP);
                  }
#line 4849 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1584 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FAIL2BAN);
                }
#line 4857 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1587 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_FTP);
                  }
#line 4865 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1590 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_HTTP);
                  }
#line 4873 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1593 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_HTTP);
                 }
#line 4883 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1598 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4891 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1601 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_IMAP);
                  }
#line 4901 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1606 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_CLAMAV);
                  }
#line 4909 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1609 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP2);
                  }
#line 4917 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1612 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LDAP3);
                  }
#line 4925 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1615 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MONGODB);
                  }
#line 4933 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1618 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MQTT);
                  }
#line 4941 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1621 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4949 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1624 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_StartTLS;
                        portset.protocol = Protocol_get(Protocol_MYSQL);
                  }
#line 4958 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1628 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIP);
                  }
#line 4966 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1631 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NNTP);
                  }
#line 4974 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1634 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_NTP3);
                        portset.type = Socket_Udp;
                  }
#line 4983 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1638 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POSTFIXPOLICY);
                  }
#line 4991 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1641 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 4999 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1644 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_POP);
                  }
#line 5009 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1649 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SIEVE);
                  }
#line 5017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1652 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SMTP);
                  }
#line 5025 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1655 "src/p.y" /* yacc.c:1646  */
    {
                        sslset.flags = SSL_Enabled;
                        portset.type = Socket_Tcp;
                        portset.protocol = Protocol_get(Protocol_SMTP);
                 }
#line 5035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1660 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SPAMASSASSIN);
                  }
#line 5043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1663 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_SSH);
                  }
#line 5051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1666 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RDATE);
                  }
#line 5059 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1669 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_REDIS);
                  }
#line 5067 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1672 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RSYNC);
                  }
#line 5075 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1675 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_TNS);
                  }
#line 5083 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1678 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_PGSQL);
                  }
#line 5091 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1681 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_LMTP);
                  }
#line 5099 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1684 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_GPS);
                  }
#line 5107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1687 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_RADIUS);
                  }
#line 5115 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1690 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_MEMCACHE);
                  }
#line 5123 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1693 "src/p.y" /* yacc.c:1646  */
    {
                        portset.protocol = Protocol_get(Protocol_WEBSOCKET);
                  }
#line 5131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1698 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, (yyvsp[0].string), NULL);
                        } else {
                                yyerror("The SEND statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 5144 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1706 "src/p.y" /* yacc.c:1646  */
    {
                        if (portset.protocol->check == check_default || portset.protocol->check == check_generic) {
                                portset.protocol = Protocol_get(Protocol_GENERIC);
                                addgeneric(&portset, NULL, (yyvsp[0].string));
                        } else {
                                yyerror("The EXPECT statement is not allowed in the %s protocol context", portset.protocol->name);
                        }
                  }
#line 5157 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1720 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.origin = (yyvsp[0].string);
                  }
#line 5165 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1723 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.request = (yyvsp[0].string);
                  }
#line 5173 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1726 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.host = (yyvsp[0].string);
                  }
#line 5181 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1729 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.websocket.version = (yyvsp[0].number);
                  }
#line 5189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1738 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.username = (yyvsp[0].string);
                  }
#line 5197 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1741 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.smtp.password = (yyvsp[0].string);
                  }
#line 5205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1750 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mqtt.username = (yyvsp[0].string);
                  }
#line 5213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1753 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mqtt.password = (yyvsp[0].string);
                  }
#line 5221 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1762 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.username = (yyvsp[0].string);
                  }
#line 5229 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1765 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.password = (yyvsp[0].string);
                  }
#line 5237 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1768 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        switch (cleanup_hash_string(portset.parameters.mysql.rsaChecksum)) {
                                case 32:
                                        portset.parameters.mysql.rsaChecksumType = Hash_Md5;
                                        break;
                                case 40:
                                        portset.parameters.mysql.rsaChecksumType = Hash_Sha1;
                                        break;
                                default:
                                        yyerror2("Unknown checksum type: [%s] is not MD5 nor SHA1", portset.parameters.mysql.rsaChecksum);
                        }
                  }
#line 5255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 1781 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        if (cleanup_hash_string(portset.parameters.mysql.rsaChecksum) != 32)
                                yyerror2("Unknown checksum type: [%s] is not MD5", portset.parameters.mysql.rsaChecksum);
                        portset.parameters.mysql.rsaChecksumType = Hash_Md5;
                  }
#line 5266 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1787 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.mysql.rsaChecksum = (yyvsp[0].string);
                        if (cleanup_hash_string(portset.parameters.mysql.rsaChecksum) != 40)
                                yyerror2("Unknown checksum type: [%s] is not SHA1", portset.parameters.mysql.rsaChecksum);
                        portset.parameters.mysql.rsaChecksumType = Hash_Sha1;
                  }
#line 5277 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 1796 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5285 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1799 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5293 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 1804 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = verifyMaxForward((yyvsp[0].number));
                  }
#line 5301 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 1813 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.target = (yyvsp[0].string);
                  }
#line 5309 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 1816 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.sip.maxforward = (yyvsp[0].number);
                  }
#line 5317 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 1825 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.username = (yyvsp[0].string);
                  }
#line 5325 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 1828 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.password = (yyvsp[0].string);
                  }
#line 5333 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 1839 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].number) < 0) {
                                yyerror2("The status value must be greater or equal to 0");
                        }
                        portset.parameters.http.operator = (yyvsp[-1].number);
                        portset.parameters.http.status = (yyvsp[0].number);
                        portset.parameters.http.hasStatus = true;
                  }
#line 5346 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 1849 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Get;
                  }
#line 5354 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 1852 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.method = Http_Head;
                  }
#line 5362 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 1857 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5371 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 1861 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.request = Util_urlEncode((yyvsp[0].string), false);
                        FREE((yyvsp[0].string));
                  }
#line 5380 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 1867 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.http.checksum = (yyvsp[0].string);
                  }
#line 5388 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 1872 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, Str_cat("Host:%s", (yyvsp[0].string)));
                        FREE((yyvsp[0].string));
                  }
#line 5397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 1879 "src/p.y" /* yacc.c:1646  */
    {
                        addhttpheader(&portset, (yyvsp[0].string));
                 }
#line 5405 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 1884 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.string) = (yyvsp[0].string);
                  }
#line 5413 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 1893 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.radius.secret = (yyvsp[0].string);
                  }
#line 5421 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 1902 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.username = (yyvsp[0].string);
                  }
#line 5429 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 1905 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.password = (yyvsp[0].string);
                  }
#line 5437 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 1908 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.path = (yyvsp[0].string);
                  }
#line 5445 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 1911 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.loglimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.loglimit = (yyvsp[-1].number);
                  }
#line 5454 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 1915 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.closelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.closelimit = (yyvsp[-1].number);
                  }
#line 5463 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 1919 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.dnslimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.dnslimit = (yyvsp[-1].number);
                  }
#line 5472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 1923 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.keepalivelimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.keepalivelimit = (yyvsp[-1].number);
                  }
#line 5481 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 1927 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.replylimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.replylimit = (yyvsp[-1].number);
                  }
#line 5490 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 1931 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.requestlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.requestlimit = (yyvsp[-1].number);
                  }
#line 5499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 1935 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.startlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.startlimit = (yyvsp[-1].number);
                  }
#line 5508 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 1939 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.waitlimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.waitlimit = (yyvsp[-1].number);
                  }
#line 5517 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 1943 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.gracefullimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.gracefullimit = (yyvsp[-1].number);
                  }
#line 5526 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 1947 "src/p.y" /* yacc.c:1646  */
    {
                        portset.parameters.apachestatus.cleanuplimitOP = (yyvsp[-2].number);
                        portset.parameters.apachestatus.cleanuplimit = (yyvsp[-1].number);
                  }
#line 5535 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 1953 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(nonexistset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addnonexist(&nonexistset);
                  }
#line 5544 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 1957 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(existset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addexist(&existset);
                  }
#line 5553 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 1964 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(pidset).action, (yyvsp[0].number), Action_Ignored);
                        addpid(&pidset);
                  }
#line 5562 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 1970 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(ppidset).action, (yyvsp[0].number), Action_Ignored);
                        addppid(&ppidset);
                  }
#line 5571 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 1976 "src/p.y" /* yacc.c:1646  */
    {
                        uptimeset.operator = (yyvsp[-6].number);
                        uptimeset.uptime = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(uptimeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        adduptime(&uptimeset);
                  }
#line 5582 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 1984 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.count = (yyvsp[0].number);
                 }
#line 5590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 1989 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.size = (yyvsp[0].number);
                        if (icmpset.size < 8) {
                                yyerror2("The minimum ping size is 8 bytes");
                        } else if (icmpset.size > 1492) {
                                yyerror2("The maximum ping size is 1492 bytes");
                        }
                 }
#line 5603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 1999 "src/p.y" /* yacc.c:1646  */
    {
                        icmpset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5611 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2004 "src/p.y" /* yacc.c:1646  */
    {
                        _parseOutgoingAddress((yyvsp[0].string), &(icmpset.outgoing));
                  }
#line 5619 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2009 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.stopTimeout;
                  }
#line 5627 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2012 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2017 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.startTimeout;
                  }
#line 5643 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2020 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5651 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2025 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.restartTimeout;
                  }
#line 5659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2028 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5667 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2033 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.programTimeout;
                  }
#line 5675 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2036 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // milliseconds internally
                  }
#line 5683 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2041 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Run.limits.networkTimeout;
                  }
#line 5691 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2044 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[-1].number) * 1000; // net timeout is in milliseconds internally
                  }
#line 5699 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2049 "src/p.y" /* yacc.c:1646  */
    {
                        portset.timeout = (yyvsp[-1].number) * 1000; // timeout is in milliseconds internally
                    }
#line 5707 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2054 "src/p.y" /* yacc.c:1646  */
    {
                        portset.retry = (yyvsp[0].number);
                  }
#line 5715 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2059 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, (yyvsp[0].number), Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5726 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2065 "src/p.y" /* yacc.c:1646  */
    {
                        actionrateset.count = (yyvsp[-5].number);
                        actionrateset.cycle = (yyvsp[-3].number);
                        addeventaction(&(actionrateset).action, Action_Unmonitor, Action_Alert);
                        addactionrate(&actionrateset);
                  }
#line 5737 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2073 "src/p.y" /* yacc.c:1646  */
    {
                        seturlrequest((yyvsp[-1].number), (yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 5746 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2079 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 5752 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2080 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 5758 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2083 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = Event_All;
                        addmail((yyvsp[-2].string), &mailset, &current->maillist);
                  }
#line 5767 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2087 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[-5].string), &mailset, &current->maillist);
                  }
#line 5775 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2090 "src/p.y" /* yacc.c:1646  */
    {
                        mailset.events = ~mailset.events;
                        addmail((yyvsp[-6].string), &mailset, &current->maillist);
                  }
#line 5784 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2094 "src/p.y" /* yacc.c:1646  */
    {
                        addmail((yyvsp[0].string), &mailset, &current->maillist);
                  }
#line 5792 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2099 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5798 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2102 "src/p.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 5804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2109 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Action; }
#line 5810 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2110 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteIn; }
#line 5816 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2111 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_ByteOut; }
#line 5822 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2112 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Checksum; }
#line 5828 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2113 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Connection; }
#line 5834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2114 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Content; }
#line 5840 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2115 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Data; }
#line 5846 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2116 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exec; }
#line 5852 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2117 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Exist; }
#line 5858 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2118 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_FsFlag; }
#line 5864 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2119 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Gid; }
#line 5870 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2120 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Icmp; }
#line 5876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2121 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Instance; }
#line 5882 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2122 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Invalid; }
#line 5888 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2123 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Link; }
#line 5894 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2124 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_NonExist; }
#line 5900 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2125 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketIn; }
#line 5906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2126 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PacketOut; }
#line 5912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2127 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Permission; }
#line 5918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2128 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Pid; }
#line 5924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2129 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_PPid; }
#line 5930 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2130 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Resource; }
#line 5936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2131 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Saturation; }
#line 5942 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2132 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Size; }
#line 5948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2133 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Speed; }
#line 5954 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2134 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Status; }
#line 5960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2135 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timeout; }
#line 5966 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2136 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Timestamp; }
#line 5972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2137 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uid; }
#line 5978 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2138 "src/p.y" /* yacc.c:1646  */
    { mailset.events |= Event_Uptime; }
#line 5984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2149 "src/p.y" /* yacc.c:1646  */
    { mailset.from = (yyvsp[-1].address); }
#line 5990 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2150 "src/p.y" /* yacc.c:1646  */
    { mailset.replyto = (yyvsp[-1].address); }
#line 5996 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2151 "src/p.y" /* yacc.c:1646  */
    { mailset.subject = (yyvsp[0].string); }
#line 6002 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2152 "src/p.y" /* yacc.c:1646  */
    { mailset.message = (yyvsp[0].string); }
#line 6008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2155 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_SkipCycles;
                        current->every.spec.cycle.counter = current->every.spec.cycle.number = (yyvsp[-1].number);
                 }
#line 6017 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2159 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_Cron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 6026 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2163 "src/p.y" /* yacc.c:1646  */
    {
                        current->every.type = Every_NotInCron;
                        current->every.spec.cron = (yyvsp[0].string);
                 }
#line 6035 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2169 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Active;
                  }
#line 6043 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2172 "src/p.y" /* yacc.c:1646  */
    {
                        current->mode = Monitor_Passive;
                  }
#line 6051 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2175 "src/p.y" /* yacc.c:1646  */
    {
                        // Deprecated since monit 5.18
                        current->onreboot = Onreboot_Laststate;
                  }
#line 6060 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2181 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Start;
                  }
#line 6068 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2184 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Nostart;
                        current->monitor = Monitor_Not;
                  }
#line 6077 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2188 "src/p.y" /* yacc.c:1646  */
    {
                        current->onreboot = Onreboot_Laststate;
                  }
#line 6085 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2193 "src/p.y" /* yacc.c:1646  */
    {
                        addservicegroup((yyvsp[0].string));
                        FREE((yyvsp[0].string));
                  }
#line 6094 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2207 "src/p.y" /* yacc.c:1646  */
    { adddependant((yyvsp[0].string)); }
#line 6100 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2210 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = true;
                        statusset.operator = (yyvsp[-5].number);
                        statusset.return_value = (yyvsp[-4].number);
                        addeventaction(&(statusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addstatus(&statusset);
                   }
#line 6112 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2217 "src/p.y" /* yacc.c:1646  */
    {
                        statusset.initialized = false;
                        statusset.operator = Operator_Changed;
                        statusset.return_value = 0;
                        addeventaction(&(statusset).action, (yyvsp[0].number), Action_Ignored);
                        addstatus(&statusset);
                   }
#line 6124 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2226 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 6133 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2245 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(resourceset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addresource(&resourceset);
                   }
#line 6142 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2261 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6152 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2266 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_CpuPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6162 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2273 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = (yyvsp[-3].number);
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6172 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2280 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuUser)
                                (yyval.number) = Resource_CpuUser;
                        else
                                yywarning2("The CPU user usage statistics is not available on this system\n");
                  }
#line 6183 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2286 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuSystem)
                                (yyval.number) = Resource_CpuSystem;
                        else
                                yywarning2("The CPU system usage statistics is not available on this system\n");
                  }
#line 6194 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2292 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuIOWait)
                                (yyval.number) = Resource_CpuWait;
                        else
                                yywarning2("The CPU I/O wait usage statistics is not available on this system\n");
                  }
#line 6205 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2298 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuNice)
                                (yyval.number) = Resource_CpuNice;
                        else
                                yywarning2("The CPU nice usage statistics is not available on this system\n");
                  }
#line 6216 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2304 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuHardIRQ)
                                (yyval.number) = Resource_CpuHardIRQ;
                        else
                                yywarning2("The CPU hardware IRQ usage statistics is not available on this system\n");
                  }
#line 6227 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2310 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuSoftIRQ)
                                (yyval.number) = Resource_CpuSoftIRQ;
                        else
                                yywarning2("The CPU software IRQ usage statistics is not available on this system\n");
                  }
#line 6238 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2316 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuSteal)
                                (yyval.number) = Resource_CpuSteal;
                        else
                                yywarning2("The CPU steal usage statistics is not available on this system\n");
                  }
#line 6249 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2322 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuGuest)
                                (yyval.number) = Resource_CpuGuest;
                        else
                                yywarning2("The CPU guest usage statistics is not available on this system\n");
                  }
#line 6260 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2328 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_CpuGuestNice)
                                (yyval.number) = Resource_CpuGuestNice;
                        else
                                yywarning2("The CPU guest nice usage statistics is not available on this system\n");
                  }
#line 6271 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2334 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Resource_CpuPercent;
                  }
#line 6279 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2339 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6289 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 2344 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6299 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2351 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6309 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 2356 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6319 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2361 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryKbyteTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6329 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 2366 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_MemoryPercentTotal;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6339 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 2373 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapKbyte;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real) * (yyvsp[0].number);
                  }
#line 6349 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 2378 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_SwapPercent;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].real);
                  }
#line 6359 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 2385 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Threads;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6369 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 2392 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_Children;
                        resourceset.operator = (yyvsp[-1].number);
                        resourceset.limit = (yyvsp[0].number);
                  }
#line 6379 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 2399 "src/p.y" /* yacc.c:1646  */
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
#line 6402 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 2419 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage1m; }
#line 6408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2420 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage5m; }
#line 6414 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2421 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Resource_LoadAverage15m; }
#line 6420 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2424 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = 1; }
#line 6426 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2425 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = systeminfo.cpu.count; }
#line 6432 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2429 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6442 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2434 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadBytesPhysical;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6452 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2439 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_ReadOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6462 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2446 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytes;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6472 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2451 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteBytesPhysical;
                        resourceset.operator = (yyvsp[-3].number);
                        resourceset.limit = (yyvsp[-2].real) * (yyvsp[-1].number);
                  }
#line 6482 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2456 "src/p.y" /* yacc.c:1646  */
    {
                        resourceset.resource_id = Resource_WriteOperations;
                        resourceset.operator = (yyvsp[-2].number);
                        resourceset.limit = (yyvsp[-1].number);
                  }
#line 6492 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2463 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].real); }
#line 6498 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2464 "src/p.y" /* yacc.c:1646  */
    { (yyval.real) = (float) (yyvsp[0].number); }
#line 6504 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2467 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Default; }
#line 6510 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2468 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Access; }
#line 6516 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2469 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Change; }
#line 6522 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2470 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Timestamp_Modification; }
#line 6528 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2473 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-7].number);
                        timestampset.operator = (yyvsp[-6].number);
                        timestampset.time = ((yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(timestampset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addtimestamp(&timestampset);
                  }
#line 6540 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2480 "src/p.y" /* yacc.c:1646  */
    {
                        timestampset.type = (yyvsp[-3].number);
                        timestampset.test_changes = true;
                        addeventaction(&(timestampset).action, (yyvsp[0].number), Action_Ignored);
                        addtimestamp(&timestampset);
                  }
#line 6551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2488 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6557 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2489 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Greater; }
#line 6563 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2490 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_GreaterOrEqual; }
#line 6569 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2491 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Less; }
#line 6575 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2492 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_LessOrEqual; }
#line 6581 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2493 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Equal; }
#line 6587 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2494 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_NotEqual; }
#line 6593 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2495 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Operator_Changed; }
#line 6599 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2498 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6605 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2499 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6611 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2500 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6617 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2501 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6623 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2502 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6629 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2503 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Month; }
#line 6635 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2506 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Minute; }
#line 6641 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2507 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Hour; }
#line 6647 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2508 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Day; }
#line 6653 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2510 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6659 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2511 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Time_Second; }
#line 6665 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2513 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 0;
                  }
#line 6673 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2516 "src/p.y" /* yacc.c:1646  */
    {
                        repeat = 1;
                  }
#line 6681 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 2519 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 0) {
                                yyerror2("The number of repeat cycles must be greater or equal to 0");
                        }
                        repeat = (yyvsp[-1].number);
                  }
#line 6692 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2527 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6700 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2530 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6708 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2534 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Exec;
                  }
#line 6716 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2537 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Restart;
                  }
#line 6724 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2540 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Start;
                  }
#line 6732 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 2543 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Stop;
                  }
#line 6740 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 2546 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Unmonitor;
                  }
#line 6748 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 2551 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat1 = repeat;
                                repeat = 0;
                                command1 = command;
                                command = NULL;
                        }
                  }
#line 6762 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 2562 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                        if ((yyvsp[0].number) == Action_Exec && command) {
                                repeat2 = repeat;
                                repeat = 0;
                                command2 = command;
                                command = NULL;
                        }
                  }
#line 6776 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 2573 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (unsigned long)(yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %zu", BITMAP_MAX);
                        } else {
                                rate.count  = (yyvsp[-1].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6789 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 2583 "src/p.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[-1].number) < 1 || (unsigned long)(yyvsp[-1].number) > BITMAP_MAX) {
                                yyerror2("The number of cycles must be between 1 and %zu", BITMAP_MAX);
                        } else if ((yyvsp[-2].number) < 1 || (yyvsp[-2].number) > (yyvsp[-1].number)) {
                                yyerror2("The number of events must be between 1 and less then poll cycles");
                        } else {
                                rate.count  = (yyvsp[-2].number);
                                rate.cycles = (yyvsp[-1].number);
                        }
                  }
#line 6804 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 2596 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6814 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 2601 "src/p.y" /* yacc.c:1646  */
    {
                        rate1.count = rate.count;
                        rate1.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6824 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 2609 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                  }
#line 6834 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 2614 "src/p.y" /* yacc.c:1646  */
    {
                        rate2.count = rate.count;
                        rate2.cycles = rate.cycles;
                        reset_rateset(&rate);
                }
#line 6844 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 2621 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = Action_Alert;
                  }
#line 6852 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 2624 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6860 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 2627 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6868 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 2630 "src/p.y" /* yacc.c:1646  */
    {
                        (yyval.number) = (yyvsp[0].number);
                  }
#line 6876 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 2635 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6885 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 2640 "src/p.y" /* yacc.c:1646  */
    {
                        snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[-4].string));
                        FREE((yyvsp[-4].string));
                        addeventaction(&(checksumset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addchecksum(&checksumset);
                  }
#line 6896 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 2646 "src/p.y" /* yacc.c:1646  */
    {
                        checksumset.test_changes = true;
                        addeventaction(&(checksumset).action, (yyvsp[0].number), Action_Ignored);
                        addchecksum(&checksumset);
                  }
#line 6906 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 2652 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Unknown; }
#line 6912 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 2653 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Md5; }
#line 6918 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 2654 "src/p.y" /* yacc.c:1646  */
    { checksumset.type = Hash_Sha1; }
#line 6924 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 2657 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6936 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 2664 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Inode;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6948 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 2671 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-5].number);
                        filesystemset.limit_absolute = (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6960 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 2678 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_InodeFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6972 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 2687 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6984 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 2694 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_Space;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 6996 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 2701 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * (yyvsp[-4].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7008 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 2708 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_SpaceFree;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_percent = (yyvsp[-5].real);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7020 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 2717 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7032 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 2724 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ReadOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7044 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 2733 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteBytes;
                        filesystemset.operator = (yyvsp[-7].number);
                        filesystemset.limit_absolute = (yyvsp[-6].real) * (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7056 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 2740 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_WriteOperations;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7068 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 2749 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].number);
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7080 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 2756 "src/p.y" /* yacc.c:1646  */
    {
                        filesystemset.resource = Resource_ServiceTime;
                        filesystemset.operator = (yyvsp[-6].number);
                        filesystemset.limit_absolute = (yyvsp[-5].real) * 1000;
                        addeventaction(&(filesystemset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addfilesystem(&filesystemset);
                  }
#line 7092 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 2765 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(fsflagset).action, (yyvsp[0].number), Action_Ignored);
                        addfsflag(&fsflagset);
                  }
#line 7101 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 2771 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 7107 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 2772 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Byte; }
#line 7113 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 2773 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Kilobyte; }
#line 7119 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 2774 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Megabyte; }
#line 7125 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 2775 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = Unit_Gigabyte; }
#line 7131 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 2778 "src/p.y" /* yacc.c:1646  */
    {
                        permset.perm = check_perm((yyvsp[-4].number));
                        addeventaction(&(permset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addperm(&permset);
                  }
#line 7141 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 2783 "src/p.y" /* yacc.c:1646  */
    {
                        permset.test_changes = true;
                        addeventaction(&(permset).action, (yyvsp[-1].number), Action_Ignored);
                        addperm(&permset);
                  }
#line 7151 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 2790 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 7164 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 2798 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-4].number) == Operator_Equal ? false : true;
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 7176 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 2805 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 7189 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 2813 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = (yyvsp[-1].number) == Operator_Equal ? false : true;
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 7201 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 2821 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = (yyvsp[-3].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, (yyvsp[0].number));
                        FREE((yyvsp[-3].string));
                  }
#line 7213 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 2828 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = false;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[-3].string);
                        addmatch(&matchset, (yyvsp[0].number), 0);
                  }
#line 7224 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 2834 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = (yyvsp[0].string);
                        matchset.match_string = NULL;
                        addmatchpath(&matchset, Action_Ignored);
                        FREE((yyvsp[0].string));
                  }
#line 7236 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 2841 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.ignore = true;
                        matchset.match_path = NULL;
                        matchset.match_string = (yyvsp[0].string);
                        addmatch(&matchset, Action_Ignored, 0);
                  }
#line 7247 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 2849 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = false;
                  }
#line 7255 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 2852 "src/p.y" /* yacc.c:1646  */
    {
                        matchset.not = true;
                  }
#line 7263 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 2858 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.operator = (yyvsp[-6].number);
                        sizeset.size = ((unsigned long long)(yyvsp[-5].number) * (yyvsp[-4].number));
                        addeventaction(&(sizeset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addsize(&sizeset);
                  }
#line 7274 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 2864 "src/p.y" /* yacc.c:1646  */
    {
                        sizeset.test_changes = true;
                        addeventaction(&(sizeset).action, (yyvsp[0].number), Action_Ignored);
                        addsize(&sizeset);
                  }
#line 7284 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 2871 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->uid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7295 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 2877 "src/p.y" /* yacc.c:1646  */
    {
                    uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                    addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                    current->uid = adduid(&uidset);
                  }
#line 7305 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 2884 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid((yyvsp[-4].string), 0);
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7316 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 2890 "src/p.y" /* yacc.c:1646  */
    {
                        uidset.uid = get_uid(NULL, (yyvsp[-4].number));
                        addeventaction(&(uidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->euid = adduid(&uidset);
                  }
#line 7326 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 2897 "src/p.y" /* yacc.c:1646  */
    {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7334 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 2900 "src/p.y" /* yacc.c:1646  */
    {
                        addsecurityattribute((yyvsp[-4].string), (yyvsp[-1].number), (yyvsp[0].number));
                  }
#line 7342 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 2905 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_FiledescriptorsPerSystem)
                                addfiledescriptors((yyvsp[-5].number), false, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-system filedescriptors statistics is not available on this system\n");
                  }
#line 7353 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 2911 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_FiledescriptorsPerSystem)
                                addfiledescriptors((yyvsp[-6].number), false, -1LL, (yyvsp[-5].real), (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-system filedescriptors statistics is not available on this system\n");
                  }
#line 7364 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 789:
#line 2919 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_FiledescriptorsPerProcess)
                                addfiledescriptors((yyvsp[-5].number), false, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors statistics is not available on this system\n");
                  }
#line 7375 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 2925 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_FiledescriptorsPerProcessMax)
                                addfiledescriptors((yyvsp[-6].number), false, -1LL, (yyvsp[-5].real), (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors maximum is not exposed on this system, so we cannot compute usage %%, please use the test with absolute value\n");
                  }
#line 7386 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 2933 "src/p.y" /* yacc.c:1646  */
    {
                        if (systeminfo.statisticsAvailable & Statistics_FiledescriptorsPerProcess)
                                addfiledescriptors((yyvsp[-5].number), true, (long long)(yyvsp[-4].number), -1., (yyvsp[-1].number), (yyvsp[0].number));
                        else
                                yywarning("The per-process filedescriptors statistics is not available on this system\n");
                  }
#line 7397 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 2941 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid((yyvsp[-4].string), 0);
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                        FREE((yyvsp[-4].string));
                  }
#line 7408 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 2947 "src/p.y" /* yacc.c:1646  */
    {
                        gidset.gid = get_gid(NULL, (yyvsp[-4].number));
                        addeventaction(&(gidset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        current->gid = addgid(&gidset);
                  }
#line 7418 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 2954 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkstatusset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkstatus(current, &linkstatusset);
                  }
#line 7427 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 2960 "src/p.y" /* yacc.c:1646  */
    {
                        addeventaction(&(linkspeedset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinkspeed(current, &linkspeedset);
                  }
#line 7436 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 2965 "src/p.y" /* yacc.c:1646  */
    {
                        linksaturationset.operator = (yyvsp[-6].number);
                        linksaturationset.limit = (unsigned long long)(yyvsp[-5].number);
                        addeventaction(&(linksaturationset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addlinksaturation(current, &linksaturationset);
                  }
#line 7447 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 2973 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7460 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 2981 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7473 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 2989 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadbyteslist), &bandwidthset);
                  }
#line 7486 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 2997 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7499 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 801:
#line 3005 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7512 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 3013 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->uploadpacketslist), &bandwidthset);
                  }
#line 7525 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 3023 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7538 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 3031 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-6].number) * (yyvsp[-5].number));
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7551 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 3039 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = ((unsigned long long)(yyvsp[-7].number) * (yyvsp[-6].number));
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadbyteslist), &bandwidthset);
                  }
#line 7564 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 3047 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7577 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 3055 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-7].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-6].number);
                        bandwidthset.rangecount = 1;
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7590 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 3063 "src/p.y" /* yacc.c:1646  */
    {
                        bandwidthset.operator = (yyvsp[-8].number);
                        bandwidthset.limit = (unsigned long long)(yyvsp[-7].number);
                        bandwidthset.rangecount = (yyvsp[-5].number);
                        bandwidthset.range = (yyvsp[-4].number);
                        addeventaction(&(bandwidthset).action, (yyvsp[-1].number), (yyvsp[0].number));
                        addbandwidth(&(current->downloadpacketslist), &bandwidthset);
                  }
#line 7603 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 3073 "src/p.y" /* yacc.c:1646  */
    { (yyval.number) = ICMP_ECHO; }
#line 7609 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 3076 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = 0; }
#line 7615 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 3077 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[0].number); }
#line 7621 "src/y.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 3078 "src/p.y" /* yacc.c:1646  */
    { mailset.reminder = (yyvsp[-1].number); }
#line 7627 "src/y.tab.c" /* yacc.c:1646  */
    break;


#line 7631 "src/y.tab.c" /* yacc.c:1646  */
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
#line 3081 "src/p.y" /* yacc.c:1906  */



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
        Log_error("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
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
        Log_warning("%s:%i: %s '%s'\n", currentfile, lineno, msg, yytext);
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
        Log_error("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
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
        Log_warning("%s:%i: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
        FREE(msg);
}


/*
 * The Parser hook - start parsing the control file
 * Returns true if parsing succeeded, otherwise false
 */
bool parse(char *controlfile) {
        ASSERT(controlfile);

        if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
                Log_error("Cannot open the control file '%s' -- %s\n", controlfile, STRERROR);
                return false;
        }

        currentfile = Str_dup(controlfile);

        available_statistics(&systeminfo);

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
        if (current) {
                addservice(current);
                current = NULL;
        }

        /* Check that we do not start monit in daemon mode without having a poll time */
        if (! Run.polltime && ((Run.flags & Run_Daemon) || (Run.flags & Run_Foreground))) {
                Log_error("Poll time is invalid or not defined. Please define poll time in the control file\nas a number (> 0)  or use the -d option when starting monit\n");
                cfg_errflag++;
        }

        if (Run.files.log)
                Run.flags |= Run_Log;

        /* Add the default general system service if not specified explicitly: service name default to hostname */
        if (! Run.system) {
                char hostname[STRLEN];
                if (gethostname(hostname, sizeof(hostname))) {
                        Log_error("Cannot get system hostname -- please add 'check system <name>'\n");
                        cfg_errflag++;
                }
                if (Util_existService(hostname)) {
                        Log_error("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", hostname);
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
                                        Log_warning("M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n");
                        }
                } else if (Run.httpd.flags & Httpd_Unix) {
                        Log_warning("M/Monit enabled but Monit httpd is using unix socket -- please change 'set httpd' statement to use TCP port in order to be able to manage services on Monit\n");
                } else {
                        Log_warning("M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n");
                }
        }

        /* Check the sanity of any dependency graph */
        check_depend();

#if defined HAVE_OPENSSL && defined OPENSSL_FIPS
        Ssl_setFipsMode(Run.flags & Run_FipsEnabled);
#endif

        Processor_setHttpPostLimit();
}


static bool _parseOutgoingAddress(const char *ip, Outgoing_T *outgoing) {
        struct addrinfo *result, hints = {.ai_flags = AI_NUMERICHOST};
        int status = getaddrinfo(ip, NULL, &hints, &result);
        if (status == 0) {
                outgoing->ip = (char *)ip;
                outgoing->addrlen = result->ai_addrlen;
                memcpy(&(outgoing->addr), result->ai_addr, result->ai_addrlen);
                freeaddrinfo(result);
                return true;
        } else {
                yyerror2("IP address parsing failed for %s -- %s", ip, status == EAI_SYSTEM ? STRERROR : gai_strerror(status));
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
        current->onrebootRestored = false;
        current->mode     = Monitor_Active;
        current->monitor  = Monitor_Init;
        current->onreboot = Run.onreboot;
        current->name     = name;
        current->name_urlescaped = Util_urlEncode(name, false);
        current->name_htmlescaped = escapeHTML(StringBuffer_create(16), name);
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
                                Log_error("'check host' statement is incomplete: Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", s->name);
                                cfg_errflag++;
                        }
                        break;
                case Service_Program:
                        // Verify that a program test has a status test
                        if (! s->statuslist) {
                                Log_error("'check program %s' is incomplete: Please add an 'if status != n' test\n", s->name);
                                cfg_errflag++;
                        }
                        char program[PATH_MAX];
                        strncpy(program, s->program->args->arg[0], sizeof(program) - 1);
                        // Require that the program exist before creating the Command object
                        if (File_isExecutable(program)) {
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
                        } else {
                                Log_error("A 'check program' statement requires the program to exist '%s'\n", program);
                                cfg_errflag++;
                        }
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
        d->dependant_urlescaped = Util_urlEncode(dependant, false);
        d->dependant_htmlescaped = escapeHTML(StringBuffer_create(16), dependant);
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
                        if (sslset.flags && (p->target.net.port == 25 || p->target.net.port == 143 || p->target.net.port == 587))
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
        } else if (p->protocol->check == check_mysql) {
                if (p->parameters.mysql.rsaChecksum) {
                        if (! p->parameters.mysql.username)
                                yyerror2("the rsakey checksum test requires credentials to be defined");
                        if (p->target.net.ssl.options.flags != SSL_Disabled)
                                yyerror2("the rsakey checksum test can be used just with unsecured mysql protocol");
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
        /* Get the initial size for future comparison, if the file exists */
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
                if (! (Checksum_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
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
static void addcommand(int what, unsigned int timeout) {

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
                check_exec(argument);
                NEW(command);
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
                        yyerror2("Cannot read htpasswd (%s) for user %s", filename, username);
                else
                        yyerror2("Cannot read htpasswd (%s)", filename);
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
static bool addcredentials(char *uname, char *passwd, Digest_Type dtype, bool readonly) {
        Auth_T c;

        ASSERT(uname);
        ASSERT(passwd);

        if (strlen(passwd) > Str_compareConstantTimeStringLength) {
                yyerror2("Password for user %s is too long, maximum %d allowed", uname, Str_compareConstantTimeStringLength);
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
        bool done;                /* no unvisited nodes left?                               */
        bool found_some;          /* last iteration found anything new ?                    */
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
                                        Log_error("Depending service '%s' is not defined in the control file\n", d->dependant);
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
                Log_error("Found a depend loop in the control file involving the service '%s'\n", depends_on->name);
                exit(1);
        }

        ASSERT(depend_list);
        servicelist = depend_list;

        for (Service_T s = depend_list; s; s = s->next_depend)
                s->next = s->next_depend;
}


// Check and warn if the executable does not exist
static void check_exec(char *exec) {
        if (! File_exist(exec))
                yywarning2("Program does not exist:");
        else if (! File_isExecutable(exec))
                yywarning2("Program is not executable:");
}


/* Return a valid max forward value for SIP header */
static int verifyMaxForward(int mf) {
        if (mf == 0) {
                return INT_MAX; // Differentiate uninitialized (0) and explicit zero
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


static void _setPEM(char **store, char *path, const char *description, bool isFile) {
        if (*store) {
                yyerror2("Duplicate %s", description);
                FREE(path);
        } else if (! File_exist(path)) {
                yyerror2("%s doesn't exist", description);
                FREE(path);
        } else if (! (isFile ? File_isFile(path) : File_isDirectory(path))) {
                yyerror2("%s is not a %s", description, isFile ? "file" : "directory");
                FREE(path);
        } else if (! File_isReadable(path)) {
                yyerror2("Cannot read %s", description);
                FREE(path);
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
        options->pemchain = sslset.pemchain;
        options->pemkey = sslset.pemkey;
        options->verify = sslset.verify;
        options->version = sslset.version;
        reset_sslset();
}


#ifdef HAVE_OPENSSL
static void _setSSLVersion(short version) {
        sslset.flags = SSL_Enabled;
        if (sslset.version == -1)
                sslset.version = version;
        else
                sslset.version |= version;
}
#endif


static void _unsetSSLVersion(short version) {
        if (sslset.version != -1)
                sslset.version &= ~version;
}


static void addsecurityattribute(char *value, Action_Type failed, Action_Type succeeded) {
        SecurityAttribute_T attr;
        NEW(attr);
        addeventaction(&(attr->action), failed, succeeded);
        attr->attribute = value;
        attr->next = current->secattrlist;
        current->secattrlist = attr;
}

static void addfiledescriptors(Operator_Type operator, bool total, long long value_absolute, float value_percent, Action_Type failed, Action_Type succeeded) {
        Filedescriptors_T fds;
        NEW(fds);
        addeventaction(&(fds->action), failed, succeeded);
        fds->total = total;
        fds->limit_absolute = value_absolute;
        fds->limit_percent = value_percent;
        fds->operator = operator;
        fds->next = current->filedescriptorslist;
        current->filedescriptorslist = fds;
}

