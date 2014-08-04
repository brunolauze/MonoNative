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

					//Public Methods
					void IDynamicMessageSink::ProcessMessageFinish(mscorlib::System::Runtime::Remoting::Messaging::IMessage replyMsg, mscorlib::System::Boolean bCliSide, mscorlib::System::Boolean bAsync)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(replyMsg).name());
							__parameter_types__[1] = Global::GetType(typeid(bCliSide).name());
							__parameter_types__[2] = Global::GetType(typeid(bAsync).name());
							__parameters__[0] = (MonoObject*)replyMsg;
							__parameters__[1] = reinterpret_cast<void*>(bCliSide);
							__parameters__[2] = reinterpret_cast<void*>(bAsync);
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IDynamicMessageSink", 0, NULL, "ProcessMessageFinish", __mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink, 3, __parameter_types__, __parameters__, NULL);
					}

					void IDynamicMessageSink::ProcessMessageStart(mscorlib::System::Runtime::Remoting::Messaging::IMessage reqMsg, mscorlib::System::Boolean bCliSide, mscorlib::System::Boolean bAsync)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(reqMsg).name());
							__parameter_types__[1] = Global::GetType(typeid(bCliSide).name());
							__parameter_types__[2] = Global::GetType(typeid(bAsync).name());
							__parameters__[0] = (MonoObject*)reqMsg;
							__parameters__[1] = reinterpret_cast<void*>(bCliSide);
							__parameters__[2] = reinterpret_cast<void*>(bAsync);
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IDynamicMessageSink", 0, NULL, "ProcessMessageStart", __mscorlib_System_Runtime_Remoting_Contexts_IDynamicMessageSink, 3, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
