#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel.h>



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
					//	Get/Set:IsSecured
					mscorlib::System::Boolean  ISecurableChannel::get_IsSecured() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ISecurableChannel", 0, NULL, "get_IsSecured", __mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void ISecurableChannel::set_IsSecured(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ISecurableChannel", 0, NULL, "set_IsSecured", __mscorlib_System_Runtime_Remoting_Channels_ISecurableChannel, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
