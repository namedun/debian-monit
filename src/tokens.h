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
    REJECTOPT = 271,
    ADDRESS = 272,
    INIT = 273,
    TERMINAL = 274,
    BATCH = 275,
    READONLY = 276,
    CLEARTEXT = 277,
    MD5HASH = 278,
    SHA1HASH = 279,
    CRYPT = 280,
    DELAY = 281,
    PEMFILE = 282,
    ENABLE = 283,
    DISABLE = 284,
    SSL = 285,
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
    PIDFILE = 321,
    START = 322,
    STOP = 323,
    PATHTOK = 324,
    HOST = 325,
    HOSTNAME = 326,
    PORT = 327,
    IPV4 = 328,
    IPV6 = 329,
    TYPE = 330,
    UDP = 331,
    TCP = 332,
    TCPSSL = 333,
    PROTOCOL = 334,
    CONNECTION = 335,
    ALERT = 336,
    NOALERT = 337,
    MAILFORMAT = 338,
    UNIXSOCKET = 339,
    SIGNATURE = 340,
    TIMEOUT = 341,
    RETRY = 342,
    RESTART = 343,
    CHECKSUM = 344,
    EVERY = 345,
    NOTEVERY = 346,
    DEFAULT = 347,
    HTTP = 348,
    HTTPS = 349,
    APACHESTATUS = 350,
    FTP = 351,
    SMTP = 352,
    SMTPS = 353,
    POP = 354,
    POPS = 355,
    IMAP = 356,
    IMAPS = 357,
    CLAMAV = 358,
    NNTP = 359,
    NTP3 = 360,
    MYSQL = 361,
    DNS = 362,
    WEBSOCKET = 363,
    SSH = 364,
    DWP = 365,
    LDAP2 = 366,
    LDAP3 = 367,
    RDATE = 368,
    RSYNC = 369,
    TNS = 370,
    PGSQL = 371,
    POSTFIXPOLICY = 372,
    SIP = 373,
    LMTP = 374,
    GPS = 375,
    RADIUS = 376,
    MEMCACHE = 377,
    REDIS = 378,
    MONGODB = 379,
    SIEVE = 380,
    STRING = 381,
    PATH = 382,
    MAILADDR = 383,
    MAILFROM = 384,
    MAILSENDER = 385,
    MAILREPLYTO = 386,
    MAILSUBJECT = 387,
    MAILBODY = 388,
    SERVICENAME = 389,
    STRINGNAME = 390,
    NUMBER = 391,
    PERCENT = 392,
    LOGLIMIT = 393,
    CLOSELIMIT = 394,
    DNSLIMIT = 395,
    KEEPALIVELIMIT = 396,
    REPLYLIMIT = 397,
    REQUESTLIMIT = 398,
    STARTLIMIT = 399,
    WAITLIMIT = 400,
    GRACEFULLIMIT = 401,
    CLEANUPLIMIT = 402,
    REAL = 403,
    CHECKPROC = 404,
    CHECKFILESYS = 405,
    CHECKFILE = 406,
    CHECKDIR = 407,
    CHECKHOST = 408,
    CHECKSYSTEM = 409,
    CHECKFIFO = 410,
    CHECKPROGRAM = 411,
    CHECKNET = 412,
    THREADS = 413,
    CHILDREN = 414,
    STATUS = 415,
    ORIGIN = 416,
    VERSIONOPT = 417,
    RESOURCE = 418,
    MEMORY = 419,
    TOTALMEMORY = 420,
    LOADAVG1 = 421,
    LOADAVG5 = 422,
    LOADAVG15 = 423,
    SWAP = 424,
    MODE = 425,
    ACTIVE = 426,
    PASSIVE = 427,
    MANUAL = 428,
    ONREBOOT = 429,
    NOSTART = 430,
    LASTSTATE = 431,
    CPU = 432,
    TOTALCPU = 433,
    CPUUSER = 434,
    CPUSYSTEM = 435,
    CPUWAIT = 436,
    GROUP = 437,
    REQUEST = 438,
    DEPENDS = 439,
    BASEDIR = 440,
    SLOT = 441,
    EVENTQUEUE = 442,
    SECRET = 443,
    HOSTHEADER = 444,
    UID = 445,
    EUID = 446,
    GID = 447,
    MMONIT = 448,
    INSTANCE = 449,
    USERNAME = 450,
    PASSWORD = 451,
    TIMESTAMP = 452,
    CHANGED = 453,
    MILLISECOND = 454,
    SECOND = 455,
    MINUTE = 456,
    HOUR = 457,
    DAY = 458,
    MONTH = 459,
    SSLAUTO = 460,
    SSLV2 = 461,
    SSLV3 = 462,
    TLSV1 = 463,
    TLSV11 = 464,
    TLSV12 = 465,
    CERTMD5 = 466,
    AUTO = 467,
    BYTE = 468,
    KILOBYTE = 469,
    MEGABYTE = 470,
    GIGABYTE = 471,
    INODE = 472,
    SPACE = 473,
    TFREE = 474,
    PERMISSION = 475,
    SIZE = 476,
    MATCH = 477,
    NOT = 478,
    IGNORE = 479,
    ACTION = 480,
    UPTIME = 481,
    EXEC = 482,
    UNMONITOR = 483,
    PING = 484,
    PING4 = 485,
    PING6 = 486,
    ICMP = 487,
    ICMPECHO = 488,
    NONEXIST = 489,
    EXIST = 490,
    INVALID = 491,
    DATA = 492,
    RECOVERED = 493,
    PASSED = 494,
    SUCCEEDED = 495,
    URL = 496,
    CONTENT = 497,
    PID = 498,
    PPID = 499,
    FSFLAG = 500,
    REGISTER = 501,
    CREDENTIALS = 502,
    URLOBJECT = 503,
    ADDRESSOBJECT = 504,
    TARGET = 505,
    TIMESPEC = 506,
    HTTPHEADER = 507,
    MAXFORWARD = 508,
    FIPS = 509,
    GREATER = 510,
    GREATEROREQUAL = 511,
    LESS = 512,
    LESSOREQUAL = 513,
    EQUAL = 514,
    NOTEQUAL = 515
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
#define REJECTOPT 271
#define ADDRESS 272
#define INIT 273
#define TERMINAL 274
#define BATCH 275
#define READONLY 276
#define CLEARTEXT 277
#define MD5HASH 278
#define SHA1HASH 279
#define CRYPT 280
#define DELAY 281
#define PEMFILE 282
#define ENABLE 283
#define DISABLE 284
#define SSL 285
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
#define PIDFILE 321
#define START 322
#define STOP 323
#define PATHTOK 324
#define HOST 325
#define HOSTNAME 326
#define PORT 327
#define IPV4 328
#define IPV6 329
#define TYPE 330
#define UDP 331
#define TCP 332
#define TCPSSL 333
#define PROTOCOL 334
#define CONNECTION 335
#define ALERT 336
#define NOALERT 337
#define MAILFORMAT 338
#define UNIXSOCKET 339
#define SIGNATURE 340
#define TIMEOUT 341
#define RETRY 342
#define RESTART 343
#define CHECKSUM 344
#define EVERY 345
#define NOTEVERY 346
#define DEFAULT 347
#define HTTP 348
#define HTTPS 349
#define APACHESTATUS 350
#define FTP 351
#define SMTP 352
#define SMTPS 353
#define POP 354
#define POPS 355
#define IMAP 356
#define IMAPS 357
#define CLAMAV 358
#define NNTP 359
#define NTP3 360
#define MYSQL 361
#define DNS 362
#define WEBSOCKET 363
#define SSH 364
#define DWP 365
#define LDAP2 366
#define LDAP3 367
#define RDATE 368
#define RSYNC 369
#define TNS 370
#define PGSQL 371
#define POSTFIXPOLICY 372
#define SIP 373
#define LMTP 374
#define GPS 375
#define RADIUS 376
#define MEMCACHE 377
#define REDIS 378
#define MONGODB 379
#define SIEVE 380
#define STRING 381
#define PATH 382
#define MAILADDR 383
#define MAILFROM 384
#define MAILSENDER 385
#define MAILREPLYTO 386
#define MAILSUBJECT 387
#define MAILBODY 388
#define SERVICENAME 389
#define STRINGNAME 390
#define NUMBER 391
#define PERCENT 392
#define LOGLIMIT 393
#define CLOSELIMIT 394
#define DNSLIMIT 395
#define KEEPALIVELIMIT 396
#define REPLYLIMIT 397
#define REQUESTLIMIT 398
#define STARTLIMIT 399
#define WAITLIMIT 400
#define GRACEFULLIMIT 401
#define CLEANUPLIMIT 402
#define REAL 403
#define CHECKPROC 404
#define CHECKFILESYS 405
#define CHECKFILE 406
#define CHECKDIR 407
#define CHECKHOST 408
#define CHECKSYSTEM 409
#define CHECKFIFO 410
#define CHECKPROGRAM 411
#define CHECKNET 412
#define THREADS 413
#define CHILDREN 414
#define STATUS 415
#define ORIGIN 416
#define VERSIONOPT 417
#define RESOURCE 418
#define MEMORY 419
#define TOTALMEMORY 420
#define LOADAVG1 421
#define LOADAVG5 422
#define LOADAVG15 423
#define SWAP 424
#define MODE 425
#define ACTIVE 426
#define PASSIVE 427
#define MANUAL 428
#define ONREBOOT 429
#define NOSTART 430
#define LASTSTATE 431
#define CPU 432
#define TOTALCPU 433
#define CPUUSER 434
#define CPUSYSTEM 435
#define CPUWAIT 436
#define GROUP 437
#define REQUEST 438
#define DEPENDS 439
#define BASEDIR 440
#define SLOT 441
#define EVENTQUEUE 442
#define SECRET 443
#define HOSTHEADER 444
#define UID 445
#define EUID 446
#define GID 447
#define MMONIT 448
#define INSTANCE 449
#define USERNAME 450
#define PASSWORD 451
#define TIMESTAMP 452
#define CHANGED 453
#define MILLISECOND 454
#define SECOND 455
#define MINUTE 456
#define HOUR 457
#define DAY 458
#define MONTH 459
#define SSLAUTO 460
#define SSLV2 461
#define SSLV3 462
#define TLSV1 463
#define TLSV11 464
#define TLSV12 465
#define CERTMD5 466
#define AUTO 467
#define BYTE 468
#define KILOBYTE 469
#define MEGABYTE 470
#define GIGABYTE 471
#define INODE 472
#define SPACE 473
#define TFREE 474
#define PERMISSION 475
#define SIZE 476
#define MATCH 477
#define NOT 478
#define IGNORE 479
#define ACTION 480
#define UPTIME 481
#define EXEC 482
#define UNMONITOR 483
#define PING 484
#define PING4 485
#define PING6 486
#define ICMP 487
#define ICMPECHO 488
#define NONEXIST 489
#define EXIST 490
#define INVALID 491
#define DATA 492
#define RECOVERED 493
#define PASSED 494
#define SUCCEEDED 495
#define URL 496
#define CONTENT 497
#define PID 498
#define PPID 499
#define FSFLAG 500
#define REGISTER 501
#define CREDENTIALS 502
#define URLOBJECT 503
#define ADDRESSOBJECT 504
#define TARGET 505
#define TIMESPEC 506
#define HTTPHEADER 507
#define MAXFORWARD 508
#define FIPS 509
#define GREATER 510
#define GREATEROREQUAL 511
#define LESS 512
#define LESSOREQUAL 513
#define EQUAL 514
#define NOTEQUAL 515

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 306 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 582 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
