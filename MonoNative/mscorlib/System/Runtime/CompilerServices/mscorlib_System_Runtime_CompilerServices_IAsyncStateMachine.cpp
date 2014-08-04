#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				void IAsyncStateMachine::MoveNext()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "IAsyncStateMachine", 0, NULL, "MoveNext", __mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine, 0, NULL, NULL, NULL);
				}

				void IAsyncStateMachine::SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "IAsyncStateMachine", 0, NULL, "SetStateMachine", __mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
