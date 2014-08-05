#include <mscorlib/System/mscorlib_System_ConsoleKeyInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean ConsoleKeyInfo::Equals(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean ConsoleKeyInfo::Equals(mscorlib::System::ConsoleKeyInfo obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 ConsoleKeyInfo::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Key
		mscorlib::System::ConsoleKey::__ENUM__  ConsoleKeyInfo::get_Key() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::ConsoleKey::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:KeyChar
		mscorlib::System::Char  ConsoleKeyInfo::get_KeyChar() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "get_KeyChar", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}


		//	Get:Modifiers
		mscorlib::System::ConsoleModifiers::__ENUM__  ConsoleKeyInfo::get_Modifiers() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleKeyInfo", 0, NULL, "get_Modifiers", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::ConsoleModifiers::__ENUM__*)mono_object_unbox(__result__);
		}



	}
}
