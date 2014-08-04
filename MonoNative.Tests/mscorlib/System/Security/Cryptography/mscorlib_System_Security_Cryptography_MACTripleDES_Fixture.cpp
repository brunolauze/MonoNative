// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: MACTripleDES
// C++ Typed Name: mscorlib::System::Security::Cryptography::MACTripleDES


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_MACTripleDES.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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
				
				//MACTripleDES()
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::MACTripleDES *value = new mscorlib::System::Security::Cryptography::MACTripleDES();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//MACTripleDES(std::vector<mscorlib::System::Byte*> rgbKey)
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::MACTripleDES *value = new mscorlib::System::Security::Cryptography::MACTripleDES();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//MACTripleDES(mscorlib::System::String strTripleDES, std::vector<mscorlib::System::Byte*> rgbKey)
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Cryptography::MACTripleDES *value = new mscorlib::System::Security::Cryptography::MACTripleDES();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Initialize
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,Initialize_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Padding
				//		Return Type: mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_Padding_Test)
				{
					
					
				}

				// Property Padding
				//		Return Type: mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,set_Padding_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_Key_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,set_Key_Test)
				{
					
					
				}

				// Property CanTransformMultipleBlocks
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_CanTransformMultipleBlocks_Test)
				{
					
					
				}

				// Property CanReuseTransform
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_CanReuseTransform_Test)
				{
					
					
				}

				// Property Hash
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_Hash_Test)
				{
					
					
				}

				// Property HashSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_HashSize_Test)
				{
					
					
				}

				// Property InputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_InputBlockSize_Test)
				{
					
					
				}

				// Property OutputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_MACTripleDES_Fixture,get_OutputBlockSize_Test)
				{
					
					
				}


			}
		}
	}
}
