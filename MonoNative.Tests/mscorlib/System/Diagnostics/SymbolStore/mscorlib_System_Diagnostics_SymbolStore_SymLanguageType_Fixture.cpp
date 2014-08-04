// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.SymbolStore
// Name: SymLanguageType
// C++ Typed Name: mscorlib::System::Diagnostics::SymbolStore::SymLanguageType


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymLanguageType.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Constructors Tests
				
				//SymLanguageType()
				TEST(mscorlib_System_Diagnostics_SymbolStore_SymLanguageType_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::SymbolStore::SymLanguageType *value = new mscorlib::System::Diagnostics::SymbolStore::SymLanguageType();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				

			}
		}
	}
}
