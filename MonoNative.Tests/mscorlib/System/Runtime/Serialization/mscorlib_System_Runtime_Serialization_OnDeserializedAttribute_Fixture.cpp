// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: OnDeserializedAttribute
// C++ Typed Name: mscorlib::System::Runtime::Serialization::OnDeserializedAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_OnDeserializedAttribute.h>
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
				
				//OnDeserializedAttribute()
				TEST(mscorlib_System_Runtime_Serialization_OnDeserializedAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Serialization::OnDeserializedAttribute *value = new mscorlib::System::Runtime::Serialization::OnDeserializedAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Serialization_OnDeserializedAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
