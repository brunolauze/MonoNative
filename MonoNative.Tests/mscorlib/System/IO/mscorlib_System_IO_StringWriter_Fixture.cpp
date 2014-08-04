// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.IO
// Name: StringWriter
// C++ Typed Name: mscorlib::System::IO::StringWriter


#include <gtest/gtest.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StringWriter.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Constructors Tests
			
			//StringWriter()
			TEST(mscorlib_System_IO_StringWriter_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::IO::StringWriter *value = new mscorlib::System::IO::StringWriter();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringWriter(mscorlib::System::IFormatProvider formatProvider)
			TEST(mscorlib_System_IO_StringWriter_Fixture,Constructor_2)
			{
				
				mscorlib::System::IO::StringWriter *value = new mscorlib::System::IO::StringWriter();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringWriter(mscorlib::System::Text::StringBuilder sb)
			TEST(mscorlib_System_IO_StringWriter_Fixture,Constructor_3)
			{
				
				mscorlib::System::IO::StringWriter *value = new mscorlib::System::IO::StringWriter();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StringWriter(mscorlib::System::Text::StringBuilder sb, mscorlib::System::IFormatProvider formatProvider)
			TEST(mscorlib_System_IO_StringWriter_Fixture,Constructor_4)
			{
				
				mscorlib::System::IO::StringWriter *value = new mscorlib::System::IO::StringWriter();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Close
			//		Signature: 
			TEST(mscorlib_System_IO_StringWriter_Fixture,Close_Test)
			{
				
				
			}

			// Method GetStringBuilder
			//		Signature: 
			TEST(mscorlib_System_IO_StringWriter_Fixture,GetStringBuilder_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_IO_StringWriter_Fixture,ToString_Test)
			{
				
				
			}

			// Method Write
			//		Signature: mscorlib::System::Char value
			TEST(mscorlib_System_IO_StringWriter_Fixture,Write_1_Test)
			{
				
				
			}

			// Method Write
			//		Signature: mscorlib::System::String value
			TEST(mscorlib_System_IO_StringWriter_Fixture,Write_2_Test)
			{
				
				
			}

			// Method Write
			//		Signature: std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_StringWriter_Fixture,Write_3_Test)
			{
				
				
			}

			// Method FlushAsync
			//		Signature: 
			TEST(mscorlib_System_IO_StringWriter_Fixture,FlushAsync_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: mscorlib::System::Char value
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteAsync_1_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteAsync_2_Test)
			{
				
				
			}

			// Method WriteAsync
			//		Signature: mscorlib::System::String value
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteAsync_3_Test)
			{
				
				
			}

			// Method WriteLineAsync
			//		Signature: mscorlib::System::Char value
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteLineAsync_1_Test)
			{
				
				
			}

			// Method WriteLineAsync
			//		Signature: std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteLineAsync_2_Test)
			{
				
				
			}

			// Method WriteLineAsync
			//		Signature: mscorlib::System::String value
			TEST(mscorlib_System_IO_StringWriter_Fixture,WriteLineAsync_3_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Encoding
			//		Return Type: mscorlib::System::Text::Encoding
			//			Property Get Method
			TEST(mscorlib_System_IO_StringWriter_Fixture,get_Encoding_Test)
			{
				
				
			}

			// Property FormatProvider
			//		Return Type: mscorlib::System::IFormatProvider
			//			Property Get Method
			TEST(mscorlib_System_IO_StringWriter_Fixture,get_FormatProvider_Test)
			{
				
				
			}

			// Property NewLine
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_IO_StringWriter_Fixture,get_NewLine_Test)
			{
				
				
			}

			// Property NewLine
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_IO_StringWriter_Fixture,set_NewLine_Test)
			{
				
				
			}


		}
	}
}
