#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERRESPONSECHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERRESPONSECHANNELSINKSTACK_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>

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

					class IServerResponseChannelSinkStack
					{
					public:
						IServerResponseChannelSinkStack(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack = nativeObject;
						};
					
						~IServerResponseChannelSinkStack()
						{
						};
					

						IServerResponseChannelSinkStack & operator=(IServerResponseChannelSinkStack &value) { __mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack = value.__mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack = value; return value; };


						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual mscorlib::System::IO::Stream  GetResponseStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
