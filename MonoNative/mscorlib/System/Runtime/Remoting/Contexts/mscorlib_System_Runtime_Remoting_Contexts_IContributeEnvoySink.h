#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEENVOYSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEENVOYSINK_H

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

					class IContributeEnvoySink
					{
					public:
						IContributeEnvoySink(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink = nativeObject;
						};
					
						~IContributeEnvoySink()
						{
						};
					

						IContributeEnvoySink & operator=(IContributeEnvoySink &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink = value.__mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetEnvoySink(mscorlib::System::MarshalByRefObject obj, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
