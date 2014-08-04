#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_BStrWrapper.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:WrappedObject
				mscorlib::System::String  BStrWrapper::get_WrappedObject()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "BStrWrapper", 0, NULL, "get_WrappedObject", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
