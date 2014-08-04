#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_FIRSTMATCHCODEGROUP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_FIRSTMATCHCODEGROUP_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeGroup.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class FirstMatchCodeGroup
					: public mscorlib::System::Security::Policy::CodeGroup
				{
				public:
					FirstMatchCodeGroup(mscorlib::System::Security::Policy::IMembershipCondition membershipCondition, mscorlib::System::Security::Policy::PolicyStatement policy)
					: mscorlib::System::Security::Policy::CodeGroup(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.FirstMatchCodeGroup"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Policy", "IMembershipCondition");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Policy", "PolicyStatement");
						__parameters__[0] = (MonoObject*)membershipCondition;
						__parameters__[1] = (MonoObject*)policy;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "FirstMatchCodeGroup", 2, __parameter_types__, __parameters__);
					};
				
					FirstMatchCodeGroup(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::CodeGroup(nativeTypeInfo)
					{
					};
				
					FirstMatchCodeGroup(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::CodeGroup(nativeObject)
					{
					};
				
					~FirstMatchCodeGroup()
					{
					};
				

					FirstMatchCodeGroup & operator=(FirstMatchCodeGroup &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Policy::CodeGroup  Copy() override;
					virtual mscorlib::System::Security::Policy::PolicyStatement  Resolve(mscorlib::System::Security::Policy::Evidence evidence) override;
					virtual mscorlib::System::Security::Policy::CodeGroup  ResolveMatchingCodeGroups(mscorlib::System::Security::Policy::Evidence evidence) override;
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
					mscorlib::System::String  get_MergeLogic();

					//	Get/Set:PolicyStatement
					mscorlib::System::Security::Policy::PolicyStatement  get_PolicyStatement();
					void set_PolicyStatement(mscorlib::System::Security::Policy::PolicyStatement  value);

					//	Get/Set:Description
					mscorlib::System::String  get_Description();
					void set_Description(mscorlib::System::String  value);

					//	Get/Set:MembershipCondition
					mscorlib::System::Security::Policy::IMembershipCondition  get_MembershipCondition();
					void set_MembershipCondition(mscorlib::System::Security::Policy::IMembershipCondition  value);

					//	Get/Set:Name
					mscorlib::System::String  get_Name();
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:Children
					mscorlib::System::Collections::IList  get_Children();
					void set_Children(mscorlib::System::Collections::IList  value);

					//	Get:AttributeString
					mscorlib::System::String  get_AttributeString();

					//	Get:PermissionSetName
					mscorlib::System::String  get_PermissionSetName();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
