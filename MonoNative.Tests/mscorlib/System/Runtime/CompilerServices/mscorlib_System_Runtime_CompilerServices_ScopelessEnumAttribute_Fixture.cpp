// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: ScopelessEnumAttribute
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::ScopelessEnumAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ScopelessEnumAttribute.h>
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
				
				//ScopelessEnumAttribute()
				TEST(mscorlib_System_Runtime_CompilerServices_ScopelessEnumAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::ScopelessEnumAttribute *value = new mscorlib::System::Runtime::CompilerServices::ScopelessEnumAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_ScopelessEnumAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
