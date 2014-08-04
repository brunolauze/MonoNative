// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: ObsoleteAttribute
// C++ Typed Name: mscorlib::System::ObsoleteAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_ObsoleteAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//ObsoleteAttribute()
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::ObsoleteAttribute *value = new mscorlib::System::ObsoleteAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//ObsoleteAttribute(mscorlib::System::String message)
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,Constructor_2)
		{
			
			mscorlib::System::ObsoleteAttribute *value = new mscorlib::System::ObsoleteAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//ObsoleteAttribute(mscorlib::System::String message, mscorlib::System::Boolean error)
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,Constructor_3)
		{
			
			mscorlib::System::ObsoleteAttribute *value = new mscorlib::System::ObsoleteAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property Message
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,get_Message_Test)
		{
			
			
		}

		// Property IsError
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,get_IsError_Test)
		{
			
			
		}

		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_ObsoleteAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
