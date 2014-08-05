#include <mscorlib/System/mscorlib_System_UnhandledExceptionEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:ExceptionObject
		mscorlib::System::Object  UnhandledExceptionEventArgs::get_ExceptionObject() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UnhandledExceptionEventArgs", 0, NULL, "get_ExceptionObject", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}


		//	Get:IsTerminating
		mscorlib::System::Boolean  UnhandledExceptionEventArgs::get_IsTerminating() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "UnhandledExceptionEventArgs", 0, NULL, "get_IsTerminating", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}



	}
}
