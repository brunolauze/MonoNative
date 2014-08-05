#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLREADER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLREADER_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class SymbolToken;
				class ISymbolDocument;
				class ISymbolVariable;
				class ISymbolMethod;
				class ISymbolNamespace;
				

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

				class ISymbolReader
				{
				public:
					ISymbolReader(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolReader = nativeObject;
					};
				
					~ISymbolReader()
					{
					};
				

					ISymbolReader & operator=(ISymbolReader &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolReader; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolReader = value; return value; };


					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument  GetDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument  GetDocument(const char *url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType);
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*>  GetDocuments();
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  GetGlobalVariables();
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  GetMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  GetMethod(mscorlib::System::Diagnostics::SymbolStore::SymbolToken method, mscorlib::System::Int32 version);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  GetMethodFromDocumentPosition(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column);
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*>  GetNamespaces();
					virtual std::vector<mscorlib::System::Byte*>  GetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, mscorlib::System::String name);
					virtual std::vector<mscorlib::System::Byte*>  GetSymAttribute(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent, const char *name);
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  GetVariables(mscorlib::System::Diagnostics::SymbolStore::SymbolToken parent);


					//Public Properties
					__declspec(property(get=get_UserEntryPoint)) mscorlib::System::Diagnostics::SymbolStore::SymbolToken  UserEntryPoint;

					//Get Set Properties Methods
					//	Get:UserEntryPoint
					mscorlib::System::Diagnostics::SymbolStore::SymbolToken  get_UserEntryPoint() const;

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolReader;
				
				private:
				
				};

			}
		}
	}
}
#endif
