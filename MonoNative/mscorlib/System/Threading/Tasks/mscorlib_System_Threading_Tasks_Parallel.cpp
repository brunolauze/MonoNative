#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Parallel.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ParallelLoopState.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Public Methods
				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int32 )> body)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int32 )> body)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int32 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int64 )> body)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::Callback<void  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int64 )> body)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				mscorlib::System::Threading::Tasks::ParallelLoopResult Parallel::For(mscorlib::System::Int64 fromInclusive, mscorlib::System::Int64 toExclusive, mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, mscorlib::Callback<void  (mscorlib::System::Int64 , mscorlib::System::Threading::Tasks::ParallelLoopState )> body)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(body).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = (MonoObject*)parallelOptions;
						__parameters__[3] = &body;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "For", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::ParallelLoopResult(__result__);
				}

				void Parallel::Invoke(std::vector<mscorlib::Callback<void  ()> *> actions)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Action")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::Callback<void  ()> *>(actions, typeid(mscorlib::Callback<void  ()> ).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "Invoke", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Parallel::Invoke(mscorlib::System::Threading::Tasks::ParallelOptions parallelOptions, std::vector<mscorlib::Callback<void  ()> *> actions)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(parallelOptions).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Action")), 1));
						__parameters__[0] = (MonoObject*)parallelOptions;
						__parameters__[1] = Global::FromArray<mscorlib::Callback<void  ()> *>(actions, typeid(mscorlib::Callback<void  ()> ).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Parallel", 0, NULL, "Invoke", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
