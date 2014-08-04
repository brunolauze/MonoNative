#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>



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
					mscorlib::System::Runtime::Remoting::Messaging::IMessage IMessageSink::SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMessageSink", 0, NULL, "SyncProcessMessage", __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessage(__result__);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl IMessageSink::AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(replySink).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)replySink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMessageSink", 0, NULL, "AsyncProcessMessage", __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl(__result__);
					}

					//Get Set Properties Methods
					//	Get:NextSink
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  IMessageSink::get_NextSink()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMessageSink", 0, NULL, "get_NextSink", __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}



				}
			}
		}
	}
}
