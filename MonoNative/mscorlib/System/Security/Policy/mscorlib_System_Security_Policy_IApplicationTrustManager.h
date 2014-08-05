#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IAPPLICATIONTRUSTMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IAPPLICATIONTRUSTMANAGER_H

#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class ApplicationTrust;
				class TrustManagerContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class ActivationContext;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class IApplicationTrustManager
					: public virtual mscorlib::System::Security::ISecurityEncodable
				{
				public:
					IApplicationTrustManager(MonoObject *nativeObject)
					: mscorlib::System::Security::ISecurityEncodable(nativeObject)
					{
					};
				
					~IApplicationTrustManager()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Security_Policy_IApplicationTrustManager, put=set___mscorlib_System_Security_Policy_IApplicationTrustManager)) MonoObject *__mscorlib_System_Security_Policy_IApplicationTrustManager;
					MonoObject* get___mscorlib_System_Security_Policy_IApplicationTrustManager() const
					{
						return IApplicationTrustManager::__mscorlib_System_Security_ISecurityEncodable;
					}
					void set___mscorlib_System_Security_Policy_IApplicationTrustManager(MonoObject *value)
					{
						IApplicationTrustManager::__mscorlib_System_Security_ISecurityEncodable = value;
					}
					IApplicationTrustManager & operator=(IApplicationTrustManager &value) { __mscorlib_System_Security_Policy_IApplicationTrustManager = value.__mscorlib_System_Security_Policy_IApplicationTrustManager; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Policy_IApplicationTrustManager; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Policy_IApplicationTrustManager = value; return value; };


					virtual mscorlib::System::Security::Policy::ApplicationTrust  DetermineApplicationTrust(mscorlib::System::ActivationContext activationContext, mscorlib::System::Security::Policy::TrustManagerContext context);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
