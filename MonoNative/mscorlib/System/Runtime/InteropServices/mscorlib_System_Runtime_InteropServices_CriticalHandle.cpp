#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CriticalHandle.h>
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
				void CriticalHandle::Close()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
				}

				void CriticalHandle::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				void CriticalHandle::SetHandleAsInvalid()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "SetHandleAsInvalid", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:IsClosed
				mscorlib::System::Boolean  CriticalHandle::get_IsClosed()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "get_IsClosed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInvalid
				mscorlib::System::Boolean  CriticalHandle::get_IsInvalid()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CriticalHandle", 0, NULL, "get_IsInvalid", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
