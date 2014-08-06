#include <mscorlib/System/Security/mscorlib_System_Security_HostSecurityManager.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_TrustManagerContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			mscorlib::System::Security::Policy::ApplicationTrust HostSecurityManager::DetermineApplicationTrust(mscorlib::System::Security::Policy::Evidence applicationEvidence, mscorlib::System::Security::Policy::Evidence activatorEvidence, mscorlib::System::Security::Policy::TrustManagerContext context)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(applicationEvidence).name());
					__parameter_types__[1] = Global::GetType(typeid(activatorEvidence).name());
					__parameter_types__[2] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)applicationEvidence;
					__parameters__[1] = (MonoObject*)activatorEvidence;
					__parameters__[2] = (MonoObject*)context;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "DetermineApplicationTrust", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
			}

			mscorlib::System::Security::Policy::Evidence HostSecurityManager::ProvideAppDomainEvidence(mscorlib::System::Security::Policy::Evidence inputEvidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inputEvidence).name());
					__parameters__[0] = (MonoObject*)inputEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "ProvideAppDomainEvidence", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::Evidence(__result__);
			}

			mscorlib::System::Security::Policy::Evidence HostSecurityManager::ProvideAssemblyEvidence(mscorlib::System::Reflection::Assembly loadedAssembly, mscorlib::System::Security::Policy::Evidence inputEvidence)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(loadedAssembly).name());
					__parameter_types__[1] = Global::GetType(typeid(inputEvidence).name());
					__parameters__[0] = (MonoObject*)loadedAssembly;
					__parameters__[1] = (MonoObject*)inputEvidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "ProvideAssemblyEvidence", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::Evidence(__result__);
			}

			mscorlib::System::Security::PermissionSet HostSecurityManager::ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameters__[0] = (MonoObject*)evidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "ResolvePolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			//Get Set Properties Methods
			//	Get:DomainPolicy
			mscorlib::System::Security::Policy::PolicyLevel  HostSecurityManager::get_DomainPolicy() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "get_DomainPolicy", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::Policy::PolicyLevel(__result__);
			}


			//	Get:Flags
			mscorlib::System::Security::HostSecurityManagerOptions::__ENUM__  HostSecurityManager::get_Flags() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "HostSecurityManager", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Security::HostSecurityManagerOptions::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}



		}
	}
}
