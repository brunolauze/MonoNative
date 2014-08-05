#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook.h>
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
					void IChannelReceiverHook::AddHookChannelUri(mscorlib::System::String channelUri)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(channelUri).name());
							__parameters__[0] = (MonoObject*)channelUri;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiverHook", 0, NULL, "AddHookChannelUri", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:ChannelScheme
					mscorlib::System::String  IChannelReceiverHook::get_ChannelScheme() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiverHook", 0, NULL, "get_ChannelScheme", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:ChannelSinkChain
					mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  IChannelReceiverHook::get_ChannelSinkChain() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiverHook", 0, NULL, "get_ChannelSinkChain", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink(__result__);
					}


					//	Get:WantsToListen
					mscorlib::System::Boolean  IChannelReceiverHook::get_WantsToListen() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiverHook", 0, NULL, "get_WantsToListen", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}



				}
			}
		}
	}
}
