#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_1_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				template<typename TResult>
				class AsyncTaskMethodBuilder
					: public mscorlib::System::ValueType
				{
				public:
					AsyncTaskMethodBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					AsyncTaskMethodBuilder(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~AsyncTaskMethodBuilder()
					{
					};
				

					AsyncTaskMethodBuilder & operator=(AsyncTaskMethodBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					template<typename TAwaiter, typename TStateMachine>
					void  AwaitOnCompleted(TAwaiter awaiter, TStateMachine stateMachine)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(awaiter).name());
						__parameter_types__[1] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)awaiter;
						__parameters__[1] = (MonoObject*)stateMachine;
					};
					
					template<typename TAwaiter, typename TStateMachine>
					void  AwaitUnsafeOnCompleted(TAwaiter awaiter, TStateMachine stateMachine)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(awaiter).name());
						__parameter_types__[1] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)awaiter;
						__parameters__[1] = (MonoObject*)stateMachine;
					};
					
					static mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder<TResult>  Create()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1", 1, __generic_types__, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder<TResult>(__result__);
					};
					
					void  SetException(mscorlib::System::Exception exception)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exception).name());
						__parameters__[0] = (MonoObject*)exception;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1", 1, __generic_types__, "SetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1", 1, __generic_types__, "SetStateMachine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  SetResult(TResult result)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(result).name());
						__parameters__[0] = (MonoObject*)result;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1", 1, __generic_types__, "SetResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					template<typename TStateMachine>
					void  Start(TStateMachine stateMachine)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1", 1, __generic_types__, "get_Task", __native_object__, 0, NULL, NULL, NULL);
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
