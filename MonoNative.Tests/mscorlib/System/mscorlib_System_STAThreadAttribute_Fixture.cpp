// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: STAThreadAttribute
// C++ Typed Name: mscorlib::System::STAThreadAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_STAThreadAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//STAThreadAttribute()
		TEST(mscorlib_System_STAThreadAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::STAThreadAttribute *value = new mscorlib::System::STAThreadAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_STAThreadAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
