/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     TYPE = 313,
     UDP = 314,
     TCP = 315,
     TCPSSL = 316,
     PROTOCOL = 317,
     CONNECTION = 318,
     ALERT = 319,
     NOALERT = 320,
     MAILFORMAT = 321,
     UNIXSOCKET = 322,
     SIGNATURE = 323,
     TIMEOUT = 324,
     RETRY = 325,
     RESTART = 326,
     CHECKSUM = 327,
     EVERY = 328,
     NOTEVERY = 329,
     DEFAULT = 330,
     HTTP = 331,
     HTTPS = 332,
     APACHESTATUS = 333,
     FTP = 334,
     SMTP = 335,
     SMTPS = 336,
     POP = 337,
     IMAP = 338,
     IMAPS = 339,
     CLAMAV = 340,
     NNTP = 341,
     NTP3 = 342,
     MYSQL = 343,
     DNS = 344,
     WEBSOCKET = 345,
     SSH = 346,
     DWP = 347,
     LDAP2 = 348,
     LDAP3 = 349,
     RDATE = 350,
     RSYNC = 351,
     TNS = 352,
     PGSQL = 353,
     POSTFIXPOLICY = 354,
     SIP = 355,
     LMTP = 356,
     GPS = 357,
     RADIUS = 358,
     MEMCACHE = 359,
     REDIS = 360,
     MONGODB = 361,
     SIEVE = 362,
     STRING = 363,
     PATH = 364,
     MAILADDR = 365,
     MAILFROM = 366,
     MAILREPLYTO = 367,
     MAILSUBJECT = 368,
     MAILBODY = 369,
     SERVICENAME = 370,
     STRINGNAME = 371,
     NUMBER = 372,
     PERCENT = 373,
     LOGLIMIT = 374,
     CLOSELIMIT = 375,
     DNSLIMIT = 376,
     KEEPALIVELIMIT = 377,
     REPLYLIMIT = 378,
     REQUESTLIMIT = 379,
     STARTLIMIT = 380,
     WAITLIMIT = 381,
     GRACEFULLIMIT = 382,
     CLEANUPLIMIT = 383,
     REAL = 384,
     CHECKPROC = 385,
     CHECKFILESYS = 386,
     CHECKFILE = 387,
     CHECKDIR = 388,
     CHECKHOST = 389,
     CHECKSYSTEM = 390,
     CHECKFIFO = 391,
     CHECKPROGRAM = 392,
     CHECKNET = 393,
     CHILDREN = 394,
     SYSTEM = 395,
     STATUS = 396,
     ORIGIN = 397,
     VERSIONOPT = 398,
     RESOURCE = 399,
     MEMORY = 400,
     TOTALMEMORY = 401,
     LOADAVG1 = 402,
     LOADAVG5 = 403,
     LOADAVG15 = 404,
     SWAP = 405,
     MODE = 406,
     ACTIVE = 407,
     PASSIVE = 408,
     MANUAL = 409,
     CPU = 410,
     TOTALCPU = 411,
     CPUUSER = 412,
     CPUSYSTEM = 413,
     CPUWAIT = 414,
     GROUP = 415,
     REQUEST = 416,
     DEPENDS = 417,
     BASEDIR = 418,
     SLOT = 419,
     EVENTQUEUE = 420,
     SECRET = 421,
     HOSTHEADER = 422,
     UID = 423,
     EUID = 424,
     GID = 425,
     MMONIT = 426,
     INSTANCE = 427,
     USERNAME = 428,
     PASSWORD = 429,
     TIMESTAMP = 430,
     CHANGED = 431,
     SECOND = 432,
     MINUTE = 433,
     HOUR = 434,
     DAY = 435,
     MONTH = 436,
     SSLAUTO = 437,
     SSLV2 = 438,
     SSLV3 = 439,
     TLSV1 = 440,
     TLSV11 = 441,
     TLSV12 = 442,
     CERTMD5 = 443,
     BYTE = 444,
     KILOBYTE = 445,
     MEGABYTE = 446,
     GIGABYTE = 447,
     INODE = 448,
     SPACE = 449,
     PERMISSION = 450,
     SIZE = 451,
     MATCH = 452,
     NOT = 453,
     IGNORE = 454,
     ACTION = 455,
     UPTIME = 456,
     EXEC = 457,
     UNMONITOR = 458,
     PING = 459,
     ICMP = 460,
     ICMPECHO = 461,
     NONEXIST = 462,
     EXIST = 463,
     INVALID = 464,
     DATA = 465,
     RECOVERED = 466,
     PASSED = 467,
     SUCCEEDED = 468,
     URL = 469,
     CONTENT = 470,
     PID = 471,
     PPID = 472,
     FSFLAG = 473,
     REGISTER = 474,
     CREDENTIALS = 475,
     URLOBJECT = 476,
     TARGET = 477,
     TIMESPEC = 478,
     HTTPHEADER = 479,
     MAXFORWARD = 480,
     FIPS = 481,
     NOTEQUAL = 482,
     EQUAL = 483,
     LESS = 484,
     GREATER = 485
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
#define TYPE 313
#define UDP 314
#define TCP 315
#define TCPSSL 316
#define PROTOCOL 317
#define CONNECTION 318
#define ALERT 319
#define NOALERT 320
#define MAILFORMAT 321
#define UNIXSOCKET 322
#define SIGNATURE 323
#define TIMEOUT 324
#define RETRY 325
#define RESTART 326
#define CHECKSUM 327
#define EVERY 328
#define NOTEVERY 329
#define DEFAULT 330
#define HTTP 331
#define HTTPS 332
#define APACHESTATUS 333
#define FTP 334
#define SMTP 335
#define SMTPS 336
#define POP 337
#define IMAP 338
#define IMAPS 339
#define CLAMAV 340
#define NNTP 341
#define NTP3 342
#define MYSQL 343
#define DNS 344
#define WEBSOCKET 345
#define SSH 346
#define DWP 347
#define LDAP2 348
#define LDAP3 349
#define RDATE 350
#define RSYNC 351
#define TNS 352
#define PGSQL 353
#define POSTFIXPOLICY 354
#define SIP 355
#define LMTP 356
#define GPS 357
#define RADIUS 358
#define MEMCACHE 359
#define REDIS 360
#define MONGODB 361
#define SIEVE 362
#define STRING 363
#define PATH 364
#define MAILADDR 365
#define MAILFROM 366
#define MAILREPLYTO 367
#define MAILSUBJECT 368
#define MAILBODY 369
#define SERVICENAME 370
#define STRINGNAME 371
#define NUMBER 372
#define PERCENT 373
#define LOGLIMIT 374
#define CLOSELIMIT 375
#define DNSLIMIT 376
#define KEEPALIVELIMIT 377
#define REPLYLIMIT 378
#define REQUESTLIMIT 379
#define STARTLIMIT 380
#define WAITLIMIT 381
#define GRACEFULLIMIT 382
#define CLEANUPLIMIT 383
#define REAL 384
#define CHECKPROC 385
#define CHECKFILESYS 386
#define CHECKFILE 387
#define CHECKDIR 388
#define CHECKHOST 389
#define CHECKSYSTEM 390
#define CHECKFIFO 391
#define CHECKPROGRAM 392
#define CHECKNET 393
#define CHILDREN 394
#define SYSTEM 395
#define STATUS 396
#define ORIGIN 397
#define VERSIONOPT 398
#define RESOURCE 399
#define MEMORY 400
#define TOTALMEMORY 401
#define LOADAVG1 402
#define LOADAVG5 403
#define LOADAVG15 404
#define SWAP 405
#define MODE 406
#define ACTIVE 407
#define PASSIVE 408
#define MANUAL 409
#define CPU 410
#define TOTALCPU 411
#define CPUUSER 412
#define CPUSYSTEM 413
#define CPUWAIT 414
#define GROUP 415
#define REQUEST 416
#define DEPENDS 417
#define BASEDIR 418
#define SLOT 419
#define EVENTQUEUE 420
#define SECRET 421
#define HOSTHEADER 422
#define UID 423
#define EUID 424
#define GID 425
#define MMONIT 426
#define INSTANCE 427
#define USERNAME 428
#define PASSWORD 429
#define TIMESTAMP 430
#define CHANGED 431
#define SECOND 432
#define MINUTE 433
#define HOUR 434
#define DAY 435
#define MONTH 436
#define SSLAUTO 437
#define SSLV2 438
#define SSLV3 439
#define TLSV1 440
#define TLSV11 441
#define TLSV12 442
#define CERTMD5 443
#define BYTE 444
#define KILOBYTE 445
#define MEGABYTE 446
#define GIGABYTE 447
#define INODE 448
#define SPACE 449
#define PERMISSION 450
#define SIZE 451
#define MATCH 452
#define NOT 453
#define IGNORE 454
#define ACTION 455
#define UPTIME 456
#define EXEC 457
#define UNMONITOR 458
#define PING 459
#define ICMP 460
#define ICMPECHO 461
#define NONEXIST 462
#define EXIST 463
#define INVALID 464
#define DATA 465
#define RECOVERED 466
#define PASSED 467
#define SUCCEEDED 468
#define URL 469
#define CONTENT 470
#define PID 471
#define PPID 472
#define FSFLAG 473
#define REGISTER 474
#define CREDENTIALS 475
#define URLOBJECT 476
#define TARGET 477
#define TIMESPEC 478
#define HTTPHEADER 479
#define MAXFORWARD 480
#define FIPS 481
#define NOTEQUAL 482
#define EQUAL 483
#define LESS 484
#define GREATER 485



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 278 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;


/* Line 2053 of yacc.c  */
#line 525 "src/y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
