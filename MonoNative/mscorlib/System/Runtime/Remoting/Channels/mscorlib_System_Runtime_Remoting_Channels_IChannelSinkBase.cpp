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

					//Get Set Properties Methods
					//	Get:Properties
					mscorlib::System::Collections::IDictionary  IChannelSinkBase::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelSinkBase", 0, NULL, "get_Properties", __mscorlib_System_Runtime_Remoting_Channels_IChannelSinkBase, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}



				}
			}
		}
	}
}
