#include <mscorlib/System/Security/mscorlib_System_Security_SecurityContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_AsyncFlowControl.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			mscorlib::System::Security::SecurityContext SecurityContext::CreateCopy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "CreateCopy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityContext(__result__);
			}

			mscorlib::System::Security::SecurityContext SecurityContext::Capture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "Capture", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityContext(__result__);
			}

			void SecurityContext::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean SecurityContext::IsFlowSuppressed()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "IsFlowSuppressed", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean SecurityContext::IsWindowsIdentityFlowSuppressed()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "IsWindowsIdentityFlowSuppressed", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SecurityContext::RestoreFlow()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "RestoreFlow", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void SecurityContext::Run(mscorlib::System::Security::SecurityContext securityContext, mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(securityContext).name());
					__parameter_types__[1] = Global::GetType(typeid(callback).name());
					__parameter_types__[2] = Global::GetType(typeid(state).name());
					__parameters__[0] = (MonoObject*)securityContext;
					__parameters__[1] = &callback;
					__parameters__[2] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "Run", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::AsyncFlowControl SecurityContext::SuppressFlow()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "SuppressFlow", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::AsyncFlowControl(__result__);
			}

			mscorlib::System::Threading::AsyncFlowControl SecurityContext::SuppressFlowWindowsIdentity()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityContext", 0, NULL, "SuppressFlowWindowsIdentity", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::AsyncFlowControl(__result__);
			}


		}
	}
}
