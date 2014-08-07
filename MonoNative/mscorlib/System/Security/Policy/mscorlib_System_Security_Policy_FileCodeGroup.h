#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_FILECODEGROUP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_FILECODEGROUP_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeGroup.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileIOPermissionAccess.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>

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

				class PolicyStatement;
				class Evidence;
				class PolicyLevel;
				

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

				class FileCodeGroup
					: public mscorlib::System::Security::Policy::CodeGroup
				{
				public:
					FileCodeGroup(mscorlib::System::Security::Policy::IMembershipCondition membershipCondition, mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access)
					: mscorlib::System::Security::Policy::CodeGroup(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.FileCodeGroup"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Policy", "IMembershipCondition");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Permissions", "FileIOPermissionAccess");
						__parameters__[0] = (MonoObject*)membershipCondition;
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[1] = &__param_access__;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "FileCodeGroup", 2, __parameter_types__, __parameters__);
					};
				
					FileCodeGroup(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::CodeGroup(nativeTypeInfo)
					{
					};
				
					FileCodeGroup(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::CodeGroup(nativeObject)
					{
					};
				
					~FileCodeGroup()
					{
					};
				

					FileCodeGroup & operator=(FileCodeGroup &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(FileCodeGroup &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Policy::CodeGroup  Copy() override;
					virtual mscorlib::System::Security::Policy::PolicyStatement  Resolve(mscorlib::System::Security::Policy::Evidence evidence) override;
					virtual mscorlib::System::Security::Policy::CodeGroup  ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence) override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_MergeLogic)) mscorlib::System::String  MergeLogic;
					__declspec(property(get=get_AttributeString)) mscorlib::System::String  AttributeString;
					__declspec(property(get=get_PermissionSetName)) mscorlib::System::String  PermissionSetName;
					__declspec(property(get=get_PolicyStatement, put=set_PolicyStatement)) mscorlib::System::Security::Policy::PolicyStatement  PolicyStatement;
					__declspec(property(get=get_Description, put=set_Description)) mscorlib::System::String  Description;
					__declspec(property(get=get_MembershipCondition, put=set_MembershipCondition)) mscorlib::System::Security::Policy::IMembershipCondition  MembershipCondition;
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Children, put=set_Children)) mscorlib::System::Collections::IList  Children;

					//Get Set Properties Methods
					//	Get:MergeLogic
					mscorlib::System::String  get_MergeLogic() const;

					//	Get:AttributeString
					mscorlib::System::String  get_AttributeString() const;

					//	Get:PermissionSetName
					mscorlib::System::String  get_PermissionSetName() const;

					//	Get/Set:PolicyStatement
					mscorlib::System::Security::Policy::PolicyStatement  get_PolicyStatement() const;
					void set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value);

					//	Get/Set:Description
					mscorlib::System::String  get_Description() const;
					void set_Description(mscorlib::System::String  value);

					//	Get/Set:MembershipCondition
					mscorlib::System::Security::Policy::IMembershipCondition  get_MembershipCondition() const;
					void set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value);

					//	Get/Set:Name
					mscorlib::System::String  get_Name() const;
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:Children
					mscorlib::System::Collections::IList  get_Children() const;
					void set_Children(mscorlib::System::Collections::IList  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
