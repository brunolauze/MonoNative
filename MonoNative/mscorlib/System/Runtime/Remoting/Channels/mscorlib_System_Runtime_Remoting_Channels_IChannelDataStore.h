#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELDATASTORE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELDATASTORE_H

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

					class IChannelDataStore
					{
					public:
						IChannelDataStore(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore = nativeObject;
						};
					
						~IChannelDataStore()
						{
						};
					

						IChannelDataStore & operator=(IChannelDataStore &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore = value.__mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore = value; return value; };




						//Public Properties
						__declspec(property(get=get_ChannelUris)) std::vector<mscorlib::System::String*>  ChannelUris;
						__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

						//Get Set Properties Methods
						//	Get:ChannelUris
						std::vector<mscorlib::System::String*>  get_ChannelUris();

						//	Get/Set:Item
						mscorlib::System::Object  get_Item(mscorlib::System::Object key);
						void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannelDataStore;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
