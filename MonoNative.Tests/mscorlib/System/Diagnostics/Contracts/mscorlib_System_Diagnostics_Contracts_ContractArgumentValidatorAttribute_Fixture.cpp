// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.Contracts
// Name: ContractArgumentValidatorAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::Contracts::ContractArgumentValidatorAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractArgumentValidatorAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{

				//Constructors Tests
				
				//ContractArgumentValidatorAttribute()
				TEST(mscorlib_System_Diagnostics_Contracts_ContractArgumentValidatorAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::Contracts::ContractArgumentValidatorAttribute *value = new mscorlib::System::Diagnostics::Contracts::ContractArgumentValidatorAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Contracts_ContractArgumentValidatorAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
