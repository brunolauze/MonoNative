// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: ReferenceAssemblyAttribute
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::ReferenceAssemblyAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ReferenceAssemblyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Constructors Tests
				
				//ReferenceAssemblyAttribute()
				TEST(mscorlib_System_Runtime_CompilerServices_ReferenceAssemblyAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::ReferenceAssemblyAttribute *value = new mscorlib::System::Runtime::CompilerServices::ReferenceAssemblyAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ReferenceAssemblyAttribute(mscorlib::System::String description)
				TEST(mscorlib_System_Runtime_CompilerServices_ReferenceAssemblyAttribute_Fixture,Constructor_2)
				{
					
					mscorlib::System::Runtime::CompilerServices::ReferenceAssemblyAttribute *value = new mscorlib::System::Runtime::CompilerServices::ReferenceAssemblyAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property Description
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_ReferenceAssemblyAttribute_Fixture,get_Description_Test)
				{
					
					
				}

				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_CompilerServices_ReferenceAssemblyAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
