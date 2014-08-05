#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelSender.h>
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
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink IChannelSender::CreateMessageSink(mscorlib::System::String url, mscorlib::System::Object remoteChannelData, mscorlib::System::String objectURI)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(url).name());
							__parameter_types__[1] = Global::GetType(typeid(remoteChannelData).name());
							__parameter_types__[2] = Global::GetType(typeid(objectURI).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), url);
							__parameters__[1] = (MonoObject*)remoteChannelData;
							__parameters__[2] = (MonoObject*)objectURI;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelSender", 0, NULL, "CreateMessageSink", __mscorlib_System_Runtime_Remoting_Channels_IChannelSender, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink IChannelSender::CreateMessageSink(const char *url, mscorlib::System::Object remoteChannelData, const char *objectURI)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(url).name());
							__parameter_types__[1] = Global::GetType(typeid(remoteChannelData).name());
							__parameter_types__[2] = Global::GetType(typeid(objectURI).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), url);
							__parameters__[1] = (MonoObject*)remoteChannelData;
							__parameters__[2] = (MonoObject*)objectURI;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelSender", 0, NULL, "CreateMessageSink", __mscorlib_System_Runtime_Remoting_Channels_IChannelSender, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}


				}
			}
		}
	}
}
