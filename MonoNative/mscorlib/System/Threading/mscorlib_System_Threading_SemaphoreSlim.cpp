#include <mscorlib/System/Threading/mscorlib_System_Threading_SemaphoreSlim.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void SemaphoreSlim::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Int32 SemaphoreSlim::Release()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Release", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 SemaphoreSlim::Release(mscorlib::System::Int32 releaseCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(releaseCount).name());
					__parameters__[0] = &releaseCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Release", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void SemaphoreSlim::Wait()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean SemaphoreSlim::Wait(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SemaphoreSlim::Wait(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SemaphoreSlim::Wait(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean SemaphoreSlim::Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SemaphoreSlim::Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase SemaphoreSlim::WaitAsync()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::TaskBase SemaphoreSlim::WaitAsync(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean> SemaphoreSlim::WaitAsync(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean> SemaphoreSlim::WaitAsync(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean> SemaphoreSlim::WaitAsync(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>(__result__);
			}

			mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean> SemaphoreSlim::WaitAsync(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "WaitAsync", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>(__result__);
			}

			//Get Set Properties Methods
			//	Get:CurrentCount
			mscorlib::System::Int32  SemaphoreSlim::get_CurrentCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "get_CurrentCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:AvailableWaitHandle
			mscorlib::System::Threading::WaitHandle  SemaphoreSlim::get_AvailableWaitHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SemaphoreSlim", 0, NULL, "get_AvailableWaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::WaitHandle(__result__);
			}



		}
	}
}
