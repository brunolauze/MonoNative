#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
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
				void ConcurrentExclusiveSchedulerPair::Complete()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 0, NULL, "Complete", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:ConcurrentScheduler
				mscorlib::System::Threading::Tasks::TaskScheduler  ConcurrentExclusiveSchedulerPair::get_ConcurrentScheduler()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 0, NULL, "get_ConcurrentScheduler", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}


				//	Get:ExclusiveScheduler
				mscorlib::System::Threading::Tasks::TaskScheduler  ConcurrentExclusiveSchedulerPair::get_ExclusiveScheduler()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 0, NULL, "get_ExclusiveScheduler", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}


				//	Get:Completion
				mscorlib::System::Threading::Tasks::TaskBase  ConcurrentExclusiveSchedulerPair::get_Completion()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ConcurrentExclusiveSchedulerPair", 0, NULL, "get_Completion", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}



			}
		}
	}
}
