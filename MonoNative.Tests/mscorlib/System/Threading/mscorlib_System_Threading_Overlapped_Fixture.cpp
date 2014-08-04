// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: Overlapped
// C++ Typed Name: mscorlib::System::Threading::Overlapped


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Overlapped.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_NativeOverlapped.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//Overlapped()
			TEST(mscorlib_System_Threading_Overlapped_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::Overlapped *value = new mscorlib::System::Threading::Overlapped();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Overlapped(mscorlib::System::Int32 offsetLo, mscorlib::System::Int32 offsetHi, mscorlib::System::Int32 hEvent, mscorlib::System::IAsyncResult ar)
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::Overlapped *value = new mscorlib::System::Threading::Overlapped();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Overlapped(mscorlib::System::Int32 offsetLo, mscorlib::System::Int32 offsetHi, mscorlib::System::IntPtr hEvent, mscorlib::System::IAsyncResult ar)
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Constructor_3)
			{
				
				mscorlib::System::Threading::Overlapped *value = new mscorlib::System::Threading::Overlapped();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Pack
			//		Signature: mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Pack_1_Test)
			{
				
				
			}

			// Method Pack
			//		Signature: mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Pack_2_Test)
			{
				
				
			}

			// Method UnsafePack
			//		Signature: mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb
			TEST(mscorlib_System_Threading_Overlapped_Fixture,UnsafePack_1_Test)
			{
				
				
			}

			// Method UnsafePack
			//		Signature: mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData
			TEST(mscorlib_System_Threading_Overlapped_Fixture,UnsafePack_2_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method Free
			//		Signature: mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Free_StaticTest)
			{
				
				
			}

			// Method Unpack
			//		Signature: mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr
			TEST(mscorlib_System_Threading_Overlapped_Fixture,Unpack_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property AsyncResult
			//		Return Type: mscorlib::System::IAsyncResult
			//			Property Get Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,get_AsyncResult_Test)
			{
				
				
			}

			// Property AsyncResult
			//		Return Type: mscorlib::System::IAsyncResult
			//			Property Set Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,set_AsyncResult_Test)
			{
				
				
			}

			// Property EventHandle
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,get_EventHandle_Test)
			{
				
				
			}

			// Property EventHandle
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,set_EventHandle_Test)
			{
				
				
			}

			// Property EventHandleIntPtr
			//		Return Type: mscorlib::System::IntPtr
			//			Property Get Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,get_EventHandleIntPtr_Test)
			{
				
				
			}

			// Property EventHandleIntPtr
			//		Return Type: mscorlib::System::IntPtr
			//			Property Set Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,set_EventHandleIntPtr_Test)
			{
				
				
			}

			// Property OffsetHigh
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,get_OffsetHigh_Test)
			{
				
				
			}

			// Property OffsetHigh
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,set_OffsetHigh_Test)
			{
				
				
			}

			// Property OffsetLow
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,get_OffsetLow_Test)
			{
				
				
			}

			// Property OffsetLow
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Threading_Overlapped_Fixture,set_OffsetLow_Test)
			{
				
				
			}


		}
	}
}
