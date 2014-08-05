#include <mscorlib/System/Threading/mscorlib_System_Threading_SpinLock.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void SpinLock::Enter(mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "Enter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void SpinLock::TryEnter(mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "TryEnter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void SpinLock::TryEnter(mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "TryEnter", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SpinLock::TryEnter(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "TryEnter", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SpinLock::Exit()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "Exit", __native_object__, 0, NULL, NULL, NULL);
			}

			void SpinLock::Exit(mscorlib::System::Boolean useMemoryBarrier)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(useMemoryBarrier).name());
					__parameters__[0] = reinterpret_cast<void*>(useMemoryBarrier);
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "Exit", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:IsThreadOwnerTrackingEnabled
			mscorlib::System::Boolean  SpinLock::get_IsThreadOwnerTrackingEnabled() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "get_IsThreadOwnerTrackingEnabled", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsHeld
			mscorlib::System::Boolean  SpinLock::get_IsHeld() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "get_IsHeld", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsHeldByCurrentThread
			mscorlib::System::Boolean  SpinLock::get_IsHeldByCurrentThread() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinLock", 0, NULL, "get_IsHeldByCurrentThread", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
