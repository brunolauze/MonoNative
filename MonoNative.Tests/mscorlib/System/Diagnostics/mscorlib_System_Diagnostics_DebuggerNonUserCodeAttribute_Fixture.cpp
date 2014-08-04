// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: DebuggerNonUserCodeAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::DebuggerNonUserCodeAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerNonUserCodeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//DebuggerNonUserCodeAttribute()
			TEST(mscorlib_System_Diagnostics_DebuggerNonUserCodeAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::DebuggerNonUserCodeAttribute *value = new mscorlib::System::Diagnostics::DebuggerNonUserCodeAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_DebuggerNonUserCodeAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
