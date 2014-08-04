// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: AggregateException
// C++ Typed Name: mscorlib::System::AggregateException


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//AggregateException()
		TEST(mscorlib_System_AggregateException_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(mscorlib::System::String message)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_2)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(mscorlib::System::String message, mscorlib::System::Exception innerException)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_3)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(std::vector<mscorlib::System::Exception*> innerExceptions)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_4)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(mscorlib::System::String message, std::vector<mscorlib::System::Exception*> innerExceptions)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_5)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> innerExceptions)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_6)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AggregateException(mscorlib::System::String message, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Exception> innerExceptions)
		TEST(mscorlib_System_AggregateException_Fixture,Constructor_7)
		{
			
			mscorlib::System::AggregateException *value = new mscorlib::System::AggregateException();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method Flatten
		//		Signature: 
		TEST(mscorlib_System_AggregateException_Fixture,Flatten_Test)
		{
			
			
		}

		// Method Handle
		//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Exception )> predicate
		TEST(mscorlib_System_AggregateException_Fixture,Handle_Test)
		{
			
			
		}

		// Method ToString
		//		Signature: 
		TEST(mscorlib_System_AggregateException_Fixture,ToString_Test)
		{
			
			
		}

		// Method GetObjectData
		//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
		TEST(mscorlib_System_AggregateException_Fixture,GetObjectData_Test)
		{
			
			
		}

		// Method GetBaseException
		//		Signature: 
		TEST(mscorlib_System_AggregateException_Fixture,GetBaseException_Test)
		{
			
			
		}

		//Public Properties Tests
		
		// Property InnerExceptions
		//		Return Type: mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::Exception>
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_InnerExceptions_Test)
		{
			
			
		}

		// Property InnerException
		//		Return Type: mscorlib::System::Exception
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_InnerException_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_HelpLink_Test)
		{
			
			
		}

		// Property HelpLink
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AggregateException_Fixture,set_HelpLink_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_HResult_Test)
		{
			
			
		}

		// Property HResult
		//		Return Type: mscorlib::System::Int32
		//			Property Set Method
		TEST(mscorlib_System_AggregateException_Fixture,set_HResult_Test)
		{
			
			
		}

		// Property Message
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_Message_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_Source_Test)
		{
			
			
		}

		// Property Source
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AggregateException_Fixture,set_Source_Test)
		{
			
			
		}

		// Property StackTrace
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_StackTrace_Test)
		{
			
			
		}

		// Property TargetSite
		//		Return Type: mscorlib::System::Reflection::MethodBase
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_TargetSite_Test)
		{
			
			
		}

		// Property Data
		//		Return Type: mscorlib::System::Collections::IDictionary
		//			Property Get Method
		TEST(mscorlib_System_AggregateException_Fixture,get_Data_Test)
		{
			
			
		}


	}
}
