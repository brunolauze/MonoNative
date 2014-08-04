#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLDOCUMENTWRITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLDOCUMENTWRITER_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

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

				class ISymbolDocumentWriter
				{
				public:
					ISymbolDocumentWriter(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter = nativeObject;
					};
				
					~ISymbolDocumentWriter()
					{
					};
				

					ISymbolDocumentWriter & operator=(ISymbolDocumentWriter &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter = value; return value; };


					virtual void  SetCheckSum(mscorlib::System::Guid algorithmId, std::vector<mscorlib::System::Byte*> checkSum);
					virtual void  SetSource(std::vector<mscorlib::System::Byte*> source);


				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter;
				
				private:
				
				};

			}
		}
	}
}
#endif
