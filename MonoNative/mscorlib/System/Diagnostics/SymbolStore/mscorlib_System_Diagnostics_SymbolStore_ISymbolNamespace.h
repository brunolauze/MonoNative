#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLNAMESPACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLNAMESPACE_H

#include <Global.h>

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

				class ISymbolVariable;
				

			}
		}
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

				class ISymbolNamespace
				{
				public:
					ISymbolNamespace(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace = nativeObject;
					};
				
					~ISymbolNamespace()
					{
					};
				

					ISymbolNamespace & operator=(ISymbolNamespace &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace = value; return value; };


					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*>  GetNamespaces();
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  GetVariables();


					//Public Properties
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  get_Name();

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolNamespace;
				
				private:
				
				};

			}
		}
	}
}
#endif
