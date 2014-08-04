// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: DecoderExceptionFallbackBuffer
// C++ Typed Name: mscorlib::System::Text::DecoderExceptionFallbackBuffer


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderExceptionFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//DecoderExceptionFallbackBuffer()
			TEST(mscorlib_System_Text_DecoderExceptionFallbackBuffer_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::DecoderExceptionFallbackBuffer *value = new mscorlib::System::Text::DecoderExceptionFallbackBuffer();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Fallback
			//		Signature: std::vector<mscorlib::System::Byte*> bytesUnknown, mscorlib::System::Int32 index
			TEST(mscorlib_System_Text_DecoderExceptionFallbackBuffer_Fixture,Fallback_Test)
			{
				
				
			}

			// Method GetNextChar
			//		Signature: 
			TEST(mscorlib_System_Text_DecoderExceptionFallbackBuffer_Fixture,GetNextChar_Test)
			{
				
				
			}

			// Method MovePrevious
			//		Signature: 
			TEST(mscorlib_System_Text_DecoderExceptionFallbackBuffer_Fixture,MovePrevious_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Remaining
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_DecoderExceptionFallbackBuffer_Fixture,get_Remaining_Test)
			{
				
				
			}


		}
	}
}
