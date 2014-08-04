#include <mscorlib/System/Threading/mscorlib_System_Threading_Monitor.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void Monitor::Enter(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Enter", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::Exit(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Exit", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::Pulse(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Pulse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::PulseAll(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "PulseAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Monitor::TryEnter(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::TryEnter(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::TryEnter(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::Wait(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Wait", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::Wait(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Wait", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::Wait(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Wait", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::Wait(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &millisecondsTimeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Wait", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Monitor::Wait(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)timeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Wait", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Monitor::Enter(mscorlib::System::Object obj, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "Enter", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::TryEnter(mscorlib::System::Object obj, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::TryEnter(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameter_types__[2] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)timeout;
					__parameters__[2] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void Monitor::TryEnter(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean lockTaken)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[2] = Global::GetType(typeid(lockTaken).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = &millisecondsTimeout;
					__parameters__[2] = &lockTaken;
					Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "TryEnter", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Monitor::IsEntered(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Monitor", 0, NULL, "IsEntered", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
