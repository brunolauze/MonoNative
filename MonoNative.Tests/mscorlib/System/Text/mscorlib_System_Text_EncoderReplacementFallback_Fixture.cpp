// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: EncoderReplacementFallback
// C++ Typed Name: mscorlib::System::Text::EncoderReplacementFallback


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderReplacementFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//EncoderReplacementFallback()
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::EncoderReplacementFallback *value = new mscorlib::System::Text::EncoderReplacementFallback();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//EncoderReplacementFallback(mscorlib::System::String replacement)
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,Constructor_2)
			{
				
				mscorlib::System::Text::EncoderReplacementFallback *value = new mscorlib::System::Text::EncoderReplacementFallback();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CreateFallbackBuffer
			//		Signature: 
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,CreateFallbackBuffer_Test)
			{
				
				
			}

			// Method Equals
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,GetHashCode_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property DefaultString
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,get_DefaultString_Test)
			{
				
				
			}

			// Property MaxCharCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_EncoderReplacementFallback_Fixture,get_MaxCharCount_Test)
			{
				
				
			}


		}
	}
}
