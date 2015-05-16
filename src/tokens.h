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
    ADDRESS = 271,
    INIT = 272,
    READONLY = 273,
    CLEARTEXT = 274,
    MD5HASH = 275,
    SHA1HASH = 276,
    CRYPT = 277,
    DELAY = 278,
    PEMFILE = 279,
    ENABLE = 280,
    DISABLE = 281,
    HTTPDSSL = 282,
    CLIENTPEMFILE = 283,
    ALLOWSELFCERTIFICATION = 284,
    INTERFACE = 285,
    LINK = 286,
    PACKET = 287,
    ERROR = 288,
    BYTEIN = 289,
    BYTEOUT = 290,
    PACKETIN = 291,
    PACKETOUT = 292,
    SPEED = 293,
    SATURATION = 294,
    UPLOAD = 295,
    DOWNLOAD = 296,
    TOTAL = 297,
    IDFILE = 298,
    STATEFILE = 299,
    SEND = 300,
    EXPECT = 301,
    EXPECTBUFFER = 302,
    CYCLE = 303,
    COUNT = 304,
    REMINDER = 305,
    PIDFILE = 306,
    START = 307,
    STOP = 308,
    PATHTOK = 309,
    HOST = 310,
    HOSTNAME = 311,
    PORT = 312,
    IPV4 = 313,
    IPV6 = 314,
    TYPE = 315,
    UDP = 316,
    TCP = 317,
    TCPSSL = 318,
    PROTOCOL = 319,
    CONNECTION = 320,
    ALERT = 321,
    NOALERT = 322,
    MAILFORMAT = 323,
    UNIXSOCKET = 324,
    SIGNATURE = 325,
    TIMEOUT = 326,
    RETRY = 327,
    RESTART = 328,
    CHECKSUM = 329,
    EVERY = 330,
    NOTEVERY = 331,
    DEFAULT = 332,
    HTTP = 333,
    HTTPS = 334,
    APACHESTATUS = 335,
    FTP = 336,
    SMTP = 337,
    SMTPS = 338,
    POP = 339,
    POPS = 340,
    IMAP = 341,
    IMAPS = 342,
    CLAMAV = 343,
    NNTP = 344,
    NTP3 = 345,
    MYSQL = 346,
    DNS = 347,
    WEBSOCKET = 348,
    SSH = 349,
    DWP = 350,
    LDAP2 = 351,
    LDAP3 = 352,
    RDATE = 353,
    RSYNC = 354,
    TNS = 355,
    PGSQL = 356,
    POSTFIXPOLICY = 357,
    SIP = 358,
    LMTP = 359,
    GPS = 360,
    RADIUS = 361,
    MEMCACHE = 362,
    REDIS = 363,
    MONGODB = 364,
    SIEVE = 365,
    STRING = 366,
    PATH = 367,
    MAILADDR = 368,
    MAILFROM = 369,
    MAILREPLYTO = 370,
    MAILSUBJECT = 371,
    MAILBODY = 372,
    SERVICENAME = 373,
    STRINGNAME = 374,
    NUMBER = 375,
    PERCENT = 376,
    LOGLIMIT = 377,
    CLOSELIMIT = 378,
    DNSLIMIT = 379,
    KEEPALIVELIMIT = 380,
    REPLYLIMIT = 381,
    REQUESTLIMIT = 382,
    STARTLIMIT = 383,
    WAITLIMIT = 384,
    GRACEFULLIMIT = 385,
    CLEANUPLIMIT = 386,
    REAL = 387,
    CHECKPROC = 388,
    CHECKFILESYS = 389,
    CHECKFILE = 390,
    CHECKDIR = 391,
    CHECKHOST = 392,
    CHECKSYSTEM = 393,
    CHECKFIFO = 394,
    CHECKPROGRAM = 395,
    CHECKNET = 396,
    CHILDREN = 397,
    SYSTEM = 398,
    STATUS = 399,
    ORIGIN = 400,
    VERSIONOPT = 401,
    RESOURCE = 402,
    MEMORY = 403,
    TOTALMEMORY = 404,
    LOADAVG1 = 405,
    LOADAVG5 = 406,
    LOADAVG15 = 407,
    SWAP = 408,
    MODE = 409,
    ACTIVE = 410,
    PASSIVE = 411,
    MANUAL = 412,
    CPU = 413,
    TOTALCPU = 414,
    CPUUSER = 415,
    CPUSYSTEM = 416,
    CPUWAIT = 417,
    GROUP = 418,
    REQUEST = 419,
    DEPENDS = 420,
    BASEDIR = 421,
    SLOT = 422,
    EVENTQUEUE = 423,
    SECRET = 424,
    HOSTHEADER = 425,
    UID = 426,
    EUID = 427,
    GID = 428,
    MMONIT = 429,
    INSTANCE = 430,
    USERNAME = 431,
    PASSWORD = 432,
    TIMESTAMP = 433,
    CHANGED = 434,
    SECOND = 435,
    MINUTE = 436,
    HOUR = 437,
    DAY = 438,
    MONTH = 439,
    SSLAUTO = 440,
    SSLV2 = 441,
    SSLV3 = 442,
    TLSV1 = 443,
    TLSV11 = 444,
    TLSV12 = 445,
    CERTMD5 = 446,
    BYTE = 447,
    KILOBYTE = 448,
    MEGABYTE = 449,
    GIGABYTE = 450,
    INODE = 451,
    SPACE = 452,
    TFREE = 453,
    PERMISSION = 454,
    SIZE = 455,
    MATCH = 456,
    NOT = 457,
    IGNORE = 458,
    ACTION = 459,
    UPTIME = 460,
    EXEC = 461,
    UNMONITOR = 462,
    PING = 463,
    PING4 = 464,
    PING6 = 465,
    ICMP = 466,
    ICMPECHO = 467,
    NONEXIST = 468,
    EXIST = 469,
    INVALID = 470,
    DATA = 471,
    RECOVERED = 472,
    PASSED = 473,
    SUCCEEDED = 474,
    URL = 475,
    CONTENT = 476,
    PID = 477,
    PPID = 478,
    FSFLAG = 479,
    REGISTER = 480,
    CREDENTIALS = 481,
    URLOBJECT = 482,
    TARGET = 483,
    TIMESPEC = 484,
    HTTPHEADER = 485,
    MAXFORWARD = 486,
    FIPS = 487,
    GREATER = 488,
    LESS = 489,
    EQUAL = 490,
    NOTEQUAL = 491
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
#define ADDRESS 271
#define INIT 272
#define READONLY 273
#define CLEARTEXT 274
#define MD5HASH 275
#define SHA1HASH 276
#define CRYPT 277
#define DELAY 278
#define PEMFILE 279
#define ENABLE 280
#define DISABLE 281
#define HTTPDSSL 282
#define CLIENTPEMFILE 283
#define ALLOWSELFCERTIFICATION 284
#define INTERFACE 285
#define LINK 286
#define PACKET 287
#define ERROR 288
#define BYTEIN 289
#define BYTEOUT 290
#define PACKETIN 291
#define PACKETOUT 292
#define SPEED 293
#define SATURATION 294
#define UPLOAD 295
#define DOWNLOAD 296
#define TOTAL 297
#define IDFILE 298
#define STATEFILE 299
#define SEND 300
#define EXPECT 301
#define EXPECTBUFFER 302
#define CYCLE 303
#define COUNT 304
#define REMINDER 305
#define PIDFILE 306
#define START 307
#define STOP 308
#define PATHTOK 309
#define HOST 310
#define HOSTNAME 311
#define PORT 312
#define IPV4 313
#define IPV6 314
#define TYPE 315
#define UDP 316
#define TCP 317
#define TCPSSL 318
#define PROTOCOL 319
#define CONNECTION 320
#define ALERT 321
#define NOALERT 322
#define MAILFORMAT 323
#define UNIXSOCKET 324
#define SIGNATURE 325
#define TIMEOUT 326
#define RETRY 327
#define RESTART 328
#define CHECKSUM 329
#define EVERY 330
#define NOTEVERY 331
#define DEFAULT 332
#define HTTP 333
#define HTTPS 334
#define APACHESTATUS 335
#define FTP 336
#define SMTP 337
#define SMTPS 338
#define POP 339
#define POPS 340
#define IMAP 341
#define IMAPS 342
#define CLAMAV 343
#define NNTP 344
#define NTP3 345
#define MYSQL 346
#define DNS 347
#define WEBSOCKET 348
#define SSH 349
#define DWP 350
#define LDAP2 351
#define LDAP3 352
#define RDATE 353
#define RSYNC 354
#define TNS 355
#define PGSQL 356
#define POSTFIXPOLICY 357
#define SIP 358
#define LMTP 359
#define GPS 360
#define RADIUS 361
#define MEMCACHE 362
#define REDIS 363
#define MONGODB 364
#define SIEVE 365
#define STRING 366
#define PATH 367
#define MAILADDR 368
#define MAILFROM 369
#define MAILREPLYTO 370
#define MAILSUBJECT 371
#define MAILBODY 372
#define SERVICENAME 373
#define STRINGNAME 374
#define NUMBER 375
#define PERCENT 376
#define LOGLIMIT 377
#define CLOSELIMIT 378
#define DNSLIMIT 379
#define KEEPALIVELIMIT 380
#define REPLYLIMIT 381
#define REQUESTLIMIT 382
#define STARTLIMIT 383
#define WAITLIMIT 384
#define GRACEFULLIMIT 385
#define CLEANUPLIMIT 386
#define REAL 387
#define CHECKPROC 388
#define CHECKFILESYS 389
#define CHECKFILE 390
#define CHECKDIR 391
#define CHECKHOST 392
#define CHECKSYSTEM 393
#define CHECKFIFO 394
#define CHECKPROGRAM 395
#define CHECKNET 396
#define CHILDREN 397
#define SYSTEM 398
#define STATUS 399
#define ORIGIN 400
#define VERSIONOPT 401
#define RESOURCE 402
#define MEMORY 403
#define TOTALMEMORY 404
#define LOADAVG1 405
#define LOADAVG5 406
#define LOADAVG15 407
#define SWAP 408
#define MODE 409
#define ACTIVE 410
#define PASSIVE 411
#define MANUAL 412
#define CPU 413
#define TOTALCPU 414
#define CPUUSER 415
#define CPUSYSTEM 416
#define CPUWAIT 417
#define GROUP 418
#define REQUEST 419
#define DEPENDS 420
#define BASEDIR 421
#define SLOT 422
#define EVENTQUEUE 423
#define SECRET 424
#define HOSTHEADER 425
#define UID 426
#define EUID 427
#define GID 428
#define MMONIT 429
#define INSTANCE 430
#define USERNAME 431
#define PASSWORD 432
#define TIMESTAMP 433
#define CHANGED 434
#define SECOND 435
#define MINUTE 436
#define HOUR 437
#define DAY 438
#define MONTH 439
#define SSLAUTO 440
#define SSLV2 441
#define SSLV3 442
#define TLSV1 443
#define TLSV11 444
#define TLSV12 445
#define CERTMD5 446
#define BYTE 447
#define KILOBYTE 448
#define MEGABYTE 449
#define GIGABYTE 450
#define INODE 451
#define SPACE 452
#define TFREE 453
#define PERMISSION 454
#define SIZE 455
#define MATCH 456
#define NOT 457
#define IGNORE 458
#define ACTION 459
#define UPTIME 460
#define EXEC 461
#define UNMONITOR 462
#define PING 463
#define PING4 464
#define PING6 465
#define ICMP 466
#define ICMPECHO 467
#define NONEXIST 468
#define EXIST 469
#define INVALID 470
#define DATA 471
#define RECOVERED 472
#define PASSED 473
#define SUCCEEDED 474
#define URL 475
#define CONTENT 476
#define PID 477
#define PPID 478
#define FSFLAG 479
#define REGISTER 480
#define CREDENTIALS 481
#define URLOBJECT 482
#define TARGET 483
#define TIMESPEC 484
#define HTTPHEADER 485
#define MAXFORWARD 486
#define FIPS 487
#define GREATER 488
#define LESS 489
#define EQUAL 490
#define NOTEQUAL 491

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 288 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 533 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
