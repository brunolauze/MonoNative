#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMLANGUAGEVENDOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMLANGUAGEVENDOR_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Guid;
		

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

				class SymLanguageVendor
					: public mscorlib::System::Object
				{
				public:
					SymLanguageVendor()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.SymbolStore.SymLanguageVendor"))
					{
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.SymbolStore", "SymLanguageVendor");
					};
				
					SymLanguageVendor(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SymLanguageVendor(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SymLanguageVendor()
					{
					};
				

					SymLanguageVendor & operator=(SymLanguageVendor &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SymLanguageVendor &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymLanguageVendor> Microsoft;

					//	Get/Set:Microsoft
					static mscorlib::System::Guid  get_Microsoft();
					static void set_Microsoft(mscorlib::System::Guid  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
