// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: EventArgs
// C++ Typed Name: mscorlib::System::EventArgs


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//EventArgs()
		TEST(mscorlib_System_EventArgs_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::EventArgs *value = new mscorlib::System::EventArgs();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		

	}
}
