#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CompareInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_SortKey.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::String string2)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(string2).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = (MonoObject*)string2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::String string2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(string2).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = (MonoObject*)string2;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::String string2, mscorlib::System::Int32 offset2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(offset1).name());
					__parameter_types__[2] = Global::GetType(typeid(string2).name());
					__parameter_types__[3] = Global::GetType(typeid(offset2).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = &offset1;
					__parameters__[2] = (MonoObject*)string2;
					__parameters__[3] = &offset2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(offset1).name());
					__parameter_types__[2] = Global::GetType(typeid(string2).name());
					__parameter_types__[3] = Global::GetType(typeid(offset2).name());
					__parameter_types__[4] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = &offset1;
					__parameters__[2] = (MonoObject*)string2;
					__parameters__[3] = &offset2;
					__parameters__[4] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(offset1).name());
					__parameter_types__[2] = Global::GetType(typeid(length1).name());
					__parameter_types__[3] = Global::GetType(typeid(string2).name());
					__parameter_types__[4] = Global::GetType(typeid(offset2).name());
					__parameter_types__[5] = Global::GetType(typeid(length2).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = &offset1;
					__parameters__[2] = &length1;
					__parameters__[3] = (MonoObject*)string2;
					__parameters__[4] = &offset2;
					__parameters__[5] = &length2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 6, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::Compare(mscorlib::System::String string1, mscorlib::System::Int32 offset1, mscorlib::System::Int32 length1, mscorlib::System::String string2, mscorlib::System::Int32 offset2, mscorlib::System::Int32 length2, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[7];
					void *__parameters__[7];
					__parameter_types__[0] = Global::GetType(typeid(string1).name());
					__parameter_types__[1] = Global::GetType(typeid(offset1).name());
					__parameter_types__[2] = Global::GetType(typeid(length1).name());
					__parameter_types__[3] = Global::GetType(typeid(string2).name());
					__parameter_types__[4] = Global::GetType(typeid(offset2).name());
					__parameter_types__[5] = Global::GetType(typeid(length2).name());
					__parameter_types__[6] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)string1;
					__parameters__[1] = &offset1;
					__parameters__[2] = &length1;
					__parameters__[3] = (MonoObject*)string2;
					__parameters__[4] = &offset2;
					__parameters__[5] = &length2;
					__parameters__[6] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Compare", __native_object__, 7, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::Equals(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Globalization::CompareInfo CompareInfo::GetCompareInfo(mscorlib::System::Int32 culture)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameters__[0] = &culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetCompareInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CompareInfo(__result__);
			}

			mscorlib::System::Globalization::CompareInfo CompareInfo::GetCompareInfo(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetCompareInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CompareInfo(__result__);
			}

			mscorlib::System::Globalization::CompareInfo CompareInfo::GetCompareInfo(mscorlib::System::Int32 culture, mscorlib::System::Reflection::Assembly assembly)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(culture).name());
					__parameter_types__[1] = Global::GetType(typeid(assembly).name());
					__parameters__[0] = &culture;
					__parameters__[1] = (MonoObject*)assembly;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetCompareInfo", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CompareInfo(__result__);
			}

			mscorlib::System::Globalization::CompareInfo CompareInfo::GetCompareInfo(mscorlib::System::String name, mscorlib::System::Reflection::Assembly assembly)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(assembly).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)assembly;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetCompareInfo", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::CompareInfo(__result__);
			}

			mscorlib::System::Int32 CompareInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Globalization::SortKey CompareInfo::GetSortKey(mscorlib::System::String source)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameters__[0] = (MonoObject*)source;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetSortKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::SortKey(__result__);
			}

			mscorlib::System::Globalization::SortKey CompareInfo::GetSortKey(mscorlib::System::String source, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "GetSortKey", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::SortKey(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameter_types__[4] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					__parameters__[4] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::IndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameter_types__[4] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					__parameters__[4] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IndexOf", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsPrefix(mscorlib::System::String source, mscorlib::System::String prefix)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(prefix).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)prefix;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsPrefix", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsPrefix(mscorlib::System::String source, mscorlib::System::String prefix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(prefix).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)prefix;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsPrefix", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsSuffix(mscorlib::System::String source, mscorlib::System::String suffix)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(suffix).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)suffix;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsSuffix", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsSuffix(mscorlib::System::String source, mscorlib::System::String suffix, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(suffix).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)suffix;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsSuffix", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::Char value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameter_types__[4] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = &value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					__parameters__[4] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CompareInfo::LastIndexOf(mscorlib::System::String source, mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::System::Globalization::CompareOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(source).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameter_types__[4] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)source;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					__parameters__[4] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "LastIndexOf", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsSortable(mscorlib::System::Char ch)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(ch).name());
					__parameters__[0] = &ch;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsSortable", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CompareInfo::IsSortable(mscorlib::System::String text)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(text).name());
					__parameters__[0] = (MonoObject*)text;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "IsSortable", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::String CompareInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:LCID
			mscorlib::System::Int32  CompareInfo::get_LCID()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "get_LCID", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  CompareInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "CompareInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}



		}
	}
}
