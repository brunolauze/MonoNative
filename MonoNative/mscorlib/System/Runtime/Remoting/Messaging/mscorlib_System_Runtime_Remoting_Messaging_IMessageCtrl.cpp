#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					//Public Methods
					void IMessageCtrl::Cancel(mscorlib::System::Int32 msToCancel)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msToCancel).name());
							__parameters__[0] = &msToCancel;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMessageCtrl", 0, NULL, "Cancel", __mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
