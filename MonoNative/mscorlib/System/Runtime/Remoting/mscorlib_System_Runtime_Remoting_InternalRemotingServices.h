#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
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
				namespace Metadata
				{

					class SoapAttribute;
					

				}
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
				namespace Messaging
				{

					class MethodCall;
					

				}
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

				class InternalRemotingServices
					: public mscorlib::System::Object
				{
				public:
					InternalRemotingServices()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.InternalRemotingServices"))
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices");
					};
				
					InternalRemotingServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					InternalRemotingServices(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~InternalRemotingServices()
					{
					};
				

					InternalRemotingServices & operator=(InternalRemotingServices &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(InternalRemotingServices &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  DebugOutChnl(mscorlib::System::String s);
					static void  DebugOutChnl(const char *s);
					static mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute  GetCachedSoapAttribute(mscorlib::System::Object reflectionObject);
					static void  RemotingAssert(mscorlib::System::Boolean condition, mscorlib::System::String message);
					static void  RemotingAssert(mscorlib::System::Boolean condition, const char *message);
					static void  RemotingTrace(std::vector<mscorlib::System::Object*> messages);
					static void  SetServerIdentity(mscorlib::System::Runtime::Remoting::Messaging::MethodCall m, mscorlib::System::Object srvID);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
