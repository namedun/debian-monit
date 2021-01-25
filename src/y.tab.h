/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 322 "src/p.y"

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 659 "src/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
