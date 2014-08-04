#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolScope.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymbolToken.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument.h>
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
				mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace ISymbolMethod::GetNamespace()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 0, NULL, NULL, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace(__result__);
				}

				mscorlib::System::Int32 ISymbolMethod::GetOffset(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(document).name());
						__parameter_types__[1] = Global::GetType(typeid(line).name());
						__parameter_types__[2] = Global::GetType(typeid(column).name());
						__parameters__[0] = (MonoObject*)document;
						__parameters__[1] = &line;
						__parameters__[2] = &column;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetOffset", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*> ISymbolMethod::GetParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetParameters", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Int32*> ISymbolMethod::GetRanges(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(document).name());
						__parameter_types__[1] = Global::GetType(typeid(line).name());
						__parameter_types__[2] = Global::GetType(typeid(column).name());
						__parameters__[0] = (MonoObject*)document;
						__parameters__[1] = &line;
						__parameters__[2] = &column;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetRanges", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 3, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolScope ISymbolMethod::GetScope(mscorlib::System::Int32 offset)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(offset).name());
						__parameters__[0] = &offset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetScope", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolScope(__result__);
				}

				void ISymbolMethod::GetSequencePoints(std::vector<mscorlib::System::Int32*> offsets, std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*> documents, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns, std::vector<mscorlib::System::Int32*> endLines, std::vector<mscorlib::System::Int32*> endColumns)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(offsets).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(documents).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(lines).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(columns).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(endLines).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(endColumns).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Int32*>(offsets, typeid(mscorlib::System::Int32).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*>(documents, typeid(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Int32*>(lines, typeid(mscorlib::System::Int32).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Int32*>(columns, typeid(mscorlib::System::Int32).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Int32*>(endLines, typeid(mscorlib::System::Int32).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Int32*>(endColumns, typeid(mscorlib::System::Int32).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetSequencePoints", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 6, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean ISymbolMethod::GetSourceStartEnd(std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*> docs, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(docs).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(lines).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(columns).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*>(docs, typeid(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Int32*>(lines, typeid(mscorlib::System::Int32).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Int32*>(columns, typeid(mscorlib::System::Int32).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "GetSourceStartEnd", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:RootScope
				mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  ISymbolMethod::get_RootScope()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "get_RootScope", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 0, NULL, NULL, NULL);
					return mscorlib::System::Diagnostics::SymbolStore::ISymbolScope(__result__);
				}


				//	Get:SequencePointCount
				mscorlib::System::Int32  ISymbolMethod::get_SequencePointCount()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "get_SequencePointCount", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Token
				mscorlib::System::Diagnostics::SymbolStore::SymbolToken  ISymbolMethod::get_Token()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolMethod", 0, NULL, "get_Token", __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod, 0, NULL, NULL, NULL);
					return mscorlib::System::Diagnostics::SymbolStore::SymbolToken(__result__);
				}



			}
		}
	}
}
