#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationSecurityManager.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrustCollection.h>
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

				Property<mscorlib::System::Security::Policy::IApplicationTrustManager , mscorlib::System::Security::Policy::ApplicationSecurityManager> mscorlib::System::Security::Policy::ApplicationSecurityManager::ApplicationTrustManager(&mscorlib::System::Security::Policy::ApplicationSecurityManager::get_ApplicationTrustManager, &mscorlib::System::Security::Policy::ApplicationSecurityManager::set_ApplicationTrustManager);
				Property<mscorlib::System::Security::Policy::ApplicationTrustCollection , mscorlib::System::Security::Policy::ApplicationSecurityManager> mscorlib::System::Security::Policy::ApplicationSecurityManager::UserApplicationTrusts(&mscorlib::System::Security::Policy::ApplicationSecurityManager::get_UserApplicationTrusts, &mscorlib::System::Security::Policy::ApplicationSecurityManager::set_UserApplicationTrusts);
				//Public Methods
				mscorlib::System::Boolean ApplicationSecurityManager::DetermineApplicationTrust(mscorlib::System::ActivationContext activationContext, mscorlib::System::Security::Policy::TrustManagerContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)activationContext;
						__parameters__[1] = (MonoObject*)context;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityManager", 0, NULL, "DetermineApplicationTrust", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Static Properties Methods
				//	Get:ApplicationTrustManager
				mscorlib::System::Security::Policy::IApplicationTrustManager  ApplicationSecurityManager::get_ApplicationTrustManager()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityManager", 0, NULL, "get_ApplicationTrustManager", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::IApplicationTrustManager(__result__);
				}

				void ApplicationSecurityManager::set_ApplicationTrustManager(mscorlib::System::Security::Policy::IApplicationTrustManager  value)
				{
					throw;
				}


				//	Get:UserApplicationTrusts
				mscorlib::System::Security::Policy::ApplicationTrustCollection  ApplicationSecurityManager::get_UserApplicationTrusts()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityManager", 0, NULL, "get_UserApplicationTrusts", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::ApplicationTrustCollection(__result__);
				}

				void ApplicationSecurityManager::set_UserApplicationTrusts(mscorlib::System::Security::Policy::ApplicationTrustCollection  value)
				{
					throw;
				}




			}
		}
	}
}
