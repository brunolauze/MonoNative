#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ITRANSPORTHEADERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ITRANSPORTHEADERS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

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

					class ITransportHeaders
					{
					public:
						ITransportHeaders(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders = nativeObject;
						};
					
						~ITransportHeaders()
						{
						};
					

						ITransportHeaders & operator=(ITransportHeaders &value) { __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders = value.__mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders = value; return value; };


						virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();


						//Public Properties
						__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

						//Get Set Properties Methods
						//	Get/Set:Item
						mscorlib::System::Object  get_Item(mscorlib::System::Object key) const;
						void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
