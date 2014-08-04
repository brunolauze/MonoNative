#include <mscorlib/System/Security/mscorlib_System_Security_SecurityState.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void SecurityState::EnsureState()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityState", 0, NULL, "EnsureState", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean SecurityState::IsStateAvailable()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityState", 0, NULL, "IsStateAvailable", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
