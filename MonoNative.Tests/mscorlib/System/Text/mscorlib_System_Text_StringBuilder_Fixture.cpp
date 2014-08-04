// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Text
// Name: StringBuilder
// C++ Typed Name: mscorlib::System::Text::StringBuilder


#include <gtest/gtest.h>
#include <mscorlib/System/Text/mscorlib_System_Text_StringBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Constructors Tests
			
			//StringBuilder(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length, mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Constructor_1)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringBuilder()
			TEST(mscorlib_System_Text_StringBuilder_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringBuilder(mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Constructor_3)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringBuilder(mscorlib::System::Int32 capacity, mscorlib::System::Int32 maxCapacity)
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Constructor_4)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringBuilder(mscorlib::System::String value)
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Constructor_5)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringBuilder(mscorlib::System::String value, mscorlib::System::Int32 capacity)
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Constructor_6)
			{
				
				mscorlib::System::Text::StringBuilder *value = new mscorlib::System::Text::StringBuilder();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Text_StringBuilder_Fixture,ToString_1_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length
			TEST(mscorlib_System_Text_StringBuilder_Fixture,ToString_2_Test)
			{
				
				
			}

			// Method EnsureCapacity
			//		Signature: mscorlib::System::Int32 capacity
			TEST(mscorlib_System_Text_StringBuilder_Fixture,EnsureCapacity_Test)
			{
				
				
			}

			// Method Equals
			//		Signature: mscorlib::System::Text::StringBuilder sb
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Equals_Test)
			{
				
				
			}

			// Method Remove
			//		Signature: mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Remove_Test)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::Char oldChar, mscorlib::System::Char newChar
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Replace_1_Test)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::Char oldChar, mscorlib::System::Char newChar, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Replace_2_Test)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::String oldValue, mscorlib::System::String newValue
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Replace_3_Test)
			{
				
				
			}

			// Method Replace
			//		Signature: mscorlib::System::String oldValue, mscorlib::System::String newValue, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Replace_4_Test)
			{
				
				
			}

			// Method Append
			//		Signature: std::vector<mscorlib::System::Char*> value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_1_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::String value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_2_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Boolean value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_3_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Byte value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_4_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Decimal value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_5_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Double value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_6_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Int16 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_7_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Int32 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_8_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Int64 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_9_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Object value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_10_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::SByte value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_11_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Single value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_12_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::UInt16 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_13_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::UInt32 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_14_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::UInt64 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_15_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Char value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_16_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::Char value, mscorlib::System::Int32 repeatCount
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_17_Test)
			{
				
				
			}

			// Method Append
			//		Signature: std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_18_Test)
			{
				
				
			}

			// Method Append
			//		Signature: mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Append_19_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Clear_Test)
			{
				
				
			}

			// Method AppendLine
			//		Signature: 
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendLine_1_Test)
			{
				
				
			}

			// Method AppendLine
			//		Signature: mscorlib::System::String value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendLine_2_Test)
			{
				
				
			}

			// Method AppendFormat
			//		Signature: mscorlib::System::String format, std::vector<mscorlib::System::Object*> args
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendFormat_1_Test)
			{
				
				
			}

			// Method AppendFormat
			//		Signature: mscorlib::System::IFormatProvider provider, mscorlib::System::String format, std::vector<mscorlib::System::Object*> args
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendFormat_2_Test)
			{
				
				
			}

			// Method AppendFormat
			//		Signature: mscorlib::System::String format, mscorlib::System::Object arg0
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendFormat_3_Test)
			{
				
				
			}

			// Method AppendFormat
			//		Signature: mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendFormat_4_Test)
			{
				
				
			}

			// Method AppendFormat
			//		Signature: mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2
			TEST(mscorlib_System_Text_StringBuilder_Fixture,AppendFormat_5_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_1_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::String value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_2_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Boolean value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_3_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Byte value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_4_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Char value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_5_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Decimal value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_6_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Double value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_7_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int16 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_8_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int32 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_9_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Int64 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_10_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Object value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_11_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::SByte value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_12_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Single value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_13_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::UInt16 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_14_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::UInt32 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_15_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::UInt64 value
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_16_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::String value, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_17_Test)
			{
				
				
			}

			// Method Insert
			//		Signature: mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount
			TEST(mscorlib_System_Text_StringBuilder_Fixture,Insert_18_Test)
			{
				
				
			}

			// Method CopyTo
			//		Signature: mscorlib::System::Int32 sourceIndex, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 count
			TEST(mscorlib_System_Text_StringBuilder_Fixture,CopyTo_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property MaxCapacity
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,get_MaxCapacity_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,get_Capacity_Test)
			{
				
				
			}

			// Property Capacity
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,set_Capacity_Test)
			{
				
				
			}

			// Property Length
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,get_Length_Test)
			{
				
				
			}

			// Property Length
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,set_Length_Test)
			{
				
				
			}

			// Property Chars
			//		Return Type: mscorlib::System::Char
			//			Property Get Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,get_Chars_Test)
			{
				
				
			}

			// Property Chars
			//		Return Type: mscorlib::System::Char
			//			Property Set Method
			TEST(mscorlib_System_Text_StringBuilder_Fixture,set_Chars_Test)
			{
				
				
			}


		}
	}
}
