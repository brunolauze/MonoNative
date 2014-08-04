// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: OutAttribute
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::OutAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_OutAttribute.h>
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
				
				//OutAttribute()
				TEST(mscorlib_System_Runtime_InteropServices_OutAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::OutAttribute *value = new mscorlib::System::Runtime::InteropServices::OutAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_OutAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
