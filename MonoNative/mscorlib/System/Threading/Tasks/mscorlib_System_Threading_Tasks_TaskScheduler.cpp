#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_UnobservedTaskExceptionEventArgs.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Public Methods
				mscorlib::System::Threading::Tasks::TaskScheduler TaskScheduler::FromCurrentSynchronizationContext()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "FromCurrentSynchronizationContext", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}

				//Get Set Properties Methods
				//	Get:Id
				mscorlib::System::Int32  TaskScheduler::get_Id()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "get_Id", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:MaximumConcurrencyLevel
				mscorlib::System::Int32  TaskScheduler::get_MaximumConcurrencyLevel()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "get_MaximumConcurrencyLevel", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//Get Set Static Properties Methods
				//	Get:Default
				mscorlib::System::Threading::Tasks::TaskScheduler  TaskScheduler::get_Default()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "get_Default", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}


				//	Get/Set:Current
				mscorlib::System::Threading::Tasks::TaskScheduler  TaskScheduler::get_Current()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "get_Current", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}

				void TaskScheduler::set_Current(mscorlib::System::Threading::Tasks::TaskScheduler  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskScheduler", 0, NULL, "set_Current", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}




			}
		}
	}
}
