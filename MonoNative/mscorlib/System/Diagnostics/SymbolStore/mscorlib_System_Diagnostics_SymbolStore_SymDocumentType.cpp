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

				//Public Methods
					//	Get/Set:Text
				mscorlib::System::Guid SymDocumentType::get_Text()
				{
					return Global::GetFieldValue("mscorlib", "System.Diagnostics.SymbolStore", "SymDocumentType", 0, NULL, "Text");
				}

				void SymDocumentType::set_Text(mscorlib::System::Guid  value)
				{
					throw;
				}


			}
		}
	}
}
