#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_IClientChannelSink.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Channels
				{

					//Public Methods
					mscorlib::System::Object IClientChannelSinkStack::Pop(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameters__[0] = (MonoObject*)sink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkStack", 0, NULL, "Pop", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void IClientChannelSinkStack::Push(mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink, mscorlib::System::Object state)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(sink).name());
							__parameter_types__[1] = Global::GetType(typeid(state).name());
							__parameters__[0] = (MonoObject*)sink;
							__parameters__[1] = (MonoObject*)state;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Channels", "IClientChannelSinkStack", 0, NULL, "Push", __mscorlib_System_Runtime_Remoting_Channels_IClientChannelSinkStack, 2, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
