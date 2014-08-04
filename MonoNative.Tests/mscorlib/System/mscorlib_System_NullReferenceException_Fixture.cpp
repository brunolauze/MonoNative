// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: NullReferenceException
// C++ Typed Name: mscorlib::System::NullReferenceException


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_NullReferenceException.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//NullReferenceException()
		TEST(mscorlib_System_NullReferenceException_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::NullReferenceException *value = new mscorlib::System::NullReferenceException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//NullReferenceException(mscorlib::System::String message)
		TEST(mscorlib_System_NullReferenceException_Fixture,Constructor_2)
		{
			
			mscorlib::System::NullReferenceException *value = new mscorlib::System::NullReferenceException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//NullReferenceException(mscorlib::System::String message, mscorlib::System::Exception innerException)
		TEST(mscorlib_System_NullReferenceException_Fixture,Constructor_3)
		{
			
			mscorlib::System::NullReferenceException *value = new mscorlib::System::NullReferenceException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		//Public Properties Tests
		
		// Property InnerException
		//		Return Type: mscorlib::System::Exception
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_InnerException_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_HelpLink_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_NullReferenceException_Fixture,set_HelpLink_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_HResult_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Set Method
		TEST(mscorlib_System_NullReferenceException_Fixture,set_HResult_Test)
		{
			
			
		}

		// Property Message
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_Message_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_Source_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_NullReferenceException_Fixture,set_Source_Test)
		{
			
			
		}

		// Property StackTrace
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_StackTrace_Test)
		{
			
			
		}

		// Property TargetSite
		//		Return Type: mscorlib::System::Reflection::MethodBase
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_TargetSite_Test)
		{
			
			
		}

		// Property Data
		//		Return Type: mscorlib::System::Collections::IDictionary
		//			Property Get Method
		TEST(mscorlib_System_NullReferenceException_Fixture,get_Data_Test)
		{
			
			
		}


	}
}
