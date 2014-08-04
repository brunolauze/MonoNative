#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolScope.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolScope*> ISymbolScope::GetChildren()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "GetChildren", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolScope*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Diagnostics::SymbolStore::ISymbolScope (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*> ISymbolScope::GetLocals()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "GetLocals", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*> ISymbolScope::GetNamespaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "GetNamespaces", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
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

				//Get Set Properties Methods
				//	Get:EndOffset
				mscorlib::System::Int32  ISymbolScope::get_EndOffset()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "get_EndOffset", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Method
				mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  ISymbolScope::get_Method()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "get_Method", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
					return mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod(__result__);
				}


				//	Get:Parent
				mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  ISymbolScope::get_Parent()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "get_Parent", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
					return mscorlib::System::Diagnostics::SymbolStore::ISymbolScope(__result__);
				}


				//	Get:StartOffset
				mscorlib::System::Int32  ISymbolScope::get_StartOffset()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolScope", 0, NULL, "get_StartOffset", __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
