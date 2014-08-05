#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASK_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskCreationOptions.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskContinuationOptions.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskStatus.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/mscorlib_System_Nullable_1.h>

namespace mscorlib
{
	namespace System
	{

		class TimeSpan;
		class AggregateException;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class ConfiguredTaskAwaitableBase;
				class TaskAwaiterBase;
				class YieldAwaitable;
				

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

				class TaskFactoryBase;
				

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

				class TaskBase
					: public mscorlib::System::Object
					, public virtual mscorlib::System::IAsyncResult
					, public virtual mscorlib::System::IDisposable
				{
				public:
					TaskBase(mscorlib::Callback<void  ()> action)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action");
						__parameters__[0] = &action;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 1, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &action;
						__parameters__[1] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 2, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)cancellationToken;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 2, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)cancellationToken;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 3, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						MonoType *__generic_types__action__[1];
						__generic_types__action__[0] = Global::GetType("mscorlib", "System", "Action`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action`1", 1,__generic_types__action__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 2, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						MonoType *__generic_types__action__[1];
						__generic_types__action__[0] = Global::GetType("mscorlib", "System", "Action`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action`1", 1,__generic_types__action__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 3, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						MonoType *__generic_types__action__[1];
						__generic_types__action__[0] = Global::GetType("mscorlib", "System", "Action`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action`1", 1,__generic_types__action__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 3, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.Task"))
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						MonoType *__generic_types__action__[1];
						__generic_types__action__[0] = Global::GetType("mscorlib", "System", "Action`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Action`1", 1,__generic_types__action__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__parameters__[3] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "Task", 4, __parameter_types__, __parameters__);
					};
				
					TaskBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::IAsyncResult(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					TaskBase(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::IAsyncResult(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~TaskBase()
					{
					};
				

					TaskBase & operator=(TaskBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Start();
					void  Start(mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					void  RunSynchronously();
					void  RunSynchronously(mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					void  Wait();
					void  Wait(mscorlib::System::Threading::CancellationToken cancellationToken);
					mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout);
					mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout);
					mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
					static void  WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks);
					static void  WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout);
					static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout);
					static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks);
					static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout);
					static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout);
					static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
					virtual void  Dispose();
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitableBase  ConfigureAwait(mscorlib::System::Boolean continueOnCapturedContext);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions);
					mscorlib::System::Threading::Tasks::TaskBase  ContinueWith(mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskScheduler scheduler);
					static mscorlib::System::Threading::Tasks::TaskBase  Delay(mscorlib::System::Int32 millisecondsDelay);
					static mscorlib::System::Threading::Tasks::TaskBase  Delay(mscorlib::System::TimeSpan delay);
					static mscorlib::System::Threading::Tasks::TaskBase  Delay(mscorlib::System::TimeSpan delay, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Threading::Tasks::TaskBase  Delay(mscorlib::System::Int32 millisecondsDelay, mscorlib::System::Threading::CancellationToken cancellationToken);
					mscorlib::System::Runtime::CompilerServices::TaskAwaiterBase  GetAwaiter();
					static mscorlib::System::Threading::Tasks::TaskBase  Run(mscorlib::Callback<void  ()> action);
					static mscorlib::System::Threading::Tasks::TaskBase  Run(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Threading::Tasks::TaskBase  Run(mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function);
					static mscorlib::System::Threading::Tasks::TaskBase  Run(mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken);
					static mscorlib::System::Threading::Tasks::TaskBase  WhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks);
					static mscorlib::System::Threading::Tasks::TaskBase  WhenAll(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Threading::Tasks::TaskBase> tasks);
					static mscorlib::System::Runtime::CompilerServices::YieldAwaitable  Yield();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Exception)) mscorlib::System::AggregateException  Exception;
					__declspec(property(get=get_IsCanceled)) mscorlib::System::Boolean  IsCanceled;
					__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;
					__declspec(property(get=get_IsFaulted)) mscorlib::System::Boolean  IsFaulted;
					__declspec(property(get=get_CreationOptions)) mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  CreationOptions;
					__declspec(property(get=get_Status, put=set_Status)) mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  Status;
					__declspec(property(get=get_AsyncState)) mscorlib::System::Object  AsyncState;
					__declspec(property(get=get_Id)) mscorlib::System::Int32  Id;

					//Public Static Properties
					static Property<mscorlib::System::Threading::Tasks::TaskFactoryBase , mscorlib::System::Threading::Tasks::TaskBase> Factory;
					static Property<mscorlib::System::Nullable<mscorlib::System::Int32> , mscorlib::System::Threading::Tasks::TaskBase> CurrentId;

					//Get Set Properties Methods
					//	Get:Exception
					mscorlib::System::AggregateException  get_Exception() const;

					//	Get:IsCanceled
					mscorlib::System::Boolean  get_IsCanceled() const;

					//	Get:IsCompleted
					mscorlib::System::Boolean  get_IsCompleted() const;

					//	Get:IsFaulted
					mscorlib::System::Boolean  get_IsFaulted() const;

					//	Get:CreationOptions
					mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  get_CreationOptions() const;

					//	Get/Set:Status
					mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  get_Status() const;
					void set_Status(mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__  value);

					//	Get:AsyncState
					mscorlib::System::Object  get_AsyncState() const;

					//	Get:Id
					mscorlib::System::Int32  get_Id() const;

					//Get Set Static Properties Methods
					//	Get:Factory
					static mscorlib::System::Threading::Tasks::TaskFactoryBase  get_Factory();
					static void set_Factory(mscorlib::System::Threading::Tasks::TaskFactoryBase  value);

					//	Get:CurrentId
					static mscorlib::System::Nullable<mscorlib::System::Int32>  get_CurrentId();
					static void set_CurrentId(mscorlib::System::Nullable<mscorlib::System::Int32>  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
