// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: StringInfo
// C++ Typed Name: mscorlib::System::Globalization::StringInfo


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_StringInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TextElementEnumerator.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Constructors Tests
			
			//StringInfo()
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::StringInfo *value = new mscorlib::System::Globalization::StringInfo();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringInfo(mscorlib::System::String value)
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,Constructor_2)
			{
				
				mscorlib::System::Globalization::StringInfo *value = new mscorlib::System::Globalization::StringInfo();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Equals
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,GetHashCode_Test)
			{
				
				
			}

			// Method SubstringByTextElements
			//		Signature: mscorlib::System::Int32 startingTextElement
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,SubstringByTextElements_1_Test)
			{
				
				
			}

			// Method SubstringByTextElements
			//		Signature: mscorlib::System::Int32 startingTextElement, mscorlib::System::Int32 lengthInTextElements
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,SubstringByTextElements_2_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method GetNextTextElement
			//		Signature: mscorlib::System::String str
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,GetNextTextElement_1_StaticTest)
			{
				
				
			}

			// Method GetNextTextElement
			//		Signature: mscorlib::System::String str, mscorlib::System::Int32 index
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,GetNextTextElement_2_StaticTest)
			{
				
				
			}

			// Method GetTextElementEnumerator
			//		Signature: mscorlib::System::String str
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,GetTextElementEnumerator_1_StaticTest)
			{
				
				
			}

			// Method GetTextElementEnumerator
			//		Signature: mscorlib::System::String str, mscorlib::System::Int32 index
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,GetTextElementEnumerator_2_StaticTest)
			{
				
				
			}

			// Method ParseCombiningCharacters
			//		Signature: mscorlib::System::String str
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,ParseCombiningCharacters_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property LengthInTextElements
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,get_LengthInTextElements_Test)
			{
				
				
			}

			// Property String
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,get_String_Test)
			{
				
				
			}

			// Property String
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_StringInfo_Fixture,set_String_Test)
			{
				
				
			}


		}
	}
}
