#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
				//	Get:AccessControlType
				mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  AccessRuleBase::get_AccessControlType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AccessRule", 0, NULL, "get_AccessControlType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IdentityReference
				mscorlib::System::Security::Principal::IdentityReference  AccessRuleBase::get_IdentityReference()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IdentityReference", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  AccessRuleBase::get_InheritanceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  AccessRuleBase::get_IsInherited()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  AccessRuleBase::get_PropagationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
