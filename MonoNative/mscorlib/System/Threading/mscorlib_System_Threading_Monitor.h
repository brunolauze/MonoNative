#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MONITOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MONITOR_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class TimeSpan;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class Monitor
				: public mscorlib::System::Object
			{
			public:
				Monitor(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Monitor(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Monitor()
				{
				};
			

				Monitor & operator=(Monitor &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Monitor &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  Enter(mscorlib::System::Object obj);
				static void  Exit(mscorlib::System::Object obj);
				static void  Pulse(mscorlib::System::Object obj);
				static void  PulseAll(mscorlib::System::Object obj);
				static mscorlib::System::Boolean  TryEnter(mscorlib::System::Object obj);
				static mscorlib::System::Boolean  TryEnter(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout);
				static mscorlib::System::Boolean  TryEnter(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout);
				static mscorlib::System::Boolean  Wait(mscorlib::System::Object obj);
				static mscorlib::System::Boolean  Wait(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout);
				static mscorlib::System::Boolean  Wait(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout);
				static mscorlib::System::Boolean  Wait(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Boolean  Wait(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext);
				static void  Enter(mscorlib::System::Object obj, mscorlib::System::Boolean lockTaken);
				static void  TryEnter(mscorlib::System::Object obj, mscorlib::System::Boolean lockTaken);
				static void  TryEnter(mscorlib::System::Object obj, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean lockTaken);
				static void  TryEnter(mscorlib::System::Object obj, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean lockTaken);
				static mscorlib::System::Boolean  IsEntered(mscorlib::System::Object obj);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
