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
    BYTEIN = 288,
    BYTEOUT = 289,
    PACKETIN = 290,
    PACKETOUT = 291,
    SPEED = 292,
    SATURATION = 293,
    UPLOAD = 294,
    DOWNLOAD = 295,
    TOTAL = 296,
    IDFILE = 297,
    STATEFILE = 298,
    SEND = 299,
    EXPECT = 300,
    EXPECTBUFFER = 301,
    CYCLE = 302,
    COUNT = 303,
    REMINDER = 304,
    PIDFILE = 305,
    START = 306,
    STOP = 307,
    PATHTOK = 308,
    HOST = 309,
    HOSTNAME = 310,
    PORT = 311,
    IPV4 = 312,
    IPV6 = 313,
    TYPE = 314,
    UDP = 315,
    TCP = 316,
    TCPSSL = 317,
    PROTOCOL = 318,
    CONNECTION = 319,
    ALERT = 320,
    NOALERT = 321,
    MAILFORMAT = 322,
    UNIXSOCKET = 323,
    SIGNATURE = 324,
    TIMEOUT = 325,
    RETRY = 326,
    RESTART = 327,
    CHECKSUM = 328,
    EVERY = 329,
    NOTEVERY = 330,
    DEFAULT = 331,
    HTTP = 332,
    HTTPS = 333,
    APACHESTATUS = 334,
    FTP = 335,
    SMTP = 336,
    SMTPS = 337,
    POP = 338,
    POPS = 339,
    IMAP = 340,
    IMAPS = 341,
    CLAMAV = 342,
    NNTP = 343,
    NTP3 = 344,
    MYSQL = 345,
    DNS = 346,
    WEBSOCKET = 347,
    SSH = 348,
    DWP = 349,
    LDAP2 = 350,
    LDAP3 = 351,
    RDATE = 352,
    RSYNC = 353,
    TNS = 354,
    PGSQL = 355,
    POSTFIXPOLICY = 356,
    SIP = 357,
    LMTP = 358,
    GPS = 359,
    RADIUS = 360,
    MEMCACHE = 361,
    REDIS = 362,
    MONGODB = 363,
    SIEVE = 364,
    STRING = 365,
    PATH = 366,
    MAILADDR = 367,
    MAILFROM = 368,
    MAILREPLYTO = 369,
    MAILSUBJECT = 370,
    MAILBODY = 371,
    SERVICENAME = 372,
    STRINGNAME = 373,
    NUMBER = 374,
    PERCENT = 375,
    LOGLIMIT = 376,
    CLOSELIMIT = 377,
    DNSLIMIT = 378,
    KEEPALIVELIMIT = 379,
    REPLYLIMIT = 380,
    REQUESTLIMIT = 381,
    STARTLIMIT = 382,
    WAITLIMIT = 383,
    GRACEFULLIMIT = 384,
    CLEANUPLIMIT = 385,
    REAL = 386,
    CHECKPROC = 387,
    CHECKFILESYS = 388,
    CHECKFILE = 389,
    CHECKDIR = 390,
    CHECKHOST = 391,
    CHECKSYSTEM = 392,
    CHECKFIFO = 393,
    CHECKPROGRAM = 394,
    CHECKNET = 395,
    CHILDREN = 396,
    STATUS = 397,
    ORIGIN = 398,
    VERSIONOPT = 399,
    RESOURCE = 400,
    MEMORY = 401,
    TOTALMEMORY = 402,
    LOADAVG1 = 403,
    LOADAVG5 = 404,
    LOADAVG15 = 405,
    SWAP = 406,
    MODE = 407,
    ACTIVE = 408,
    PASSIVE = 409,
    MANUAL = 410,
    CPU = 411,
    TOTALCPU = 412,
    CPUUSER = 413,
    CPUSYSTEM = 414,
    CPUWAIT = 415,
    GROUP = 416,
    REQUEST = 417,
    DEPENDS = 418,
    BASEDIR = 419,
    SLOT = 420,
    EVENTQUEUE = 421,
    SECRET = 422,
    HOSTHEADER = 423,
    UID = 424,
    EUID = 425,
    GID = 426,
    MMONIT = 427,
    INSTANCE = 428,
    USERNAME = 429,
    PASSWORD = 430,
    TIMESTAMP = 431,
    CHANGED = 432,
    SECOND = 433,
    MINUTE = 434,
    HOUR = 435,
    DAY = 436,
    MONTH = 437,
    SSLAUTO = 438,
    SSLV2 = 439,
    SSLV3 = 440,
    TLSV1 = 441,
    TLSV11 = 442,
    TLSV12 = 443,
    CERTMD5 = 444,
    BYTE = 445,
    KILOBYTE = 446,
    MEGABYTE = 447,
    GIGABYTE = 448,
    INODE = 449,
    SPACE = 450,
    TFREE = 451,
    PERMISSION = 452,
    SIZE = 453,
    MATCH = 454,
    NOT = 455,
    IGNORE = 456,
    ACTION = 457,
    UPTIME = 458,
    EXEC = 459,
    UNMONITOR = 460,
    PING = 461,
    PING4 = 462,
    PING6 = 463,
    ICMP = 464,
    ICMPECHO = 465,
    NONEXIST = 466,
    EXIST = 467,
    INVALID = 468,
    DATA = 469,
    RECOVERED = 470,
    PASSED = 471,
    SUCCEEDED = 472,
    URL = 473,
    CONTENT = 474,
    PID = 475,
    PPID = 476,
    FSFLAG = 477,
    REGISTER = 478,
    CREDENTIALS = 479,
    URLOBJECT = 480,
    TARGET = 481,
    TIMESPEC = 482,
    HTTPHEADER = 483,
    MAXFORWARD = 484,
    FIPS = 485,
    GREATER = 486,
    LESS = 487,
    EQUAL = 488,
    NOTEQUAL = 489
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
#define BYTEIN 288
#define BYTEOUT 289
#define PACKETIN 290
#define PACKETOUT 291
#define SPEED 292
#define SATURATION 293
#define UPLOAD 294
#define DOWNLOAD 295
#define TOTAL 296
#define IDFILE 297
#define STATEFILE 298
#define SEND 299
#define EXPECT 300
#define EXPECTBUFFER 301
#define CYCLE 302
#define COUNT 303
#define REMINDER 304
#define PIDFILE 305
#define START 306
#define STOP 307
#define PATHTOK 308
#define HOST 309
#define HOSTNAME 310
#define PORT 311
#define IPV4 312
#define IPV6 313
#define TYPE 314
#define UDP 315
#define TCP 316
#define TCPSSL 317
#define PROTOCOL 318
#define CONNECTION 319
#define ALERT 320
#define NOALERT 321
#define MAILFORMAT 322
#define UNIXSOCKET 323
#define SIGNATURE 324
#define TIMEOUT 325
#define RETRY 326
#define RESTART 327
#define CHECKSUM 328
#define EVERY 329
#define NOTEVERY 330
#define DEFAULT 331
#define HTTP 332
#define HTTPS 333
#define APACHESTATUS 334
#define FTP 335
#define SMTP 336
#define SMTPS 337
#define POP 338
#define POPS 339
#define IMAP 340
#define IMAPS 341
#define CLAMAV 342
#define NNTP 343
#define NTP3 344
#define MYSQL 345
#define DNS 346
#define WEBSOCKET 347
#define SSH 348
#define DWP 349
#define LDAP2 350
#define LDAP3 351
#define RDATE 352
#define RSYNC 353
#define TNS 354
#define PGSQL 355
#define POSTFIXPOLICY 356
#define SIP 357
#define LMTP 358
#define GPS 359
#define RADIUS 360
#define MEMCACHE 361
#define REDIS 362
#define MONGODB 363
#define SIEVE 364
#define STRING 365
#define PATH 366
#define MAILADDR 367
#define MAILFROM 368
#define MAILREPLYTO 369
#define MAILSUBJECT 370
#define MAILBODY 371
#define SERVICENAME 372
#define STRINGNAME 373
#define NUMBER 374
#define PERCENT 375
#define LOGLIMIT 376
#define CLOSELIMIT 377
#define DNSLIMIT 378
#define KEEPALIVELIMIT 379
#define REPLYLIMIT 380
#define REQUESTLIMIT 381
#define STARTLIMIT 382
#define WAITLIMIT 383
#define GRACEFULLIMIT 384
#define CLEANUPLIMIT 385
#define REAL 386
#define CHECKPROC 387
#define CHECKFILESYS 388
#define CHECKFILE 389
#define CHECKDIR 390
#define CHECKHOST 391
#define CHECKSYSTEM 392
#define CHECKFIFO 393
#define CHECKPROGRAM 394
#define CHECKNET 395
#define CHILDREN 396
#define STATUS 397
#define ORIGIN 398
#define VERSIONOPT 399
#define RESOURCE 400
#define MEMORY 401
#define TOTALMEMORY 402
#define LOADAVG1 403
#define LOADAVG5 404
#define LOADAVG15 405
#define SWAP 406
#define MODE 407
#define ACTIVE 408
#define PASSIVE 409
#define MANUAL 410
#define CPU 411
#define TOTALCPU 412
#define CPUUSER 413
#define CPUSYSTEM 414
#define CPUWAIT 415
#define GROUP 416
#define REQUEST 417
#define DEPENDS 418
#define BASEDIR 419
#define SLOT 420
#define EVENTQUEUE 421
#define SECRET 422
#define HOSTHEADER 423
#define UID 424
#define EUID 425
#define GID 426
#define MMONIT 427
#define INSTANCE 428
#define USERNAME 429
#define PASSWORD 430
#define TIMESTAMP 431
#define CHANGED 432
#define SECOND 433
#define MINUTE 434
#define HOUR 435
#define DAY 436
#define MONTH 437
#define SSLAUTO 438
#define SSLV2 439
#define SSLV3 440
#define TLSV1 441
#define TLSV11 442
#define TLSV12 443
#define CERTMD5 444
#define BYTE 445
#define KILOBYTE 446
#define MEGABYTE 447
#define GIGABYTE 448
#define INODE 449
#define SPACE 450
#define TFREE 451
#define PERMISSION 452
#define SIZE 453
#define MATCH 454
#define NOT 455
#define IGNORE 456
#define ACTION 457
#define UPTIME 458
#define EXEC 459
#define UNMONITOR 460
#define PING 461
#define PING4 462
#define PING6 463
#define ICMP 464
#define ICMPECHO 465
#define NONEXIST 466
#define EXIST 467
#define INVALID 468
#define DATA 469
#define RECOVERED 470
#define PASSED 471
#define SUCCEEDED 472
#define URL 473
#define CONTENT 474
#define PID 475
#define PPID 476
#define FSFLAG 477
#define REGISTER 478
#define CREDENTIALS 479
#define URLOBJECT 480
#define TARGET 481
#define TIMESPEC 482
#define HTTPHEADER 483
#define MAXFORWARD 484
#define FIPS 485
#define GREATER 486
#define LESS 487
#define EQUAL 488
#define NOTEQUAL 489

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 291 "src/p.y" /* yacc.c:1909  */

        URL_T url;
        float real;
        int   number;
        char *string;

#line 529 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
