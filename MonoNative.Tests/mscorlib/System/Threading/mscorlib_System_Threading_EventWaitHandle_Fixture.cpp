// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: EventWaitHandle
// C++ Typed Name: mscorlib::System::Threading::EventWaitHandle


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_EventWaitHandle.h>
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
			
			//EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode)
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Constructor_1)
			{
				
				
				
			}
			
			//EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name)
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Constructor_2)
			{
				
				
				
			}
			
			//EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name, mscorlib::System::Boolean createdNew)
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Constructor_3)
			{
				
				
				
			}
			
			//EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name, mscorlib::System::Boolean createdNew, mscorlib::System::Security::AccessControl::EventWaitHandleSecurity eventSecurity)
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Constructor_4)
			{
				
				
				
			}
			
			//Public Methods Tests
			
			// Method GetAccessControl
			//		Signature: 
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,GetAccessControl_Test)
			{
				
				
			}

			// Method Reset
			//		Signature: 
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Reset_Test)
			{
				
				
			}

			// Method Set
			//		Signature: 
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,Set_Test)
			{
				
				
			}

			// Method SetAccessControl
			//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleSecurity eventSecurity
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,SetAccessControl_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method OpenExisting
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,OpenExisting_1_StaticTest)
			{
				
				
			}

			// Method OpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,OpenExisting_2_StaticTest)
			{
				
				
			}

			// Method TryOpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Threading::EventWaitHandle result
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,TryOpenExisting_1_StaticTest)
			{
				
				
			}

			// Method TryOpenExisting
			//		Signature: mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights, mscorlib::System::Threading::EventWaitHandle result
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,TryOpenExisting_2_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Handle
			//		Return Type: mscorlib::System::IntPtr
			//			Property Get Method
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,get_Handle_Test)
			{
				
				
			}

			// Property Handle
			//		Return Type: mscorlib::System::IntPtr
			//			Property Set Method
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,set_Handle_Test)
			{
				
				
			}

			// Property SafeWaitHandle
			//		Return Type: mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle
			//			Property Get Method
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,get_SafeWaitHandle_Test)
			{
				
				
			}

			// Property SafeWaitHandle
			//		Return Type: mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle
			//			Property Set Method
			TEST(mscorlib_System_Threading_EventWaitHandle_Fixture,set_SafeWaitHandle_Test)
			{
				
				
			}


		}
	}
}
