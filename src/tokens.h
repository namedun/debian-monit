
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
     SSH = 329,
     DWP = 330,
     LDAP2 = 331,
     LDAP3 = 332,
     RDATE = 333,
     RSYNC = 334,
     TNS = 335,
     PGSQL = 336,
     POSTFIXPOLICY = 337,
     SIP = 338,
     LMTP = 339,
     GPS = 340,
     RADIUS = 341,
     MEMCACHE = 342,
     STRING = 343,
     PATH = 344,
     MAILADDR = 345,
     MAILFROM = 346,
     MAILREPLYTO = 347,
     MAILSUBJECT = 348,
     MAILBODY = 349,
     SERVICENAME = 350,
     STRINGNAME = 351,
     NUMBER = 352,
     PERCENT = 353,
     LOGLIMIT = 354,
     CLOSELIMIT = 355,
     DNSLIMIT = 356,
     KEEPALIVELIMIT = 357,
     REPLYLIMIT = 358,
     REQUESTLIMIT = 359,
     STARTLIMIT = 360,
     WAITLIMIT = 361,
     GRACEFULLIMIT = 362,
     CLEANUPLIMIT = 363,
     REAL = 364,
     CHECKPROC = 365,
     CHECKFILESYS = 366,
     CHECKFILE = 367,
     CHECKDIR = 368,
     CHECKHOST = 369,
     CHECKSYSTEM = 370,
     CHECKFIFO = 371,
     CHECKPROGRAM = 372,
     CHILDREN = 373,
     SYSTEM = 374,
     STATUS = 375,
     RESOURCE = 376,
     MEMORY = 377,
     TOTALMEMORY = 378,
     LOADAVG1 = 379,
     LOADAVG5 = 380,
     LOADAVG15 = 381,
     SWAP = 382,
     MODE = 383,
     ACTIVE = 384,
     PASSIVE = 385,
     MANUAL = 386,
     CPU = 387,
     TOTALCPU = 388,
     CPUUSER = 389,
     CPUSYSTEM = 390,
     CPUWAIT = 391,
     GROUP = 392,
     REQUEST = 393,
     DEPENDS = 394,
     BASEDIR = 395,
     SLOT = 396,
     EVENTQUEUE = 397,
     SECRET = 398,
     HOSTHEADER = 399,
     UID = 400,
     GID = 401,
     MMONIT = 402,
     INSTANCE = 403,
     USERNAME = 404,
     PASSWORD = 405,
     TIMESTAMP = 406,
     CHANGED = 407,
     SECOND = 408,
     MINUTE = 409,
     HOUR = 410,
     DAY = 411,
     SSLAUTO = 412,
     SSLV2 = 413,
     SSLV3 = 414,
     TLSV1 = 415,
     CERTMD5 = 416,
     BYTE = 417,
     KILOBYTE = 418,
     MEGABYTE = 419,
     GIGABYTE = 420,
     INODE = 421,
     SPACE = 422,
     PERMISSION = 423,
     SIZE = 424,
     MATCH = 425,
     NOT = 426,
     IGNORE = 427,
     ACTION = 428,
     EXEC = 429,
     UNMONITOR = 430,
     ICMP = 431,
     ICMPECHO = 432,
     NONEXIST = 433,
     EXIST = 434,
     INVALID = 435,
     DATA = 436,
     RECOVERED = 437,
     PASSED = 438,
     SUCCEEDED = 439,
     URL = 440,
     CONTENT = 441,
     PID = 442,
     PPID = 443,
     FSFLAG = 444,
     REGISTER = 445,
     CREDENTIALS = 446,
     URLOBJECT = 447,
     TARGET = 448,
     TIMESPEC = 449,
     MAXFORWARD = 450,
     FIPS = 451,
     NOTEQUAL = 452,
     EQUAL = 453,
     LESS = 454,
     GREATER = 455
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
#define SSH 329
#define DWP 330
#define LDAP2 331
#define LDAP3 332
#define RDATE 333
#define RSYNC 334
#define TNS 335
#define PGSQL 336
#define POSTFIXPOLICY 337
#define SIP 338
#define LMTP 339
#define GPS 340
#define RADIUS 341
#define MEMCACHE 342
#define STRING 343
#define PATH 344
#define MAILADDR 345
#define MAILFROM 346
#define MAILREPLYTO 347
#define MAILSUBJECT 348
#define MAILBODY 349
#define SERVICENAME 350
#define STRINGNAME 351
#define NUMBER 352
#define PERCENT 353
#define LOGLIMIT 354
#define CLOSELIMIT 355
#define DNSLIMIT 356
#define KEEPALIVELIMIT 357
#define REPLYLIMIT 358
#define REQUESTLIMIT 359
#define STARTLIMIT 360
#define WAITLIMIT 361
#define GRACEFULLIMIT 362
#define CLEANUPLIMIT 363
#define REAL 364
#define CHECKPROC 365
#define CHECKFILESYS 366
#define CHECKFILE 367
#define CHECKDIR 368
#define CHECKHOST 369
#define CHECKSYSTEM 370
#define CHECKFIFO 371
#define CHECKPROGRAM 372
#define CHILDREN 373
#define SYSTEM 374
#define STATUS 375
#define RESOURCE 376
#define MEMORY 377
#define TOTALMEMORY 378
#define LOADAVG1 379
#define LOADAVG5 380
#define LOADAVG15 381
#define SWAP 382
#define MODE 383
#define ACTIVE 384
#define PASSIVE 385
#define MANUAL 386
#define CPU 387
#define TOTALCPU 388
#define CPUUSER 389
#define CPUSYSTEM 390
#define CPUWAIT 391
#define GROUP 392
#define REQUEST 393
#define DEPENDS 394
#define BASEDIR 395
#define SLOT 396
#define EVENTQUEUE 397
#define SECRET 398
#define HOSTHEADER 399
#define UID 400
#define GID 401
#define MMONIT 402
#define INSTANCE 403
#define USERNAME 404
#define PASSWORD 405
#define TIMESTAMP 406
#define CHANGED 407
#define SECOND 408
#define MINUTE 409
#define HOUR 410
#define DAY 411
#define SSLAUTO 412
#define SSLV2 413
#define SSLV3 414
#define TLSV1 415
#define CERTMD5 416
#define BYTE 417
#define KILOBYTE 418
#define MEGABYTE 419
#define GIGABYTE 420
#define INODE 421
#define SPACE 422
#define PERMISSION 423
#define SIZE 424
#define MATCH 425
#define NOT 426
#define IGNORE 427
#define ACTION 428
#define EXEC 429
#define UNMONITOR 430
#define ICMP 431
#define ICMPECHO 432
#define NONEXIST 433
#define EXIST 434
#define INVALID 435
#define DATA 436
#define RECOVERED 437
#define PASSED 438
#define SUCCEEDED 439
#define URL 440
#define CONTENT 441
#define PID 442
#define PPID 443
#define FSFLAG 444
#define REGISTER 445
#define CREDENTIALS 446
#define URLOBJECT 447
#define TARGET 448
#define TIMESPEC 449
#define MAXFORWARD 450
#define FIPS 451
#define NOTEQUAL 452
#define EQUAL 453
#define LESS 454
#define GREATER 455




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 257 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 1676 of yacc.c  */
#line 461 "src/y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


