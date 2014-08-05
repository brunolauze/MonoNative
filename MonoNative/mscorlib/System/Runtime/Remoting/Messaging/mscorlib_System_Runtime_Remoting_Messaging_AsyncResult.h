#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>

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

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class AsyncResult
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink
						, public virtual mscorlib::System::IAsyncResult
					{
					public:
						AsyncResult(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(NULL)
						, mscorlib::System::IAsyncResult(NULL)
						{
						};
					
						AsyncResult(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(nativeObject)
						, mscorlib::System::IAsyncResult(nativeObject)
						{
						};
					
						~AsyncResult()
						{
						};
					

						AsyncResult & operator=(AsyncResult &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl  AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink);
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage  GetReplyMessage();
						virtual void  SetMessageCtrl(mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl mc);
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage  SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_AsyncState)) mscorlib::System::Object  AsyncState;
						__declspec(property(get=get_AsyncWaitHandle)) mscorlib::System::Threading::WaitHandle  AsyncWaitHandle;
						__declspec(property(get=get_CompletedSynchronously)) mscorlib::System::Boolean  CompletedSynchronously;
						__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;
						__declspec(property(get=get_EndInvokeCalled, put=set_EndInvokeCalled)) mscorlib::System::Boolean  EndInvokeCalled;
						__declspec(property(get=get_AsyncDelegate)) mscorlib::System::Object  AsyncDelegate;
						__declspec(property(get=get_NextSink)) mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  NextSink;

						//Get Set Properties Methods
						//	Get:AsyncState
						mscorlib::System::Object  get_AsyncState() const;

						//	Get:AsyncWaitHandle
						mscorlib::System::Threading::WaitHandle  get_AsyncWaitHandle() const;

						//	Get:CompletedSynchronously
						mscorlib::System::Boolean  get_CompletedSynchronously() const;

						//	Get:IsCompleted
						mscorlib::System::Boolean  get_IsCompleted() const;

						//	Get/Set:EndInvokeCalled
						mscorlib::System::Boolean  get_EndInvokeCalled() const;
						void set_EndInvokeCalled(mscorlib::System::Boolean  value);

						//	Get:AsyncDelegate
						mscorlib::System::Object  get_AsyncDelegate() const;

						//	Get:NextSink
						mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  get_NextSink() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
