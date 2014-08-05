#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistrySecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistryAccessRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistryAuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				mscorlib::System::Security::AccessControl::AccessRuleBase RegistrySecurity::AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						int __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						int __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						int __param_type__ = type;
						__parameters__[5] = &__param_type__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "AccessRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AccessRuleBase(__result__);
				}

				void RegistrySecurity::AddAccessRule(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "AddAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean RegistrySecurity::RemoveAccessRule(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RegistrySecurity::RemoveAccessRuleAll(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAccessRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RegistrySecurity::RemoveAccessRuleSpecific(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAccessRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RegistrySecurity::ResetAccessRule(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "ResetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RegistrySecurity::SetAccessRule(mscorlib::System::Security::AccessControl::RegistryAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "SetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::AccessControl::AuditRuleBase RegistrySecurity::AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						int __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						int __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						int __param_flags__ = flags;
						__parameters__[5] = &__param_flags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "AuditRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuditRuleBase(__result__);
				}

				void RegistrySecurity::AddAuditRule(mscorlib::System::Security::AccessControl::RegistryAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "AddAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean RegistrySecurity::RemoveAuditRule(mscorlib::System::Security::AccessControl::RegistryAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RegistrySecurity::RemoveAuditRuleAll(mscorlib::System::Security::AccessControl::RegistryAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAuditRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RegistrySecurity::RemoveAuditRuleSpecific(mscorlib::System::Security::AccessControl::RegistryAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "RemoveAuditRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RegistrySecurity::SetAuditRule(mscorlib::System::Security::AccessControl::RegistryAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "SetAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  RegistrySecurity::get_AccessRightType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  RegistrySecurity::get_AccessRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  RegistrySecurity::get_AuditRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "RegistrySecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  RegistrySecurity::get_AreAccessRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  RegistrySecurity::get_AreAccessRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  RegistrySecurity::get_AreAuditRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  RegistrySecurity::get_AreAuditRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
