#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannel.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

					class IChannelReceiver
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IChannel
					{
					public:
						IChannelReceiver(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IChannel(nativeObject)
						{
						};
					
						~IChannelReceiver()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver, put=set___mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver()
						{
							return IChannelReceiver::__mscorlib_System_Runtime_Remoting_Channels_IChannel;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver(MonoObject *value)
						{
							IChannelReceiver::__mscorlib_System_Runtime_Remoting_Channels_IChannel = value;
						}
						IChannelReceiver & operator=(IChannelReceiver &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver = value.__mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver = value; return value; };


						virtual std::vector<mscorlib::System::String*>  GetUrlsForUri(mscorlib::System::String objectURI);
						virtual void  StartListening(mscorlib::System::Object data);
						virtual void  StopListening(mscorlib::System::Object data);


						//Public Properties
						__declspec(property(get=get_ChannelData)) mscorlib::System::Object  ChannelData;

						//Get Set Properties Methods
						//	Get:ChannelData
						mscorlib::System::Object  get_ChannelData();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
