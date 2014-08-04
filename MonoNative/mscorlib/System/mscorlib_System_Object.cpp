#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean Object::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Object", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Object::Equals(mscorlib::System::Object objA, mscorlib::System::Object objB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(objA).name());
				__parameter_types__[1] = Global::GetType(typeid(objB).name());
				__parameters__[0] = (MonoObject*)objA;
				__parameters__[1] = (MonoObject*)objB;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Object", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Object::GetHashCode()
		{
			return mono_object_hash(__native_object__);
		}

		mscorlib::System::Type Object::GetType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Object", 0, NULL, "GetType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::String Object::ToString()
		{
			return mscorlib::System::String((MonoObject*)mono_object_to_string(__native_object__, NULL));
		}

		mscorlib::System::Boolean Object::ReferenceEquals(mscorlib::System::Object objA, mscorlib::System::Object objB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(objA).name());
				__parameter_types__[1] = Global::GetType(typeid(objB).name());
				__parameters__[0] = (MonoObject*)objA;
				__parameters__[1] = (MonoObject*)objB;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Object", 0, NULL, "ReferenceEquals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


	}
}
