#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack.h>
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
					void IClientChannelSink::AsyncProcessRequest(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameter_types__[2] = Global::GetType(typeid(headers).name());
							__parameter_types__[3] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)msg;
							__parameters__[2] = (MonoObject*)headers;
							__parameters__[3] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSink", 0, NULL, "AsyncProcessRequest", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, 4, __parameter_types__, __parameters__, NULL);
					}

					void IClientChannelSink::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameter_types__[2] = Global::GetType(typeid(headers).name());
							__parameter_types__[3] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)state;
							__parameters__[2] = (MonoObject*)headers;
							__parameters__[3] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSink", 0, NULL, "AsyncProcessResponse", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, 4, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IO::Stream IClientChannelSink::GetRequestStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(headers).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)headers;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSink", 0, NULL, "GetRequestStream", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IO::Stream(__result__);
					}

					void IClientChannelSink::ProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders requestHeaders, mscorlib::System::IO::Stream requestStream, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders responseHeaders, mscorlib::System::IO::Stream responseStream)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(requestHeaders).name());
							__parameter_types__[2] = Global::GetType(typeid(requestStream).name());
							__parameter_types__[3] = Global::GetType(typeid(responseHeaders).name());
							__parameter_types__[4] = Global::GetType(typeid(responseStream).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)requestHeaders;
							__parameters__[2] = (MonoObject*)requestStream;
							__parameters__[3] = (MonoObject*)responseHeaders;
							__parameters__[4] = (MonoObject*)responseStream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSink", 0, NULL, "ProcessMessage", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, 5, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:NextChannelSink
					mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink  IClientChannelSink::get_NextChannelSink() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSink", 0, NULL, "get_NextChannelSink", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink(__result__);
					}



				}
			}
		}
	}
}
