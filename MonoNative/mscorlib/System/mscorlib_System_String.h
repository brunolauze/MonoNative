#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_STRING_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_STRING_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/mscorlib_System_StringSplitOptions.h>
#include <mscorlib/System/mscorlib_System_StringComparison.h>
#include <mscorlib/System/Text/mscorlib_System_Text_NormalizationForm.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_CharEnumerator.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CompareOptions.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Array;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class String
			: public mscorlib::System::Object
			, public virtual mscorlib::System::IComparable<mscorlib::System::String>
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::IEquatable<mscorlib::System::String>
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::Collections::IEnumerable
		{
		public:
			String(const char *value)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value);
			};
		
			String(mscorlib::System::Char* value)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Char*");
				__parameters__[0] = value;
				__native_object__ = Global::New("mscorlib", "System", "String", 1, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::System::Char* value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Char*");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = value;
				__parameters__[1] = &startIndex;
				__parameters__[2] = &length;
				__native_object__ = Global::New("mscorlib", "System", "String", 3, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::System::SByte* value)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "SByte*");
				__parameters__[0] = value->GetNativeObject();
				__native_object__ = Global::New("mscorlib", "System", "String", 1, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::System::SByte* value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "SByte*");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = value->GetNativeObject();
				__parameters__[1] = &startIndex;
				__parameters__[2] = &length;
				__native_object__ = Global::New("mscorlib", "System", "String", 3, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::System::SByte* value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length, mscorlib::System::Text::Encoding enc)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "SByte*");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System.Text", "Encoding");
				__parameters__[0] = value->GetNativeObject();
				__parameters__[1] = &startIndex;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)enc;
				__native_object__ = Global::New("mscorlib", "System", "String", 4, __parameter_types__, __parameters__);
			};
		
			String(std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Char"))->eklass);
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(value, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Char");
				__parameters__[1] = &startIndex;
				__parameters__[2] = &length;
				__native_object__ = Global::New("mscorlib", "System", "String", 3, __parameter_types__, __parameters__);
			};
		
			String(std::vector<mscorlib::System::Char*> value)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Char"))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(value, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Char");
				__native_object__ = Global::New("mscorlib", "System", "String", 1, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::System::Char c, mscorlib::System::Int32 count)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.String"))
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Char");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &c;
				__parameters__[1] = &count;
				__native_object__ = Global::New("mscorlib", "System", "String", 2, __parameter_types__, __parameters__);
			};
		
			String(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::IComparable<mscorlib::System::String>(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::String>(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
			};
		
			String(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::String>(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::String>(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Char>(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::Collections::IEnumerable(nativeObject)
			{
			};
		
			~String()
			{
			};
		

			String & operator=(String &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };
			operator MonoString*() { return mono_object_to_string(__native_object__, NULL); };
			MonoString* operator=(MonoString* value) { __native_object__ = (MonoObject*)value; return value; };
			operator const char*() { return mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)); };
			String & operator=(const char* value) { __native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value); return *this; };
			String & operator+=(const char* value)
			{
				std::string original(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)));
				original.append(value);
				__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), original.c_str()); return *this;
			};
			operator std::string() { return std::string(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL))); };
			String & operator=(std::string value) { __native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value.c_str()); return *this; };
			String & operator+=(std::string value)
			{
				std::string original(mono_string_to_utf8(mono_object_to_string(__native_object__, NULL)));
				original.append(value);
			__native_object__ = (MonoObject*)mono_string_new(Global::GetDomain(), value.c_str()); return *this;
			};


			static mscorlib::System::Boolean  Equals(mscorlib::System::String a, mscorlib::System::String b);
			static mscorlib::System::Boolean  Equals(const char *a, const char *b);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::String value);
			virtual mscorlib::System::Boolean  Equals(const char *value);
			virtual mscorlib::System::Object  Clone();
			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			void  CopyTo(mscorlib::System::Int32 sourceIndex, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 count);
			std::vector<mscorlib::System::Char*>  ToCharArray();
			std::vector<mscorlib::System::Char*>  ToCharArray(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::Char*> separator);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::Int32 count);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::StringSplitOptions::__ENUM__ options);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::Int32 count, mscorlib::System::StringSplitOptions::__ENUM__ options);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::String*> separator, mscorlib::System::StringSplitOptions::__ENUM__ options);
			std::vector<mscorlib::System::String*>  Split(std::vector<mscorlib::System::String*> separator, mscorlib::System::Int32 count, mscorlib::System::StringSplitOptions::__ENUM__ options);
			mscorlib::System::String  Substring(mscorlib::System::Int32 startIndex);
			mscorlib::System::String  Substring(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length);
			mscorlib::System::String  Trim();
			mscorlib::System::String  Trim(std::vector<mscorlib::System::Char*> trimChars);
			mscorlib::System::String  TrimStart(std::vector<mscorlib::System::Char*> trimChars);
			mscorlib::System::String  TrimEnd(std::vector<mscorlib::System::Char*> trimChars);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::String strB);
			static mscorlib::System::Int32  Compare(const char *strA, const char *strB);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Int32  Compare(const char *strA, const char *strB, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			static mscorlib::System::Int32  Compare(const char *strA, const char *strB, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length);
			static mscorlib::System::Int32  Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Int32  Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			static mscorlib::System::Int32  Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Int32  Compare(const char *strA, const char *strB, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Int32  Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Boolean  Equals(mscorlib::System::String a, mscorlib::System::String b, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Boolean  Equals(const char *a, const char *b, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  Equals(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  Equals(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
			static mscorlib::System::Int32  Compare(const char *strA, const char *strB, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
			static mscorlib::System::Int32  Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
			static mscorlib::System::Int32  Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::String strB);
			virtual mscorlib::System::Int32  CompareTo(const char *strB);
			static mscorlib::System::Int32  CompareOrdinal(mscorlib::System::String strA, mscorlib::System::String strB);
			static mscorlib::System::Int32  CompareOrdinal(const char *strA, const char *strB);
			static mscorlib::System::Int32  CompareOrdinal(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length);
			static mscorlib::System::Int32  CompareOrdinal(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length);
			mscorlib::System::Boolean  EndsWith(mscorlib::System::String value);
			mscorlib::System::Boolean  EndsWith(const char *value);
			mscorlib::System::Boolean  EndsWith(mscorlib::System::String value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::Boolean  EndsWith(const char *value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::Int32  IndexOfAny(std::vector<mscorlib::System::Char*> anyOf);
			mscorlib::System::Int32  IndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  IndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Int32  IndexOf(mscorlib::System::Char value);
			mscorlib::System::Int32  IndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  IndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value);
			mscorlib::System::Int32  IndexOf(const char *value);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  IndexOf(const char *value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf);
			mscorlib::System::Int32  LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::Char value);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value);
			mscorlib::System::Int32  LastIndexOf(const char *value);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  LastIndexOf(const char *value, mscorlib::System::Int32 startIndex);
			mscorlib::System::Int32  LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Int32  LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::Boolean  Contains(mscorlib::System::String value);
			mscorlib::System::Boolean  Contains(const char *value);
			static mscorlib::System::Boolean  IsNullOrEmpty(mscorlib::System::String value);
			static mscorlib::System::Boolean  IsNullOrEmpty(const char *value);
			mscorlib::System::String  Normalize();
			mscorlib::System::String  Normalize(mscorlib::System::Text::NormalizationForm::__ENUM__ normalizationForm);
			mscorlib::System::Boolean  IsNormalized();
			mscorlib::System::Boolean  IsNormalized(mscorlib::System::Text::NormalizationForm::__ENUM__ normalizationForm);
			mscorlib::System::String  Remove(mscorlib::System::Int32 startIndex);
			mscorlib::System::String  PadLeft(mscorlib::System::Int32 totalWidth);
			mscorlib::System::String  PadLeft(mscorlib::System::Int32 totalWidth, mscorlib::System::Char paddingChar);
			mscorlib::System::String  PadRight(mscorlib::System::Int32 totalWidth);
			mscorlib::System::String  PadRight(mscorlib::System::Int32 totalWidth, mscorlib::System::Char paddingChar);
			mscorlib::System::Boolean  StartsWith(mscorlib::System::String value);
			mscorlib::System::Boolean  StartsWith(const char *value);
			mscorlib::System::Boolean  StartsWith(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  StartsWith(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  EndsWith(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  EndsWith(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType);
			mscorlib::System::Boolean  StartsWith(mscorlib::System::String value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::Boolean  StartsWith(const char *value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::String  Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar);
			mscorlib::System::String  Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue);
			mscorlib::System::String  Replace(const char *oldValue, const char *newValue);
			mscorlib::System::String  Remove(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::String  ToLower();
			mscorlib::System::String  ToLower(mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::String  ToLowerInvariant();
			mscorlib::System::String  ToUpper();
			mscorlib::System::String  ToUpper(mscorlib::System::Globalization::CultureInfo culture);
			mscorlib::System::String  ToUpperInvariant();
			virtual mscorlib::System::String  ToString() override;
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			static mscorlib::System::String  Format(mscorlib::System::String format, mscorlib::System::Object arg0);
			static mscorlib::System::String  Format(const char *format, mscorlib::System::Object arg0);
			static mscorlib::System::String  Format(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
			static mscorlib::System::String  Format(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1);
			static mscorlib::System::String  Format(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
			static mscorlib::System::String  Format(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
			static mscorlib::System::String  Format(mscorlib::System::String format, std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::String  Format(const char *format, std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::String  Format(mscorlib::System::IFormatProvider provider, mscorlib::System::String format, std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::String  Format(mscorlib::System::IFormatProvider provider, const char *format, std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::String  Copy(mscorlib::System::String str);
			static mscorlib::System::String  Copy(const char *str);
			static mscorlib::System::String  Concat(mscorlib::System::Object arg0);
			static mscorlib::System::String  Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1);
			static mscorlib::System::String  Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2);
			static mscorlib::System::String  Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3);
			static mscorlib::System::String  Concat(mscorlib::System::String str0, mscorlib::System::String str1);
			static mscorlib::System::String  Concat(const char *str0, const char *str1);
			static mscorlib::System::String  Concat(mscorlib::System::String str0, mscorlib::System::String str1, mscorlib::System::String str2);
			static mscorlib::System::String  Concat(const char *str0, const char *str1, const char *str2);
			static mscorlib::System::String  Concat(mscorlib::System::String str0, mscorlib::System::String str1, mscorlib::System::String str2, mscorlib::System::String str3);
			static mscorlib::System::String  Concat(const char *str0, const char *str1, const char *str2, const char *str3);
			static mscorlib::System::String  Concat(std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::String  Concat(std::vector<mscorlib::System::String*> values);
			mscorlib::System::String  Insert(mscorlib::System::Int32 startIndex, mscorlib::System::String value);
			mscorlib::System::String  Insert(mscorlib::System::Int32 startIndex, const char *value);
			static mscorlib::System::String  Intern(mscorlib::System::String str);
			static mscorlib::System::String  Intern(const char *str);
			static mscorlib::System::String  IsInterned(mscorlib::System::String str);
			static mscorlib::System::String  IsInterned(const char *str);
			static mscorlib::System::String  Join(mscorlib::System::String separator, std::vector<mscorlib::System::String*> value);
			static mscorlib::System::String  Join(const char *separator, std::vector<mscorlib::System::String*> value);
			static mscorlib::System::String  Join(mscorlib::System::String separator, std::vector<mscorlib::System::String*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			static mscorlib::System::String  Join(const char *separator, std::vector<mscorlib::System::String*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			mscorlib::System::CharEnumerator * GetEnumerator();
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::String  Concat(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values);
			template<typename T>
			static mscorlib::System::String  Concat(mscorlib::System::Collections::Generic::IEnumerable<T> values)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(values).name());
				__parameters__[0] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
			};
			
			static mscorlib::System::String  Join(mscorlib::System::String separator, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values);
			static mscorlib::System::String  Join(const char *separator, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values);
			static mscorlib::System::String  Join(mscorlib::System::String separator, std::vector<mscorlib::System::Object*> values);
			static mscorlib::System::String  Join(const char *separator, std::vector<mscorlib::System::Object*> values);
			template<typename T>
			static mscorlib::System::String  Join(mscorlib::System::String separator, mscorlib::System::Collections::Generic::IEnumerable<T> values)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = Global::GetType(typeid(values).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
			};
			
			template<typename T>
			static mscorlib::System::String  Join(const char *separator, mscorlib::System::Collections::Generic::IEnumerable<T> values)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = Global::GetType(typeid(values).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
			};
			
			static mscorlib::System::Boolean  IsNullOrWhiteSpace(mscorlib::System::String value);
			static mscorlib::System::Boolean  IsNullOrWhiteSpace(const char *value);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Chars)) mscorlib::System::Char  Chars[];
			__declspec(property(get=get_Length)) mscorlib::System::Int32  Length;

			//Public Static Fields
			static Property<mscorlib::System::String , mscorlib::System::String> Empty;

			//Get Set Properties Methods
			//	Get:Chars
			mscorlib::System::Char  get_Chars(mscorlib::System::Int32 index) const;

			//	Get:Length
			mscorlib::System::Int32  get_Length() const;

			//	Get/Set:Empty
			static mscorlib::System::String  get_Empty();
			static void set_Empty(mscorlib::System::String  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
