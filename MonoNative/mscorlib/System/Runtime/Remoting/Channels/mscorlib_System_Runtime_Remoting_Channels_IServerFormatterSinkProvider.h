#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERFORMATTERSINKPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERFORMATTERSINKPROVIDER_H

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

					class IServerFormatterSinkProvider
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider
					{
					public:
						IServerFormatterSinkProvider(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider(nativeObject)
						{
						};
					
						~IServerFormatterSinkProvider()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider, put=set___mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider() const
						{
							return IServerFormatterSinkProvider::__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider(MonoObject *value)
						{
							IServerFormatterSinkProvider::__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider = value;
						}
						IServerFormatterSinkProvider & operator=(IServerFormatterSinkProvider &value) { __mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider = value.__mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IServerFormatterSinkProvider = value; return value; };




					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
