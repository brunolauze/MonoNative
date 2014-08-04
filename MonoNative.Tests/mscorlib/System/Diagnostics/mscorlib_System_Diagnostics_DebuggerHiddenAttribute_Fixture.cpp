// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: DebuggerHiddenAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::DebuggerHiddenAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//DebuggerHiddenAttribute()
			TEST(mscorlib_System_Diagnostics_DebuggerHiddenAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::DebuggerHiddenAttribute *value = new mscorlib::System::Diagnostics::DebuggerHiddenAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_DebuggerHiddenAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
