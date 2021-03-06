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

#ifndef __EXT_XCONFIG_H__
#define __EXT_XCONFIG_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>

namespace xconfig {
class XConfig;
class XConfigNode;
}
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int q_XConfig_TYPE_STRING;
extern const int q_XConfig_TYPE_BOOLEAN;
extern const int q_XConfig_TYPE_INTEGER;
extern const int q_XConfig_TYPE_FLOAT;
extern const int q_XConfig_TYPE_MAP;
extern const int q_XConfig_TYPE_SEQUENCE;
extern const StaticString q_XConfig_DEFAULT_SOCKET;

///////////////////////////////////////////////////////////////////////////////
// class XConfig

FORWARD_DECLARE_CLASS_BUILTIN(XConfig);
class c_XConfig : public ExtObjectData {
 public:
  DECLARE_CLASS(XConfig, XConfig, ObjectData)

  // need to implement
  public: c_XConfig(const ObjectStaticCallbacks *cb = &cw_XConfig);
  public: ~c_XConfig();
  public: void t___construct(CStrRef path, CStrRef socket = null, bool autoreload = true);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: void t_reload();
  DECLARE_METHOD_INVOKE_HELPERS(reload);
  public: void t_close();
  DECLARE_METHOD_INVOKE_HELPERS(close);
  public: Variant t_getvalue(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(getvalue);
  public: int t_gettype(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(gettype);
  public: Array t_getmtime(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(getmtime);
  public: bool t_isscalar(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(isscalar);
  public: bool t_ismap(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(ismap);
  public: bool t_issequence(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(issequence);
  public: int64 t_getcount(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(getcount);
  public: Array t_getmapkeys(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(getmapkeys);
  public: Object t_getnode(CVarRef key);
  DECLARE_METHOD_INVOKE_HELPERS(getnode);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XConfig *create(String path, String socket = null, bool autoreload = true);

private:
  boost::shared_ptr<xconfig::XConfig> xc;

  xconfig::XConfigNode getNodeFromVariant(CVarRef key);
  Variant getValue(const xconfig::XConfigNode& node);
};

///////////////////////////////////////////////////////////////////////////////
// class XConfigNode

FORWARD_DECLARE_CLASS_BUILTIN(XConfigNode);
class c_XConfigNode : public ExtObjectData {
 public:
  DECLARE_CLASS(XConfigNode, XConfigNode, ObjectData)

  // need to implement
  public: c_XConfigNode(const ObjectStaticCallbacks *cb = &cw_XConfigNode);
  public: ~c_XConfigNode();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);
  public: Object t_getparent();
  DECLARE_METHOD_INVOKE_HELPERS(getparent);
  public: Array t_getchildren();
  DECLARE_METHOD_INVOKE_HELPERS(getchildren);
  public: String t_getname();
  DECLARE_METHOD_INVOKE_HELPERS(getname);

  // implemented by HPHP
  public: c_XConfigNode *create();

  friend class c_XConfig;
private:
  boost::shared_ptr<xconfig::XConfig> xc;
  boost::scoped_ptr<xconfig::XConfigNode> node;

  void _init(boost::shared_ptr<xconfig::XConfig> xc, const xconfig::XConfigNode& n);
  const xconfig::XConfigNode& getNode() const;
  boost::shared_ptr<xconfig::XConfig> getXConfig() const;
};

///////////////////////////////////////////////////////////////////////////////
// class XConfigException

FORWARD_DECLARE_CLASS_BUILTIN(XConfigException);
class c_XConfigException : public c_Exception {
 public:
  DECLARE_CLASS(XConfigException, XConfigException, Exception)

  // need to implement
  public: c_XConfigException(const ObjectStaticCallbacks *cb = &cw_XConfigException);
  public: ~c_XConfigException();
  public: void t___construct(CStrRef message);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XConfigException *create(String message);

};

///////////////////////////////////////////////////////////////////////////////
// class XConfigNotFoundException

FORWARD_DECLARE_CLASS_BUILTIN(XConfigNotFoundException);
class c_XConfigNotFoundException : public c_XConfigException {
 public:
  DECLARE_CLASS(XConfigNotFoundException, XConfigNotFoundException, XConfigException)

  // need to implement
  public: c_XConfigNotFoundException(const ObjectStaticCallbacks *cb = &cw_XConfigNotFoundException);
  public: ~c_XConfigNotFoundException();
  public: void t___construct(CStrRef message);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XConfigNotFoundException *create(String message);

};

///////////////////////////////////////////////////////////////////////////////
// class XConfigNotConnectedException

FORWARD_DECLARE_CLASS_BUILTIN(XConfigNotConnectedException);
class c_XConfigNotConnectedException : public c_XConfigException {
 public:
  DECLARE_CLASS(XConfigNotConnectedException, XConfigNotConnectedException, XConfigException)

  // need to implement
  public: c_XConfigNotConnectedException(const ObjectStaticCallbacks *cb = &cw_XConfigNotConnectedException);
  public: ~c_XConfigNotConnectedException();
  public: void t___construct(CStrRef message);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XConfigNotConnectedException *create(String message);

};

///////////////////////////////////////////////////////////////////////////////
// class XConfigWrongTypeException

FORWARD_DECLARE_CLASS_BUILTIN(XConfigWrongTypeException);
class c_XConfigWrongTypeException : public c_XConfigException {
 public:
  DECLARE_CLASS(XConfigWrongTypeException, XConfigWrongTypeException, XConfigException)

  // need to implement
  public: c_XConfigWrongTypeException(const ObjectStaticCallbacks *cb = &cw_XConfigWrongTypeException);
  public: ~c_XConfigWrongTypeException();
  public: void t___construct(CStrRef message);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XConfigWrongTypeException *create(String message);

};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_XCONFIG_H__
