#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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

					//Public Methods
					void LogicalCallContext::FreeNamedDataSlot(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "FreeNamedDataSlot", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object LogicalCallContext::GetData(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "GetData", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void LogicalCallContext::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(info).name());
							__parameter_types__[1] = Global::GetType(typeid(context).name());
							__parameters__[0] = (MonoObject*)info;
							__parameters__[1] = (MonoObject*)context;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void LogicalCallContext::SetData(mscorlib::System::String name, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)name;
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "SetData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object LogicalCallContext::Clone()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Object(__result__);
					}

					//Get Set Properties Methods
					//	Get:HasInfo
					mscorlib::System::Boolean  LogicalCallContext::get_HasInfo() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "LogicalCallContext", 0, NULL, "get_HasInfo", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}



				}
			}
		}
	}
}
