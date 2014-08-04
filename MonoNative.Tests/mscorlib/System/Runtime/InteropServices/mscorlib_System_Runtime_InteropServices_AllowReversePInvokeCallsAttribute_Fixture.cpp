// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: AllowReversePInvokeCallsAttribute
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::AllowReversePInvokeCallsAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_AllowReversePInvokeCallsAttribute.h>
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
				
				//AllowReversePInvokeCallsAttribute()
				TEST(mscorlib_System_Runtime_InteropServices_AllowReversePInvokeCallsAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::AllowReversePInvokeCallsAttribute *value = new mscorlib::System::Runtime::InteropServices::AllowReversePInvokeCallsAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_AllowReversePInvokeCallsAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
