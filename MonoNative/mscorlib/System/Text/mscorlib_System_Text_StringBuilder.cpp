#include <mscorlib/System/Text/mscorlib_System_Text_StringBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::String StringBuilder::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String StringBuilder::ToString(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[1] = Global::GetType(typeid(length).name());
					__parameters__[0] = &startIndex;
					__parameters__[1] = &length;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 StringBuilder::EnsureCapacity(mscorlib::System::Int32 capacity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(capacity).name());
					__parameters__[0] = &capacity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "EnsureCapacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean StringBuilder::Equals(mscorlib::System::Text::StringBuilder sb)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(sb).name());
					__parameters__[0] = (MonoObject*)sb;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Remove(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 length)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[1] = Global::GetType(typeid(length).name());
					__parameters__[0] = &startIndex;
					__parameters__[1] = &length;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Remove", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(oldChar).name());
					__parameter_types__[1] = Global::GetType(typeid(newChar).name());
					__parameters__[0] = &oldChar;
					__parameters__[1] = &newChar;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Replace(mscorlib::System::Char oldChar, mscorlib::System::Char newChar, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(oldChar).name());
					__parameter_types__[1] = Global::GetType(typeid(newChar).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = &oldChar;
					__parameters__[1] = &newChar;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Replace", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(oldValue).name());
					__parameter_types__[1] = Global::GetType(typeid(newValue).name());
					__parameters__[0] = (MonoObject*)oldValue;
					__parameters__[1] = (MonoObject*)newValue;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Replace(mscorlib::System::String oldValue, mscorlib::System::String newValue, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(oldValue).name());
					__parameter_types__[1] = Global::GetType(typeid(newValue).name());
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)oldValue;
					__parameters__[1] = (MonoObject*)newValue;
					__parameters__[2] = &startIndex;
					__parameters__[3] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Replace", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(std::vector<mscorlib::System::Char*> value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(value, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::Char value, mscorlib::System::Int32 repeatCount)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(repeatCount).name());
					__parameters__[0] = &value;
					__parameters__[1] = &repeatCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Char*>(value, typeid(mscorlib::System::Char).name());
					__parameters__[1] = &startIndex;
					__parameters__[2] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Append(mscorlib::System::String value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = &startIndex;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Append", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Clear()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendLine()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendLine", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendLine(mscorlib::System::String value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendFormat(mscorlib::System::String format, std::vector<mscorlib::System::Object*> args)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendFormat", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendFormat(mscorlib::System::IFormatProvider provider, mscorlib::System::String format, std::vector<mscorlib::System::Object*> args)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(provider).name());
					__parameter_types__[1] = Global::GetType(typeid(format).name());
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
					__parameters__[0] = (MonoObject*)provider;
					__parameters__[1] = (MonoObject*)format;
					__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendFormat", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendFormat", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendFormat", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::AppendFormat(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameter_types__[1] = Global::GetType(typeid(arg0).name());
					__parameter_types__[2] = Global::GetType(typeid(arg1).name());
					__parameter_types__[3] = Global::GetType(typeid(arg2).name());
					__parameters__[0] = (MonoObject*)format;
					__parameters__[1] = (MonoObject*)arg0;
					__parameters__[2] = (MonoObject*)arg1;
					__parameters__[3] = (MonoObject*)arg2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "AppendFormat", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = &index;
					__parameters__[1] = Global::FromArray<mscorlib::System::Char*>(value, typeid(mscorlib::System::Char).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::String value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Boolean value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = reinterpret_cast<void*>(value);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Char value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Decimal value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = &value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, mscorlib::System::String value, mscorlib::System::Int32 count)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(count).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = &count;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			mscorlib::System::Text::StringBuilder StringBuilder::Insert(mscorlib::System::Int32 index, std::vector<mscorlib::System::Char*> value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 charCount)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
					__parameter_types__[3] = Global::GetType(typeid(charCount).name());
					__parameters__[0] = &index;
					__parameters__[1] = Global::FromArray<mscorlib::System::Char*>(value, typeid(mscorlib::System::Char).name());
					__parameters__[2] = &startIndex;
					__parameters__[3] = &charCount;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "Insert", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Text::StringBuilder(__result__);
			}

			void StringBuilder::CopyTo(mscorlib::System::Int32 sourceIndex, std::vector<mscorlib::System::Char*> destination, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 count)
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
					Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "CopyTo", __native_object__, 4, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:MaxCapacity
			mscorlib::System::Int32  StringBuilder::get_MaxCapacity()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "get_MaxCapacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get/Set:Capacity
			mscorlib::System::Int32  StringBuilder::get_Capacity()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void StringBuilder::set_Capacity(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Length
			mscorlib::System::Int32  StringBuilder::get_Length()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void StringBuilder::set_Length(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "set_Length", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Chars
			mscorlib::System::Char  StringBuilder::get_Chars(mscorlib::System::Int32 index)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "get_Chars", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Char*)mono_object_unbox(__result__);
			}

			void StringBuilder::set_Chars(mscorlib::System::Int32 index, mscorlib::System::Char  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &index;
				__parameters__[1] = &value;
				Global::InvokeMethod("mscorlib", "System.Text", "StringBuilder", 0, NULL, "set_Chars", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
