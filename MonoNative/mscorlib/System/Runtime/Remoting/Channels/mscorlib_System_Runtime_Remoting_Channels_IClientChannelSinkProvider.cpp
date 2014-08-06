#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider.h>
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
					mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink IClientChannelSinkProvider::CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelSender channel, mscorlib::System::String url, mscorlib::System::Object remoteChannelData)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(channel).name());
							__parameter_types__[1] = Global::GetType(typeid(url).name());
							__parameter_types__[2] = Global::GetType(typeid(remoteChannelData).name());
							__parameters__[0] = (MonoObject*)channel;
							__parameters__[1] = (MonoObject*)url;
							__parameters__[2] = (MonoObject*)remoteChannelData;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider", 0, NULL, "CreateSink", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink(__result__);
					}

					mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink IClientChannelSinkProvider::CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelSender channel, const char *url, mscorlib::System::Object remoteChannelData)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(channel).name());
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[2] = Global::GetType(typeid(remoteChannelData).name());
							__parameters__[0] = (MonoObject*)channel;
							__parameters__[1] = mono_string_new(Global::GetDomain(), url);
							__parameters__[2] = (MonoObject*)remoteChannelData;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider", 0, NULL, "CreateSink", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink(__result__);
					}

					//Get Set Properties Methods
					//	Get/Set:Next
					mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider  IClientChannelSinkProvider::get_Next() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider", 0, NULL, "get_Next", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider(__result__);
					}

					void IClientChannelSinkProvider::set_Next(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider", 0, NULL, "set_Next", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
