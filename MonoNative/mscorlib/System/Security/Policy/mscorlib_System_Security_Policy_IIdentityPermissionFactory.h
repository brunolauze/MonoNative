#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IIDENTITYPERMISSIONFACTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IIDENTITYPERMISSIONFACTORY_H

#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class Evidence;
				

			}
		}
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

				class IIdentityPermissionFactory
				{
				public:
					IIdentityPermissionFactory(MonoObject *nativeObject)
					{
						__mscorlib_System_Security_Policy_IIdentityPermissionFactory = nativeObject;
					};
				
					~IIdentityPermissionFactory()
					{
					};
				

					IIdentityPermissionFactory & operator=(IIdentityPermissionFactory &value) { __mscorlib_System_Security_Policy_IIdentityPermissionFactory = value.__mscorlib_System_Security_Policy_IIdentityPermissionFactory; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Policy_IIdentityPermissionFactory; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Policy_IIdentityPermissionFactory = value; return value; };


					virtual mscorlib::System::Security::IPermission  CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence);


				
				protected:
					MonoObject *__mscorlib_System_Security_Policy_IIdentityPermissionFactory;
				
				private:
				
				};

			}
		}
	}
}
#endif
