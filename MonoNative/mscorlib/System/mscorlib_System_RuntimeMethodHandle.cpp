#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void RuntimeMethodHandle::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::IntPtr RuntimeMethodHandle::GetFunctionPointer()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "GetFunctionPointer", __native_object__, 0, NULL, NULL, NULL);
				return mono_object_unbox (__result__);
		}

		mscorlib::System::Boolean RuntimeMethodHandle::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean RuntimeMethodHandle::Equals(mscorlib::System::RuntimeMethodHandle handle)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(handle).name());
				__parameters__[0] = (MonoObject*)handle;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 RuntimeMethodHandle::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Value
		mscorlib::System::IntPtr  RuntimeMethodHandle::get_Value() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "RuntimeMethodHandle", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
			return mono_object_unbox (__result__);
		}



	}
}
