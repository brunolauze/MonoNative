// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: Mutex
// C++ Typed Name: mscorlib::System::Threading::Mutex


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Mutex.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//Mutex()
			TEST(mscorlib_System_Threading_Mutex_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::Mutex *value = new mscorlib::System::Threading::Mutex();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Mutex(mscorlib::System::Boolean initiallyOwned)
			TEST(mscorlib_System_Threading_Mutex_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::Mutex *value = new mscorlib::System::Threading::Mutex();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name)
			TEST(mscorlib_System_Threading_Mutex_Fixture,Constructor_3)
			{
				
				mscorlib::System::Threading::Mutex *value = new mscorlib::System::Threading::Mutex();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name, mscorlib::System::Boolean createdNew)
			TEST(mscorlib_System_Threading_Mutex_Fixture,Constructor_4)
			{
				
				mscorlib::System::Threading::Mutex *value = new mscorlib::System::Threading::Mutex();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name, mscorlib::System::Boolean createdNew, mscorlib::System::Security::AccessControl::MutexSecurity mutexSecurity)
			TEST(mscorlib_System_Threading_Mutex_Fixture,Constructor_5)
			{
				
				mscorlib::System::Threading::Mutex *value = new mscorlib::System::Threading::Mutex();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetAccessControl
			//		Signature: 
			TEST(mscorlib_System_Threading_Mutex_Fixture,GetAccessControl_Test)
			{
				
				
			}

			// Method ReleaseMutex
			//		Signature: 
			TEST(mscorlib_System_Threading_Mutex_Fixture,ReleaseMutex_Test)
			{
				
				
			}

			// Method SetAccessControl
			//		Signature: mscorlib::System::Security::AccessControl::MutexSecurity mutexSecurity
			TEST(mscorlib_System_Threading_Mutex_Fixture,SetAccessControl_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method OpenExisting
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Threading_Mutex_Fixture,OpenExisting_1_StaticTest)
			{
				
				
			}

			// Method OpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights
			TEST(mscorlib_System_Threading_Mutex_Fixture,OpenExisting_2_StaticTest)
			{
				
				
			}

			// Method TryOpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Threading::Mutex result
			TEST(mscorlib_System_Threading_Mutex_Fixture,TryOpenExisting_1_StaticTest)
			{
				
				
			}

			// Method TryOpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights, mscorlib::System::Threading::Mutex result
			TEST(mscorlib_System_Threading_Mutex_Fixture,TryOpenExisting_2_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Handle
			//		Return Type: mscorlib::System::IntPtr
			//			Property Get Method
			TEST(mscorlib_System_Threading_Mutex_Fixture,get_Handle_Test)
			{
				
				
			}

			// Property Handle
			//		Return Type: mscorlib::System::IntPtr
			//			Property Set Method
			TEST(mscorlib_System_Threading_Mutex_Fixture,set_Handle_Test)
			{
				
				
			}

			// Property SafeWaitHandle
			//		Return Type: mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle
			//			Property Get Method
			TEST(mscorlib_System_Threading_Mutex_Fixture,get_SafeWaitHandle_Test)
			{
				
				
			}

			// Property SafeWaitHandle
			//		Return Type: mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle
			//			Property Set Method
			TEST(mscorlib_System_Threading_Mutex_Fixture,set_SafeWaitHandle_Test)
			{
				
				
			}


		}
	}
}
