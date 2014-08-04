// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: StackFrame
// C++ Typed Name: mscorlib::System::Diagnostics::StackFrame


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_StackFrame.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//StackFrame()
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackFrame(mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,Constructor_2)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackFrame(mscorlib::System::Int32 skipFrames)
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,Constructor_3)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackFrame(mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,Constructor_4)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackFrame(mscorlib::System::String fileName, mscorlib::System::Int32 lineNumber)
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,Constructor_5)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackFrame(mscorlib::System::String fileName, mscorlib::System::Int32 lineNumber, mscorlib::System::Int32 colNumber)
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,Constructor_6)
			{
				
				mscorlib::System::Diagnostics::StackFrame *value = new mscorlib::System::Diagnostics::StackFrame();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetFileLineNumber
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetFileLineNumber_Test)
			{
				
				
			}

			// Method GetFileColumnNumber
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetFileColumnNumber_Test)
			{
				
				
			}

			// Method GetFileName
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetFileName_Test)
			{
				
				
			}

			// Method GetILOffset
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetILOffset_Test)
			{
				
				
			}

			// Method GetMethod
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetMethod_Test)
			{
				
				
			}

			// Method GetNativeOffset
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,GetNativeOffset_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackFrame_Fixture,ToString_Test)
			{
				
				
			}


		}
	}
}
