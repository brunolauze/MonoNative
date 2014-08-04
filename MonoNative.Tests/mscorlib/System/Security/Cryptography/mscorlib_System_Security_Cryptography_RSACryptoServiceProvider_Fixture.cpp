// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSACryptoServiceProvider
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSACryptoServiceProvider


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSACryptoServiceProvider.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAParameters.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspKeyContainerInfo.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Constructors Tests
				
				//RSACryptoServiceProvider()
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSACryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RSACryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSACryptoServiceProvider(mscorlib::System::Security::Cryptography::CspParameters parameters)
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSACryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RSACryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize)
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Cryptography::RSACryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RSACryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSACryptoServiceProvider(mscorlib::System::Int32 dwKeySize, mscorlib::System::Security::Cryptography::CspParameters parameters)
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,Constructor_4)
				{
					
					mscorlib::System::Security::Cryptography::RSACryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RSACryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Decrypt
				//		Signature: std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,Decrypt_Test)
				{
					
					
				}

				// Method DecryptValue
				//		Signature: std::vector<mscorlib::System::Byte*> rgb
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,DecryptValue_Test)
				{
					
					
				}

				// Method Encrypt
				//		Signature: std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,Encrypt_Test)
				{
					
					
				}

				// Method EncryptValue
				//		Signature: std::vector<mscorlib::System::Byte*> rgb
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,EncryptValue_Test)
				{
					
					
				}

				// Method ExportParameters
				//		Signature: mscorlib::System::Boolean includePrivateParameters
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,ExportParameters_Test)
				{
					
					
				}

				// Method ImportParameters
				//		Signature: mscorlib::System::Security::Cryptography::RSAParameters parameters
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,ImportParameters_Test)
				{
					
					
				}

				// Method SignData
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,SignData_1_Test)
				{
					
					
				}

				// Method SignData
				//		Signature: mscorlib::System::IO::Stream inputStream, mscorlib::System::Object halg
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,SignData_2_Test)
				{
					
					
				}

				// Method SignData
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Object halg
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,SignData_3_Test)
				{
					
					
				}

				// Method SignHash
				//		Signature: std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,SignHash_Test)
				{
					
					
				}

				// Method VerifyData
				//		Signature: std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg, std::vector<mscorlib::System::Byte*> signature
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,VerifyData_Test)
				{
					
					
				}

				// Method VerifyHash
				//		Signature: std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str, std::vector<mscorlib::System::Byte*> rgbSignature
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,VerifyHash_Test)
				{
					
					
				}

				// Method ExportCspBlob
				//		Signature: mscorlib::System::Boolean includePrivateParameters
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,ExportCspBlob_Test)
				{
					
					
				}

				// Method ImportCspBlob
				//		Signature: std::vector<mscorlib::System::Byte*> keyBlob
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,ImportCspBlob_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property KeyExchangeAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_KeyExchangeAlgorithm_Test)
				{
					
					
				}

				// Property KeySize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_KeySize_Test)
				{
					
					
				}

				// Property PersistKeyInCsp
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_PersistKeyInCsp_Test)
				{
					
					
				}

				// Property PersistKeyInCsp
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,set_PersistKeyInCsp_Test)
				{
					
					
				}

				// Property PublicOnly
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_PublicOnly_Test)
				{
					
					
				}

				// Property SignatureAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_SignatureAlgorithm_Test)
				{
					
					
				}

				// Property CspKeyContainerInfo
				//		Return Type: mscorlib::System::Security::Cryptography::CspKeyContainerInfo
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_CspKeyContainerInfo_Test)
				{
					
					
				}

				// Property LegalKeySizes
				//		Return Type: mscorlib::System::Security::Cryptography::KeySizes*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_LegalKeySizes_Test)
				{
					
					
				}

				// Property UseMachineKeyStore
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,get_UseMachineKeyStore_Test)
				{
					
					
				}

				// Property UseMachineKeyStore
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSACryptoServiceProvider_Fixture,set_UseMachineKeyStore_Test)
				{
					
					
				}


			}
		}
	}
}
