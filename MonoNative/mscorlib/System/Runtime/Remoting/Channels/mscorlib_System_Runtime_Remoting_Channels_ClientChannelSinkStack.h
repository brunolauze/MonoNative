#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CLIENTCHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_CLIENTCHANNELSINKSTACK_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ITransportHeaders.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink.h>

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

		class Exception;
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

					class ClientChannelSinkStack
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack
						, public virtual mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack
					{
					public:
						ClientChannelSinkStack()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.ClientChannelSinkStack"))
						, mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack(NULL)
						, mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack");
						};
					
						ClientChannelSinkStack(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Channels.ClientChannelSinkStack"))
						, mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack(NULL)
						, mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMessageSink");
							__parameters__[0] = (MonoObject*)replySink;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Channels", "ClientChannelSinkStack", 1, __parameter_types__, __parameters__);
						};
					
						ClientChannelSinkStack(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack(NULL)
						, mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack(NULL)
						{
						};
					
						ClientChannelSinkStack(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack(nativeObject)
						, mscorlib::System::Runtime::Remoting::Channels::IClientChannelSinkStack(nativeObject)
						{
						};
					
						~ClientChannelSinkStack()
						{
						};
					

						ClientChannelSinkStack & operator=(ClientChannelSinkStack &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ClientChannelSinkStack &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  AsyncProcessResponse(mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream);
						virtual void  DispatchException(mscorlib::System::Exception e);
						virtual void  DispatchReplyMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg);
						virtual mscorlib::System::Object  Pop(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink);
						virtual void  Push(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink, mscorlib::System::Object state);
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
