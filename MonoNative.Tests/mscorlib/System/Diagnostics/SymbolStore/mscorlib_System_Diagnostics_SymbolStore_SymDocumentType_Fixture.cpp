// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.SymbolStore
// Name: SymDocumentType
// C++ Typed Name: mscorlib::System::Diagnostics::SymbolStore::SymDocumentType


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymDocumentType.h>
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
				
				//SymDocumentType()
				TEST(mscorlib_System_Diagnostics_SymbolStore_SymDocumentType_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::SymbolStore::SymDocumentType *value = new mscorlib::System::Diagnostics::SymbolStore::SymDocumentType();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				

			}
		}
	}
}
