#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_UnobservedTaskExceptionEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Public Methods
				void UnobservedTaskExceptionEventArgs::SetObserved()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs", 0, NULL, "SetObserved", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Exception
				mscorlib::System::AggregateException  UnobservedTaskExceptionEventArgs::get_Exception() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs", 0, NULL, "get_Exception", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::AggregateException(__result__);
				}


				//	Get:Observed
				mscorlib::System::Boolean  UnobservedTaskExceptionEventArgs::get_Observed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs", 0, NULL, "get_Observed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
