#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Get Set Properties Methods
				//	Get:AuthenticationType
				mscorlib::System::String  IIdentity::get_AuthenticationType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IIdentity", 0, NULL, "get_AuthenticationType", __mscorlib_System_Security_Principal_IIdentity, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:IsAuthenticated
				mscorlib::System::Boolean  IIdentity::get_IsAuthenticated()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IIdentity", 0, NULL, "get_IsAuthenticated", __mscorlib_System_Security_Principal_IIdentity, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  IIdentity::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IIdentity", 0, NULL, "get_Name", __mscorlib_System_Security_Principal_IIdentity, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
