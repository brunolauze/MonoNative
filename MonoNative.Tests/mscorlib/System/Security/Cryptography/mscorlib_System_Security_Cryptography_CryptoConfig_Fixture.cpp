// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: CryptoConfig
// C++ Typed Name: mscorlib::System::Security::Cryptography::CryptoConfig


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CryptoConfig.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Constructors Tests
				
				//CryptoConfig()
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::CryptoConfig *value = new mscorlib::System::Security::Cryptography::CryptoConfig();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Static Methods Tests
				
				// Method CreateFromName
				//		Signature: mscorlib::System::String name
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,CreateFromName_1_StaticTest)
				{
					
					
				}

				// Method CreateFromName
				//		Signature: mscorlib::System::String name, std::vector<mscorlib::System::Object*> args
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,CreateFromName_2_StaticTest)
				{
					
					
				}

				// Method MapNameToOID
				//		Signature: mscorlib::System::String name
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,MapNameToOID_StaticTest)
				{
					
					
				}

				// Method AddAlgorithm
				//		Signature: mscorlib::System::Type algorithm, std::vector<mscorlib::System::String*> names
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,AddAlgorithm_StaticTest)
				{
					
					
				}

				// Method AddOID
				//		Signature: mscorlib::System::String oid, std::vector<mscorlib::System::String*> names
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,AddOID_StaticTest)
				{
					
					
				}

				// Method EncodeOID
				//		Signature: mscorlib::System::String str
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,EncodeOID_StaticTest)
				{
					
					
				}

				// Property AllowOnlyFipsAlgorithms
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_CryptoConfig_Fixture,get_AllowOnlyFipsAlgorithms_Test)
				{
					
					
				}


			}
		}
	}
}
