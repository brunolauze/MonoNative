#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKSTACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKSTACK_H

#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

					class IClientChannelSink;
					

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

					class IClientChannelSinkStack
						: public virtual mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack
					{
					public:
						IClientChannelSinkStack(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Channels::IClientResponseChannelSinkStack(nativeObject)
						{
						};
					
						~IClientChannelSinkStack()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack, put=set___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack)) MonoObject *__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack() const
						{
							return IClientChannelSinkStack::__mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack;
						}
						void set___mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack(MonoObject *value)
						{
							IClientChannelSinkStack::__mscorlib_System_Runtime_Remoting_Channels_IClientResponseChannelSinkStack = value;
						}
						IClientChannelSinkStack & operator=(IClientChannelSinkStack &value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack = value.__mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack = value; return value; };


						virtual mscorlib::System::Object  Pop(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink);
						virtual void  Push(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink, mscorlib::System::Object state);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
