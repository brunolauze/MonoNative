#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSA.h>
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

				class DSAParameters;
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

				class DSACryptoServiceProvider
					: public mscorlib::System::Security::Cryptography::DSA
					, public virtual mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm
					, public virtual mscorlib::System::IDisposable
				{
				public:
					DSACryptoServiceProvider()
					: mscorlib::System::Security::Cryptography::DSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider");
					};
				
					DSACryptoServiceProvider(mscorlib::System::Security::Cryptography::CspParameters parameters)
					: mscorlib::System::Security::Cryptography::DSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = (MonoObject*)parameters;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					DSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize)
					: mscorlib::System::Security::Cryptography::DSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &dwKeySize;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 1, __parameter_types__, __parameters__);
					};
				
					DSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize, mscorlib::System::Security::Cryptography::CspParameters parameters)
					: mscorlib::System::Security::Cryptography::DSA(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSACryptoServiceProvider"))
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = &dwKeySize;
						__parameters__[1] = (MonoObject*)parameters;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 2, __parameter_types__, __parameters__);
					};
				
					DSACryptoServiceProvider(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::DSA(nativeTypeInfo)
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(NULL)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					DSACryptoServiceProvider(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::DSA(nativeObject)
					, mscorlib::System::Security::Cryptography::ICspAsymmetricAlgorithm(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~DSACryptoServiceProvider()
					{
					};
				

					DSACryptoServiceProvider & operator=(DSACryptoServiceProvider &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::Cryptography::DSAParameters  ExportParameters(mscorlib::System::Boolean includePrivateParameters) override;
					virtual void  ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters) override;
					virtual std::vector<mscorlib::System::Byte*>  CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash) override;
					std::vector<mscorlib::System::Byte*>  SignData(std::vector<mscorlib::System::Byte*> buffer);
					std::vector<mscorlib::System::Byte*>  SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count);
					std::vector<mscorlib::System::Byte*>  SignData(mscorlib::System::IO::Stream inputStream);
					std::vector<mscorlib::System::Byte*>  SignHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str);
					mscorlib::System::Boolean  VerifyData(std::vector<mscorlib::System::Byte*> rgbData, std::vector<mscorlib::System::Byte*> rgbSignature);
					mscorlib::System::Boolean  VerifyHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str, std::vector<mscorlib::System::Byte*> rgbSignature);
					virtual mscorlib::System::Boolean  VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature) override;
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
					static Property<mscorlib::System::Boolean , mscorlib::System::Security::Cryptography::DSACryptoServiceProvider> UseMachineKeyStore;

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
