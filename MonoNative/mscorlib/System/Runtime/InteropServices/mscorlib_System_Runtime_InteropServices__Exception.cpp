#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Exception.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
				mscorlib::System::Boolean _Exception::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__Exception, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Exception _Exception::GetBaseException()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "GetBaseException", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
						return mscorlib::System::Exception(__result__);
				}

				mscorlib::System::Int32 _Exception::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void _Exception::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "GetObjectData", __mscorlib_System_Runtime_InteropServices__Exception, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type _Exception::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::String _Exception::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:HelpLink
				mscorlib::System::String  _Exception::get_HelpLink() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_HelpLink", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void _Exception::set_HelpLink(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "set_HelpLink", __mscorlib_System_Runtime_InteropServices__Exception, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:InnerException
				mscorlib::System::Exception  _Exception::get_InnerException() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_InnerException", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}


				//	Get:Message
				mscorlib::System::String  _Exception::get_Message() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_Message", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:Source
				mscorlib::System::String  _Exception::get_Source() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_Source", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void _Exception::set_Source(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "set_Source", __mscorlib_System_Runtime_InteropServices__Exception, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:StackTrace
				mscorlib::System::String  _Exception::get_StackTrace() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_StackTrace", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TargetSite
				mscorlib::System::Reflection::MethodBase  _Exception::get_TargetSite() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Exception", 0, NULL, "get_TargetSite", __mscorlib_System_Runtime_InteropServices__Exception, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
				}



			}
		}
	}
}
