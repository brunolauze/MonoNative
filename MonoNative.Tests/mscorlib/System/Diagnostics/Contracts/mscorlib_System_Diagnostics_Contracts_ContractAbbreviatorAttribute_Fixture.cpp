// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.Contracts
// Name: ContractAbbreviatorAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::Contracts::ContractAbbreviatorAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractAbbreviatorAttribute.h>
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
				
				//ContractAbbreviatorAttribute()
				TEST(mscorlib_System_Diagnostics_Contracts_ContractAbbreviatorAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::Contracts::ContractAbbreviatorAttribute *value = new mscorlib::System::Diagnostics::Contracts::ContractAbbreviatorAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Contracts_ContractAbbreviatorAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
