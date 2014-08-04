// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: ParamArrayAttribute
// C++ Typed Name: mscorlib::System::ParamArrayAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_ParamArrayAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//ParamArrayAttribute()
		TEST(mscorlib_System_ParamArrayAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::ParamArrayAttribute *value = new mscorlib::System::ParamArrayAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_ParamArrayAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
