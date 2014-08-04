#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymbolToken.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				mscorlib::System::Boolean SymbolToken::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "SymbolToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SymbolToken::Equals(mscorlib::System::Diagnostics::SymbolStore::SymbolToken obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "SymbolToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 SymbolToken::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "SymbolToken", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 SymbolToken::GetToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "SymbolToken", 0, NULL, "GetToken", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
