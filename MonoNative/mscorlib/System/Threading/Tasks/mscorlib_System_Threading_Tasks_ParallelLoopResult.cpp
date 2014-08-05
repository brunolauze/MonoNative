#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelLoopResult.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
				//	Get/Set:LowestBreakIteration
				mscorlib::System::Nullable<mscorlib::System::Int64>  ParallelLoopResult::get_LowestBreakIteration() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopResult", 0, NULL, "get_LowestBreakIteration", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Nullable<mscorlib::System::Int64>(__result__);
				}

				void ParallelLoopResult::set_LowestBreakIteration(mscorlib::System::Nullable<mscorlib::System::Int64>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopResult", 0, NULL, "set_LowestBreakIteration", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:IsCompleted
				mscorlib::System::Boolean  ParallelLoopResult::get_IsCompleted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopResult", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ParallelLoopResult::set_IsCompleted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "ParallelLoopResult", 0, NULL, "set_IsCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
