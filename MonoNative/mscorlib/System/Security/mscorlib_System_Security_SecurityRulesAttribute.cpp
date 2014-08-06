#include <mscorlib/System/Security/mscorlib_System_Security_SecurityRulesAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:RuleSet
			mscorlib::System::Security::SecurityRuleSet::__ENUM__  SecurityRulesAttribute::get_RuleSet() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityRulesAttribute", 0, NULL, "get_RuleSet", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Security::SecurityRuleSet::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			void SecurityRulesAttribute::set_RuleSet(mscorlib::System::Security::SecurityRuleSet::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				mscorlib::System::Int32 __param_value__ = value;
				__parameters__[0] = &__param_value__;
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityRulesAttribute", 0, NULL, "set_RuleSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SkipVerificationInFullTrust
			mscorlib::System::Boolean  SecurityRulesAttribute::get_SkipVerificationInFullTrust() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityRulesAttribute", 0, NULL, "get_SkipVerificationInFullTrust", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SecurityRulesAttribute::set_SkipVerificationInFullTrust(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityRulesAttribute", 0, NULL, "set_SkipVerificationInFullTrust", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  SecurityRulesAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
