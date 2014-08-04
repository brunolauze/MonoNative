#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DAYLIGHTTIME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DAYLIGHTTIME_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class DaylightTime
				: public mscorlib::System::Object
			{
			public:
				DaylightTime(mscorlib::System::DateTime start, mscorlib::System::DateTime end, mscorlib::System::TimeSpan delta)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.DaylightTime"))
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "DateTime");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "DateTime");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "TimeSpan");
					__parameters__[0] = (MonoObject*)start;
					__parameters__[1] = (MonoObject*)end;
					__parameters__[2] = (MonoObject*)delta;
					__native_object__ = Global::New("mscorlib", "System.Globalization", "DaylightTime", 3, __parameter_types__, __parameters__);
				};
			
				DaylightTime(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				DaylightTime(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~DaylightTime()
				{
				};
			

				DaylightTime & operator=(DaylightTime &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Start)) mscorlib::System::DateTime  Start;
				__declspec(property(get=get_End)) mscorlib::System::DateTime  End;
				__declspec(property(get=get_Delta)) mscorlib::System::TimeSpan  Delta;

				//Get Set Properties Methods
				//	Get:Start
				mscorlib::System::DateTime  get_Start();

				//	Get:End
				mscorlib::System::DateTime  get_End();

				//	Get:Delta
				mscorlib::System::TimeSpan  get_Delta();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
