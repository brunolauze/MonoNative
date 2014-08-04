#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				void ICriticalNotifyCompletion::UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ICriticalNotifyCompletion", 0, NULL, "UnsafeOnCompleted", __mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
