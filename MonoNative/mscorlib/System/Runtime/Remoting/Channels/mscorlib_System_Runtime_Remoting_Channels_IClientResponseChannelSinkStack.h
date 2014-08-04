#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTRESPONSECHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTRESPONSECHANNELSINKSTACK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>

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

		class Exception;
		

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

					class IClientResponseChannelSinkStack
					{
					public:
						IClientResponseChannelSinkStack(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack = nativeObject;
						};
					
						~IClientResponseChannelSinkStack()
						{
						};
					

						IClientResponseChannelSinkStack & operator=(IClientResponseChannelSinkStack &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack = value.__mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack = value; return value; };


						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual void  DispatchException(mscorlib::System::Exception e);
						virtual void  DispatchReplyMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
