/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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

#ifndef __GENERATED_cls_RecursiveIteratorIterator_habb8beb5__
#define __GENERATED_cls_RecursiveIteratorIterator_habb8beb5__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/OuterIterator.h>
#include <cls/Traversable.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const VarNR &s_sys_svif01bca90;

/* SRC: classes/iterator.php line 228 */
FORWARD_DECLARE_CLASS(RecursiveIteratorIterator);
extern const ObjectStaticCallbacks cw_RecursiveIteratorIterator;
class c_RecursiveIteratorIterator : public ExtObjectData {
  public:

  // Properties
  Variant m_rsrc;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(RecursiveIteratorIterator, RecursiveIteratorIterator, ObjectData)
  static const ClassPropTable os_prop_table;
  c_RecursiveIteratorIterator() : m_rsrc(Variant::nullInit) {}
  public: void t___construct(Variant v_iterator, Variant v_mode = 0LL /* RecursiveIteratorIterator::LEAVES_ONLY */, Variant v_flags = 0LL);
  public: c_RecursiveIteratorIterator *create(CVarRef v_iterator, CVarRef v_mode = NAMVAR(s_sys_svif01bca90, 0LL) /* RecursiveIteratorIterator::LEAVES_ONLY */, CVarRef v_flags = NAMVAR(s_sys_svif01bca90, 0LL));
  public: Object t_getinneriterator();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: void t_rewind();
  public: bool t_valid();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
};
ObjectData *coo_RecursiveIteratorIterator() NEVER_INLINE;
extern const int64 q_RecursiveIteratorIterator$$LEAVES_ONLY;
extern const int64 q_RecursiveIteratorIterator$$SELF_FIRST;
extern const int64 q_RecursiveIteratorIterator$$CHILD_FIRST;
extern const int64 q_RecursiveIteratorIterator$$CATCH_GET_CHILD;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_RecursiveIteratorIterator_habb8beb5__
