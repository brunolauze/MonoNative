#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl.h>

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

					class IMessageSink
					{
					public:
						IMessageSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Messaging_IMessageSink = nativeObject;
						};
					
						~IMessageSink()
						{
						};
					

						IMessageSink & operator=(IMessageSink &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink = value.__mscorlib_System_Runtime_Remoting_Messaging_IMessageSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessageSink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage  SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl  AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink);


						//Public Properties
						__declspec(property(get=get_NextSink)) mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  NextSink;

						//Get Set Properties Methods
						//	Get:NextSink
						mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  get_NextSink();

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMessageSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
