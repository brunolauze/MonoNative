#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_GenericIdentity.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:AuthenticationType
				mscorlib::System::String  GenericIdentity::get_AuthenticationType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "GenericIdentity", 0, NULL, "get_AuthenticationType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Name
				mscorlib::System::String  GenericIdentity::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "GenericIdentity", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:IsAuthenticated
				mscorlib::System::Boolean  GenericIdentity::get_IsAuthenticated() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "GenericIdentity", 0, NULL, "get_IsAuthenticated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
