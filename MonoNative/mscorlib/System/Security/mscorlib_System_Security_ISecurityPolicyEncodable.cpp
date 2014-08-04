#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void ISecurityPolicyEncodable::FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(e).name());
					__parameter_types__[1] = Global::GetType(typeid(level).name());
					__parameters__[0] = (MonoObject*)e;
					__parameters__[1] = (MonoObject*)level;
					Global::InvokeMethod("mscorlib", "System.Security", "ISecurityPolicyEncodable", 0, NULL, "FromXml", __mscorlib_System_Security_ISecurityPolicyEncodable, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::SecurityElement ISecurityPolicyEncodable::ToXml(mscorlib::System::Security::Policy::PolicyLevel level)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(level).name());
					__parameters__[0] = (MonoObject*)level;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "ISecurityPolicyEncodable", 0, NULL, "ToXml", __mscorlib_System_Security_ISecurityPolicyEncodable, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}


		}
	}
}
