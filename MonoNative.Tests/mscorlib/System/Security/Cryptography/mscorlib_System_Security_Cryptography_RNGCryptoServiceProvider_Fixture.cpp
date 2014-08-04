// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RNGCryptoServiceProvider
// C++ Typed Name: mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider.h>
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
				
				//RNGCryptoServiceProvider()
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RNGCryptoServiceProvider(std::vector<mscorlib::System::Byte*> rgb)
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RNGCryptoServiceProvider(mscorlib::System::Security::Cryptography::CspParameters cspParams)
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//RNGCryptoServiceProvider(mscorlib::System::String str)
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,Constructor_4)
				{
					
					mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method GetBytes
				//		Signature: std::vector<mscorlib::System::Byte*> data
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,GetBytes_Test)
				{
					
					
				}

				// Method GetNonZeroBytes
				//		Signature: std::vector<mscorlib::System::Byte*> data
				TEST(mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider_Fixture,GetNonZeroBytes_Test)
				{
					
					
				}


			}
		}
	}
}
