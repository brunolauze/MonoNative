#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack.h>



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
					void IServerChannelSink::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameter_types__[2] = Global::GetType(typeid(msg).name());
							__parameter_types__[3] = Global::GetType(typeid(headers).name());
							__parameter_types__[4] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)state;
							__parameters__[2] = (MonoObject*)msg;
							__parameters__[3] = (MonoObject*)headers;
							__parameters__[4] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSink", 0, NULL, "AsyncProcessResponse", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink, 5, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IO::Stream IServerChannelSink::GetResponseStream(mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack sinkStack, mscorlib::System::Object state, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameter_types__[2] = Global::GetType(typeid(msg).name());
							__parameter_types__[3] = Global::GetType(typeid(headers).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)state;
							__parameters__[2] = (MonoObject*)msg;
							__parameters__[3] = (MonoObject*)headers;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSink", 0, NULL, "GetResponseStream", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink, 4, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IO::Stream(__result__);
					}

					mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__ IServerChannelSink::ProcessMessage(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage requestMsg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders requestHeaders, mscorlib::System::IO::Stream requestStream, mscorlib::System::Runtime::Remoting::Messaging::IMessage responseMsg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders responseHeaders, mscorlib::System::IO::Stream responseStream)
					{
							MonoType *__parameter_types__[7];
							void *__parameters__[7];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(requestMsg).name());
							__parameter_types__[2] = Global::GetType(typeid(requestHeaders).name());
							__parameter_types__[3] = Global::GetType(typeid(requestStream).name());
							__parameter_types__[4] = Global::GetType(typeid(responseMsg).name());
							__parameter_types__[5] = Global::GetType(typeid(responseHeaders).name());
							__parameter_types__[6] = Global::GetType(typeid(responseStream).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)requestMsg;
							__parameters__[2] = (MonoObject*)requestHeaders;
							__parameters__[3] = (MonoObject*)requestStream;
							__parameters__[4] = (MonoObject*)responseMsg;
							__parameters__[5] = (MonoObject*)responseHeaders;
							__parameters__[6] = (MonoObject*)responseStream;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSink", 0, NULL, "ProcessMessage", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink, 7, __parameter_types__, __parameters__, NULL);
							return static_cast<mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
					}

					//Get Set Properties Methods
					//	Get:NextChannelSink
					mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  IServerChannelSink::get_NextChannelSink() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSink", 0, NULL, "get_NextChannelSink", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink(__result__);
					}



				}
			}
		}
	}
}
