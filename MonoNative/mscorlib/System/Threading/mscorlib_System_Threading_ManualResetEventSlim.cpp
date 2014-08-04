#include <mscorlib/System/Threading/mscorlib_System_Threading_ManualResetEventSlim.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void ManualResetEventSlim::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			void ManualResetEventSlim::Set()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Set", __native_object__, 0, NULL, NULL, NULL);
			}

			void ManualResetEventSlim::Wait()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean ManualResetEventSlim::Wait(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ManualResetEventSlim::Wait(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ManualResetEventSlim::Wait(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean ManualResetEventSlim::Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean ManualResetEventSlim::Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ManualResetEventSlim::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:IsSet
			mscorlib::System::Boolean  ManualResetEventSlim::get_IsSet()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "get_IsSet", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SpinCount
			mscorlib::System::Int32  ManualResetEventSlim::get_SpinCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "get_SpinCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:WaitHandle
			mscorlib::System::Threading::WaitHandle  ManualResetEventSlim::get_WaitHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ManualResetEventSlim", 0, NULL, "get_WaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::WaitHandle(__result__);
			}



		}
	}
}
