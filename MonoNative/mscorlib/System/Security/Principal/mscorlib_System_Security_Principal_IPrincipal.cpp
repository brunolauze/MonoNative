#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				mscorlib::System::Boolean IPrincipal::IsInRole(mscorlib::System::String role)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(role).name());
						__parameters__[0] = (MonoObject*)role;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IPrincipal", 0, NULL, "IsInRole", __mscorlib_System_Security_Principal_IPrincipal, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Identity
				mscorlib::System::Security::Principal::IIdentity  IPrincipal::get_Identity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "IPrincipal", 0, NULL, "get_Identity", __mscorlib_System_Security_Principal_IPrincipal, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IIdentity(__result__);
				}



			}
		}
	}
}
