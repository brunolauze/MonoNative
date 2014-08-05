#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>



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

					//Public Methods
					mscorlib::System::Collections::IEnumerator* ITransportHeaders::GetEnumerator()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ITransportHeaders", 0, NULL, "GetEnumerator", __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders, 0, NULL, NULL, NULL);
							return new mscorlib::System::Collections::IEnumerator(__result__);
					}

					//Get Set Properties Methods
					//	Get/Set:Item
					mscorlib::System::Object  ITransportHeaders::get_Item(mscorlib::System::Object key) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ITransportHeaders", 0, NULL, "get_Item", __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
					}

					void ITransportHeaders::set_Item(mscorlib::System::Object key, mscorlib::System::Object  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ITransportHeaders", 0, NULL, "set_Item", __mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders, 2, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
