#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::TimeSpan TimeSpan::Add(mscorlib::System::TimeSpan ts)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(ts).name());
				__parameters__[0] = (MonoObject*)ts;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Int32 TimeSpan::Compare(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(t1).name());
				__parameter_types__[1] = Global::GetType(typeid(t2).name());
				__parameters__[0] = (MonoObject*)t1;
				__parameters__[1] = (MonoObject*)t2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 TimeSpan::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 TimeSpan::CompareTo(mscorlib::System::TimeSpan value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeSpan::Equals(mscorlib::System::TimeSpan obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::Duration()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Duration", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeSpan::Equals(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeSpan::Equals(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(t1).name());
				__parameter_types__[1] = Global::GetType(typeid(t2).name());
				__parameters__[0] = (MonoObject*)t1;
				__parameters__[1] = (MonoObject*)t2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromDays(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromDays", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromHours(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromHours", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromMinutes(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromMinutes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromSeconds(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromSeconds", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromMilliseconds(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromMilliseconds", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::FromTicks(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "FromTicks", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Int32 TimeSpan::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::Negate()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Negate", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::Parse(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParse(mscorlib::System::String s, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[2] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)formatProvider;
				__parameters__[2] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ParseExact", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(styles).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = reinterpret_cast<void*>(styles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ParseExact", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(styles).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = reinterpret_cast<void*>(styles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(styles).name());
				__parameter_types__[4] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = reinterpret_cast<void*>(styles);
				__parameters__[4] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeSpan::TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[3] = Global::GetType(typeid(styles).name());
				__parameter_types__[4] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)formatProvider;
				__parameters__[3] = reinterpret_cast<void*>(styles);
				__parameters__[4] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan TimeSpan::Subtract(mscorlib::System::TimeSpan ts)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(ts).name());
				__parameters__[0] = (MonoObject*)ts;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "Subtract", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::String TimeSpan::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String TimeSpan::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String TimeSpan::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		//Get Set Properties Methods
		//	Get:Days
		mscorlib::System::Int32  TimeSpan::get_Days() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Days", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Hours
		mscorlib::System::Int32  TimeSpan::get_Hours() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Hours", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Milliseconds
		mscorlib::System::Int32  TimeSpan::get_Milliseconds() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Milliseconds", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Minutes
		mscorlib::System::Int32  TimeSpan::get_Minutes() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Minutes", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Seconds
		mscorlib::System::Int32  TimeSpan::get_Seconds() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Seconds", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Ticks
		mscorlib::System::Int64  TimeSpan::get_Ticks() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_Ticks", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:TotalDays
		mscorlib::System::Double  TimeSpan::get_TotalDays() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_TotalDays", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


		//	Get:TotalHours
		mscorlib::System::Double  TimeSpan::get_TotalHours() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_TotalHours", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


		//	Get:TotalMilliseconds
		mscorlib::System::Double  TimeSpan::get_TotalMilliseconds() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_TotalMilliseconds", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


		//	Get:TotalMinutes
		mscorlib::System::Double  TimeSpan::get_TotalMinutes() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_TotalMinutes", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


		//	Get:TotalSeconds
		mscorlib::System::Double  TimeSpan::get_TotalSeconds() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeSpan", 0, NULL, "get_TotalSeconds", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


			//	Get/Set:MaxValue
		mscorlib::System::TimeSpan TimeSpan::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "TimeSpan", 0, NULL, "MaxValue");
		}

		void TimeSpan::set_MaxValue(mscorlib::System::TimeSpan  value)
		{
			throw;
		}

			//	Get/Set:MinValue
		mscorlib::System::TimeSpan TimeSpan::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "TimeSpan", 0, NULL, "MinValue");
		}

		void TimeSpan::set_MinValue(mscorlib::System::TimeSpan  value)
		{
			throw;
		}

			//	Get/Set:Zero
		mscorlib::System::TimeSpan TimeSpan::get_Zero()
		{
			return Global::GetFieldValue("mscorlib", "System", "TimeSpan", 0, NULL, "Zero");
		}

		void TimeSpan::set_Zero(mscorlib::System::TimeSpan  value)
		{
			throw;
		}

			//	Get/Set:TicksPerDay
		mscorlib::System::Int64 TimeSpan::get_TicksPerDay()
		{
			return Global::GetFieldInt64Value("mscorlib", "System", "TimeSpan", 0, NULL, "TicksPerDay");
		}

		void TimeSpan::set_TicksPerDay(mscorlib::System::Int64  value)
		{
		}

			//	Get/Set:TicksPerHour
		mscorlib::System::Int64 TimeSpan::get_TicksPerHour()
		{
			return Global::GetFieldInt64Value("mscorlib", "System", "TimeSpan", 0, NULL, "TicksPerHour");
		}

		void TimeSpan::set_TicksPerHour(mscorlib::System::Int64  value)
		{
		}

			//	Get/Set:TicksPerMillisecond
		mscorlib::System::Int64 TimeSpan::get_TicksPerMillisecond()
		{
			return Global::GetFieldInt64Value("mscorlib", "System", "TimeSpan", 0, NULL, "TicksPerMillisecond");
		}

		void TimeSpan::set_TicksPerMillisecond(mscorlib::System::Int64  value)
		{
		}

			//	Get/Set:TicksPerMinute
		mscorlib::System::Int64 TimeSpan::get_TicksPerMinute()
		{
			return Global::GetFieldInt64Value("mscorlib", "System", "TimeSpan", 0, NULL, "TicksPerMinute");
		}

		void TimeSpan::set_TicksPerMinute(mscorlib::System::Int64  value)
		{
		}

			//	Get/Set:TicksPerSecond
		mscorlib::System::Int64 TimeSpan::get_TicksPerSecond()
		{
			return Global::GetFieldInt64Value("mscorlib", "System", "TimeSpan", 0, NULL, "TicksPerSecond");
		}

		void TimeSpan::set_TicksPerSecond(mscorlib::System::Int64  value)
		{
		}


	}
}
