#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IASYNCRESULT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IASYNCRESULT_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class WaitHandle;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class IAsyncResult
		{
		public:
			IAsyncResult(MonoObject *nativeObject)
			{
				__mscorlib_System_IAsyncResult = nativeObject;
			};
		
			~IAsyncResult()
			{
			};
		

			IAsyncResult & operator=(IAsyncResult &value) { __mscorlib_System_IAsyncResult = value.__mscorlib_System_IAsyncResult; return value; };
			operator MonoObject*() { return __mscorlib_System_IAsyncResult; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IAsyncResult = value; return value; };




			//Public Properties
			__declspec(property(get=get_AsyncState)) mscorlib::System::Object  AsyncState;
			__declspec(property(get=get_AsyncWaitHandle)) mscorlib::System::Threading::WaitHandle  AsyncWaitHandle;
			__declspec(property(get=get_CompletedSynchronously)) mscorlib::System::Boolean  CompletedSynchronously;
			__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;

			//Get Set Properties Methods
			//	Get:AsyncState
			mscorlib::System::Object  get_AsyncState() const;

			//	Get:AsyncWaitHandle
			mscorlib::System::Threading::WaitHandle  get_AsyncWaitHandle() const;

			//	Get:CompletedSynchronously
			mscorlib::System::Boolean  get_CompletedSynchronously() const;

			//	Get:IsCompleted
			mscorlib::System::Boolean  get_IsCompleted() const;

		
		protected:
			MonoObject *__mscorlib_System_IAsyncResult;
		
		private:
		
		};

	}
}
#endif
