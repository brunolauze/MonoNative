// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: MethodImplAttribute
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::MethodImplAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_MethodImplAttribute.h>
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
				
				//MethodImplAttribute()
				TEST(mscorlib_System_Runtime_CompilerServices_MethodImplAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::MethodImplAttribute *value = new mscorlib::System::Runtime::CompilerServices::MethodImplAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//MethodImplAttribute(mscorlib::System::Int16 value)
				TEST(mscorlib_System_Runtime_CompilerServices_MethodImplAttribute_Fixture,Constructor_2)
				{
					
					mscorlib::System::Runtime::CompilerServices::MethodImplAttribute *value = new mscorlib::System::Runtime::CompilerServices::MethodImplAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//MethodImplAttribute(mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__ methodImplOptions)
				TEST(mscorlib_System_Runtime_CompilerServices_MethodImplAttribute_Fixture,Constructor_3)
				{
					
					mscorlib::System::Runtime::CompilerServices::MethodImplAttribute *value = new mscorlib::System::Runtime::CompilerServices::MethodImplAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property Value
				//		Return Type: mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_MethodImplAttribute_Fixture,get_Value_Test)
				{
					
					
				}

				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_MethodImplAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
