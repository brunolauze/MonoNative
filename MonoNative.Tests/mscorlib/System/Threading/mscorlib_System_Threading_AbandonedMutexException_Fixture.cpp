// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Threading
// Name: AbandonedMutexException
// C++ Typed Name: mscorlib::System::Threading::AbandonedMutexException


#include <gtest/gtest.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_AbandonedMutexException.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_Mutex.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Constructors Tests
			
			//AbandonedMutexException()
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AbandonedMutexException(mscorlib::System::String message)
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,Constructor_2)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AbandonedMutexException(mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,Constructor_3)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Exception inner)
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,Constructor_4)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,Constructor_5)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AbandonedMutexException(mscorlib::System::String message, mscorlib::System::Exception inner, mscorlib::System::Int32 location, mscorlib::System::Threading::WaitHandle handle)
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,Constructor_6)
			{
				
				mscorlib::System::Threading::AbandonedMutexException *value = new mscorlib::System::Threading::AbandonedMutexException();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property Mutex
			//		Return Type: mscorlib::System::Threading::Mutex
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_Mutex_Test)
			{
				
				
			}

			// Property MutexIndex
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_MutexIndex_Test)
			{
				
				
			}

			// Property InnerException
			//		Return Type: mscorlib::System::Exception
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_InnerException_Test)
			{
				
				
			}

			// Property HelpLink
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_HelpLink_Test)
			{
				
				
			}

			// Property HelpLink
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,set_HelpLink_Test)
			{
				
				
			}

			// Property HResult
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_HResult_Test)
			{
				
				
			}

			// Property HResult
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,set_HResult_Test)
			{
				
				
			}

			// Property Message
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_Message_Test)
			{
				
				
			}

			// Property Source
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_Source_Test)
			{
				
				
			}

			// Property Source
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,set_Source_Test)
			{
				
				
			}

			// Property StackTrace
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_StackTrace_Test)
			{
				
				
			}

			// Property TargetSite
			//		Return Type: mscorlib::System::Reflection::MethodBase
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_TargetSite_Test)
			{
				
				
			}

			// Property Data
			//		Return Type: mscorlib::System::Collections::IDictionary
			//			Property Get Method
			TEST(mscorlib_System_Threading_AbandonedMutexException_Fixture,get_Data_Test)
			{
				
				
			}


		}
	}
}
