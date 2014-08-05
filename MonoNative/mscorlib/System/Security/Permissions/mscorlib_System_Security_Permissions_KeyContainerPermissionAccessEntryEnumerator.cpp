#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntryEnumerator.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Boolean KeyContainerPermissionAccessEntryEnumerator::MoveNext()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void KeyContainerPermissionAccessEntryEnumerator::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry  KeyContainerPermissionAccessEntryEnumerator::get_Current() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntryEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry(__result__);
				}



			}
		}
	}
}
