// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: SpinLock
// C++ Typed Name: mscorlib::System::Threading::SpinLock


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_SpinLock.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//SpinLock(mscorlib::System::Boolean enableThreadOwnerTracking)
			TEST(mscorlib_System_Threading_SpinLock_Fixture,Constructor_1)
			{
				
				
				
			}
			
			//Public Methods Tests
			
			// Method Enter
			//		Signature: mscorlib::System::Boolean lockTaken
			TEST(mscorlib_System_Threading_SpinLock_Fixture,Enter_Test)
			{
				
				
			}

			// Method TryEnter
			//		Signature: mscorlib::System::Boolean lockTaken
			TEST(mscorlib_System_Threading_SpinLock_Fixture,TryEnter_1_Test)
			{
				
				
			}

			// Method TryEnter
			//		Signature: mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean lockTaken
			TEST(mscorlib_System_Threading_SpinLock_Fixture,TryEnter_2_Test)
			{
				
				
			}

			// Method TryEnter
			//		Signature: mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean lockTaken
			TEST(mscorlib_System_Threading_SpinLock_Fixture,TryEnter_3_Test)
			{
				
				
			}

			// Method Exit
			//		Signature: 
			TEST(mscorlib_System_Threading_SpinLock_Fixture,Exit_1_Test)
			{
				
				
			}

			// Method Exit
			//		Signature: mscorlib::System::Boolean useMemoryBarrier
			TEST(mscorlib_System_Threading_SpinLock_Fixture,Exit_2_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property IsThreadOwnerTrackingEnabled
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_SpinLock_Fixture,get_IsThreadOwnerTrackingEnabled_Test)
			{
				
				
			}

			// Property IsHeld
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_SpinLock_Fixture,get_IsHeld_Test)
			{
				
				
			}

			// Property IsHeldByCurrentThread
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_SpinLock_Fixture,get_IsHeldByCurrentThread_Test)
			{
				
				
			}


		}
	}
}
