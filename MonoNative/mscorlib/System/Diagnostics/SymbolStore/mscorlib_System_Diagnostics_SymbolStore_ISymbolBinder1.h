#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLBINDER1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLBINDER1_H

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

				class ISymbolBinder1
				{
				public:
					ISymbolBinder1(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1 = nativeObject;
					};
				
					~ISymbolBinder1()
					{
					};
				

					ISymbolBinder1 & operator=(ISymbolBinder1 &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1 = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1 = value; return value; };


					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolReader  GetReader(mscorlib::System::IntPtr importer, mscorlib::System::String filename, mscorlib::System::String searchPath);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolReader  GetReader(mscorlib::System::IntPtr importer, const char *filename, const char *searchPath);


				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolBinder1;
				
				private:
				
				};

			}
		}
	}
}
#endif
