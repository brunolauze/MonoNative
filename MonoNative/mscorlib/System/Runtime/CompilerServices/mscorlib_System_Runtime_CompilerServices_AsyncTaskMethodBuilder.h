#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Exception;
		class String;
		class Type;
		

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

				class AsyncTaskMethodBuilderBase
					: public mscorlib::System::ValueType
				{
				public:
					AsyncTaskMethodBuilderBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					AsyncTaskMethodBuilderBase(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~AsyncTaskMethodBuilderBase()
					{
					};
				

					AsyncTaskMethodBuilderBase & operator=(AsyncTaskMethodBuilderBase &value) { __native_object__ = value.GetNativeObject(); return value; };
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
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "AwaitOnCompleted", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "AwaitUnsafeOnCompleted", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					static mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilderBase  Create();
					void  SetException(mscorlib::System::Exception exception);
					void  SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine);
					void  SetResult();
					template<typename TStateMachine>
					void  Start(TStateMachine stateMachine)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "Start", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Task)) mscorlib::System::Threading::Tasks::TaskBase  Task;

					//Get Set Properties Methods
					//	Get:Task
					mscorlib::System::Threading::Tasks::TaskBase  get_Task() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
