
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_ServerRef__
#define __java_rmi_server_ServerRef__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace rmi
    {
        class Remote;
      namespace server
      {
          class Operation;
          class RemoteCall;
          class RemoteObject;
          class RemoteRef;
          class RemoteStub;
          class ServerRef;
      }
    }
  }
}

class java::rmi::server::ServerRef : public ::java::lang::Object
{

public:
  virtual ::java::rmi::server::RemoteStub * exportObject(::java::rmi::Remote *, ::java::lang::Object *) = 0;
  virtual ::java::lang::String * getClientHost() = 0;
  virtual void invoke(::java::rmi::server::RemoteCall *) = 0;
  virtual ::java::lang::Object * invoke(::java::rmi::Remote *, ::java::lang::reflect::Method *, JArray< ::java::lang::Object * > *, jlong) = 0;
  virtual ::java::rmi::server::RemoteCall * newCall(::java::rmi::server::RemoteObject *, JArray< ::java::rmi::server::Operation * > *, jint, jlong) = 0;
  virtual void done(::java::rmi::server::RemoteCall *) = 0;
  virtual jboolean remoteEquals(::java::rmi::server::RemoteRef *) = 0;
  virtual jint remoteHashCode() = 0;
  virtual ::java::lang::String * getRefClass(::java::io::ObjectOutput *) = 0;
  virtual ::java::lang::String * remoteToString() = 0;
  virtual void readExternal(::java::io::ObjectInput *) = 0;
  virtual void writeExternal(::java::io::ObjectOutput *) = 0;
  static const jlong serialVersionUID = -4557750989390278438LL;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_rmi_server_ServerRef__
