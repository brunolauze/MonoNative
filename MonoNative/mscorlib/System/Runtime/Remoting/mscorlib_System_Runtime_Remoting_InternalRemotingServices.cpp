#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_InternalRemotingServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				void InternalRemotingServices::DebugOutChnl(mscorlib::System::String s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), s);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "DebugOutChnl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void InternalRemotingServices::DebugOutChnl(const char *s)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(s).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), s);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "DebugOutChnl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute InternalRemotingServices::GetCachedSoapAttribute(mscorlib::System::Object reflectionObject)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(reflectionObject).name());
						__parameters__[0] = (MonoObject*)reflectionObject;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "GetCachedSoapAttribute", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(__result__);
				}

				void InternalRemotingServices::RemotingAssert(mscorlib::System::Boolean condition, mscorlib::System::String message)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(message).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), message);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "RemotingAssert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void InternalRemotingServices::RemotingAssert(mscorlib::System::Boolean condition, const char *message)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(message).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), message);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "RemotingAssert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void InternalRemotingServices::RemotingTrace(std::vector<mscorlib::System::Object*> messages)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(messages).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(messages, typeid(mscorlib::System::Object).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "RemotingTrace", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void InternalRemotingServices::SetServerIdentity(mscorlib::System::Runtime::Remoting::Messaging::MethodCall m, mscorlib::System::Object srvID)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(m).name());
						__parameter_types__[1] = Global::GetType(typeid(srvID).name());
						__parameters__[0] = (MonoObject*)m;
						__parameters__[1] = (MonoObject*)srvID;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "InternalRemotingServices", 0, NULL, "SetServerIdentity", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
