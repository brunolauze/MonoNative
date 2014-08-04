#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					void ClientChannelSinkStack::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(headers).name());
							__parameter_types__[1] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)headers;
							__parameters__[1] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 0, NULL, "AsyncProcessResponse", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void ClientChannelSinkStack::DispatchException(mscorlib::System::Exception e)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(e).name());
							__parameters__[0] = (MonoObject*)e;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 0, NULL, "DispatchException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void ClientChannelSinkStack::DispatchReplyMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 0, NULL, "DispatchReplyMessage", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object ClientChannelSinkStack::Pop(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameters__[0] = (MonoObject*)sink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 0, NULL, "Pop", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void ClientChannelSinkStack::Push(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink, mscorlib::System::Object state)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameters__[0] = (MonoObject*)sink;
							__parameters__[1] = (MonoObject*)state;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 0, NULL, "Push", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
