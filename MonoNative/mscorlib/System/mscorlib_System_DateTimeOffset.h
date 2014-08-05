#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DATETIMEOFFSET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DATETIMEOFFSET_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DateTimeStyles.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class DateTimeOffset
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
			, public virtual mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>
			, public virtual mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			, public virtual mscorlib::System::IFormattable
			, public virtual mscorlib::System::IObjectComparable
		{
		public:
			DateTimeOffset(mscorlib::System::DateTime dateTime)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "DateTime");
				__parameters__[0] = (MonoObject*)dateTime;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 1, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "DateTime");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "TimeSpan");
				__parameters__[0] = (MonoObject*)dateTime;
				__parameters__[1] = (MonoObject*)offset;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 2, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::System::Int64 ticks, mscorlib::System::TimeSpan offset)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "TimeSpan");
				__parameters__[0] = &ticks;
				__parameters__[1] = (MonoObject*)offset;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 2, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::TimeSpan offset)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "TimeSpan");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = (MonoObject*)offset;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 7, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::TimeSpan offset)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[7] = Global::GetType("mscorlib", "System", "TimeSpan");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				__parameters__[7] = (MonoObject*)offset;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 8, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Globalization::Calendar calendar, mscorlib::System::TimeSpan offset)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTimeOffset"))
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[7] = Global::GetType("mscorlib", "System.Globalization", "Calendar");
				__parameter_types__[8] = Global::GetType("mscorlib", "System", "TimeSpan");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				__parameters__[7] = (MonoObject*)calendar;
				__parameters__[8] = (MonoObject*)offset;
				__native_object__ = Global::New("mscorlib", "System", "DateTimeOffset", 9, __parameter_types__, __parameters__);
			};
		
			DateTimeOffset(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			{
			};
		
			DateTimeOffset(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::DateTimeOffset>(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::DateTimeOffset>(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			{
			};
		
			~DateTimeOffset()
			{
			};
		

			DateTimeOffset & operator=(DateTimeOffset &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::DateTimeOffset  Add(mscorlib::System::TimeSpan timeSpan);
			mscorlib::System::DateTimeOffset  AddDays(mscorlib::System::Double days);
			mscorlib::System::DateTimeOffset  AddHours(mscorlib::System::Double hours);
			mscorlib::System::DateTimeOffset  AddMilliseconds(mscorlib::System::Double milliseconds);
			mscorlib::System::DateTimeOffset  AddMinutes(mscorlib::System::Double minutes);
			mscorlib::System::DateTimeOffset  AddMonths(mscorlib::System::Int32 months);
			mscorlib::System::DateTimeOffset  AddSeconds(mscorlib::System::Double seconds);
			mscorlib::System::DateTimeOffset  AddTicks(mscorlib::System::Int64 ticks);
			mscorlib::System::DateTimeOffset  AddYears(mscorlib::System::Int32 years);
			static mscorlib::System::Int32  Compare(mscorlib::System::DateTimeOffset first, mscorlib::System::DateTimeOffset second);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::DateTimeOffset other);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::DateTimeOffset other);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
			static mscorlib::System::Boolean  Equals(mscorlib::System::DateTimeOffset first, mscorlib::System::DateTimeOffset second);
			mscorlib::System::Boolean  EqualsExact(mscorlib::System::DateTimeOffset other);
			static mscorlib::System::DateTimeOffset  FromFileTime(mscorlib::System::Int64 fileTime);
			virtual mscorlib::System::Int32  GetHashCode() override;
			static mscorlib::System::DateTimeOffset  Parse(mscorlib::System::String input);
			static mscorlib::System::DateTimeOffset  Parse(const char *input);
			static mscorlib::System::DateTimeOffset  Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::DateTimeOffset  Parse(const char *input, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::DateTimeOffset  Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTimeOffset  Parse(const char *input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTimeOffset  ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::DateTimeOffset  ParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::DateTimeOffset  ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTimeOffset  ParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTimeOffset  ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTimeOffset  ParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			mscorlib::System::TimeSpan  Subtract(mscorlib::System::DateTimeOffset value);
			mscorlib::System::DateTimeOffset  Subtract(mscorlib::System::TimeSpan value);
			mscorlib::System::Int64  ToFileTime();
			mscorlib::System::DateTimeOffset  ToLocalTime();
			mscorlib::System::DateTimeOffset  ToOffset(mscorlib::System::TimeSpan offset);
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::IFormatProvider formatProvider);
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider formatProvider);
			mscorlib::System::DateTimeOffset  ToUniversalTime();
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String input, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParse(const char *input, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParse(const char *input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTimeOffset result);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Date)) mscorlib::System::DateTime  Date;
			__declspec(property(get=get_DateTime)) mscorlib::System::DateTime  DateTime;
			__declspec(property(get=get_Day)) mscorlib::System::Int32  Day;
			__declspec(property(get=get_DayOfWeek)) mscorlib::System::DayOfWeek::__ENUM__  DayOfWeek;
			__declspec(property(get=get_DayOfYear)) mscorlib::System::Int32  DayOfYear;
			__declspec(property(get=get_Hour)) mscorlib::System::Int32  Hour;
			__declspec(property(get=get_LocalDateTime)) mscorlib::System::DateTime  LocalDateTime;
			__declspec(property(get=get_Millisecond)) mscorlib::System::Int32  Millisecond;
			__declspec(property(get=get_Minute)) mscorlib::System::Int32  Minute;
			__declspec(property(get=get_Month)) mscorlib::System::Int32  Month;
			__declspec(property(get=get_Offset)) mscorlib::System::TimeSpan  Offset;
			__declspec(property(get=get_Second)) mscorlib::System::Int32  Second;
			__declspec(property(get=get_Ticks)) mscorlib::System::Int64  Ticks;
			__declspec(property(get=get_TimeOfDay)) mscorlib::System::TimeSpan  TimeOfDay;
			__declspec(property(get=get_UtcDateTime)) mscorlib::System::DateTime  UtcDateTime;
			__declspec(property(get=get_UtcTicks)) mscorlib::System::Int64  UtcTicks;
			__declspec(property(get=get_Year)) mscorlib::System::Int32  Year;

			//Public Static Properties
			static Property<mscorlib::System::DateTimeOffset , mscorlib::System::DateTimeOffset> Now;
			static Property<mscorlib::System::DateTimeOffset , mscorlib::System::DateTimeOffset> UtcNow;

			//Public Static Fields
			static Property<mscorlib::System::DateTimeOffset , mscorlib::System::DateTimeOffset> MaxValue;
			static Property<mscorlib::System::DateTimeOffset , mscorlib::System::DateTimeOffset> MinValue;

			//Get Set Properties Methods
			//	Get:Date
			mscorlib::System::DateTime  get_Date() const;

			//	Get:DateTime
			mscorlib::System::DateTime  get_DateTime() const;

			//	Get:Day
			mscorlib::System::Int32  get_Day() const;

			//	Get:DayOfWeek
			mscorlib::System::DayOfWeek::__ENUM__  get_DayOfWeek() const;

			//	Get:DayOfYear
			mscorlib::System::Int32  get_DayOfYear() const;

			//	Get:Hour
			mscorlib::System::Int32  get_Hour() const;

			//	Get:LocalDateTime
			mscorlib::System::DateTime  get_LocalDateTime() const;

			//	Get:Millisecond
			mscorlib::System::Int32  get_Millisecond() const;

			//	Get:Minute
			mscorlib::System::Int32  get_Minute() const;

			//	Get:Month
			mscorlib::System::Int32  get_Month() const;

			//	Get:Offset
			mscorlib::System::TimeSpan  get_Offset() const;

			//	Get:Second
			mscorlib::System::Int32  get_Second() const;

			//	Get:Ticks
			mscorlib::System::Int64  get_Ticks() const;

			//	Get:TimeOfDay
			mscorlib::System::TimeSpan  get_TimeOfDay() const;

			//	Get:UtcDateTime
			mscorlib::System::DateTime  get_UtcDateTime() const;

			//	Get:UtcTicks
			mscorlib::System::Int64  get_UtcTicks() const;

			//	Get:Year
			mscorlib::System::Int32  get_Year() const;

			//Get Set Static Properties Methods
			//	Get:Now
			static mscorlib::System::DateTimeOffset  get_Now();
			static void set_Now(mscorlib::System::DateTimeOffset  value);

			//	Get:UtcNow
			static mscorlib::System::DateTimeOffset  get_UtcNow();
			static void set_UtcNow(mscorlib::System::DateTimeOffset  value);


			//	Get/Set:MaxValue
			static mscorlib::System::DateTimeOffset  get_MaxValue();
			static void set_MaxValue(mscorlib::System::DateTimeOffset  value);

			//	Get/Set:MinValue
			static mscorlib::System::DateTimeOffset  get_MinValue();
			static void set_MinValue(mscorlib::System::DateTimeOffset  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
