#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink.h>



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
					mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink IContributeDynamicSink::GetDynamicSink()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContributeDynamicSink", 0, NULL, "GetDynamicSink", __mscorlib_System_Runtime_Remoting_Contexts_IContributeDynamicSink, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink(__result__);
					}


				}
			}
		}
	}
}
