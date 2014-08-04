#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYLEVEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYLEVEL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PolicyLevelType.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class CodeGroup;
				class StrongName;
				class StrongNameMembershipCondition;
				class PolicyStatement;
				class Evidence;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class NamedPermissionSet;
			class PermissionSet;
			class SecurityElement;
			

		}
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

				class PolicyLevel
					: public mscorlib::System::Object
				{
				public:
					PolicyLevel(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					PolicyLevel(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~PolicyLevel()
					{
					};
				

					PolicyLevel & operator=(PolicyLevel &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddFullTrustAssembly(mscorlib::System::Security::Policy::StrongName sn);
					void  AddFullTrustAssembly(mscorlib::System::Security::Policy::StrongNameMembershipCondition snMC);
					void  AddNamedPermissionSet(mscorlib::System::Security::NamedPermissionSet permSet);
					mscorlib::System::Security::NamedPermissionSet  ChangeNamedPermissionSet(mscorlib::System::String name, mscorlib::System::Security::PermissionSet pSet);
					static mscorlib::System::Security::Policy::PolicyLevel  CreateAppDomainLevel();
					void  FromXml(mscorlib::System::Security::SecurityElement e);
					mscorlib::System::Security::NamedPermissionSet  GetNamedPermissionSet(mscorlib::System::String name);
					void  Recover();
					void  RemoveFullTrustAssembly(mscorlib::System::Security::Policy::StrongName sn);
					void  RemoveFullTrustAssembly(mscorlib::System::Security::Policy::StrongNameMembershipCondition snMC);
					mscorlib::System::Security::NamedPermissionSet  RemoveNamedPermissionSet(mscorlib::System::Security::NamedPermissionSet permSet);
					mscorlib::System::Security::NamedPermissionSet  RemoveNamedPermissionSet(mscorlib::System::String name);
					void  Reset();
					mscorlib::System::Security::Policy::PolicyStatement  Resolve(mscorlib::System::Security::Policy::Evidence evidence);
					mscorlib::System::Security::Policy::CodeGroup  ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence);
					mscorlib::System::Security::SecurityElement  ToXml();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_FullTrustAssemblies)) mscorlib::System::Collections::IList  FullTrustAssemblies;
					__declspec(property(get=get_Label)) mscorlib::System::String  Label;
					__declspec(property(get=get_NamedPermissionSets)) mscorlib::System::Collections::IList  NamedPermissionSets;
					__declspec(property(get=get_RootCodeGroup, put=set_RootCodeGroup)) mscorlib::System::Security::Policy::CodeGroup  RootCodeGroup;
					__declspec(property(get=get_StoreLocation)) mscorlib::System::String  StoreLocation;
					__declspec(property(get=get_Type)) mscorlib::System::Security::PolicyLevelType::__ENUM__  Type;

					//Get Set Properties Methods
					//	Get:FullTrustAssemblies
					mscorlib::System::Collections::IList  get_FullTrustAssemblies();

					//	Get:Label
					mscorlib::System::String  get_Label();

					//	Get:NamedPermissionSets
					mscorlib::System::Collections::IList  get_NamedPermissionSets();

					//	Get/Set:RootCodeGroup
					mscorlib::System::Security::Policy::CodeGroup  get_RootCodeGroup();
					void set_RootCodeGroup(mscorlib::System::Security::Policy::CodeGroup  value);

					//	Get:StoreLocation
					mscorlib::System::String  get_StoreLocation();

					//	Get:Type
					mscorlib::System::Security::PolicyLevelType::__ENUM__  get_Type();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
