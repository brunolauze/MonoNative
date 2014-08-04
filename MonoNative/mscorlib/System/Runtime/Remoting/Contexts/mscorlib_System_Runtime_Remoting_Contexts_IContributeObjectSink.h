#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEOBJECTSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEOBJECTSINK_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>

namespace mscorlib
{
	namespace System
	{

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
				namespace Contexts
				{

					class IContributeObjectSink
					{
					public:
						IContributeObjectSink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink = nativeObject;
						};
					
						~IContributeObjectSink()
						{
						};
					

						IContributeObjectSink & operator=(IContributeObjectSink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink = value.__mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetObjectSink(mscorlib::System::MarshalByRefObject obj, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContributeObjectSink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
