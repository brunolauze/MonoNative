#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCOMPLETIONSOURCE_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskCreationOptions.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
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
				class TaskCompletionSource
					: public mscorlib::System::Object
				{
				public:
					TaskCompletionSource()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCompletionSource`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, 0, NULL, NULL);
					};
				
					TaskCompletionSource(mscorlib::System::Object state)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCompletionSource`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)state;
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, __parameters__);
					};
				
					TaskCompletionSource(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCompletionSource`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, __parameters__);
					};
				
					TaskCompletionSource(mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Tasks.TaskCompletionSource`1"))
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading.Tasks", "TaskCreationOptions");
						__parameters__[0] = (MonoObject*)state;
						__parameters__[1] = reinterpret_cast<void*>(creationOptions);
						__native_object__ = Global::New("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, __parameters__);
					};
				
					TaskCompletionSource(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					TaskCompletionSource(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~TaskCompletionSource()
					{
					};
				

					TaskCompletionSource & operator=(TaskCompletionSource &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  SetCanceled()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "SetCanceled", __native_object__, 0, NULL, NULL, NULL);
					};
					
					void  SetException(mscorlib::System::Exception exception)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exception).name());
						__parameters__[0] = (MonoObject*)exception;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "SetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  SetException(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> exceptions)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exceptions).name());
						__parameters__[0] = (MonoObject*)exceptions;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "SetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  SetResult(TResult result)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(result).name());
						__parameters__[0] = (MonoObject*)result;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "SetResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Boolean  TrySetCanceled()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "TrySetCanceled", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TrySetException(mscorlib::System::Exception exception)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exception).name());
						__parameters__[0] = (MonoObject*)exception;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "TrySetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TrySetException(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> exceptions)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exceptions).name());
						__parameters__[0] = (MonoObject*)exceptions;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "TrySetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TrySetResult(TResult result)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(result).name());
						__parameters__[0] = (MonoObject*)result;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "TrySetResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Task)) mscorlib::System::Threading::Tasks::Task<TResult>  Task;

					//Get Set Properties Methods
					//	Get:Task
					mscorlib::System::Threading::Tasks::Task<TResult>  get_Task()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading.Tasks", "TaskCompletionSource`1", 1, __generic_types__, "get_Task", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Threading::Tasks::Task<TResult>(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
