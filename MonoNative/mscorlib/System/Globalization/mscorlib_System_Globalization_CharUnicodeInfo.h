#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CHARUNICODEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CHARUNICODEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_UnicodeCategory.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CharUnicodeInfo
				: public mscorlib::System::Object
			{
			public:
				CharUnicodeInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				CharUnicodeInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~CharUnicodeInfo()
				{
				};
			

				CharUnicodeInfo & operator=(CharUnicodeInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CharUnicodeInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Int32  GetDecimalDigitValue(mscorlib::System::Char ch);
				static mscorlib::System::Int32  GetDecimalDigitValue(mscorlib::System::String s, mscorlib::System::Int32 index);
				static mscorlib::System::Int32  GetDecimalDigitValue(const char *s, mscorlib::System::Int32 index);
				static mscorlib::System::Int32  GetDigitValue(mscorlib::System::Char ch);
				static mscorlib::System::Int32  GetDigitValue(mscorlib::System::String s, mscorlib::System::Int32 index);
				static mscorlib::System::Int32  GetDigitValue(const char *s, mscorlib::System::Int32 index);
				static mscorlib::System::Double  GetNumericValue(mscorlib::System::Char ch);
				static mscorlib::System::Double  GetNumericValue(mscorlib::System::String s, mscorlib::System::Int32 index);
				static mscorlib::System::Double  GetNumericValue(const char *s, mscorlib::System::Int32 index);
				static mscorlib::System::Globalization::UnicodeCategory::__ENUM__  GetUnicodeCategory(mscorlib::System::Char ch);
				static mscorlib::System::Globalization::UnicodeCategory::__ENUM__  GetUnicodeCategory(mscorlib::System::String s, mscorlib::System::Int32 index);
				static mscorlib::System::Globalization::UnicodeCategory::__ENUM__  GetUnicodeCategory(const char *s, mscorlib::System::Int32 index);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
