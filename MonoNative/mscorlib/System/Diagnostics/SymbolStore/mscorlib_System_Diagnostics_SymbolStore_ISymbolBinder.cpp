#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolReader.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				mscorlib::System::Diagnostics::SymbolStore::ISymbolReader ISymbolBinder::GetReader(mscorlib::System::Int32 importer, mscorlib::System::String filename, mscorlib::System::String searchPath)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(importer).name());
						__parameter_types__[1] = Global::GetType(typeid(filename).name());
						__parameter_types__[2] = Global::GetType(typeid(searchPath).name());
						__parameters__[0] = &importer;
						__parameters__[1] = (MonoObject*)filename;
						__parameters__[2] = (MonoObject*)searchPath;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolBinder", 0, NULL, "GetReader", __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolReader(__result__);
				}


			}
		}
	}
}
