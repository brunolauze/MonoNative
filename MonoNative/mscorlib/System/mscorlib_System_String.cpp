#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean String::Equals(mscorlib::System::String a, mscorlib::System::String b)
		{
			return mono_string_equal((MonoString*)a, (MonoString*)b);
		}

		mscorlib::System::Boolean String::Equals(const char *a, const char *b)
		{
			return mono_string_equal((MonoString*)a, (MonoString*)b);
		}

		mscorlib::System::Boolean String::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Equals(mscorlib::System::String value)
		{
			return mono_string_equal(mono_object_to_string(__native_object__, NULL), (MonoString*)value);
		}

		mscorlib::System::Boolean String::Equals(const char *value)
		{
			return mono_string_equal(mono_object_to_string(__native_object__, NULL), (MonoString*)value);
		}

		mscorlib::System::Object String::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::TypeCode::__ENUM__ String::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::TypeCode::__ENUM__*)mono_object_unbox(__result__));
		}

		void String::CopyTo(mscorlib::System::Int32 sourceIndex, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(sourceIndex).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(destination).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(destinationIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = &sourceIndex;
				__parameters__[1] = Global::FromArray<mscorlib::System::Char*>(destination, typeid(mscorlib::System::Char).name());
				__parameters__[2] = &destinationIndex;
				__parameters__[3] = &count;
				Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CopyTo", __native_object__, 4, __parameter_types__, __parameters__, NULL);
		}

		std::vector<mscorlib::System::Char*> String::ToCharArray()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToCharArray", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Char*> String::ToCharArray(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[1] = Global::GetType(typeid(length).name());
				__parameters__[0] = &startIndex;
				__parameters__[1] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToCharArray", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::Char*> separator)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(separator, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(separator, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::StringSplitOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(separator, typeid(mscorlib::System::Char).name());
				int __param_options__ = options;
				__parameters__[1] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::Char*> separator, mscorlib::System::Int32 count, mscorlib::System::StringSplitOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(count).name());
				__parameter_types__[2] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(separator, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &count;
				int __param_options__ = options;
				__parameters__[2] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::String*> separator, mscorlib::System::StringSplitOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(separator, typeid(mscorlib::System::String).name());
				int __param_options__ = options;
				__parameters__[1] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::String*> String::Split(std::vector<mscorlib::System::String*> separator, mscorlib::System::Int32 count, mscorlib::System::StringSplitOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(separator).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(count).name());
				__parameter_types__[2] = Global::GetType(typeid(options).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(separator, typeid(mscorlib::System::String).name());
				__parameters__[1] = &count;
				int __param_options__ = options;
				__parameters__[2] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Split", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::String String::Substring(mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Substring", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Substring(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[1] = Global::GetType(typeid(length).name());
				__parameters__[0] = &startIndex;
				__parameters__[1] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Substring", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Trim()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Trim", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Trim(std::vector<mscorlib::System::Char*> trimChars)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(trimChars).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(trimChars, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Trim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::TrimStart(std::vector<mscorlib::System::Char*> trimChars)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(trimChars).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(trimChars, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "TrimStart", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::TrimEnd(std::vector<mscorlib::System::Char*> trimChars)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(trimChars).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(trimChars, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "TrimEnd", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::String strB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, const char *strB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, const char *strB, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, const char *strB, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[6] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[6] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, const char *strB, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				int __param_comparisonType__ = comparisonType;
				__parameters__[5] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				int __param_comparisonType__ = comparisonType;
				__parameters__[5] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Equals(mscorlib::System::String a, mscorlib::System::String b, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), a);
				__parameters__[1] = mono_string_new(Global::GetDomain(), b);
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Equals", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Equals(const char *a, const char *b, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(a).name());
				__parameter_types__[1] = Global::GetType(typeid(b).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), a);
				__parameters__[1] = mono_string_new(Global::GetDomain(), b);
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Equals", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Equals(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Equals(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Equals", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::String strB, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameter_types__[3] = Global::GetType(typeid(options).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = (MonoObject*)culture;
				int __param_options__ = options;
				__parameters__[3] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, const char *strB, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameter_types__[3] = Global::GetType(typeid(options).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[2] = (MonoObject*)culture;
				int __param_options__ = options;
				__parameters__[3] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(culture).name());
				__parameter_types__[6] = Global::GetType(typeid(options).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = (MonoObject*)culture;
				int __param_options__ = options;
				__parameters__[6] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::Compare(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length, mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameter_types__[5] = Global::GetType(typeid(culture).name());
				__parameter_types__[6] = Global::GetType(typeid(options).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				__parameters__[5] = (MonoObject*)culture;
				int __param_options__ = options;
				__parameters__[6] = &__param_options__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Compare", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareTo(mscorlib::System::String strB)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareTo(const char *strB)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareOrdinal(mscorlib::System::String strA, mscorlib::System::String strB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareOrdinal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareOrdinal(const char *strA, const char *strB)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(strB).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = mono_string_new(Global::GetDomain(), strB);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareOrdinal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareOrdinal(mscorlib::System::String strA, mscorlib::System::Int32 indexA, mscorlib::System::String strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareOrdinal", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::CompareOrdinal(const char *strA, mscorlib::System::Int32 indexA, const char *strB, mscorlib::System::Int32 indexB, mscorlib::System::Int32 length)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(strA).name());
				__parameter_types__[1] = Global::GetType(typeid(indexA).name());
				__parameter_types__[2] = Global::GetType(typeid(strB).name());
				__parameter_types__[3] = Global::GetType(typeid(indexB).name());
				__parameter_types__[4] = Global::GetType(typeid(length).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), strA);
				__parameters__[1] = &indexA;
				__parameters__[2] = mono_string_new(Global::GetDomain(), strB);
				__parameters__[3] = &indexB;
				__parameters__[4] = &length;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "CompareOrdinal", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(mscorlib::System::String value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(const char *value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOfAny(std::vector<mscorlib::System::Char*> anyOf)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOfAny", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOfAny", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOfAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				int __param_comparisonType__ = comparisonType;
				__parameters__[3] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				int __param_comparisonType__ = comparisonType;
				__parameters__[3] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				int __param_comparisonType__ = comparisonType;
				__parameters__[2] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				int __param_comparisonType__ = comparisonType;
				__parameters__[3] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				int __param_comparisonType__ = comparisonType;
				__parameters__[3] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = &value;
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = &value;
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::IndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOfAny", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOfAny", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOfAny(std::vector<mscorlib::System::Char*> anyOf, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(anyOf).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(anyOf, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOfAny", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = &value;
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = &value;
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value, mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 String::LastIndexOf(const char *value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Contains(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::Contains(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::IsNullOrEmpty(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNullOrEmpty", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::IsNullOrEmpty(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNullOrEmpty", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String String::Normalize()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Normalize", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Normalize(mscorlib::System::Text::NormalizationForm::__ENUM__ normalizationForm)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(normalizationForm).name());
				int __param_normalizationForm__ = normalizationForm;
				__parameters__[0] = &__param_normalizationForm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Normalize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean String::IsNormalized()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNormalized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::IsNormalized(mscorlib::System::Text::NormalizationForm::__ENUM__ normalizationForm)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(normalizationForm).name());
				int __param_normalizationForm__ = normalizationForm;
				__parameters__[0] = &__param_normalizationForm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNormalized", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String String::Remove(mscorlib::System::Int32 startIndex)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::PadLeft(mscorlib::System::Int32 totalWidth)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(totalWidth).name());
				__parameters__[0] = &totalWidth;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "PadLeft", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::PadLeft(mscorlib::System::Int32 totalWidth, mscorlib::System::Char paddingChar)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(totalWidth).name());
				__parameter_types__[1] = Global::GetType(typeid(paddingChar).name());
				__parameters__[0] = &totalWidth;
				__parameters__[1] = &paddingChar;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "PadLeft", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::PadRight(mscorlib::System::Int32 totalWidth)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(totalWidth).name());
				__parameters__[0] = &totalWidth;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "PadRight", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::PadRight(mscorlib::System::Int32 totalWidth, mscorlib::System::Char paddingChar)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(totalWidth).name());
				__parameter_types__[1] = Global::GetType(typeid(paddingChar).name());
				__parameters__[0] = &totalWidth;
				__parameters__[1] = &paddingChar;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "PadRight", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(mscorlib::System::String value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::EndsWith(const char *value, mscorlib::System::StringComparison::__ENUM__ comparisonType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(comparisonType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				int __param_comparisonType__ = comparisonType;
				__parameters__[1] = &__param_comparisonType__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "EndsWith", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(mscorlib::System::String value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::StartsWith(const char *value, mscorlib::System::Boolean ignoreCase, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[2] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[2] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "StartsWith", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String String::Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(oldChar).name());
				__parameter_types__[1] = Global::GetType(typeid(newChar).name());
				__parameters__[0] = &oldChar;
				__parameters__[1] = &newChar;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(oldValue).name());
				__parameter_types__[1] = Global::GetType(typeid(newValue).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), oldValue);
				__parameters__[1] = mono_string_new(Global::GetDomain(), newValue);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Replace(const char *oldValue, const char *newValue)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(oldValue).name());
				__parameter_types__[1] = Global::GetType(typeid(newValue).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), oldValue);
				__parameters__[1] = mono_string_new(Global::GetDomain(), newValue);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Remove(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[1] = Global::GetType(typeid(count).name());
				__parameters__[0] = &startIndex;
				__parameters__[1] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Remove", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToLower()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToLower", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToLower(mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(culture).name());
				__parameters__[0] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToLower", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToLowerInvariant()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToLowerInvariant", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToUpper()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToUpper", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToUpper(mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(culture).name());
				__parameters__[0] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToUpper", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToUpperInvariant()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToUpperInvariant", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::String format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(const char *format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::String format, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(const char *format, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::IFormatProvider provider, mscorlib::System::String format, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = (MonoObject*)provider;
				__parameters__[1] = mono_string_new(Global::GetDomain(), format);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Format(mscorlib::System::IFormatProvider provider, const char *format, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = (MonoObject*)provider;
				__parameters__[1] = mono_string_new(Global::GetDomain(), format);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Format", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Copy(mscorlib::System::String str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Copy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Copy(const char *str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Copy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = (MonoObject*)arg0;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(arg0).name());
				__parameter_types__[1] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = (MonoObject*)arg0;
				__parameters__[1] = (MonoObject*)arg1;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(arg0).name());
				__parameter_types__[1] = Global::GetType(typeid(arg1).name());
				__parameter_types__[2] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = (MonoObject*)arg0;
				__parameters__[1] = (MonoObject*)arg1;
				__parameters__[2] = (MonoObject*)arg2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(arg0).name());
				__parameter_types__[1] = Global::GetType(typeid(arg1).name());
				__parameter_types__[2] = Global::GetType(typeid(arg2).name());
				__parameter_types__[3] = Global::GetType(typeid(arg3).name());
				__parameters__[0] = (MonoObject*)arg0;
				__parameters__[1] = (MonoObject*)arg1;
				__parameters__[2] = (MonoObject*)arg2;
				__parameters__[3] = (MonoObject*)arg3;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::String str0, mscorlib::System::String str1)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(const char *str0, const char *str1)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::String str0, mscorlib::System::String str1, mscorlib::System::String str2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameter_types__[2] = Global::GetType(typeid(str2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				__parameters__[2] = mono_string_new(Global::GetDomain(), str2);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(const char *str0, const char *str1, const char *str2)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameter_types__[2] = Global::GetType(typeid(str2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				__parameters__[2] = mono_string_new(Global::GetDomain(), str2);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::String str0, mscorlib::System::String str1, mscorlib::System::String str2, mscorlib::System::String str3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameter_types__[2] = Global::GetType(typeid(str2).name());
				__parameter_types__[3] = Global::GetType(typeid(str3).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				__parameters__[2] = mono_string_new(Global::GetDomain(), str2);
				__parameters__[3] = mono_string_new(Global::GetDomain(), str3);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(const char *str0, const char *str1, const char *str2, const char *str3)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(str0).name());
				__parameter_types__[1] = Global::GetType(typeid(str1).name());
				__parameter_types__[2] = Global::GetType(typeid(str2).name());
				__parameter_types__[3] = Global::GetType(typeid(str3).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str0);
				__parameters__[1] = mono_string_new(Global::GetDomain(), str1);
				__parameters__[2] = mono_string_new(Global::GetDomain(), str2);
				__parameters__[3] = mono_string_new(Global::GetDomain(), str3);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Concat(std::vector<mscorlib::System::String*> values)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(values).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(values, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Insert(mscorlib::System::Int32 startIndex, mscorlib::System::String value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &startIndex;
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Insert(mscorlib::System::Int32 startIndex, const char *value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &startIndex;
				__parameters__[1] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Intern(mscorlib::System::String str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Intern", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Intern(const char *str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Intern", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::IsInterned(mscorlib::System::String str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsInterned", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::IsInterned(const char *str)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(str).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), str);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsInterned", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(mscorlib::System::String separator, std::vector<mscorlib::System::String*> value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(const char *separator, std::vector<mscorlib::System::String*> value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(mscorlib::System::String separator, std::vector<mscorlib::System::String*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(const char *separator, std::vector<mscorlib::System::String*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::CharEnumerator* String::GetEnumerator()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
				return new mscorlib::System::CharEnumerator(__result__);
		}

		mscorlib::System::Int32 String::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String String::Concat(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(values).name());
				__parameters__[0] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Concat", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(mscorlib::System::String separator, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = Global::GetType(typeid(values).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(const char *separator, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> values)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = Global::GetType(typeid(values).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = (MonoObject*)values;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(mscorlib::System::String separator, std::vector<mscorlib::System::Object*> values)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(values).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(values, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String String::Join(const char *separator, std::vector<mscorlib::System::Object*> values)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(separator).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(values).name()))->eklass);
				__parameters__[0] = mono_string_new(Global::GetDomain(), separator);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(values, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "Join", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean String::IsNullOrWhiteSpace(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNullOrWhiteSpace", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean String::IsNullOrWhiteSpace(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "IsNullOrWhiteSpace", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Chars
		mscorlib::System::Char  String::get_Chars(mscorlib::System::Int32 index) const
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(index).name());
			__parameters__[0] = &index;
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "get_Chars", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			return *(mscorlib::System::Char*)mono_object_unbox(__result__);
		}


		//	Get:Length
		mscorlib::System::Int32  String::get_Length() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "String", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


			//	Get/Set:Empty
		mscorlib::System::String String::get_Empty()
		{
			return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System", "String", 0, NULL, "Empty"));
		}

		void String::set_Empty(mscorlib::System::String  value)
		{
			throw;
		}


	}
}
