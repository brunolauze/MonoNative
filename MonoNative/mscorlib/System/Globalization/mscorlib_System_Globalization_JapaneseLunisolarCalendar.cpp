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

			//Public Methods
			mscorlib::System::Int32 JapaneseLunisolarCalendar::GetEra(mscorlib::System::DateTime time)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(time).name());
					__parameters__[0] = (MonoObject*)time;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "JapaneseLunisolarCalendar", 0, NULL, "GetEra", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Eras
			std::vector<mscorlib::System::Int32*>  JapaneseLunisolarCalendar::get_Eras() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "JapaneseLunisolarCalendar", 0, NULL, "get_Eras", __native_object__, 0, NULL, NULL, NULL);
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


			//	Get:MinSupportedDateTime
			mscorlib::System::DateTime  JapaneseLunisolarCalendar::get_MinSupportedDateTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "JapaneseLunisolarCalendar", 0, NULL, "get_MinSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get:MaxSupportedDateTime
			mscorlib::System::DateTime  JapaneseLunisolarCalendar::get_MaxSupportedDateTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "JapaneseLunisolarCalendar", 0, NULL, "get_MaxSupportedDateTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}


			//	Get/Set:TwoDigitYearMax
			mscorlib::System::Int32  JapaneseLunisolarCalendar::get_TwoDigitYearMax() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "get_TwoDigitYearMax", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void JapaneseLunisolarCalendar::set_TwoDigitYearMax(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "set_TwoDigitYearMax", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:AlgorithmType
			mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  JapaneseLunisolarCalendar::get_AlgorithmType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "EastAsianLunisolarCalendar", 0, NULL, "get_AlgorithmType", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


			//	Get:IsReadOnly
			mscorlib::System::Boolean  JapaneseLunisolarCalendar::get_IsReadOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "Calendar", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


				//	Get/Set:JapaneseEra
			mscorlib::System::Int32 JapaneseLunisolarCalendar::get_JapaneseEra()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Globalization", "JapaneseLunisolarCalendar", 0, NULL, "JapaneseEra");
			}

			void JapaneseLunisolarCalendar::set_JapaneseEra(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
