/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 310 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 624 "src/y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
