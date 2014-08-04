// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: RIPEMD160Managed
// C++ Typed Name: mscorlib::System::Security::Cryptography::RIPEMD160Managed


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RIPEMD160Managed.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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
				
				//RIPEMD160Managed()
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::RIPEMD160Managed *value = new mscorlib::System::Security::Cryptography::RIPEMD160Managed();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Initialize
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,Initialize_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property CanTransformMultipleBlocks
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_CanTransformMultipleBlocks_Test)
				{
					
					
				}

				// Property CanReuseTransform
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_CanReuseTransform_Test)
				{
					
					
				}

				// Property Hash
				//		Return Type: mscorlib::System::Byte*
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_Hash_Test)
				{
					
					
				}

				// Property HashSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_HashSize_Test)
				{
					
					
				}

				// Property InputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_InputBlockSize_Test)
				{
					
					
				}

				// Property OutputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_RIPEMD160Managed_Fixture,get_OutputBlockSize_Test)
				{
					
					
				}


			}
		}
	}
}
