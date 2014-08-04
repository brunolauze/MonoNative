#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IApplicationTrustManager.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_TrustManagerContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Security::Policy::ApplicationTrust IApplicationTrustManager::DetermineApplicationTrust(mscorlib::System::ActivationContext activationContext, mscorlib::System::Security::Policy::TrustManagerContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)activationContext;
						__parameters__[1] = (MonoObject*)context;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IApplicationTrustManager", 0, NULL, "DetermineApplicationTrust", __mscorlib_System_Security_Policy_IApplicationTrustManager, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
				}


			}
		}
	}
}
