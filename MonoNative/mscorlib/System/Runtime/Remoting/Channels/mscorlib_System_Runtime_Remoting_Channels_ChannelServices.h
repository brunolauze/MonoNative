#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannel.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkProvider.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IChannelReceiver.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ServerProcessing.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class MarshalByRefObject;
		

	}
}
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

					class ChannelServices
						: public mscorlib::System::Object
					{
					public:
						ChannelServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						ChannelServices(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~ChannelServices()
						{
						};
					

						ChannelServices & operator=(ChannelServices &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ChannelServices &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink  CreateServerChannelSinkChain(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkProvider provider, mscorlib::System::Runtime::Remoting::Channels::IChannelReceiver channel);
						static mscorlib::System::Runtime::Remoting::Channels::ServerProcessing::__ENUM__  DispatchMessage(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack sinkStack, mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessage replyMsg);
						static mscorlib::System::Runtime::Remoting::Channels::IChannel  GetChannel(mscorlib::System::String name);
						static mscorlib::System::Runtime::Remoting::Channels::IChannel  GetChannel(const char *name);
						static mscorlib::System::Collections::IDictionary  GetChannelSinkProperties(mscorlib::System::Object obj);
						static std::vector<mscorlib::System::String*>  GetUrlsForObject(mscorlib::System::MarshalByRefObject obj);
						static void  RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl);
						static void  RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl, mscorlib::System::Boolean ensureSecurity);
						static mscorlib::System::Runtime::Remoting::Messaging::IMessage  SyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);
						static mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl  AsyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink);
						static void  UnregisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel chnl);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Static Properties
						static Property<std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*> , mscorlib::System::Runtime::Remoting::Channels::ChannelServices> RegisteredChannels;

						//Get Set Static Properties Methods
						//	Get:RegisteredChannels
						static std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*>  get_RegisteredChannels();
						static void set_RegisteredChannels(std::vector<mscorlib::System::Runtime::Remoting::Channels::IChannel*>  value);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
