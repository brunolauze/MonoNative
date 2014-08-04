#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>



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
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink IContributeEnvoySink::GetEnvoySink(mscorlib::System::MarshalByRefObject obj, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameter_types__[1] = Global::GetType(typeid(nextSink).name());
							__parameters__[0] = (MonoObject*)obj;
							__parameters__[1] = (MonoObject*)nextSink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContributeEnvoySink", 0, NULL, "GetEnvoySink", __mscorlib_System_Runtime_Remoting_Contexts_IContributeEnvoySink, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}


				}
			}
		}
	}
}
