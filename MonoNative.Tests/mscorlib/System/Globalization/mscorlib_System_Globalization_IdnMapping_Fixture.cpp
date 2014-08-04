// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: IdnMapping
// C++ Typed Name: mscorlib::System::Globalization::IdnMapping


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_IdnMapping.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Constructors Tests
			
			//IdnMapping()
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::IdnMapping *value = new mscorlib::System::Globalization::IdnMapping();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Equals
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetHashCode_Test)
			{
				
				
			}

			// Method GetAscii
			//		Signature: mscorlib::System::String unicode
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetAscii_1_Test)
			{
				
				
			}

			// Method GetAscii
			//		Signature: mscorlib::System::String unicode, mscorlib::System::Int32 index
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetAscii_2_Test)
			{
				
				
			}

			// Method GetAscii
			//		Signature: mscorlib::System::String unicode, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetAscii_3_Test)
			{
				
				
			}

			// Method GetUnicode
			//		Signature: mscorlib::System::String ascii
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetUnicode_1_Test)
			{
				
				
			}

			// Method GetUnicode
			//		Signature: mscorlib::System::String ascii, mscorlib::System::Int32 index
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetUnicode_2_Test)
			{
				
				
			}

			// Method GetUnicode
			//		Signature: mscorlib::System::String ascii, mscorlib::System::Int32 index, mscorlib::System::Int32 count
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,GetUnicode_3_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property AllowUnassigned
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,get_AllowUnassigned_Test)
			{
				
				
			}

			// Property AllowUnassigned
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,set_AllowUnassigned_Test)
			{
				
				
			}

			// Property UseStd3AsciiRules
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,get_UseStd3AsciiRules_Test)
			{
				
				
			}

			// Property UseStd3AsciiRules
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Globalization_IdnMapping_Fixture,set_UseStd3AsciiRules_Test)
			{
				
				
			}


		}
	}
}
