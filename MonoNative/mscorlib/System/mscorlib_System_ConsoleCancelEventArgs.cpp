#include <mscorlib/System/mscorlib_System_ConsoleCancelEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get/Set:Cancel
		mscorlib::System::Boolean  ConsoleCancelEventArgs::get_Cancel()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleCancelEventArgs", 0, NULL, "get_Cancel", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void ConsoleCancelEventArgs::set_Cancel(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "ConsoleCancelEventArgs", 0, NULL, "set_Cancel", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:SpecialKey
		mscorlib::System::ConsoleSpecialKey::__ENUM__  ConsoleCancelEventArgs::get_SpecialKey()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ConsoleCancelEventArgs", 0, NULL, "get_SpecialKey", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::ConsoleSpecialKey::__ENUM__*)mono_object_unbox(__result__);
		}



	}
}
