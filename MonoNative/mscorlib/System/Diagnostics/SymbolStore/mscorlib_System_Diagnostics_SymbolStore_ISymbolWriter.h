#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLWRITER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldAttributes.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymAddressKind.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterAttributes.h>
#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolDocumentWriter;
				class SymbolToken;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Guid;
		class Byte;
		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolWriter
				{
				public:
					ISymbolWriter(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter = nativeObject;
					};
				
					~ISymbolWriter()
					{
					};
				

					ISymbolWriter & operator=(ISymbolWriter &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter = value; return value; };


					virtual void  Close();
					virtual void  CloseMethod();
					virtual void  CloseNamespace();
					virtual void  CloseScope(mscorlib::System::Int32 endOffset);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter  DefineDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType);
					virtual void  DefineField(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3);
					virtual void  DefineGlobalVariable(mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3);
					virtual void  DefineLocalVariable(mscorlib::System::String name, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes, std::vector<mscorlib::System::Byte*> signature, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset);
					virtual void  DefineParameter(mscorlib::System::String name, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::Int32 sequence, mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__ addrKind, mscorlib::System::Int32 addr1, mscorlib::System::Int32 addr2, mscorlib::System::Int32 addr3);
					virtual void  DefineSequencePoints(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter document, std::vector<mscorlib::System::Int32*> offsets, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns, std::vector<mscorlib::System::Int32*> endLines, std::vector<mscorlib::System::Int32*> endColumns);
					virtual void  Initialize(mscorlib::System::IntPtr emitter, mscorlib::System::String filename, mscorlib::System::Boolean fFullBuild);
					virtual void  OpenMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method);
					virtual void  OpenNamespace(mscorlib::System::String name);
					virtual mscorlib::System::Int32  OpenScope(mscorlib::System::Int32 startOffset);
					virtual void  SetMethodSourceRange(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter startDoc, mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter endDoc, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn);
					virtual void  SetScopeRange(mscorlib::System::Int32 scopeID, mscorlib::System::Int32 startOffset, mscorlib::System::Int32 endOffset);
					virtual void  SetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data);
					virtual void  SetUnderlyingWriter(mscorlib::System::IntPtr underlyingWriter);
					virtual void  SetUserEntryPoint(mscorlib::System::Diagnostics::SymbolStore::SymbolToken entryMethod);
					virtual void  UsingNamespace(mscorlib::System::String fullName);


				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter;
				
				private:
				
				};

			}
		}
	}
}
#endif
