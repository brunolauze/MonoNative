#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DATETIME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DATETIME_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>
#include <mscorlib/System/mscorlib_System_DateTimeKind.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IConvertible.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/mscorlib_System_TypeCode.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DateTimeStyles.h>

namespace mscorlib
{
	namespace System
	{

		class TimeSpan;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class DateTime
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IComparable<mscorlib::System::DateTime>
			, public virtual mscorlib::System::IEquatable<mscorlib::System::DateTime>
			, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			, public virtual mscorlib::System::IConvertible
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IFormattable
		{
		public:
			DateTime(mscorlib::System::Int64 ticks)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameters__[0] = &ticks;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 1, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 3, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 6, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 7, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Globalization::Calendar calendar)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System.Globalization", "Calendar");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = (MonoObject*)calendar;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 4, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Globalization::Calendar calendar)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System.Globalization", "Calendar");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = (MonoObject*)calendar;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 7, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Globalization::Calendar calendar)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
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
				__parameter_types__[7] = Global::GetType("mscorlib", "System.Globalization", "Calendar");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				__parameters__[7] = (MonoObject*)calendar;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 8, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int64 ticks, mscorlib::System::DateTimeKind::__ENUM__ kind)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "DateTimeKind");
				__parameters__[0] = &ticks;
				mscorlib::System::Int32 __param_kind__ = kind;
				__parameters__[1] = &__param_kind__;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 2, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::DateTimeKind::__ENUM__ kind)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[5] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[6] = Global::GetType("mscorlib", "System", "DateTimeKind");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				mscorlib::System::Int32 __param_kind__ = kind;
				__parameters__[6] = &__param_kind__;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 7, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::DateTimeKind::__ENUM__ kind)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
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
				__parameter_types__[7] = Global::GetType("mscorlib", "System", "DateTimeKind");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				mscorlib::System::Int32 __param_kind__ = kind;
				__parameters__[7] = &__param_kind__;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 8, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Globalization::Calendar calendar, mscorlib::System::DateTimeKind::__ENUM__ kind)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.DateTime"))
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
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
				__parameter_types__[8] = Global::GetType("mscorlib", "System", "DateTimeKind");
				__parameters__[0] = &year;
				__parameters__[1] = &month;
				__parameters__[2] = &day;
				__parameters__[3] = &hour;
				__parameters__[4] = &minute;
				__parameters__[5] = &second;
				__parameters__[6] = &millisecond;
				__parameters__[7] = (MonoObject*)calendar;
				mscorlib::System::Int32 __param_kind__ = kind;
				__parameters__[8] = &__param_kind__;
				__native_object__ = Global::New("mscorlib", "System", "DateTime", 9, __parameter_types__, __parameters__);
			};
		
			DateTime(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(NULL)
			, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
			, mscorlib::System::IConvertible(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IFormattable(NULL)
			{
			};
		
			DateTime(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::DateTime>(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::DateTime>(nativeObject)
			, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
			, mscorlib::System::IConvertible(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			{
			};
		
			~DateTime()
			{
			};
		

			DateTime & operator=(DateTime &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::DateTime  Add(mscorlib::System::TimeSpan value);
			mscorlib::System::DateTime  AddDays(mscorlib::System::Double value);
			mscorlib::System::DateTime  AddTicks(mscorlib::System::Int64 value);
			mscorlib::System::DateTime  AddHours(mscorlib::System::Double value);
			mscorlib::System::DateTime  AddMilliseconds(mscorlib::System::Double value);
			mscorlib::System::DateTime  AddMinutes(mscorlib::System::Double value);
			mscorlib::System::DateTime  AddMonths(mscorlib::System::Int32 months);
			mscorlib::System::DateTime  AddSeconds(mscorlib::System::Double value);
			mscorlib::System::DateTime  AddYears(mscorlib::System::Int32 value);
			static mscorlib::System::Int32  Compare(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			mscorlib::System::Boolean  IsDaylightSavingTime();
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::DateTime value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::DateTime value);
			mscorlib::System::Int64  ToBinary();
			static mscorlib::System::DateTime  FromBinary(mscorlib::System::Int64 dateData);
			static mscorlib::System::DateTime  SpecifyKind(mscorlib::System::DateTime value, mscorlib::System::DateTimeKind::__ENUM__ kind);
			static mscorlib::System::Int32  DaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
			static mscorlib::System::Boolean  Equals(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
			static mscorlib::System::DateTime  FromFileTime(mscorlib::System::Int64 fileTime);
			static mscorlib::System::DateTime  FromFileTimeUtc(mscorlib::System::Int64 fileTime);
			static mscorlib::System::DateTime  FromOADate(mscorlib::System::Double d);
			std::vector<mscorlib::System::String*>  GetDateTimeFormats();
			std::vector<mscorlib::System::String*>  GetDateTimeFormats(mscorlib::System::Char format);
			std::vector<mscorlib::System::String*>  GetDateTimeFormats(mscorlib::System::IFormatProvider provider);
			std::vector<mscorlib::System::String*>  GetDateTimeFormats(mscorlib::System::Char format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::Int32  GetHashCode() override;
			virtual mscorlib::System::TypeCode::__ENUM__  GetTypeCode();
			static mscorlib::System::Boolean  IsLeapYear(mscorlib::System::Int32 year);
			static mscorlib::System::DateTime  Parse(mscorlib::System::String s);
			static mscorlib::System::DateTime  Parse(const char *s);
			static mscorlib::System::DateTime  Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  Parse(const char *s, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  Parse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTime  Parse(const char *s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles);
			static mscorlib::System::DateTime  ParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ParseExact(const char *s, const char *format, mscorlib::System::IFormatProvider provider);
			static mscorlib::System::DateTime  ParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style);
			static mscorlib::System::DateTime  ParseExact(const char *s, const char *format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style);
			static mscorlib::System::DateTime  ParseExact(mscorlib::System::String s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style);
			static mscorlib::System::DateTime  ParseExact(const char *s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParse(const char *s, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParse(const char *s, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ styles, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String s, mscorlib::System::String format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParseExact(const char *s, const char *format, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result);
			static mscorlib::System::Boolean  TryParseExact(const char *s, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider provider, mscorlib::System::Globalization::DateTimeStyles::__ENUM__ style, mscorlib::System::DateTime result);
			mscorlib::System::TimeSpan  Subtract(mscorlib::System::DateTime value);
			mscorlib::System::DateTime  Subtract(mscorlib::System::TimeSpan value);
			mscorlib::System::Int64  ToFileTime();
			mscorlib::System::Int64  ToFileTimeUtc();
			mscorlib::System::String  ToLongDateString();
			mscorlib::System::String  ToLongTimeString();
			mscorlib::System::Double  ToOADate();
			mscorlib::System::String  ToShortDateString();
			mscorlib::System::String  ToShortTimeString();
			virtual mscorlib::System::String  ToString() override;
			virtual mscorlib::System::String  ToString(mscorlib::System::IFormatProvider provider);
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider provider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider provider);
			mscorlib::System::DateTime  ToLocalTime();
			mscorlib::System::DateTime  ToUniversalTime();
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Date)) mscorlib::System::DateTime  Date;
			__declspec(property(get=get_Month)) mscorlib::System::Int32  Month;
			__declspec(property(get=get_Day)) mscorlib::System::Int32  Day;
			__declspec(property(get=get_DayOfWeek)) mscorlib::System::DayOfWeek::__ENUM__  DayOfWeek;
			__declspec(property(get=get_DayOfYear)) mscorlib::System::Int32  DayOfYear;
			__declspec(property(get=get_TimeOfDay)) mscorlib::System::TimeSpan  TimeOfDay;
			__declspec(property(get=get_Hour)) mscorlib::System::Int32  Hour;
			__declspec(property(get=get_Minute)) mscorlib::System::Int32  Minute;
			__declspec(property(get=get_Second)) mscorlib::System::Int32  Second;
			__declspec(property(get=get_Millisecond)) mscorlib::System::Int32  Millisecond;
			__declspec(property(get=get_Ticks)) mscorlib::System::Int64  Ticks;
			__declspec(property(get=get_Year)) mscorlib::System::Int32  Year;
			__declspec(property(get=get_Kind)) mscorlib::System::DateTimeKind::__ENUM__  Kind;

			//Public Static Properties
			static Property<mscorlib::System::DateTime , mscorlib::System::DateTime> Now;
			static Property<mscorlib::System::DateTime , mscorlib::System::DateTime> Today;
			static Property<mscorlib::System::DateTime , mscorlib::System::DateTime> UtcNow;

			//Public Static Fields
			static Property<mscorlib::System::DateTime , mscorlib::System::DateTime> MaxValue;
			static Property<mscorlib::System::DateTime , mscorlib::System::DateTime> MinValue;

			//Get Set Properties Methods
			//	Get:Date
			mscorlib::System::DateTime  get_Date() const;

			//	Get:Month
			mscorlib::System::Int32  get_Month() const;

			//	Get:Day
			mscorlib::System::Int32  get_Day() const;

			//	Get:DayOfWeek
			mscorlib::System::DayOfWeek::__ENUM__  get_DayOfWeek() const;

			//	Get:DayOfYear
			mscorlib::System::Int32  get_DayOfYear() const;

			//	Get:TimeOfDay
			mscorlib::System::TimeSpan  get_TimeOfDay() const;

			//	Get:Hour
			mscorlib::System::Int32  get_Hour() const;

			//	Get:Minute
			mscorlib::System::Int32  get_Minute() const;

			//	Get:Second
			mscorlib::System::Int32  get_Second() const;

			//	Get:Millisecond
			mscorlib::System::Int32  get_Millisecond() const;

			//	Get:Ticks
			mscorlib::System::Int64  get_Ticks() const;

			//	Get:Year
			mscorlib::System::Int32  get_Year() const;

			//	Get:Kind
			mscorlib::System::DateTimeKind::__ENUM__  get_Kind() const;

			//Get Set Static Properties Methods
			//	Get:Now
			static mscorlib::System::DateTime  get_Now();
			static void set_Now(mscorlib::System::DateTime  value);

			//	Get:Today
			static mscorlib::System::DateTime  get_Today();
			static void set_Today(mscorlib::System::DateTime  value);

			//	Get:UtcNow
			static mscorlib::System::DateTime  get_UtcNow();
			static void set_UtcNow(mscorlib::System::DateTime  value);


			//	Get/Set:MaxValue
			static mscorlib::System::DateTime  get_MaxValue();
			static void set_MaxValue(mscorlib::System::DateTime  value);

			//	Get/Set:MinValue
			static mscorlib::System::DateTime  get_MinValue();
			static void set_MinValue(mscorlib::System::DateTime  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
