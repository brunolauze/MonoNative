#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink.h>



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

					//Public Methods
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink IContributeClientContextSink::GetClientContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(nextSink).name());
							__parameters__[0] = (MonoObject*)nextSink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContributeClientContextSink", 0, NULL, "GetClientContextSink", __mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}


				}
			}
		}
	}
}
