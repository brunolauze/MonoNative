// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSAPKCS1KeyExchangeDeformatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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
				
				//RSAPKCS1KeyExchangeDeformatter()
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSAPKCS1KeyExchangeDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter *value = new mscorlib::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method DecryptKeyExchange
				//		Signature: std::vector<mscorlib::System::Byte*> rgbIn
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,DecryptKeyExchange_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,SetKey_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Parameters
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,get_Parameters_Test)
				{
					
					
				}

				// Property Parameters
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,set_Parameters_Test)
				{
					
					
				}

				// Property RNG
				//		Return Type: mscorlib::System::Security::Cryptography::RandomNumberGenerator
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,get_RNG_Test)
				{
					
					
				}

				// Property RNG
				//		Return Type: mscorlib::System::Security::Cryptography::RandomNumberGenerator
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_Fixture,set_RNG_Test)
				{
					
					
				}


			}
		}
	}
}
