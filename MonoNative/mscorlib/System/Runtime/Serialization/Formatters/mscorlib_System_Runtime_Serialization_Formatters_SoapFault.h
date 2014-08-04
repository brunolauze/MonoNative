#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SOAPFAULT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_SOAPFAULT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_ServerFault.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>

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

		class Type;
		

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
				namespace Formatters
				{

					class SoapFault
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					{
					public:
						SoapFault()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.SoapFault"))
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault");
						};
					
						SoapFault(mscorlib::System::String faultCode, mscorlib::System::String faultString, mscorlib::System::String faultActor, mscorlib::System::Runtime::Serialization::Formatters::ServerFault serverFault)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Serialization.Formatters.SoapFault"))
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[3] = Global::GetType("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault");
							__parameters__[0] = (MonoObject*)faultCode;
							__parameters__[1] = (MonoObject*)faultString;
							__parameters__[2] = (MonoObject*)faultActor;
							__parameters__[3] = (MonoObject*)serverFault;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 4, __parameter_types__, __parameters__);
						};
					
						SoapFault(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
						{
						};
					
						SoapFault(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
						{
						};
					
						~SoapFault()
						{
						};
					

						SoapFault & operator=(SoapFault &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Detail, put=set_Detail)) mscorlib::System::Object  Detail;
						__declspec(property(get=get_FaultActor, put=set_FaultActor)) mscorlib::System::String  FaultActor;
						__declspec(property(get=get_FaultCode, put=set_FaultCode)) mscorlib::System::String  FaultCode;
						__declspec(property(get=get_FaultString, put=set_FaultString)) mscorlib::System::String  FaultString;

						//Get Set Properties Methods
						//	Get/Set:Detail
						mscorlib::System::Object  get_Detail();
						void set_Detail(mscorlib::System::Object  value);

						//	Get/Set:FaultActor
						mscorlib::System::String  get_FaultActor();
						void set_FaultActor(mscorlib::System::String  value);

						//	Get/Set:FaultCode
						mscorlib::System::String  get_FaultCode();
						void set_FaultCode(mscorlib::System::String  value);

						//	Get/Set:FaultString
						mscorlib::System::String  get_FaultString();
						void set_FaultString(mscorlib::System::String  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
