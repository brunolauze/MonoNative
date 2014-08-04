#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>



namespace mscorlib
{
	namespace System
	{

		//Get Set Properties Methods
		//	Get:AsyncState
		mscorlib::System::Object  IAsyncResult::get_AsyncState()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAsyncResult", 0, NULL, "get_AsyncState", __mscorlib_System_IAsyncResult, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}


		//	Get:AsyncWaitHandle
		mscorlib::System::Threading::WaitHandle  IAsyncResult::get_AsyncWaitHandle()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAsyncResult", 0, NULL, "get_AsyncWaitHandle", __mscorlib_System_IAsyncResult, 0, NULL, NULL, NULL);
			return mscorlib::System::Threading::WaitHandle(__result__);
		}


		//	Get:CompletedSynchronously
		mscorlib::System::Boolean  IAsyncResult::get_CompletedSynchronously()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAsyncResult", 0, NULL, "get_CompletedSynchronously", __mscorlib_System_IAsyncResult, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsCompleted
		mscorlib::System::Boolean  IAsyncResult::get_IsCompleted()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAsyncResult", 0, NULL, "get_IsCompleted", __mscorlib_System_IAsyncResult, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}



	}
}
