#include <mscorlib/System/Threading/mscorlib_System_Threading_Mutex.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Security::AccessControl::MutexSecurity Mutex::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::MutexSecurity(__result__);
			}

			mscorlib::System::Threading::Mutex Mutex::OpenExisting(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "OpenExisting", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Mutex(__result__);
			}

			mscorlib::System::Threading::Mutex Mutex::OpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(rights);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "OpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Mutex(__result__);
			}

			mscorlib::System::Boolean Mutex::TryOpenExisting(mscorlib::System::String name, mscorlib::System::Threading::Mutex result)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(result).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "TryOpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Mutex::TryOpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights, mscorlib::System::Threading::Mutex result)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameter_types__[2] = Global::GetType(typeid(result).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(rights);
					__parameters__[2] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "TryOpenExisting", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Mutex::ReleaseMutex()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "ReleaseMutex", __native_object__, 0, NULL, NULL, NULL);
			}

			void Mutex::SetAccessControl(mscorlib::System::Security::AccessControl::MutexSecurity mutexSecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(mutexSecurity).name());
					__parameters__[0] = (MonoObject*)mutexSecurity;
					Global::InvokeMethod("mscorlib", "System.Threading", "Mutex", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:Handle
			mscorlib::System::IntPtr  Mutex::get_Handle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IntPtr(__result__);
			}

			void Mutex::set_Handle(mscorlib::System::IntPtr  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_Handle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SafeWaitHandle
			mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  Mutex::get_SafeWaitHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_SafeWaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle(__result__);
			}

			void Mutex::set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value)
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
