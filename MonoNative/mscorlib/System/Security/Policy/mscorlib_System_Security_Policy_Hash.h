#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_HASH_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_HASH_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace Cryptography
			{

				class HashAlgorithm;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

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

				class Hash
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				{
				public:
					Hash(mscorlib::System::Reflection::Assembly assembly)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Hash"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "Assembly");
						__parameters__[0] = (MonoObject*)assembly;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Hash", 1, __parameter_types__, __parameters__);
					};
				
					Hash(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					{
					};
				
					Hash(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					{
					};
				
					~Hash()
					{
					};
				

					Hash & operator=(Hash &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					std::vector<mscorlib::System::Byte*>  GenerateHash(mscorlib::System::Security::Cryptography::HashAlgorithm hashAlg);
					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual mscorlib::System::String  ToString() override;
					static mscorlib::System::Security::Policy::Hash  CreateMD5(std::vector<mscorlib::System::Byte*> md5);
					static mscorlib::System::Security::Policy::Hash  CreateSHA1(std::vector<mscorlib::System::Byte*> sha1);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_MD5)) std::vector<mscorlib::System::Byte*>  MD5;
					__declspec(property(get=get_SHA1)) std::vector<mscorlib::System::Byte*>  SHA1;

					//Get Set Properties Methods
					//	Get:MD5
					std::vector<mscorlib::System::Byte*>  get_MD5();

					//	Get:SHA1
					std::vector<mscorlib::System::Byte*>  get_SHA1();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
