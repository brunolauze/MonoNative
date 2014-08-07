#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class MarshalByRefObject;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Proxies
				{

					class RealProxy;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class RemotingServices
					: public mscorlib::System::Object
				{
				public:
					RemotingServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					RemotingServices(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~RemotingServices()
					{
					};
				

					RemotingServices & operator=(RemotingServices &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RemotingServices &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Boolean  IsTransparentProxy(mscorlib::System::Object proxy);
					static mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage  ExecuteMessage(mscorlib::System::MarshalByRefObject target, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage reqMsg);
					static mscorlib::System::Object  Connect(mscorlib::System::Type classToProxy, mscorlib::System::String url);
					static mscorlib::System::Object  Connect(mscorlib::System::Type classToProxy, const char *url);
					static mscorlib::System::Object  Connect(mscorlib::System::Type classToProxy, mscorlib::System::String url, mscorlib::System::Object data);
					static mscorlib::System::Object  Connect(mscorlib::System::Type classToProxy, const char *url, mscorlib::System::Object data);
					static mscorlib::System::Boolean  Disconnect(mscorlib::System::MarshalByRefObject obj);
					static mscorlib::System::Type  GetServerTypeForUri(mscorlib::System::String URI);
					static mscorlib::System::Type  GetServerTypeForUri(const char *URI);
					static mscorlib::System::String  GetObjectUri(mscorlib::System::MarshalByRefObject obj);
					static mscorlib::System::Object  Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef objectRef);
					static mscorlib::System::Object  Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef objectRef, mscorlib::System::Boolean fRefine);
					static mscorlib::System::Runtime::Remoting::ObjRef  Marshal(mscorlib::System::MarshalByRefObject Obj);
					static mscorlib::System::Runtime::Remoting::ObjRef  Marshal(mscorlib::System::MarshalByRefObject Obj, mscorlib::System::String URI);
					static mscorlib::System::Runtime::Remoting::ObjRef  Marshal(mscorlib::System::MarshalByRefObject Obj, const char *URI);
					static mscorlib::System::Runtime::Remoting::ObjRef  Marshal(mscorlib::System::MarshalByRefObject Obj, mscorlib::System::String ObjURI, mscorlib::System::Type RequestedType);
					static mscorlib::System::Runtime::Remoting::ObjRef  Marshal(mscorlib::System::MarshalByRefObject Obj, const char *ObjURI, mscorlib::System::Type RequestedType);
					static mscorlib::System::Runtime::Remoting::Proxies::RealProxy  GetRealProxy(mscorlib::System::Object proxy);
					static mscorlib::System::Reflection::MethodBase  GetMethodBaseFromMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg);
					static void  GetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					static mscorlib::System::Runtime::Remoting::ObjRef  GetObjRefForProxy(mscorlib::System::MarshalByRefObject obj);
					static mscorlib::System::Object  GetLifetimeService(mscorlib::System::MarshalByRefObject obj);
					static mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetEnvoyChainForProxy(mscorlib::System::MarshalByRefObject obj);
					static void  LogRemotingStage(mscorlib::System::Int32 stage);
					static mscorlib::System::String  GetSessionIdForMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg);
					static mscorlib::System::Boolean  IsMethodOverloaded(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg);
					static mscorlib::System::Boolean  IsObjectOutOfAppDomain(mscorlib::System::Object tp);
					static mscorlib::System::Boolean  IsObjectOutOfContext(mscorlib::System::Object tp);
					static mscorlib::System::Boolean  IsOneWay(mscorlib::System::Reflection::MethodBase method);
					static void  SetObjectUriForMarshal(mscorlib::System::MarshalByRefObject obj, mscorlib::System::String uri);
					static void  SetObjectUriForMarshal(mscorlib::System::MarshalByRefObject obj, const char *uri);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
