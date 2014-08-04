// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization.Formatters
// Name: SoapFault
// C++ Typed Name: mscorlib::System::Runtime::Serialization::Formatters::SoapFault


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_SoapFault.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					//Constructors Tests
					
					//SoapFault()
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Serialization::Formatters::SoapFault *value = new mscorlib::System::Runtime::Serialization::Formatters::SoapFault();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//SoapFault(mscorlib::System::String faultCode, mscorlib::System::String faultString, mscorlib::System::String faultActor, mscorlib::System::Runtime::Serialization::Formatters::ServerFault serverFault)
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,Constructor_2)
					{
						
						mscorlib::System::Runtime::Serialization::Formatters::SoapFault *value = new mscorlib::System::Runtime::Serialization::Formatters::SoapFault();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method GetObjectData
					//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,GetObjectData_Test)
					{
						
						
					}

					//Public Properties Tests
					
					// Property Detail
					//		Return Type: mscorlib::System::Object
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,get_Detail_Test)
					{
						
						
					}

					// Property Detail
					//		Return Type: mscorlib::System::Object
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,set_Detail_Test)
					{
						
						
					}

					// Property FaultActor
					//		Return Type: mscorlib::System::String
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,get_FaultActor_Test)
					{
						
						
					}

					// Property FaultActor
					//		Return Type: mscorlib::System::String
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,set_FaultActor_Test)
					{
						
						
					}

					// Property FaultCode
					//		Return Type: mscorlib::System::String
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,get_FaultCode_Test)
					{
						
						
					}

					// Property FaultCode
					//		Return Type: mscorlib::System::String
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,set_FaultCode_Test)
					{
						
						
					}

					// Property FaultString
					//		Return Type: mscorlib::System::String
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,get_FaultString_Test)
					{
						
						
					}

					// Property FaultString
					//		Return Type: mscorlib::System::String
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Serialization_Formatters_SoapFault_Fixture,set_FaultString_Test)
					{
						
						
					}


				}
			}
		}
	}
}
