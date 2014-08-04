// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: CountdownEvent
// C++ Typed Name: mscorlib::System::Threading::CountdownEvent


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CountdownEvent.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//CountdownEvent(mscorlib::System::Int32 initialCount)
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Constructor_1)
			{
				
				
				
			}
			
			//Public Methods Tests
			
			// Method Signal
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Signal_1_Test)
			{
				
				
			}

			// Method Signal
			//		Signature: mscorlib::System::Int32 signalCount
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Signal_2_Test)
			{
				
				
			}

			// Method AddCount
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,AddCount_1_Test)
			{
				
				
			}

			// Method AddCount
			//		Signature: mscorlib::System::Int32 signalCount
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,AddCount_2_Test)
			{
				
				
			}

			// Method TryAddCount
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,TryAddCount_1_Test)
			{
				
				
			}

			// Method TryAddCount
			//		Signature: mscorlib::System::Int32 signalCount
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,TryAddCount_2_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_1_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_2_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_3_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_4_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_5_Test)
			{
				
				
			}

			// Method Wait
			//		Signature: mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Wait_6_Test)
			{
				
				
			}

			// Method Reset
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Reset_1_Test)
			{
				
				
			}

			// Method Reset
			//		Signature: mscorlib::System::Int32 count
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Reset_2_Test)
			{
				
				
			}

			// Method Dispose
			//		Signature: 
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,Dispose_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property CurrentCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,get_CurrentCount_Test)
			{
				
				
			}

			// Property InitialCount
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,get_InitialCount_Test)
			{
				
				
			}

			// Property IsSet
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,get_IsSet_Test)
			{
				
				
			}

			// Property WaitHandle
			//		Return Type: mscorlib::System::Threading::WaitHandle
			//			Property Get Method
			TEST(mscorlib_System_Threading_CountdownEvent_Fixture,get_WaitHandle_Test)
			{
				
				
			}


		}
	}
}
