// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: FixedAddressValueTypeAttribute
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::FixedAddressValueTypeAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_FixedAddressValueTypeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Constructors Tests
				
				//FixedAddressValueTypeAttribute()
				TEST(mscorlib_System_Runtime_CompilerServices_FixedAddressValueTypeAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::FixedAddressValueTypeAttribute *value = new mscorlib::System::Runtime::CompilerServices::FixedAddressValueTypeAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_FixedAddressValueTypeAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
