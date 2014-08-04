// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: TaiwanLunisolarCalendar
// C++ Typed Name: mscorlib::System::Globalization::TaiwanLunisolarCalendar


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TaiwanLunisolarCalendar.h>
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
			
			//TaiwanLunisolarCalendar()
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::TaiwanLunisolarCalendar *value = new mscorlib::System::Globalization::TaiwanLunisolarCalendar();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetEra
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,GetEra_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Eras
			//		Return Type: mscorlib::System::Int32*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_Eras_Test)
			{
				
				
			}

			// Property MinSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_MinSupportedDateTime_Test)
			{
				
				
			}

			// Property MaxSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_MaxSupportedDateTime_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,set_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property AlgorithmType
			//		Return Type: mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_AlgorithmType_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_TaiwanLunisolarCalendar_Fixture,get_IsReadOnly_Test)
			{
				
				
			}


		}
	}
}
