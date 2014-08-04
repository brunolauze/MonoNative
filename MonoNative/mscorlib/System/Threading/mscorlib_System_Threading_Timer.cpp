#include <mscorlib/System/Threading/mscorlib_System_Threading_Timer.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
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
			mscorlib::System::Boolean Timer::Change(mscorlib::System::Int32 dueTime, mscorlib::System::Int32 period)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(dueTime).name());
					__parameter_types__[1] = Global::GetType(typeid(period).name());
					__parameters__[0] = &dueTime;
					__parameters__[1] = &period;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Change", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Timer::Change(mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(dueTime).name());
					__parameter_types__[1] = Global::GetType(typeid(period).name());
					__parameters__[0] = (MonoObject*)dueTime;
					__parameters__[1] = (MonoObject*)period;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Change", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Timer::Change(mscorlib::System::UInt32 dueTime, mscorlib::System::UInt32 period)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(dueTime).name());
					__parameter_types__[1] = Global::GetType(typeid(period).name());
					__parameters__[0] = &dueTime;
					__parameters__[1] = &period;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Change", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Timer::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Timer::Change(mscorlib::System::Int64 dueTime, mscorlib::System::Int64 period)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(dueTime).name());
					__parameter_types__[1] = Global::GetType(typeid(period).name());
					__parameters__[0] = &dueTime;
					__parameters__[1] = &period;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Change", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Timer::Dispose(mscorlib::System::Threading::WaitHandle notifyObject)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(notifyObject).name());
					__parameters__[0] = (MonoObject*)notifyObject;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Timer", 0, NULL, "Dispose", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
