// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading.Tasks
// Name: TaskFactory
// C++ Typed Name: mscorlib::System::Threading::Tasks::TaskFactoryBase


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_TaskFactory.h>
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
				
				//TaskFactoryBase()
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Threading::Tasks::TaskFactoryBase *value = new mscorlib::System::Threading::Tasks::TaskFactoryBase();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//TaskFactoryBase(mscorlib::System::Threading::CancellationToken cancellationToken)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,Constructor_2)
				{
					
					mscorlib::System::Threading::Tasks::TaskFactoryBase *value = new mscorlib::System::Threading::Tasks::TaskFactoryBase();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//TaskFactoryBase(mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,Constructor_3)
				{
					
					mscorlib::System::Threading::Tasks::TaskFactoryBase *value = new mscorlib::System::Threading::Tasks::TaskFactoryBase();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//TaskFactoryBase(mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,Constructor_4)
				{
					
					mscorlib::System::Threading::Tasks::TaskFactoryBase *value = new mscorlib::System::Threading::Tasks::TaskFactoryBase();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//TaskFactoryBase(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler)
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,Constructor_5)
				{
					
					mscorlib::System::Threading::Tasks::TaskFactoryBase *value = new mscorlib::System::Threading::Tasks::TaskFactoryBase();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method StartNew
				//		Signature: mscorlib::Callback<void  ()> action
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_1_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_2_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  ()> action, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_3_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  ()> action, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_4_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_5_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_6_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_7_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> action, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_8_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_9_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_10_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_11_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  ()> function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_12_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_13_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_14_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_15_Test)
				{
					
					
				}

				// Method StartNew
				//		Signature: mscorlib::Callback<TResult  (mscorlib::System::Object )> function, mscorlib::System::Object state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,StartNew_16_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_1_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_2_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_3_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::TaskBase )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_4_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationAction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_5_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_6_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_7_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_8_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_9_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_10_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_11_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::TaskBase )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_12_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_13_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_14_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_15_Test)
				{
					
					
				}

				// Method ContinueWhenAny
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (mscorlib::System::Threading::Tasks::Task<TAntecedentResult> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAny_16_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_1_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_2_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_3_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_4_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationAction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_5_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_6_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationAction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_7_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<void  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationAction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_8_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_9_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_10_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_11_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::TaskBase*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::TaskBase*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_12_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_13_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_14_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_15_Test)
				{
					
					
				}

				// Method ContinueWhenAll
				//		Signature: std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> tasks, mscorlib::Callback<TResult  (std::vector<mscorlib::System::Threading::Tasks::Task<TAntecedentResult>*> )> continuationFunction, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__ continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,ContinueWhenAll_16_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_1_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_2_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_3_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_4_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_5_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::System::IAsyncResult asyncResult, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler scheduler
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_6_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_7_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_8_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_9_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_10_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_11_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_12_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_13_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_14_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_15_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_16_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_17_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_18_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_19_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_20_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_21_Test)
				{
					
					
				}

				// Method FromAsync
				//		Signature: mscorlib::Callback<mscorlib::System::IAsyncResult  (TArg1 , TArg2 , TArg3 , mscorlib::Callback<void  (mscorlib::System::IAsyncResult )> , mscorlib::System::Object )> beginMethod, mscorlib::Callback<TResult  (mscorlib::System::IAsyncResult )> endMethod, TArg1 arg1, TArg2 arg2, TArg3 arg3, mscorlib::System::Object state, mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__ creationOptions
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,FromAsync_22_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Scheduler
				//		Return Type: mscorlib::System::Threading::Tasks::TaskScheduler
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,get_Scheduler_Test)
				{
					
					
				}

				// Property ContinuationOptions
				//		Return Type: mscorlib::System::Threading::Tasks::TaskContinuationOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,get_ContinuationOptions_Test)
				{
					
					
				}

				// Property CreationOptions
				//		Return Type: mscorlib::System::Threading::Tasks::TaskCreationOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,get_CreationOptions_Test)
				{
					
					
				}

				// Property CancellationToken
				//		Return Type: mscorlib::System::Threading::CancellationToken
				//			Property Get Method
				TEST(mscorlib_System_Threading_Tasks_TaskFactory_Fixture,get_CancellationToken_Test)
				{
					
					
				}


			}
		}
	}
}
