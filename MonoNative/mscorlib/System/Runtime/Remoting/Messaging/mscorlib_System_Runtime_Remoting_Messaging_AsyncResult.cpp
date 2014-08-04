#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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

					//Public Methods
					mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl AsyncResult::AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(replySink).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)replySink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "AsyncProcessMessage", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl(__result__);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessage AsyncResult::GetReplyMessage()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "GetReplyMessage", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessage(__result__);
					}

					void AsyncResult::SetMessageCtrl(mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl mc)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(mc).name());
							__parameters__[0] = (MonoObject*)mc;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "SetMessageCtrl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessage AsyncResult::SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "SyncProcessMessage", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessage(__result__);
					}

					//Get Set Properties Methods
					//	Get:AsyncState
					mscorlib::System::Object  AsyncResult::get_AsyncState()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_AsyncState", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:AsyncWaitHandle
					mscorlib::System::Threading::WaitHandle  AsyncResult::get_AsyncWaitHandle()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_AsyncWaitHandle", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Threading::WaitHandle(__result__);
					}


					//	Get:CompletedSynchronously
					mscorlib::System::Boolean  AsyncResult::get_CompletedSynchronously()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_CompletedSynchronously", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:IsCompleted
					mscorlib::System::Boolean  AsyncResult::get_IsCompleted()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get/Set:EndInvokeCalled
					mscorlib::System::Boolean  AsyncResult::get_EndInvokeCalled()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_EndInvokeCalled", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void AsyncResult::set_EndInvokeCalled(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "set_EndInvokeCalled", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:AsyncDelegate
					mscorlib::System::Object  AsyncResult::get_AsyncDelegate()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_AsyncDelegate", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:NextSink
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  AsyncResult::get_NextSink()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "AsyncResult", 0, NULL, "get_NextSink", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}



				}
			}
		}
	}
}
