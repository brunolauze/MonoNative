// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: HostExecutionContextManager
// C++ Typed Name: mscorlib::System::Threading::HostExecutionContextManager


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContextManager.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//HostExecutionContextManager()
			TEST(mscorlib_System_Threading_HostExecutionContextManager_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::HostExecutionContextManager *value = new mscorlib::System::Threading::HostExecutionContextManager();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Capture
			//		Signature: 
			TEST(mscorlib_System_Threading_HostExecutionContextManager_Fixture,Capture_Test)
			{
				
				
			}

			// Method Revert
			//		Signature: mscorlib::System::Object previousState
			TEST(mscorlib_System_Threading_HostExecutionContextManager_Fixture,Revert_Test)
			{
				
				
			}

			// Method SetHostExecutionContext
			//		Signature: mscorlib::System::Threading::HostExecutionContext hostExecutionContext
			TEST(mscorlib_System_Threading_HostExecutionContextManager_Fixture,SetHostExecutionContext_Test)
			{
				
				
			}


		}
	}
}
