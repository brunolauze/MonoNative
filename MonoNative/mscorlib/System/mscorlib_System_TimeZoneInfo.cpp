#include <mscorlib/System/mscorlib_System_TimeZoneInfo.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/mscorlib_System_DateTimeOffset.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::TimeZoneInfo , mscorlib::System::TimeZoneInfo> mscorlib::System::TimeZoneInfo::Local(&mscorlib::System::TimeZoneInfo::get_Local, &mscorlib::System::TimeZoneInfo::set_Local);
		Property<mscorlib::System::TimeZoneInfo , mscorlib::System::TimeZoneInfo> mscorlib::System::TimeZoneInfo::Utc(&mscorlib::System::TimeZoneInfo::get_Utc, &mscorlib::System::TimeZoneInfo::set_Utc);
		//Public Methods
		void TimeZoneInfo::ClearCachedData()
		{
				Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ClearCachedData", NullMonoObject, 0, NULL, NULL, NULL);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo destinationTimeZone)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationTimeZone).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)destinationTimeZone;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo sourceTimeZone, mscorlib::System::TimeZoneInfo destinationTimeZone)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceTimeZone).name());
				__parameter_types__[2] = Global::GetType(typeid(destinationTimeZone).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)sourceTimeZone;
				__parameters__[2] = (MonoObject*)destinationTimeZone;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTime", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTimeOffset TimeZoneInfo::ConvertTime(mscorlib::System::DateTimeOffset dateTimeOffset, mscorlib::System::TimeZoneInfo destinationTimeZone)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationTimeZone).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				__parameters__[1] = (MonoObject*)destinationTimeZone;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, mscorlib::System::String destinationTimeZoneId)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationTimeZoneId).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)destinationTimeZoneId;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeBySystemTimeZoneId", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, mscorlib::System::String sourceTimeZoneId, mscorlib::System::String destinationTimeZoneId)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceTimeZoneId).name());
				__parameter_types__[2] = Global::GetType(typeid(destinationTimeZoneId).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)sourceTimeZoneId;
				__parameters__[2] = (MonoObject*)destinationTimeZoneId;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeBySystemTimeZoneId", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTimeOffset TimeZoneInfo::ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTimeOffset dateTimeOffset, mscorlib::System::String destinationTimeZoneId)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationTimeZoneId).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				__parameters__[1] = (MonoObject*)destinationTimeZoneId;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeBySystemTimeZoneId", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTimeOffset(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTimeFromUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo destinationTimeZone)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(destinationTimeZone).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)destinationTimeZone;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeFromUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTimeToUtc(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeToUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::DateTime TimeZoneInfo::ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo sourceTimeZone)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceTimeZone).name());
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)sourceTimeZone;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ConvertTimeToUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::DateTime(__result__);
		}

		mscorlib::System::TimeZoneInfo TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(id).name());
				__parameter_types__[1] = Global::GetType(typeid(baseUtcOffset).name());
				__parameter_types__[2] = Global::GetType(typeid(displayName).name());
				__parameter_types__[3] = Global::GetType(typeid(standardDisplayName).name());
				__parameters__[0] = (MonoObject*)id;
				__parameters__[1] = (MonoObject*)baseUtcOffset;
				__parameters__[2] = (MonoObject*)displayName;
				__parameters__[3] = (MonoObject*)standardDisplayName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "CreateCustomTimeZone", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo(__result__);
		}

		mscorlib::System::TimeZoneInfo TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName, mscorlib::System::String daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(id).name());
				__parameter_types__[1] = Global::GetType(typeid(baseUtcOffset).name());
				__parameter_types__[2] = Global::GetType(typeid(displayName).name());
				__parameter_types__[3] = Global::GetType(typeid(standardDisplayName).name());
				__parameter_types__[4] = Global::GetType(typeid(daylightDisplayName).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(adjustmentRules).name()))->eklass);
				__parameters__[0] = (MonoObject*)id;
				__parameters__[1] = (MonoObject*)baseUtcOffset;
				__parameters__[2] = (MonoObject*)displayName;
				__parameters__[3] = (MonoObject*)standardDisplayName;
				__parameters__[4] = (MonoObject*)daylightDisplayName;
				__parameters__[5] = Global::FromArray<mscorlib::System::TimeZoneInfo::AdjustmentRule*>(adjustmentRules, typeid(mscorlib::System::TimeZoneInfo::AdjustmentRule).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "CreateCustomTimeZone", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo(__result__);
		}

		mscorlib::System::TimeZoneInfo TimeZoneInfo::CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName, mscorlib::System::String daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules, mscorlib::System::Boolean disableDaylightSavingTime)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(id).name());
				__parameter_types__[1] = Global::GetType(typeid(baseUtcOffset).name());
				__parameter_types__[2] = Global::GetType(typeid(displayName).name());
				__parameter_types__[3] = Global::GetType(typeid(standardDisplayName).name());
				__parameter_types__[4] = Global::GetType(typeid(daylightDisplayName).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(adjustmentRules).name()))->eklass);
				__parameter_types__[6] = Global::GetType(typeid(disableDaylightSavingTime).name());
				__parameters__[0] = (MonoObject*)id;
				__parameters__[1] = (MonoObject*)baseUtcOffset;
				__parameters__[2] = (MonoObject*)displayName;
				__parameters__[3] = (MonoObject*)standardDisplayName;
				__parameters__[4] = (MonoObject*)daylightDisplayName;
				__parameters__[5] = Global::FromArray<mscorlib::System::TimeZoneInfo::AdjustmentRule*>(adjustmentRules, typeid(mscorlib::System::TimeZoneInfo::AdjustmentRule).name());
				__parameters__[6] = reinterpret_cast<void*>(disableDaylightSavingTime);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "CreateCustomTimeZone", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::Equals(mscorlib::System::TimeZoneInfo other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::TimeZoneInfo TimeZoneInfo::FindSystemTimeZoneById(mscorlib::System::String id)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(id).name());
				__parameters__[0] = (MonoObject*)id;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "FindSystemTimeZoneById", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo(__result__);
		}

		mscorlib::System::TimeZoneInfo TimeZoneInfo::FromSerializedString(mscorlib::System::String source)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(source).name());
				__parameters__[0] = (MonoObject*)source;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "FromSerializedString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo(__result__);
		}

		std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> TimeZoneInfo::GetAdjustmentRules()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetAdjustmentRules", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::TimeZoneInfo::AdjustmentRule (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::TimeSpan*> TimeZoneInfo::GetAmbiguousTimeOffsets(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetAmbiguousTimeOffsets", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::TimeSpan*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::TimeSpan (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::TimeSpan*> TimeZoneInfo::GetAmbiguousTimeOffsets(mscorlib::System::DateTimeOffset dateTimeOffset)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetAmbiguousTimeOffsets", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::TimeSpan*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::TimeSpan (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Int32 TimeZoneInfo::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::TimeZoneInfo> TimeZoneInfo::GetSystemTimeZones()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetSystemTimeZones", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::TimeZoneInfo>(__result__);
		}

		mscorlib::System::TimeSpan TimeZoneInfo::GetUtcOffset(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetUtcOffset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::TimeSpan TimeZoneInfo::GetUtcOffset(mscorlib::System::DateTimeOffset dateTimeOffset)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "GetUtcOffset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeSpan(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::HasSameRules(mscorlib::System::TimeZoneInfo other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "HasSameRules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::IsAmbiguousTime(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "IsAmbiguousTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::IsAmbiguousTime(mscorlib::System::DateTimeOffset dateTimeOffset)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "IsAmbiguousTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::IsDaylightSavingTime(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "IsDaylightSavingTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::IsDaylightSavingTime(mscorlib::System::DateTimeOffset dateTimeOffset)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTimeOffset).name());
				__parameters__[0] = (MonoObject*)dateTimeOffset;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "IsDaylightSavingTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::IsInvalidTime(mscorlib::System::DateTime dateTime)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(dateTime).name());
				__parameters__[0] = (MonoObject*)dateTime;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "IsInvalidTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::String TimeZoneInfo::ToSerializedString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ToSerializedString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String TimeZoneInfo::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		//Get Set Properties Methods
		//	Get:BaseUtcOffset
		mscorlib::System::TimeSpan  TimeZoneInfo::get_BaseUtcOffset() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_BaseUtcOffset", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//	Get:DaylightName
		mscorlib::System::String  TimeZoneInfo::get_DaylightName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_DaylightName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:DisplayName
		mscorlib::System::String  TimeZoneInfo::get_DisplayName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_DisplayName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Id
		mscorlib::System::String  TimeZoneInfo::get_Id() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_Id", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:StandardName
		mscorlib::System::String  TimeZoneInfo::get_StandardName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_StandardName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:SupportsDaylightSavingTime
		mscorlib::System::Boolean  TimeZoneInfo::get_SupportsDaylightSavingTime() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_SupportsDaylightSavingTime", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:Local
		mscorlib::System::TimeZoneInfo  TimeZoneInfo::get_Local()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_Local", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeZoneInfo(__result__);
		}

		void TimeZoneInfo::set_Local(mscorlib::System::TimeZoneInfo  value)
		{
			throw;
		}


		//	Get:Utc
		mscorlib::System::TimeZoneInfo  TimeZoneInfo::get_Utc()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo", 0, NULL, "get_Utc", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeZoneInfo(__result__);
		}

		void TimeZoneInfo::set_Utc(mscorlib::System::TimeZoneInfo  value)
		{
			throw;
		}



		//TransitionTime Nested Type Implementation
		//Public Methods
		mscorlib::System::TimeZoneInfo::TransitionTime TimeZoneInfo::TransitionTime::CreateFixedDateRule(mscorlib::System::DateTime timeOfDay, mscorlib::System::Int32 month, mscorlib::System::Int32 day)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(timeOfDay).name());
				__parameter_types__[1] = Global::GetType(typeid(month).name());
				__parameter_types__[2] = Global::GetType(typeid(day).name());
				__parameters__[0] = (MonoObject*)timeOfDay;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "CreateFixedDateRule", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo::TransitionTime(__result__);
		}

		mscorlib::System::TimeZoneInfo::TransitionTime TimeZoneInfo::TransitionTime::CreateFloatingDateRule(mscorlib::System::DateTime timeOfDay, mscorlib::System::Int32 month, mscorlib::System::Int32 week, mscorlib::System::DayOfWeek::__ENUM__ dayOfWeek)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(timeOfDay).name());
				__parameter_types__[1] = Global::GetType(typeid(month).name());
				__parameter_types__[2] = Global::GetType(typeid(week).name());
				__parameter_types__[3] = Global::GetType(typeid(dayOfWeek).name());
				__parameters__[0] = (MonoObject*)timeOfDay;
				__parameters__[1] = &month;
				__parameters__[2] = &week;
				__parameters__[3] = reinterpret_cast<void*>(dayOfWeek);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "CreateFloatingDateRule", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo::TransitionTime(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::TransitionTime::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::TransitionTime::Equals(mscorlib::System::TimeZoneInfo::TransitionTime other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 TimeZoneInfo::TransitionTime::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:TimeOfDay
		mscorlib::System::DateTime  TimeZoneInfo::TransitionTime::get_TimeOfDay() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_TimeOfDay", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:Month
		mscorlib::System::Int32  TimeZoneInfo::TransitionTime::get_Month() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_Month", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Day
		mscorlib::System::Int32  TimeZoneInfo::TransitionTime::get_Day() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_Day", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:Week
		mscorlib::System::Int32  TimeZoneInfo::TransitionTime::get_Week() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_Week", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:DayOfWeek
		mscorlib::System::DayOfWeek::__ENUM__  TimeZoneInfo::TransitionTime::get_DayOfWeek() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_DayOfWeek", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:IsFixedDateRule
		mscorlib::System::Boolean  TimeZoneInfo::TransitionTime::get_IsFixedDateRule() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+TransitionTime", 0, NULL, "get_IsFixedDateRule", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//AdjustmentRule Nested Type Implementation
		//Public Methods
		mscorlib::System::TimeZoneInfo::AdjustmentRule TimeZoneInfo::AdjustmentRule::CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo::TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo::TransitionTime daylightTransitionEnd)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(dateStart).name());
				__parameter_types__[1] = Global::GetType(typeid(dateEnd).name());
				__parameter_types__[2] = Global::GetType(typeid(daylightDelta).name());
				__parameter_types__[3] = Global::GetType(typeid(daylightTransitionStart).name());
				__parameter_types__[4] = Global::GetType(typeid(daylightTransitionEnd).name());
				__parameters__[0] = (MonoObject*)dateStart;
				__parameters__[1] = (MonoObject*)dateEnd;
				__parameters__[2] = (MonoObject*)daylightDelta;
				__parameters__[3] = (MonoObject*)daylightTransitionStart;
				__parameters__[4] = (MonoObject*)daylightTransitionEnd;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "CreateAdjustmentRule", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TimeZoneInfo::AdjustmentRule(__result__);
		}

		mscorlib::System::Boolean TimeZoneInfo::AdjustmentRule::Equals(mscorlib::System::TimeZoneInfo::AdjustmentRule other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 TimeZoneInfo::AdjustmentRule::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:DateEnd
		mscorlib::System::DateTime  TimeZoneInfo::AdjustmentRule::get_DateEnd() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "get_DateEnd", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:DateStart
		mscorlib::System::DateTime  TimeZoneInfo::AdjustmentRule::get_DateStart() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "get_DateStart", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::DateTime(__result__);
		}


		//	Get:DaylightDelta
		mscorlib::System::TimeSpan  TimeZoneInfo::AdjustmentRule::get_DaylightDelta() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "get_DaylightDelta", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//	Get:DaylightTransitionEnd
		mscorlib::System::TimeZoneInfo::TransitionTime  TimeZoneInfo::AdjustmentRule::get_DaylightTransitionEnd() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "get_DaylightTransitionEnd", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeZoneInfo::TransitionTime(__result__);
		}


		//	Get:DaylightTransitionStart
		mscorlib::System::TimeZoneInfo::TransitionTime  TimeZoneInfo::AdjustmentRule::get_DaylightTransitionStart() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TimeZoneInfo+AdjustmentRule", 0, NULL, "get_DaylightTransitionStart", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeZoneInfo::TransitionTime(__result__);
		}



	}
}
