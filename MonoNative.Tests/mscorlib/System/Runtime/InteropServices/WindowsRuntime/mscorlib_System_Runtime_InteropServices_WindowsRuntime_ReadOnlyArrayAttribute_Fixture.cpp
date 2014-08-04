// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices.WindowsRuntime
// Name: ReadOnlyArrayAttribute
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::WindowsRuntime::ReadOnlyArrayAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_ReadOnlyArrayAttribute.h>
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
				namespace WindowsRuntime
				{

					//Constructors Tests
					
					//ReadOnlyArrayAttribute()
					TEST(mscorlib_System_Runtime_InteropServices_WindowsRuntime_ReadOnlyArrayAttribute_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::InteropServices::WindowsRuntime::ReadOnlyArrayAttribute *value = new mscorlib::System::Runtime::InteropServices::WindowsRuntime::ReadOnlyArrayAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					//Public Properties Tests
					
					// Property TypeId
					//		Return Type: mscorlib::System::Object
					//			Property Get Method
					TEST(mscorlib_System_Runtime_InteropServices_WindowsRuntime_ReadOnlyArrayAttribute_Fixture,get_TypeId_Test)
					{
						
						
					}


				}
			}
		}
	}
}
