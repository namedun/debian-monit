/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
     APACHESTATUS = 319,
     FTP = 320,
     SMTP = 321,
     POP = 322,
     IMAP = 323,
     CLAMAV = 324,
     NNTP = 325,
     NTP3 = 326,
     MYSQL = 327,
     DNS = 328,
     WEBSOCKET = 329,
     SSH = 330,
     DWP = 331,
     LDAP2 = 332,
     LDAP3 = 333,
     RDATE = 334,
     RSYNC = 335,
     TNS = 336,
     PGSQL = 337,
     POSTFIXPOLICY = 338,
     SIP = 339,
     LMTP = 340,
     GPS = 341,
     RADIUS = 342,
     MEMCACHE = 343,
     STRING = 344,
     PATH = 345,
     MAILADDR = 346,
     MAILFROM = 347,
     MAILREPLYTO = 348,
     MAILSUBJECT = 349,
     MAILBODY = 350,
     SERVICENAME = 351,
     STRINGNAME = 352,
     NUMBER = 353,
     PERCENT = 354,
     LOGLIMIT = 355,
     CLOSELIMIT = 356,
     DNSLIMIT = 357,
     KEEPALIVELIMIT = 358,
     REPLYLIMIT = 359,
     REQUESTLIMIT = 360,
     STARTLIMIT = 361,
     WAITLIMIT = 362,
     GRACEFULLIMIT = 363,
     CLEANUPLIMIT = 364,
     REAL = 365,
     CHECKPROC = 366,
     CHECKFILESYS = 367,
     CHECKFILE = 368,
     CHECKDIR = 369,
     CHECKHOST = 370,
     CHECKSYSTEM = 371,
     CHECKFIFO = 372,
     CHECKPROGRAM = 373,
     CHILDREN = 374,
     SYSTEM = 375,
     STATUS = 376,
     ORIGIN = 377,
     VERSIONOPT = 378,
     RESOURCE = 379,
     MEMORY = 380,
     TOTALMEMORY = 381,
     LOADAVG1 = 382,
     LOADAVG5 = 383,
     LOADAVG15 = 384,
     SWAP = 385,
     MODE = 386,
     ACTIVE = 387,
     PASSIVE = 388,
     MANUAL = 389,
     CPU = 390,
     TOTALCPU = 391,
     CPUUSER = 392,
     CPUSYSTEM = 393,
     CPUWAIT = 394,
     GROUP = 395,
     REQUEST = 396,
     DEPENDS = 397,
     BASEDIR = 398,
     SLOT = 399,
     EVENTQUEUE = 400,
     SECRET = 401,
     HOSTHEADER = 402,
     UID = 403,
     EUID = 404,
     GID = 405,
     MMONIT = 406,
     INSTANCE = 407,
     USERNAME = 408,
     PASSWORD = 409,
     TIMESTAMP = 410,
     CHANGED = 411,
     SECOND = 412,
     MINUTE = 413,
     HOUR = 414,
     DAY = 415,
     SSLAUTO = 416,
     SSLV2 = 417,
     SSLV3 = 418,
     TLSV1 = 419,
     TLSV11 = 420,
     TLSV12 = 421,
     CERTMD5 = 422,
     BYTE = 423,
     KILOBYTE = 424,
     MEGABYTE = 425,
     GIGABYTE = 426,
     INODE = 427,
     SPACE = 428,
     PERMISSION = 429,
     SIZE = 430,
     MATCH = 431,
     NOT = 432,
     IGNORE = 433,
     ACTION = 434,
     UPTIME = 435,
     EXEC = 436,
     UNMONITOR = 437,
     ICMP = 438,
     ICMPECHO = 439,
     NONEXIST = 440,
     EXIST = 441,
     INVALID = 442,
     DATA = 443,
     RECOVERED = 444,
     PASSED = 445,
     SUCCEEDED = 446,
     URL = 447,
     CONTENT = 448,
     PID = 449,
     PPID = 450,
     FSFLAG = 451,
     REGISTER = 452,
     CREDENTIALS = 453,
     URLOBJECT = 454,
     TARGET = 455,
     TIMESPEC = 456,
     MAXFORWARD = 457,
     FIPS = 458,
     NOTEQUAL = 459,
     EQUAL = 460,
     LESS = 461,
     GREATER = 462
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
#define APACHESTATUS 319
#define FTP 320
#define SMTP 321
#define POP 322
#define IMAP 323
#define CLAMAV 324
#define NNTP 325
#define NTP3 326
#define MYSQL 327
#define DNS 328
#define WEBSOCKET 329
#define SSH 330
#define DWP 331
#define LDAP2 332
#define LDAP3 333
#define RDATE 334
#define RSYNC 335
#define TNS 336
#define PGSQL 337
#define POSTFIXPOLICY 338
#define SIP 339
#define LMTP 340
#define GPS 341
#define RADIUS 342
#define MEMCACHE 343
#define STRING 344
#define PATH 345
#define MAILADDR 346
#define MAILFROM 347
#define MAILREPLYTO 348
#define MAILSUBJECT 349
#define MAILBODY 350
#define SERVICENAME 351
#define STRINGNAME 352
#define NUMBER 353
#define PERCENT 354
#define LOGLIMIT 355
#define CLOSELIMIT 356
#define DNSLIMIT 357
#define KEEPALIVELIMIT 358
#define REPLYLIMIT 359
#define REQUESTLIMIT 360
#define STARTLIMIT 361
#define WAITLIMIT 362
#define GRACEFULLIMIT 363
#define CLEANUPLIMIT 364
#define REAL 365
#define CHECKPROC 366
#define CHECKFILESYS 367
#define CHECKFILE 368
#define CHECKDIR 369
#define CHECKHOST 370
#define CHECKSYSTEM 371
#define CHECKFIFO 372
#define CHECKPROGRAM 373
#define CHILDREN 374
#define SYSTEM 375
#define STATUS 376
#define ORIGIN 377
#define VERSIONOPT 378
#define RESOURCE 379
#define MEMORY 380
#define TOTALMEMORY 381
#define LOADAVG1 382
#define LOADAVG5 383
#define LOADAVG15 384
#define SWAP 385
#define MODE 386
#define ACTIVE 387
#define PASSIVE 388
#define MANUAL 389
#define CPU 390
#define TOTALCPU 391
#define CPUUSER 392
#define CPUSYSTEM 393
#define CPUWAIT 394
#define GROUP 395
#define REQUEST 396
#define DEPENDS 397
#define BASEDIR 398
#define SLOT 399
#define EVENTQUEUE 400
#define SECRET 401
#define HOSTHEADER 402
#define UID 403
#define EUID 404
#define GID 405
#define MMONIT 406
#define INSTANCE 407
#define USERNAME 408
#define PASSWORD 409
#define TIMESTAMP 410
#define CHANGED 411
#define SECOND 412
#define MINUTE 413
#define HOUR 414
#define DAY 415
#define SSLAUTO 416
#define SSLV2 417
#define SSLV3 418
#define TLSV1 419
#define TLSV11 420
#define TLSV12 421
#define CERTMD5 422
#define BYTE 423
#define KILOBYTE 424
#define MEGABYTE 425
#define GIGABYTE 426
#define INODE 427
#define SPACE 428
#define PERMISSION 429
#define SIZE 430
#define MATCH 431
#define NOT 432
#define IGNORE 433
#define ACTION 434
#define UPTIME 435
#define EXEC 436
#define UNMONITOR 437
#define ICMP 438
#define ICMPECHO 439
#define NONEXIST 440
#define EXIST 441
#define INVALID 442
#define DATA 443
#define RECOVERED 444
#define PASSED 445
#define SUCCEEDED 446
#define URL 447
#define CONTENT 448
#define PID 449
#define PPID 450
#define FSFLAG 451
#define REGISTER 452
#define CREDENTIALS 453
#define URLOBJECT 454
#define TARGET 455
#define TIMESPEC 456
#define MAXFORWARD 457
#define FIPS 458
#define NOTEQUAL 459
#define EQUAL 460
#define LESS 461
#define GREATER 462




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 260 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 2068 of yacc.c  */
#line 473 "src/y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


