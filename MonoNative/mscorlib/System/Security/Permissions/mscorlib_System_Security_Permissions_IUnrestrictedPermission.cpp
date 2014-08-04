#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IUnrestrictedPermission.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Boolean IUnrestrictedPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IUnrestrictedPermission", 0, NULL, "IsUnrestricted", __mscorlib_System_Security_Permissions_IUnrestrictedPermission, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
