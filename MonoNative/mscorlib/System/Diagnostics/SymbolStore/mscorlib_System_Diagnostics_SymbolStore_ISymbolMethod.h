#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLMETHOD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLMETHOD_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolScope;
				class SymbolToken;
				class ISymbolNamespace;
				class ISymbolDocument;
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

				class ISymbolMethod
				{
				public:
					ISymbolMethod(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod = nativeObject;
					};
				
					~ISymbolMethod()
					{
					};
				

					ISymbolMethod & operator=(ISymbolMethod &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod = value; return value; };


					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolNamespace  GetNamespace();
					virtual mscorlib::System::Int32  GetOffset(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column);
					virtual std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolVariable*>  GetParameters();
					virtual std::vector<mscorlib::System::Int32*>  GetRanges(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument document, mscorlib::System::Int32 line, mscorlib::System::Int32 column);
					virtual mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  GetScope(mscorlib::System::Int32 offset);
					virtual void  GetSequencePoints(std::vector<mscorlib::System::Int32*> offsets, std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*> documents, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns, std::vector<mscorlib::System::Int32*> endLines, std::vector<mscorlib::System::Int32*> endColumns);
					virtual mscorlib::System::Boolean  GetSourceStartEnd(std::vector<mscorlib::System::Diagnostics::SymbolStore::ISymbolDocument*> docs, std::vector<mscorlib::System::Int32*> lines, std::vector<mscorlib::System::Int32*> columns);


					//Public Properties
					__declspec(property(get=get_RootScope)) mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  RootScope;
					__declspec(property(get=get_SequencePointCount)) mscorlib::System::Int32  SequencePointCount;
					__declspec(property(get=get_Token)) mscorlib::System::Diagnostics::SymbolStore::SymbolToken  Token;

					//Get Set Properties Methods
					//	Get:RootScope
					mscorlib::System::Diagnostics::SymbolStore::ISymbolScope  get_RootScope();

					//	Get:SequencePointCount
					mscorlib::System::Int32  get_SequencePointCount();

					//	Get:Token
					mscorlib::System::Diagnostics::SymbolStore::SymbolToken  get_Token();

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolMethod;
				
				private:
				
				};

			}
		}
	}
}
#endif
