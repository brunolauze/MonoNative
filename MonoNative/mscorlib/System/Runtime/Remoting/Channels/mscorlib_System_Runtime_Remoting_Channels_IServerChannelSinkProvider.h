#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKPROVIDER_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore.h>

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

					class IServerChannelSinkProvider
					{
					public:
						IServerChannelSinkProvider(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider = nativeObject;
						};
					
						~IServerChannelSinkProvider()
						{
						};
					

						IServerChannelSinkProvider & operator=(IServerChannelSinkProvider &value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider = value.__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelReceiver channel);
						virtual void  GetChannelData(mscorlib::System::Runtime::Remoting::Channels::IChannelDataStore channelData);


						//Public Properties
						__declspec(property(get=get_Next, put=set_Next)) mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider  Next;

						//Get Set Properties Methods
						//	Get/Set:Next
						mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider  get_Next() const;
						void set_Next(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
