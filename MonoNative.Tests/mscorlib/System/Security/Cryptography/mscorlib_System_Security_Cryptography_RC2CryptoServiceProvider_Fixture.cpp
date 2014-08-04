// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RC2CryptoServiceProvider
// C++ Typed Name: mscorlib::System::Security::Cryptography::RC2CryptoServiceProvider


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Constructors Tests
				
				//RC2CryptoServiceProvider()
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RC2CryptoServiceProvider *value = new mscorlib::System::Security::Cryptography::RC2CryptoServiceProvider();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateDecryptor
				//		Signature: std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,CreateDecryptor_Test)
				{
					
					
				}

				// Method CreateEncryptor
				//		Signature: std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,CreateEncryptor_Test)
				{
					
					
				}

				// Method GenerateIV
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,GenerateIV_Test)
				{
					
					
				}

				// Method GenerateKey
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,GenerateKey_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property EffectiveKeySize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_EffectiveKeySize_Test)
				{
					
					
				}

				// Property EffectiveKeySize
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_EffectiveKeySize_Test)
				{
					
					
				}

				// Property UseSalt
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_UseSalt_Test)
				{
					
					
				}

				// Property UseSalt
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_UseSalt_Test)
				{
					
					
				}

				// Property KeySize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_KeySize_Test)
				{
					
					
				}

				// Property KeySize
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_KeySize_Test)
				{
					
					
				}

				// Property BlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_BlockSize_Test)
				{
					
					
				}

				// Property BlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_BlockSize_Test)
				{
					
					
				}

				// Property FeedbackSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_FeedbackSize_Test)
				{
					
					
				}

				// Property FeedbackSize
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_FeedbackSize_Test)
				{
					
					
				}

				// Property IV
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_IV_Test)
				{
					
					
				}

				// Property IV
				//		Return Type: mscorlib::System::Byte*
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_IV_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_Key_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_Key_Test)
				{
					
					
				}

				// Property LegalBlockSizes
				//		Return Type: mscorlib::System::Security::Cryptography::KeySizes*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_LegalBlockSizes_Test)
				{
					
					
				}

				// Property LegalKeySizes
				//		Return Type: mscorlib::System::Security::Cryptography::KeySizes*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_LegalKeySizes_Test)
				{
					
					
				}

				// Property Mode
				//		Return Type: mscorlib::System::Security::Cryptography::CipherMode::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_Mode_Test)
				{
					
					
				}

				// Property Mode
				//		Return Type: mscorlib::System::Security::Cryptography::CipherMode::__ENUM__
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_Mode_Test)
				{
					
					
				}

				// Property Padding
				//		Return Type: mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,get_Padding_Test)
				{
					
					
				}

				// Property Padding
				//		Return Type: mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_RC2CryptoServiceProvider_Fixture,set_Padding_Test)
				{
					
					
				}


			}
		}
	}
}
