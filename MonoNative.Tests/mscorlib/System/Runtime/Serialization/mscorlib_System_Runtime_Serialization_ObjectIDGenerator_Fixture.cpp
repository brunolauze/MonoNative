// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: ObjectIDGenerator
// C++ Typed Name: mscorlib::System::Runtime::Serialization::ObjectIDGenerator


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ObjectIDGenerator.h>
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

				//Constructors Tests
				
				//ObjectIDGenerator()
				TEST(mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Serialization::ObjectIDGenerator *value = new mscorlib::System::Runtime::Serialization::ObjectIDGenerator();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method GetId
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Boolean firstTime
				TEST(mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Fixture,GetId_Test)
				{
					
					
				}

				// Method HasId
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Boolean firstTime
				TEST(mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Fixture,HasId_Test)
				{
					
					
				}


			}
		}
	}
}
