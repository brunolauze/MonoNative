#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_H

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

				class DSAParameters;
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

				class DSA
					: public mscorlib::System::Security::Cryptography::AsymmetricAlgorithm
					, public virtual mscorlib::System::IDisposable
				{
				public:
					DSA(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					DSA(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~DSA()
					{
					};
				

					DSA & operator=(DSA &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Cryptography::DSA  Create();
					static mscorlib::System::Security::Cryptography::DSA  Create(mscorlib::System::String algName);
					virtual std::vector<mscorlib::System::Byte*>  CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash);
					virtual mscorlib::System::Security::Cryptography::DSAParameters  ExportParameters(mscorlib::System::Boolean includePrivateParameters);
					virtual void  FromXmlString(mscorlib::System::String xmlString) override;
					virtual void  ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters);
					virtual mscorlib::System::String  ToXmlString(mscorlib::System::Boolean includePrivateParameters) override;
					virtual mscorlib::System::Boolean  VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature);
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
