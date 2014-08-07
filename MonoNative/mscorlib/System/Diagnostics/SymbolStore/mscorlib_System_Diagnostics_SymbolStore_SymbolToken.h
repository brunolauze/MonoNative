#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMBOLTOKEN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMBOLTOKEN_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class SymbolToken
					: public mscorlib::System::ValueType
				{
				public:
					SymbolToken(mscorlib::System::Int32 val)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.SymbolStore.SymbolToken"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &val;
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.SymbolStore", "SymbolToken", 1, __parameter_types__, __parameters__);
					};
				
					SymbolToken(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					SymbolToken(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~SymbolToken()
					{
					};
				

					SymbolToken & operator=(SymbolToken &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SymbolToken &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Diagnostics::SymbolStore::SymbolToken obj);
					virtual mscorlib::System::Int32  GetHashCode() override;
					mscorlib::System::Int32  GetToken();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
