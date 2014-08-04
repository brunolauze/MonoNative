#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class AsyncVoidMethodBuilder
					: public mscorlib::System::ValueType
				{
				public:
					AsyncVoidMethodBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					AsyncVoidMethodBuilder(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~AsyncVoidMethodBuilder()
					{
					};
				

					AsyncVoidMethodBuilder & operator=(AsyncVoidMethodBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
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
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "AwaitOnCompleted", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "AwaitUnsafeOnCompleted", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					static mscorlib::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  Create();
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
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "Start", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
