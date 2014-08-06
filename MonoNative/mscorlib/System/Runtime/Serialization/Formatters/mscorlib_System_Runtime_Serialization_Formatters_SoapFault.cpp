#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_SoapFault.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
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
					void SoapFault::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(info).name());
							__parameter_types__[1] = Global::GetType(typeid(context).name());
							__parameters__[0] = (MonoObject*)info;
							__parameters__[1] = (MonoObject*)context;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get/Set:Detail
					mscorlib::System::Object  SoapFault::get_Detail() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "get_Detail", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}

					void SoapFault::set_Detail(mscorlib::System::Object  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "set_Detail", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:FaultActor
					mscorlib::System::String  SoapFault::get_FaultActor() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "get_FaultActor", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapFault::set_FaultActor(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "set_FaultActor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:FaultCode
					mscorlib::System::String  SoapFault::get_FaultCode() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "get_FaultCode", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapFault::set_FaultCode(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "set_FaultCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:FaultString
					mscorlib::System::String  SoapFault::get_FaultString() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "get_FaultString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapFault::set_FaultString(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapFault", 0, NULL, "set_FaultString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
