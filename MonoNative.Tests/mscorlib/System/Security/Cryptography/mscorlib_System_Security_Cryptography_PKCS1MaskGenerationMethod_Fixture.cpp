// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: PKCS1MaskGenerationMethod
// C++ Typed Name: mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod.h>
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
				
				//PKCS1MaskGenerationMethod()
				TEST(mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod *value = new mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method GenerateMask
				//		Signature: std::vector<mscorlib::System::Byte*> rgbSeed, mscorlib::System::Int32 cbReturn
				TEST(mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod_Fixture,GenerateMask_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property HashName
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod_Fixture,get_HashName_Test)
				{
					
					
				}

				// Property HashName
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod_Fixture,set_HashName_Test)
				{
					
					
				}


			}
		}
	}
}
