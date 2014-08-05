#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CALENDAR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CALENDAR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CalendarAlgorithmType.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CalendarWeekRule.h>

namespace mscorlib
{
	namespace System
	{

		class DateTime;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class Calendar
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
			{
			public:
				Calendar(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				Calendar(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~Calendar()
				{
				};
			

				Calendar & operator=(Calendar &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Object  Clone();
				virtual mscorlib::System::Int32  GetLeapMonth(mscorlib::System::Int32 year);
				virtual mscorlib::System::Int32  GetLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 era);
				static mscorlib::System::Globalization::Calendar  ReadOnly(mscorlib::System::Globalization::Calendar calendar);
				virtual mscorlib::System::DateTime  AddDays(mscorlib::System::DateTime time, mscorlib::System::Int32 days);
				virtual mscorlib::System::DateTime  AddHours(mscorlib::System::DateTime time, mscorlib::System::Int32 hours);
				virtual mscorlib::System::DateTime  AddMilliseconds(mscorlib::System::DateTime time, mscorlib::System::Double milliseconds);
				virtual mscorlib::System::DateTime  AddMinutes(mscorlib::System::DateTime time, mscorlib::System::Int32 minutes);
				virtual mscorlib::System::DateTime  AddMonths(mscorlib::System::DateTime time, mscorlib::System::Int32 months);
				virtual mscorlib::System::DateTime  AddSeconds(mscorlib::System::DateTime time, mscorlib::System::Int32 seconds);
				virtual mscorlib::System::DateTime  AddWeeks(mscorlib::System::DateTime time, mscorlib::System::Int32 weeks);
				virtual mscorlib::System::DateTime  AddYears(mscorlib::System::DateTime time, mscorlib::System::Int32 years);
				virtual mscorlib::System::Int32  GetDayOfMonth(mscorlib::System::DateTime time);
				virtual mscorlib::System::DayOfWeek::__ENUM__  GetDayOfWeek(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetDayOfYear(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month);
				virtual mscorlib::System::Int32  GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era);
				virtual mscorlib::System::Int32  GetDaysInYear(mscorlib::System::Int32 year);
				virtual mscorlib::System::Int32  GetDaysInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era);
				virtual mscorlib::System::Int32  GetEra(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetHour(mscorlib::System::DateTime time);
				virtual mscorlib::System::Double  GetMilliseconds(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetMinute(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetMonth(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetMonthsInYear(mscorlib::System::Int32 year);
				virtual mscorlib::System::Int32  GetMonthsInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era);
				virtual mscorlib::System::Int32  GetSecond(mscorlib::System::DateTime time);
				virtual mscorlib::System::Int32  GetWeekOfYear(mscorlib::System::DateTime time, mscorlib::System::Globalization::CalendarWeekRule::__ENUM__ rule, mscorlib::System::DayOfWeek::__ENUM__ firstDayOfWeek);
				virtual mscorlib::System::Int32  GetYear(mscorlib::System::DateTime time);
				virtual mscorlib::System::Boolean  IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day);
				virtual mscorlib::System::Boolean  IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era);
				virtual mscorlib::System::Boolean  IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month);
				virtual mscorlib::System::Boolean  IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era);
				virtual mscorlib::System::Boolean  IsLeapYear(mscorlib::System::Int32 year);
				virtual mscorlib::System::Boolean  IsLeapYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era);
				virtual mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond);
				virtual mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era);
				virtual mscorlib::System::Int32  ToFourDigitYear(mscorlib::System::Int32 year);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Eras)) std::vector<mscorlib::System::Int32*>  Eras;
				__declspec(property(get=get_AlgorithmType)) mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  AlgorithmType;
				__declspec(property(get=get_MaxSupportedDateTime)) mscorlib::System::DateTime  MaxSupportedDateTime;
				__declspec(property(get=get_MinSupportedDateTime)) mscorlib::System::DateTime  MinSupportedDateTime;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax)) mscorlib::System::Int32  TwoDigitYearMax;

				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Globalization::Calendar> CurrentEra;

				//Get Set Properties Methods
				//	Get:Eras
				std::vector<mscorlib::System::Int32*>  get_Eras() const;

				//	Get:AlgorithmType
				mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  get_AlgorithmType() const;

				//	Get:MaxSupportedDateTime
				mscorlib::System::DateTime  get_MaxSupportedDateTime() const;

				//	Get:MinSupportedDateTime
				mscorlib::System::DateTime  get_MinSupportedDateTime() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get/Set:TwoDigitYearMax
				mscorlib::System::Int32  get_TwoDigitYearMax() const;
				void set_TwoDigitYearMax(mscorlib::System::Int32  value);

				//	Get/Set:CurrentEra
				static mscorlib::System::Int32  get_CurrentEra();
				static void set_CurrentEra(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
