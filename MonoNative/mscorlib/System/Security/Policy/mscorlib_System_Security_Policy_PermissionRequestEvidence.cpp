#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PermissionRequestEvidence.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Security::Policy::PermissionRequestEvidence PermissionRequestEvidence::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::PermissionRequestEvidence(__result__);
				}

				mscorlib::System::String PermissionRequestEvidence::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:DeniedPermissions
				mscorlib::System::Security::PermissionSet  PermissionRequestEvidence::get_DeniedPermissions()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 0, NULL, "get_DeniedPermissions", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}


				//	Get:OptionalPermissions
				mscorlib::System::Security::PermissionSet  PermissionRequestEvidence::get_OptionalPermissions()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 0, NULL, "get_OptionalPermissions", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}


				//	Get:RequestedPermissions
				mscorlib::System::Security::PermissionSet  PermissionRequestEvidence::get_RequestedPermissions()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 0, NULL, "get_RequestedPermissions", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}



			}
		}
	}
}
