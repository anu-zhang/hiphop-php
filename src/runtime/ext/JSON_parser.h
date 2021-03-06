/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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
/* JSON_checker.h */

#include <runtime/base/complex_types.h>

enum error_codes {
  JSON_ERROR_NONE = 0,
  JSON_ERROR_DEPTH,
  JSON_ERROR_STATE_MISMATCH,
  JSON_ERROR_CTRL_CHAR,
  JSON_ERROR_SYNTAX,
  JSON_ERROR_UTF8,
  JSON_ERROR_RECURSION,
  JSON_ERROR_INF_OR_NAN,
  JSON_ERROR_UNSUPPORTED_TYPE
};

int JSON_parser(HPHP::Variant &z, const char *p, int length,
                 bool assoc/*<fb>*/, bool loose/*</fb>*/);
