#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSENDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSENDER_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannel.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

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
				namespace Channels
				{

					class IChannelSender
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IChannel
					{
					public:
						IChannelSender(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IChannel(nativeObject)
						{
						};
					
						~IChannelSender()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IChannelSender, put=set___mscorlib_System_Runtime_Remoting_Channels_IChannelSender)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannelSender;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IChannelSender()
						{
							return IChannelSender::__mscorlib_System_Runtime_Remoting_Channels_IChannel;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IChannelSender(MonoObject *value)
						{
							IChannelSender::__mscorlib_System_Runtime_Remoting_Channels_IChannel = value;
						}
						IChannelSender & operator=(IChannelSender &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelSender = value.__mscorlib_System_Runtime_Remoting_Channels_IChannelSender; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannelSender; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelSender = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  CreateMessageSink(mscorlib::System::String url, mscorlib::System::Object remoteChannelData, mscorlib::System::String objectURI);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
