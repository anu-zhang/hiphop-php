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

#ifndef __EXT_CLOSURE_H__
#define __EXT_CLOSURE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// class Closure

FORWARD_DECLARE_CLASS_BUILTIN(Closure);
class c_Closure : public ExtObjectData {
 public:
  BEGIN_CLASS_MAP(Closure)
  END_CLASS_MAP(Closure)
  DECLARE_CLASS(Closure, Closure, ObjectData)

  // need to implement
  public: c_Closure();
  public: ~c_Closure();
  public: void t___construct(int64 func, int64 extra, CArrRef vars);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___invoke(int _argc, CArrRef _argv = null_array);
  DECLARE_METHOD_INVOKE_HELPERS(__invoke);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_Closure *create(int64 func, int64 extra, Array vars);
  public: void dynConstruct(CArrRef Params);
  public: void getConstructor(MethodCallPackage &mcp);
public:
  virtual const CallInfo *t___invokeCallInfoHelper(void *&extra);
  void *extraData() const { return m_extraData; }
  Array m_vars;
private:
  const CallInfo *m_callInfo;
  void *m_extraData;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_CLOSURE_H__
