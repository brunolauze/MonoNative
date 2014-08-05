#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_NativeObjectSecurity.h>
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
				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  NativeObjectSecurity::get_AccessRightType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  NativeObjectSecurity::get_AccessRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  NativeObjectSecurity::get_AuditRuleType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  NativeObjectSecurity::get_AreAccessRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  NativeObjectSecurity::get_AreAccessRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  NativeObjectSecurity::get_AreAuditRulesCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  NativeObjectSecurity::get_AreAuditRulesProtected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
