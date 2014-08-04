// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: TypeIdentifierAttribute
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::TypeIdentifierAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Constructors Tests
				
				//TypeIdentifierAttribute()
				TEST(mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::TypeIdentifierAttribute *value = new mscorlib::System::Runtime::InteropServices::TypeIdentifierAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//TypeIdentifierAttribute(mscorlib::System::String scope, mscorlib::System::String identifier)
				TEST(mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute_Fixture,Constructor_2)
				{
					
					mscorlib::System::Runtime::InteropServices::TypeIdentifierAttribute *value = new mscorlib::System::Runtime::InteropServices::TypeIdentifierAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property Scope
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute_Fixture,get_Scope_Test)
				{
					
					
				}

				// Property Identifier
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute_Fixture,get_Identifier_Test)
				{
					
					
				}

				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_TypeIdentifierAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
