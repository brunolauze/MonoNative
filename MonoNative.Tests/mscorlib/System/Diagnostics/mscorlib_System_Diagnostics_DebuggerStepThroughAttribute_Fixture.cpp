// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: DebuggerStepThroughAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::DebuggerStepThroughAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerStepThroughAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//DebuggerStepThroughAttribute()
			TEST(mscorlib_System_Diagnostics_DebuggerStepThroughAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::DebuggerStepThroughAttribute *value = new mscorlib::System::Diagnostics::DebuggerStepThroughAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_DebuggerStepThroughAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
