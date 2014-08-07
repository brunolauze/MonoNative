#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_CODEGROUP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_CODEGROUP_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
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

				class CodeGroup
					: public mscorlib::System::Object
				{
				public:
					CodeGroup(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CodeGroup(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CodeGroup()
					{
					};
				

					CodeGroup & operator=(CodeGroup &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CodeGroup &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Policy::CodeGroup  Copy();
					virtual mscorlib::System::Security::Policy::PolicyStatement  Resolve(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Security::Policy::CodeGroup  ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence);
					void  AddChild(mscorlib::System::Security::Policy::CodeGroup group);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Security::Policy::CodeGroup cg, mscorlib::System::Boolean compareChildren);
					void  RemoveChild(mscorlib::System::Security::Policy::CodeGroup group);
					virtual mscorlib::System::Int32  GetHashCode() override;
					void  FromXml(mscorlib::System::Security::SecurityElement e);
					void  FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level);
					mscorlib::System::Security::SecurityElement  ToXml();
					mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_MergeLogic)) mscorlib::System::String  MergeLogic;
					__declspec(property(get=get_PolicyStatement, put=set_PolicyStatement)) mscorlib::System::Security::Policy::PolicyStatement  PolicyStatement;
					__declspec(property(get=get_Description, put=set_Description)) mscorlib::System::String  Description;
					__declspec(property(get=get_MembershipCondition, put=set_MembershipCondition)) mscorlib::System::Security::Policy::IMembershipCondition  MembershipCondition;
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Children, put=set_Children)) mscorlib::System::Collections::IList  Children;
					__declspec(property(get=get_AttributeString)) mscorlib::System::String  AttributeString;
					__declspec(property(get=get_PermissionSetName)) mscorlib::System::String  PermissionSetName;

					//Get Set Properties Methods
					//	Get:MergeLogic
					mscorlib::System::String  get_MergeLogic() const;

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

					//	Get:AttributeString
					mscorlib::System::String  get_AttributeString() const;

					//	Get:PermissionSetName
					mscorlib::System::String  get_PermissionSetName() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
