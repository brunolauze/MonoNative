// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: CallerFilePathAttribute
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::CallerFilePathAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CallerFilePathAttribute.h>
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
				
				//CallerFilePathAttribute()
				TEST(mscorlib_System_Runtime_CompilerServices_CallerFilePathAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::CallerFilePathAttribute *value = new mscorlib::System::Runtime::CompilerServices::CallerFilePathAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_CallerFilePathAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
