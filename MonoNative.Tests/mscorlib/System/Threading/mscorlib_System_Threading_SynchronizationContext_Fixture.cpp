// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: SynchronizationContext
// C++ Typed Name: mscorlib::System::Threading::SynchronizationContext


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_SynchronizationContext.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//SynchronizationContext()
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::SynchronizationContext *value = new mscorlib::System::Threading::SynchronizationContext();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method CreateCopy
			//		Signature: 
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,CreateCopy_Test)
			{
				
				
			}

			// Method IsWaitNotificationRequired
			//		Signature: 
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,IsWaitNotificationRequired_Test)
			{
				
				
			}

			// Method OperationCompleted
			//		Signature: 
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,OperationCompleted_Test)
			{
				
				
			}

			// Method OperationStarted
			//		Signature: 
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,OperationStarted_Test)
			{
				
				
			}

			// Method Post
			//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,Post_Test)
			{
				
				
			}

			// Method Send
			//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,Send_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: std::vector<mscorlib::System::IntPtr*> waitHandles, mscorlib::System::Boolean waitAll, mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,Wait_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method SetSynchronizationContext
			//		Signature: mscorlib::System::Threading::SynchronizationContext syncContext
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,SetSynchronizationContext_StaticTest)
			{
				
				
			}

			// Property Current
			//		Return Type: mscorlib::System::Threading::SynchronizationContext
			//			Property Get Method
			TEST(mscorlib_System_Threading_SynchronizationContext_Fixture,get_Current_Test)
			{
				
				
			}


		}
	}
}
