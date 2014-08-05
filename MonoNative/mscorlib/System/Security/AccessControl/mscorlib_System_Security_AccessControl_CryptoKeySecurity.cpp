#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeySecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeyAccessRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeyAuditRule.h>
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
				mscorlib::System::Security::AccessControl::AccessRuleBase CryptoKeySecurity::AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
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
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(type);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "AccessRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AccessRuleBase(__result__);
				}

				void CryptoKeySecurity::AddAccessRule(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "AddAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean CryptoKeySecurity::RemoveAccessRule(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void CryptoKeySecurity::RemoveAccessRuleAll(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAccessRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CryptoKeySecurity::RemoveAccessRuleSpecific(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAccessRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CryptoKeySecurity::ResetAccessRule(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "ResetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CryptoKeySecurity::SetAccessRule(mscorlib::System::Security::AccessControl::CryptoKeyAccessRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "SetAccessRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::AccessControl::AuditRuleBase CryptoKeySecurity::AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
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
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(flags);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "AuditRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuditRuleBase(__result__);
				}

				void CryptoKeySecurity::AddAuditRule(mscorlib::System::Security::AccessControl::CryptoKeyAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "AddAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean CryptoKeySecurity::RemoveAuditRule(mscorlib::System::Security::AccessControl::CryptoKeyAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void CryptoKeySecurity::RemoveAuditRuleAll(mscorlib::System::Security::AccessControl::CryptoKeyAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAuditRuleAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CryptoKeySecurity::RemoveAuditRuleSpecific(mscorlib::System::Security::AccessControl::CryptoKeyAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "RemoveAuditRuleSpecific", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CryptoKeySecurity::SetAuditRule(mscorlib::System::Security::AccessControl::CryptoKeyAuditRule rule)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rule).name());
						__parameters__[0] = (MonoObject*)rule;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "SetAuditRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  CryptoKeySecurity::get_AccessRightType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  CryptoKeySecurity::get_AccessRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  CryptoKeySecurity::get_AuditRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  CryptoKeySecurity::get_AreAccessRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  CryptoKeySecurity::get_AreAccessRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  CryptoKeySecurity::get_AreAuditRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  CryptoKeySecurity::get_AreAuditRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
