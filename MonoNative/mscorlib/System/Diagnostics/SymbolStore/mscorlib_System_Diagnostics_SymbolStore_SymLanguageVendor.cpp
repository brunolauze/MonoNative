#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymLanguageVendor.h>
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
					//	Get/Set:Microsoft
				mscorlib::System::Guid SymLanguageVendor::get_Microsoft()
				{
					return Global::GetFieldValue("mscorlib", "System.Diagnostics.SymbolStore", "SymLanguageVendor", 0, NULL, "Microsoft");
				}



			}
		}
	}
}
