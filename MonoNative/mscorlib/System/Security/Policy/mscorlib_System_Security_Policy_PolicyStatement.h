#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYSTATEMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYSTATEMENT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatementAttribute.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>

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
			namespace Policy
			{

				class PolicyStatement
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::ISecurityPolicyEncodable
				{
				public:
					PolicyStatement(mscorlib::System::Security::PermissionSet permSet)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.PolicyStatement"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						__parameters__[0] = (MonoObject*)permSet;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "PolicyStatement", 1, __parameter_types__, __parameters__);
					};
				
					PolicyStatement(mscorlib::System::Security::PermissionSet permSet, mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__ attributes)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.PolicyStatement"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Policy", "PolicyStatementAttribute");
						__parameters__[0] = (MonoObject*)permSet;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "PolicyStatement", 2, __parameter_types__, __parameters__);
					};
				
					PolicyStatement(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
					};
				
					PolicyStatement(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::ISecurityPolicyEncodable(nativeObject)
					{
					};
				
					~PolicyStatement()
					{
					};
				

					PolicyStatement & operator=(PolicyStatement &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Security::Policy::PolicyStatement  Copy();
					virtual void  FromXml(mscorlib::System::Security::SecurityElement et);
					virtual void  FromXml(mscorlib::System::Security::SecurityElement et, mscorlib::System::Security::Policy::PolicyLevel level);
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_PermissionSet, put=set_PermissionSet)) mscorlib::System::Security::PermissionSet  PermissionSet;
					__declspec(property(get=get_Attributes, put=set_Attributes)) mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__  Attributes;
					__declspec(property(get=get_AttributeString)) mscorlib::System::String  AttributeString;

					//Get Set Properties Methods
					//	Get/Set:PermissionSet
					mscorlib::System::Security::PermissionSet  get_PermissionSet() const;
					void set_PermissionSet(mscorlib::System::Security::PermissionSet  value);

					//	Get/Set:Attributes
					mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__  get_Attributes() const;
					void set_Attributes(mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__  value);

					//	Get:AttributeString
					mscorlib::System::String  get_AttributeString() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
