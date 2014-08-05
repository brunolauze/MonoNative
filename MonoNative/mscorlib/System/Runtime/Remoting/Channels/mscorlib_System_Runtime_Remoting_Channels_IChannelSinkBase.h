#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSINKBASE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSINKBASE_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

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

					class IChannelSinkBase
					{
					public:
						IChannelSinkBase(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase = nativeObject;
						};
					
						~IChannelSinkBase()
						{
						};
					

						IChannelSinkBase & operator=(IChannelSinkBase &value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase = value.__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase = value; return value; };




						//Public Properties
						__declspec(property(get=get_Properties)) mscorlib::System::Collections::IDictionary  Properties;

						//Get Set Properties Methods
						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties() const;

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
