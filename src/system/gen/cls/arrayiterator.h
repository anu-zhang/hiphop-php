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

#ifndef __GENERATED_cls_arrayiterator_h__
#define __GENERATED_cls_arrayiterator_h__

#include <cls/arrayaccess.h>
#include <cls/seekableiterator.h>
#include <cls/countable.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 69 */
class c_arrayiterator : public ExtObjectData {
  BEGIN_CLASS_MAP(arrayiterator)
    PARENT_CLASS(arrayaccess)
    PARENT_CLASS(countable)
    PARENT_CLASS(iterator)
    PARENT_CLASS(seekableiterator)
    PARENT_CLASS(traversable)
  END_CLASS_MAP(arrayiterator)
  DECLARE_CLASS_COMMON(arrayiterator, ArrayIterator)
  DECLARE_INVOKE_EX(arrayiterator, ArrayIterator, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(const char *s, int64 hash);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_arrayiterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_arrayiterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_arrayiterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props) const;
  virtual void o_setArray(CArrRef props);
  bool o_exists(CStrRef s, int64 hash, CStrRef context = null_string) const
{ return ObjectData::o_exists(s, hash, context); }
    virtual bool o_exists(CStrRef prop, int64 phash, const char *context, int64 hash) const;
  bool o_existsPrivate(CStrRef s, int64 hash) const;
  Variant o_get(CStrRef s, int64 hash, bool error = true, CStrRef context = null_string)
{ return ObjectData::o_get(s, hash, error, context); }
    virtual Variant o_get(CStrRef prop, int64 phash, bool error, const char *context, int64 hash);
  Variant o_getPrivate(CStrRef s, int64 hash, bool error = true);
  Variant o_set(CStrRef s, int64 hash, CVarRef v, bool forInit = false, CStrRef context = null_string)
{ return ObjectData::o_set(s, hash, v, forInit, context); }
    virtual Variant o_set(CStrRef prop, int64 phash, CVarRef v, bool forInit, const char *context, int64 hash);
  Variant o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit);
  Variant &o_lval(CStrRef s, int64 hash, CStrRef context = null_string)
{ return ObjectData::o_lval(s, hash, context); }
    virtual Variant &o_lval(CStrRef prop, int64 phash, const char *context, int64 hash);
  Variant &o_lvalPrivate(CStrRef s, int64 hash);

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_arrayiterator 1
  #define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_arrayiterator 1
  #define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_arrayiterator 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_arrayiterator 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_arrayiterator 1
  virtual Variant o_invoke(const char *s, CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_arr;
  public: Variant m_flags;
  public: void t___construct(Variant v_array, Variant v_flags = 0LL /* SORT_REGULAR */);
  public: c_arrayiterator *create(Variant v_array, Variant v_flags = 0LL /* SORT_REGULAR */);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: void t_append(CVarRef v_value);
  public: bool t_asort();
  public: int t_count();
  public: Variant t_current();
  public: Variant t_getarraycopy();
  public: Variant t_getflags();
  public: Variant t_key();
  public: bool t_ksort();
  public: Variant t_natcasesort();
  public: Variant t_natsort();
  public: Variant t_next();
  public: bool t_offsetexists(CVarRef v_index);
  public: Variant t_offsetget(Variant v_index);
  public: virtual Variant &___offsetget_lval(Variant v_index);
  public: Variant t_offsetset(CVarRef v_index, CVarRef v_newval);
  public: Variant t_offsetunset(CVarRef v_index);
  public: Variant t_rewind();
  public: void t_seek(CVarRef v_position);
  public: void t_setflags(CVarRef v_flags);
  public: bool t_uasort(CVarRef v_cmp_function);
  public: bool t_uksort(Variant v_cmp_function);
  public: bool t_valid();
};
extern struct ObjectStaticCallbacks cw_arrayiterator;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_arrayiterator_h__
