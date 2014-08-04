// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSAPKCS1SignatureFormatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSAPKCS1SignatureFormatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				
				//RSAPKCS1SignatureFormatter()
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1SignatureFormatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1SignatureFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSAPKCS1SignatureFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1SignatureFormatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1SignatureFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateSignature
				//		Signature: std::vector<mscorlib::System::Byte*> rgbHash
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter_Fixture,CreateSignature_Test)
				{
					
					
				}

				// Method SetHashAlgorithm
				//		Signature: mscorlib::System::String strName
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter_Fixture,SetHashAlgorithm_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1SignatureFormatter_Fixture,SetKey_Test)
				{
					
					
				}


			}
		}
	}
}
