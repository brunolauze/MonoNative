#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ReflectionTypeLoadException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			void ReflectionTypeLoadException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionTypeLoadException", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:Types
			std::vector<mscorlib::System::Type*>  ReflectionTypeLoadException::get_Types() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionTypeLoadException", 0, NULL, "get_Types", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
			}


			//	Get:LoaderExceptions
			std::vector<mscorlib::System::Exception*>  ReflectionTypeLoadException::get_LoaderExceptions() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionTypeLoadException", 0, NULL, "get_LoaderExceptions", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Exception*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Exception (__array_item__));
				}
				return __array_result__;
			}


			//	Get:InnerException
			mscorlib::System::Exception  ReflectionTypeLoadException::get_InnerException() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_InnerException", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Exception(__result__);
			}


			//	Get/Set:HelpLink
			mscorlib::System::String  ReflectionTypeLoadException::get_HelpLink() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HelpLink", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void ReflectionTypeLoadException::set_HelpLink(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HelpLink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:HResult
			mscorlib::System::Int32  ReflectionTypeLoadException::get_HResult() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HResult", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void ReflectionTypeLoadException::set_HResult(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Message
			mscorlib::System::String  ReflectionTypeLoadException::get_Message() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Source
			mscorlib::System::String  ReflectionTypeLoadException::get_Source() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Source", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void ReflectionTypeLoadException::set_Source(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_Source", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:StackTrace
			mscorlib::System::String  ReflectionTypeLoadException::get_StackTrace() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TargetSite
			mscorlib::System::Reflection::MethodBase  ReflectionTypeLoadException::get_TargetSite() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_TargetSite", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodBase(__result__);
			}


			//	Get:Data
			mscorlib::System::Collections::IDictionary  ReflectionTypeLoadException::get_Data() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Data", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IDictionary(__result__);
			}



		}
	}
}
