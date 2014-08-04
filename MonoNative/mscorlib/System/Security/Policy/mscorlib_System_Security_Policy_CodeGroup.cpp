#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeGroup.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
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
				mscorlib::System::Security::Policy::CodeGroup CodeGroup::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Security::Policy::PolicyStatement CodeGroup::Resolve(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "Resolve", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				mscorlib::System::Security::Policy::CodeGroup CodeGroup::ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "ResolveMatchingCodeGroups", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				void CodeGroup::AddChild(mscorlib::System::Security::Policy::CodeGroup group)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(group).name());
						__parameters__[0] = (MonoObject*)group;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "AddChild", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean CodeGroup::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean CodeGroup::Equals(mscorlib::System::Security::Policy::CodeGroup cg, mscorlib::System::Boolean compareChildren)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(cg).name());
						__parameter_types__[1] = Global::GetType(typeid(compareChildren).name());
						__parameters__[0] = (MonoObject*)cg;
						__parameters__[1] = reinterpret_cast<void*>(compareChildren);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void CodeGroup::RemoveChild(mscorlib::System::Security::Policy::CodeGroup group)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(group).name());
						__parameters__[0] = (MonoObject*)group;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "RemoveChild", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 CodeGroup::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void CodeGroup::FromXml(mscorlib::System::Security::SecurityElement e)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameters__[0] = (MonoObject*)e;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CodeGroup::FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameter_types__[1] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)e;
						__parameters__[1] = (MonoObject*)level;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "FromXml", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement CodeGroup::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::SecurityElement CodeGroup::ToXml(mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)level;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "ToXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get:MergeLogic
				mscorlib::System::String  CodeGroup::get_MergeLogic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_MergeLogic", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:PolicyStatement
				mscorlib::System::Security::Policy::PolicyStatement  CodeGroup::get_PolicyStatement()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PolicyStatement", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void CodeGroup::set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_PolicyStatement", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Description
				mscorlib::System::String  CodeGroup::get_Description()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void CodeGroup::set_Description(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MembershipCondition
				mscorlib::System::Security::Policy::IMembershipCondition  CodeGroup::get_MembershipCondition()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_MembershipCondition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				void CodeGroup::set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_MembershipCondition", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Name
				mscorlib::System::String  CodeGroup::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void CodeGroup::set_Name(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Children
				mscorlib::System::Collections::IList  CodeGroup::get_Children()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}

				void CodeGroup::set_Children(mscorlib::System::Collections::IList  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Children", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AttributeString
				mscorlib::System::String  CodeGroup::get_AttributeString()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_AttributeString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PermissionSetName
				mscorlib::System::String  CodeGroup::get_PermissionSetName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PermissionSetName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
