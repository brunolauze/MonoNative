#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureDeformatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
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
		namespace Security
		{
			namespace Cryptography
			{

				class RSAPKCS1SignatureDeformatter
					: public mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter
				{
				public:
					RSAPKCS1SignatureDeformatter()
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1SignatureDeformatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
					};
				
					RSAPKCS1SignatureDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1SignatureDeformatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter", 1, __parameter_types__, __parameters__);
					};
				
					RSAPKCS1SignatureDeformatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter(nativeTypeInfo)
					{
					};
				
					RSAPKCS1SignatureDeformatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter(nativeObject)
					{
					};
				
					~RSAPKCS1SignatureDeformatter()
					{
					};
				

					RSAPKCS1SignatureDeformatter & operator=(RSAPKCS1SignatureDeformatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RSAPKCS1SignatureDeformatter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  SetHashAlgorithm(mscorlib::System::String strName) override;
					virtual void  SetHashAlgorithm(const char *strName) override;
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key) override;
					virtual mscorlib::System::Boolean  VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
