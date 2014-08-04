// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: JapaneseCalendar
// C++ Typed Name: mscorlib::System::Globalization::JapaneseCalendar


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_JapaneseCalendar.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Constructors Tests
			
			//JapaneseCalendar()
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::JapaneseCalendar *value = new mscorlib::System::Globalization::JapaneseCalendar();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method AddMonths
			//		Signature: mscorlib::System::DateTime time, mscorlib::System::Int32 months
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,AddMonths_Test)
			{
				
				
			}

			// Method AddYears
			//		Signature: mscorlib::System::DateTime time, mscorlib::System::Int32 years
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,AddYears_Test)
			{
				
				
			}

			// Method GetDayOfMonth
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetDayOfMonth_Test)
			{
				
				
			}

			// Method GetDayOfWeek
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetDayOfWeek_Test)
			{
				
				
			}

			// Method GetDayOfYear
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetDayOfYear_Test)
			{
				
				
			}

			// Method GetDaysInMonth
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetDaysInMonth_Test)
			{
				
				
			}

			// Method GetDaysInYear
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetDaysInYear_Test)
			{
				
				
			}

			// Method GetEra
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetEra_Test)
			{
				
				
			}

			// Method GetLeapMonth
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetLeapMonth_Test)
			{
				
				
			}

			// Method GetMonth
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetMonth_Test)
			{
				
				
			}

			// Method GetMonthsInYear
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetMonthsInYear_Test)
			{
				
				
			}

			// Method GetWeekOfYear
			//		Signature: mscorlib::System::DateTime time, mscorlib::System::Globalization::CalendarWeekRule::__ENUM__ rule, mscorlib::System::DayOfWeek::__ENUM__ firstDayOfWeek
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetWeekOfYear_Test)
			{
				
				
			}

			// Method GetYear
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,GetYear_Test)
			{
				
				
			}

			// Method IsLeapDay
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,IsLeapDay_Test)
			{
				
				
			}

			// Method IsLeapMonth
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,IsLeapMonth_Test)
			{
				
				
			}

			// Method IsLeapYear
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,IsLeapYear_Test)
			{
				
				
			}

			// Method ToDateTime
			//		Signature: mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,ToDateTime_Test)
			{
				
				
			}

			// Method ToFourDigitYear
			//		Signature: mscorlib::System::Int32 year
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,ToFourDigitYear_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Eras
			//		Return Type: mscorlib::System::Int32*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_Eras_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,set_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property AlgorithmType
			//		Return Type: mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_AlgorithmType_Test)
			{
				
				
			}

			// Property MinSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_MinSupportedDateTime_Test)
			{
				
				
			}

			// Property MaxSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_MaxSupportedDateTime_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseCalendar_Fixture,get_IsReadOnly_Test)
			{
				
				
			}


		}
	}
}
