#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Object Calendar::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Int32 Calendar::GetLeapMonth(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetLeapMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetLeapMonth", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Globalization::Calendar Calendar::ReadOnly(mscorlib::System::Globalization::Calendar calendar)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(calendar).name());
					__parameters__[0] = (MonoObject*)calendar;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::Calendar(__result__);
			}

			mscorlib::System::DateTime Calendar::AddDays(mscorlib::System::DateTime time, mscorlib::System::Int32 days)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(days).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &days;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddDays", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddHours(mscorlib::System::DateTime time, mscorlib::System::Int32 hours)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(hours).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &hours;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddHours", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddMilliseconds(mscorlib::System::DateTime time, mscorlib::System::Double milliseconds)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(milliseconds).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &milliseconds;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddMilliseconds", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddMinutes(mscorlib::System::DateTime time, mscorlib::System::Int32 minutes)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(minutes).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &minutes;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddMinutes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddMonths(mscorlib::System::DateTime time, mscorlib::System::Int32 months)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(months).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &months;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddMonths", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddSeconds(mscorlib::System::DateTime time, mscorlib::System::Int32 seconds)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(seconds).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &seconds;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddSeconds", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddWeeks(mscorlib::System::DateTime time, mscorlib::System::Int32 weeks)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(weeks).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &weeks;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddWeeks", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::AddYears(mscorlib::System::DateTime time, mscorlib::System::Int32 years)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(years).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &years;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "AddYears", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDayOfMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDayOfMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::DayOfWeek::__ENUM__ Calendar::GetDayOfWeek(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDayOfWeek", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDayOfYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDayOfYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDaysInMonth", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDaysInMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDaysInYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDaysInYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetDaysInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetDaysInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetEra(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetEra", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetHour(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetHour", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Double Calendar::GetMilliseconds(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetMilliseconds", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetMinute(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetMinute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetMonthsInYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetMonthsInYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetMonthsInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetMonthsInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetSecond(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetSecond", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetWeekOfYear(mscorlib::System::DateTime time, mscorlib::System::Globalization::CalendarWeekRule::__ENUM__ rule, mscorlib::System::DayOfWeek::__ENUM__ firstDayOfWeek)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(rule).name());
					__parameter_types__[2] = Global::GetType(typeid(firstDayOfWeek).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = reinterpret_cast<void*>(rule);
					__parameters__[2] = reinterpret_cast<void*>(firstDayOfWeek);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetWeekOfYear", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Calendar::GetYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "GetYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(day).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &day;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapDay", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(day).name());
					__parameter_types__[3] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &day;
					__parameters__[3] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapDay", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapMonth", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Calendar::IsLeapYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "IsLeapYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::DateTime Calendar::ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond)
			{
					MonoType *__parameter_types__[7];
					void *__parameters__[7];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(day).name());
					__parameter_types__[3] = Global::GetType(typeid(hour).name());
					__parameter_types__[4] = Global::GetType(typeid(minute).name());
					__parameter_types__[5] = Global::GetType(typeid(second).name());
					__parameter_types__[6] = Global::GetType(typeid(millisecond).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &day;
					__parameters__[3] = &hour;
					__parameters__[4] = &minute;
					__parameters__[5] = &second;
					__parameters__[6] = &millisecond;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "ToDateTime", __native_object__, 7, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Calendar::ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[8];
					void *__parameters__[8];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(day).name());
					__parameter_types__[3] = Global::GetType(typeid(hour).name());
					__parameter_types__[4] = Global::GetType(typeid(minute).name());
					__parameter_types__[5] = Global::GetType(typeid(second).name());
					__parameter_types__[6] = Global::GetType(typeid(millisecond).name());
					__parameter_types__[7] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &day;
					__parameters__[3] = &hour;
					__parameters__[4] = &minute;
					__parameters__[5] = &second;
					__parameters__[6] = &millisecond;
					__parameters__[7] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "ToDateTime", __native_object__, 8, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 Calendar::ToFourDigitYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "ToFourDigitYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Eras
			std::vector<mscorlib::System::Int32*>  Calendar::get_Eras()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_Eras", __native_object__, 0, NULL, NULL, NULL);
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


			//	Get:AlgorithmType
			mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  Calendar::get_AlgorithmType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_AlgorithmType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:MaxSupportedDateTime
			mscorlib::System::DateTime  Calendar::get_MaxSupportedDateTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_MaxSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:MinSupportedDateTime
			mscorlib::System::DateTime  Calendar::get_MinSupportedDateTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_MinSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  Calendar::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:TwoDigitYearMax
			mscorlib::System::Int32  Calendar::get_TwoDigitYearMax()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_TwoDigitYearMax", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Calendar::set_TwoDigitYearMax(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "set_TwoDigitYearMax", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


				//	Get/Set:CurrentEra
			mscorlib::System::Int32 Calendar::get_CurrentEra()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Globalization", "Calendar", 0, NULL, "CurrentEra");
			}

			void Calendar::set_CurrentEra(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
