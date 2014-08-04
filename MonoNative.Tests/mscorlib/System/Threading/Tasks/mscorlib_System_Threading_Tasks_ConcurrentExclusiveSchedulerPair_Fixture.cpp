// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading.Tasks
// Name: ConcurrentExclusiveSchedulerPair
// C++ Typed Name: mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Constructors Tests
				
				//ConcurrentExclusiveSchedulerPair()
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair *value = new mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler)
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,Constructor_2)
				{
					
					mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair *value = new mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler, mscorlib::System::Int32 maxConcurrencyLevel)
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,Constructor_3)
				{
					
					mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair *value = new mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ConcurrentExclusiveSchedulerPair(mscorlib::System::Threading::Tasks::TaskScheduler taskScheduler, mscorlib::System::Int32 maxConcurrencyLevel, mscorlib::System::Int32 maxItemsPerTask)
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,Constructor_4)
				{
					
					mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair *value = new mscorlib::System::Threading::Tasks::ConcurrentExclusiveSchedulerPair();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Complete
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,Complete_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property ConcurrentScheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,get_ConcurrentScheduler_Test)
				{
					
					
				}

				// Property ExclusiveScheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,get_ExclusiveScheduler_Test)
				{
					
					
				}

				// Property Completion
				//		Return Type: mscorlib::System::Threading::Tasks::TaskBase
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_ConcurrentExclusiveSchedulerPair_Fixture,get_Completion_Test)
				{
					
					
				}


			}
		}
	}
}
