#include <mscorlib/System/Threading/mscorlib_System_Threading_SpinWait.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void SpinWait::SpinOnce()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "SpinOnce", __native_object__, 0, NULL, NULL, NULL);
			}

			void SpinWait::SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(condition).name());
					__parameters__[0] = &condition;
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "SpinUntil", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean SpinWait::SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition, mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(condition).name());
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = &condition;
					__parameters__[1] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "SpinUntil", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SpinWait::SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(condition).name());
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &condition;
					__parameters__[1] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "SpinUntil", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SpinWait::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:NextSpinWillYield
			mscorlib::System::Boolean  SpinWait::get_NextSpinWillYield()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "get_NextSpinWillYield", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Count
			mscorlib::System::Int32  SpinWait::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SpinWait", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
