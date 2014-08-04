// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: CaseInsensitiveComparer
// C++ Typed Name: mscorlib::System::Collections::CaseInsensitiveComparer


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_CaseInsensitiveComparer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Constructors Tests
			
			//CaseInsensitiveComparer()
			TEST(mscorlib_System_Collections_CaseInsensitiveComparer_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::CaseInsensitiveComparer *value = new mscorlib::System::Collections::CaseInsensitiveComparer();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//CaseInsensitiveComparer(mscorlib::System::Globalization::CultureInfo culture)
			TEST(mscorlib_System_Collections_CaseInsensitiveComparer_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::CaseInsensitiveComparer *value = new mscorlib::System::Collections::CaseInsensitiveComparer();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Compare
			//		Signature: mscorlib::System::Object a, mscorlib::System::Object b
			TEST(mscorlib_System_Collections_CaseInsensitiveComparer_Fixture,Compare_Test)
			{
				
				
			}

			// Property Default
			//		Return Type: mscorlib::System::Collections::CaseInsensitiveComparer
			//			Property Get Method
			TEST(mscorlib_System_Collections_CaseInsensitiveComparer_Fixture,get_Default_Test)
			{
				
				
			}

			// Property DefaultInvariant
			//		Return Type: mscorlib::System::Collections::CaseInsensitiveComparer
			//			Property Get Method
			TEST(mscorlib_System_Collections_CaseInsensitiveComparer_Fixture,get_DefaultInvariant_Test)
			{
				
				
			}


		}
	}
}
