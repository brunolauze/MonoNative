#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISECURABLECHANNEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISECURABLECHANNEL_H

#include <Global.h>

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

					class ISecurableChannel
					{
					public:
						ISecurableChannel(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel = nativeObject;
						};
					
						~ISecurableChannel()
						{
						};
					

						ISecurableChannel & operator=(ISecurableChannel &value) { __mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel = value.__mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel = value; return value; };




						//Public Properties
						__declspec(property(get=get_IsSecured, put=set_IsSecured)) mscorlib::System::Boolean  IsSecured;

						//Get Set Properties Methods
						//	Get/Set:IsSecured
						mscorlib::System::Boolean  get_IsSecured();
						void set_IsSecured(mscorlib::System::Boolean  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
