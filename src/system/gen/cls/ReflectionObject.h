/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionObject_h70107daa__
#define __GENERATED_cls_ReflectionObject_h70107daa__

#include <cls/ReflectionClass.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1270 */
class c_ReflectionObject : public c_ReflectionClass {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(ReflectionObject, ReflectionObject)
  DECLARE_INVOKE_EX(ReflectionObject, ReflectionObject, ReflectionClass)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_ReflectionObject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionObject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionObject 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_ReflectionObject 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_ReflectionObject 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionObject 1
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionObject 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_ReflectionObject 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionObject 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: static Variant ti_export(CStrRef cls, Variant v_obj, CVarRef v_ret);
  public: static Variant t_export(CVarRef v_obj, CVarRef v_ret) { return ti_export(NAMSTR(s_sys_ss1254dd7a_1, "ReflectionObject"), v_obj, v_ret); }
  DECLARE_METHOD_INVOKE_HELPERS(export);
};
extern struct ObjectStaticCallbacks cw_ReflectionObject;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionObject_h70107daa__
