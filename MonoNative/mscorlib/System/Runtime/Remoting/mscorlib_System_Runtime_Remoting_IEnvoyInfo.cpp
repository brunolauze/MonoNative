#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IEnvoyInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Get Set Properties Methods
				//	Get/Set:EnvoySinks
				mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  IEnvoyInfo::get_EnvoySinks() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IEnvoyInfo", 0, NULL, "get_EnvoySinks", __mscorlib_System_Runtime_Remoting_IEnvoyInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
				}

				void IEnvoyInfo::set_EnvoySinks(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IEnvoyInfo", 0, NULL, "set_EnvoySinks", __mscorlib_System_Runtime_Remoting_IEnvoyInfo, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
