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
#line 309 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 598 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
