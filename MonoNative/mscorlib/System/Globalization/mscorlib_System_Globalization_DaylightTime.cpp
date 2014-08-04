#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DaylightTime.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Start
			mscorlib::System::DateTime  DaylightTime::get_Start()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DaylightTime", 0, NULL, "get_Start", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:End
			mscorlib::System::DateTime  DaylightTime::get_End()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DaylightTime", 0, NULL, "get_End", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:Delta
			mscorlib::System::TimeSpan  DaylightTime::get_Delta()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DaylightTime", 0, NULL, "get_Delta", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::TimeSpan(__result__);
			}



		}
	}
}
