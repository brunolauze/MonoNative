#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Boolean IMembershipCondition::Check(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IMembershipCondition", 0, NULL, "Check", __mscorlib_System_Security_Policy_IMembershipCondition, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Policy::IMembershipCondition IMembershipCondition::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IMembershipCondition", 0, NULL, "Copy", __mscorlib_System_Security_Policy_IMembershipCondition, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				mscorlib::System::Boolean IMembershipCondition::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IMembershipCondition", 0, NULL, "Equals", __mscorlib_System_Security_Policy_IMembershipCondition, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String IMembershipCondition::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "IMembershipCondition", 0, NULL, "ToString", __mscorlib_System_Security_Policy_IMembershipCondition, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}


			}
		}
	}
}
