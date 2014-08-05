#include <mscorlib/System/mscorlib_System_MulticastDelegate.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void MulticastDelegate::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "MulticastDelegate", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Boolean MulticastDelegate::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MulticastDelegate", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 MulticastDelegate::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MulticastDelegate", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Delegate*> MulticastDelegate::GetInvocationList()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MulticastDelegate", 0, NULL, "GetInvocationList", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Delegate*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Delegate (__array_item__));
				}
				return __array_result__;
		}

		//Get Set Properties Methods
		//	Get:Method
		mscorlib::System::Reflection::MethodInfo  MulticastDelegate::get_Method() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "get_Method", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::MethodInfo(__result__);
		}


		//	Get:Target
		mscorlib::System::Object  MulticastDelegate::get_Target() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Delegate", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
