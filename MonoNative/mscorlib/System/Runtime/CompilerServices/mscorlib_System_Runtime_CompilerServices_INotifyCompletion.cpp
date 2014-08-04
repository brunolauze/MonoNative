#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_INotifyCompletion.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				void INotifyCompletion::OnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "INotifyCompletion", 0, NULL, "OnCompleted", __mscorlib_System_Runtime_CompilerServices_INotifyCompletion, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
