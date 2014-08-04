// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: Random
// C++ Typed Name: mscorlib::System::Random


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_Random.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//Random()
		TEST(mscorlib_System_Random_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::Random *value = new mscorlib::System::Random();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Random(mscorlib::System::Int32 Seed)
		TEST(mscorlib_System_Random_Fixture,Constructor_2)
		{
			
			mscorlib::System::Random *value = new mscorlib::System::Random();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method Next
		//		Signature: mscorlib::System::Int32 minValue, mscorlib::System::Int32 maxValue
		TEST(mscorlib_System_Random_Fixture,Next_1_Test)
		{
			
			
		}

		// Method Next
		//		Signature: mscorlib::System::Int32 maxValue
		TEST(mscorlib_System_Random_Fixture,Next_2_Test)
		{
			
			
		}

		// Method Next
		//		Signature: 
		TEST(mscorlib_System_Random_Fixture,Next_3_Test)
		{
			
			
		}

		// Method NextBytes
		//		Signature: std::vector<mscorlib::System::Byte*> buffer
		TEST(mscorlib_System_Random_Fixture,NextBytes_Test)
		{
			
			
		}

		// Method NextDouble
		//		Signature: 
		TEST(mscorlib_System_Random_Fixture,NextDouble_Test)
		{
			
			
		}


	}
}
