#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKSTACK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>

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

					class IServerChannelSink;
					

				}
			}
		}
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

					class IServerChannelSinkStack
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack
					{
					public:
						IServerChannelSinkStack(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IServerResponseChannelSinkStack(nativeObject)
						{
						};
					
						~IServerChannelSinkStack()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack, put=set___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack() const
						{
							return IServerChannelSinkStack::__mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack(MonoObject *value)
						{
							IServerChannelSinkStack::__mscorlib_System_Runtime_Remoting_Channels_IServerResponseChannelSinkStack = value;
						}
						IServerChannelSinkStack & operator=(IServerChannelSinkStack &value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack = value.__mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IServerChannelSinkStack = value; return value; };


						virtual mscorlib::System::Object  Pop(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink);
						virtual void  Push(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);
						virtual void  ServerCallback(mscorlib::System::IAsyncResult ar);
						virtual void  Store(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);
						virtual void  StoreAndDispatch(mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
