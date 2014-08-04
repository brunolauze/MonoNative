#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISECURITYPOLICYENCODABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISECURITYPOLICYENCODABLE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityElement;
			

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

				class PolicyLevel;
				

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

			class ISecurityPolicyEncodable
			{
			public:
				ISecurityPolicyEncodable(MonoObject *nativeObject)
				{
					__mscorlib_System_Security_ISecurityPolicyEncodable = nativeObject;
				};
			
				~ISecurityPolicyEncodable()
				{
				};
			

				ISecurityPolicyEncodable & operator=(ISecurityPolicyEncodable &value) { __mscorlib_System_Security_ISecurityPolicyEncodable = value.__mscorlib_System_Security_ISecurityPolicyEncodable; return value; };
				operator MonoObject*() { return __mscorlib_System_Security_ISecurityPolicyEncodable; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_ISecurityPolicyEncodable = value; return value; };


				virtual void  FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level);
				virtual mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);


			
			protected:
				MonoObject *__mscorlib_System_Security_ISecurityPolicyEncodable;
			
			private:
			
			};

		}
	}
}
#endif
