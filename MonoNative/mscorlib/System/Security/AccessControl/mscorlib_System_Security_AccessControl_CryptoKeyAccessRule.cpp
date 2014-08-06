#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeyAccessRule.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
				//	Get:CryptoKeyRights
				mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__  CryptoKeyAccessRule::get_CryptoKeyRights() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CryptoKeyAccessRule", 0, NULL, "get_CryptoKeyRights", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:AccessControlType
				mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  CryptoKeyAccessRule::get_AccessControlType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AccessRule", 0, NULL, "get_AccessControlType", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IdentityReference
				mscorlib::System::Security::Principal::IdentityReference  CryptoKeyAccessRule::get_IdentityReference() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IdentityReference", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}


				//	Get:InheritanceFlags
				mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  CryptoKeyAccessRule::get_InheritanceFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_InheritanceFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IsInherited
				mscorlib::System::Boolean  CryptoKeyAccessRule::get_IsInherited() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_IsInherited", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:PropagationFlags
				mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  CryptoKeyAccessRule::get_PropagationFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AuthorizationRule", 0, NULL, "get_PropagationFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}



			}
		}
	}
}
