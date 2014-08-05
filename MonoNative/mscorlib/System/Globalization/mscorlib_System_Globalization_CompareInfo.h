#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_COMPAREINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_COMPAREINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CompareOptions.h>

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
		namespace Globalization
		{

			class SortKey;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Assembly;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CompareInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
			{
			public:
				CompareInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				{
				};
			
				CompareInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				{
				};
			
				~CompareInfo()
				{
				};
			

				CompareInfo & operator=(CompareInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::String string2);
				virtual mscorlib::System::Int32  Compare(const char *string1, const char *string2);
				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::String string2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  Compare(const char *string1, const char *string2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::String string2, mscorlib::System::Int32 offset2);
				virtual mscorlib::System::Int32  Compare(const char *string1, mscorlib::System::Int32 offset1, const char *string2, mscorlib::System::Int32 offset2);
				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  Compare(const char *string1, mscorlib::System::Int32 offset1, const char *string2, mscorlib::System::Int32 offset2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2);
				virtual mscorlib::System::Int32  Compare(const char *string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, const char *string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2);
				virtual mscorlib::System::Int32  Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  Compare(const char *string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, const char *string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(mscorlib::System::Int32 culture);
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(mscorlib::System::String name);
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(const char *name);
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(mscorlib::System::Int32 culture, mscorlib::System::Reflection::Assembly assembly);
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(mscorlib::System::String name, mscorlib::System::Reflection::Assembly assembly);
				static mscorlib::System::Globalization::CompareInfo  GetCompareInfo(const char *name, mscorlib::System::Reflection::Assembly assembly);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Globalization::SortKey  GetSortKey(mscorlib::System::String source);
				virtual mscorlib::System::Globalization::SortKey  GetSortKey(const char *source);
				virtual mscorlib::System::Globalization::SortKey  GetSortKey(mscorlib::System::String source, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Globalization::SortKey  GetSortKey(const char *source, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  IndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Boolean  IsPrefix(mscorlib::System::String source, mscorlib::System::String prefix);
				virtual mscorlib::System::Boolean  IsPrefix(const char *source, const char *prefix);
				virtual mscorlib::System::Boolean  IsPrefix(mscorlib::System::String source, mscorlib::System::String prefix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Boolean  IsPrefix(const char *source, const char *prefix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Boolean  IsSuffix(mscorlib::System::String source, mscorlib::System::String suffix);
				virtual mscorlib::System::Boolean  IsSuffix(const char *source, const char *suffix);
				virtual mscorlib::System::Boolean  IsSuffix(mscorlib::System::String source, mscorlib::System::String suffix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Boolean  IsSuffix(const char *source, const char *suffix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				virtual mscorlib::System::Int32  LastIndexOf(const char *source, const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
				static mscorlib::System::Boolean  IsSortable(mscorlib::System::Char ch);
				static mscorlib::System::Boolean  IsSortable(mscorlib::System::String text);
				static mscorlib::System::Boolean  IsSortable(const char *text);
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_LCID)) mscorlib::System::Int32  LCID;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;

				//Get Set Properties Methods
				//	Get:LCID
				mscorlib::System::Int32  get_LCID() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
