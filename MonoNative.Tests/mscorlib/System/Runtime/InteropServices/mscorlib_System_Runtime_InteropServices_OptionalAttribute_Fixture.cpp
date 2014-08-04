// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: OptionalAttribute
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::OptionalAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_OptionalAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Constructors Tests
				
				//OptionalAttribute()
				TEST(mscorlib_System_Runtime_InteropServices_OptionalAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::OptionalAttribute *value = new mscorlib::System::Runtime::InteropServices::OptionalAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_OptionalAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
