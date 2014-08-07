#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeHandle.h>
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
				void SafeHandle::Close()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
				}

				void SafeHandle::DangerousAddRef(mscorlib::System::Boolean success)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(success).name());
						__parameters__[0] = &success;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "DangerousAddRef", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::IntPtr SafeHandle::DangerousGetHandle()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "DangerousGetHandle", __native_object__, 0, NULL, NULL, NULL);
						return mono_object_unbox (__result__);
				}

				void SafeHandle::DangerousRelease()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "DangerousRelease", __native_object__, 0, NULL, NULL, NULL);
				}

				void SafeHandle::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				void SafeHandle::SetHandleAsInvalid()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "SetHandleAsInvalid", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:IsClosed
				mscorlib::System::Boolean  SafeHandle::get_IsClosed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "get_IsClosed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInvalid
				mscorlib::System::Boolean  SafeHandle::get_IsInvalid() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "SafeHandle", 0, NULL, "get_IsInvalid", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
