#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 SByte::CompareTo(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean SByte::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 SByte::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 SByte::CompareTo(mscorlib::System::SByte value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean SByte::Equals(mscorlib::System::SByte obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::SByte SByte::Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(const char *s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = (MonoObject*)s;
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(style).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				mscorlib::System::Int32 __param_style__ = style;
				__parameters__[1] = &__param_style__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::SByte SByte::Parse(const char *s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::SByte(__result__);
		}

		mscorlib::System::Boolean SByte::TryParse(mscorlib::System::String s, mscorlib::System::SByte result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean SByte::TryParse(const char *s, mscorlib::System::SByte result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), s);
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean SByte::TryParse(mscorlib::System::String s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::SByte result)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean SByte::TryParse(const char *s, mscorlib::System::Globalization::NumberStyles::__ENUM__ style, mscorlib::System::IFormatProvider provider, mscorlib::System::SByte result)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String SByte::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String SByte::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String SByte::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String SByte::ToString(const char *format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String SByte::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String SByte::ToString(const char *format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::TypeCode::__ENUM__ SByte::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "SByte", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

			//	Get/Set:MinValue
		mscorlib::System::SByte SByte::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "SByte", 0, NULL, "MinValue");
		}

		void SByte::set_MinValue(mscorlib::System::SByte  value)
		{
		}

			//	Get/Set:MaxValue
		mscorlib::System::SByte SByte::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "SByte", 0, NULL, "MaxValue");
		}

		void SByte::set_MaxValue(mscorlib::System::SByte  value)
		{
		}


	}
}
