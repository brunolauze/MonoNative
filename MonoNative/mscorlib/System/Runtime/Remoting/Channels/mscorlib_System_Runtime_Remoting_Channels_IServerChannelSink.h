#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ServerProcessing.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

		}
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

					class IServerChannelSinkStack;
					

				}
			}
		}
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

					class IServerChannelSink
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase
					{
					public:
						IServerChannelSink(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase(nativeObject)
						{
						};
					
						~IServerChannelSink()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink, put=set___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink() const
						{
							return IServerChannelSink::__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink(MonoObject *value)
						{
							IServerChannelSink::__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase = value;
						}
						IServerChannelSink & operator=(IServerChannelSink &value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink = value.__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink = value; return value; };


						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual mscorlib::System::IO::Stream  GetResponseStream(mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers);
						virtual mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__  ProcessMessage(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage requestMsg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders requestHeaders, mscorlib::System::IO::Stream requestStream, mscorlib::System::Runtime::Remoting::Messaging::IMessage responseMsg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders responseHeaders, mscorlib::System::IO::Stream responseStream);


						//Public Properties
						__declspec(property(get=get_NextChannelSink)) mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  NextChannelSink;

						//Get Set Properties Methods
						//	Get:NextChannelSink
						mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  get_NextChannelSink() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
