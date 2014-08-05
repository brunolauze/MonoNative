#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_H

#include <Global.h>

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

					class IChannel
					{
					public:
						IChannel(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IChannel = nativeObject;
						};
					
						~IChannel()
						{
						};
					

						IChannel & operator=(IChannel &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannel = value.__mscorlib_System_Runtime_Remoting_Channels_IChannel; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannel; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannel = value; return value; };


						virtual mscorlib::System::String  Parse(mscorlib::System::String url, mscorlib::System::String objectURI);
						virtual mscorlib::System::String  Parse(const char *url, const char *objectURI);


						//Public Properties
						__declspec(property(get=get_ChannelName)) mscorlib::System::String  ChannelName;
						__declspec(property(get=get_ChannelPriority)) mscorlib::System::Int32  ChannelPriority;

						//Get Set Properties Methods
						//	Get:ChannelName
						mscorlib::System::String  get_ChannelName() const;

						//	Get:ChannelPriority
						mscorlib::System::Int32  get_ChannelPriority() const;

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannel;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
