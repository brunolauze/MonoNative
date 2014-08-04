// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: OptionalFieldAttribute
// C++ Typed Name: mscorlib::System::Runtime::Serialization::OptionalFieldAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_OptionalFieldAttribute.h>
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
				
				//OptionalFieldAttribute()
				TEST(mscorlib_System_Runtime_Serialization_OptionalFieldAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Serialization::OptionalFieldAttribute *value = new mscorlib::System::Runtime::Serialization::OptionalFieldAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property VersionAdded
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Serialization_OptionalFieldAttribute_Fixture,get_VersionAdded_Test)
				{
					
					
				}

				// Property VersionAdded
				//		Return Type: mscorlib::System::Int32
				//			Property Set Method
				TEST(mscorlib_System_Runtime_Serialization_OptionalFieldAttribute_Fixture,set_VersionAdded_Test)
				{
					
					
				}

				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Serialization_OptionalFieldAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
