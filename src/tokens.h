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
    IDFILE = 285,
    STATEFILE = 286,
    SEND = 287,
    EXPECT = 288,
    EXPECTBUFFER = 289,
    CYCLE = 290,
    COUNT = 291,
    REMINDER = 292,
    PIDFILE = 293,
    START = 294,
    STOP = 295,
    PATHTOK = 296,
    HOST = 297,
    HOSTNAME = 298,
    PORT = 299,
    TYPE = 300,
    UDP = 301,
    TCP = 302,
    TCPSSL = 303,
    PROTOCOL = 304,
    CONNECTION = 305,
    ALERT = 306,
    NOALERT = 307,
    MAILFORMAT = 308,
    UNIXSOCKET = 309,
    SIGNATURE = 310,
    TIMEOUT = 311,
    RETRY = 312,
    RESTART = 313,
    CHECKSUM = 314,
    EVERY = 315,
    NOTEVERY = 316,
    DEFAULT = 317,
    HTTP = 318,
    HTTPS = 319,
    APACHESTATUS = 320,
    FTP = 321,
    SMTP = 322,
    SMTPS = 323,
    POP = 324,
    IMAP = 325,
    IMAPS = 326,
    CLAMAV = 327,
    NNTP = 328,
    NTP3 = 329,
    MYSQL = 330,
    DNS = 331,
    WEBSOCKET = 332,
    SSH = 333,
    DWP = 334,
    LDAP2 = 335,
    LDAP3 = 336,
    RDATE = 337,
    RSYNC = 338,
    TNS = 339,
    PGSQL = 340,
    POSTFIXPOLICY = 341,
    SIP = 342,
    LMTP = 343,
    GPS = 344,
    RADIUS = 345,
    MEMCACHE = 346,
    REDIS = 347,
    MONGODB = 348,
    STRING = 349,
    PATH = 350,
    MAILADDR = 351,
    MAILFROM = 352,
    MAILREPLYTO = 353,
    MAILSUBJECT = 354,
    MAILBODY = 355,
    SERVICENAME = 356,
    STRINGNAME = 357,
    NUMBER = 358,
    PERCENT = 359,
    LOGLIMIT = 360,
    CLOSELIMIT = 361,
    DNSLIMIT = 362,
    KEEPALIVELIMIT = 363,
    REPLYLIMIT = 364,
    REQUESTLIMIT = 365,
    STARTLIMIT = 366,
    WAITLIMIT = 367,
    GRACEFULLIMIT = 368,
    CLEANUPLIMIT = 369,
    REAL = 370,
    CHECKPROC = 371,
    CHECKFILESYS = 372,
    CHECKFILE = 373,
    CHECKDIR = 374,
    CHECKHOST = 375,
    CHECKSYSTEM = 376,
    CHECKFIFO = 377,
    CHECKPROGRAM = 378,
    CHILDREN = 379,
    SYSTEM = 380,
    STATUS = 381,
    ORIGIN = 382,
    VERSIONOPT = 383,
    RESOURCE = 384,
    MEMORY = 385,
    TOTALMEMORY = 386,
    LOADAVG1 = 387,
    LOADAVG5 = 388,
    LOADAVG15 = 389,
    SWAP = 390,
    MODE = 391,
    ACTIVE = 392,
    PASSIVE = 393,
    MANUAL = 394,
    CPU = 395,
    TOTALCPU = 396,
    CPUUSER = 397,
    CPUSYSTEM = 398,
    CPUWAIT = 399,
    GROUP = 400,
    REQUEST = 401,
    DEPENDS = 402,
    BASEDIR = 403,
    SLOT = 404,
    EVENTQUEUE = 405,
    SECRET = 406,
    HOSTHEADER = 407,
    UID = 408,
    EUID = 409,
    GID = 410,
    MMONIT = 411,
    INSTANCE = 412,
    USERNAME = 413,
    PASSWORD = 414,
    TIMESTAMP = 415,
    CHANGED = 416,
    SECOND = 417,
    MINUTE = 418,
    HOUR = 419,
    DAY = 420,
    SSLAUTO = 421,
    SSLV2 = 422,
    SSLV3 = 423,
    TLSV1 = 424,
    TLSV11 = 425,
    TLSV12 = 426,
    CERTMD5 = 427,
    BYTE = 428,
    KILOBYTE = 429,
    MEGABYTE = 430,
    GIGABYTE = 431,
    INODE = 432,
    SPACE = 433,
    PERMISSION = 434,
    SIZE = 435,
    MATCH = 436,
    NOT = 437,
    IGNORE = 438,
    ACTION = 439,
    UPTIME = 440,
    EXEC = 441,
    UNMONITOR = 442,
    PING = 443,
    ICMP = 444,
    ICMPECHO = 445,
    NONEXIST = 446,
    EXIST = 447,
    INVALID = 448,
    DATA = 449,
    RECOVERED = 450,
    PASSED = 451,
    SUCCEEDED = 452,
    URL = 453,
    CONTENT = 454,
    PID = 455,
    PPID = 456,
    FSFLAG = 457,
    REGISTER = 458,
    CREDENTIALS = 459,
    URLOBJECT = 460,
    TARGET = 461,
    TIMESPEC = 462,
    HTTPHEADER = 463,
    MAXFORWARD = 464,
    FIPS = 465,
    GREATER = 466,
    LESS = 467,
    EQUAL = 468,
    NOTEQUAL = 469
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
#define IDFILE 285
#define STATEFILE 286
#define SEND 287
#define EXPECT 288
#define EXPECTBUFFER 289
#define CYCLE 290
#define COUNT 291
#define REMINDER 292
#define PIDFILE 293
#define START 294
#define STOP 295
#define PATHTOK 296
#define HOST 297
#define HOSTNAME 298
#define PORT 299
#define TYPE 300
#define UDP 301
#define TCP 302
#define TCPSSL 303
#define PROTOCOL 304
#define CONNECTION 305
#define ALERT 306
#define NOALERT 307
#define MAILFORMAT 308
#define UNIXSOCKET 309
#define SIGNATURE 310
#define TIMEOUT 311
#define RETRY 312
#define RESTART 313
#define CHECKSUM 314
#define EVERY 315
#define NOTEVERY 316
#define DEFAULT 317
#define HTTP 318
#define HTTPS 319
#define APACHESTATUS 320
#define FTP 321
#define SMTP 322
#define SMTPS 323
#define POP 324
#define IMAP 325
#define IMAPS 326
#define CLAMAV 327
#define NNTP 328
#define NTP3 329
#define MYSQL 330
#define DNS 331
#define WEBSOCKET 332
#define SSH 333
#define DWP 334
#define LDAP2 335
#define LDAP3 336
#define RDATE 337
#define RSYNC 338
#define TNS 339
#define PGSQL 340
#define POSTFIXPOLICY 341
#define SIP 342
#define LMTP 343
#define GPS 344
#define RADIUS 345
#define MEMCACHE 346
#define REDIS 347
#define MONGODB 348
#define STRING 349
#define PATH 350
#define MAILADDR 351
#define MAILFROM 352
#define MAILREPLYTO 353
#define MAILSUBJECT 354
#define MAILBODY 355
#define SERVICENAME 356
#define STRINGNAME 357
#define NUMBER 358
#define PERCENT 359
#define LOGLIMIT 360
#define CLOSELIMIT 361
#define DNSLIMIT 362
#define KEEPALIVELIMIT 363
#define REPLYLIMIT 364
#define REQUESTLIMIT 365
#define STARTLIMIT 366
#define WAITLIMIT 367
#define GRACEFULLIMIT 368
#define CLEANUPLIMIT 369
#define REAL 370
#define CHECKPROC 371
#define CHECKFILESYS 372
#define CHECKFILE 373
#define CHECKDIR 374
#define CHECKHOST 375
#define CHECKSYSTEM 376
#define CHECKFIFO 377
#define CHECKPROGRAM 378
#define CHILDREN 379
#define SYSTEM 380
#define STATUS 381
#define ORIGIN 382
#define VERSIONOPT 383
#define RESOURCE 384
#define MEMORY 385
#define TOTALMEMORY 386
#define LOADAVG1 387
#define LOADAVG5 388
#define LOADAVG15 389
#define SWAP 390
#define MODE 391
#define ACTIVE 392
#define PASSIVE 393
#define MANUAL 394
#define CPU 395
#define TOTALCPU 396
#define CPUUSER 397
#define CPUSYSTEM 398
#define CPUWAIT 399
#define GROUP 400
#define REQUEST 401
#define DEPENDS 402
#define BASEDIR 403
#define SLOT 404
#define EVENTQUEUE 405
#define SECRET 406
#define HOSTHEADER 407
#define UID 408
#define EUID 409
#define GID 410
#define MMONIT 411
#define INSTANCE 412
#define USERNAME 413
#define PASSWORD 414
#define TIMESTAMP 415
#define CHANGED 416
#define SECOND 417
#define MINUTE 418
#define HOUR 419
#define DAY 420
#define SSLAUTO 421
#define SSLV2 422
#define SSLV3 423
#define TLSV1 424
#define TLSV11 425
#define TLSV12 426
#define CERTMD5 427
#define BYTE 428
#define KILOBYTE 429
#define MEGABYTE 430
#define GIGABYTE 431
#define INODE 432
#define SPACE 433
#define PERMISSION 434
#define SIZE 435
#define MATCH 436
#define NOT 437
#define IGNORE 438
#define ACTION 439
#define UPTIME 440
#define EXEC 441
#define UNMONITOR 442
#define PING 443
#define ICMP 444
#define ICMPECHO 445
#define NONEXIST 446
#define EXIST 447
#define INVALID 448
#define DATA 449
#define RECOVERED 450
#define PASSED 451
#define SUCCEEDED 452
#define URL 453
#define CONTENT 454
#define PID 455
#define PPID 456
#define FSFLAG 457
#define REGISTER 458
#define CREDENTIALS 459
#define URLOBJECT 460
#define TARGET 461
#define TIMESPEC 462
#define HTTPHEADER 463
#define MAXFORWARD 464
#define FIPS 465
#define GREATER 466
#define LESS 467
#define EQUAL 468
#define NOTEQUAL 469

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 260 "src/p.y" /* yacc.c:1909  */

  URL_T url;
  float real;
  int   number;
  char *string;

#line 489 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
