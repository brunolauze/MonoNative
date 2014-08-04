#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					std::vector<mscorlib::System::String*> IChannelReceiver::GetUrlsForUri(mscorlib::System::String objectURI)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(objectURI).name());
							__parameters__[0] = (MonoObject*)objectURI;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiver", 0, NULL, "GetUrlsForUri", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver, 1, __parameter_types__, __parameters__, NULL);
							MonoArray *__array_ptr__ = (MonoArray*)__result__;
							uintptr_t __array_length__ = mono_array_length(__array_ptr__);
							std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
							for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
							{
								MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
								__array_result__.push_back(new mscorlib::System::String (__array_item__));
							}
							return __array_result__;
					}

					void IChannelReceiver::StartListening(mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiver", 0, NULL, "StartListening", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver, 1, __parameter_types__, __parameters__, NULL);
					}

					void IChannelReceiver::StopListening(mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiver", 0, NULL, "StopListening", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:ChannelData
					mscorlib::System::Object  IChannelReceiver::get_ChannelData()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannelReceiver", 0, NULL, "get_ChannelData", __mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
