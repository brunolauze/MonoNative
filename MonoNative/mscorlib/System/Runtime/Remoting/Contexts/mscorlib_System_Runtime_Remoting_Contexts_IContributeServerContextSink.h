#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTESERVERCONTEXTSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTESERVERCONTEXTSINK_H

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

					class IContributeServerContextSink
					{
					public:
						IContributeServerContextSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink = nativeObject;
						};
					
						~IContributeServerContextSink()
						{
						};
					

						IContributeServerContextSink & operator=(IContributeServerContextSink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink = value.__mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetServerContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
