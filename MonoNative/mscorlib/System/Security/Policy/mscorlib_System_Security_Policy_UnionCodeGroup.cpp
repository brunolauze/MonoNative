#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_UnionCodeGroup.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Security::Policy::CodeGroup UnionCodeGroup::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UnionCodeGroup", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Security::Policy::PolicyStatement UnionCodeGroup::Resolve(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UnionCodeGroup", 0, NULL, "Resolve", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				mscorlib::System::Security::Policy::CodeGroup UnionCodeGroup::ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UnionCodeGroup", 0, NULL, "ResolveMatchingCodeGroups", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				//Get Set Properties Methods
				//	Get:MergeLogic
				mscorlib::System::String  UnionCodeGroup::get_MergeLogic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UnionCodeGroup", 0, NULL, "get_MergeLogic", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:PolicyStatement
				mscorlib::System::Security::Policy::PolicyStatement  UnionCodeGroup::get_PolicyStatement() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PolicyStatement", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void UnionCodeGroup::set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_PolicyStatement", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Description
				mscorlib::System::String  UnionCodeGroup::get_Description() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void UnionCodeGroup::set_Description(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MembershipCondition
				mscorlib::System::Security::Policy::IMembershipCondition  UnionCodeGroup::get_MembershipCondition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_MembershipCondition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				void UnionCodeGroup::set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_MembershipCondition", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Name
				mscorlib::System::String  UnionCodeGroup::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void UnionCodeGroup::set_Name(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Children
				mscorlib::System::Collections::IList  UnionCodeGroup::get_Children() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}

				void UnionCodeGroup::set_Children(mscorlib::System::Collections::IList  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Children", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AttributeString
				mscorlib::System::String  UnionCodeGroup::get_AttributeString() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_AttributeString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PermissionSetName
				mscorlib::System::String  UnionCodeGroup::get_PermissionSetName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PermissionSetName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
