#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSA.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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

				class RSAParameters;
				class CspKeyContainerInfo;
				class KeySizes;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

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

				class RSACryptoServiceProvider
					: public mscorlib::System::Security::Cryptography::RSA
					, public virtual mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm
					, public virtual mscorlib::System::IDisposable
				{
				public:
					RSACryptoServiceProvider()
					: mscorlib::System::Security::Cryptography::RSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider");
					};
				
					RSACryptoServiceProvider(mscorlib::System::Security::Cryptography::CspParameters parameters)
					: mscorlib::System::Security::Cryptography::RSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = (MonoObject*)parameters;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					RSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize)
					: mscorlib::System::Security::Cryptography::RSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &dwKeySize;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					RSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize, mscorlib::System::Security::Cryptography::CspParameters parameters)
					: mscorlib::System::Security::Cryptography::RSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = &dwKeySize;
						__parameters__[1] = (MonoObject*)parameters;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 2, __parameter_types__, __parameters__);
					};
				
					RSACryptoServiceProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::RSA(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					RSACryptoServiceProvider(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::RSA(nativeObject)
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~RSACryptoServiceProvider()
					{
					};
				

					RSACryptoServiceProvider & operator=(RSACryptoServiceProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					std::vector<mscorlib::System::Byte*>  Decrypt(std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP);
					virtual std::vector<mscorlib::System::Byte*>  DecryptValue(std::vector<mscorlib::System::Byte*> rgb) override;
					std::vector<mscorlib::System::Byte*>  Encrypt(std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP);
					virtual std::vector<mscorlib::System::Byte*>  EncryptValue(std::vector<mscorlib::System::Byte*> rgb) override;
					virtual mscorlib::System::Security::Cryptography::RSAParameters  ExportParameters(mscorlib::System::Boolean includePrivateParameters) override;
					virtual void  ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters) override;
					std::vector<mscorlib::System::Byte*>  SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg);
					std::vector<mscorlib::System::Byte*>  SignData(mscorlib::System::IO::Stream inputStream, mscorlib::System::Object halg);
					std::vector<mscorlib::System::Byte*>  SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Object halg);
					std::vector<mscorlib::System::Byte*>  SignHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str);
					mscorlib::System::Boolean  VerifyData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg, std::vector<mscorlib::System::Byte*> signature);
					mscorlib::System::Boolean  VerifyHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str, std::vector<mscorlib::System::Byte*> rgbSignature);
					virtual std::vector<mscorlib::System::Byte*>  ExportCspBlob(mscorlib::System::Boolean includePrivateParameters);
					virtual void  ImportCspBlob(std::vector<mscorlib::System::Byte*> keyBlob);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_KeyExchangeAlgorithm)) mscorlib::System::String  KeyExchangeAlgorithm;
					__declspec(property(get=get_KeySize)) mscorlib::System::Int32  KeySize;
					__declspec(property(get=get_PersistKeyInCsp, put=set_PersistKeyInCsp)) mscorlib::System::Boolean  PersistKeyInCsp;
					__declspec(property(get=get_PublicOnly)) mscorlib::System::Boolean  PublicOnly;
					__declspec(property(get=get_SignatureAlgorithm)) mscorlib::System::String  SignatureAlgorithm;
					__declspec(property(get=get_CspKeyContainerInfo)) mscorlib::System::Security::Cryptography::CspKeyContainerInfo  CspKeyContainerInfo;
					__declspec(property(get=get_LegalKeySizes)) std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  LegalKeySizes;

					//Public Static Properties
					static Property<mscorlib::System::Boolean , mscorlib::System::Security::Cryptography::RSACryptoServiceProvider> UseMachineKeyStore;

					//Get Set Properties Methods
					//	Get:KeyExchangeAlgorithm
					mscorlib::System::String  get_KeyExchangeAlgorithm() const;

					//	Get:KeySize
					mscorlib::System::Int32  get_KeySize() const;

					//	Get/Set:PersistKeyInCsp
					mscorlib::System::Boolean  get_PersistKeyInCsp() const;
					void set_PersistKeyInCsp(mscorlib::System::Boolean  value);

					//	Get:PublicOnly
					mscorlib::System::Boolean  get_PublicOnly() const;

					//	Get:SignatureAlgorithm
					mscorlib::System::String  get_SignatureAlgorithm() const;

					//	Get:CspKeyContainerInfo
					mscorlib::System::Security::Cryptography::CspKeyContainerInfo  get_CspKeyContainerInfo() const;

					//	Get:LegalKeySizes
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  get_LegalKeySizes() const;

					//Get Set Static Properties Methods
					//	Get/Set:UseMachineKeyStore
					static mscorlib::System::Boolean  get_UseMachineKeyStore();
					static void set_UseMachineKeyStore(mscorlib::System::Boolean  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
