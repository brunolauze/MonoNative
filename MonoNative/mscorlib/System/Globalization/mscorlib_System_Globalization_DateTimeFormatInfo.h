#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CalendarWeekRule.h>

namespace mscorlib
{
	namespace System
	{

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

			class Calendar;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class DateTimeFormatInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IFormatProvider
				, public virtual mscorlib::System::ICloneable
			{
			public:
				DateTimeFormatInfo()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.DateTimeFormatInfo"))
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "DateTimeFormatInfo");
				};
			
				DateTimeFormatInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IFormatProvider(NULL)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				DateTimeFormatInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IFormatProvider(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~DateTimeFormatInfo()
				{
				};
			

				DateTimeFormatInfo & operator=(DateTimeFormatInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Globalization::DateTimeFormatInfo  GetInstance(mscorlib::System::IFormatProvider provider);
				static mscorlib::System::Globalization::DateTimeFormatInfo  ReadOnly(mscorlib::System::Globalization::DateTimeFormatInfo dtfi);
				virtual mscorlib::System::Object  Clone();
				virtual mscorlib::System::Object  GetFormat(mscorlib::System::Type formatType);
				mscorlib::System::String  GetAbbreviatedEraName(mscorlib::System::Int32 era);
				mscorlib::System::String  GetAbbreviatedMonthName(mscorlib::System::Int32 month);
				mscorlib::System::Int32  GetEra(mscorlib::System::String eraName);
				mscorlib::System::String  GetEraName(mscorlib::System::Int32 era);
				mscorlib::System::String  GetMonthName(mscorlib::System::Int32 month);
				std::vector<mscorlib::System::String*>  GetAllDateTimePatterns();
				std::vector<mscorlib::System::String*>  GetAllDateTimePatterns(mscorlib::System::Char format);
				mscorlib::System::String  GetDayName(mscorlib::System::DayOfWeek::__ENUM__ dayofweek);
				mscorlib::System::String  GetAbbreviatedDayName(mscorlib::System::DayOfWeek::__ENUM__ dayofweek);
				mscorlib::System::String  GetShortestDayName(mscorlib::System::DayOfWeek::__ENUM__ dayOfWeek);
				void  SetAllDateTimePatterns(std::vector<mscorlib::System::String*> patterns, mscorlib::System::Char format);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_AbbreviatedDayNames, put=set_AbbreviatedDayNames)) std::vector<mscorlib::System::String*>  AbbreviatedDayNames;
				__declspec(property(get=get_AbbreviatedMonthNames, put=set_AbbreviatedMonthNames)) std::vector<mscorlib::System::String*>  AbbreviatedMonthNames;
				__declspec(property(get=get_DayNames, put=set_DayNames)) std::vector<mscorlib::System::String*>  DayNames;
				__declspec(property(get=get_MonthNames, put=set_MonthNames)) std::vector<mscorlib::System::String*>  MonthNames;
				__declspec(property(get=get_AbbreviatedMonthGenitiveNames, put=set_AbbreviatedMonthGenitiveNames)) std::vector<mscorlib::System::String*>  AbbreviatedMonthGenitiveNames;
				__declspec(property(get=get_MonthGenitiveNames, put=set_MonthGenitiveNames)) std::vector<mscorlib::System::String*>  MonthGenitiveNames;
				__declspec(property(get=get_NativeCalendarName)) mscorlib::System::String  NativeCalendarName;
				__declspec(property(get=get_ShortestDayNames, put=set_ShortestDayNames)) std::vector<mscorlib::System::String*>  ShortestDayNames;
				__declspec(property(get=get_AMDesignator, put=set_AMDesignator)) mscorlib::System::String  AMDesignator;
				__declspec(property(get=get_PMDesignator, put=set_PMDesignator)) mscorlib::System::String  PMDesignator;
				__declspec(property(get=get_DateSeparator, put=set_DateSeparator)) mscorlib::System::String  DateSeparator;
				__declspec(property(get=get_TimeSeparator, put=set_TimeSeparator)) mscorlib::System::String  TimeSeparator;
				__declspec(property(get=get_LongDatePattern, put=set_LongDatePattern)) mscorlib::System::String  LongDatePattern;
				__declspec(property(get=get_ShortDatePattern, put=set_ShortDatePattern)) mscorlib::System::String  ShortDatePattern;
				__declspec(property(get=get_ShortTimePattern, put=set_ShortTimePattern)) mscorlib::System::String  ShortTimePattern;
				__declspec(property(get=get_LongTimePattern, put=set_LongTimePattern)) mscorlib::System::String  LongTimePattern;
				__declspec(property(get=get_MonthDayPattern, put=set_MonthDayPattern)) mscorlib::System::String  MonthDayPattern;
				__declspec(property(get=get_YearMonthPattern, put=set_YearMonthPattern)) mscorlib::System::String  YearMonthPattern;
				__declspec(property(get=get_FullDateTimePattern, put=set_FullDateTimePattern)) mscorlib::System::String  FullDateTimePattern;
				__declspec(property(get=get_FirstDayOfWeek, put=set_FirstDayOfWeek)) mscorlib::System::DayOfWeek::__ENUM__  FirstDayOfWeek;
				__declspec(property(get=get_Calendar, put=set_Calendar)) mscorlib::System::Globalization::Calendar  Calendar;
				__declspec(property(get=get_CalendarWeekRule, put=set_CalendarWeekRule)) mscorlib::System::Globalization::CalendarWeekRule::__ENUM__  CalendarWeekRule;
				__declspec(property(get=get_RFC1123Pattern)) mscorlib::System::String  RFC1123Pattern;
				__declspec(property(get=get_SortableDateTimePattern)) mscorlib::System::String  SortableDateTimePattern;
				__declspec(property(get=get_UniversalSortableDateTimePattern)) mscorlib::System::String  UniversalSortableDateTimePattern;

