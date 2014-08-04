#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectAuditRule.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
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
				//	Get:InheritedObjectType
				mscorlib::System::Guid  ObjectAuditRule::get_InheritedObjectType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAuditRule", 0, NULL, "get_InheritedObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:ObjectFlags
				mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__  ObjectAuditRule::get_ObjectFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAuditRule", 0, NULL, "get_ObjectFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ObjectType
				mscorlib::System::Guid  ObjectAuditRule::get_ObjectType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectAuditRule", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:AuditFlags
				mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  ObjectAuditRule::get_AuditFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuditRule", 0, NULL, "get_AuditFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IdentityReference
				mscorlib::System::Security::Principal::IdentityReference  ObjectAuditRule::get_IdentityReference()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IdentityReference", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  ObjectAuditRule::get_InheritanceFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  ObjectAuditRule::get_IsInherited()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  ObjectAuditRule::get_PropagationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
