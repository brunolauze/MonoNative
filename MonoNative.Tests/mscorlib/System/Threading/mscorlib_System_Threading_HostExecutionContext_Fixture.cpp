// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: HostExecutionContext
// C++ Typed Name: mscorlib::System::Threading::HostExecutionContext


#include <gtest/gtest.h>
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
			
			//HostExecutionContext()
			TEST(mscorlib_System_Threading_HostExecutionContext_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::HostExecutionContext *value = new mscorlib::System::Threading::HostExecutionContext();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//HostExecutionContext(mscorlib::System::Object state)
			TEST(mscorlib_System_Threading_HostExecutionContext_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::HostExecutionContext *value = new mscorlib::System::Threading::HostExecutionContext();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CreateCopy
			//		Signature: 
			TEST(mscorlib_System_Threading_HostExecutionContext_Fixture,CreateCopy_Test)
			{
				
				
			}


		}
	}
}
