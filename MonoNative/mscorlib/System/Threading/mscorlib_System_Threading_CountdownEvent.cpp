#include <mscorlib/System/Threading/mscorlib_System_Threading_CountdownEvent.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Boolean CountdownEvent::Signal()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Signal", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CountdownEvent::Signal(mscorlib::System::Int32 signalCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(signalCount).name());
					__parameters__[0] = &signalCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Signal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void CountdownEvent::AddCount()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "AddCount", __native_object__, 0, NULL, NULL, NULL);
			}

			void CountdownEvent::AddCount(mscorlib::System::Int32 signalCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(signalCount).name());
					__parameters__[0] = &signalCount;
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "AddCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean CountdownEvent::TryAddCount()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "TryAddCount", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CountdownEvent::TryAddCount(mscorlib::System::Int32 signalCount)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(signalCount).name());
					__parameters__[0] = &signalCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "TryAddCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void CountdownEvent::Wait()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 0, NULL, NULL, NULL);
			}

			void CountdownEvent::Wait(mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)cancellationToken;
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean CountdownEvent::Wait(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CountdownEvent::Wait(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CountdownEvent::Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CountdownEvent::Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = (MonoObject*)cancellationToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void CountdownEvent::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			void CountdownEvent::Reset(mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(count).name());
					__parameters__[0] = &count;
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Reset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void CountdownEvent::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:CurrentCount
			mscorlib::System::Int32  CountdownEvent::get_CurrentCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "get_CurrentCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:InitialCount
			mscorlib::System::Int32  CountdownEvent::get_InitialCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "get_InitialCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSet
			mscorlib::System::Boolean  CountdownEvent::get_IsSet()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "get_IsSet", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WaitHandle
			mscorlib::System::Threading::WaitHandle  CountdownEvent::get_WaitHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CountdownEvent", 0, NULL, "get_WaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::WaitHandle(__result__);
			}



		}
	}
}
