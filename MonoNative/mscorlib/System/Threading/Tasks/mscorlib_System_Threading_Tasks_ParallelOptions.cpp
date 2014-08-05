#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelOptions.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
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
				//Get Set Properties Methods
				//	Get/Set:CancellationToken
				mscorlib::System::Threading::CancellationToken  ParallelOptions::get_CancellationToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "get_CancellationToken", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CancellationToken(__result__);
				}

				void ParallelOptions::set_CancellationToken(mscorlib::System::Threading::CancellationToken  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "set_CancellationToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MaxDegreeOfParallelism
				mscorlib::System::Int32  ParallelOptions::get_MaxDegreeOfParallelism() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "get_MaxDegreeOfParallelism", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void ParallelOptions::set_MaxDegreeOfParallelism(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "set_MaxDegreeOfParallelism", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TaskScheduler
				mscorlib::System::Threading::Tasks::TaskScheduler  ParallelOptions::get_TaskScheduler() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "get_TaskScheduler", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}

				void ParallelOptions::set_TaskScheduler(mscorlib::System::Threading::Tasks::TaskScheduler  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelOptions", 0, NULL, "set_TaskScheduler", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
