#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 Byte::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Byte::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Byte::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Byte::CompareTo(mscorlib::System::Byte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Byte::Equals(mscorlib::System::Byte obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Byte Byte::Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(const char *s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Byte Byte::Parse(const char *s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Byte(__result__);
		}

		mscorlib::System::Boolean Byte::TryParse(mscorlib::System::String s, mscorlib::System::Byte result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Byte::TryParse(const char *s, mscorlib::System::Byte result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Byte::TryParse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Byte result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Byte::TryParse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::Byte result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Byte::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Byte::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Byte::ToString(const char *format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Byte::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Byte::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String Byte::ToString(const char *format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::TypeCode::__ENUM__ Byte::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Byte", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

			//	Get/Set:MinValue
		mscorlib::System::Byte Byte::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "Byte", 0, NULL, "MinValue");
		}

		void Byte::set_MinValue(mscorlib::System::Byte  value)
		{
		}

			//	Get/Set:MaxValue
		mscorlib::System::Byte Byte::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "Byte", 0, NULL, "MaxValue");
		}

		void Byte::set_MaxValue(mscorlib::System::Byte  value)
		{
		}


	}
}
