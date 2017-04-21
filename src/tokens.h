/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 309 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 610 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
