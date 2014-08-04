// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: DateTimeFormatInfo
// C++ Typed Name: mscorlib::System::Globalization::DateTimeFormatInfo


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DateTimeFormatInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Constructors Tests
			
			//DateTimeFormatInfo()
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::DateTimeFormatInfo *value = new mscorlib::System::Globalization::DateTimeFormatInfo();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,Clone_Test)
			{
				
				
			}

			// Method GetFormat
			//		Signature: mscorlib::System::Type formatType
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetFormat_Test)
			{
				
				
			}

			// Method GetAbbreviatedEraName
			//		Signature: mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetAbbreviatedEraName_Test)
			{
				
				
			}

			// Method GetAbbreviatedMonthName
			//		Signature: mscorlib::System::Int32 month
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetAbbreviatedMonthName_Test)
			{
				
				
			}

			// Method GetEra
			//		Signature: mscorlib::System::String eraName
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetEra_Test)
			{
				
				
			}

			// Method GetEraName
			//		Signature: mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetEraName_Test)
			{
				
				
			}

			// Method GetMonthName
			//		Signature: mscorlib::System::Int32 month
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetMonthName_Test)
			{
				
				
			}

			// Method GetAllDateTimePatterns
			//		Signature: 
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetAllDateTimePatterns_1_Test)
			{
				
				
			}

			// Method GetAllDateTimePatterns
			//		Signature: mscorlib::System::Char format
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetAllDateTimePatterns_2_Test)
			{
				
				
			}

			// Method GetDayName
			//		Signature: mscorlib::System::DayOfWeek::__ENUM__ dayofweek
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetDayName_Test)
			{
				
				
			}

			// Method GetAbbreviatedDayName
			//		Signature: mscorlib::System::DayOfWeek::__ENUM__ dayofweek
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetAbbreviatedDayName_Test)
			{
				
				
			}

			// Method GetShortestDayName
			//		Signature: mscorlib::System::DayOfWeek::__ENUM__ dayOfWeek
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetShortestDayName_Test)
			{
				
				
			}

			// Method SetAllDateTimePatterns
			//		Signature: std::vector<mscorlib::System::String*> patterns, mscorlib::System::Char format
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,SetAllDateTimePatterns_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method GetInstance
			//		Signature: mscorlib::System::IFormatProvider provider
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,GetInstance_StaticTest)
			{
				
				
			}

			// Method ReadOnly
			//		Signature: mscorlib::System::Globalization::DateTimeFormatInfo dtfi
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,ReadOnly_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_IsReadOnly_Test)
			{
				
				
			}

			// Property AbbreviatedDayNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_AbbreviatedDayNames_Test)
			{
				
				
			}

			// Property AbbreviatedDayNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_AbbreviatedDayNames_Test)
			{
				
				
			}

			// Property AbbreviatedMonthNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_AbbreviatedMonthNames_Test)
			{
				
				
			}

			// Property AbbreviatedMonthNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_AbbreviatedMonthNames_Test)
			{
				
				
			}

			// Property DayNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_DayNames_Test)
			{
				
				
			}

			// Property DayNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_DayNames_Test)
			{
				
				
			}

			// Property MonthNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_MonthNames_Test)
			{
				
				
			}

			// Property MonthNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_MonthNames_Test)
			{
				
				
			}

			// Property AbbreviatedMonthGenitiveNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_AbbreviatedMonthGenitiveNames_Test)
			{
				
				
			}

			// Property AbbreviatedMonthGenitiveNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_AbbreviatedMonthGenitiveNames_Test)
			{
				
				
			}

			// Property MonthGenitiveNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_MonthGenitiveNames_Test)
			{
				
				
			}

			// Property MonthGenitiveNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_MonthGenitiveNames_Test)
			{
				
				
			}

			// Property NativeCalendarName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_NativeCalendarName_Test)
			{
				
				
			}

			// Property ShortestDayNames
			//		Return Type: mscorlib::System::String*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_ShortestDayNames_Test)
			{
				
				
			}

			// Property ShortestDayNames
			//		Return Type: mscorlib::System::String*
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_ShortestDayNames_Test)
			{
				
				
			}

			// Property AMDesignator
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_AMDesignator_Test)
			{
				
				
			}

			// Property AMDesignator
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_AMDesignator_Test)
			{
				
				
			}

			// Property PMDesignator
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_PMDesignator_Test)
			{
				
				
			}

			// Property PMDesignator
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_PMDesignator_Test)
			{
				
				
			}

			// Property DateSeparator
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_DateSeparator_Test)
			{
				
				
			}

			// Property DateSeparator
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_DateSeparator_Test)
			{
				
				
			}

			// Property TimeSeparator
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_TimeSeparator_Test)
			{
				
				
			}

			// Property TimeSeparator
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_TimeSeparator_Test)
			{
				
				
			}

			// Property LongDatePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_LongDatePattern_Test)
			{
				
				
			}

			// Property LongDatePattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_LongDatePattern_Test)
			{
				
				
			}

			// Property ShortDatePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_ShortDatePattern_Test)
			{
				
				
			}

			// Property ShortDatePattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_ShortDatePattern_Test)
			{
				
				
			}

			// Property ShortTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_ShortTimePattern_Test)
			{
				
				
			}

			// Property ShortTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_ShortTimePattern_Test)
			{
				
				
			}

			// Property LongTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_LongTimePattern_Test)
			{
				
				
			}

			// Property LongTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_LongTimePattern_Test)
			{
				
				
			}

			// Property MonthDayPattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_MonthDayPattern_Test)
			{
				
				
			}

			// Property MonthDayPattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_MonthDayPattern_Test)
			{
				
				
			}

			// Property YearMonthPattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_YearMonthPattern_Test)
			{
				
				
			}

			// Property YearMonthPattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_YearMonthPattern_Test)
			{
				
				
			}

			// Property FullDateTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_FullDateTimePattern_Test)
			{
				
				
			}

			// Property FullDateTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_FullDateTimePattern_Test)
			{
				
				
			}

			// Property FirstDayOfWeek
			//		Return Type: mscorlib::System::DayOfWeek::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_FirstDayOfWeek_Test)
			{
				
				
			}

			// Property FirstDayOfWeek
			//		Return Type: mscorlib::System::DayOfWeek::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_FirstDayOfWeek_Test)
			{
				
				
			}

			// Property Calendar
			//		Return Type: mscorlib::System::Globalization::Calendar
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_Calendar_Test)
			{
				
				
			}

			// Property Calendar
			//		Return Type: mscorlib::System::Globalization::Calendar
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_Calendar_Test)
			{
				
				
			}

			// Property CalendarWeekRule
			//		Return Type: mscorlib::System::Globalization::CalendarWeekRule::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_CalendarWeekRule_Test)
			{
				
				
			}

			// Property CalendarWeekRule
			//		Return Type: mscorlib::System::Globalization::CalendarWeekRule::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,set_CalendarWeekRule_Test)
			{
				
				
			}

			// Property RFC1123Pattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_RFC1123Pattern_Test)
			{
				
				
			}

			// Property SortableDateTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_SortableDateTimePattern_Test)
			{
				
				
			}

			// Property UniversalSortableDateTimePattern
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_UniversalSortableDateTimePattern_Test)
			{
				
				
			}

			// Property CurrentInfo
			//		Return Type: mscorlib::System::Globalization::DateTimeFormatInfo
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_CurrentInfo_Test)
			{
				
				
			}

			// Property InvariantInfo
			//		Return Type: mscorlib::System::Globalization::DateTimeFormatInfo
			//			Property Get Method
			TEST(mscorlib_System_Globalization_DateTimeFormatInfo_Fixture,get_InvariantInfo_Test)
			{
				
				
			}


		}
	}
}
