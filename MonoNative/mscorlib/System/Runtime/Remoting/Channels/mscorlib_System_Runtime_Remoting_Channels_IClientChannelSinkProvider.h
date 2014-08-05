#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKPROVIDER_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelSender.h>
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

					class IClientChannelSinkProvider
					{
					public:
						IClientChannelSinkProvider(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider = nativeObject;
						};
					
						~IClientChannelSinkProvider()
						{
						};
					

						IClientChannelSinkProvider & operator=(IClientChannelSinkProvider &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider = value.__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink  CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelSender channel, mscorlib::System::String url, mscorlib::System::Object remoteChannelData);
						virtual mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink  CreateSink(mscorlib::System::Runtime::Remoting::Channels::IChannelSender channel, const char *url, mscorlib::System::Object remoteChannelData);


						//Public Properties
						__declspec(property(get=get_Next, put=set_Next)) mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider  Next;

						//Get Set Properties Methods
						//	Get/Set:Next
						mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider  get_Next() const;
						void set_Next(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
