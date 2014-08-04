// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: DebuggerStepperBoundaryAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::DebuggerStepperBoundaryAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerStepperBoundaryAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//DebuggerStepperBoundaryAttribute()
			TEST(mscorlib_System_Diagnostics_DebuggerStepperBoundaryAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::DebuggerStepperBoundaryAttribute *value = new mscorlib::System::Diagnostics::DebuggerStepperBoundaryAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_DebuggerStepperBoundaryAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
