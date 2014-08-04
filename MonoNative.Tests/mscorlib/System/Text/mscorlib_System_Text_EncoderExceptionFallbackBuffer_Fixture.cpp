// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: EncoderExceptionFallbackBuffer
// C++ Typed Name: mscorlib::System::Text::EncoderExceptionFallbackBuffer


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderExceptionFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//EncoderExceptionFallbackBuffer()
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::EncoderExceptionFallbackBuffer *value = new mscorlib::System::Text::EncoderExceptionFallbackBuffer();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Fallback
			//		Signature: mscorlib::System::Char charUnknown, mscorlib::System::Int32 index
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,Fallback_1_Test)
			{
				
				
			}

			// Method Fallback
			//		Signature: mscorlib::System::Char charUnknownHigh, mscorlib::System::Char charUnknownLow, mscorlib::System::Int32 index
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,Fallback_2_Test)
			{
				
				
			}

			// Method GetNextChar
			//		Signature: 
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,GetNextChar_Test)
			{
				
				
			}

			// Method MovePrevious
			//		Signature: 
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,MovePrevious_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Remaining
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_EncoderExceptionFallbackBuffer_Fixture,get_Remaining_Test)
			{
				
				
			}


		}
	}
}