				//Public Static Properties
				static Property<mscorlib::System::Globalization::DateTimeFormatInfo> CurrentInfo;
				static Property<mscorlib::System::Globalization::DateTimeFormatInfo> InvariantInfo;

				//Get Set Properties Methods
				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//	Get/Set:AbbreviatedDayNames
				std::vector<mscorlib::System::String*>  get_AbbreviatedDayNames();
				void set_AbbreviatedDayNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:AbbreviatedMonthNames
				std::vector<mscorlib::System::String*>  get_AbbreviatedMonthNames();
				void set_AbbreviatedMonthNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:DayNames
				std::vector<mscorlib::System::String*>  get_DayNames();
				void set_DayNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:MonthNames
				std::vector<mscorlib::System::String*>  get_MonthNames();
				void set_MonthNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:AbbreviatedMonthGenitiveNames
				std::vector<mscorlib::System::String*>  get_AbbreviatedMonthGenitiveNames();
				void set_AbbreviatedMonthGenitiveNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:MonthGenitiveNames
				std::vector<mscorlib::System::String*>  get_MonthGenitiveNames();
				void set_MonthGenitiveNames(std::vector<mscorlib::System::String*>  value);

				//	Get:NativeCalendarName
				mscorlib::System::String  get_NativeCalendarName();

				//	Get/Set:ShortestDayNames
				std::vector<mscorlib::System::String*>  get_ShortestDayNames();
				void set_ShortestDayNames(std::vector<mscorlib::System::String*>  value);

				//	Get/Set:AMDesignator
				mscorlib::System::String  get_AMDesignator();
				void set_AMDesignator(mscorlib::System::String  value);

				//	Get/Set:PMDesignator
				mscorlib::System::String  get_PMDesignator();
				void set_PMDesignator(mscorlib::System::String  value);

				//	Get/Set:DateSeparator
				mscorlib::System::String  get_DateSeparator();
				void set_DateSeparator(mscorlib::System::String  value);

				//	Get/Set:TimeSeparator
				mscorlib::System::String  get_TimeSeparator();
				void set_TimeSeparator(mscorlib::System::String  value);

				//	Get/Set:LongDatePattern
				mscorlib::System::String  get_LongDatePattern();
				void set_LongDatePattern(mscorlib::System::String  value);

				//	Get/Set:ShortDatePattern
				mscorlib::System::String  get_ShortDatePattern();
				void set_ShortDatePattern(mscorlib::System::String  value);

				//	Get/Set:ShortTimePattern
				mscorlib::System::String  get_ShortTimePattern();
				void set_ShortTimePattern(mscorlib::System::String  value);

				//	Get/Set:LongTimePattern
				mscorlib::System::String  get_LongTimePattern();
				void set_LongTimePattern(mscorlib::System::String  value);

				//	Get/Set:MonthDayPattern
				mscorlib::System::String  get_MonthDayPattern();
				void set_MonthDayPattern(mscorlib::System::String  value);

				//	Get/Set:YearMonthPattern
				mscorlib::System::String  get_YearMonthPattern();
				void set_YearMonthPattern(mscorlib::System::String  value);

				//	Get/Set:FullDateTimePattern
				mscorlib::System::String  get_FullDateTimePattern();
				void set_FullDateTimePattern(mscorlib::System::String  value);

				//	Get/Set:FirstDayOfWeek
				mscorlib::System::DayOfWeek::__ENUM__  get_FirstDayOfWeek();
				void set_FirstDayOfWeek(mscorlib::System::DayOfWeek::__ENUM__  value);

				//	Get/Set:Calendar
				mscorlib::System::Globalization::Calendar  get_Calendar();
				void set_Calendar(mscorlib::System::Globalization::Calendar  value);

				//	Get/Set:CalendarWeekRule
				mscorlib::System::Globalization::CalendarWeekRule::__ENUM__  get_CalendarWeekRule();
				void set_CalendarWeekRule(mscorlib::System::Globalization::CalendarWeekRule::__ENUM__  value);

				//	Get:RFC1123Pattern
				mscorlib::System::String  get_RFC1123Pattern();

				//	Get:SortableDateTimePattern
				mscorlib::System::String  get_SortableDateTimePattern();

				//	Get:UniversalSortableDateTimePattern
				mscorlib::System::String  get_UniversalSortableDateTimePattern();

				//Get Set Static Properties Methods
				//	Get:CurrentInfo
				static mscorlib::System::Globalization::DateTimeFormatInfo  get_CurrentInfo();

				//	Get:InvariantInfo
				static mscorlib::System::Globalization::DateTimeFormatInfo  get_InvariantInfo();


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
