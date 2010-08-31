/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_SERVER_H__
#define __EXT_SERVER_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_dangling_server_proxy_old_request();
bool f_dangling_server_proxy_new_request(CStrRef host);
bool f_pagelet_server_is_enabled();
Object f_pagelet_server_task_start(CStrRef url, CArrRef headers = null_array, CStrRef post_data = null_string);
bool f_pagelet_server_task_status(CObjRef task);
String f_pagelet_server_task_result(CObjRef task, Variant headers, Variant code);
bool f_xbox_send_message(CStrRef msg, Variant ret, int64 timeout_ms, CStrRef host = "localhost");
bool f_xbox_post_message(CStrRef msg, CStrRef host = "localhost");
Object f_xbox_task_start(CStrRef message);
bool f_xbox_task_status(CObjRef task);
int64 f_xbox_task_result(CObjRef task, int64 timeout_ms, Variant ret);
int f_xbox_get_thread_timeout();
void f_xbox_set_thread_timeout(int timeout);
void f_xbox_schedule_thread_reset();
int f_xbox_get_thread_time();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_SERVER_H__
