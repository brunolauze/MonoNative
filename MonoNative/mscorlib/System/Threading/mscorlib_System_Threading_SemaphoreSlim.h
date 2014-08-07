#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SEMAPHORESLIM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_SEMAPHORESLIM_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Threading/Tasks/mscorlib_System_Threading_Tasks_Task_1.h>

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
			namespace Tasks
			{

				class TaskBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class SemaphoreSlim
				: public mscorlib::System::Object
				, public virtual mscorlib::System::IDisposable
			{
			public:
				SemaphoreSlim(mscorlib::System::Int32 initialCount)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.SemaphoreSlim"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &initialCount;
					__native_object__ = Global::New("mscorlib", "System.Threading", "SemaphoreSlim", 1, __parameter_types__, __parameters__);
				};
			
				SemaphoreSlim(mscorlib::System::Int32 initialCount, mscorlib::System::Int32 maxCount)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.SemaphoreSlim"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &initialCount;
					__parameters__[1] = &maxCount;
					__native_object__ = Global::New("mscorlib", "System.Threading", "SemaphoreSlim", 2, __parameter_types__, __parameters__);
				};
			
				SemaphoreSlim(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				SemaphoreSlim(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~SemaphoreSlim()
				{
				};
			

				SemaphoreSlim & operator=(SemaphoreSlim &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(SemaphoreSlim &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				mscorlib::System::Int32  Release();
				mscorlib::System::Int32  Release(mscorlib::System::Int32 releaseCount);
				void  Wait();
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout);
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout);
				void  Wait(mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Boolean  Wait(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::TaskBase  WaitAsync();
				mscorlib::System::Threading::Tasks::TaskBase  WaitAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>  WaitAsync(mscorlib::System::Int32 millisecondsTimeout);
				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>  WaitAsync(mscorlib::System::TimeSpan timeout);
				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>  WaitAsync(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				mscorlib::System::Threading::Tasks::Task<mscorlib::System::Boolean>  WaitAsync(mscorlib::System::TimeSpan timeout, mscorlib::System::Threading::CancellationToken cancellationToken);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CurrentCount)) mscorlib::System::Int32  CurrentCount;
				__declspec(property(get=get_AvailableWaitHandle)) mscorlib::System::Threading::WaitHandle  AvailableWaitHandle;

				//Get Set Properties Methods
				//	Get:CurrentCount
				mscorlib::System::Int32  get_CurrentCount() const;

				//	Get:AvailableWaitHandle
				mscorlib::System::Threading::WaitHandle  get_AvailableWaitHandle() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
