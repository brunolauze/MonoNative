#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
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
				mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilderBase AsyncTaskMethodBuilderBase::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilderBase(__result__);
				}

				void AsyncTaskMethodBuilderBase::SetException(mscorlib::System::Exception exception)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exception).name());
						__parameters__[0] = (MonoObject*)exception;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "SetException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AsyncTaskMethodBuilderBase::SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stateMachine).name());
						__parameters__[0] = (MonoObject*)stateMachine;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "SetStateMachine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AsyncTaskMethodBuilderBase::SetResult()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "SetResult", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Task
				mscorlib::System::Threading::Tasks::TaskBase  AsyncTaskMethodBuilderBase::get_Task()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", 0, NULL, "get_Task", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::Tasks::TaskBase(__result__);
				}



			}
		}
	}
}
