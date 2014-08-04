#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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
					mscorlib::System::IO::Stream ServerChannelSinkStack::GetResponseStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(headers).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)headers;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "GetResponseStream", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IO::Stream(__result__);
					}

					mscorlib::System::Object ServerChannelSinkStack::Pop(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameters__[0] = (MonoObject*)sink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "Pop", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void ServerChannelSinkStack::Push(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameters__[0] = (MonoObject*)sink;
							__parameters__[1] = (MonoObject*)state;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "Push", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void ServerChannelSinkStack::ServerCallback(mscorlib::System::IAsyncResult ar)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ar).name());
							__parameters__[0] = (MonoObject*)ar;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "ServerCallback", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void ServerChannelSinkStack::Store(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameters__[0] = (MonoObject*)sink;
							__parameters__[1] = (MonoObject*)state;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "Store", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void ServerChannelSinkStack::StoreAndDispatch(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameters__[0] = (MonoObject*)sink;
							__parameters__[1] = (MonoObject*)state;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "StoreAndDispatch", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					void ServerChannelSinkStack::AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(headers).name());
							__parameter_types__[2] = Global::GetType(typeid(stream).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)headers;
							__parameters__[2] = (MonoObject*)stream;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack", 0, NULL, "AsyncProcessResponse", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
