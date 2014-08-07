#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MANUALRESETEVENTSLIM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MANUALRESETEVENTSLIM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>

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

			class CancellationToken;
			class WaitHandle;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ManualResetEventSlim
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				ManualResetEventSlim()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ManualResetEventSlim"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "ManualResetEventSlim");
				};
			
				ManualResetEventSlim(mscorlib::System::Boolean initialState)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ManualResetEventSlim"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					__native_object__ = Global::New("mscorlib", "System.Threading", "ManualResetEventSlim", 1, __parameter_types__, __parameters__);
				};
			
				ManualResetEventSlim(mscorlib::System::Boolean initialState, mscorlib::System::Int32 spinCount)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ManualResetEventSlim"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					__parameters__[1] = &spinCount;
					__native_object__ = Global::New("mscorlib", "System.Threading", "ManualResetEventSlim", 2, __parameter_types__, __parameters__);
				};
			
				ManualResetEventSlim(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				ManualResetEventSlim(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~ManualResetEventSlim()
				{
				};
			

				ManualResetEventSlim & operator=(ManualResetEventSlim &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ManualResetEventSlim &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Reset();
				void  Set();
				void  Wait();
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout);
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout);
				void  Wait(mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				virtual void  Dispose();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsSet)) mscorlib::System::Boolean  IsSet;
				__declspec(property(get=get_SpinCount)) mscorlib::System::Int32  SpinCount;
				__declspec(property(get=get_WaitHandle)) mscorlib::System::Threading::WaitHandle  WaitHandle;

				//Get Set Properties Methods
				//	Get:IsSet
				mscorlib::System::Boolean  get_IsSet() const;

				//	Get:SpinCount
				mscorlib::System::Int32  get_SpinCount() const;

				//	Get:WaitHandle
				mscorlib::System::Threading::WaitHandle  get_WaitHandle() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
