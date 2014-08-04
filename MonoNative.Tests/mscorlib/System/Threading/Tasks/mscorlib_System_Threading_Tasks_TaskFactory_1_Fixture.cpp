// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading.Tasks
// Name: TaskFactory`1
// C++ Typed Name: mscorlib::System::Threading::Tasks::TaskFactory<TResult>


#include <gtest/gtest.h>
#include <mscorlib.h>


namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				//Constructors Tests
				
				//TaskFactory()
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,DefaultConstructor)
				{
					
					
					
				}
				
				//TaskFactory(mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//TaskFactory(mscorlib::System::Threading::CancellationToken cancellationToken)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//TaskFactory(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//TaskFactory(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,Constructor_5)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_1_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_2_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_3_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_4_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_5_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_6_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_7_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,StartNew_8_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_1_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_2_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_3_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_4_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_5_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_6_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_7_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAny_8_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_1_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_2_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_3_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_4_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_5_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_6_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_7_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,ContinueWhenAll_8_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_1_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_2_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_3_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_4_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_5_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_6_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_7_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_8_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_9_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_10_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,FromAsync_11_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Scheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,get_Scheduler_Test)
				{
					
					
				}

				// Property ContinuationOptions
				//		Return Type: mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,get_ContinuationOptions_Test)
				{
					
					
				}

				// Property CreationOptions
				//		Return Type: mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,get_CreationOptions_Test)
				{
					
					
				}

				// Property CancellationToken
				//		Return Type: mscorlib::System::Threading::CancellationToken
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_1_Fixture,get_CancellationToken_Test)
				{
					
					
				}


			}
		}
	}
}
