// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: ThreadPool
// C++ Typed Name: mscorlib::System::Threading::ThreadPool


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ThreadPool.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_SafeHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_RegisteredWaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_NativeOverlapped.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods Tests
			
			//Public Static Methods Tests
			
			// Method BindHandle
			//		Signature: mscorlib::System::IntPtr osHandle
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,BindHandle_1_StaticTest)
			{
				
				
			}

			// Method BindHandle
			//		Signature: mscorlib::System::Runtime::InteropServices::SafeHandle osHandle
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,BindHandle_2_StaticTest)
			{
				
				
			}

			// Method GetAvailableThreads
			//		Signature: mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,GetAvailableThreads_StaticTest)
			{
				
				
			}

			// Method GetMaxThreads
			//		Signature: mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,GetMaxThreads_StaticTest)
			{
				
				
			}

			// Method GetMinThreads
			//		Signature: mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,GetMinThreads_StaticTest)
			{
				
				
			}

			// Method SetMinThreads
			//		Signature: mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,SetMinThreads_StaticTest)
			{
				
				
			}

			// Method SetMaxThreads
			//		Signature: mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,SetMaxThreads_StaticTest)
			{
				
				
			}

			// Method QueueUserWorkItem
			//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> callBack
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,QueueUserWorkItem_1_StaticTest)
			{
				
				
			}

			// Method QueueUserWorkItem
			//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,QueueUserWorkItem_2_StaticTest)
			{
				
				
			}

			// Method RegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,RegisterWaitForSingleObject_1_StaticTest)
			{
				
				
			}

			// Method RegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,RegisterWaitForSingleObject_2_StaticTest)
			{
				
				
			}

			// Method RegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,RegisterWaitForSingleObject_3_StaticTest)
			{
				
				
			}

			// Method RegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,RegisterWaitForSingleObject_4_StaticTest)
			{
				
				
			}

			// Method UnsafeQueueNativeOverlapped
			//		Signature: mscorlib::System::Threading::NativeOverlapped* overlapped
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeQueueNativeOverlapped_StaticTest)
			{
				
				
			}

			// Method UnsafeQueueUserWorkItem
			//		Signature: mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeQueueUserWorkItem_StaticTest)
			{
				
				
			}

			// Method UnsafeRegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeRegisterWaitForSingleObject_1_StaticTest)
			{
				
				
			}

			// Method UnsafeRegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeRegisterWaitForSingleObject_2_StaticTest)
			{
				
				
			}

			// Method UnsafeRegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeRegisterWaitForSingleObject_3_StaticTest)
			{
				
				
			}

			// Method UnsafeRegisterWaitForSingleObject
			//		Signature: mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce
			TEST(mscorlib_System_Threading_ThreadPool_Fixture,UnsafeRegisterWaitForSingleObject_4_StaticTest)
			{
				
				
			}


		}
	}
}
