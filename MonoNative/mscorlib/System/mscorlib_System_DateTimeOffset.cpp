#include <mscorlib/System/mscorlib_System_DateTimeOffset.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::DateTimeOffset DateTimeOffset::Add(mscorlib::System::TimeSpan timeSpan)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(timeSpan).name());
				__parameters__[0] = (MonoObject*)timeSpan;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddDays(mscorlib::System::Double days)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(days).name());
				__parameters__[0] = &days;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddDays", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddHours(mscorlib::System::Double hours)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(hours).name());
				__parameters__[0] = &hours;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddHours", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddMilliseconds(mscorlib::System::Double milliseconds)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(milliseconds).name());
				__parameters__[0] = &milliseconds;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddMilliseconds", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddMinutes(mscorlib::System::Double minutes)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(minutes).name());
				__parameters__[0] = &minutes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddMinutes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddMonths(mscorlib::System::Int32 months)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(months).name());
				__parameters__[0] = &months;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddMonths", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddSeconds(mscorlib::System::Double seconds)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(seconds).name());
				__parameters__[0] = &seconds;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddSeconds", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddTicks(mscorlib::System::Int64 ticks)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(ticks).name());
				__parameters__[0] = &ticks;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddTicks", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::AddYears(mscorlib::System::Int32 years)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(years).name());
				__parameters__[0] = &years;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "AddYears", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::Int32 DateTimeOffset::Compare(mscorlib::System::DateTimeOffset first, mscorlib::System::DateTimeOffset second)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(first).name());
				__parameter_types__[1] = Global::GetType(typeid(second).name());
				__parameters__[0] = (MonoObject*)first;
				__parameters__[1] = (MonoObject*)second;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 DateTimeOffset::CompareTo(mscorlib::System::DateTimeOffset other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::Equals(mscorlib::System::DateTimeOffset other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::Equals(mscorlib::System::DateTimeOffset first, mscorlib::System::DateTimeOffset second)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(first).name());
				__parameter_types__[1] = Global::GetType(typeid(second).name());
				__parameters__[0] = (MonoObject*)first;
				__parameters__[1] = (MonoObject*)second;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::EqualsExact(mscorlib::System::DateTimeOffset other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "EqualsExact", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::FromFileTime(mscorlib::System::Int64 fileTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fileTime).name());
				__parameters__[0] = &fileTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "FromFileTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::Int32 DateTimeOffset::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::Parse(mscorlib::System::String input)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameters__[0] = (MonoObject*)input;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[2] = Global::GetType(typeid(styles).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)formatProvider;
				__parameters__[2] = reinterpret_cast<void*>(styles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ParseExact", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::TimeSpan DateTimeOffset::Subtract(mscorlib::System::DateTimeOffset value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Subtract", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::Subtract(mscorlib::System::TimeSpan value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "Subtract", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::Int64 DateTimeOffset::ToFileTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToFileTime", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ToLocalTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToLocalTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ToOffset(mscorlib::System::TimeSpan offset)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(offset).name());
				__parameters__[0] = (MonoObject*)offset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToOffset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::String DateTimeOffset::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTimeOffset::ToString(mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTimeOffset::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTimeOffset::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)formatProvider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::DateTimeOffset DateTimeOffset::ToUniversalTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "ToUniversalTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::TryParse(mscorlib::System::String input, mscorlib::System::DateTimeOffset result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::TryParse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(input).name());
				__parameter_types__[1] = Global::GetType(typeid(formatProvider).name());
				__parameter_types__[2] = Global::GetType(typeid(styles).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)input;
				__parameters__[1] = (MonoObject*)formatProvider;
				__parameters__[2] = reinterpret_cast<void*>(styles);
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTimeOffset::TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result)
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
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Date
		mscorlib::System::DateTime  DateTimeOffset::get_Date()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Date", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:DateTime
		mscorlib::System::DateTime  DateTimeOffset::get_DateTime()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_DateTime", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:Day
		mscorlib::System::Int32  DateTimeOffset::get_Day()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Day", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:DayOfWeek
		mscorlib::System::DayOfWeek::__ENUM__  DateTimeOffset::get_DayOfWeek()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_DayOfWeek", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:DayOfYear
		mscorlib::System::Int32  DateTimeOffset::get_DayOfYear()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_DayOfYear", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Hour
		mscorlib::System::Int32  DateTimeOffset::get_Hour()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Hour", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:LocalDateTime
		mscorlib::System::DateTime  DateTimeOffset::get_LocalDateTime()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_LocalDateTime", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:Millisecond
		mscorlib::System::Int32  DateTimeOffset::get_Millisecond()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Millisecond", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Minute
		mscorlib::System::Int32  DateTimeOffset::get_Minute()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Minute", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Month
		mscorlib::System::Int32  DateTimeOffset::get_Month()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Month", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Offset
		mscorlib::System::TimeSpan  DateTimeOffset::get_Offset()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Offset", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//	Get:Second
		mscorlib::System::Int32  DateTimeOffset::get_Second()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Second", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Ticks
		mscorlib::System::Int64  DateTimeOffset::get_Ticks()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Ticks", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:TimeOfDay
		mscorlib::System::TimeSpan  DateTimeOffset::get_TimeOfDay()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_TimeOfDay", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//	Get:UtcDateTime
		mscorlib::System::DateTime  DateTimeOffset::get_UtcDateTime()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_UtcDateTime", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:UtcTicks
		mscorlib::System::Int64  DateTimeOffset::get_UtcTicks()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_UtcTicks", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:Year
		mscorlib::System::Int32  DateTimeOffset::get_Year()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Year", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:Now
		mscorlib::System::DateTimeOffset  DateTimeOffset::get_Now()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_Now", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTimeOffset(__result__);
		}


		//	Get:UtcNow
		mscorlib::System::DateTimeOffset  DateTimeOffset::get_UtcNow()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTimeOffset", 0, NULL, "get_UtcNow", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTimeOffset(__result__);
		}



			//	Get/Set:MaxValue
		mscorlib::System::DateTimeOffset DateTimeOffset::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "DateTimeOffset", 0, NULL, "MaxValue");
		}


			//	Get/Set:MinValue
		mscorlib::System::DateTimeOffset DateTimeOffset::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "DateTimeOffset", 0, NULL, "MinValue");
		}



	}
}
