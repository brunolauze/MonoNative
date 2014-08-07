#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADPOOL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADPOOL_H

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class SafeHandle;
				

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

			class RegisteredWaitHandle;
			class WaitHandle;
			class NativeOverlapped;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ThreadPool
				: public mscorlib::System::Object
			{
			public:
				ThreadPool(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				ThreadPool(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~ThreadPool()
				{
				};
			

				ThreadPool & operator=(ThreadPool &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ThreadPool &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Boolean  BindHandle(mscorlib::System::IntPtr osHandle);
				static mscorlib::System::Boolean  BindHandle(mscorlib::System::Runtime::InteropServices::SafeHandle osHandle);
				static void  GetAvailableThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads);
				static void  GetMaxThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads);
				static void  GetMinThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads);
				static mscorlib::System::Boolean  SetMinThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads);
				static mscorlib::System::Boolean  SetMaxThreads(mscorlib::System::Int32 workerThreads, mscorlib::System::Int32 completionPortThreads);
				static mscorlib::System::Boolean  QueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack);
				static mscorlib::System::Boolean  QueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state);
				static mscorlib::System::Threading::RegisteredWaitHandle  RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Boolean  UnsafeQueueNativeOverlapped(mscorlib::System::Threading::NativeOverlapped* overlapped);
				static mscorlib::System::Boolean  UnsafeQueueUserWorkItem(mscorlib::Callback<void  (mscorlib::System::Object )> callBack, mscorlib::System::Object state);
				static mscorlib::System::Threading::RegisteredWaitHandle  UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::Int64 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean executeOnlyOnce);
				static mscorlib::System::Threading::RegisteredWaitHandle  UnsafeRegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle waitObject, mscorlib::Callback<void  (mscorlib::System::Object , mscorlib::System::Boolean )> callBack, mscorlib::System::Object state, mscorlib::System::UInt32 millisecondsTimeOutInterval, mscorlib::System::Boolean executeOnlyOnce);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
