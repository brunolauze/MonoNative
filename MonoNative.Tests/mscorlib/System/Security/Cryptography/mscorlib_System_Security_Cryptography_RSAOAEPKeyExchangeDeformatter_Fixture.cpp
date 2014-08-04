// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RSAOAEPKeyExchangeDeformatter
// C++ Typed Name: mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				
				//RSAOAEPKeyExchangeDeformatter()
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter *value = new mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RSAOAEPKeyExchangeDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter *value = new mscorlib::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method DecryptKeyExchange
				//		Signature: std::vector<mscorlib::System::Byte*> rgbData
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,DecryptKeyExchange_Test)
				{
					
					
				}

				// Method SetKey
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,SetKey_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Parameters
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,get_Parameters_Test)
				{
					
					
				}

				// Property Parameters
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_Fixture,set_Parameters_Test)
				{
					
					
				}


			}
		}
	}
}
