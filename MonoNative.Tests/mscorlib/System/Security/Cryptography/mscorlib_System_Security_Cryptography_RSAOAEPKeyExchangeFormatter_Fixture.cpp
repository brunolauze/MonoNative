// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSAOAEPKeyExchangeFormatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
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
				
				//RSAOAEPKeyExchangeFormatter()
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter *value = new mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSAOAEPKeyExchangeFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter *value = new mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateKeyExchange
				//		Signature: std::vector<mscorlib::System::Byte*> rgbData
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,CreateKeyExchange_1_Test)
				{
					
					
				}

				// Method CreateKeyExchange
				//		Signature: std::vector<mscorlib::System::Byte*> rgbData, mscorlib::System::Type symAlgType
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,CreateKeyExchange_2_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,SetKey_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Parameter
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,get_Parameter_Test)
				{
					
					
				}

				// Property Parameter
				//		Return Type: mscorlib::System::Byte*
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,set_Parameter_Test)
				{
					
					
				}

				// Property Parameters
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,get_Parameters_Test)
				{
					
					
				}

				// Property Rng
				//		Return Type: mscorlib::System::Security::Cryptography::RandomNumberGenerator
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,get_Rng_Test)
				{
					
					
				}

				// Property Rng
				//		Return Type: mscorlib::System::Security::Cryptography::RandomNumberGenerator
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_Fixture,set_Rng_Test)
				{
					
					
				}


			}
		}
	}
}
