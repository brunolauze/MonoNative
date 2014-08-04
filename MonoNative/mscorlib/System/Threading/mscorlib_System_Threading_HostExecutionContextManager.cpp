#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContextManager.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Threading::HostExecutionContext HostExecutionContextManager::Capture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "HostExecutionContextManager", 0, NULL, "Capture", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::HostExecutionContext(__result__);
			}

			void HostExecutionContextManager::Revert(mscorlib::System::Object previousState)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(previousState).name());
					__parameters__[0] = (MonoObject*)previousState;
					Global::InvokeMethod("mscorlib", "System.Threading", "HostExecutionContextManager", 0, NULL, "Revert", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object HostExecutionContextManager::SetHostExecutionContext(mscorlib::System::Threading::HostExecutionContext hostExecutionContext)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(hostExecutionContext).name());
					__parameters__[0] = (MonoObject*)hostExecutionContext;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "HostExecutionContextManager", 0, NULL, "SetHostExecutionContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}


		}
	}
}
