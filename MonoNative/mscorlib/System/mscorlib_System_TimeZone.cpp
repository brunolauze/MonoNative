#include <mscorlib/System/mscorlib_System_TimeZone.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DaylightTime.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::TimeZone , mscorlib::System::TimeZone> mscorlib::System::TimeZone::CurrentTimeZone(&mscorlib::System::TimeZone::get_CurrentTimeZone, &mscorlib::System::TimeZone::set_CurrentTimeZone);
		//Public Methods
		mscorlib::System::Globalization::DaylightTime TimeZone::GetDaylightChanges(mscorlib::System::Int32 year)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(year).name());
				__parameters__[0] = &year;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "GetDaylightChanges", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Globalization::DaylightTime(__result__);
		}

		mscorlib::System::TimeSpan TimeZone::GetUtcOffset(mscorlib::System::DateTime time)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(time).name());
				__parameters__[0] = (MonoObject*)time;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "GetUtcOffset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeZone::IsDaylightSavingTime(mscorlib::System::DateTime time)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(time).name());
				__parameters__[0] = (MonoObject*)time;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "IsDaylightSavingTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZone::IsDaylightSavingTime(mscorlib::System::DateTime time, mscorlib::System::Globalization::DaylightTime daylightTimes)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(time).name());
				__parameter_types__[1] = Global::GetType(typeid(daylightTimes).name());
				__parameters__[0] = (MonoObject*)time;
				__parameters__[1] = (MonoObject*)daylightTimes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "IsDaylightSavingTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::DateTime TimeZone::ToLocalTime(mscorlib::System::DateTime time)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(time).name());
				__parameters__[0] = (MonoObject*)time;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "ToLocalTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime TimeZone::ToUniversalTime(mscorlib::System::DateTime time)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(time).name());
				__parameters__[0] = (MonoObject*)time;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "ToUniversalTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		//Get Set Properties Methods
		//	Get:DaylightName
		mscorlib::System::String  TimeZone::get_DaylightName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "get_DaylightName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:StandardName
		mscorlib::System::String  TimeZone::get_StandardName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "get_StandardName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:CurrentTimeZone
		mscorlib::System::TimeZone  TimeZone::get_CurrentTimeZone()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZone", 0, NULL, "get_CurrentTimeZone", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeZone(__result__);
		}

		void TimeZone::set_CurrentTimeZone(mscorlib::System::TimeZone  value)
		{
			throw;
		}




	}
}
