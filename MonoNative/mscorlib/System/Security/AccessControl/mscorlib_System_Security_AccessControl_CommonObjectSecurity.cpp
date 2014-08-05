#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonObjectSecurity.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
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
				mscorlib::System::Security::AccessControl::AuthorizationRuleCollection CommonObjectSecurity::GetAccessRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(includeExplicit).name());
						__parameter_types__[1] = Global::GetType(typeid(includeInherited).name());
						__parameter_types__[2] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = reinterpret_cast<void*>(includeExplicit);
						__parameters__[1] = reinterpret_cast<void*>(includeInherited);
						__parameters__[2] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonObjectSecurity", 0, NULL, "GetAccessRules", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuthorizationRuleCollection(__result__);
				}

				mscorlib::System::Security::AccessControl::AuthorizationRuleCollection CommonObjectSecurity::GetAuditRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(includeExplicit).name());
						__parameter_types__[1] = Global::GetType(typeid(includeInherited).name());
						__parameter_types__[2] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = reinterpret_cast<void*>(includeExplicit);
						__parameters__[1] = reinterpret_cast<void*>(includeInherited);
						__parameters__[2] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonObjectSecurity", 0, NULL, "GetAuditRules", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuthorizationRuleCollection(__result__);
				}

				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  CommonObjectSecurity::get_AccessRightType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  CommonObjectSecurity::get_AccessRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  CommonObjectSecurity::get_AuditRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  CommonObjectSecurity::get_AreAccessRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  CommonObjectSecurity::get_AreAccessRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  CommonObjectSecurity::get_AreAuditRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  CommonObjectSecurity::get_AreAuditRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
