#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYRULESATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYRULESATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityRuleSet.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityRulesAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				SecurityRulesAttribute(mscorlib::System::Security::SecurityRuleSet::__ENUM__ ruleSet)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.SecurityRulesAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "SecurityRuleSet");
					mscorlib::System::Int32 __param_ruleSet__ = ruleSet;
					__parameters__[0] = &__param_ruleSet__;
					__native_object__ = Global::New("mscorlib", "System.Security", "SecurityRulesAttribute", 1, __parameter_types__, __parameters__);
				};
			
				SecurityRulesAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				SecurityRulesAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~SecurityRulesAttribute()
				{
				};
			

				SecurityRulesAttribute & operator=(SecurityRulesAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_RuleSet, put=set_RuleSet)) mscorlib::System::Security::SecurityRuleSet::__ENUM__  RuleSet;
				__declspec(property(get=get_SkipVerificationInFullTrust, put=set_SkipVerificationInFullTrust)) mscorlib::System::Boolean  SkipVerificationInFullTrust;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get/Set:RuleSet
				mscorlib::System::Security::SecurityRuleSet::__ENUM__  get_RuleSet() const;
				void set_RuleSet(mscorlib::System::Security::SecurityRuleSet::__ENUM__  value);

				//	Get/Set:SkipVerificationInFullTrust
				mscorlib::System::Boolean  get_SkipVerificationInFullTrust() const;
				void set_SkipVerificationInFullTrust(mscorlib::System::Boolean  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
