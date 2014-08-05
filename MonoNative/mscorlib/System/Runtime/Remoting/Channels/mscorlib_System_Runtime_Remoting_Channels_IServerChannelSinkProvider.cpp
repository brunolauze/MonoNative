#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider.h>



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
					mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink IServerChannelSinkProvider::CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelReceiver channel)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(channel).name());
							__parameters__[0] = (MonoObject*)channel;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider", 0, NULL, "CreateSink", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink(__result__);
					}

					void IServerChannelSinkProvider::GetChannelData(mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore channelData)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(channelData).name());
							__parameters__[0] = (MonoObject*)channelData;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider", 0, NULL, "GetChannelData", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get/Set:Next
					mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider  IServerChannelSinkProvider::get_Next() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider", 0, NULL, "get_Next", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider(__result__);
					}

					void IServerChannelSinkProvider::set_Next(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider", 0, NULL, "set_Next", __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
