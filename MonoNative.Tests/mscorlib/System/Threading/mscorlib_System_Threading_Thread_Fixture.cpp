// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: Thread
// C++ Typed Name: mscorlib::System::Threading::Thread


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Thread.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ExecutionContext.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CompressedStack.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_LocalDataStoreSlot.h>
#include <mscorlib/System/mscorlib_System_AppDomain.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_UIntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//Thread(mscorlib::Callback<void  ()> start)
			TEST(mscorlib_System_Threading_Thread_Fixture,Constructor_1)
			{
				
				
				
			}
			
			//Thread(mscorlib::Callback<void  ()> start, mscorlib::System::Int32 maxStackSize)
			TEST(mscorlib_System_Threading_Thread_Fixture,Constructor_2)
			{
				
				
				
			}
			
			//Thread(mscorlib::Callback<void  (mscorlib::System::Object )> start)
			TEST(mscorlib_System_Threading_Thread_Fixture,Constructor_3)
			{
				
				
				
			}
			
			//Thread(mscorlib::Callback<void  (mscorlib::System::Object )> start, mscorlib::System::Int32 maxStackSize)
			TEST(mscorlib_System_Threading_Thread_Fixture,Constructor_4)
			{
				
				
				
			}
			
			//Public Methods Tests
			
			// Method Abort
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Abort_1_Test)
			{
				
				
			}

			// Method Abort
			//		Signature: mscorlib::System::Object stateInfo
			TEST(mscorlib_System_Threading_Thread_Fixture,Abort_2_Test)
			{
				
				
			}

			// Method Interrupt
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Interrupt_Test)
			{
				
				
			}

			// Method Join
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Join_1_Test)
			{
				
				
			}

			// Method Join
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_Thread_Fixture,Join_2_Test)
			{
				
				
			}

			// Method Join
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_Thread_Fixture,Join_3_Test)
			{
				
				
			}

			// Method Resume
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Resume_Test)
			{
				
				
			}

			// Method Start
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Start_1_Test)
			{
				
				
			}

			// Method Suspend
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Suspend_Test)
			{
				
				
			}

			// Method GetApartmentState
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,GetApartmentState_Test)
			{
				
				
			}

			// Method SetApartmentState
			//		Signature: mscorlib::System::Threading::ApartmentState::__ENUM__ state
			TEST(mscorlib_System_Threading_Thread_Fixture,SetApartmentState_Test)
			{
				
				
			}

			// Method TrySetApartmentState
			//		Signature: mscorlib::System::Threading::ApartmentState::__ENUM__ state
			TEST(mscorlib_System_Threading_Thread_Fixture,TrySetApartmentState_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,GetHashCode_Test)
			{
				
				
			}

			// Method Start
			//		Signature: mscorlib::System::Object parameter
			TEST(mscorlib_System_Threading_Thread_Fixture,Start_2_Test)
			{
				
				
			}

			// Method GetCompressedStack
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,GetCompressedStack_Test)
			{
				
				
			}

			// Method SetCompressedStack
			//		Signature: mscorlib::System::Threading::CompressedStack stack
			TEST(mscorlib_System_Threading_Thread_Fixture,SetCompressedStack_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method AllocateNamedDataSlot
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Threading_Thread_Fixture,AllocateNamedDataSlot_StaticTest)
			{
				
				
			}

			// Method FreeNamedDataSlot
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Threading_Thread_Fixture,FreeNamedDataSlot_StaticTest)
			{
				
				
			}

			// Method AllocateDataSlot
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,AllocateDataSlot_StaticTest)
			{
				
				
			}

			// Method GetData
			//		Signature: mscorlib::System::LocalDataStoreSlot slot
			TEST(mscorlib_System_Threading_Thread_Fixture,GetData_StaticTest)
			{
				
				
			}

			// Method SetData
			//		Signature: mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data
			TEST(mscorlib_System_Threading_Thread_Fixture,SetData_StaticTest)
			{
				
				
			}

			// Method GetNamedDataSlot
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Threading_Thread_Fixture,GetNamedDataSlot_StaticTest)
			{
				
				
			}

			// Method GetDomain
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,GetDomain_StaticTest)
			{
				
				
			}

			// Method GetDomainID
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,GetDomainID_StaticTest)
			{
				
				
			}

			// Method ResetAbort
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,ResetAbort_StaticTest)
			{
				
				
			}

			// Method Yield
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,Yield_StaticTest)
			{
				
				
			}

			// Method Sleep
			//		Signature: mscorlib::System::Int32 millisecondsTimeout
			TEST(mscorlib_System_Threading_Thread_Fixture,Sleep_1_StaticTest)
			{
				
				
			}

			// Method Sleep
			//		Signature: mscorlib::System::TimeSpan timeout
			TEST(mscorlib_System_Threading_Thread_Fixture,Sleep_2_StaticTest)
			{
				
				
			}

			// Method MemoryBarrier
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,MemoryBarrier_StaticTest)
			{
				
				
			}

			// Method SpinWait
			//		Signature: mscorlib::System::Int32 iterations
			TEST(mscorlib_System_Threading_Thread_Fixture,SpinWait_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Byte address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_1_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Double address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_2_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Int16 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_3_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Int32 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_4_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Int64 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_5_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::IntPtr address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_6_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Object address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_7_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::SByte address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_8_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::Single address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_9_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::UInt16 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_10_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::UInt32 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_11_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::UInt64 address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_12_StaticTest)
			{
				
				
			}

			// Method VolatileRead
			//		Signature: mscorlib::System::UIntPtr address
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileRead_13_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Byte address, mscorlib::System::Byte value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_1_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Double address, mscorlib::System::Double value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_2_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Int16 address, mscorlib::System::Int16 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_3_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Int32 address, mscorlib::System::Int32 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_4_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Int64 address, mscorlib::System::Int64 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_5_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::IntPtr address, mscorlib::System::IntPtr value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_6_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Object address, mscorlib::System::Object value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_7_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::SByte address, mscorlib::System::SByte value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_8_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::Single address, mscorlib::System::Single value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_9_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::UInt16 address, mscorlib::System::UInt16 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_10_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::UInt32 address, mscorlib::System::UInt32 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_11_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::UInt64 address, mscorlib::System::UInt64 value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_12_StaticTest)
			{
				
				
			}

			// Method VolatileWrite
			//		Signature: mscorlib::System::UIntPtr address, mscorlib::System::UIntPtr value
			TEST(mscorlib_System_Threading_Thread_Fixture,VolatileWrite_13_StaticTest)
			{
				
				
			}

			// Method BeginCriticalRegion
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,BeginCriticalRegion_StaticTest)
			{
				
				
			}

			// Method EndCriticalRegion
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,EndCriticalRegion_StaticTest)
			{
				
				
			}

			// Method BeginThreadAffinity
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,BeginThreadAffinity_StaticTest)
			{
				
				
			}

			// Method EndThreadAffinity
			//		Signature: 
			TEST(mscorlib_System_Threading_Thread_Fixture,EndThreadAffinity_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property ApartmentState
			//		Return Type: mscorlib::System::Threading::ApartmentState::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_ApartmentState_Test)
			{
				
				
			}

			// Property ApartmentState
			//		Return Type: mscorlib::System::Threading::ApartmentState::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_ApartmentState_Test)
			{
				
				
			}

			// Property CurrentCulture
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_CurrentCulture_Test)
			{
				
				
			}

			// Property CurrentCulture
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_CurrentCulture_Test)
			{
				
				
			}

			// Property CurrentUICulture
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_CurrentUICulture_Test)
			{
				
				
			}

			// Property CurrentUICulture
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_CurrentUICulture_Test)
			{
				
				
			}

			// Property IsThreadPoolThread
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_IsThreadPoolThread_Test)
			{
				
				
			}

			// Property IsAlive
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_IsAlive_Test)
			{
				
				
			}

			// Property IsBackground
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_IsBackground_Test)
			{
				
				
			}

			// Property IsBackground
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_IsBackground_Test)
			{
				
				
			}

			// Property Name
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_Name_Test)
			{
				
				
			}

			// Property Name
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_Name_Test)
			{
				
				
			}

			// Property Priority
			//		Return Type: mscorlib::System::Threading::ThreadPriority::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_Priority_Test)
			{
				
				
			}

			// Property Priority
			//		Return Type: mscorlib::System::Threading::ThreadPriority::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_Priority_Test)
			{
				
				
			}

			// Property ThreadState
			//		Return Type: mscorlib::System::Threading::ThreadState::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_ThreadState_Test)
			{
				
				
			}

			// Property ExecutionContext
			//		Return Type: mscorlib::System::Threading::ExecutionContext
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_ExecutionContext_Test)
			{
				
				
			}

			// Property ExecutionContext
			//		Return Type: mscorlib::System::Threading::ExecutionContext
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_ExecutionContext_Test)
			{
				
				
			}

			// Property ManagedThreadId
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_ManagedThreadId_Test)
			{
				
				
			}

			// Property CurrentContext
			//		Return Type: mscorlib::System::Runtime::Remoting::Contexts::Context
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_CurrentContext_Test)
			{
				
				
			}

			// Property CurrentPrincipal
			//		Return Type: mscorlib::System::Security::Principal::IPrincipal
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_CurrentPrincipal_Test)
			{
				
				
			}

			// Property CurrentPrincipal
			//		Return Type: mscorlib::System::Security::Principal::IPrincipal
			//			Property Set Method
			TEST(mscorlib_System_Threading_Thread_Fixture,set_CurrentPrincipal_Test)
			{
				
				
			}

			// Property CurrentThread
			//		Return Type: mscorlib::System::Threading::Thread
			//			Property Get Method
			TEST(mscorlib_System_Threading_Thread_Fixture,get_CurrentThread_Test)
			{
				
				
			}


		}
	}
}
