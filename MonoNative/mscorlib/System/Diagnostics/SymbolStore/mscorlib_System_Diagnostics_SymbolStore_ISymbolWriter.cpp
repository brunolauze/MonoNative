#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymbolToken.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				//Public Methods
				void ISymbolWriter::Close()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "Close", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 0, NULL, NULL, NULL);
				}

				void ISymbolWriter::CloseMethod()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "CloseMethod", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 0, NULL, NULL, NULL);
				}

				void ISymbolWriter::CloseNamespace()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "CloseNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 0, NULL, NULL, NULL);
				}

				void ISymbolWriter::CloseScope(mscorlib::System::Int32 endOffset)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(endOffset).name());
						__parameters__[0] = &endOffset;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "CloseScope", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter ISymbolWriter::DefineDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineDocument", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter ISymbolWriter::DefineDocument(const char *url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineDocument", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter(__result__);
				}

				void ISymbolWriter::DefineField(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[5] = Global::GetType(typeid(addr1).name());
						__parameter_types__[6] = Global::GetType(typeid(addr2).name());
						__parameter_types__[7] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[4] = &__param_addrKind__;
						__parameters__[5] = &addr1;
						__parameters__[6] = &addr2;
						__parameters__[7] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineField", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 8, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineField(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, const char *name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[5] = Global::GetType(typeid(addr1).name());
						__parameter_types__[6] = Global::GetType(typeid(addr2).name());
						__parameter_types__[7] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[4] = &__param_addrKind__;
						__parameters__[5] = &addr1;
						__parameters__[6] = &addr2;
						__parameters__[7] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineField", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 8, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineGlobalVariable(mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineGlobalVariable", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 7, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineGlobalVariable(const char *name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineGlobalVariable", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 7, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineLocalVariable(mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameter_types__[7] = Global::GetType(typeid(startOffset).name());
						__parameter_types__[8] = Global::GetType(typeid(endOffset).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						__parameters__[7] = &startOffset;
						__parameters__[8] = &endOffset;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineLocalVariable", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 9, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineLocalVariable(const char *name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameter_types__[7] = Global::GetType(typeid(startOffset).name());
						__parameter_types__[8] = Global::GetType(typeid(endOffset).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						__parameters__[7] = &startOffset;
						__parameters__[8] = &endOffset;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineLocalVariable", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 9, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineParameter(mscorlib::System::String name, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::Int32 sequence, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(sequence).name());
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = &sequence;
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineParameter", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 7, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineParameter(const char *name, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::Int32 sequence, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(sequence).name());
						__parameter_types__[3] = Global::GetType(typeid(addrKind).name());
						__parameter_types__[4] = Global::GetType(typeid(addr1).name());
						__parameter_types__[5] = Global::GetType(typeid(addr2).name());
						__parameter_types__[6] = Global::GetType(typeid(addr3).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						int __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = &sequence;
						int __param_addrKind__ = addrKind;
						__parameters__[3] = &__param_addrKind__;
						__parameters__[4] = &addr1;
						__parameters__[5] = &addr2;
						__parameters__[6] = &addr3;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineParameter", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 7, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::DefineSequencePoints(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter document, std::vector<mscorlib::System::Int32*> offsets, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns, std::vector<mscorlib::System::Int32*> endLines, std::vector<mscorlib::System::Int32*> endColumns)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(document).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(offsets).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(lines).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(columns).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(endLines).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(endColumns).name()))->eklass);
						__parameters__[0] = (MonoObject*)document;
						__parameters__[1] = Global::FromArray<mscorlib::System::Int32*>(offsets, typeid(mscorlib::System::Int32).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Int32*>(lines, typeid(mscorlib::System::Int32).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Int32*>(columns, typeid(mscorlib::System::Int32).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Int32*>(endLines, typeid(mscorlib::System::Int32).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Int32*>(endColumns, typeid(mscorlib::System::Int32).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "DefineSequencePoints", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 6, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::Initialize(mscorlib::System::IntPtr emitter, mscorlib::System::String filename, mscorlib::System::Boolean fFullBuild)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(emitter).name());
						__parameter_types__[1] = Global::GetType(typeid(filename).name());
						__parameter_types__[2] = Global::GetType(typeid(fFullBuild).name());
						__parameters__[0] = (MonoObject*)emitter;
						__parameters__[1] = mono_string_new(Global::GetDomain(), filename);
						__parameters__[2] = reinterpret_cast<void*>(fFullBuild);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "Initialize", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 3, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::Initialize(mscorlib::System::IntPtr emitter, const char *filename, mscorlib::System::Boolean fFullBuild)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(emitter).name());
						__parameter_types__[1] = Global::GetType(typeid(filename).name());
						__parameter_types__[2] = Global::GetType(typeid(fFullBuild).name());
						__parameters__[0] = (MonoObject*)emitter;
						__parameters__[1] = mono_string_new(Global::GetDomain(), filename);
						__parameters__[2] = reinterpret_cast<void*>(fFullBuild);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "Initialize", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 3, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::OpenMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "OpenMethod", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::OpenNamespace(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "OpenNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::OpenNamespace(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "OpenNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 ISymbolWriter::OpenScope(mscorlib::System::Int32 startOffset)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(startOffset).name());
						__parameters__[0] = &startOffset;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "OpenScope", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void ISymbolWriter::SetMethodSourceRange(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter startDoc, mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter endDoc, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(startDoc).name());
						__parameter_types__[1] = Global::GetType(typeid(startLine).name());
						__parameter_types__[2] = Global::GetType(typeid(startColumn).name());
						__parameter_types__[3] = Global::GetType(typeid(endDoc).name());
						__parameter_types__[4] = Global::GetType(typeid(endLine).name());
						__parameter_types__[5] = Global::GetType(typeid(endColumn).name());
						__parameters__[0] = (MonoObject*)startDoc;
						__parameters__[1] = &startLine;
						__parameters__[2] = &startColumn;
						__parameters__[3] = (MonoObject*)endDoc;
						__parameters__[4] = &endLine;
						__parameters__[5] = &endColumn;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetMethodSourceRange", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 6, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::SetScopeRange(mscorlib::System::Int32 scopeID, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(scopeID).name());
						__parameter_types__[1] = Global::GetType(typeid(startOffset).name());
						__parameter_types__[2] = Global::GetType(typeid(endOffset).name());
						__parameters__[0] = &scopeID;
						__parameters__[1] = &startOffset;
						__parameters__[2] = &endOffset;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetScopeRange", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 3, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::SetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetSymAttribute", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 3, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::SetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, const char *name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameter_types__[1] = Global::GetType(typeid(name).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = (MonoObject*)parent;
						__parameters__[1] = mono_string_new(Global::GetDomain(), name);
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetSymAttribute", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 3, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::SetUnderlyingWriter(mscorlib::System::IntPtr underlyingWriter)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(underlyingWriter).name());
						__parameters__[0] = (MonoObject*)underlyingWriter;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetUnderlyingWriter", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::SetUserEntryPoint(mscorlib::System::Diagnostics::SymbolStore::SymbolToken entryMethod)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entryMethod).name());
						__parameters__[0] = (MonoObject*)entryMethod;
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "SetUserEntryPoint", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::UsingNamespace(mscorlib::System::String fullName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(fullName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), fullName);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "UsingNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}

				void ISymbolWriter::UsingNamespace(const char *fullName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(fullName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), fullName);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.SymbolStore", "ISymbolWriter", 0, NULL, "UsingNamespace", __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
