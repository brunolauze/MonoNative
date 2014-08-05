#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_TrustManagerContext.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:IgnorePersistedDecision
				mscorlib::System::Boolean  TrustManagerContext::get_IgnorePersistedDecision() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_IgnorePersistedDecision", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TrustManagerContext::set_IgnorePersistedDecision(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_IgnorePersistedDecision", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeepAlive
				mscorlib::System::Boolean  TrustManagerContext::get_KeepAlive() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_KeepAlive", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TrustManagerContext::set_KeepAlive(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_KeepAlive", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:NoPrompt
				mscorlib::System::Boolean  TrustManagerContext::get_NoPrompt() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_NoPrompt", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TrustManagerContext::set_NoPrompt(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_NoPrompt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Persist
				mscorlib::System::Boolean  TrustManagerContext::get_Persist() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_Persist", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TrustManagerContext::set_Persist(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_Persist", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:PreviousApplicationIdentity
				mscorlib::System::ApplicationIdentity  TrustManagerContext::get_PreviousApplicationIdentity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_PreviousApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ApplicationIdentity(__result__);
				}

				void TrustManagerContext::set_PreviousApplicationIdentity(mscorlib::System::ApplicationIdentity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_PreviousApplicationIdentity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:UIContext
				mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__  TrustManagerContext::get_UIContext() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "get_UIContext", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__*)mono_object_unbox(__result__);
				}

				void TrustManagerContext::set_UIContext(mscorlib::System::Security::Policy::TrustManagerUIContext::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "TrustManagerContext", 0, NULL, "set_UIContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
