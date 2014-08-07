#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Guid;
		class String;
		

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
				namespace Proxies
				{

					class RealProxy
						: public mscorlib::System::Object
					{
					public:
						RealProxy(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						RealProxy(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~RealProxy()
						{
						};
					

						RealProxy & operator=(RealProxy &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(RealProxy &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						mscorlib::System::Type  GetProxiedType();
						virtual mscorlib::System::Runtime::Remoting::ObjRef  CreateObjRef(mscorlib::System::Type requestedType);
						virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
						virtual mscorlib::System::IntPtr  GetCOMIUnknown(mscorlib::System::Boolean fIsMarshalled);
						virtual void  SetCOMIUnknown(mscorlib::System::IntPtr i);
						virtual mscorlib::System::IntPtr  SupportsInterface(mscorlib::System::Guid iid);
						static mscorlib::System::Object  GetStubData(mscorlib::System::Runtime::Remoting::Proxies::RealProxy rp);
						static void  SetStubData(mscorlib::System::Runtime::Remoting::Proxies::RealProxy rp, mscorlib::System::Object stubData);
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage  Invoke(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);
						virtual mscorlib::System::Object  GetTransparentProxy();
						mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage  InitializeServerObject(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
