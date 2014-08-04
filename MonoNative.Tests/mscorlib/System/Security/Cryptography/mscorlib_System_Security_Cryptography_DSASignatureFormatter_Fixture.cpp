// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: DSASignatureFormatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::DSASignatureFormatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSASignatureFormatter.h>
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
				
				//DSASignatureFormatter()
				TEST(mscorlib_System_Security_Cryptography_DSASignatureFormatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::DSASignatureFormatter *value = new mscorlib::System::Security::Cryptography::DSASignatureFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//DSASignatureFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_DSASignatureFormatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::DSASignatureFormatter *value = new mscorlib::System::Security::Cryptography::DSASignatureFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateSignature
				//		Signature: std::vector<mscorlib::System::Byte*> rgbHash
				TEST(mscorlib_System_Security_Cryptography_DSASignatureFormatter_Fixture,CreateSignature_Test)
				{
					
					
				}

				// Method SetHashAlgorithm
				//		Signature: mscorlib::System::String strName
				TEST(mscorlib_System_Security_Cryptography_DSASignatureFormatter_Fixture,SetHashAlgorithm_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_DSASignatureFormatter_Fixture,SetKey_Test)
				{
					
					
				}


			}
		}
	}
}
