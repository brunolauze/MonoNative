#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_STRONGNAMEMEMBERSHIPCONDITION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_STRONGNAMEMEMBERSHIPCONDITION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_StrongNamePublicKeyBlob.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>

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

				class StrongNameMembershipCondition
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::ISecurityPolicyEncodable
					, public virtual mscorlib::System::Security::Policy::IMembershipCondition
				{
				public:
					StrongNameMembershipCondition(mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob blob, mscorlib::System::String name, mscorlib::System::Version version)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.StrongNameMembershipCondition"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "StrongNamePublicKeyBlob");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Version");
						__parameters__[0] = (MonoObject*)blob;
						__parameters__[1] = (MonoObject*)name;
						__parameters__[2] = (MonoObject*)version;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "StrongNameMembershipCondition", 3, __parameter_types__, __parameters__);
					};
				
					StrongNameMembershipCondition(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					{
					};
				
					StrongNameMembershipCondition(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::ISecurityPolicyEncodable(nativeObject)
					, mscorlib::System::Security::Policy::IMembershipCondition(nativeObject)
					{
					};
				
					~StrongNameMembershipCondition()
					{
					};
				

					StrongNameMembershipCondition & operator=(StrongNameMembershipCondition &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Check(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Security::Policy::IMembershipCondition  Copy();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e);
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level);
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Version, put=set_Version)) mscorlib::System::Version  Version;
					__declspec(property(get=get_PublicKey, put=set_PublicKey)) mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  PublicKey;

					//Get Set Properties Methods
					//	Get/Set:Name
					mscorlib::System::String  get_Name();
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:Version
					mscorlib::System::Version  get_Version();
					void set_Version(mscorlib::System::Version  value);

					//	Get/Set:PublicKey
					mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  get_PublicKey();
					void set_PublicKey(mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
