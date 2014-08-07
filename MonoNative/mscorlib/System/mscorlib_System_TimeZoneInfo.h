#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TIMEZONEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TIMEZONEINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h>

namespace mscorlib
{
	namespace System
	{

		class DateTime;
		class String;
		class Type;
		class TimeSpan;
		class DateTimeOffset;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class TimeZoneInfo
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			, public virtual mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo>
		{
		public:
			class TransitionTime
				: public mscorlib::System::ValueType
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::TransitionTime>
			{
			public:
				TransitionTime(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::TransitionTime>(NULL)
				{
				};
			
				TransitionTime(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::TransitionTime>(nativeObject)
				{
				};
			
				~TransitionTime()
				{
				};
			

				TransitionTime & operator=(TransitionTime &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(TransitionTime &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::TimeZoneInfo::TransitionTime  CreateFixedDateRule(mscorlib::System::DateTime timeOfDay, mscorlib::System::Int32 month, mscorlib::System::Int32 day);
				static mscorlib::System::TimeZoneInfo::TransitionTime  CreateFloatingDateRule(mscorlib::System::DateTime timeOfDay, mscorlib::System::Int32 month, mscorlib::System::Int32 week, mscorlib::System::DayOfWeek::__ENUM__ dayOfWeek);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::TimeZoneInfo::TransitionTime other);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_TimeOfDay)) mscorlib::System::DateTime  TimeOfDay;
				__declspec(property(get=get_Month)) mscorlib::System::Int32  Month;
				__declspec(property(get=get_Day)) mscorlib::System::Int32  Day;
				__declspec(property(get=get_Week)) mscorlib::System::Int32  Week;
				__declspec(property(get=get_DayOfWeek)) mscorlib::System::DayOfWeek::__ENUM__  DayOfWeek;
				__declspec(property(get=get_IsFixedDateRule)) mscorlib::System::Boolean  IsFixedDateRule;

				//Get Set Properties Methods
				//	Get:TimeOfDay
				mscorlib::System::DateTime  get_TimeOfDay() const;

				//	Get:Month
				mscorlib::System::Int32  get_Month() const;

				//	Get:Day
				mscorlib::System::Int32  get_Day() const;

				//	Get:Week
				mscorlib::System::Int32  get_Week() const;

				//	Get:DayOfWeek
				mscorlib::System::DayOfWeek::__ENUM__  get_DayOfWeek() const;

				//	Get:IsFixedDateRule
				mscorlib::System::Boolean  get_IsFixedDateRule() const;

			
			protected:
			
			private:
			
			};
			
			class AdjustmentRule
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::AdjustmentRule>
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				AdjustmentRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::AdjustmentRule>(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				AdjustmentRule(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo::AdjustmentRule>(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~AdjustmentRule()
				{
				};
			

				AdjustmentRule & operator=(AdjustmentRule &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(AdjustmentRule &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::TimeZoneInfo::AdjustmentRule  CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo::TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo::TransitionTime daylightTransitionEnd);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::TimeZoneInfo::AdjustmentRule other);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DateEnd)) mscorlib::System::DateTime  DateEnd;
				__declspec(property(get=get_DateStart)) mscorlib::System::DateTime  DateStart;
				__declspec(property(get=get_DaylightDelta)) mscorlib::System::TimeSpan  DaylightDelta;
				__declspec(property(get=get_DaylightTransitionEnd)) mscorlib::System::TimeZoneInfo::TransitionTime  DaylightTransitionEnd;
				__declspec(property(get=get_DaylightTransitionStart)) mscorlib::System::TimeZoneInfo::TransitionTime  DaylightTransitionStart;

				//Get Set Properties Methods
				//	Get:DateEnd
				mscorlib::System::DateTime  get_DateEnd() const;

				//	Get:DateStart
				mscorlib::System::DateTime  get_DateStart() const;

				//	Get:DaylightDelta
				mscorlib::System::TimeSpan  get_DaylightDelta() const;

				//	Get:DaylightTransitionEnd
				mscorlib::System::TimeZoneInfo::TransitionTime  get_DaylightTransitionEnd() const;

				//	Get:DaylightTransitionStart
				mscorlib::System::TimeZoneInfo::TransitionTime  get_DaylightTransitionStart() const;

			
			protected:
			
			private:
			
			};
			
			TimeZoneInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo>(NULL)
			{
			};
		
			TimeZoneInfo(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::TimeZoneInfo>(nativeObject)
			{
			};
		
			~TimeZoneInfo()
			{
			};
		

			TimeZoneInfo & operator=(TimeZoneInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(TimeZoneInfo &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static void  ClearCachedData();
			static mscorlib::System::DateTime  ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo destinationTimeZone);
			static mscorlib::System::DateTime  ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo sourceTimeZone, mscorlib::System::TimeZoneInfo destinationTimeZone);
			static mscorlib::System::DateTimeOffset  ConvertTime(mscorlib::System::DateTimeOffset dateTimeOffset, mscorlib::System::TimeZoneInfo destinationTimeZone);
			static mscorlib::System::DateTime  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, mscorlib::System::String destinationTimeZoneId);
			static mscorlib::System::DateTime  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, const char *destinationTimeZoneId);
			static mscorlib::System::DateTime  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, mscorlib::System::String sourceTimeZoneId, mscorlib::System::String destinationTimeZoneId);
			static mscorlib::System::DateTime  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTime dateTime, const char *sourceTimeZoneId, const char *destinationTimeZoneId);
			static mscorlib::System::DateTimeOffset  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTimeOffset dateTimeOffset, mscorlib::System::String destinationTimeZoneId);
			static mscorlib::System::DateTimeOffset  ConvertTimeBySystemTimeZoneId(mscorlib::System::DateTimeOffset dateTimeOffset, const char *destinationTimeZoneId);
			static mscorlib::System::DateTime  ConvertTimeFromUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo destinationTimeZone);
			static mscorlib::System::DateTime  ConvertTimeToUtc(mscorlib::System::DateTime dateTime);
			static mscorlib::System::DateTime  ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo sourceTimeZone);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(const char *id, mscorlib::System::TimeSpan baseUtcOffset, const char *displayName, const char *standardDisplayName);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName, mscorlib::System::String daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(const char *id, mscorlib::System::TimeSpan baseUtcOffset, const char *displayName, const char *standardDisplayName, const char *daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(mscorlib::System::String id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String displayName, mscorlib::System::String standardDisplayName, mscorlib::System::String daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules, mscorlib::System::Boolean disableDaylightSavingTime);
			static mscorlib::System::TimeZoneInfo  CreateCustomTimeZone(const char *id, mscorlib::System::TimeSpan baseUtcOffset, const char *displayName, const char *standardDisplayName, const char *daylightDisplayName, std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*> adjustmentRules, mscorlib::System::Boolean disableDaylightSavingTime);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::TimeZoneInfo other);
			static mscorlib::System::TimeZoneInfo  FindSystemTimeZoneById(mscorlib::System::String id);
			static mscorlib::System::TimeZoneInfo  FindSystemTimeZoneById(const char *id);
			static mscorlib::System::TimeZoneInfo  FromSerializedString(mscorlib::System::String source);
			static mscorlib::System::TimeZoneInfo  FromSerializedString(const char *source);
			std::vector<mscorlib::System::TimeZoneInfo::AdjustmentRule*>  GetAdjustmentRules();
			std::vector<mscorlib::System::TimeSpan*>  GetAmbiguousTimeOffsets(mscorlib::System::DateTime dateTime);
			std::vector<mscorlib::System::TimeSpan*>  GetAmbiguousTimeOffsets(mscorlib::System::DateTimeOffset dateTimeOffset);
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::TimeZoneInfo>  GetSystemTimeZones();
			mscorlib::System::TimeSpan  GetUtcOffset(mscorlib::System::DateTime dateTime);
			mscorlib::System::TimeSpan  GetUtcOffset(mscorlib::System::DateTimeOffset dateTimeOffset);
			mscorlib::System::Boolean  HasSameRules(mscorlib::System::TimeZoneInfo other);
			mscorlib::System::Boolean  IsAmbiguousTime(mscorlib::System::DateTime dateTime);
			mscorlib::System::Boolean  IsAmbiguousTime(mscorlib::System::DateTimeOffset dateTimeOffset);
			mscorlib::System::Boolean  IsDaylightSavingTime(mscorlib::System::DateTime dateTime);
			mscorlib::System::Boolean  IsDaylightSavingTime(mscorlib::System::DateTimeOffset dateTimeOffset);
			mscorlib::System::Boolean  IsInvalidTime(mscorlib::System::DateTime dateTime);
			mscorlib::System::String  ToSerializedString();
			virtual mscorlib::System::String  ToString() override;
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_BaseUtcOffset)) mscorlib::System::TimeSpan  BaseUtcOffset;
			__declspec(property(get=get_DaylightName)) mscorlib::System::String  DaylightName;
			__declspec(property(get=get_DisplayName)) mscorlib::System::String  DisplayName;
			__declspec(property(get=get_Id)) mscorlib::System::String  Id;
			__declspec(property(get=get_StandardName)) mscorlib::System::String  StandardName;
			__declspec(property(get=get_SupportsDaylightSavingTime)) mscorlib::System::Boolean  SupportsDaylightSavingTime;

			//Public Static Properties
			static Property<mscorlib::System::TimeZoneInfo , mscorlib::System::TimeZoneInfo> Local;
			static Property<mscorlib::System::TimeZoneInfo , mscorlib::System::TimeZoneInfo> Utc;

			//Get Set Properties Methods
			//	Get:BaseUtcOffset
			mscorlib::System::TimeSpan  get_BaseUtcOffset() const;

			//	Get:DaylightName
			mscorlib::System::String  get_DaylightName() const;

			//	Get:DisplayName
			mscorlib::System::String  get_DisplayName() const;

			//	Get:Id
			mscorlib::System::String  get_Id() const;

			//	Get:StandardName
			mscorlib::System::String  get_StandardName() const;

			//	Get:SupportsDaylightSavingTime
			mscorlib::System::Boolean  get_SupportsDaylightSavingTime() const;

			//Get Set Static Properties Methods
			//	Get:Local
			static mscorlib::System::TimeZoneInfo  get_Local();
			static void set_Local(mscorlib::System::TimeZoneInfo  value);

			//	Get:Utc
			static mscorlib::System::TimeZoneInfo  get_Utc();
			static void set_Utc(mscorlib::System::TimeZoneInfo  value);


		
		protected:
		
		private:
		
		};

	}
}
#endif
