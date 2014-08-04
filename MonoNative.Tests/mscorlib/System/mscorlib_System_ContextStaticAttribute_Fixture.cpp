// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: ContextStaticAttribute
// C++ Typed Name: mscorlib::System::ContextStaticAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_ContextStaticAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//ContextStaticAttribute()
		TEST(mscorlib_System_ContextStaticAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::ContextStaticAttribute *value = new mscorlib::System::ContextStaticAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_ContextStaticAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
