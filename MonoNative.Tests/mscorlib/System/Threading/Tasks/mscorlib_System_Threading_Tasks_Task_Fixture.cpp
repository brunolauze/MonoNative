// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading.Tasks
// Name: Task
// C++ Typed Name: mscorlib::System::Threading::Tasks::TaskBase


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_TaskAwaiter.h>
#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_YieldAwaitable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskFactory.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Constructors Tests
				
				//TaskBase(mscorlib::Callback<void  ()> action)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_5)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_6)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_7)
				{
					
					
					
				}
				
				//TaskBase(mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions)
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Constructor_8)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method Start
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Start_1_Test)
				{
					
					
				}

				// Method Start
				//		Signature: mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Start_2_Test)
				{
					
					
				}

				// Method RunSynchronously
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,RunSynchronously_1_Test)
				{
					
					
				}

				// Method RunSynchronously
				//		Signature: mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,RunSynchronously_2_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_1_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_2_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_3_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_4_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_5_Test)
				{
					
					
				}

				// Method Wait
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Wait_1_Test)
				{
					
					
				}

				// Method Wait
				//		Signature: mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Wait_2_Test)
				{
					
					
				}

				// Method Wait
				//		Signature: mscorlib::System::TimeSpan timeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Wait_3_Test)
				{
					
					
				}

				// Method Wait
				//		Signature: mscorlib::System::Int32 millisecondsTimeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Wait_4_Test)
				{
					
					
				}

				// Method Wait
				//		Signature: mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Wait_5_Test)
				{
					
					
				}

				// Method Dispose
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Dispose_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_6_Test)
				{
					
					
				}

				// Method ConfigureAwait
				//		Signature: mscorlib::System::Boolean continueOnCapturedContext
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ConfigureAwait_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_7_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_8_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_9_Test)
				{
					
					
				}

				// Method ContinueWith
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase , mscorlib::System::Object )> continuationAction, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,ContinueWith_10_Test)
				{
					
					
				}

				// Method GetAwaiter
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,GetAwaiter_Test)
				{
					
					
				}

				//Public Static Methods Tests
				
				// Method WaitAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAll_1_StaticTest)
				{
					
					
				}

				// Method WaitAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAll_2_StaticTest)
				{
					
					
				}

				// Method WaitAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAll_3_StaticTest)
				{
					
					
				}

				// Method WaitAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAll_4_StaticTest)
				{
					
					
				}

				// Method WaitAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAll_5_StaticTest)
				{
					
					
				}

				// Method WaitAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAny_1_StaticTest)
				{
					
					
				}

				// Method WaitAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::TimeSpan timeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAny_2_StaticTest)
				{
					
					
				}

				// Method WaitAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAny_3_StaticTest)
				{
					
					
				}

				// Method WaitAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAny_4_StaticTest)
				{
					
					
				}

				// Method WaitAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WaitAny_5_StaticTest)
				{
					
					
				}

				// Method Delay
				//		Signature: mscorlib::System::Int32 millisecondsDelay
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Delay_1_StaticTest)
				{
					
					
				}

				// Method Delay
				//		Signature: mscorlib::System::TimeSpan delay
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Delay_2_StaticTest)
				{
					
					
				}

				// Method Delay
				//		Signature: mscorlib::System::TimeSpan delay, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Delay_3_StaticTest)
				{
					
					
				}

				// Method Delay
				//		Signature: mscorlib::System::Int32 millisecondsDelay, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Delay_4_StaticTest)
				{
					
					
				}

				// Method Run
				//		Signature: mscorlib::Callback<void  ()> action
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Run_1_StaticTest)
				{
					
					
				}

				// Method Run
				//		Signature: mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Run_2_StaticTest)
				{
					
					
				}

				// Method Run
				//		Signature: mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Run_3_StaticTest)
				{
					
					
				}

				// Method Run
				//		Signature: mscorlib::Callback<mscorlib::System::Threading::Tasks::TaskBase  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Run_4_StaticTest)
				{
					
					
				}

				// Method WhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WhenAll_1_StaticTest)
				{
					
					
				}

				// Method WhenAll
				//		Signature: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Threading::Tasks::TaskBase> tasks
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,WhenAll_2_StaticTest)
				{
					
					
				}

				// Method Yield
				//		Signature: 
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,Yield_StaticTest)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Exception
				//		Return Type: mscorlib::System::AggregateException
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_Exception_Test)
				{
					
					
				}

				// Property IsCanceled
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_IsCanceled_Test)
				{
					
					
				}

				// Property IsCompleted
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_IsCompleted_Test)
				{
					
					
				}

				// Property IsFaulted
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_IsFaulted_Test)
				{
					
					
				}

				// Property CreationOptions
				//		Return Type: mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_CreationOptions_Test)
				{
					
					
				}

				// Property Status
				//		Return Type: mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_Status_Test)
				{
					
					
				}

				// Property Status
				//		Return Type: mscorlib::System::Threading::Tasks::TaskStatus::__ENUM__
				//			Property Set Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,set_Status_Test)
				{
					
					
				}

				// Property AsyncState
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_AsyncState_Test)
				{
					
					
				}

				// Property Id
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_Id_Test)
				{
					
					
				}

				// Property Factory
				//		Return Type: mscorlib::System::Threading::Tasks::TaskFactoryBase
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_Factory_Test)
				{
					
					
				}

				// Property CurrentId
				//		Return Type: mscorlib::System::Nullable<mscorlib::System::Int32>
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_Task_Fixture,get_CurrentId_Test)
				{
					
					
				}


			}
		}
	}
}
