// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: Debugger
// C++ Typed Name: mscorlib::System::Diagnostics::Debugger


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_Debugger.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//Debugger()
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::Debugger *value = new mscorlib::System::Diagnostics::Debugger();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Static Methods Tests
			
			// Method Break
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,Break_StaticTest)
			{
				
				
			}

			// Method IsLogging
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,IsLogging_StaticTest)
			{
				
				
			}

			// Method Launch
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,Launch_StaticTest)
			{
				
				
			}

			// Method Log
			//		Signature: mscorlib::System::Int32 level, mscorlib::System::String category, mscorlib::System::String message
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,Log_StaticTest)
			{
				
				
			}

			// Method NotifyOfCrossThreadDependency
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,NotifyOfCrossThreadDependency_StaticTest)
			{
				
				
			}

			// Property IsAttached
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_Debugger_Fixture,get_IsAttached_Test)
			{
				
				
			}


		}
	}
}
