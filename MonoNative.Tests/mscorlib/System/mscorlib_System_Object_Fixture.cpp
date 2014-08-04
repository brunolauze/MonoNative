// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: Object
// C++ Typed Name: mscorlib::System::Object


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//Object()
		TEST(mscorlib_System_Object_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::Object *value = new mscorlib::System::Object();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method Equals
		//		Signature: mscorlib::System::Object obj
		TEST(mscorlib_System_Object_Fixture,Equals_Test)
		{
			
			
		}

		// Method GetHashCode
		//		Signature: 
		TEST(mscorlib_System_Object_Fixture,GetHashCode_Test)
		{
			
			
		}

		// Method GetType
		//		Signature: 
		TEST(mscorlib_System_Object_Fixture,GetType_Test)
		{
			
			
		}

		// Method ToString
		//		Signature: 
		TEST(mscorlib_System_Object_Fixture,ToString_Test)
		{
			
			
		}

		//Public Static Methods Tests
		
		// Method Equals
		//		Signature: mscorlib::System::Object objA, mscorlib::System::Object objB
		TEST(mscorlib_System_Object_Fixture,Equals_StaticTest)
		{
			
			
		}

		// Method ReferenceEquals
		//		Signature: mscorlib::System::Object objA, mscorlib::System::Object objB
		TEST(mscorlib_System_Object_Fixture,ReferenceEquals_StaticTest)
		{
			
			
		}


	}
}
