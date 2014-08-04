#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				mscorlib::System::Int32 ISymbolDocument::FindClosestLine(mscorlib::System::Int32 line)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(line).name());
						__parameters__[0] = &line;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "FindClosestLine", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> ISymbolDocument::GetCheckSum()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "GetCheckSum", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Byte*> ISymbolDocument::GetSourceRange(mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(startLine).name());
						__parameter_types__[1] = Global::GetType(typeid(startColumn).name());
						__parameter_types__[2] = Global::GetType(typeid(endLine).name());
						__parameter_types__[3] = Global::GetType(typeid(endColumn).name());
						__parameters__[0] = &startLine;
						__parameters__[1] = &startColumn;
						__parameters__[2] = &endLine;
						__parameters__[3] = &endColumn;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "GetSourceRange", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 4, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				//Get Set Properties Methods
				//	Get:CheckSumAlgorithmId
				mscorlib::System::Guid  ISymbolDocument::get_CheckSumAlgorithmId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_CheckSumAlgorithmId", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:DocumentType
				mscorlib::System::Guid  ISymbolDocument::get_DocumentType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_DocumentType", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:HasEmbeddedSource
				mscorlib::System::Boolean  ISymbolDocument::get_HasEmbeddedSource()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_HasEmbeddedSource", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Language
				mscorlib::System::Guid  ISymbolDocument::get_Language()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_Language", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:LanguageVendor
				mscorlib::System::Guid  ISymbolDocument::get_LanguageVendor()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_LanguageVendor", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:SourceLength
				mscorlib::System::Int32  ISymbolDocument::get_SourceLength()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_SourceLength", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:URL
				mscorlib::System::String  ISymbolDocument::get_URL()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocument", 0, NULL, "get_URL", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
