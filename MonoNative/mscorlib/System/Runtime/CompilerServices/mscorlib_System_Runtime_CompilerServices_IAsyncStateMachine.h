#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class IAsyncStateMachine
				{
				public:
					IAsyncStateMachine(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine = nativeObject;
					};
				
					~IAsyncStateMachine()
					{
					};
				

					IAsyncStateMachine & operator=(IAsyncStateMachine &value) { __mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine = value.__mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine = value; return value; };


					virtual void  MoveNext();
					virtual void  SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_CompilerServices_IAsyncStateMachine;
				
				private:
				
				};

			}
		}
	}
}
#endif
