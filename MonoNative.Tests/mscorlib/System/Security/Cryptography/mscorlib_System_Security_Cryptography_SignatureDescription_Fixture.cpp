// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: SignatureDescription
// C++ Typed Name: mscorlib::System::Security::Cryptography::SignatureDescription


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_SignatureDescription.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureDeformatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureFormatter.h>
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
				
				//SignatureDescription()
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::SignatureDescription *value = new mscorlib::System::Security::Cryptography::SignatureDescription();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//SignatureDescription(mscorlib::System::Security::SecurityElement el)
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::SignatureDescription *value = new mscorlib::System::Security::Cryptography::SignatureDescription();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateDeformatter
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,CreateDeformatter_Test)
				{
					
					
				}

				// Method CreateDigest
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,CreateDigest_Test)
				{
					
					
				}

				// Method CreateFormatter
				//		Signature: mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,CreateFormatter_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property DeformatterAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,get_DeformatterAlgorithm_Test)
				{
					
					
				}

				// Property DeformatterAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,set_DeformatterAlgorithm_Test)
				{
					
					
				}

				// Property DigestAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,get_DigestAlgorithm_Test)
				{
					
					
				}

				// Property DigestAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,set_DigestAlgorithm_Test)
				{
					
					
				}

				// Property FormatterAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,get_FormatterAlgorithm_Test)
				{
					
					
				}

				// Property FormatterAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,set_FormatterAlgorithm_Test)
				{
					
					
				}

				// Property KeyAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,get_KeyAlgorithm_Test)
				{
					
					
				}

				// Property KeyAlgorithm
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_SignatureDescription_Fixture,set_KeyAlgorithm_Test)
				{
					
					
				}


			}
		}
	}
}
