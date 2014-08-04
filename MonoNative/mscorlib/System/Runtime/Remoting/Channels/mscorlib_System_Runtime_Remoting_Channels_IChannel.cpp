#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannel.h>
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
					mscorlib::System::String IChannel::Parse(mscorlib::System::String url, mscorlib::System::String objectURI)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(url).name());
							__parameter_types__[1] = Global::GetType(typeid(objectURI).name());
							__parameters__[0] = (MonoObject*)url;
							__parameters__[1] = (MonoObject*)objectURI;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannel", 0, NULL, "Parse", __mscorlib_System_Runtime_Remoting_Channels_IChannel, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:ChannelName
					mscorlib::System::String  IChannel::get_ChannelName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannel", 0, NULL, "get_ChannelName", __mscorlib_System_Runtime_Remoting_Channels_IChannel, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:ChannelPriority
					mscorlib::System::Int32  IChannel::get_ChannelPriority()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IChannel", 0, NULL, "get_ChannelPriority", __mscorlib_System_Runtime_Remoting_Channels_IChannel, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}



				}
			}
		}
	}
}
