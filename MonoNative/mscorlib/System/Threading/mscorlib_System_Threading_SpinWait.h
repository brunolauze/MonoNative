#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SPINWAIT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SPINWAIT_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class TimeSpan;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class SpinWait
				: public mscorlib::System::ValueType
			{
			public:
				SpinWait(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				SpinWait(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~SpinWait()
				{
				};
			

				SpinWait & operator=(SpinWait &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  SpinOnce();
				static void  SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition);
				static mscorlib::System::Boolean  SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition, mscorlib::System::TimeSpan timeout);
				static mscorlib::System::Boolean  SpinUntil(mscorlib::Callback<mscorlib::System::Boolean  ()> condition, mscorlib::System::Int32 millisecondsTimeout);
				void  Reset();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_NextSpinWillYield)) mscorlib::System::Boolean  NextSpinWillYield;
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

				//Get Set Properties Methods
				//	Get:NextSpinWillYield
				mscorlib::System::Boolean  get_NextSpinWillYield();

				//	Get:Count
				mscorlib::System::Int32  get_Count();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
