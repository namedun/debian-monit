/*
 * Copyright (C) Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 *
 * You must obey the GNU Affero General Public License in all respects
 * for all of the code used other than OpenSSL.  
 */


#ifndef CERVLET_H
#define CERVLET_H

#include "config.h"

#include "monit.h"

#define HEAD_HTML \
"<!DOCTYPE html>"\
"<html>"\
"<head>"\
"<title>Monit: %s</title> "\
"<style type=\"text/css\"> "\
" html, body {height: 100%%;margin: 0;} "\
" body {background-color: white;font: normal normal normal 14px/18px 'HelveticaNeue', Helvetica, Arial, sans-serif; color:#222;} "\
" h1 {padding:30px 0 10px 0; text-align:center;color:#222;font-size:28px;} "\
" h2 {padding:20px 0 10px 0; text-align:center;color:#555;font-size:22px;} "\
" a:hover {text-decoration: none;} "\
" a {text-decoration: underline;color:#222} "\
" table {border-collapse:collapse; border:0;} "\
" .stripe {background:#EDF5FF} "\
" .red-text {color:#ff0000;} "\
" .green-text {color:#00ff00;} "\
" .gray-text {color:#999999;} "\
" .blue-text {color:#0000ff;} "\
" .orange-text {color:#ff8800;} "\
" #wrap {min-height: 100%%;} "\
" #main {overflow:auto; padding-bottom:50px;} "\
" /*Opera Fix*/body:before {content:\"\";height:100%%;float:left;width:0;margin-top:-32767px;/} "\
" #footer {position: relative;margin-top: -50px; height: 50px; clear:both; font-size:11px;color:#777;text-align:center;} "\
" #footer a {color:#333;} #footer a:hover {text-decoration: none;} "\
" #nav {background:#ddd;font:normal normal normal 14px/0px 'HelveticaNeue', Helvetica;} "\
" #nav td {padding:5px 10px;} "\
" #header {margin-bottom:30px;background:#EFF7FF} "\
" #nav, #header {border-bottom:1px solid #555;} "\
" #header-row {width:95%%;} "\
" #header-row th {padding:30px 10px 10px 10px;font-size:120%%;} "\
" #header-row td {padding:3px 10px;} "\
" #header-row .first {min-width:200px;width:200px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis;} "\
" #status-table {width:95%%;} "\
" #status-table th {text-align:left;background:#edf5ff;font-weight:normal;} "\
" #status-table th, #status-table td, #status-table tr {border:1px solid #999;padding:5px;} "\
" #buttons {font-size:20px; margin:40px 0 20px 0;} "\
" #buttons td {padding-right:50px;} "\
" #buttons input {font-size:18px;padding:5px;} "\
"</style>"\
"<meta HTTP-EQUIV='REFRESH' CONTENT=%d> "\
"<meta HTTP-EQUIV='Expires' Content=0> "\
"<meta HTTP-EQUIV='Pragma' CONTENT='no-cache'> "\
"</head>"\
"<body><div id='wrap'><div id='main'>" \
"<table id='nav' width='100%%'>"\
"  <tr>"\
"    <td width='20%%'><a href='.'>Home</a>&nbsp;&gt;&nbsp;<a href='%s'>%s</a></td>"\
"    <td width='60%%' style='text-align:center;'>Use <a href='http://mmonit.com/'>M/Monit</a> to manage all your Monit instances</td>"\
"    <td width='20%%'><p align='right'><a href='_about'>Monit " VERSION "</a></td>"\
"  </tr>"\
"</table>"\
"<center>"


#define FOOT_HTML "</center></div></div>"\
"<div id='footer'>"\
"Copyright &copy; 2000-2011 <a href=\"http://tildeslash.com/\">Tildeslash</a>. All rights reserved. "\
"<span style='margin-left:5px;'></span>"\
"<a href=\"http://mmonit.com/monit/\">Monit web site</a> | "\
"<a href=\"http://mmonit.com/wiki/\">Monit Wiki</a> | "\
"<a href=\"http://mmonit.com/\">M/Monit</a>"\
"</div></body></html>"


#define HEAD(path, name, refresh) \
   StringBuffer_append(res->outputbuffer, HEAD_HTML, Run.localhostname, refresh, path, name);

#define FOOT  StringBuffer_append(res->outputbuffer, FOOT_HTML);


/* Public prototypes */
void init_service();

#endif
