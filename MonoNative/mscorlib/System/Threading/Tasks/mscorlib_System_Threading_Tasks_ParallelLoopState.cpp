#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelLoopState.h>
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
				void ParallelLoopState::Break()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "Break", __native_object__, 0, NULL, NULL, NULL);
				}

				void ParallelLoopState::Stop()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "Stop", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:IsStopped
				mscorlib::System::Boolean  ParallelLoopState::get_IsStopped() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "get_IsStopped", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsExceptional
				mscorlib::System::Boolean  ParallelLoopState::get_IsExceptional() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "get_IsExceptional", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:LowestBreakIteration
				mscorlib::System::Nullable<mscorlib::System::Int64>  ParallelLoopState::get_LowestBreakIteration() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "get_LowestBreakIteration", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Nullable<mscorlib::System::Int64>(__result__);
				}


				//	Get:ShouldExitCurrentIteration
				mscorlib::System::Boolean  ParallelLoopState::get_ShouldExitCurrentIteration() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopState", 0, NULL, "get_ShouldExitCurrentIteration", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
