#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_HASHMEMBERSHIPCONDITION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_HASHMEMBERSHIPCONDITION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IMembershipCondition.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityPolicyEncodable.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
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

				class HashMembershipCondition
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
					, public virtual mscorlib::System::Security::Policy::IMembershipCondition
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Security::ISecurityPolicyEncodable
				{
				public:
					HashMembershipCondition(mscorlib::System::Security::Cryptography::HashAlgorithm hashAlg, std::vector<mscorlib::System::Byte*> value)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.HashMembershipCondition"))
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "HashAlgorithm");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameters__[0] = (MonoObject*)hashAlg;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(value, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "HashMembershipCondition", 2, __parameter_types__, __parameters__);
					};
				
					HashMembershipCondition(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Security::Policy::IMembershipCondition(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Security::ISecurityPolicyEncodable(NULL)
					{
					};
				
					HashMembershipCondition(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
					, mscorlib::System::Security::Policy::IMembershipCondition(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Security::ISecurityPolicyEncodable(nativeObject)
					{
					};
				
					~HashMembershipCondition()
					{
					};
				

					HashMembershipCondition & operator=(HashMembershipCondition &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Check(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Security::Policy::IMembershipCondition  Copy();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual mscorlib::System::Security::SecurityElement  ToXml(mscorlib::System::Security::Policy::PolicyLevel level);
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e);
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level);
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_HashAlgorithm, put=set_HashAlgorithm)) mscorlib::System::Security::Cryptography::HashAlgorithm  HashAlgorithm;
					__declspec(property(get=get_HashValue, put=set_HashValue)) std::vector<mscorlib::System::Byte*>  HashValue;

					//Get Set Properties Methods
					//	Get/Set:HashAlgorithm
					mscorlib::System::Security::Cryptography::HashAlgorithm  get_HashAlgorithm() const;
					void set_HashAlgorithm(mscorlib::System::Security::Cryptography::HashAlgorithm  value);

					//	Get/Set:HashValue
					std::vector<mscorlib::System::Byte*>  get_HashValue() const;
					void set_HashValue(std::vector<mscorlib::System::Byte*>  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
