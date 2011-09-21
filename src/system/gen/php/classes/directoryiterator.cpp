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

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <php/classes/directoryiterator.h>
#include <php/classes/directoryiterator.fws.h>

// Dependencies
#include <php/classes/exception.h>
#include <php/classes/iterator.h>
#include <php/classes/splfile.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/directoryiterator.php line 122 */
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_SELF = 0LL;
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_FILEINFO = 16LL;
const int64 q_RecursiveDirectoryIterator$$CURRENT_AS_PATHNAME = 32LL;
const int64 q_RecursiveDirectoryIterator$$KEY_AS_PATHNAME = 0LL;
const int64 q_RecursiveDirectoryIterator$$KEY_AS_FILENAME = 256LL;
const int64 q_RecursiveDirectoryIterator$$NEW_CURRENT_AND_KEY = 272LL;
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(RecursiveDirectoryIterator)
const InstanceOfInfo c_RecursiveDirectoryIterator::s_instanceof_table[] = {
  {0x66679538C5E6F0A1LL,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x191964700AF036D3LL,0,"RecursiveIterator",(const ObjectStaticCallbacks*)2},
  {0x60C47E7FE145DC43LL,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x71089C29FE923FA7LL,1,"SplFileInfo",&cw_SplFileInfo},
  {0x464D3427431A6ED8LL,1,"RecursiveDirectoryIterator",&cw_RecursiveDirectoryIterator},
  {0x7754323897E8A15ELL,0,"DirectoryIterator",&cw_DirectoryIterator},
  {0x0636A5F84AF9D29ELL,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int c_RecursiveDirectoryIterator::s_instanceof_index[] = {
  15,
  -1,0,-1,1,-1,-1,-1,3,
  4,-1,-1,-1,-1,-1,5,-1,

};
CallInfo c_RecursiveDirectoryIterator::ci___tostring((void*)&c_RecursiveDirectoryIterator::i___tostring, (void*)&c_RecursiveDirectoryIterator::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_haschildren((void*)&c_RecursiveDirectoryIterator::i_haschildren, (void*)&c_RecursiveDirectoryIterator::ifa_haschildren, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_key((void*)&c_RecursiveDirectoryIterator::i_key, (void*)&c_RecursiveDirectoryIterator::ifa_key, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_valid((void*)&c_RecursiveDirectoryIterator::i_valid, (void*)&c_RecursiveDirectoryIterator::ifa_valid, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_current((void*)&c_RecursiveDirectoryIterator::i_current, (void*)&c_RecursiveDirectoryIterator::ifa_current, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_rewind((void*)&c_RecursiveDirectoryIterator::i_rewind, (void*)&c_RecursiveDirectoryIterator::ifa_rewind, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_seek((void*)&c_RecursiveDirectoryIterator::i_seek, (void*)&c_RecursiveDirectoryIterator::ifa_seek, 1, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_getsubpath((void*)&c_RecursiveDirectoryIterator::i_getsubpath, (void*)&c_RecursiveDirectoryIterator::ifa_getsubpath, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_getsubpathname((void*)&c_RecursiveDirectoryIterator::i_getsubpathname, (void*)&c_RecursiveDirectoryIterator::ifa_getsubpathname, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_getchildren((void*)&c_RecursiveDirectoryIterator::i_getchildren, (void*)&c_RecursiveDirectoryIterator::ifa_getchildren, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci_next((void*)&c_RecursiveDirectoryIterator::i_next, (void*)&c_RecursiveDirectoryIterator::ifa_next, 0, 4, 0x0000000000000000LL);
CallInfo c_RecursiveDirectoryIterator::ci___construct((void*)&c_RecursiveDirectoryIterator::i___construct, (void*)&c_RecursiveDirectoryIterator::ifa___construct, 2, 4, 0x0000000000000000LL);
Variant c_RecursiveDirectoryIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_RecursiveDirectoryIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_RecursiveDirectoryIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_RecursiveDirectoryIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_RecursiveDirectoryIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_RecursiveDirectoryIterator::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_RecursiveDirectoryIterator::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_RecursiveDirectoryIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_RecursiveDirectoryIterator::i_haschildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_haschildren);
}
Variant c_RecursiveDirectoryIterator::i_getchildren(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getchildren);
}
Variant c_RecursiveDirectoryIterator::i_getsubpath(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getsubpath);
}
Variant c_RecursiveDirectoryIterator::i_getsubpathname(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_getsubpathname);
}
Variant c_RecursiveDirectoryIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count < 1 || count > 2)) return throw_wrong_arguments("RecursiveDirectoryIterator::__construct", count, 1, 2, 2);
  CVarRef arg0(a0);
  if (count <= 1) return (self->t___construct(arg0), null);
  CVarRef arg1(a1);
  return (self->t___construct(arg0, arg1), null);
}
Variant c_RecursiveDirectoryIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::current", 0, 1);
  return (self->t_current());
}
Variant c_RecursiveDirectoryIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::key", 0, 1);
  return (self->t_key());
}
Variant c_RecursiveDirectoryIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_RecursiveDirectoryIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant c_RecursiveDirectoryIterator::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("RecursiveDirectoryIterator::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant c_RecursiveDirectoryIterator::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::__toString", 0, 1);
  return (self->t___tostring());
}
Variant c_RecursiveDirectoryIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant c_RecursiveDirectoryIterator::ifa_haschildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_haschildren, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::hasChildren", 0, 1);
  return (self->t_haschildren());
}
Variant c_RecursiveDirectoryIterator::ifa_getchildren(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getchildren, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getChildren", 0, 1);
  return (self->t_getchildren());
}
Variant c_RecursiveDirectoryIterator::ifa_getsubpath(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getsubpath, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getSubPath", 0, 1);
  return (self->t_getsubpath());
}
Variant c_RecursiveDirectoryIterator::ifa_getsubpathname(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_getsubpathname, coo_RecursiveDirectoryIterator);
  }
  c_RecursiveDirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_RecursiveDirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("RecursiveDirectoryIterator::getSubPathname", 0, 1);
  return (self->t_getsubpathname());
}
const MethodCallInfoTable c_RecursiveDirectoryIterator::s_call_info_table[] = {
  { 0x6413CB5154808C44LL, 1, 5, "valid", &c_RecursiveDirectoryIterator::ci_valid },
  { 0x7EF5445C77054C67LL, 1, 4, "seek", &c_RecursiveDirectoryIterator::ci_seek },
  { 0x430BA7B88ED3A809LL, 1, 14, "getSubPathname", &c_RecursiveDirectoryIterator::ci_getsubpathname },
  { 0x1670096FDE27AF6ALL, 1, 6, "rewind", &c_RecursiveDirectoryIterator::ci_rewind },
  { 0x732EC1BDA8EC520FLL, 1, 11, "getChildren", &c_RecursiveDirectoryIterator::ci_getchildren },
  { 0x56EDB60C824E8C51LL, 1, 3, "key", &c_RecursiveDirectoryIterator::ci_key },
  { 0x642C2D2994B34A13LL, 1, 10, "__toString", &c_RecursiveDirectoryIterator::ci___tostring },
  { 0x40044334DA397C15LL, 1, 11, "hasChildren", &c_RecursiveDirectoryIterator::ci_haschildren },
  { 0x3C6D50F3BB8102B8LL, 1, 4, "next", &c_RecursiveDirectoryIterator::ci_next },
  { 0x7CF26A0E76B5E27BLL, 1, 10, "getSubPath", &c_RecursiveDirectoryIterator::ci_getsubpath },
  { 0x5B3A4A72846B21DCLL, 1, 7, "current", &c_RecursiveDirectoryIterator::ci_current },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_RecursiveDirectoryIterator::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_RecursiveDirectoryIterator::s_call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,1,
  -1,2,3,-1,-1,-1,-1,4,
  -1,5,-1,6,-1,7,-1,-1,
  8,-1,-1,9,10,-1,-1,11,

};
c_RecursiveDirectoryIterator *c_RecursiveDirectoryIterator::create(CVarRef v_path, CVarRef v_flags //  = NAMVAR(s_sys_svi86af027e, 16LL) /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */
) {
  CountableHelper h(this);
  init();
  t___construct(v_path, v_flags);
  return this;
}
const ObjectStaticCallbacks cw_RecursiveDirectoryIterator = {
  (ObjectData*(*)(ObjectData*))coo_RecursiveDirectoryIterator,
  c_RecursiveDirectoryIterator::s_call_info_table,c_RecursiveDirectoryIterator::s_call_info_index,
  c_RecursiveDirectoryIterator::s_instanceof_table,c_RecursiveDirectoryIterator::s_instanceof_index,
  &c_RecursiveDirectoryIterator::s_class_name,
  &c_RecursiveDirectoryIterator::os_prop_table,&c_RecursiveDirectoryIterator::ci___construct,0,&cw_DirectoryIterator
};
/* SRC: classes/directoryiterator.php line 132 */
void c_RecursiveDirectoryIterator::t___construct(Variant v_path, Variant v_flags //  = 16LL /* RecursiveDirectoryIterator::CURRENT_AS_FILEINFO */
) {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::__construct);
  bool oldInCtor = gasInCtor(true);
  {
    bool tmp0;
    {
      bool tmp1((x_hphp_recursivedirectoryiterator___construct(GET_THIS_TYPED(RecursiveDirectoryIterator), toString(v_path), toInt64(v_flags))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          p_UnexpectedValueException tmp0 = coo_UnexpectedValueException();
          throw_exception(((c_UnexpectedValueException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ssf0ea8ac1, "RecursiveDirectoryIterator::__construct("), toString(v_path), NAMSTR(s_sys_ssfb6412d4, "): failed to open dir"))), tmp0));
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 140 */
Variant c_RecursiveDirectoryIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::current);
  return x_hphp_recursivedirectoryiterator_current(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 152 */
Variant c_RecursiveDirectoryIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::key);
  return x_hphp_recursivedirectoryiterator_key(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 164 */
void c_RecursiveDirectoryIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::next);
  x_hphp_recursivedirectoryiterator_next(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 176 */
void c_RecursiveDirectoryIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::rewind);
  x_hphp_recursivedirectoryiterator_rewind(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 180 */
void c_RecursiveDirectoryIterator::t_seek(CVarRef v_position) {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::seek);
  x_hphp_recursivedirectoryiterator_seek(GET_THIS_TYPED(RecursiveDirectoryIterator), toInt64(v_position));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 184 */
String c_RecursiveDirectoryIterator::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::__toString);
  return x_hphp_recursivedirectoryiterator___tostring(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 188 */
bool c_RecursiveDirectoryIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::valid);
  return x_hphp_recursivedirectoryiterator_valid(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 201 */
bool c_RecursiveDirectoryIterator::t_haschildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::hasChildren);
  return x_hphp_recursivedirectoryiterator_haschildren(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 214 */
Object c_RecursiveDirectoryIterator::t_getchildren() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getChildren);
  return x_hphp_recursivedirectoryiterator_getchildren(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 228 */
String c_RecursiveDirectoryIterator::t_getsubpath() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getSubPath);
  return x_hphp_recursivedirectoryiterator_getsubpath(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 242 */
String c_RecursiveDirectoryIterator::t_getsubpathname() {
  INSTANCE_METHOD_INJECTION_BUILTIN(RecursiveDirectoryIterator, RecursiveDirectoryIterator::getSubPathname);
  return x_hphp_recursivedirectoryiterator_getsubpathname(GET_THIS_TYPED(RecursiveDirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 11 */
IMPLEMENT_CLASS_NO_DEFAULT_SWEEP(DirectoryIterator)
const InstanceOfInfo c_DirectoryIterator::s_instanceof_table[] = {
  {0x66679538C5E6F0A1LL,1,"Traversable",(const ObjectStaticCallbacks*)2},
  {0x60C47E7FE145DC43LL,1,"SeekableIterator",(const ObjectStaticCallbacks*)2},
  {0x71089C29FE923FA7LL,1,"SplFileInfo",&cw_SplFileInfo},
  {0x7754323897E8A15ELL,0,"DirectoryIterator",&cw_DirectoryIterator},
  {0x0636A5F84AF9D29ELL,1,"Iterator",(const ObjectStaticCallbacks*)2},
};
const int c_DirectoryIterator::s_instanceof_index[] = {
  15,
  -1,0,-1,1,-1,-1,-1,2,
  -1,-1,-1,-1,-1,-1,3,-1,

};
CallInfo c_DirectoryIterator::ci___construct((void*)&c_DirectoryIterator::i___construct, (void*)&c_DirectoryIterator::ifa___construct, 1, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_rewind((void*)&c_DirectoryIterator::i_rewind, (void*)&c_DirectoryIterator::ifa_rewind, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_seek((void*)&c_DirectoryIterator::i_seek, (void*)&c_DirectoryIterator::ifa_seek, 1, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_next((void*)&c_DirectoryIterator::i_next, (void*)&c_DirectoryIterator::ifa_next, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci___tostring((void*)&c_DirectoryIterator::i___tostring, (void*)&c_DirectoryIterator::ifa___tostring, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_current((void*)&c_DirectoryIterator::i_current, (void*)&c_DirectoryIterator::ifa_current, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_valid((void*)&c_DirectoryIterator::i_valid, (void*)&c_DirectoryIterator::ifa_valid, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_isdot((void*)&c_DirectoryIterator::i_isdot, (void*)&c_DirectoryIterator::ifa_isdot, 0, 4, 0x0000000000000000LL);
CallInfo c_DirectoryIterator::ci_key((void*)&c_DirectoryIterator::i_key, (void*)&c_DirectoryIterator::ifa_key, 0, 4, 0x0000000000000000LL);
Variant c_DirectoryIterator::i___construct(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___construct);
}
Variant c_DirectoryIterator::i_current(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_current);
}
Variant c_DirectoryIterator::i_key(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_key);
}
Variant c_DirectoryIterator::i_next(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_next);
}
Variant c_DirectoryIterator::i_rewind(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_rewind);
}
Variant c_DirectoryIterator::i_seek(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_seek);
}
Variant c_DirectoryIterator::i___tostring(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa___tostring);
}
Variant c_DirectoryIterator::i_valid(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_valid);
}
Variant c_DirectoryIterator::i_isdot(MethodCallPackage &mcp, CArrRef params) {
  return invoke_meth_few_handler(mcp, params, &ifa_isdot);
}
Variant c_DirectoryIterator::ifa___construct(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___construct, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("DirectoryIterator::__construct", count, 1, 1, 2);
  CVarRef arg0(a0);
  return (self->t___construct(arg0), null);
}
Variant c_DirectoryIterator::ifa_current(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_current, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::current", 0, 1);
  return (self->t_current());
}
Variant c_DirectoryIterator::ifa_key(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_key, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::key", 0, 1);
  return (self->t_key());
}
Variant c_DirectoryIterator::ifa_next(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_next, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::next", 0, 1);
  return (self->t_next(), null);
}
Variant c_DirectoryIterator::ifa_rewind(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_rewind, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::rewind", 0, 1);
  return (self->t_rewind(), null);
}
Variant c_DirectoryIterator::ifa_seek(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_seek, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count != 1)) return throw_wrong_arguments("DirectoryIterator::seek", count, 1, 1, 1);
  CVarRef arg0(a0);
  return (self->t_seek(arg0), null);
}
Variant c_DirectoryIterator::ifa___tostring(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa___tostring, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::__toString", 0, 1);
  return (self->t___tostring());
}
Variant c_DirectoryIterator::ifa_valid(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_valid, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::valid", 0, 1);
  return (self->t_valid());
}
Variant c_DirectoryIterator::ifa_isdot(MethodCallPackage &mcp, int count, INVOKE_FEW_ARGS_IMPL_ARGS) {
  if (UNLIKELY(mcp.obj == 0)) {
    return ObjectData::ifa_dummy(mcp, count, INVOKE_FEW_ARGS_PASS_ARGS, ifa_isdot, coo_DirectoryIterator);
  }
  c_DirectoryIterator *self ATTRIBUTE_UNUSED (static_cast<c_DirectoryIterator*>(mcp.obj));
  if (UNLIKELY(count > 0)) return throw_toomany_arguments("DirectoryIterator::isDot", 0, 1);
  return (self->t_isdot());
}
const MethodCallInfoTable c_DirectoryIterator::s_call_info_table[] = {
  { 0x6413CB5154808C44LL, 1, 5, "valid", &c_DirectoryIterator::ci_valid },
  { 0x7EF5445C77054C67LL, 1, 4, "seek", &c_DirectoryIterator::ci_seek },
  { 0x1670096FDE27AF6ALL, 1, 6, "rewind", &c_DirectoryIterator::ci_rewind },
  { 0x56EDB60C824E8C51LL, 1, 3, "key", &c_DirectoryIterator::ci_key },
  { 0x642C2D2994B34A13LL, 1, 10, "__toString", &c_DirectoryIterator::ci___tostring },
  { 0x08D1EA51B78DA5F4LL, 1, 5, "isDot", &c_DirectoryIterator::ci_isdot },
  { 0x3C6D50F3BB8102B8LL, 1, 4, "next", &c_DirectoryIterator::ci_next },
  { 0x5B3A4A72846B21DCLL, 1, 7, "current", &c_DirectoryIterator::ci_current },
  { 0x0D31D0AC229C615FLL, 1, 11, "__construct", &c_DirectoryIterator::ci___construct },
  { 0, 1, 0, 0 }
};
const int c_DirectoryIterator::s_call_info_index[] = {
  31,
  -1,-1,-1,-1,0,-1,-1,1,
  -1,-1,2,-1,-1,-1,-1,-1,
  -1,3,-1,4,5,-1,-1,-1,
  6,-1,-1,-1,7,-1,-1,8,

};
c_DirectoryIterator *c_DirectoryIterator::create(CVarRef v_path) {
  CountableHelper h(this);
  init();
  t___construct(v_path);
  return this;
}
const ObjectStaticCallbacks cw_DirectoryIterator = {
  (ObjectData*(*)(ObjectData*))coo_DirectoryIterator,
  c_DirectoryIterator::s_call_info_table,c_DirectoryIterator::s_call_info_index,
  c_DirectoryIterator::s_instanceof_table,c_DirectoryIterator::s_instanceof_index,
  &c_DirectoryIterator::s_class_name,
  &c_SplFileInfo::os_prop_table,&c_DirectoryIterator::ci___construct,0,&cw_SplFileInfo
};
/* SRC: classes/directoryiterator.php line 14 */
void c_DirectoryIterator::t___construct(Variant v_path) {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::__construct);
  bool oldInCtor = gasInCtor(true);
  {
    bool tmp0;
    {
      bool tmp1((x_hphp_directoryiterator___construct(GET_THIS_TYPED(DirectoryIterator), toString(v_path))));
      tmp0 = (!(tmp1));
    }
    if (tmp0) {
      {
        {
          p_UnexpectedValueException tmp0 = coo_UnexpectedValueException();
          throw_exception(((c_UnexpectedValueException*)tmp0.get()->create(concat3(NAMSTR(s_sys_ssdd233bb0, "DirectoryIterator::__construct("), toString(v_path), NAMSTR(s_sys_ssfb6412d4, "): failed to open dir"))), tmp0));
        }
      }
    }
  }
  gasInCtor(oldInCtor);
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 29 */
Variant c_DirectoryIterator::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::current);
  return x_hphp_directoryiterator_current(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 41 */
Variant c_DirectoryIterator::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::key);
  return x_hphp_directoryiterator_key(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 53 */
void c_DirectoryIterator::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::next);
  x_hphp_directoryiterator_next(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 65 */
void c_DirectoryIterator::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::rewind);
  x_hphp_directoryiterator_rewind(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 79 */
void c_DirectoryIterator::t_seek(CVarRef v_position) {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::seek);
  x_hphp_directoryiterator_seek(GET_THIS_TYPED(DirectoryIterator), toInt64(v_position));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 83 */
String c_DirectoryIterator::t___tostring() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::__toString);
  return x_hphp_directoryiterator___tostring(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 96 */
bool c_DirectoryIterator::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::valid);
  return x_hphp_directoryiterator_valid(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
/* SRC: classes/directoryiterator.php line 109 */
bool c_DirectoryIterator::t_isdot() {
  INSTANCE_METHOD_INJECTION_BUILTIN(DirectoryIterator, DirectoryIterator::isDot);
  return x_hphp_directoryiterator_isdot(GET_THIS_TYPED(DirectoryIterator));
}
namespace hphp_impl_splitter {}
ObjectData *coo_RecursiveDirectoryIterator() {
  return NEWOBJ(c_RecursiveDirectoryIterator)();
}
ObjectData *coo_DirectoryIterator() {
  return NEWOBJ(c_DirectoryIterator)();
}

// Class tables
static const int64 cpt_static_inits[] = {
  (int64)&NAMVAR(s_sys_svi6af020b2, 256LL),
  (int64)&NAMVAR(s_sys_svif01bca90, 0LL),
  (int64)&NAMVAR(s_sys_svi71a5b5e7, 272LL),
  (int64)&NAMVAR(s_sys_svi86af027e, 16LL),
  (int64)&NAMVAR(s_sys_svif2a1fb10, 32LL),
};
static const ClassPropTableEntry cpt_table_entries[] = {
  {0x4A34A9DA11ED8F50LL,2,0,0,100,4,0,&NAMSTR(s_sys_ss11ed8f50, "KEY_AS_FILENAME") },
  {0x6AA4D24FB118FCF1LL,-1,1,0,100,4,0,&NAMSTR(s_sys_ssb118fcf1, "KEY_AS_PATHNAME") },
  {0x0F0DCA1A52157D84LL,0,2,0,100,4,0,&NAMSTR(s_sys_ss52157d84, "NEW_CURRENT_AND_KEY") },
  {0x29191B08277C8E85LL,1,1,0,100,4,0,&NAMSTR(s_sys_ss277c8e85, "CURRENT_AS_SELF") },
  {0x5C823ED8BD51E7F6LL,1,3,0,100,4,0,&NAMSTR(s_sys_ssbd51e7f6, "CURRENT_AS_FILEINFO") },
  {0x2D581F4C45121E5FLL,-4,4,0,100,4,0,&NAMSTR(s_sys_ss45121e5f, "CURRENT_AS_PATHNAME") },

};
static const int cpt_hash_entries[] = {
  // RecursiveDirectoryIterator hash
  5,-1,-1,-1,-1,-1,-1,-1,-1,4,3,2,-1,-1,1,0,
  // RecursiveDirectoryIterator lists
  -1,
  -1,
  -1,
};
const ClassPropTable c_RecursiveDirectoryIterator::os_prop_table = {
  -1,-1,-1,-1,15,3,1,0,
  cpt_hash_entries+16,&c_SplFileInfo::os_prop_table,cpt_table_entries+0,cpt_static_inits
};

///////////////////////////////////////////////////////////////////////////////
}
