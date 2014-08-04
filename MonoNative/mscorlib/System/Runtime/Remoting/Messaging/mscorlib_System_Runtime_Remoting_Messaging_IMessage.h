#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGE_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class IMessage
					{
					public:
						IMessage(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Messaging_IMessage = nativeObject;
						};
					
						~IMessage()
						{
						};
					

						IMessage & operator=(IMessage &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessage = value.__mscorlib_System_Runtime_Remoting_Messaging_IMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessage = value; return value; };




						//Public Properties
						__declspec(property(get=get_Properties)) mscorlib::System::Collections::IDictionary  Properties;

						//Get Set Properties Methods
						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties();

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMessage;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
