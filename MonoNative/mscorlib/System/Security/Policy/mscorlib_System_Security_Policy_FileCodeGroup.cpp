#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_FileCodeGroup.h>
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
				mscorlib::System::Security::Policy::CodeGroup FileCodeGroup::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Security::Policy::PolicyStatement FileCodeGroup::Resolve(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "Resolve", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				mscorlib::System::Security::Policy::CodeGroup FileCodeGroup::ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "ResolveMatchingCodeGroups", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Boolean FileCodeGroup::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 FileCodeGroup::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:MergeLogic
				mscorlib::System::String  FileCodeGroup::get_MergeLogic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "get_MergeLogic", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:AttributeString
				mscorlib::System::String  FileCodeGroup::get_AttributeString()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "get_AttributeString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PermissionSetName
				mscorlib::System::String  FileCodeGroup::get_PermissionSetName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "FileCodeGroup", 0, NULL, "get_PermissionSetName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:PolicyStatement
				mscorlib::System::Security::Policy::PolicyStatement  FileCodeGroup::get_PolicyStatement()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PolicyStatement", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void FileCodeGroup::set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_PolicyStatement", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Description
				mscorlib::System::String  FileCodeGroup::get_Description()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileCodeGroup::set_Description(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MembershipCondition
				mscorlib::System::Security::Policy::IMembershipCondition  FileCodeGroup::get_MembershipCondition()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_MembershipCondition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				void FileCodeGroup::set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_MembershipCondition", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Name
				mscorlib::System::String  FileCodeGroup::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileCodeGroup::set_Name(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Children
				mscorlib::System::Collections::IList  FileCodeGroup::get_Children()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}

				void FileCodeGroup::set_Children(mscorlib::System::Collections::IList  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Children", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
