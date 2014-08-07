#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_SERVERCHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_SERVERCHANNELSINKSTACK_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerChannelSink.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

					class ServerChannelSinkStack
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack
					{
					public:
						ServerChannelSinkStack()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.ServerChannelSinkStack"))
						, mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack(NULL)
						, mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "ServerChannelSinkStack");
						};
					
						ServerChannelSinkStack(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack(NULL)
						, mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack(NULL)
						{
						};
					
						ServerChannelSinkStack(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IServerChannelSinkStack(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack(nativeObject)
						{
						};
					
						~ServerChannelSinkStack()
						{
						};
					

						ServerChannelSinkStack & operator=(ServerChannelSinkStack &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ServerChannelSinkStack &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::IO::Stream  GetResponseStream(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers);
						virtual mscorlib::System::Object  Pop(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink);
						virtual void  Push(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);
						virtual void  ServerCallback(mscorlib::System::IAsyncResult ar);
						virtual void  Store(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);
						virtual void  StoreAndDispatch(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);
						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
