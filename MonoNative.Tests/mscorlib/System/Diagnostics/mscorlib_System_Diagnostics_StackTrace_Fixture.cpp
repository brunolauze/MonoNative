// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics
// Name: StackTrace
// C++ Typed Name: mscorlib::System::Diagnostics::StackTrace


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_StackTrace.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Constructors Tests
			
			//StackTrace()
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_2)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Int32 skipFrames)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_3)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_4)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Exception e)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_5)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Exception e, mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_6)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Exception e, mscorlib::System::Int32 skipFrames)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_7)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Exception e, mscorlib::System::Int32 skipFrames, mscorlib::System::Boolean fNeedFileInfo)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_8)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Diagnostics::StackFrame frame)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_9)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//StackTrace(mscorlib::System::Threading::Thread targetThread, mscorlib::System::Boolean needFileInfo)
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,Constructor_10)
			{
				
				mscorlib::System::Diagnostics::StackTrace *value = new mscorlib::System::Diagnostics::StackTrace();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetFrame
			//		Signature: mscorlib::System::Int32 index
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,GetFrame_Test)
			{
				
				
			}

			// Method GetFrames
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,GetFrames_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,ToString_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property FrameCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Diagnostics_StackTrace_Fixture,get_FrameCount_Test)
			{
				
				
			}


		}
	}
}
