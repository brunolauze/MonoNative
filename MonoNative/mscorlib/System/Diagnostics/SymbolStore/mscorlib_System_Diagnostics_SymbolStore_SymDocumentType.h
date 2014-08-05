#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMDOCUMENTTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMDOCUMENTTYPE_H

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

				class SymDocumentType
					: public mscorlib::System::Object
				{
				public:
					SymDocumentType()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.SymbolStore.SymDocumentType"))
					{
						__native_object__ = Global::New("mscorlib", "System.Diagnostics.SymbolStore", "SymDocumentType");
					};
				
					SymDocumentType(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					SymDocumentType(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~SymDocumentType()
					{
					};
				

					SymDocumentType & operator=(SymDocumentType &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Guid , mscorlib::System::Diagnostics::SymbolStore::SymDocumentType> Text;

					//	Get/Set:Text
					static mscorlib::System::Guid  get_Text();
					static void set_Text(mscorlib::System::Guid  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
