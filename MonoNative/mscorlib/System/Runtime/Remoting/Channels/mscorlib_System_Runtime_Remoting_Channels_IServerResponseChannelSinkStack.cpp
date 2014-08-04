#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>



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
					void IServerResponseChannelSinkStack::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(headers).name());
							__parameter_types__[2] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)headers;
							__parameters__[2] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerResponseChannelSinkStack", 0, NULL, "AsyncProcessResponse", __mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack, 3, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IO::Stream IServerResponseChannelSinkStack::GetResponseStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(headers).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)headers;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerResponseChannelSinkStack", 0, NULL, "GetResponseStream", __mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IO::Stream(__result__);
					}


				}
			}
		}
	}
}
