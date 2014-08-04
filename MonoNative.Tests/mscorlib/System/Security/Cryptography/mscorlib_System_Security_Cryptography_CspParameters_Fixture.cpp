// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: CspParameters
// C++ Typed Name: mscorlib::System::Security::Cryptography::CspParameters


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
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
				
				//CspParameters()
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//CspParameters(mscorlib::System::Int32 dwTypeIn)
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//CspParameters(mscorlib::System::Int32 dwTypeIn, mscorlib::System::String strProviderNameIn)
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//CspParameters(mscorlib::System::Int32 dwTypeIn, mscorlib::System::String strProviderNameIn, mscorlib::System::String strContainerNameIn)
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,Constructor_4)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//CspParameters(mscorlib::System::Int32 providerType, mscorlib::System::String providerName, mscorlib::System::String keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity cryptoKeySecurity, mscorlib::System::IntPtr parentWindowHandle)
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,Constructor_5)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//CspParameters(mscorlib::System::Int32 providerType, mscorlib::System::String providerName, mscorlib::System::String keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity cryptoKeySecurity, mscorlib::System::Security::SecureString keyPassword)
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,Constructor_6)
				{
					
					mscorlib::System::Security::Cryptography::CspParameters *value = new mscorlib::System::Security::Cryptography::CspParameters();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property Flags
				//		Return Type: mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,get_Flags_Test)
				{
					
					
				}

				// Property Flags
				//		Return Type: mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,set_Flags_Test)
				{
					
					
				}

				// Property CryptoKeySecurity
				//		Return Type: mscorlib::System::Security::AccessControl::CryptoKeySecurity
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,get_CryptoKeySecurity_Test)
				{
					
					
				}

				// Property CryptoKeySecurity
				//		Return Type: mscorlib::System::Security::AccessControl::CryptoKeySecurity
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,set_CryptoKeySecurity_Test)
				{
					
					
				}

				// Property KeyPassword
				//		Return Type: mscorlib::System::Security::SecureString
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,get_KeyPassword_Test)
				{
					
					
				}

				// Property KeyPassword
				//		Return Type: mscorlib::System::Security::SecureString
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,set_KeyPassword_Test)
				{
					
					
				}

				// Property ParentWindowHandle
				//		Return Type: mscorlib::System::IntPtr
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,get_ParentWindowHandle_Test)
				{
					
					
				}

				// Property ParentWindowHandle
				//		Return Type: mscorlib::System::IntPtr
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_CspParameters_Fixture,set_ParentWindowHandle_Test)
				{
					
					
				}


			}
		}
	}
}
