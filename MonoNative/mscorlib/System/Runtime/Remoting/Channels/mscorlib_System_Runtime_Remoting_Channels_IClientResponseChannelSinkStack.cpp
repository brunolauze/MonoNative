#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Exception.h>



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

					//Public Methods
					void IClientResponseChannelSinkStack::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(headers).name());
							__parameter_types__[1] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)headers;
							__parameters__[1] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientResponseChannelSinkStack", 0, NULL, "AsyncProcessResponse", __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack, 2, __parameter_types__, __parameters__, NULL);
					}

					void IClientResponseChannelSinkStack::DispatchException(mscorlib::System::Exception e)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(e).name());
							__parameters__[0] = (MonoObject*)e;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientResponseChannelSinkStack", 0, NULL, "DispatchException", __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack, 1, __parameter_types__, __parameters__, NULL);
					}

					void IClientResponseChannelSinkStack::DispatchReplyMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientResponseChannelSinkStack", 0, NULL, "DispatchReplyMessage", __mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
