#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>



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

					Property<std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*> , mscorlib::System::Runtime::Remoting::Channels::ChannelServices> mscorlib::System::Runtime::Remoting::Channels::ChannelServices::RegisteredChannels(&mscorlib::System::Runtime::Remoting::Channels::ChannelServices::get_RegisteredChannels, &mscorlib::System::Runtime::Remoting::Channels::ChannelServices::set_RegisteredChannels);
					//Public Methods
					mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink ChannelServices::CreateServerChannelSinkChain(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider provider, mscorlib::System::Runtime::Remoting::Channels::IChannelReceiver channel)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(provider).name());
							__parameter_types__[1] = Global::GetType(typeid(channel).name());
							__parameters__[0] = (MonoObject*)provider;
							__parameters__[1] = (MonoObject*)channel;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "CreateServerChannelSinkChain", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink(__result__);
					}

					mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__ ChannelServices::DispatchMessage(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessage replyMsg)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(sinkStack).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameter_types__[2] = Global::GetType(typeid(replyMsg).name());
							__parameters__[0] = (MonoObject*)sinkStack;
							__parameters__[1] = (MonoObject*)msg;
							__parameters__[2] = (MonoObject*)replyMsg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "DispatchMessage", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
							return static_cast<mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__>(*(mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__*)mono_object_unbox(__result__));
					}

					mscorlib::System::Runtime::Remoting::Channels::IChannel ChannelServices::GetChannel(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "GetChannel", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IChannel(__result__);
					}

					mscorlib::System::Runtime::Remoting::Channels::IChannel ChannelServices::GetChannel(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "GetChannel", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Channels::IChannel(__result__);
					}

					mscorlib::System::Collections::IDictionary ChannelServices::GetChannelSinkProperties(mscorlib::System::Object obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "GetChannelSinkProperties", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Collections::IDictionary(__result__);
					}

					std::vector<mscorlib::System::String*> ChannelServices::GetUrlsForObject(mscorlib::System::MarshalByRefObject obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "GetUrlsForObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

					void ChannelServices::RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(chnl).name());
							__parameters__[0] = (MonoObject*)chnl;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "RegisterChannel", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					void ChannelServices::RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl, mscorlib::System::Boolean ensureSecurity)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(chnl).name());
							__parameter_types__[1] = Global::GetType(typeid(ensureSecurity).name());
							__parameters__[0] = (MonoObject*)chnl;
							__parameters__[1] = reinterpret_cast<void*>(ensureSecurity);
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "RegisterChannel", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessage ChannelServices::SyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "SyncDispatchMessage", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessage(__result__);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl ChannelServices::AsyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameter_types__[1] = Global::GetType(typeid(replySink).name());
							__parameters__[0] = (MonoObject*)msg;
							__parameters__[1] = (MonoObject*)replySink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "AsyncDispatchMessage", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl(__result__);
					}

					void ChannelServices::UnregisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(chnl).name());
							__parameters__[0] = (MonoObject*)chnl;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "UnregisterChannel", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Static Properties Methods
					//	Get:RegisteredChannels
					std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*>  ChannelServices::get_RegisteredChannels()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "ChannelServices", 0, NULL, "get_RegisteredChannels", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Channels::IChannel (__array_item__));
						}
						return __array_result__;
					}

					void ChannelServices::set_RegisteredChannels(std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*>  value)
					{
						throw;
					}




				}
			}
		}
	}
}
