#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TaiwanCalendar.h>
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
			mscorlib::System::DateTime TaiwanCalendar::AddMonths(mscorlib::System::DateTime time, mscorlib::System::Int32 months)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(months).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &months;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "AddMonths", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime TaiwanCalendar::AddYears(mscorlib::System::DateTime time, mscorlib::System::Int32 years)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(years).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &years;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "AddYears", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetDayOfMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetDayOfMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::DayOfWeek::__ENUM__ TaiwanCalendar::GetDayOfWeek(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetDayOfWeek", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::DayOfWeek::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			mscorlib::System::Int32 TaiwanCalendar::GetDayOfYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetDayOfYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetDaysInMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetDaysInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetDaysInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetEra(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetEra", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetLeapMonth", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetMonthsInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetMonthsInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetWeekOfYear(mscorlib::System::DateTime time, mscorlib::System::Globalization::CalendarWeekRule::__ENUM__ rule, mscorlib::System::DayOfWeek::__ENUM__ firstDayOfWeek)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(rule).name());
					__parameter_types__[2] = Global::GetType(typeid(firstDayOfWeek).name());
					__parameters__[0] = (MonoObject*)time;
					mscorlib::System::Int32 __param_rule__ = rule;
					__parameters__[1] = &__param_rule__;
					mscorlib::System::Int32 __param_firstDayOfWeek__ = firstDayOfWeek;
					__parameters__[2] = &__param_firstDayOfWeek__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetWeekOfYear", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::GetYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "GetYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean TaiwanCalendar::IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "IsLeapDay", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean TaiwanCalendar::IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "IsLeapMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean TaiwanCalendar::IsLeapYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "IsLeapYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::DateTime TaiwanCalendar::ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "ToDateTime", __native_object__, 8, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 TaiwanCalendar::ToFourDigitYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "ToFourDigitYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Eras
			std::vector<mscorlib::System::Int32*>  TaiwanCalendar::get_Eras() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "get_Eras", __native_object__, 0, NULL, NULL, NULL);
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


			//	Get/Set:TwoDigitYearMax
			mscorlib::System::Int32  TaiwanCalendar::get_TwoDigitYearMax() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "get_TwoDigitYearMax", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void TaiwanCalendar::set_TwoDigitYearMax(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "set_TwoDigitYearMax", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:AlgorithmType
			mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  TaiwanCalendar::get_AlgorithmType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "get_AlgorithmType", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


			//	Get:MinSupportedDateTime
			mscorlib::System::DateTime  TaiwanCalendar::get_MinSupportedDateTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "get_MinSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:MaxSupportedDateTime
			mscorlib::System::DateTime  TaiwanCalendar::get_MaxSupportedDateTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "TaiwanCalendar", 0, NULL, "get_MaxSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  TaiwanCalendar::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
