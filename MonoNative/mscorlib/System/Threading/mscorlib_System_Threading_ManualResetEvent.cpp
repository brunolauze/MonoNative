#include <mscorlib/System/Threading/mscorlib_System_Threading_ManualResetEvent.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleSecurity.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:Handle
			mscorlib::System::IntPtr  ManualResetEvent::get_Handle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mono_object_unbox (__result__);
			}

			void ManualResetEvent::set_Handle(mscorlib::System::IntPtr  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_Handle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SafeWaitHandle
			mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  ManualResetEvent::get_SafeWaitHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_SafeWaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle(__result__);
			}

			void ManualResetEvent::set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_SafeWaitHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
