// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: UnicodeEncoding
// C++ Typed Name: mscorlib::System::Text::UnicodeEncoding


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_UnicodeEncoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Decoder.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//UnicodeEncoding()
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::UnicodeEncoding *value = new mscorlib::System::Text::UnicodeEncoding();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//UnicodeEncoding(mscorlib::System::Boolean bigEndian, mscorlib::System::Boolean byteOrderMark)
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,Constructor_2)
			{
				
				mscorlib::System::Text::UnicodeEncoding *value = new mscorlib::System::Text::UnicodeEncoding();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//UnicodeEncoding(mscorlib::System::Boolean bigEndian, mscorlib::System::Boolean byteOrderMark, mscorlib::System::Boolean throwOnInvalidBytes)
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,Constructor_3)
			{
				
				mscorlib::System::Text::UnicodeEncoding *value = new mscorlib::System::Text::UnicodeEncoding();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetByteCount
			//		Signature: std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetByteCount_1_Test)
			{
				
				
			}

			// Method GetByteCount
			//		Signature: mscorlib::System::String s
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetByteCount_2_Test)
			{
				
				
			}

			// Method GetByteCount
			//		Signature: mscorlib::System::Char* chars, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetByteCount_3_Test)
			{
				
				
			}

			// Method GetBytes
			//		Signature: std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetBytes_1_Test)
			{
				
				
			}

			// Method GetBytes
			//		Signature: mscorlib::System::String s, mscorlib::System::Int32 charIndex, mscorlib::System::Int32 charCount, std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetBytes_2_Test)
			{
				
				
			}

			// Method GetBytes
			//		Signature: mscorlib::System::Char* chars, mscorlib::System::Int32 charCount, mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetBytes_3_Test)
			{
				
				
			}

			// Method GetCharCount
			//		Signature: std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetCharCount_1_Test)
			{
				
				
			}

			// Method GetCharCount
			//		Signature: mscorlib::System::Byte* bytes, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetCharCount_2_Test)
			{
				
				
			}

			// Method GetChars
			//		Signature: std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 byteIndex, mscorlib::System::Int32 byteCount, std::vector<mscorlib::System::Char*> chars, mscorlib::System::Int32 charIndex
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetChars_1_Test)
			{
				
				
			}

			// Method GetChars
			//		Signature: mscorlib::System::Byte* bytes, mscorlib::System::Int32 byteCount, mscorlib::System::Char* chars, mscorlib::System::Int32 charCount
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetChars_2_Test)
			{
				
				
			}

			// Method GetString
			//		Signature: std::vector<mscorlib::System::Byte*> bytes, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetString_Test)
			{
				
				
			}

			// Method GetEncoder
			//		Signature: 
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetEncoder_Test)
			{
				
				
			}

			// Method GetMaxByteCount
			//		Signature: mscorlib::System::Int32 charCount
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetMaxByteCount_Test)
			{
				
				
			}

			// Method GetMaxCharCount
			//		Signature: mscorlib::System::Int32 byteCount
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetMaxCharCount_Test)
			{
				
				
			}

			// Method GetDecoder
			//		Signature: 
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetDecoder_Test)
			{
				
				
			}

			// Method GetPreamble
			//		Signature: 
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetPreamble_Test)
			{
				
				
			}

			// Method Equals
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,GetHashCode_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsReadOnly_Test)
			{
				
				
			}

			// Property IsSingleByte
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsSingleByte_Test)
			{
				
				
			}

			// Property DecoderFallback
			//		Return Type: mscorlib::System::Text::DecoderFallback
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_DecoderFallback_Test)
			{
				
				
			}

			// Property DecoderFallback
			//		Return Type: mscorlib::System::Text::DecoderFallback
			//			Property Set Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,set_DecoderFallback_Test)
			{
				
				
			}

			// Property EncoderFallback
			//		Return Type: mscorlib::System::Text::EncoderFallback
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_EncoderFallback_Test)
			{
				
				
			}

			// Property EncoderFallback
			//		Return Type: mscorlib::System::Text::EncoderFallback
			//			Property Set Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,set_EncoderFallback_Test)
			{
				
				
			}

			// Property BodyName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_BodyName_Test)
			{
				
				
			}

			// Property CodePage
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_CodePage_Test)
			{
				
				
			}

			// Property EncodingName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_EncodingName_Test)
			{
				
				
			}

			// Property HeaderName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_HeaderName_Test)
			{
				
				
			}

			// Property IsBrowserDisplay
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsBrowserDisplay_Test)
			{
				
				
			}

			// Property IsBrowserSave
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsBrowserSave_Test)
			{
				
				
			}

			// Property IsMailNewsDisplay
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsMailNewsDisplay_Test)
			{
				
				
			}

			// Property IsMailNewsSave
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_IsMailNewsSave_Test)
			{
				
				
			}

			// Property WebName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_WebName_Test)
			{
				
				
			}

			// Property WindowsCodePage
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_UnicodeEncoding_Fixture,get_WindowsCodePage_Test)
			{
				
				
			}


		}
	}
}
