#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeGroup.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongName.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongNameMembershipCondition.h>
#include <mscorlib/System/Security/mscorlib_System_Security_NamedPermissionSet.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
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
				void PolicyLevel::AddFullTrustAssembly(mscorlib::System::Security::Policy::StrongName sn)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sn).name());
						__parameters__[0] = (MonoObject*)sn;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "AddFullTrustAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PolicyLevel::AddFullTrustAssembly(mscorlib::System::Security::Policy::StrongNameMembershipCondition snMC)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(snMC).name());
						__parameters__[0] = (MonoObject*)snMC;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "AddFullTrustAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PolicyLevel::AddNamedPermissionSet(mscorlib::System::Security::NamedPermissionSet permSet)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(permSet).name());
						__parameters__[0] = (MonoObject*)permSet;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "AddNamedPermissionSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::NamedPermissionSet PolicyLevel::ChangeNamedPermissionSet(mscorlib::System::String name, mscorlib::System::Security::PermissionSet pSet)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(pSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)pSet;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "ChangeNamedPermissionSet", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::NamedPermissionSet(__result__);
				}

				mscorlib::System::Security::Policy::PolicyLevel PolicyLevel::CreateAppDomainLevel()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "CreateAppDomainLevel", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::PolicyLevel(__result__);
				}

				void PolicyLevel::FromXml(mscorlib::System::Security::SecurityElement e)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameters__[0] = (MonoObject*)e;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::NamedPermissionSet PolicyLevel::GetNamedPermissionSet(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "GetNamedPermissionSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::NamedPermissionSet(__result__);
				}

				void PolicyLevel::Recover()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "Recover", __native_object__, 0, NULL, NULL, NULL);
				}

				void PolicyLevel::RemoveFullTrustAssembly(mscorlib::System::Security::Policy::StrongName sn)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sn).name());
						__parameters__[0] = (MonoObject*)sn;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "RemoveFullTrustAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PolicyLevel::RemoveFullTrustAssembly(mscorlib::System::Security::Policy::StrongNameMembershipCondition snMC)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(snMC).name());
						__parameters__[0] = (MonoObject*)snMC;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "RemoveFullTrustAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::NamedPermissionSet PolicyLevel::RemoveNamedPermissionSet(mscorlib::System::Security::NamedPermissionSet permSet)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(permSet).name());
						__parameters__[0] = (MonoObject*)permSet;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "RemoveNamedPermissionSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::NamedPermissionSet(__result__);
				}

				mscorlib::System::Security::NamedPermissionSet PolicyLevel::RemoveNamedPermissionSet(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "RemoveNamedPermissionSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::NamedPermissionSet(__result__);
				}

				void PolicyLevel::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Security::Policy::PolicyStatement PolicyLevel::Resolve(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "Resolve", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				mscorlib::System::Security::Policy::CodeGroup PolicyLevel::ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "ResolveMatchingCodeGroups", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				mscorlib::System::Security::SecurityElement PolicyLevel::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get:FullTrustAssemblies
				mscorlib::System::Collections::IList  PolicyLevel::get_FullTrustAssemblies()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_FullTrustAssemblies", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}


				//	Get:Label
				mscorlib::System::String  PolicyLevel::get_Label()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_Label", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:NamedPermissionSets
				mscorlib::System::Collections::IList  PolicyLevel::get_NamedPermissionSets()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_NamedPermissionSets", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IList(__result__);
				}


				//	Get/Set:RootCodeGroup
				mscorlib::System::Security::Policy::CodeGroup  PolicyLevel::get_RootCodeGroup()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_RootCodeGroup", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::CodeGroup(__result__);
				}

				void PolicyLevel::set_RootCodeGroup(mscorlib::System::Security::Policy::CodeGroup  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "set_RootCodeGroup", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:StoreLocation
				mscorlib::System::String  PolicyLevel::get_StoreLocation()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_StoreLocation", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Type
				mscorlib::System::Security::PolicyLevelType::__ENUM__  PolicyLevel::get_Type()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyLevel", 0, NULL, "get_Type", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::PolicyLevelType::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
