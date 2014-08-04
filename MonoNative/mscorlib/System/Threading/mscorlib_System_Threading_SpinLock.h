#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SPINLOCK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SPINLOCK_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Threading
		{

			class SpinLock
				: public mscorlib::System::ValueType
			{
			public:
				SpinLock(mscorlib::System::Boolean enableThreadOwnerTracking)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.SpinLock"))
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(enableThreadOwnerTracking);
					__native_object__ = Global::New("mscorlib", "System.Threading", "SpinLock", 1, __parameter_types__, __parameters__);
				};
			
				SpinLock(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				SpinLock(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~SpinLock()
				{
				};
			

				SpinLock & operator=(SpinLock &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Enter(mscorlib::System::Boolean lockTaken);
				void  TryEnter(mscorlib::System::Boolean lockTaken);
				void  TryEnter(mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean lockTaken);
				void  TryEnter(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean lockTaken);
				void  Exit();
				void  Exit(mscorlib::System::Boolean useMemoryBarrier);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsThreadOwnerTrackingEnabled)) mscorlib::System::Boolean  IsThreadOwnerTrackingEnabled;
				__declspec(property(get=get_IsHeld)) mscorlib::System::Boolean  IsHeld;
				__declspec(property(get=get_IsHeldByCurrentThread)) mscorlib::System::Boolean  IsHeldByCurrentThread;

				//Get Set Properties Methods
				//	Get:IsThreadOwnerTrackingEnabled
				mscorlib::System::Boolean  get_IsThreadOwnerTrackingEnabled();

				//	Get:IsHeld
				mscorlib::System::Boolean  get_IsHeld();

				//	Get:IsHeldByCurrentThread
				mscorlib::System::Boolean  get_IsHeldByCurrentThread();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
