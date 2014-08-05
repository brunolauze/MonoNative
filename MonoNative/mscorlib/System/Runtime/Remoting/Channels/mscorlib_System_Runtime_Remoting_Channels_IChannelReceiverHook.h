#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVERHOOK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVERHOOK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
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

					class IChannelReceiverHook
					{
					public:
						IChannelReceiverHook(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook = nativeObject;
						};
					
						~IChannelReceiverHook()
						{
						};
					

						IChannelReceiverHook & operator=(IChannelReceiverHook &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook = value.__mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook = value; return value; };


						virtual void  AddHookChannelUri(mscorlib::System::String channelUri);


						//Public Properties
						__declspec(property(get=get_ChannelScheme)) mscorlib::System::String  ChannelScheme;
						__declspec(property(get=get_ChannelSinkChain)) mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  ChannelSinkChain;
						__declspec(property(get=get_WantsToListen)) mscorlib::System::Boolean  WantsToListen;

						//Get Set Properties Methods
						//	Get:ChannelScheme
						mscorlib::System::String  get_ChannelScheme() const;

						//	Get:ChannelSinkChain
						mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  get_ChannelSinkChain() const;

						//	Get:WantsToListen
						mscorlib::System::Boolean  get_WantsToListen() const;

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannelReceiverHook;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
