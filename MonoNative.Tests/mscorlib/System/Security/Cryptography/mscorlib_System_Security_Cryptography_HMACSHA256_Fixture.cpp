// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: HMACSHA256
// C++ Typed Name: mscorlib::System::Security::Cryptography::HMACSHA256


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HMACSHA256.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				
				//HMACSHA256()
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::HMACSHA256 *value = new mscorlib::System::Security::Cryptography::HMACSHA256();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//HMACSHA256(std::vector<mscorlib::System::Byte*> key)
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Cryptography::HMACSHA256 *value = new mscorlib::System::Security::Cryptography::HMACSHA256();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property HashName
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_HashName_Test)
				{
					
					
				}

				// Property HashName
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,set_HashName_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_Key_Test)
				{
					
					
				}

				// Property Key
				//		Return Type: mscorlib::System::Byte*
				//			Property Set Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,set_Key_Test)
				{
					
					
				}

				// Property CanTransformMultipleBlocks
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_CanTransformMultipleBlocks_Test)
				{
					
					
				}

				// Property CanReuseTransform
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_CanReuseTransform_Test)
				{
					
					
				}

				// Property Hash
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_Hash_Test)
				{
					
					
				}

				// Property HashSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_HashSize_Test)
				{
					
					
				}

				// Property InputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_InputBlockSize_Test)
				{
					
					
				}

				// Property OutputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_HMACSHA256_Fixture,get_OutputBlockSize_Test)
				{
					
					
				}


			}
		}
	}
}
