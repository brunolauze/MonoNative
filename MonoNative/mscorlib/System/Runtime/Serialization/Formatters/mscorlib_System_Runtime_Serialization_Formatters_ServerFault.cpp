#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_ServerFault.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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

					//Public Methods
					//Get Set Properties Methods
					//	Get/Set:ExceptionType
					mscorlib::System::String  ServerFault::get_ExceptionType()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "get_ExceptionType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void ServerFault::set_ExceptionType(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "set_ExceptionType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ExceptionMessage
					mscorlib::System::String  ServerFault::get_ExceptionMessage()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "get_ExceptionMessage", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void ServerFault::set_ExceptionMessage(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "set_ExceptionMessage", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:StackTrace
					mscorlib::System::String  ServerFault::get_StackTrace()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void ServerFault::set_StackTrace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "ServerFault", 0, NULL, "set_StackTrace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
