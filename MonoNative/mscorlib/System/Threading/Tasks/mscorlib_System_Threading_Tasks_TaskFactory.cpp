#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskFactory.h>
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
				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  ()> action)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameters__[0] = &action;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &action;
						__parameters__[1] = reinterpret_cast<void*>(creationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)cancellationToken;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						__parameters__[3] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::StartNew(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &action;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__parameters__[3] = reinterpret_cast<void*>(creationOptions);
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "StartNew", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAny", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = reinterpret_cast<void*>(continuationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__parameters__[3] = reinterpret_cast<void*>(continuationOptions);
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAny", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAll", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAll", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = reinterpret_cast<void*>(continuationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAll", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationAction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationAction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						__parameters__[3] = reinterpret_cast<void*>(continuationOptions);
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "ContinueWhenAll", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "FromAsync", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "FromAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						__parameters__[2] = reinterpret_cast<void*>(creationOptions);
						__parameters__[3] = (MonoObject*)scheduler;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "FromAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(state).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)state;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "FromAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				mscorlib::System::Threading::Tasks::TaskBase TaskFactoryBase::FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(state).name());
						__parameter_types__[3] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)state;
						__parameters__[3] = reinterpret_cast<void*>(creationOptions);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "FromAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}

				//Get Set Properties Methods
				//	Get:Scheduler
				mscorlib::System::Threading::Tasks::TaskScheduler  TaskFactoryBase::get_Scheduler()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "get_Scheduler", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
				}


				//	Get:ContinuationOptions
				mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__  TaskFactoryBase::get_ContinuationOptions()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "get_ContinuationOptions", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:CreationOptions
				mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  TaskFactoryBase::get_CreationOptions()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "get_CreationOptions", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:CancellationToken
				mscorlib::System::Threading::CancellationToken  TaskFactoryBase::get_CancellationToken()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory", 0, NULL, "get_CancellationToken", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CancellationToken(__result__);
				}



			}
		}
	}
}
