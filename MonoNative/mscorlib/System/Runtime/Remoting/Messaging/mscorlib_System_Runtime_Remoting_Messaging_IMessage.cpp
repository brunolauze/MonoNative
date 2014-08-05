#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>



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

					//Get Set Properties Methods
					//	Get:Properties
					mscorlib::System::Collections::IDictionary  IMessage::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMessage", 0, NULL, "get_Properties", __mscorlib_System_Runtime_Remoting_Messaging_IMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}



				}
			}
		}
	}
}
