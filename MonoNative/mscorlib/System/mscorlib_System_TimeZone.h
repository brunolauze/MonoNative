#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_TIMEZONE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_TIMEZONE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class TimeSpan;
		class DateTime;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class DaylightTime;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class TimeZone
			: public mscorlib::System::Object
		{
		public:
			TimeZone(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			{
			};
		
			TimeZone(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			{
			};
		
			~TimeZone()
			{
			};
		

			TimeZone & operator=(TimeZone &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::Globalization::DaylightTime  GetDaylightChanges(mscorlib::System::Int32 year);
			virtual mscorlib::System::TimeSpan  GetUtcOffset(mscorlib::System::DateTime time);
			virtual mscorlib::System::Boolean  IsDaylightSavingTime(mscorlib::System::DateTime time);
			static mscorlib::System::Boolean  IsDaylightSavingTime(mscorlib::System::DateTime time, mscorlib::System::Globalization::DaylightTime daylightTimes);
			virtual mscorlib::System::DateTime  ToLocalTime(mscorlib::System::DateTime time);
			virtual mscorlib::System::DateTime  ToUniversalTime(mscorlib::System::DateTime time);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_DaylightName)) mscorlib::System::String  DaylightName;
			__declspec(property(get=get_StandardName)) mscorlib::System::String  StandardName;

			//Public Static Properties
			static Property<mscorlib::System::TimeZone> CurrentTimeZone;

			//Get Set Properties Methods
			//	Get:DaylightName
			mscorlib::System::String  get_DaylightName();

			//	Get:StandardName
			mscorlib::System::String  get_StandardName();

			//Get Set Static Properties Methods
			//	Get:CurrentTimeZone
			static mscorlib::System::TimeZone  get_CurrentTimeZone();


		
		protected:
		
		private:
		
		};

	}
}
#endif
