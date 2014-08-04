#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerNonUserCodeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:TypeId
			mscorlib::System::Object  DebuggerNonUserCodeAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
