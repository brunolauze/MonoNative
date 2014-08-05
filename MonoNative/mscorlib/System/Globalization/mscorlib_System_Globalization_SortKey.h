#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_SORTKEY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_SORTKEY_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class SortKey
				: public mscorlib::System::Object
			{
			public:
				SortKey(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				SortKey(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~SortKey()
				{
				};
			

				SortKey & operator=(SortKey &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Int32  Compare(mscorlib::System::Globalization::SortKey sortkey1, mscorlib::System::Globalization::SortKey sortkey2);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_OriginalString)) mscorlib::System::String  OriginalString;
				__declspec(property(get=get_KeyData)) std::vector<mscorlib::System::Byte*>  KeyData;

				//Get Set Properties Methods
				//	Get:OriginalString
				mscorlib::System::String  get_OriginalString() const;

				//	Get:KeyData
				std::vector<mscorlib::System::Byte*>  get_KeyData() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
