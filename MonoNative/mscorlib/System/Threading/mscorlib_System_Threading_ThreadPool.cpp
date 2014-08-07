#include <mscorlib/System/Threading/mscorlib_System_Threading_ThreadPool.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_RegisteredWaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_NativeOverlapped.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Boolean ThreadPool::BindHandle(mscorlib::System::IntPtr osHandle)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(osHandle).name());
					__parameters__[0] = osHandle;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "BindHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ThreadPool::BindHandle(mscorlib::System::Runtime::InteropServices::SafeHandle osHandle)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(osHandle).name());
					__parameters__[0] = (MonoObject*)osHandle;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "BindHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ThreadPool::GetAvailableThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(workerThreads).name());
					__parameter_types__[1] = Global::GetType(typeid(completionPortThreads).name());
					__parameters__[0] = &workerThreads;
					__parameters__[1] = &completionPortThreads;
					Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "GetAvailableThreads", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void ThreadPool::GetMaxThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(workerThreads).name());
					__parameter_types__[1] = Global::GetType(typeid(completionPortThreads).name());
					__parameters__[0] = &workerThreads;
					__parameters__[1] = &completionPortThreads;
					Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "GetMaxThreads", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void ThreadPool::GetMinThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(workerThreads).name());
					__parameter_types__[1] = Global::GetType(typeid(completionPortThreads).name());
					__parameters__[0] = &workerThreads;
					__parameters__[1] = &completionPortThreads;
					Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "GetMinThreads", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean ThreadPool::SetMinThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(workerThreads).name());
					__parameter_types__[1] = Global::GetType(typeid(completionPortThreads).name());
					__parameters__[0] = &workerThreads;
					__parameters__[1] = &completionPortThreads;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "SetMinThreads", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ThreadPool::SetMaxThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(workerThreads).name());
					__parameter_types__[1] = Global::GetType(typeid(completionPortThreads).name());
					__parameters__[0] = &workerThreads;
					__parameters__[1] = &completionPortThreads;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "SetMaxThreads", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ThreadPool::QueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(callBack).name());
					__parameters__[0] = &callBack;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "QueueUserWorkItem", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ThreadPool::QueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(callBack).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = &callBack;
					__parameters__[1] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "QueueUserWorkItem", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "RegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "RegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(timeout).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = (MonoObject*)timeout;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "RegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "RegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Boolean ThreadPool::UnsafeQueueNativeOverlapped(mscorlib::System::Threading::NativeOverlapped* overlapped)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(overlapped).name());
					__parameters__[0] = overlapped->GetNativeObject();
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeQueueNativeOverlapped", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ThreadPool::UnsafeQueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(callBack).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = &callBack;
					__parameters__[1] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeQueueUserWorkItem", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeRegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeRegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(timeout).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = (MonoObject*)timeout;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeRegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}

			mscorlib::System::Threading::RegisteredWaitHandle ThreadPool::UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameter_types__[1] = Global::GetType(typeid(callBack).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameter_types__[3] = Global::GetType(typeid(millisecondsTimeOutInterval).name());
					__parameter_types__[4] = Global::GetType(typeid(executeOnlyOnce).name());
					__parameters__[0] = (MonoObject*)waitObject;
					__parameters__[1] = &callBack;
					__parameters__[2] = (MonoObject*)state;
					__parameters__[3] = &millisecondsTimeOutInterval;
					__parameters__[4] = reinterpret_cast<void*>(executeOnlyOnce);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ThreadPool", 0, NULL, "UnsafeRegisterWaitForSingleObject", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::RegisteredWaitHandle(__result__);
			}


		}
	}
}
