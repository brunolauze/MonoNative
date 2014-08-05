#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::DateTime , mscorlib::System::DateTime> mscorlib::System::DateTime::Now(&mscorlib::System::DateTime::get_Now, &mscorlib::System::DateTime::set_Now);
		Property<mscorlib::System::DateTime , mscorlib::System::DateTime> mscorlib::System::DateTime::Today(&mscorlib::System::DateTime::get_Today, &mscorlib::System::DateTime::set_Today);
		Property<mscorlib::System::DateTime , mscorlib::System::DateTime> mscorlib::System::DateTime::UtcNow(&mscorlib::System::DateTime::get_UtcNow, &mscorlib::System::DateTime::set_UtcNow);
		//Public Methods
		mscorlib::System::DateTime DateTime::Add(mscorlib::System::TimeSpan value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddDays(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddDays", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddTicks(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddTicks", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddHours(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddHours", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddMilliseconds(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddMilliseconds", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddMinutes(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddMinutes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddMonths(mscorlib::System::Int32 months)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(months).name());
				__parameters__[0] = &months;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddMonths", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddSeconds(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddSeconds", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::AddYears(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "AddYears", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Int32 DateTime::Compare(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(t1).name());
				__parameter_types__[1] = Global::GetType(typeid(t2).name());
				__parameters__[0] = (MonoObject*)t1;
				__parameters__[1] = (MonoObject*)t2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Compare", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 DateTime::CompareTo(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::IsDaylightSavingTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "IsDaylightSavingTime", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 DateTime::CompareTo(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "CompareTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::Equals(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 DateTime::ToBinary()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToBinary", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime DateTime::FromBinary(mscorlib::System::Int64 dateData)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateData).name());
				__parameters__[0] = &dateData;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "FromBinary", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::SpecifyKind(mscorlib::System::DateTime value, mscorlib::System::DateTimeKind::__ENUM__ kind)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameter_types__[1] = Global::GetType(typeid(kind).name());
				__parameters__[0] = (MonoObject*)value;
				__parameters__[1] = reinterpret_cast<void*>(kind);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "SpecifyKind", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Int32 DateTime::DaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(year).name());
				__parameter_types__[1] = Global::GetType(typeid(month).name());
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "DaysInMonth", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::Equals(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::Equals(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(t1).name());
				__parameter_types__[1] = Global::GetType(typeid(t2).name());
				__parameters__[0] = (MonoObject*)t1;
				__parameters__[1] = (MonoObject*)t2;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Equals", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime DateTime::FromFileTime(mscorlib::System::Int64 fileTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fileTime).name());
				__parameters__[0] = &fileTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "FromFileTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::FromFileTimeUtc(mscorlib::System::Int64 fileTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(fileTime).name());
				__parameters__[0] = &fileTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "FromFileTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::FromOADate(mscorlib::System::Double d)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(d).name());
				__parameters__[0] = &d;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "FromOADate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		std::vector<mscorlib::System::String*> DateTime::GetDateTimeFormats()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetDateTimeFormats", __native_object__, 0, NULL, NULL, NULL);
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

		std::vector<mscorlib::System::String*> DateTime::GetDateTimeFormats(mscorlib::System::Char format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = &format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetDateTimeFormats", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::String*> DateTime::GetDateTimeFormats(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetDateTimeFormats", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

		std::vector<mscorlib::System::String*> DateTime::GetDateTimeFormats(mscorlib::System::Char format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = &format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetDateTimeFormats", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

		mscorlib::System::Int32 DateTime::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::TypeCode::__ENUM__ DateTime::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::TypeCode::__ENUM__*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::IsLeapYear(mscorlib::System::Int32 year)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(year).name());
				__parameters__[0] = &year;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "IsLeapYear", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime DateTime::Parse(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Parse", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Parse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameter_types__[2] = Global::GetType(typeid(styles).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				__parameters__[2] = reinterpret_cast<void*>(styles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Parse", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::ParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ParseExact", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::ParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(style).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = reinterpret_cast<void*>(style);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::ParseExact(mscorlib::System::String s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(style).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = reinterpret_cast<void*>(style);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ParseExact", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Boolean DateTime::TryParse(mscorlib::System::String s, mscorlib::System::DateTime result)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "TryParse", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::TryParse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTime result)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameter_types__[2] = Global::GetType(typeid(styles).name());
				__parameter_types__[3] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)provider;
				__parameters__[2] = reinterpret_cast<void*>(styles);
				__parameters__[3] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "TryParse", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::TryParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = Global::GetType(typeid(format).name());
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(style).name());
				__parameter_types__[4] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = (MonoObject*)format;
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = reinterpret_cast<void*>(style);
				__parameters__[4] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean DateTime::TryParseExact(mscorlib::System::String s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(formats).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(provider).name());
				__parameter_types__[3] = Global::GetType(typeid(style).name());
				__parameter_types__[4] = Global::GetType(typeid(result).name());
				__parameters__[0] = (MonoObject*)s;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(formats, typeid(mscorlib::System::String).name());
				__parameters__[2] = (MonoObject*)provider;
				__parameters__[3] = reinterpret_cast<void*>(style);
				__parameters__[4] = (MonoObject*)result;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "TryParseExact", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeSpan DateTime::Subtract(mscorlib::System::DateTime value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Subtract", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::DateTime DateTime::Subtract(mscorlib::System::TimeSpan value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "Subtract", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::Int64 DateTime::ToFileTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToFileTime", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int64 DateTime::ToFileTimeUtc()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToFileTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		mscorlib::System::String DateTime::ToLongDateString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToLongDateString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToLongTimeString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToLongTimeString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Double DateTime::ToOADate()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToOADate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}

		mscorlib::System::String DateTime::ToShortDateString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToShortDateString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToShortTimeString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToShortTimeString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToString(mscorlib::System::String format)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameters__[0] = (MonoObject*)format;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DateTime::ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToString", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::DateTime DateTime::ToLocalTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToLocalTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime DateTime::ToUniversalTime()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "ToUniversalTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		//Get Set Properties Methods
		//	Get:Date
		mscorlib::System::DateTime  DateTime::get_Date() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Date", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:Month
		mscorlib::System::Int32  DateTime::get_Month() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Month", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Day
		mscorlib::System::Int32  DateTime::get_Day() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Day", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:DayOfWeek
		mscorlib::System::DayOfWeek::__ENUM__  DateTime::get_DayOfWeek() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_DayOfWeek", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:DayOfYear
		mscorlib::System::Int32  DateTime::get_DayOfYear() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_DayOfYear", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:TimeOfDay
		mscorlib::System::TimeSpan  DateTime::get_TimeOfDay() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_TimeOfDay", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//	Get:Hour
		mscorlib::System::Int32  DateTime::get_Hour() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Hour", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Minute
		mscorlib::System::Int32  DateTime::get_Minute() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Minute", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Second
		mscorlib::System::Int32  DateTime::get_Second() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Second", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Millisecond
		mscorlib::System::Int32  DateTime::get_Millisecond() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Millisecond", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Ticks
		mscorlib::System::Int64  DateTime::get_Ticks() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Ticks", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:Year
		mscorlib::System::Int32  DateTime::get_Year() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Year", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Kind
		mscorlib::System::DateTimeKind::__ENUM__  DateTime::get_Kind() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Kind", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::DateTimeKind::__ENUM__*)mono_object_unbox(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:Now
		mscorlib::System::DateTime  DateTime::get_Now()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Now", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}

		void DateTime::set_Now(mscorlib::System::DateTime  value)
		{
			throw;
		}


		//	Get:Today
		mscorlib::System::DateTime  DateTime::get_Today()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_Today", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}

		void DateTime::set_Today(mscorlib::System::DateTime  value)
		{
			throw;
		}


		//	Get:UtcNow
		mscorlib::System::DateTime  DateTime::get_UtcNow()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DateTime", 0, NULL, "get_UtcNow", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}

		void DateTime::set_UtcNow(mscorlib::System::DateTime  value)
		{
			throw;
		}



			//	Get/Set:MaxValue
		mscorlib::System::DateTime DateTime::get_MaxValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "DateTime", 0, NULL, "MaxValue");
		}

		void DateTime::set_MaxValue(mscorlib::System::DateTime  value)
		{
			throw;
		}

			//	Get/Set:MinValue
		mscorlib::System::DateTime DateTime::get_MinValue()
		{
			return Global::GetFieldValue("mscorlib", "System", "DateTime", 0, NULL, "MinValue");
		}

		void DateTime::set_MinValue(mscorlib::System::DateTime  value)
		{
			throw;
		}


	}
}
