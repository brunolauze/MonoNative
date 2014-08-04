// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSAPKCS1SignatureDeformatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDeformatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
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
				
				//RSAPKCS1SignatureDeformatter()
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDeformatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSAPKCS1SignatureDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDeformatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method SetHashAlgorithm
				//		Signature: mscorlib::System::String strName
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter_Fixture,SetHashAlgorithm_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter_Fixture,SetKey_Test)
				{
					
					
				}

				// Method VerifySignature
				//		Signature: std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter_Fixture,VerifySignature_Test)
				{
					
					
				}


			}
		}
	}
}
