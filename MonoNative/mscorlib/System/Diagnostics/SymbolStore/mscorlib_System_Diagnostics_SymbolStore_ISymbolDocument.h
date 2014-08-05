#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLDOCUMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLDOCUMENT_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		class String;
		class Byte;
		

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

				class ISymbolDocument
				{
				public:
					ISymbolDocument(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument = nativeObject;
					};
				
					~ISymbolDocument()
					{
					};
				

					ISymbolDocument & operator=(ISymbolDocument &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument = value; return value; };


					virtual mscorlib::System::Int32  FindClosestLine(mscorlib::System::Int32 line);
					virtual std::vector<mscorlib::System::Byte*>  GetCheckSum();
					virtual std::vector<mscorlib::System::Byte*>  GetSourceRange(mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn);


					//Public Properties
					__declspec(property(get=get_CheckSumAlgorithmId)) mscorlib::System::Guid  CheckSumAlgorithmId;
					__declspec(property(get=get_DocumentType)) mscorlib::System::Guid  DocumentType;
					__declspec(property(get=get_HasEmbeddedSource)) mscorlib::System::Boolean  HasEmbeddedSource;
					__declspec(property(get=get_Language)) mscorlib::System::Guid  Language;
					__declspec(property(get=get_LanguageVendor)) mscorlib::System::Guid  LanguageVendor;
					__declspec(property(get=get_SourceLength)) mscorlib::System::Int32  SourceLength;
					__declspec(property(get=get_URL)) mscorlib::System::String  URL;

					//Get Set Properties Methods
					//	Get:CheckSumAlgorithmId
					mscorlib::System::Guid  get_CheckSumAlgorithmId() const;

					//	Get:DocumentType
					mscorlib::System::Guid  get_DocumentType() const;

					//	Get:HasEmbeddedSource
					mscorlib::System::Boolean  get_HasEmbeddedSource() const;

					//	Get:Language
					mscorlib::System::Guid  get_Language() const;

					//	Get:LanguageVendor
					mscorlib::System::Guid  get_LanguageVendor() const;

					//	Get:SourceLength
					mscorlib::System::Int32  get_SourceLength() const;

					//	Get:URL
					mscorlib::System::String  get_URL() const;

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocument;
				
				private:
				
				};

			}
		}
	}
}
#endif
