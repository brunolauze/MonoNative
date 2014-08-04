#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongName.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
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
				void ApplicationTrust::FromXml(mscorlib::System::Security::SecurityElement element)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(element).name());
						__parameters__[0] = (MonoObject*)element;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement ApplicationTrust::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:ApplicationIdentity
				mscorlib::System::ApplicationIdentity  ApplicationTrust::get_ApplicationIdentity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_ApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ApplicationIdentity(__result__);
				}

				void ApplicationTrust::set_ApplicationIdentity(mscorlib::System::ApplicationIdentity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "set_ApplicationIdentity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:DefaultGrantSet
				mscorlib::System::Security::Policy::PolicyStatement  ApplicationTrust::get_DefaultGrantSet()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_DefaultGrantSet", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void ApplicationTrust::set_DefaultGrantSet(mscorlib::System::Security::Policy::PolicyStatement  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "set_DefaultGrantSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ExtraInfo
				mscorlib::System::Object  ApplicationTrust::get_ExtraInfo()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_ExtraInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}

				void ApplicationTrust::set_ExtraInfo(mscorlib::System::Object  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "set_ExtraInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:IsApplicationTrustedToRun
				mscorlib::System::Boolean  ApplicationTrust::get_IsApplicationTrustedToRun()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_IsApplicationTrustedToRun", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ApplicationTrust::set_IsApplicationTrustedToRun(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "set_IsApplicationTrustedToRun", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Persist
				mscorlib::System::Boolean  ApplicationTrust::get_Persist()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_Persist", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ApplicationTrust::set_Persist(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "set_Persist", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:FullTrustAssemblies
				mscorlib::System::Collections::Generic::IList<mscorlib::System::Security::Policy::StrongName>  ApplicationTrust::get_FullTrustAssemblies()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrust", 0, NULL, "get_FullTrustAssemblies", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Security::Policy::StrongName>(__result__);
				}



			}
		}
	}
}
