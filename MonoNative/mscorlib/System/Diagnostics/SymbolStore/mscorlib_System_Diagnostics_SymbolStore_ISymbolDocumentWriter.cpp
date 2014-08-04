#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
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
				void ISymbolDocumentWriter::SetCheckSum(mscorlib::System::Guid algorithmId, std::vector<mscorlib::System::Byte*> checkSum)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(algorithmId).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(checkSum).name()))->eklass);
						__parameters__[0] = (MonoObject*)algorithmId;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(checkSum, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocumentWriter", 0, NULL, "SetCheckSum", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter, 2, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolDocumentWriter::SetSource(std::vector<mscorlib::System::Byte*> source)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(source).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(source, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolDocumentWriter", 0, NULL, "SetSource", __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
