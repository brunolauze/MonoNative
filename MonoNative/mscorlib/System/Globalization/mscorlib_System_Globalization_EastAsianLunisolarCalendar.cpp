#include <mscorlib/System/Globalization/mscorlib_System_Globalization_EastAsianLunisolarCalendar.h>
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
			mscorlib::System::DateTime EastAsianLunisolarCalendar::AddMonths(mscorlib::System::DateTime time, mscorlib::System::Int32 months)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(months).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &months;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "AddMonths", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime EastAsianLunisolarCalendar::AddYears(mscorlib::System::DateTime time, mscorlib::System::Int32 years)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameter_types__[1] = Global::GetType(typeid(years).name());
					__parameters__[0] = (MonoObject*)time;
					__parameters__[1] = &years;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "AddYears", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetDayOfMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetDayOfMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::DayOfWeek::__ENUM__ EastAsianLunisolarCalendar::GetDayOfWeek(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetDayOfWeek", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetDayOfYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetDayOfYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetDaysInMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetDaysInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetDaysInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetLeapMonth", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetMonth(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetMonth", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetMonthsInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetMonthsInYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EastAsianLunisolarCalendar::IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "IsLeapDay", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EastAsianLunisolarCalendar::IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(month).name());
					__parameter_types__[2] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &month;
					__parameters__[2] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "IsLeapMonth", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EastAsianLunisolarCalendar::IsLeapYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameter_types__[1] = Global::GetType(typeid(era).name());
					__parameters__[0] = &year;
					__parameters__[1] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "IsLeapYear", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::DateTime EastAsianLunisolarCalendar::ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "ToDateTime", __native_object__, 8, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::ToFourDigitYear(mscorlib::System::Int32 year)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(year).name());
					__parameters__[0] = &year;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "ToFourDigitYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetCelestialStem(mscorlib::System::Int32 sexagenaryYear)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(sexagenaryYear).name());
					__parameters__[0] = &sexagenaryYear;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetCelestialStem", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetSexagenaryYear(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetSexagenaryYear", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 EastAsianLunisolarCalendar::GetTerrestrialBranch(mscorlib::System::Int32 sexagenaryYear)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(sexagenaryYear).name());
					__parameters__[0] = &sexagenaryYear;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "GetTerrestrialBranch", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:TwoDigitYearMax
			mscorlib::System::Int32  EastAsianLunisolarCalendar::get_TwoDigitYearMax()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "get_TwoDigitYearMax", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void EastAsianLunisolarCalendar::set_TwoDigitYearMax(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "set_TwoDigitYearMax", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:AlgorithmType
			mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  EastAsianLunisolarCalendar::get_AlgorithmType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "get_AlgorithmType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:Eras
			std::vector<mscorlib::System::Int32*>  EastAsianLunisolarCalendar::get_Eras()
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


			//	Get:MaxSupportedDateTime
			mscorlib::System::DateTime  EastAsianLunisolarCalendar::get_MaxSupportedDateTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_MaxSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:MinSupportedDateTime
			mscorlib::System::DateTime  EastAsianLunisolarCalendar::get_MinSupportedDateTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_MinSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  EastAsianLunisolarCalendar::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
