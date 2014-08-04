#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEDYNAMICSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEDYNAMICSINK_H

#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink.h>

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

					class IContributeDynamicSink
					{
					public:
						IContributeDynamicSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink = nativeObject;
						};
					
						~IContributeDynamicSink()
						{
						};
					

						IContributeDynamicSink & operator=(IContributeDynamicSink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink = value.__mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink  GetDynamicSink();


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
