// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Cryptography
// Name: ToBase64Transform
// C++ Typed Name: mscorlib::System::Security::Cryptography::ToBase64Transform


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ToBase64Transform.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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
				
				//ToBase64Transform()
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Cryptography::ToBase64Transform *value = new mscorlib::System::Security::Cryptography::ToBase64Transform();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Clear
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,Clear_Test)
				{
					
					
				}

				// Method Dispose
				//		Signature: 
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,Dispose_Test)
				{
					
					
				}

				// Method TransformBlock
				//		Signature: std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount, std::vector<mscorlib::System::Byte*> outputBuffer, mscorlib::System::Int32 outputOffset
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,TransformBlock_Test)
				{
					
					
				}

				// Method TransformFinalBlock
				//		Signature: std::vector<mscorlib::System::Byte*> inputBuffer, mscorlib::System::Int32 inputOffset, mscorlib::System::Int32 inputCount
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,TransformFinalBlock_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property CanTransformMultipleBlocks
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,get_CanTransformMultipleBlocks_Test)
				{
					
					
				}

				// Property CanReuseTransform
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,get_CanReuseTransform_Test)
				{
					
					
				}

				// Property InputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,get_InputBlockSize_Test)
				{
					
					
				}

				// Property OutputBlockSize
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Security_Cryptography_ToBase64Transform_Fixture,get_OutputBlockSize_Test)
				{
					
					
				}


			}
		}
	}
}
