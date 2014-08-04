// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization.Formatters
// Name: InternalRM
// C++ Typed Name: mscorlib::System::Runtime::Serialization::Formatters::InternalRM


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_InternalRM.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					
					//InternalRM()
					TEST(mscorlib_System_Runtime_Serialization_Formatters_InternalRM_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Serialization::Formatters::InternalRM *value = new mscorlib::System::Runtime::Serialization::Formatters::InternalRM();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					//Public Static Methods Tests
					
					// Method InfoSoap
					//		Signature: std::vector<mscorlib::System::Object*> messages
					TEST(mscorlib_System_Runtime_Serialization_Formatters_InternalRM_Fixture,InfoSoap_StaticTest)
					{
						
						
					}

					// Method SoapCheckEnabled
					//		Signature: 
					TEST(mscorlib_System_Runtime_Serialization_Formatters_InternalRM_Fixture,SoapCheckEnabled_StaticTest)
					{
						
						
					}


				}
			}
		}
	}
}
