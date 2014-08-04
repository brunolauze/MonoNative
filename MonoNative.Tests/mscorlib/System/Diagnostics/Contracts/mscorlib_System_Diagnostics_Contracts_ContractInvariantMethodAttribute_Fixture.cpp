// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.Contracts
// Name: ContractInvariantMethodAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::Contracts::ContractInvariantMethodAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractInvariantMethodAttribute.h>
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
				
				//ContractInvariantMethodAttribute()
				TEST(mscorlib_System_Diagnostics_Contracts_ContractInvariantMethodAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::Contracts::ContractInvariantMethodAttribute *value = new mscorlib::System::Diagnostics::Contracts::ContractInvariantMethodAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Contracts_ContractInvariantMethodAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
