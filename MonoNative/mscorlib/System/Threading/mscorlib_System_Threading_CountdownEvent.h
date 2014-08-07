#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_COUNTDOWNEVENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_COUNTDOWNEVENT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class WaitHandle;
			class CancellationToken;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class TimeSpan;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class CountdownEvent
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				CountdownEvent(mscorlib::System::Int32 initialCount)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.CountdownEvent"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &initialCount;
					__native_object__ = Global::New("mscorlib", "System.Threading", "CountdownEvent", 1, __parameter_types__, __parameters__);
				};
			
				CountdownEvent(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				CountdownEvent(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~CountdownEvent()
				{
				};
			

				CountdownEvent & operator=(CountdownEvent &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CountdownEvent &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Boolean  Signal();
				mscorlib::System::Boolean  Signal(mscorlib::System::Int32 signalCount);
				void  AddCount();
				void  AddCount(mscorlib::System::Int32 signalCount);
				mscorlib::System::Boolean  TryAddCount();
				mscorlib::System::Boolean  TryAddCount(mscorlib::System::Int32 signalCount);
				void  Wait();
				void  Wait(mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout);
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout);
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				void  Reset();
				void  Reset(mscorlib::System::Int32 count);
				virtual void  Dispose();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CurrentCount)) mscorlib::System::Int32  CurrentCount;
				__declspec(property(get=get_InitialCount)) mscorlib::System::Int32  InitialCount;
				__declspec(property(get=get_IsSet)) mscorlib::System::Boolean  IsSet;
				__declspec(property(get=get_WaitHandle)) mscorlib::System::Threading::WaitHandle  WaitHandle;

				//Get Set Properties Methods
				//	Get:CurrentCount
				mscorlib::System::Int32  get_CurrentCount() const;

				//	Get:InitialCount
				mscorlib::System::Int32  get_InitialCount() const;

				//	Get:IsSet
				mscorlib::System::Boolean  get_IsSet() const;

				//	Get:WaitHandle
				mscorlib::System::Threading::WaitHandle  get_WaitHandle() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
