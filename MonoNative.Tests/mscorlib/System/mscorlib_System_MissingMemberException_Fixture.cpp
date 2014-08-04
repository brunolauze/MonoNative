// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: MissingMemberException
// C++ Typed Name: mscorlib::System::MissingMemberException


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_MissingMemberException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//MissingMemberException()
		TEST(mscorlib_System_MissingMemberException_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::MissingMemberException *value = new mscorlib::System::MissingMemberException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//MissingMemberException(mscorlib::System::String message)
		TEST(mscorlib_System_MissingMemberException_Fixture,Constructor_2)
		{
			
			mscorlib::System::MissingMemberException *value = new mscorlib::System::MissingMemberException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//MissingMemberException(mscorlib::System::String message, mscorlib::System::Exception inner)
		TEST(mscorlib_System_MissingMemberException_Fixture,Constructor_3)
		{
			
			mscorlib::System::MissingMemberException *value = new mscorlib::System::MissingMemberException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//MissingMemberException(mscorlib::System::String className, mscorlib::System::String memberName)
		TEST(mscorlib_System_MissingMemberException_Fixture,Constructor_4)
		{
			
			mscorlib::System::MissingMemberException *value = new mscorlib::System::MissingMemberException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method GetObjectData
		//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
		TEST(mscorlib_System_MissingMemberException_Fixture,GetObjectData_Test)
		{
			
			
		}

		//Public Properties Tests
		
		// Property Message
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_Message_Test)
		{
			
			
		}

		// Property InnerException
		//		Return Type: mscorlib::System::Exception
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_InnerException_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_HelpLink_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_MissingMemberException_Fixture,set_HelpLink_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_HResult_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Set Method
		TEST(mscorlib_System_MissingMemberException_Fixture,set_HResult_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_Source_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_MissingMemberException_Fixture,set_Source_Test)
		{
			
			
		}

		// Property StackTrace
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_StackTrace_Test)
		{
			
			
		}

		// Property TargetSite
		//		Return Type: mscorlib::System::Reflection::MethodBase
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_TargetSite_Test)
		{
			
			
		}

		// Property Data
		//		Return Type: mscorlib::System::Collections::IDictionary
		//			Property Get Method
		TEST(mscorlib_System_MissingMemberException_Fixture,get_Data_Test)
		{
			
			
		}


	}
}
