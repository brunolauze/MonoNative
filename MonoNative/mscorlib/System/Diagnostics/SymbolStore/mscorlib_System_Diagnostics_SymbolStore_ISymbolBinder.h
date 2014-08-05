#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLBINDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLBINDER_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolReader;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		

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

				class ISymbolBinder
				{
				public:
					ISymbolBinder(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder = nativeObject;
					};
				
					~ISymbolBinder()
					{
					};
				

					ISymbolBinder & operator=(ISymbolBinder &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder = value; return value; };


					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolReader  GetReader(mscorlib::System::Int32 importer, mscorlib::System::String filename, mscorlib::System::String searchPath);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolReader  GetReader(mscorlib::System::Int32 importer, const char *filename, const char *searchPath);


				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder;
				
				private:
				
				};

			}
		}
	}
}
#endif
