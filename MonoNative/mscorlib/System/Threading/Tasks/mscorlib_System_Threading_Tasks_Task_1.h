#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASK_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASK_1_H

#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskCreationOptions.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskContinuationOptions.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_TaskAwaiter_1.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_TaskAwaiter.h>
#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskStatus.h>
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

					template<typename TResult>
				class TaskFactory;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				template<typename TResult>
				class Task
					: public mscorlib::System::Threading::Tasks::TaskBase
					, public virtual mscorlib::System::IAsyncResult
					, public virtual mscorlib::System::IDisposable
				{
				public:
					Task(mscorlib::Callback<TResult  ()> function)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
						__parameters__[0] = &function;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)cancellationToken;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &function;
						int __param_creationOptions__ = creationOptions;
						__parameters__[1] = &__param_creationOptions__;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)cancellationToken;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`2");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`2");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`2");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Threading::Tasks::TaskBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task`1"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Func`2");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_creationOptions__ = creationOptions;
						__parameters__[3] = &__param_creationOptions__;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, __parameters__);
					};
				
					Task(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Threading::Tasks::TaskBase(nativeTypeInfo)
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					Task(MonoObject *nativeObject)
					: mscorlib::System::Threading::Tasks::TaskBase(nativeObject)
					, mscorlib::System::IAsyncResult(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~Task()
					{
					};
				

					Task & operator=(Task &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationAction)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameters__[0] = &continuationAction;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationAction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[1] = &__param_continuationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationAction, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationFunction)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameters__[0] = &continuationFunction;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationFunction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[1] = &__param_continuationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
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
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationAction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ContinueWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationFunction, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)state;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationFunction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationFunction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)state;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationFunction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					template<typename TNewResult>
					mscorlib::System::Threading::Tasks::Task<TNewResult>  ContinueWith(mscorlib::Callback<TNewResult  (mscorlib::System::Threading::Tasks::Task<TResult> , mscorlib::System::Object )> continuationFunction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &continuationFunction;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TNewResult>(__result__);
					};
					
					mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable<TResult>  ConfigureAwait(mscorlib::System::Boolean continueOnCapturedContext)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continueOnCapturedContext).name());
						__parameters__[0] = reinterpret_cast<void*>(continueOnCapturedContext);
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "ConfigureAwait", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable<TResult>(__result__);
					};
					
					mscorlib::System::Runtime::CompilerServices::TaskAwaiter<TResult>  GetAwaiter()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "GetAwaiter", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::TaskAwaiter<TResult>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Result, put=set_Result)) TResult  Result;
					__declspec(property(get=get_Exception)) mscorlib::System::AggregateException  Exception;
					__declspec(property(get=get_IsCanceled)) mscorlib::System::Boolean  IsCanceled;
					__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;
					__declspec(property(get=get_IsFaulted)) mscorlib::System::Boolean  IsFaulted;
					__declspec(property(get=get_CreationOptions)) mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  CreationOptions;
					__declspec(property(get=get_Status, put=set_Status)) mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  Status;
					__declspec(property(get=get_AsyncState)) mscorlib::System::Object  AsyncState;
					__declspec(property(get=get_Id)) mscorlib::System::Int32  Id;

					//Public Static Properties

					//Get Set Properties Methods
					//	Get/Set:Result
					TResult  get_Result() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "get_Result", __native_object__, 0, NULL, NULL, NULL);
						return TResult(__result__);
					}
					void set_Result(TResult  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task`1", 1, __generic_types__, "set_Result", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:Exception
					mscorlib::System::AggregateException  get_Exception() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Exception", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::AggregateException(__result__);
					}

					//	Get:IsCanceled
					mscorlib::System::Boolean  get_IsCanceled() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsCanceled", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:IsCompleted
					mscorlib::System::Boolean  get_IsCompleted() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:IsFaulted
					mscorlib::System::Boolean  get_IsFaulted() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_IsFaulted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:CreationOptions
					mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  get_CreationOptions() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_CreationOptions", __native_object__, 0, NULL, NULL, NULL);
						return static_cast<mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__>(*(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__*)mono_object_unbox(__result__));
					}

					//	Get/Set:Status
					mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  get_Status() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Status", __native_object__, 0, NULL, NULL, NULL);
						return static_cast<mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__>(*(mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__*)mono_object_unbox(__result__));
					}
					void set_Status(mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						int __param_value__ = value;
						__parameters__[0] = &__param_value__;
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "set_Status", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:AsyncState
					mscorlib::System::Object  get_AsyncState() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_AsyncState", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}

					//	Get:Id
					mscorlib::System::Int32  get_Id() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "Task", 0, NULL, "get_Id", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//Get Set Static Properties Methods

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
