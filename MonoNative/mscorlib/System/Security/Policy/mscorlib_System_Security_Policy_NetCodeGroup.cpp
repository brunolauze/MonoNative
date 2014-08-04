#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_NetCodeGroup.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeConnectAccess.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_DictionaryEntry.h>
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
				void NetCodeGroup::AddConnectAccess(mscorlib::System::String originScheme, mscorlib::System::Security::Policy::CodeConnectAccess connectAccess)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(originScheme).name());
						__parameter_types__[1] = Global::GetType(typeid(connectAccess).name());
						__parameters__[0] = (MonoObject*)originScheme;
						__parameters__[1] = (MonoObject*)connectAccess;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "AddConnectAccess", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::Policy::CodeGroup NetCodeGroup::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Boolean NetCodeGroup::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Collections::DictionaryEntry*> NetCodeGroup::GetConnectAccessRules()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "GetConnectAccessRules", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Collections::DictionaryEntry*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Collections::DictionaryEntry (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Int32 NetCodeGroup::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Policy::PolicyStatement NetCodeGroup::Resolve(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "Resolve", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void NetCodeGroup::ResetConnectAccess()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "ResetConnectAccess", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Security::Policy::CodeGroup NetCodeGroup::ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "ResolveMatchingCodeGroups", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				//Get Set Properties Methods
				//	Get:AttributeString
				mscorlib::System::String  NetCodeGroup::get_AttributeString()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "get_AttributeString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:MergeLogic
				mscorlib::System::String  NetCodeGroup::get_MergeLogic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "get_MergeLogic", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PermissionSetName
				mscorlib::System::String  NetCodeGroup::get_PermissionSetName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "get_PermissionSetName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:PolicyStatement
				mscorlib::System::Security::Policy::PolicyStatement  NetCodeGroup::get_PolicyStatement()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_PolicyStatement", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void NetCodeGroup::set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_PolicyStatement", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Description
				mscorlib::System::String  NetCodeGroup::get_Description()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void NetCodeGroup::set_Description(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MembershipCondition
				mscorlib::System::Security::Policy::IMembershipCondition  NetCodeGroup::get_MembershipCondition()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_MembershipCondition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				void NetCodeGroup::set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_MembershipCondition", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Name
				mscorlib::System::String  NetCodeGroup::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void NetCodeGroup::set_Name(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Children
				mscorlib::System::Collections::IList  NetCodeGroup::get_Children()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "get_Children", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}

				void NetCodeGroup::set_Children(mscorlib::System::Collections::IList  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeGroup", 0, NULL, "set_Children", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


					//	Get/Set:AbsentOriginScheme
				mscorlib::System::String NetCodeGroup::get_AbsentOriginScheme()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "AbsentOriginScheme"));
				}


					//	Get/Set:AnyOtherOriginScheme
				mscorlib::System::String NetCodeGroup::get_AnyOtherOriginScheme()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Policy", "NetCodeGroup", 0, NULL, "AnyOtherOriginScheme"));
				}



			}
		}
	}
}
