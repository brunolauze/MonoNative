// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: ManualResetEventSlim
// C++ Typed Name: mscorlib::System::Threading::ManualResetEventSlim


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ManualResetEventSlim.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//ManualResetEventSlim()
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::ManualResetEventSlim *value = new mscorlib::System::Threading::ManualResetEventSlim();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//ManualResetEventSlim(mscorlib::System::Boolean initialState)
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::ManualResetEventSlim *value = new mscorlib::System::Threading::ManualResetEventSlim();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//ManualResetEventSlim(mscorlib::System::Boolean initialState, mscorlib::System::Int32 spinCount)
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Constructor_3)
			{
				
				mscorlib::System::Threading::ManualResetEventSlim *value = new mscorlib::System::Threading::ManualResetEventSlim();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Reset
			//		Signature: 
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Reset_Test)
			{
				
				
			}

			// Method Set
			//		Signature: 
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Set_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: 
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_1_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_2_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_3_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_4_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_5_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Wait_6_Test)
			{
				
				
			}

			// Method Dispose
			//		Signature: 
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,Dispose_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property IsSet
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,get_IsSet_Test)
			{
				
				
			}

			// Property SpinCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,get_SpinCount_Test)
			{
				
				
			}

			// Property WaitHandle
			//		Return Type: mscorlib::System::Threading::WaitHandle
			//			Property Get Method
			TEST(mscorlib_System_Threading_ManualResetEventSlim_Fixture,get_WaitHandle_Test)
			{
				
				
			}


		}
	}
}
