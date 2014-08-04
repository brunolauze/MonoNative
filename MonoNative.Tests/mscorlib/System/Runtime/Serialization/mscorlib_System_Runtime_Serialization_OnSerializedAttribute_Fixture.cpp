// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: OnSerializedAttribute
// C++ Typed Name: mscorlib::System::Runtime::Serialization::OnSerializedAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h>
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
				
				//OnSerializedAttribute()
				TEST(mscorlib_System_Runtime_Serialization_OnSerializedAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Serialization::OnSerializedAttribute *value = new mscorlib::System::Runtime::Serialization::OnSerializedAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Serialization_OnSerializedAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
