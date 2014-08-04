#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IIdentityPermissionFactory.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Security::IPermission IIdentityPermissionFactory::CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IIdentityPermissionFactory", 0, NULL, "CreateIdentityPermission", __mscorlib_System_Security_Policy_IIdentityPermissionFactory, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}


			}
		}
	}
}
