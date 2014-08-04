#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					class IDynamicMessageSink
					{
					public:
						IDynamicMessageSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink = nativeObject;
						};
					
						~IDynamicMessageSink()
						{
						};
					

						IDynamicMessageSink & operator=(IDynamicMessageSink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink = value.__mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink = value; return value; };


						virtual void  ProcessMessageFinish(mscorlib::System::Runtime::Remoting::Messaging::IMessage replyMsg, mscorlib::System::Boolean bCliSide, mscorlib::System::Boolean bAsync);
						virtual void  ProcessMessageStart(mscorlib::System::Runtime::Remoting::Messaging::IMessage reqMsg, mscorlib::System::Boolean bCliSide, mscorlib::System::Boolean bAsync);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
