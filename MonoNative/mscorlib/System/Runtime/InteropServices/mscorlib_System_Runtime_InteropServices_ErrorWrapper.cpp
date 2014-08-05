#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ErrorWrapper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
				//	Get:ErrorCode
				mscorlib::System::Int32  ErrorWrapper::get_ErrorCode() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ErrorWrapper", 0, NULL, "get_ErrorCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
