#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTFORMATTERSINKPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTFORMATTERSINKPROVIDER_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider.h>

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

					class IClientFormatterSinkProvider
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider
					{
					public:
						IClientFormatterSinkProvider(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkProvider(nativeObject)
						{
						};
					
						~IClientFormatterSinkProvider()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider, put=set___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider() const
						{
							return IClientFormatterSinkProvider::__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider(MonoObject *value)
						{
							IClientFormatterSinkProvider::__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkProvider = value;
						}
						IClientFormatterSinkProvider & operator=(IClientFormatterSinkProvider &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider = value.__mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientFormatterSinkProvider = value; return value; };




					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
