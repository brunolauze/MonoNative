#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTFORMATTERSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTFORMATTERSINK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase.h>

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

					class IClientFormatterSink
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase
					{
					public:
						IClientFormatterSink(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IChannelSinkBase(nativeObject)
						{
						};
					
						~IClientFormatterSink()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink, put=set___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink() const
						{
							return IClientFormatterSink::__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink(MonoObject *value)
						{
							IClientFormatterSink::__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink = value;
						}
						IClientFormatterSink & operator=(IClientFormatterSink &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink = value.__mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSink = value; return value; };




					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
