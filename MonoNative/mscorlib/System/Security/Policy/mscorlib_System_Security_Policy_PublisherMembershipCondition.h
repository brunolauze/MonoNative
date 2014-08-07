#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_PUBLISHERMEMBERSHIPCONDITION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_PUBLISHERMEMBERSHIPCONDITION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509Certificate.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>

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

				class PublisherMembershipCondition
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::Policy::IMembershipCondition
					, public virtual mscorlib::System::Security::ISecurityPolicyEncodable
				{
				public:
					PublisherMembershipCondition(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate certificate)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.PublisherMembershipCondition"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate");
						__parameters__[0] = (MonoObject*)certificate;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 1, __parameter_types__, __parameters__);
					};
				
					PublisherMembershipCondition(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
					};
				
					PublisherMembershipCondition(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::Policy::IMembershipCondition(nativeObject)
					, mscorlib::System::Security::ISecurityPolicyEncodable(nativeObject)
					{
					};
				
					~PublisherMembershipCondition()
					{
					};
				

					PublisherMembershipCondition & operator=(PublisherMembershipCondition &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(PublisherMembershipCondition &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Check(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Security::Policy::IMembershipCondition  Copy();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e);
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level);
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Certificate, put=set_Certificate)) mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  Certificate;

					//Get Set Properties Methods
					//	Get/Set:Certificate
					mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  get_Certificate() const;
					void set_Certificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
