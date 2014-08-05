#include <mscorlib/System/Globalization/mscorlib_System_Globalization_StringInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TextElementEnumerator.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Boolean StringInfo::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 StringInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String StringInfo::SubstringByTextElements(mscorlib::System::Int32 startingTextElement)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(startingTextElement).name());
					__parameters__[0] = &startingTextElement;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "SubstringByTextElements", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringInfo::SubstringByTextElements(mscorlib::System::Int32 startingTextElement, mscorlib::System::Int32 lengthInTextElements)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(startingTextElement).name());
					__parameter_types__[1] = Global::GetType(typeid(lengthInTextElements).name());
					__parameters__[0] = &startingTextElement;
					__parameters__[1] = &lengthInTextElements;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "SubstringByTextElements", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringInfo::GetNextTextElement(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetNextTextElement", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringInfo::GetNextTextElement(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetNextTextElement", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringInfo::GetNextTextElement(mscorlib::System::String str, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetNextTextElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringInfo::GetNextTextElement(const char *str, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetNextTextElement", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Globalization::TextElementEnumerator StringInfo::GetTextElementEnumerator(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetTextElementEnumerator", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::TextElementEnumerator(__result__);
			}

			mscorlib::System::Globalization::TextElementEnumerator StringInfo::GetTextElementEnumerator(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetTextElementEnumerator", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::TextElementEnumerator(__result__);
			}

			mscorlib::System::Globalization::TextElementEnumerator StringInfo::GetTextElementEnumerator(mscorlib::System::String str, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetTextElementEnumerator", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::TextElementEnumerator(__result__);
			}

			mscorlib::System::Globalization::TextElementEnumerator StringInfo::GetTextElementEnumerator(const char *str, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					__parameters__[1] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "GetTextElementEnumerator", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::TextElementEnumerator(__result__);
			}

			std::vector<mscorlib::System::Int32*> StringInfo::ParseCombiningCharacters(mscorlib::System::String str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "ParseCombiningCharacters", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Int32*> StringInfo::ParseCombiningCharacters(const char *str)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), str);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "ParseCombiningCharacters", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Int32*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Int32 *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			//Get Set Properties Methods
			//	Get:LengthInTextElements
			mscorlib::System::Int32  StringInfo::get_LengthInTextElements() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "get_LengthInTextElements", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get/Set:String
			mscorlib::System::String  StringInfo::get_String() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "get_String", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void StringInfo::set_String(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "StringInfo", 0, NULL, "set_String", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
