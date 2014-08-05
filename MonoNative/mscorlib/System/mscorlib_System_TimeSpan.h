#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TIMESPAN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TIMESPAN_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_IEquatable_1.h>
#include <mscorlib/System/mscorlib_System_IFormattable.h>
#include <mscorlib/System/mscorlib_System_IComparable.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IFormatProvider.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_TimeSpanStyles.h>

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

		class TimeSpan
			: public mscorlib::System::ValueType
			, public virtual mscorlib::System::IEquatable<mscorlib::System::TimeSpan>
			, public virtual mscorlib::System::IFormattable
			, public virtual mscorlib::System::IObjectComparable
			, public virtual mscorlib::System::IComparable<mscorlib::System::TimeSpan>
		{
		public:
			TimeSpan(mscorlib::System::Int64 ticks)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.TimeSpan"))
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int64");
				__parameters__[0] = &ticks;
				__native_object__ = Global::New("mscorlib", "System", "TimeSpan", 1, __parameter_types__, __parameters__);
			};
		
			TimeSpan(mscorlib::System::Int32 hours, mscorlib::System::Int32 minutes, mscorlib::System::Int32 seconds)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.TimeSpan"))
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(NULL)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &hours;
				__parameters__[1] = &minutes;
				__parameters__[2] = &seconds;
				__native_object__ = Global::New("mscorlib", "System", "TimeSpan", 3, __parameter_types__, __parameters__);
			};
		
			TimeSpan(mscorlib::System::Int32 days, mscorlib::System::Int32 hours, mscorlib::System::Int32 minutes, mscorlib::System::Int32 seconds)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.TimeSpan"))
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(NULL)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &days;
				__parameters__[1] = &hours;
				__parameters__[2] = &minutes;
				__parameters__[3] = &seconds;
				__native_object__ = Global::New("mscorlib", "System", "TimeSpan", 4, __parameter_types__, __parameters__);
			};
		
			TimeSpan(mscorlib::System::Int32 days, mscorlib::System::Int32 hours, mscorlib::System::Int32 minutes, mscorlib::System::Int32 seconds, mscorlib::System::Int32 milliseconds)
			: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.TimeSpan"))
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(NULL)
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
				__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
				__parameters__[0] = &days;
				__parameters__[1] = &hours;
				__parameters__[2] = &minutes;
				__parameters__[3] = &seconds;
				__parameters__[4] = &milliseconds;
				__native_object__ = Global::New("mscorlib", "System", "TimeSpan", 5, __parameter_types__, __parameters__);
			};
		
			TimeSpan(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::ValueType(nativeTypeInfo)
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(NULL)
			, mscorlib::System::IFormattable(NULL)
			, mscorlib::System::IObjectComparable(NULL)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(NULL)
			{
			};
		
			TimeSpan(MonoObject *nativeObject)
			: mscorlib::System::ValueType(nativeObject)
			, mscorlib::System::IEquatable<mscorlib::System::TimeSpan>(nativeObject)
			, mscorlib::System::IFormattable(nativeObject)
			, mscorlib::System::IObjectComparable(nativeObject)
			, mscorlib::System::IComparable<mscorlib::System::TimeSpan>(nativeObject)
			{
			};
		
			~TimeSpan()
			{
			};
		

			TimeSpan & operator=(TimeSpan &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::TimeSpan  Add(mscorlib::System::TimeSpan ts);
			static mscorlib::System::Int32  Compare(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object value);
			virtual mscorlib::System::Int32  CompareTo(mscorlib::System::TimeSpan value);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::TimeSpan obj);
			mscorlib::System::TimeSpan  Duration();
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object value) override;
			static mscorlib::System::Boolean  Equals(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
			static mscorlib::System::TimeSpan  FromDays(mscorlib::System::Double value);
			static mscorlib::System::TimeSpan  FromHours(mscorlib::System::Double value);
			static mscorlib::System::TimeSpan  FromMinutes(mscorlib::System::Double value);
			static mscorlib::System::TimeSpan  FromSeconds(mscorlib::System::Double value);
			static mscorlib::System::TimeSpan  FromMilliseconds(mscorlib::System::Double value);
			static mscorlib::System::TimeSpan  FromTicks(mscorlib::System::Int64 value);
			virtual mscorlib::System::Int32  GetHashCode() override;
			mscorlib::System::TimeSpan  Negate();
			static mscorlib::System::TimeSpan  Parse(mscorlib::System::String s);
			static mscorlib::System::TimeSpan  Parse(const char *s);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String s, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParse(const char *s, mscorlib::System::TimeSpan result);
			static mscorlib::System::TimeSpan  Parse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::TimeSpan  Parse(const char *input, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::Boolean  TryParse(mscorlib::System::String input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParse(const char *input, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::TimeSpan  ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::TimeSpan  ParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::TimeSpan  ParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles);
			static mscorlib::System::TimeSpan  ParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles);
			static mscorlib::System::TimeSpan  ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::TimeSpan  ParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider);
			static mscorlib::System::TimeSpan  ParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles);
			static mscorlib::System::TimeSpan  ParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, const char *format, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(mscorlib::System::String input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result);
			static mscorlib::System::Boolean  TryParseExact(const char *input, std::vector<mscorlib::System::String*> formats, mscorlib::System::IFormatProvider formatProvider, mscorlib::System::Globalization::TimeSpanStyles::__ENUM__ styles, mscorlib::System::TimeSpan result);
			mscorlib::System::TimeSpan  Subtract(mscorlib::System::TimeSpan ts);
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ToString(mscorlib::System::String format);
			mscorlib::System::String  ToString(const char *format);
			virtual mscorlib::System::String  ToString(mscorlib::System::String format, mscorlib::System::IFormatProvider formatProvider);
			virtual mscorlib::System::String  ToString(const char *format, mscorlib::System::IFormatProvider formatProvider);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Days)) mscorlib::System::Int32  Days;
			__declspec(property(get=get_Hours)) mscorlib::System::Int32  Hours;
			__declspec(property(get=get_Milliseconds)) mscorlib::System::Int32  Milliseconds;
			__declspec(property(get=get_Minutes)) mscorlib::System::Int32  Minutes;
			__declspec(property(get=get_Seconds)) mscorlib::System::Int32  Seconds;
			__declspec(property(get=get_Ticks)) mscorlib::System::Int64  Ticks;
			__declspec(property(get=get_TotalDays)) mscorlib::System::Double  TotalDays;
			__declspec(property(get=get_TotalHours)) mscorlib::System::Double  TotalHours;
			__declspec(property(get=get_TotalMilliseconds)) mscorlib::System::Double  TotalMilliseconds;
			__declspec(property(get=get_TotalMinutes)) mscorlib::System::Double  TotalMinutes;
			__declspec(property(get=get_TotalSeconds)) mscorlib::System::Double  TotalSeconds;

			//Public Static Fields
			static Property<mscorlib::System::TimeSpan , mscorlib::System::TimeSpan> MaxValue;
			static Property<mscorlib::System::TimeSpan , mscorlib::System::TimeSpan> MinValue;
			static Property<mscorlib::System::TimeSpan , mscorlib::System::TimeSpan> Zero;
			static Property<mscorlib::System::Int64 , mscorlib::System::TimeSpan> TicksPerDay;
			static Property<mscorlib::System::Int64 , mscorlib::System::TimeSpan> TicksPerHour;
			static Property<mscorlib::System::Int64 , mscorlib::System::TimeSpan> TicksPerMillisecond;
			static Property<mscorlib::System::Int64 , mscorlib::System::TimeSpan> TicksPerMinute;
			static Property<mscorlib::System::Int64 , mscorlib::System::TimeSpan> TicksPerSecond;

			//Get Set Properties Methods
			//	Get:Days
			mscorlib::System::Int32  get_Days() const;

			//	Get:Hours
			mscorlib::System::Int32  get_Hours() const;

			//	Get:Milliseconds
			mscorlib::System::Int32  get_Milliseconds() const;

			//	Get:Minutes
			mscorlib::System::Int32  get_Minutes() const;

			//	Get:Seconds
			mscorlib::System::Int32  get_Seconds() const;

			//	Get:Ticks
			mscorlib::System::Int64  get_Ticks() const;

			//	Get:TotalDays
			mscorlib::System::Double  get_TotalDays() const;

			//	Get:TotalHours
			mscorlib::System::Double  get_TotalHours() const;

			//	Get:TotalMilliseconds
			mscorlib::System::Double  get_TotalMilliseconds() const;

			//	Get:TotalMinutes
			mscorlib::System::Double  get_TotalMinutes() const;

			//	Get:TotalSeconds
			mscorlib::System::Double  get_TotalSeconds() const;

			//	Get/Set:MaxValue
			static mscorlib::System::TimeSpan  get_MaxValue();
			static void set_MaxValue(mscorlib::System::TimeSpan  value);

			//	Get/Set:MinValue
			static mscorlib::System::TimeSpan  get_MinValue();
			static void set_MinValue(mscorlib::System::TimeSpan  value);

			//	Get/Set:Zero
			static mscorlib::System::TimeSpan  get_Zero();
			static void set_Zero(mscorlib::System::TimeSpan  value);

			//	Get/Set:TicksPerDay
			static mscorlib::System::Int64  get_TicksPerDay();
			static void set_TicksPerDay(mscorlib::System::Int64  value);

			//	Get/Set:TicksPerHour
			static mscorlib::System::Int64  get_TicksPerHour();
			static void set_TicksPerHour(mscorlib::System::Int64  value);

			//	Get/Set:TicksPerMillisecond
			static mscorlib::System::Int64  get_TicksPerMillisecond();
			static void set_TicksPerMillisecond(mscorlib::System::Int64  value);

			//	Get/Set:TicksPerMinute
			static mscorlib::System::Int64  get_TicksPerMinute();
			static void set_TicksPerMinute(mscorlib::System::Int64  value);

			//	Get/Set:TicksPerSecond
			static mscorlib::System::Int64  get_TicksPerSecond();
			static void set_TicksPerSecond(mscorlib::System::Int64  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
