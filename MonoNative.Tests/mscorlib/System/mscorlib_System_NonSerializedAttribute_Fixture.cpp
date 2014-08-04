// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: NonSerializedAttribute
// C++ Typed Name: mscorlib::System::NonSerializedAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_NonSerializedAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//NonSerializedAttribute()
		TEST(mscorlib_System_NonSerializedAttribute_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::NonSerializedAttribute *value = new mscorlib::System::NonSerializedAttribute();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property TypeId
		//		Return Type: mscorlib::System::Object
		//			Property Get Method
		TEST(mscorlib_System_NonSerializedAttribute_Fixture,get_TypeId_Test)
		{
			
			
		}


	}
}
