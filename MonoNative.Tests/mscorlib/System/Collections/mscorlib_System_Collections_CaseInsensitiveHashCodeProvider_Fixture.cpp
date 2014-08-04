// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Collections
// Name: CaseInsensitiveHashCodeProvider
// C++ Typed Name: mscorlib::System::Collections::CaseInsensitiveHashCodeProvider


#include <gtest/gtest.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_CaseInsensitiveHashCodeProvider.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Constructors Tests
			
			//CaseInsensitiveHashCodeProvider()
			TEST(mscorlib_System_Collections_CaseInsensitiveHashCodeProvider_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Collections::CaseInsensitiveHashCodeProvider *value = new mscorlib::System::Collections::CaseInsensitiveHashCodeProvider();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//CaseInsensitiveHashCodeProvider(mscorlib::System::Globalization::CultureInfo culture)
			TEST(mscorlib_System_Collections_CaseInsensitiveHashCodeProvider_Fixture,Constructor_2)
			{
				
				mscorlib::System::Collections::CaseInsensitiveHashCodeProvider *value = new mscorlib::System::Collections::CaseInsensitiveHashCodeProvider();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetHashCode
			//		Signature: mscorlib::System::Object obj
			TEST(mscorlib_System_Collections_CaseInsensitiveHashCodeProvider_Fixture,GetHashCode_Test)
			{
				
				
			}

			// Property Default
			//		Return Type: mscorlib::System::Collections::CaseInsensitiveHashCodeProvider
			//			Property Get Method
			TEST(mscorlib_System_Collections_CaseInsensitiveHashCodeProvider_Fixture,get_Default_Test)
			{
				
				
			}

			// Property DefaultInvariant
			//		Return Type: mscorlib::System::Collections::CaseInsensitiveHashCodeProvider
			//			Property Get Method
			TEST(mscorlib_System_Collections_CaseInsensitiveHashCodeProvider_Fixture,get_DefaultInvariant_Test)
			{
				
				
			}


		}
	}
}
