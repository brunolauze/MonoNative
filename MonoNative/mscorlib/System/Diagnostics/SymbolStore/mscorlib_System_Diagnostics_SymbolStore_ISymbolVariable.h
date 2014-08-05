#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLVARIABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_ISYMBOLVARIABLE_H

#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_SymAddressKind.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

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

				class ISymbolVariable
				{
				public:
					ISymbolVariable(MonoObject *nativeObject)
					{
						__mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable = nativeObject;
					};
				
					~ISymbolVariable()
					{
					};
				

					ISymbolVariable & operator=(ISymbolVariable &value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable = value.__mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable; return value; };
					operator MonoObject*() { return __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable = value; return value; };


					virtual std::vector<mscorlib::System::Byte*>  GetSignature();


					//Public Properties
					__declspec(property(get=get_AddressField1)) mscorlib::System::Int32  AddressField1;
					__declspec(property(get=get_AddressField2)) mscorlib::System::Int32  AddressField2;
					__declspec(property(get=get_AddressField3)) mscorlib::System::Int32  AddressField3;
					__declspec(property(get=get_AddressKind)) mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__  AddressKind;
					__declspec(property(get=get_Attributes)) mscorlib::System::Object  Attributes;
					__declspec(property(get=get_EndOffset)) mscorlib::System::Int32  EndOffset;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_StartOffset)) mscorlib::System::Int32  StartOffset;

					//Get Set Properties Methods
					//	Get:AddressField1
					mscorlib::System::Int32  get_AddressField1() const;

					//	Get:AddressField2
					mscorlib::System::Int32  get_AddressField2() const;

					//	Get:AddressField3
					mscorlib::System::Int32  get_AddressField3() const;

					//	Get:AddressKind
					mscorlib::System::Diagnostics::SymbolStore::SymAddressKind::__ENUM__  get_AddressKind() const;

					//	Get:Attributes
					mscorlib::System::Object  get_Attributes() const;

					//	Get:EndOffset
					mscorlib::System::Int32  get_EndOffset() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:StartOffset
					mscorlib::System::Int32  get_StartOffset() const;

				
				protected:
					MonoObject *__mscorlib_System_Diagnostics_SymbolStore_ISymbolVariable;
				
				private:
				
				};

			}
		}
	}
}
#endif
