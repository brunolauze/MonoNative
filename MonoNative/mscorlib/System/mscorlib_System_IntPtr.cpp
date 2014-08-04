#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean IntPtr::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 IntPtr::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 IntPtr::ToInt32()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "ToInt32", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 IntPtr::ToInt64()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "ToInt64", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		void* IntPtr::ToPointer()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "ToPointer", __native_object__, 0, NULL, NULL, NULL);
				return mono_object_unbox (__result__);
		}

		mscorlib::System::String IntPtr::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String IntPtr::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::IntPtr IntPtr::Add(mscorlib::System::IntPtr pointer, mscorlib::System::Int32 offset)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(pointer).name());
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameters__[0] = (MonoObject*)pointer;
				__parameters__[1] = &offset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "Add", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IntPtr(__result__);
		}

		mscorlib::System::IntPtr IntPtr::Subtract(mscorlib::System::IntPtr pointer, mscorlib::System::Int32 offset)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(pointer).name());
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameters__[0] = (MonoObject*)pointer;
				__parameters__[1] = &offset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "Subtract", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IntPtr(__result__);
		}

		//Get Set Static Properties Methods
		//	Get:Size
		mscorlib::System::Int32  IntPtr::get_Size()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IntPtr", 0, NULL, "get_Size", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}



			//	Get/Set:Zero
		mscorlib::System::IntPtr IntPtr::get_Zero()
		{
			return Global::GetFieldValue("mscorlib", "System", "IntPtr", 0, NULL, "Zero");
		}



	}
}
