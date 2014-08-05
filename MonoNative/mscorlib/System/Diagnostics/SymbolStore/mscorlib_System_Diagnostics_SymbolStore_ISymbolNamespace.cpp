#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*> ISymbolNamespace::GetNamespaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolNamespace", 0, NULL, "GetNamespaces", __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*> ISymbolNamespace::GetVariables()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolNamespace", 0, NULL, "GetVariables", __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable (__array_item__));
						}
						return __array_result__;
				}

				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  ISymbolNamespace::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolNamespace", 0, NULL, "get_Name", __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
