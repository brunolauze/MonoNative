#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

					class IClientChannelSinkStack;
					

				}
			}
		}
	}
}
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

					class IClientChannelSink
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase
					{
					public:
						IClientChannelSink(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase(nativeObject)
						{
						};
					
						~IClientChannelSink()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, put=set___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink()
						{
							return IClientChannelSink::__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink(MonoObject *value)
						{
							IClientChannelSink::__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase = value;
						}
						IClientChannelSink & operator=(IClientChannelSink &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink = value.__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink = value; return value; };


						virtual void  AsyncProcessRequest(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual mscorlib::System::IO::Stream  GetRequestStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers);
						virtual void  ProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders requestHeaders, mscorlib::System::IO::Stream requestStream, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders responseHeaders, mscorlib::System::IO::Stream responseStream);


						//Public Properties
						__declspec(property(get=get_NextChannelSink)) mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink  NextChannelSink;

						//Get Set Properties Methods
						//	Get:NextChannelSink
						mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink  get_NextChannelSink();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
