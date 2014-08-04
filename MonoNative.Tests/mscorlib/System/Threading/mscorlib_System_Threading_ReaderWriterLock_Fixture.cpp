// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: ReaderWriterLock
// C++ Typed Name: mscorlib::System::Threading::ReaderWriterLock


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ReaderWriterLock.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_LockCookie.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//ReaderWriterLock()
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::ReaderWriterLock *value = new mscorlib::System::Threading::ReaderWriterLock();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method AcquireReaderLock
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,AcquireReaderLock_1_Test)
			{
				
				
			}

			// Method AcquireReaderLock
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,AcquireReaderLock_2_Test)
			{
				
				
			}

			// Method AcquireWriterLock
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,AcquireWriterLock_1_Test)
			{
				
				
			}

			// Method AcquireWriterLock
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,AcquireWriterLock_2_Test)
			{
				
				
			}

			// Method AnyWritersSince
			//		Signature: mscorlib::System::Int32 seqNum
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,AnyWritersSince_Test)
			{
				
				
			}

			// Method DowngradeFromWriterLock
			//		Signature: mscorlib::System::Threading::LockCookie lockCookie
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,DowngradeFromWriterLock_Test)
			{
				
				
			}

			// Method ReleaseLock
			//		Signature: 
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,ReleaseLock_Test)
			{
				
				
			}

			// Method ReleaseReaderLock
			//		Signature: 
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,ReleaseReaderLock_Test)
			{
				
				
			}

			// Method ReleaseWriterLock
			//		Signature: 
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,ReleaseWriterLock_Test)
			{
				
				
			}

			// Method RestoreLock
			//		Signature: mscorlib::System::Threading::LockCookie lockCookie
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,RestoreLock_Test)
			{
				
				
			}

			// Method UpgradeToWriterLock
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,UpgradeToWriterLock_1_Test)
			{
				
				
			}

			// Method UpgradeToWriterLock
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,UpgradeToWriterLock_2_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property IsReaderLockHeld
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,get_IsReaderLockHeld_Test)
			{
				
				
			}

			// Property IsWriterLockHeld
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,get_IsWriterLockHeld_Test)
			{
				
				
			}

			// Property WriterSeqNum
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_ReaderWriterLock_Fixture,get_WriterSeqNum_Test)
			{
				
				
			}


		}
	}
}
