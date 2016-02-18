
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CipherSuiteList__
#define __gnu_javax_net_ssl_provider_CipherSuiteList__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CipherSuite;
              class CipherSuiteList;
              class ProtocolVersion;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::javax::net::ssl::provider::CipherSuiteList : public ::java::lang::Object
{

public:
  CipherSuiteList(::java::nio::ByteBuffer *);
  CipherSuiteList(::java::nio::ByteBuffer *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  jint size();
  ::gnu::javax::net::ssl::provider::CipherSuite * get(jint);
  void put(jint, ::gnu::javax::net::ssl::provider::CipherSuite *);
  void setSize(jint);
  ::java::lang::String * toString();
  ::java::lang::String * toString(::java::lang::String *);
  jboolean equals(::java::lang::Object *);
  ::java::util::Iterator * iterator();
public: // actually package-private
  static jint access$0(::gnu::javax::net::ssl::provider::CipherSuiteList *);
private:
  ::java::nio::ByteBuffer * __attribute__((aligned(__alignof__( ::java::lang::Object)))) buffer;
  ::gnu::javax::net::ssl::provider::ProtocolVersion * version;
  jint modCount;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CipherSuiteList__