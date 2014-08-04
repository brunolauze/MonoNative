#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IMEMBERSHIPCONDITION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_IMEMBERSHIPCONDITION_H

#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class String;
		

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

				class IMembershipCondition
					: public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::ISecurityPolicyEncodable
				{
				public:
					IMembershipCondition(MonoObject *nativeObject)
					: mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::ISecurityPolicyEncodable(nativeObject)
					{
					};
				
					~IMembershipCondition()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Security_Policy_IMembershipCondition, put=set___mscorlib_System_Security_Policy_IMembershipCondition)) MonoObject *__mscorlib_System_Security_Policy_IMembershipCondition;
					MonoObject* get___mscorlib_System_Security_Policy_IMembershipCondition()
					{
						return IMembershipCondition::__mscorlib_System_Security_ISecurityEncodable;
					}
					void set___mscorlib_System_Security_Policy_IMembershipCondition(MonoObject *value)
					{
						IMembershipCondition::__mscorlib_System_Security_ISecurityEncodable = value;
					}
					IMembershipCondition & operator=(IMembershipCondition &value) { __mscorlib_System_Security_Policy_IMembershipCondition = value.__mscorlib_System_Security_Policy_IMembershipCondition; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Policy_IMembershipCondition; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Policy_IMembershipCondition = value; return value; };


					virtual mscorlib::System::Boolean  Check(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Security::Policy::IMembershipCondition  Copy();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj);
					virtual mscorlib::System::String  ToString();


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
