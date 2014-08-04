#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_AsyncVoidMethodBuilder.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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

				//Public Methods
				mscorlib::System::Runtime::CompilerServices::AsyncVoidMethodBuilder AsyncVoidMethodBuilder::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::AsyncVoidMethodBuilder(__result__);
				}

				void AsyncVoidMethodBuilder::SetException(mscorlib::System::Exception exception)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exception).name());
						__parameters__[0] = (MonoObject*)exception;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "SetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AsyncVoidMethodBuilder::SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "SetStateMachine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AsyncVoidMethodBuilder::SetResult()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", 0, NULL, "SetResult", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
