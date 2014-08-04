#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DirectoryObjectSecurity.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
				mscorlib::System::Security::AccessControl::AccessRuleBase DirectoryObjectSecurity::AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(type).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(type);
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "DirectoryObjectSecurity", 0, NULL, "AccessRuleFactory", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AccessRuleBase(__result__);
				}

				mscorlib::System::Security::AccessControl::AuditRuleBase DirectoryObjectSecurity::AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(flags).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(flags);
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "DirectoryObjectSecurity", 0, NULL, "AuditRuleFactory", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuditRuleBase(__result__);
				}

				mscorlib::System::Security::AccessControl::AuthorizationRuleCollection DirectoryObjectSecurity::GetAccessRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(includeExplicit).name());
						__parameter_types__[1] = Global::GetType(typeid(includeInherited).name());
						__parameter_types__[2] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = reinterpret_cast<void*>(includeExplicit);
						__parameters__[1] = reinterpret_cast<void*>(includeInherited);
						__parameters__[2] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "DirectoryObjectSecurity", 0, NULL, "GetAccessRules", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuthorizationRuleCollection(__result__);
				}

				mscorlib::System::Security::AccessControl::AuthorizationRuleCollection DirectoryObjectSecurity::GetAuditRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(includeExplicit).name());
						__parameter_types__[1] = Global::GetType(typeid(includeInherited).name());
						__parameter_types__[2] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = reinterpret_cast<void*>(includeExplicit);
						__parameters__[1] = reinterpret_cast<void*>(includeInherited);
						__parameters__[2] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "DirectoryObjectSecurity", 0, NULL, "GetAuditRules", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuthorizationRuleCollection(__result__);
				}

				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  DirectoryObjectSecurity::get_AccessRightType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  DirectoryObjectSecurity::get_AccessRuleType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  DirectoryObjectSecurity::get_AuditRuleType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  DirectoryObjectSecurity::get_AreAccessRulesCanonical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  DirectoryObjectSecurity::get_AreAccessRulesProtected()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  DirectoryObjectSecurity::get_AreAuditRulesCanonical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  DirectoryObjectSecurity::get_AreAuditRulesProtected()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
