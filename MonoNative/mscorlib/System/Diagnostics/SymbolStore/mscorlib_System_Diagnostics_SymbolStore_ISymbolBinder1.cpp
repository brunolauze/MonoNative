#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolReader.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
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
				mscorlib::System::Diagnostics::SymbolStore::ISymbolReader ISymbolBinder1::GetReader(mscorlib::System::IntPtr importer, mscorlib::System::String filename, mscorlib::System::String searchPath)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(importer).name());
						__parameter_types__[1] = Global::GetType(typeid(filename).name());
						__parameter_types__[2] = Global::GetType(typeid(searchPath).name());
						__parameters__[0] = (MonoObject*)importer;
						__parameters__[1] = (MonoObject*)filename;
						__parameters__[2] = (MonoObject*)searchPath;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolBinder1", 0, NULL, "GetReader", __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolReader(__result__);
				}


			}
		}
	}
}
