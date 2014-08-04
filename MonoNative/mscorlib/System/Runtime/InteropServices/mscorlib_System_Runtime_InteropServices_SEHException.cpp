#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SEHException.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean SEHException::CanResume()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SEHException", 0, NULL, "CanResume", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:ErrorCode
				mscorlib::System::Int32  SEHException::get_ErrorCode()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ExternalException", 0, NULL, "get_ErrorCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InnerException
				mscorlib::System::Exception  SEHException::get_InnerException()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_InnerException", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}


				//	Get/Set:HelpLink
				mscorlib::System::String  SEHException::get_HelpLink()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HelpLink", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SEHException::set_HelpLink(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HelpLink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:HResult
				mscorlib::System::Int32  SEHException::get_HResult()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HResult", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void SEHException::set_HResult(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Message
				mscorlib::System::String  SEHException::get_Message()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:Source
				mscorlib::System::String  SEHException::get_Source()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Source", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SEHException::set_Source(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_Source", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:StackTrace
				mscorlib::System::String  SEHException::get_StackTrace()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  SEHException::get_TargetSite()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_TargetSite", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
				}


				//	Get:Data
				mscorlib::System::Collections::IDictionary  SEHException::get_Data()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Data", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IDictionary(__result__);
				}



			}
		}
	}
}
