#include <mscorlib/System/Threading/mscorlib_System_Threading_ExecutionContext.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_AsyncFlowControl.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Threading::ExecutionContext ExecutionContext::Capture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "Capture", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::ExecutionContext(__result__);
			}

			mscorlib::System::Threading::ExecutionContext ExecutionContext::CreateCopy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "CreateCopy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::ExecutionContext(__result__);
			}

			void ExecutionContext::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void ExecutionContext::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean ExecutionContext::IsFlowSuppressed()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "IsFlowSuppressed", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ExecutionContext::RestoreFlow()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "RestoreFlow", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void ExecutionContext::Run(mscorlib::System::Threading::ExecutionContext executionContext, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(executionContext).name());
					__parameter_types__[1] = Global::GetType(typeid(callback).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameters__[0] = (MonoObject*)executionContext;
					__parameters__[1] = &callback;
					__parameters__[2] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "Run", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::AsyncFlowControl ExecutionContext::SuppressFlow()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ExecutionContext", 0, NULL, "SuppressFlow", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::AsyncFlowControl(__result__);
			}


		}
	}
}
