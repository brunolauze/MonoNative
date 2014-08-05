#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolReader.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymbolToken.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace.h>
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
				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument ISymbolReader::GetDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameter_types__[1] = Global::GetType(typeid(language).name());
						__parameter_types__[2] = Global::GetType(typeid(languageVendor).name());
						__parameter_types__[3] = Global::GetType(typeid(documentType).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), url);
						__parameters__[1] = (MonoObject*)language;
						__parameters__[2] = (MonoObject*)languageVendor;
						__parameters__[3] = (MonoObject*)documentType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetDocument", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument ISymbolReader::GetDocument(const char *url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameter_types__[1] = Global::GetType(typeid(language).name());
						__parameter_types__[2] = Global::GetType(typeid(languageVendor).name());
						__parameter_types__[3] = Global::GetType(typeid(documentType).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), url);
						__parameters__[1] = (MonoObject*)language;
						__parameters__[2] = (MonoObject*)languageVendor;
						__parameters__[3] = (MonoObject*)documentType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetDocument", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument(__result__);
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*> ISymbolReader::GetDocuments()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetDocuments", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*> ISymbolReader::GetGlobalVariables()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetGlobalVariables", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 0, NULL, NULL, NULL);
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

				mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod ISymbolReader::GetMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetMethod", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod ISymbolReader::GetMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method, mscorlib::System::Int32 version)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameter_types__[1] = Global::GetType(typeid(version).name());
						__parameters__[0] = (MonoObject*)method;
						__parameters__[1] = &version;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetMethod", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod ISymbolReader::GetMethodFromDocumentPosition(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(document).name());
						__parameter_types__[1] = Global::GetType(typeid(line).name());
						__parameter_types__[2] = Global::GetType(typeid(column).name());
						__parameters__[0] = (MonoObject*)document;
						__parameters__[1] = &line;
						__parameters__[2] = &column;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetMethodFromDocumentPosition", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod(__result__);
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*> ISymbolReader::GetNamespaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetNamespaces", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Byte*> ISymbolReader::GetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetSymAttribute", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> ISymbolReader::GetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, const char *name)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetSymAttribute", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*> ISymbolReader::GetVariables(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameters__[0] = (MonoObject*)parent;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "GetVariables", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 1, __parameter_types__, __parameters__, NULL);
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
				//	Get:UserEntryPoint
				mscorlib::System::Diagnostics::SymbolStore::SymbolToken  ISymbolReader::get_UserEntryPoint() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolReader", 0, NULL, "get_UserEntryPoint", __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader, 0, NULL, NULL, NULL);
					return mscorlib::System::Diagnostics::SymbolStore::SymbolToken(__result__);
				}



			}
		}
	}
}
