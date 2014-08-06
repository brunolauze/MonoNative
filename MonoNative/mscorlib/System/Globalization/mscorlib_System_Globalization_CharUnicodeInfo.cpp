#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CharUnicodeInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Int32 CharUnicodeInfo::GetDecimalDigitValue(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDecimalDigitValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CharUnicodeInfo::GetDecimalDigitValue(mscorlib::System::String s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDecimalDigitValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CharUnicodeInfo::GetDecimalDigitValue(const char *s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDecimalDigitValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CharUnicodeInfo::GetDigitValue(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDigitValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CharUnicodeInfo::GetDigitValue(mscorlib::System::String s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDigitValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CharUnicodeInfo::GetDigitValue(const char *s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetDigitValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Double CharUnicodeInfo::GetNumericValue(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetNumericValue", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Double CharUnicodeInfo::GetNumericValue(mscorlib::System::String s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetNumericValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Double CharUnicodeInfo::GetNumericValue(const char *s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetNumericValue", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Globalization::UnicodeCategory::__ENUM__ CharUnicodeInfo::GetUnicodeCategory(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetUnicodeCategory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::Globalization::UnicodeCategory::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			mscorlib::System::Globalization::UnicodeCategory::__ENUM__ CharUnicodeInfo::GetUnicodeCategory(mscorlib::System::String s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(s).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)s;
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetUnicodeCategory", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::Globalization::UnicodeCategory::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			mscorlib::System::Globalization::UnicodeCategory::__ENUM__ CharUnicodeInfo::GetUnicodeCategory(const char *s, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), s);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CharUnicodeInfo", 0, NULL, "GetUnicodeCategory", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::Globalization::UnicodeCategory::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


		}
	}
}
