// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: DecoderReplacementFallback
// C++ Typed Name: mscorlib::System::Text::DecoderReplacementFallback


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderReplacementFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//DecoderReplacementFallback()
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::DecoderReplacementFallback *value = new mscorlib::System::Text::DecoderReplacementFallback();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//DecoderReplacementFallback(mscorlib::System::String replacement)
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,Constructor_2)
			{
				
				mscorlib::System::Text::DecoderReplacementFallback *value = new mscorlib::System::Text::DecoderReplacementFallback();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CreateFallbackBuffer
			//		Signature: 
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,CreateFallbackBuffer_Test)
			{
				
				
			}

			// Method Equals
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,GetHashCode_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property DefaultString
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,get_DefaultString_Test)
			{
				
				
			}

			// Property MaxCharCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_DecoderReplacementFallback_Fixture,get_MaxCharCount_Test)
			{
				
				
			}


		}
	}
}
