#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLSCOPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLSCOPE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolMethod;
				class ISymbolVariable;
				class ISymbolNamespace;
				

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

				class ISymbolScope
				{
				public:
					ISymbolScope(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolScope = nativeObject;
					};
				
					~ISymbolScope()
					{
					};
				

					ISymbolScope & operator=(ISymbolScope &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolScope; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolScope = value; return value; };


					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolScope*>  GetChildren();
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  GetLocals();
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace*>  GetNamespaces();


					//Public Properties
					__declspec(property(get=get_EndOffset)) mscorlib::System::Int32  EndOffset;
					__declspec(property(get=get_Method)) mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  Method;
					__declspec(property(get=get_Parent)) mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  Parent;
					__declspec(property(get=get_StartOffset)) mscorlib::System::Int32  StartOffset;

					//Get Set Properties Methods
					//	Get:EndOffset
					mscorlib::System::Int32  get_EndOffset() const;

					//	Get:Method
					mscorlib::System::Diagnostics::SymbolStore::ISymbolMethod  get_Method() const;

					//	Get:Parent
					mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  get_Parent() const;

					//	Get:StartOffset
					mscorlib::System::Int32  get_StartOffset() const;

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolScope;
				
				private:
				
				};

			}
		}
	}
}
#endif
