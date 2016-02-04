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
    READONLY = 274,
    CLEARTEXT = 275,
    MD5HASH = 276,
    SHA1HASH = 277,
    CRYPT = 278,
    DELAY = 279,
    PEMFILE = 280,
    ENABLE = 281,
    DISABLE = 282,
    SSL = 283,
    CLIENTPEMFILE = 284,
    ALLOWSELFCERTIFICATION = 285,
    SELFSIGNED = 286,
    VERIFY = 287,
    CERTIFICATE = 288,
    CACERTIFICATEFILE = 289,
    CACERTIFICATEPATH = 290,
    VALID = 291,
    INTERFACE = 292,
    LINK = 293,
    PACKET = 294,
    BYTEIN = 295,
    BYTEOUT = 296,
    PACKETIN = 297,
    PACKETOUT = 298,
    SPEED = 299,
    SATURATION = 300,
    UPLOAD = 301,
    DOWNLOAD = 302,
    TOTAL = 303,
    IDFILE = 304,
    STATEFILE = 305,
    SEND = 306,
    EXPECT = 307,
    CYCLE = 308,
    COUNT = 309,
    REMINDER = 310,
    REPEAT = 311,
    LIMITS = 312,
    SENDEXPECTBUFFER = 313,
    EXPECTBUFFER = 314,
    FILECONTENTBUFFER = 315,
    HTTPCONTENTBUFFER = 316,
    PROGRAMOUTPUT = 317,
    NETWORKTIMEOUT = 318,
    PIDFILE = 319,
    START = 320,
    STOP = 321,
    PATHTOK = 322,
    HOST = 323,
    HOSTNAME = 324,
    PORT = 325,
    IPV4 = 326,
    IPV6 = 327,
    TYPE = 328,
    UDP = 329,
    TCP = 330,
    TCPSSL = 331,
    PROTOCOL = 332,
    CONNECTION = 333,
    ALERT = 334,
    NOALERT = 335,
    MAILFORMAT = 336,
    UNIXSOCKET = 337,
    SIGNATURE = 338,
    TIMEOUT = 339,
    RETRY = 340,
    RESTART = 341,
    CHECKSUM = 342,
    EVERY = 343,
    NOTEVERY = 344,
    DEFAULT = 345,
    HTTP = 346,
    HTTPS = 347,
    APACHESTATUS = 348,
    FTP = 349,
    SMTP = 350,
    SMTPS = 351,
    POP = 352,
    POPS = 353,
    IMAP = 354,
    IMAPS = 355,
    CLAMAV = 356,
    NNTP = 357,
    NTP3 = 358,
    MYSQL = 359,
    DNS = 360,
    WEBSOCKET = 361,
    SSH = 362,
    DWP = 363,
    LDAP2 = 364,
    LDAP3 = 365,
    RDATE = 366,
    RSYNC = 367,
    TNS = 368,
    PGSQL = 369,
    POSTFIXPOLICY = 370,
    SIP = 371,
    LMTP = 372,
    GPS = 373,
    RADIUS = 374,
    MEMCACHE = 375,
    REDIS = 376,
    MONGODB = 377,
    SIEVE = 378,
    STRING = 379,
    PATH = 380,
    MAILADDR = 381,
    MAILFROM = 382,
    MAILREPLYTO = 383,
    MAILSUBJECT = 384,
    MAILBODY = 385,
    SERVICENAME = 386,
    STRINGNAME = 387,
    NUMBER = 388,
    PERCENT = 389,
    LOGLIMIT = 390,
    CLOSELIMIT = 391,
    DNSLIMIT = 392,
    KEEPALIVELIMIT = 393,
    REPLYLIMIT = 394,
    REQUESTLIMIT = 395,
    STARTLIMIT = 396,
    WAITLIMIT = 397,
    GRACEFULLIMIT = 398,
    CLEANUPLIMIT = 399,
    REAL = 400,
    CHECKPROC = 401,
    CHECKFILESYS = 402,
    CHECKFILE = 403,
    CHECKDIR = 404,
    CHECKHOST = 405,
    CHECKSYSTEM = 406,
    CHECKFIFO = 407,
    CHECKPROGRAM = 408,
    CHECKNET = 409,
    THREADS = 410,
    CHILDREN = 411,
    STATUS = 412,
    ORIGIN = 413,
    VERSIONOPT = 414,
    RESOURCE = 415,
    MEMORY = 416,
    TOTALMEMORY = 417,
    LOADAVG1 = 418,
    LOADAVG5 = 419,
    LOADAVG15 = 420,
    SWAP = 421,
    MODE = 422,
    ACTIVE = 423,
    PASSIVE = 424,
    MANUAL = 425,
    CPU = 426,
    TOTALCPU = 427,
    CPUUSER = 428,
    CPUSYSTEM = 429,
    CPUWAIT = 430,
    GROUP = 431,
    REQUEST = 432,
    DEPENDS = 433,
    BASEDIR = 434,
    SLOT = 435,
    EVENTQUEUE = 436,
    SECRET = 437,
    HOSTHEADER = 438,
    UID = 439,
    EUID = 440,
    GID = 441,
    MMONIT = 442,
    INSTANCE = 443,
    USERNAME = 444,
    PASSWORD = 445,
    TIMESTAMP = 446,
    CHANGED = 447,
    MILLISECOND = 448,
    SECOND = 449,
    MINUTE = 450,
    HOUR = 451,
    DAY = 452,
    MONTH = 453,
    SSLAUTO = 454,
    SSLV2 = 455,
    SSLV3 = 456,
    TLSV1 = 457,
    TLSV11 = 458,
    TLSV12 = 459,
    CERTMD5 = 460,
    AUTO = 461,
    BYTE = 462,
    KILOBYTE = 463,
    MEGABYTE = 464,
    GIGABYTE = 465,
    INODE = 466,
    SPACE = 467,
    TFREE = 468,
    PERMISSION = 469,
    SIZE = 470,
    MATCH = 471,
    NOT = 472,
    IGNORE = 473,
    ACTION = 474,
    UPTIME = 475,
    EXEC = 476,
    UNMONITOR = 477,
    PING = 478,
    PING4 = 479,
    PING6 = 480,
    ICMP = 481,
    ICMPECHO = 482,
    NONEXIST = 483,
    EXIST = 484,
    INVALID = 485,
    DATA = 486,
    RECOVERED = 487,
    PASSED = 488,
    SUCCEEDED = 489,
    URL = 490,
    CONTENT = 491,
    PID = 492,
    PPID = 493,
    FSFLAG = 494,
    REGISTER = 495,
    CREDENTIALS = 496,
    URLOBJECT = 497,
    TARGET = 498,
    TIMESPEC = 499,
    HTTPHEADER = 500,
    MAXFORWARD = 501,
    FIPS = 502,
    GREATER = 503,
    LESS = 504,
    EQUAL = 505,
    NOTEQUAL = 506
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
#define READONLY 274
#define CLEARTEXT 275
#define MD5HASH 276
#define SHA1HASH 277
#define CRYPT 278
#define DELAY 279
#define PEMFILE 280
#define ENABLE 281
#define DISABLE 282
#define SSL 283
#define CLIENTPEMFILE 284
#define ALLOWSELFCERTIFICATION 285
#define SELFSIGNED 286
#define VERIFY 287
#define CERTIFICATE 288
#define CACERTIFICATEFILE 289
#define CACERTIFICATEPATH 290
#define VALID 291
#define INTERFACE 292
#define LINK 293
#define PACKET 294
#define BYTEIN 295
#define BYTEOUT 296
#define PACKETIN 297
#define PACKETOUT 298
#define SPEED 299
#define SATURATION 300
#define UPLOAD 301
#define DOWNLOAD 302
#define TOTAL 303
#define IDFILE 304
#define STATEFILE 305
#define SEND 306
#define EXPECT 307
#define CYCLE 308
#define COUNT 309
#define REMINDER 310
#define REPEAT 311
#define LIMITS 312
#define SENDEXPECTBUFFER 313
#define EXPECTBUFFER 314
#define FILECONTENTBUFFER 315
#define HTTPCONTENTBUFFER 316
#define PROGRAMOUTPUT 317
#define NETWORKTIMEOUT 318
#define PIDFILE 319
#define START 320
#define STOP 321
#define PATHTOK 322
#define HOST 323
#define HOSTNAME 324
#define PORT 325
#define IPV4 326
#define IPV6 327
#define TYPE 328
#define UDP 329
#define TCP 330
#define TCPSSL 331
#define PROTOCOL 332
#define CONNECTION 333
#define ALERT 334
#define NOALERT 335
#define MAILFORMAT 336
#define UNIXSOCKET 337
#define SIGNATURE 338
#define TIMEOUT 339
#define RETRY 340
#define RESTART 341
#define CHECKSUM 342
#define EVERY 343
#define NOTEVERY 344
#define DEFAULT 345
#define HTTP 346
#define HTTPS 347
#define APACHESTATUS 348
#define FTP 349
#define SMTP 350
#define SMTPS 351
#define POP 352
#define POPS 353
#define IMAP 354
#define IMAPS 355
#define CLAMAV 356
#define NNTP 357
#define NTP3 358
#define MYSQL 359
#define DNS 360
#define WEBSOCKET 361
#define SSH 362
#define DWP 363
#define LDAP2 364
#define LDAP3 365
#define RDATE 366
#define RSYNC 367
#define TNS 368
#define PGSQL 369
#define POSTFIXPOLICY 370
#define SIP 371
#define LMTP 372
#define GPS 373
#define RADIUS 374
#define MEMCACHE 375
#define REDIS 376
#define MONGODB 377
#define SIEVE 378
#define STRING 379
#define PATH 380
#define MAILADDR 381
#define MAILFROM 382
#define MAILREPLYTO 383
#define MAILSUBJECT 384
#define MAILBODY 385
#define SERVICENAME 386
#define STRINGNAME 387
#define NUMBER 388
#define PERCENT 389
#define LOGLIMIT 390
#define CLOSELIMIT 391
#define DNSLIMIT 392
#define KEEPALIVELIMIT 393
#define REPLYLIMIT 394
#define REQUESTLIMIT 395
#define STARTLIMIT 396
#define WAITLIMIT 397
#define GRACEFULLIMIT 398
#define CLEANUPLIMIT 399
#define REAL 400
#define CHECKPROC 401
#define CHECKFILESYS 402
#define CHECKFILE 403
#define CHECKDIR 404
#define CHECKHOST 405
#define CHECKSYSTEM 406
#define CHECKFIFO 407
#define CHECKPROGRAM 408
#define CHECKNET 409
#define THREADS 410
#define CHILDREN 411
#define STATUS 412
#define ORIGIN 413
#define VERSIONOPT 414
#define RESOURCE 415
#define MEMORY 416
#define TOTALMEMORY 417
#define LOADAVG1 418
#define LOADAVG5 419
#define LOADAVG15 420
#define SWAP 421
#define MODE 422
#define ACTIVE 423
#define PASSIVE 424
#define MANUAL 425
#define CPU 426
#define TOTALCPU 427
#define CPUUSER 428
#define CPUSYSTEM 429
#define CPUWAIT 430
#define GROUP 431
#define REQUEST 432
#define DEPENDS 433
#define BASEDIR 434
#define SLOT 435
#define EVENTQUEUE 436
#define SECRET 437
#define HOSTHEADER 438
#define UID 439
#define EUID 440
#define GID 441
#define MMONIT 442
#define INSTANCE 443
#define USERNAME 444
#define PASSWORD 445
#define TIMESTAMP 446
#define CHANGED 447
#define MILLISECOND 448
#define SECOND 449
#define MINUTE 450
#define HOUR 451
#define DAY 452
#define MONTH 453
#define SSLAUTO 454
#define SSLV2 455
#define SSLV3 456
#define TLSV1 457
#define TLSV11 458
#define TLSV12 459
#define CERTMD5 460
#define AUTO 461
#define BYTE 462
#define KILOBYTE 463
#define MEGABYTE 464
#define GIGABYTE 465
#define INODE 466
#define SPACE 467
#define TFREE 468
#define PERMISSION 469
#define SIZE 470
#define MATCH 471
#define NOT 472
#define IGNORE 473
#define ACTION 474
#define UPTIME 475
#define EXEC 476
#define UNMONITOR 477
#define PING 478
#define PING4 479
#define PING6 480
#define ICMP 481
#define ICMPECHO 482
#define NONEXIST 483
#define EXIST 484
#define INVALID 485
#define DATA 486
#define RECOVERED 487
#define PASSED 488
#define SUCCEEDED 489
#define URL 490
#define CONTENT 491
#define PID 492
#define PPID 493
#define FSFLAG 494
#define REGISTER 495
#define CREDENTIALS 496
#define URLOBJECT 497
#define TARGET 498
#define TIMESPEC 499
#define HTTPHEADER 500
#define MAXFORWARD 501
#define FIPS 502
#define GREATER 503
#define LESS 504
#define EQUAL 505
#define NOTEQUAL 506

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 301 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 563 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
