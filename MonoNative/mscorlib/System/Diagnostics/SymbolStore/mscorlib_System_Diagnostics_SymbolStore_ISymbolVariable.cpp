#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable.h>
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
				std::vector<mscorlib::System::Byte*> ISymbolVariable::GetSignature()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "GetSignature", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
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
				//	Get:AddressField1
				mscorlib::System::Int32  ISymbolVariable::get_AddressField1() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_AddressField1", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:AddressField2
				mscorlib::System::Int32  ISymbolVariable::get_AddressField2() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_AddressField2", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:AddressField3
				mscorlib::System::Int32  ISymbolVariable::get_AddressField3() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_AddressField3", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:AddressKind
				mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__  ISymbolVariable::get_AddressKind() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_AddressKind", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Object  ISymbolVariable::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_Attributes", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:EndOffset
				mscorlib::System::Int32  ISymbolVariable::get_EndOffset() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_EndOffset", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  ISymbolVariable::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_Name", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:StartOffset
				mscorlib::System::Int32  ISymbolVariable::get_StartOffset() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolVariable", 0, NULL, "get_StartOffset", __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
