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
    MAILSENDER = 383,
    MAILREPLYTO = 384,
    MAILSUBJECT = 385,
    MAILBODY = 386,
    SERVICENAME = 387,
    STRINGNAME = 388,
    NUMBER = 389,
    PERCENT = 390,
    LOGLIMIT = 391,
    CLOSELIMIT = 392,
    DNSLIMIT = 393,
    KEEPALIVELIMIT = 394,
    REPLYLIMIT = 395,
    REQUESTLIMIT = 396,
    STARTLIMIT = 397,
    WAITLIMIT = 398,
    GRACEFULLIMIT = 399,
    CLEANUPLIMIT = 400,
    REAL = 401,
    CHECKPROC = 402,
    CHECKFILESYS = 403,
    CHECKFILE = 404,
    CHECKDIR = 405,
    CHECKHOST = 406,
    CHECKSYSTEM = 407,
    CHECKFIFO = 408,
    CHECKPROGRAM = 409,
    CHECKNET = 410,
    THREADS = 411,
    CHILDREN = 412,
    STATUS = 413,
    ORIGIN = 414,
    VERSIONOPT = 415,
    RESOURCE = 416,
    MEMORY = 417,
    TOTALMEMORY = 418,
    LOADAVG1 = 419,
    LOADAVG5 = 420,
    LOADAVG15 = 421,
    SWAP = 422,
    MODE = 423,
    ACTIVE = 424,
    PASSIVE = 425,
    MANUAL = 426,
    CPU = 427,
    TOTALCPU = 428,
    CPUUSER = 429,
    CPUSYSTEM = 430,
    CPUWAIT = 431,
    GROUP = 432,
    REQUEST = 433,
    DEPENDS = 434,
    BASEDIR = 435,
    SLOT = 436,
    EVENTQUEUE = 437,
    SECRET = 438,
    HOSTHEADER = 439,
    UID = 440,
    EUID = 441,
    GID = 442,
    MMONIT = 443,
    INSTANCE = 444,
    USERNAME = 445,
    PASSWORD = 446,
    TIMESTAMP = 447,
    CHANGED = 448,
    MILLISECOND = 449,
    SECOND = 450,
    MINUTE = 451,
    HOUR = 452,
    DAY = 453,
    MONTH = 454,
    SSLAUTO = 455,
    SSLV2 = 456,
    SSLV3 = 457,
    TLSV1 = 458,
    TLSV11 = 459,
    TLSV12 = 460,
    CERTMD5 = 461,
    AUTO = 462,
    BYTE = 463,
    KILOBYTE = 464,
    MEGABYTE = 465,
    GIGABYTE = 466,
    INODE = 467,
    SPACE = 468,
    TFREE = 469,
    PERMISSION = 470,
    SIZE = 471,
    MATCH = 472,
    NOT = 473,
    IGNORE = 474,
    ACTION = 475,
    UPTIME = 476,
    EXEC = 477,
    UNMONITOR = 478,
    PING = 479,
    PING4 = 480,
    PING6 = 481,
    ICMP = 482,
    ICMPECHO = 483,
    NONEXIST = 484,
    EXIST = 485,
    INVALID = 486,
    DATA = 487,
    RECOVERED = 488,
    PASSED = 489,
    SUCCEEDED = 490,
    URL = 491,
    CONTENT = 492,
    PID = 493,
    PPID = 494,
    FSFLAG = 495,
    REGISTER = 496,
    CREDENTIALS = 497,
    URLOBJECT = 498,
    ADDRESSOBJECT = 499,
    TARGET = 500,
    TIMESPEC = 501,
    HTTPHEADER = 502,
    MAXFORWARD = 503,
    FIPS = 504,
    GREATER = 505,
    LESS = 506,
    EQUAL = 507,
    NOTEQUAL = 508
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
#define MAILSENDER 383
#define MAILREPLYTO 384
#define MAILSUBJECT 385
#define MAILBODY 386
#define SERVICENAME 387
#define STRINGNAME 388
#define NUMBER 389
#define PERCENT 390
#define LOGLIMIT 391
#define CLOSELIMIT 392
#define DNSLIMIT 393
#define KEEPALIVELIMIT 394
#define REPLYLIMIT 395
#define REQUESTLIMIT 396
#define STARTLIMIT 397
#define WAITLIMIT 398
#define GRACEFULLIMIT 399
#define CLEANUPLIMIT 400
#define REAL 401
#define CHECKPROC 402
#define CHECKFILESYS 403
#define CHECKFILE 404
#define CHECKDIR 405
#define CHECKHOST 406
#define CHECKSYSTEM 407
#define CHECKFIFO 408
#define CHECKPROGRAM 409
#define CHECKNET 410
#define THREADS 411
#define CHILDREN 412
#define STATUS 413
#define ORIGIN 414
#define VERSIONOPT 415
#define RESOURCE 416
#define MEMORY 417
#define TOTALMEMORY 418
#define LOADAVG1 419
#define LOADAVG5 420
#define LOADAVG15 421
#define SWAP 422
#define MODE 423
#define ACTIVE 424
#define PASSIVE 425
#define MANUAL 426
#define CPU 427
#define TOTALCPU 428
#define CPUUSER 429
#define CPUSYSTEM 430
#define CPUWAIT 431
#define GROUP 432
#define REQUEST 433
#define DEPENDS 434
#define BASEDIR 435
#define SLOT 436
#define EVENTQUEUE 437
#define SECRET 438
#define HOSTHEADER 439
#define UID 440
#define EUID 441
#define GID 442
#define MMONIT 443
#define INSTANCE 444
#define USERNAME 445
#define PASSWORD 446
#define TIMESTAMP 447
#define CHANGED 448
#define MILLISECOND 449
#define SECOND 450
#define MINUTE 451
#define HOUR 452
#define DAY 453
#define MONTH 454
#define SSLAUTO 455
#define SSLV2 456
#define SSLV3 457
#define TLSV1 458
#define TLSV11 459
#define TLSV12 460
#define CERTMD5 461
#define AUTO 462
#define BYTE 463
#define KILOBYTE 464
#define MEGABYTE 465
#define GIGABYTE 466
#define INODE 467
#define SPACE 468
#define TFREE 469
#define PERMISSION 470
#define SIZE 471
#define MATCH 472
#define NOT 473
#define IGNORE 474
#define ACTION 475
#define UPTIME 476
#define EXEC 477
#define UNMONITOR 478
#define PING 479
#define PING4 480
#define PING6 481
#define ICMP 482
#define ICMPECHO 483
#define NONEXIST 484
#define EXIST 485
#define INVALID 486
#define DATA 487
#define RECOVERED 488
#define PASSED 489
#define SUCCEEDED 490
#define URL 491
#define CONTENT 492
#define PID 493
#define PPID 494
#define FSFLAG 495
#define REGISTER 496
#define CREDENTIALS 497
#define URLOBJECT 498
#define ADDRESSOBJECT 499
#define TARGET 500
#define TIMESPEC 501
#define HTTPHEADER 502
#define MAXFORWARD 503
#define FIPS 504
#define GREATER 505
#define LESS 506
#define EQUAL 507
#define NOTEQUAL 508

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 304 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        Address_T address;
        float real;
        int   number;
        char *string;

#line 568 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
