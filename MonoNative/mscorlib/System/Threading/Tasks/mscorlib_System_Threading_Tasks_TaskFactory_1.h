#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKFACTORY_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKFACTORY_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskScheduler.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskCreationOptions.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskContinuationOptions.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
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
				class TaskFactory
					: public mscorlib::System::Object
				{
				public:
					TaskFactory()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskFactory`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, 0, NULL, NULL);
					};
				
					TaskFactory(mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskFactory`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskScheduler");
						__parameters__[0] = (MonoObject*)scheduler;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, __parameters__);
					};
				
					TaskFactory(mscorlib::System::Threading::CancellationToken cancellationToken)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskFactory`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameters__[0] = (MonoObject*)cancellationToken;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, __parameters__);
					};
				
					TaskFactory(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskFactory`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskContinuationOptions");
						int __param_creationOptions__ = creationOptions;
						__parameters__[0] = &__param_creationOptions__;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[1] = &__param_continuationOptions__;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, __parameters__);
					};
				
					TaskFactory(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskFactory`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "CancellationToken");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskContinuationOptions");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskScheduler");
						__parameters__[0] = (MonoObject*)cancellationToken;
						int __param_creationOptions__ = creationOptions;
						__parameters__[1] = &__param_creationOptions__;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, __parameters__);
					};
				
					TaskFactory(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					TaskFactory(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~TaskFactory()
					{
					};
				

					TaskFactory & operator=(TaskFactory &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  ()> function)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameters__[0] = &function;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &function;
						int __param_creationOptions__ = creationOptions;
						__parameters__[1] = &__param_creationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)cancellationToken;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  StartNew(mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(function).name());
						__parameter_types__[1] = Global::GetType(typeid(state).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = &function;
						__parameters__[1] = (MonoObject*)state;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_creationOptions__ = creationOptions;
						__parameters__[3] = &__param_creationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "StartNew", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAny", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAny", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAny(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAll", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAll", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAll", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::TaskBase*>(tasks, typeid(mscorlib::System::Threading::Tasks::TaskBase).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "ContinueWhenAll", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(continuationOptions).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[2] = &__param_continuationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TAntecedentResult>
					mscorlib::System::Threading::Tasks::Task<TResult>  ContinueWhenAll(std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tasks).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(continuationFunction).name());
						__parameter_types__[2] = Global::GetType(typeid(cancellationToken).name());
						__parameter_types__[3] = Global::GetType(typeid(continuationOptions).name());
						__parameter_types__[4] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*>(tasks, typeid(mscorlib::System::Threading::Tasks::Task<TAntecedentResult>).name());
						__parameters__[1] = &continuationFunction;
						__parameters__[2] = (MonoObject*)cancellationToken;
						int __param_continuationOptions__ = continuationOptions;
						__parameters__[3] = &__param_continuationOptions__;
						__parameters__[4] = (MonoObject*)scheduler;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "FromAsync", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "FromAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(asyncResult).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(creationOptions).name());
						__parameter_types__[3] = Global::GetType(typeid(scheduler).name());
						__parameters__[0] = (MonoObject*)asyncResult;
						__parameters__[1] = &endMethod;
						int __param_creationOptions__ = creationOptions;
						__parameters__[2] = &__param_creationOptions__;
						__parameters__[3] = (MonoObject*)scheduler;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "FromAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(state).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)state;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "FromAsync", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
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
						int __param_creationOptions__ = creationOptions;
						__parameters__[3] = &__param_creationOptions__;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "FromAsync", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(state).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)state;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(state).name());
						__parameter_types__[4] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)state;
						int __param_creationOptions__ = creationOptions;
						__parameters__[4] = &__param_creationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1, typename TArg2>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(arg2).name());
						__parameter_types__[4] = Global::GetType(typeid(state).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)arg2;
						__parameters__[4] = (MonoObject*)state;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1, typename TArg2>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(arg2).name());
						__parameter_types__[4] = Global::GetType(typeid(state).name());
						__parameter_types__[5] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)arg2;
						__parameters__[4] = (MonoObject*)state;
						int __param_creationOptions__ = creationOptions;
						__parameters__[5] = &__param_creationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1, typename TArg2, typename TArg3>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state)
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(arg2).name());
						__parameter_types__[4] = Global::GetType(typeid(arg3).name());
						__parameter_types__[5] = Global::GetType(typeid(state).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)arg2;
						__parameters__[4] = (MonoObject*)arg3;
						__parameters__[5] = (MonoObject*)state;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					template<typename TArg1, typename TArg2, typename TArg3>
					mscorlib::System::Threading::Tasks::Task<TResult>  FromAsync(mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(beginMethod).name());
						__parameter_types__[1] = Global::GetType(typeid(endMethod).name());
						__parameter_types__[2] = Global::GetType(typeid(arg1).name());
						__parameter_types__[3] = Global::GetType(typeid(arg2).name());
						__parameter_types__[4] = Global::GetType(typeid(arg3).name());
						__parameter_types__[5] = Global::GetType(typeid(state).name());
						__parameter_types__[6] = Global::GetType(typeid(creationOptions).name());
						__parameters__[0] = &beginMethod;
						__parameters__[1] = &endMethod;
						__parameters__[2] = (MonoObject*)arg1;
						__parameters__[3] = (MonoObject*)arg2;
						__parameters__[4] = (MonoObject*)arg3;
						__parameters__[5] = (MonoObject*)state;
						int __param_creationOptions__ = creationOptions;
						__parameters__[6] = &__param_creationOptions__;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Scheduler)) mscorlib::System::Threading::Tasks::TaskScheduler  Scheduler;
					__declspec(property(get=get_ContinuationOptions)) mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__  ContinuationOptions;
					__declspec(property(get=get_CreationOptions)) mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  CreationOptions;
					__declspec(property(get=get_CancellationToken)) mscorlib::System::Threading::CancellationToken  CancellationToken;

					//Get Set Properties Methods
					//	Get:Scheduler
					mscorlib::System::Threading::Tasks::TaskScheduler  get_Scheduler() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "get_Scheduler", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Threading::Tasks::TaskScheduler(__result__);
					}

					//	Get:ContinuationOptions
					mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__  get_ContinuationOptions() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "get_ContinuationOptions", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__*)mono_object_unbox(__result__);
					}

					//	Get:CreationOptions
					mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__  get_CreationOptions() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "get_CreationOptions", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__*)mono_object_unbox(__result__);
					}

					//	Get:CancellationToken
					mscorlib::System::Threading::CancellationToken  get_CancellationToken() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskFactory`1", 1, __generic_types__, "get_CancellationToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Threading::CancellationToken(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
