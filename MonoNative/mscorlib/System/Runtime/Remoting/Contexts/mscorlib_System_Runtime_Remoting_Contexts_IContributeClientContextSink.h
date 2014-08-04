#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTECLIENTCONTEXTSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTECLIENTCONTEXTSINK_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>

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

					class IContributeClientContextSink
					{
					public:
						IContributeClientContextSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink = nativeObject;
						};
					
						~IContributeClientContextSink()
						{
						};
					

						IContributeClientContextSink & operator=(IContributeClientContextSink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink = value.__mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetClientContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
