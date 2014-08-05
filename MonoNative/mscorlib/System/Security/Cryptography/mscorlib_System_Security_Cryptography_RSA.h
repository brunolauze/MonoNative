#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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

				class RSAParameters;
				class KeySizes;
				

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

				class RSA
					: public mscorlib::System::Security::Cryptography::AsymmetricAlgorithm
					, public virtual mscorlib::System::IDisposable
				{
				public:
					RSA(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					RSA(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~RSA()
					{
					};
				

					RSA & operator=(RSA &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::RSA  Create();
					static mscorlib::System::Security::Cryptography::RSA  Create(mscorlib::System::String algName);
					virtual std::vector<mscorlib::System::Byte*>  EncryptValue(std::vector<mscorlib::System::Byte*> rgb);
					virtual std::vector<mscorlib::System::Byte*>  DecryptValue(std::vector<mscorlib::System::Byte*> rgb);
					virtual mscorlib::System::Security::Cryptography::RSAParameters  ExportParameters(mscorlib::System::Boolean includePrivateParameters);
					virtual void  ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters);
					virtual void  FromXmlString(mscorlib::System::String xmlString) override;
					virtual mscorlib::System::String  ToXmlString(mscorlib::System::Boolean includePrivateParameters) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_KeyExchangeAlgorithm)) mscorlib::System::String  KeyExchangeAlgorithm;
					__declspec(property(get=get_KeySize, put=set_KeySize)) mscorlib::System::Int32  KeySize;
					__declspec(property(get=get_LegalKeySizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalKeySizes;
					__declspec(property(get=get_SignatureAlgorithm)) mscorlib::System::String  SignatureAlgorithm;

					//Get Set Properties Methods
					//	Get:KeyExchangeAlgorithm
					mscorlib::System::String  get_KeyExchangeAlgorithm() const;

					//	Get/Set:KeySize
					mscorlib::System::Int32  get_KeySize() const;
					void set_KeySize(mscorlib::System::Int32  value);

					//	Get:LegalKeySizes
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  get_LegalKeySizes() const;

					//	Get:SignatureAlgorithm
					mscorlib::System::String  get_SignatureAlgorithm() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
