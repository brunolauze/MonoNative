#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_CriticalHandleMinusOneIsInvalid.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:IsInvalid
				mscorlib::System::Boolean  CriticalHandleMinusOneIsInvalid::get_IsInvalid() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32.SafeHandles", "CriticalHandleMinusOneIsInvalid", 0, NULL, "get_IsInvalid", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsClosed
				mscorlib::System::Boolean  CriticalHandleMinusOneIsInvalid::get_IsClosed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "get_IsClosed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
