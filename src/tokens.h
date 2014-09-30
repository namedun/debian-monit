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
    CLAMAV = 326,
    NNTP = 327,
    NTP3 = 328,
    MYSQL = 329,
    DNS = 330,
    WEBSOCKET = 331,
    SSH = 332,
    DWP = 333,
    LDAP2 = 334,
    LDAP3 = 335,
    RDATE = 336,
    RSYNC = 337,
    TNS = 338,
    PGSQL = 339,
    POSTFIXPOLICY = 340,
    SIP = 341,
    LMTP = 342,
    GPS = 343,
    RADIUS = 344,
    MEMCACHE = 345,
    STRING = 346,
    PATH = 347,
    MAILADDR = 348,
    MAILFROM = 349,
    MAILREPLYTO = 350,
    MAILSUBJECT = 351,
    MAILBODY = 352,
    SERVICENAME = 353,
    STRINGNAME = 354,
    NUMBER = 355,
    PERCENT = 356,
    LOGLIMIT = 357,
    CLOSELIMIT = 358,
    DNSLIMIT = 359,
    KEEPALIVELIMIT = 360,
    REPLYLIMIT = 361,
    REQUESTLIMIT = 362,
    STARTLIMIT = 363,
    WAITLIMIT = 364,
    GRACEFULLIMIT = 365,
    CLEANUPLIMIT = 366,
    REAL = 367,
    CHECKPROC = 368,
    CHECKFILESYS = 369,
    CHECKFILE = 370,
    CHECKDIR = 371,
    CHECKHOST = 372,
    CHECKSYSTEM = 373,
    CHECKFIFO = 374,
    CHECKPROGRAM = 375,
    CHILDREN = 376,
    SYSTEM = 377,
    STATUS = 378,
    ORIGIN = 379,
    VERSIONOPT = 380,
    RESOURCE = 381,
    MEMORY = 382,
    TOTALMEMORY = 383,
    LOADAVG1 = 384,
    LOADAVG5 = 385,
    LOADAVG15 = 386,
    SWAP = 387,
    MODE = 388,
    ACTIVE = 389,
    PASSIVE = 390,
    MANUAL = 391,
    CPU = 392,
    TOTALCPU = 393,
    CPUUSER = 394,
    CPUSYSTEM = 395,
    CPUWAIT = 396,
    GROUP = 397,
    REQUEST = 398,
    DEPENDS = 399,
    BASEDIR = 400,
    SLOT = 401,
    EVENTQUEUE = 402,
    SECRET = 403,
    HOSTHEADER = 404,
    UID = 405,
    EUID = 406,
    GID = 407,
    MMONIT = 408,
    INSTANCE = 409,
    USERNAME = 410,
    PASSWORD = 411,
    TIMESTAMP = 412,
    CHANGED = 413,
    SECOND = 414,
    MINUTE = 415,
    HOUR = 416,
    DAY = 417,
    SSLAUTO = 418,
    SSLV2 = 419,
    SSLV3 = 420,
    TLSV1 = 421,
    TLSV11 = 422,
    TLSV12 = 423,
    CERTMD5 = 424,
    BYTE = 425,
    KILOBYTE = 426,
    MEGABYTE = 427,
    GIGABYTE = 428,
    INODE = 429,
    SPACE = 430,
    PERMISSION = 431,
    SIZE = 432,
    MATCH = 433,
    NOT = 434,
    IGNORE = 435,
    ACTION = 436,
    UPTIME = 437,
    EXEC = 438,
    UNMONITOR = 439,
    PING = 440,
    ICMP = 441,
    ICMPECHO = 442,
    NONEXIST = 443,
    EXIST = 444,
    INVALID = 445,
    DATA = 446,
    RECOVERED = 447,
    PASSED = 448,
    SUCCEEDED = 449,
    URL = 450,
    CONTENT = 451,
    PID = 452,
    PPID = 453,
    FSFLAG = 454,
    REGISTER = 455,
    CREDENTIALS = 456,
    URLOBJECT = 457,
    TARGET = 458,
    TIMESPEC = 459,
    HTTPHEADER = 460,
    MAXFORWARD = 461,
    FIPS = 462,
    GREATER = 463,
    LESS = 464,
    EQUAL = 465,
    NOTEQUAL = 466
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
#define CLAMAV 326
#define NNTP 327
#define NTP3 328
#define MYSQL 329
#define DNS 330
#define WEBSOCKET 331
#define SSH 332
#define DWP 333
#define LDAP2 334
#define LDAP3 335
#define RDATE 336
#define RSYNC 337
#define TNS 338
#define PGSQL 339
#define POSTFIXPOLICY 340
#define SIP 341
#define LMTP 342
#define GPS 343
#define RADIUS 344
#define MEMCACHE 345
#define STRING 346
#define PATH 347
#define MAILADDR 348
#define MAILFROM 349
#define MAILREPLYTO 350
#define MAILSUBJECT 351
#define MAILBODY 352
#define SERVICENAME 353
#define STRINGNAME 354
#define NUMBER 355
#define PERCENT 356
#define LOGLIMIT 357
#define CLOSELIMIT 358
#define DNSLIMIT 359
#define KEEPALIVELIMIT 360
#define REPLYLIMIT 361
#define REQUESTLIMIT 362
#define STARTLIMIT 363
#define WAITLIMIT 364
#define GRACEFULLIMIT 365
#define CLEANUPLIMIT 366
#define REAL 367
#define CHECKPROC 368
#define CHECKFILESYS 369
#define CHECKFILE 370
#define CHECKDIR 371
#define CHECKHOST 372
#define CHECKSYSTEM 373
#define CHECKFIFO 374
#define CHECKPROGRAM 375
#define CHILDREN 376
#define SYSTEM 377
#define STATUS 378
#define ORIGIN 379
#define VERSIONOPT 380
#define RESOURCE 381
#define MEMORY 382
#define TOTALMEMORY 383
#define LOADAVG1 384
#define LOADAVG5 385
#define LOADAVG15 386
#define SWAP 387
#define MODE 388
#define ACTIVE 389
#define PASSIVE 390
#define MANUAL 391
#define CPU 392
#define TOTALCPU 393
#define CPUUSER 394
#define CPUSYSTEM 395
#define CPUWAIT 396
#define GROUP 397
#define REQUEST 398
#define DEPENDS 399
#define BASEDIR 400
#define SLOT 401
#define EVENTQUEUE 402
#define SECRET 403
#define HOSTHEADER 404
#define UID 405
#define EUID 406
#define GID 407
#define MMONIT 408
#define INSTANCE 409
#define USERNAME 410
#define PASSWORD 411
#define TIMESTAMP 412
#define CHANGED 413
#define SECOND 414
#define MINUTE 415
#define HOUR 416
#define DAY 417
#define SSLAUTO 418
#define SSLV2 419
#define SSLV3 420
#define TLSV1 421
#define TLSV11 422
#define TLSV12 423
#define CERTMD5 424
#define BYTE 425
#define KILOBYTE 426
#define MEGABYTE 427
#define GIGABYTE 428
#define INODE 429
#define SPACE 430
#define PERMISSION 431
#define SIZE 432
#define MATCH 433
#define NOT 434
#define IGNORE 435
#define ACTION 436
#define UPTIME 437
#define EXEC 438
#define UNMONITOR 439
#define PING 440
#define ICMP 441
#define ICMPECHO 442
#define NONEXIST 443
#define EXIST 444
#define INVALID 445
#define DATA 446
#define RECOVERED 447
#define PASSED 448
#define SUCCEEDED 449
#define URL 450
#define CONTENT 451
#define PID 452
#define PPID 453
#define FSFLAG 454
#define REGISTER 455
#define CREDENTIALS 456
#define URLOBJECT 457
#define TARGET 458
#define TIMESPEC 459
#define HTTPHEADER 460
#define MAXFORWARD 461
#define FIPS 462
#define GREATER 463
#define LESS 464
#define EQUAL 465
#define NOTEQUAL 466

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

#line 483 "src/y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
