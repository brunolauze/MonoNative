// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SecureString
// C++ Typed Name: mscorlib::System::Security::SecureString


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecureString.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//SecureString()
			TEST(mscorlib_System_Security_SecureString_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::SecureString *value = new mscorlib::System::Security::SecureString();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecureString(mscorlib::System::Char* value, mscorlib::System::Int32 length)
			TEST(mscorlib_System_Security_SecureString_Fixture,Constructor_2)
			{
				
				mscorlib::System::Security::SecureString *value = new mscorlib::System::Security::SecureString();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method AppendChar
			//		Signature: mscorlib::System::Char c
			TEST(mscorlib_System_Security_SecureString_Fixture,AppendChar_Test)
			{
				
				
			}

			// Method Clear
			//		Signature: 
			TEST(mscorlib_System_Security_SecureString_Fixture,Clear_Test)
			{
				
				
			}

			// Method Copy
			//		Signature: 
			TEST(mscorlib_System_Security_SecureString_Fixture,Copy_Test)
			{
				
				
			}

			// Method Dispose
			//		Signature: 
			TEST(mscorlib_System_Security_SecureString_Fixture,Dispose_Test)
			{
				
				
			}

			// Method InsertAt
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Char c
			TEST(mscorlib_System_Security_SecureString_Fixture,InsertAt_Test)
			{
				
				
			}

			// Method IsReadOnly
			//		Signature: 
			TEST(mscorlib_System_Security_SecureString_Fixture,IsReadOnly_Test)
			{
				
				
			}

			// Method MakeReadOnly
			//		Signature: 
			TEST(mscorlib_System_Security_SecureString_Fixture,MakeReadOnly_Test)
			{
				
				
			}

			// Method RemoveAt
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Security_SecureString_Fixture,RemoveAt_Test)
			{
				
				
			}

			// Method SetAt
			//		Signature: mscorlib::System::Int32 index, mscorlib::System::Char c
			TEST(mscorlib_System_Security_SecureString_Fixture,SetAt_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Length
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Security_SecureString_Fixture,get_Length_Test)
			{
				
				
			}


		}
	}
}
