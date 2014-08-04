#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::String ApplicationIdentity::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationIdentity", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		//Get Set Properties Methods
		//	Get:CodeBase
		mscorlib::System::String  ApplicationIdentity::get_CodeBase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationIdentity", 0, NULL, "get_CodeBase", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:FullName
		mscorlib::System::String  ApplicationIdentity::get_FullName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ApplicationIdentity", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}



	}
}
