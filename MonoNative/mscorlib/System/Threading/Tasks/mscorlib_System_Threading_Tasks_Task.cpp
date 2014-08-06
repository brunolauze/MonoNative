#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_TaskAwaiter.h>
#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_YieldAwaitable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskFactory.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				Property<mscorlib::System::Threading::Tasks::TaskFactoryBase , mscorlib::System::Threading::Tasks::TaskBase> mscorlib::System::Threading::Tasks::TaskBase::Factory(&mscorlib::System::Threading::Tasks::TaskBase::get_Factory, &mscorlib::System::Threading::Tasks::TaskBase::set_Factory);
				Property<mscorlib::System::Nullable<mscorlib::System::Int32> , mscorlib::System::Threading::Tasks::TaskBase> mscorlib::System::Threading::Tasks::TaskBase::CurrentId(&mscorlib::System::Threading::Tasks::TaskBase::get_CurrentId, &mscorlib::System::Threading::Tasks::TaskBase::set_CurrentId);
				//Public Methods
				void TaskBase::Start()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Start", __native_object__, 0, NULL, NULL, NULL);
				}

				void TaskBase::Start(mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = (MonoObject*)scheduler;
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Start", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void TaskBase::RunSynchronously()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "RunSynchronously", __native_object__, 0, NULL, NULL, NULL);
				}

				void TaskBase::RunSynchronously(mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = (MonoObject*)scheduler;
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "RunSynchronously", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameters__[0] = &continuationAction;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationAction;
						mscorlib::System::Int32 __param_continuationOptions__ = continuationOptions;
						__parameters__[1] = &__param_continuationOptions__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						mscorlib::System::Int32 __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				void TaskBase::Wait()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Wait", __native_object__, 0, NULL, NULL, NULL);
				}

				void TaskBase::Wait(mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = (MonoObject*)cancellationToken;
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean TaskBase::Wait(mscorlib::System::TimeSpan timeout)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(timeout).name());
						__parameters__[0] = (MonoObject*)timeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean TaskBase::Wait(mscorlib::System::Int32 millisecondsTimeout)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameters__[0] = &millisecondsTimeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Wait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean TaskBase::Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &millisecondsTimeout;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Wait", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TaskBase::WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void TaskBase::WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = (MonoObject*)cancellationToken;
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean TaskBase::WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(timeout).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = (MonoObject*)timeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean TaskBase::WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &millisecondsTimeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean TaskBase::WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &millisecondsTimeout;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAll", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 TaskBase::WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAny", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 TaskBase::WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(timeout).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = (MonoObject*)timeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAny", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 TaskBase::WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &millisecondsTimeout;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAny", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 TaskBase::WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAny", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 TaskBase::WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &millisecondsTimeout;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WaitAny", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void TaskBase::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						mscorlib::System::Int32 __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitableBase TaskBase::ConfigureAwait(mscorlib::System::Boolean continueOnCapturedContext)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continueOnCapturedContext).name());
						__parameters__[0] = reinterpret_cast<void*>(continueOnCapturedContext);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ConfigureAwait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitableBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						mscorlib::System::Int32 __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Delay(mscorlib::System::Int32 millisecondsDelay)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(millisecondsDelay).name());
						__parameters__[0] = &millisecondsDelay;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Delay", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Delay(mscorlib::System::TimeSpan delay)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(delay).name());
						__parameters__[0] = (MonoObject*)delay;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Delay", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Delay(mscorlib::System::TimeSpan delay, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(delay).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = (MonoObject*)delay;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Delay", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Delay(mscorlib::System::Int32 millisecondsDelay, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(millisecondsDelay).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &millisecondsDelay;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Delay", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Runtime::CompilerServices::TaskAwaiterBase TaskBase::GetAwaiter()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "GetAwaiter", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::TaskAwaiterBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Run(mscorlib::Callback<void  ()> action)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameters__[0] = &action;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Run", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Run(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Run", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Run(mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameters__[0] = &function;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Run", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::Run(mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Run", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::WhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Threading.Tasks", "Task")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WhenAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskBase::WhenAll(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Threading::Tasks::TaskBase> tasks)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(tasks).name());
						__parameters__[0] = (MonoObject*)tasks;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "WhenAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Runtime::CompilerServices::YieldAwaitable TaskBase::Yield()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "Yield", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::YieldAwaitable(__result__);
				}

				//Get Set Properties Methods
				//	Get:Exception
				mscorlib::System::AggregateException  TaskBase::get_Exception() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Exception", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::AggregateException(__result__);
				}


				//	Get:IsCanceled
				mscorlib::System::Boolean  TaskBase::get_IsCanceled() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsCanceled", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsCompleted
				mscorlib::System::Boolean  TaskBase::get_IsCompleted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFaulted
				mscorlib::System::Boolean  TaskBase::get_IsFaulted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsFaulted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CreationOptions
				mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  TaskBase::get_CreationOptions() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_CreationOptions", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get/Set:Status
				mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  TaskBase::get_Status() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Status", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void TaskBase::set_Status(mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "set_Status", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AsyncState
				mscorlib::System::Object  TaskBase::get_AsyncState() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_AsyncState", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:Id
				mscorlib::System::Int32  TaskBase::get_Id() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Id", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//Get Set Static Properties Methods
				//	Get:Factory
				mscorlib::System::Threading::Tasks::TaskFactoryBase  TaskBase::get_Factory()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Factory", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskFactoryBase(__result__);
				}

				void TaskBase::set_Factory(mscorlib::System::Threading::Tasks::TaskFactoryBase  value)
				{
					throw;
				}


				//	Get:CurrentId
				mscorlib::System::Nullable<mscorlib::System::Int32>  TaskBase::get_CurrentId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_CurrentId", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Nullable<mscorlib::System::Int32>(__result__);
				}

				void TaskBase::set_CurrentId(mscorlib::System::Nullable<mscorlib::System::Int32>  value)
				{
					throw;
				}




			}
		}
	}
}
