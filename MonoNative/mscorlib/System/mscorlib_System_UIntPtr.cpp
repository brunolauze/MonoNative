#include <mscorlib/System/mscorlib_System_UIntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean UIntPtr::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 UIntPtr::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt32 UIntPtr::ToUInt32()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "ToUInt32", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
		}

		mscorlib::System::UInt64 UIntPtr::ToUInt64()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "ToUInt64", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
		}

		void* UIntPtr::ToPointer()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "ToPointer", __native_object__, 0, NULL, NULL, NULL);
				return mono_object_unbox (__result__);
		}

		mscorlib::System::String UIntPtr::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::UIntPtr UIntPtr::Add(mscorlib::System::UIntPtr pointer, mscorlib::System::Int32 offset)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(pointer).name());
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameters__[0] = (MonoObject*)pointer;
				__parameters__[1] = &offset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "Add", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::UIntPtr(__result__);
		}

		mscorlib::System::UIntPtr UIntPtr::Subtract(mscorlib::System::UIntPtr pointer, mscorlib::System::Int32 offset)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(pointer).name());
				__parameter_types__[1] = Global::GetType(typeid(offset).name());
				__parameters__[0] = (MonoObject*)pointer;
				__parameters__[1] = &offset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "Subtract", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::UIntPtr(__result__);
		}

		//Get Set Static Properties Methods
		//	Get:Size
		mscorlib::System::Int32  UIntPtr::get_Size()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UIntPtr", 0, NULL, "get_Size", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}



			//	Get/Set:Zero
		mscorlib::System::UIntPtr UIntPtr::get_Zero()
		{
			return Global::GetFieldValue("mscorlib", "System", "UIntPtr", 0, NULL, "Zero");
		}



	}
}
