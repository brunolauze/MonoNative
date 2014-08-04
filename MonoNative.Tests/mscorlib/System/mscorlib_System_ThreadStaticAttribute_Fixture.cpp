// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: ThreadStaticAttribute
// C++ Typed Name: mscorlib::System::ThreadStaticAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_ThreadStaticAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//ThreadStaticAttribute()
		TEST(mscorlib_System_ThreadStaticAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::ThreadStaticAttribute *value = new mscorlib::System::ThreadStaticAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_ThreadStaticAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
