// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: CancellationTokenSource
// C++ Typed Name: mscorlib::System::Threading::CancellationTokenSource


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationTokenSource.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//CancellationTokenSource()
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::CancellationTokenSource *value = new mscorlib::System::Threading::CancellationTokenSource();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//CancellationTokenSource(mscorlib::System::Int32 millisecondsDelay)
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::CancellationTokenSource *value = new mscorlib::System::Threading::CancellationTokenSource();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//CancellationTokenSource(mscorlib::System::TimeSpan delay)
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,Constructor_3)
			{
				
				mscorlib::System::Threading::CancellationTokenSource *value = new mscorlib::System::Threading::CancellationTokenSource();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Cancel
			//		Signature: 
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,Cancel_1_Test)
			{
				
				
			}

			// Method Cancel
			//		Signature: mscorlib::System::Boolean throwOnFirstException
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,Cancel_2_Test)
			{
				
				
			}

			// Method CancelAfter
			//		Signature: mscorlib::System::TimeSpan delay
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,CancelAfter_1_Test)
			{
				
				
			}

			// Method CancelAfter
			//		Signature: mscorlib::System::Int32 millisecondsDelay
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,CancelAfter_2_Test)
			{
				
				
			}

			// Method Dispose
			//		Signature: 
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,Dispose_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method CreateLinkedTokenSource
			//		Signature: mscorlib::System::Threading::CancellationToken token1, mscorlib::System::Threading::CancellationToken token2
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,CreateLinkedTokenSource_1_StaticTest)
			{
				
				
			}

			// Method CreateLinkedTokenSource
			//		Signature: std::vector<mscorlib::System::Threading::CancellationToken*> tokens
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,CreateLinkedTokenSource_2_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Token
			//		Return Type: mscorlib::System::Threading::CancellationToken
			//			Property Get Method
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,get_Token_Test)
			{
				
				
			}

			// Property IsCancellationRequested
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_CancellationTokenSource_Fixture,get_IsCancellationRequested_Test)
			{
				
				
			}


		}
	}
}
