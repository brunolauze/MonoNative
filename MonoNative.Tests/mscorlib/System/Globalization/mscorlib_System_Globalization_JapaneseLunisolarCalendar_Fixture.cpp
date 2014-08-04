// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Globalization
// Name: JapaneseLunisolarCalendar
// C++ Typed Name: mscorlib::System::Globalization::JapaneseLunisolarCalendar


#include <gtest/gtest.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_JapaneseLunisolarCalendar.h>
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
			
			//JapaneseLunisolarCalendar()
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Globalization::JapaneseLunisolarCalendar *value = new mscorlib::System::Globalization::JapaneseLunisolarCalendar();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetEra
			//		Signature: mscorlib::System::DateTime time
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,GetEra_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property Eras
			//		Return Type: mscorlib::System::Int32*
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_Eras_Test)
			{
				
				
			}

			// Property MinSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_MinSupportedDateTime_Test)
			{
				
				
			}

			// Property MaxSupportedDateTime
			//		Return Type: mscorlib::System::DateTime
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_MaxSupportedDateTime_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property TwoDigitYearMax
			//		Return Type: mscorlib::System::Int32
			//			Property Set Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,set_TwoDigitYearMax_Test)
			{
				
				
			}

			// Property AlgorithmType
			//		Return Type: mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_AlgorithmType_Test)
			{
				
				
			}

			// Property IsReadOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Globalization_JapaneseLunisolarCalendar_Fixture,get_IsReadOnly_Test)
			{
				
				
			}


		}
	}
}
