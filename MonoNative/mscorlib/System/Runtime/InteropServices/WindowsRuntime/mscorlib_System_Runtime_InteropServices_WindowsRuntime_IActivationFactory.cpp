#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					//Public Methods
					mscorlib::System::Object IActivationFactory::ActivateInstance()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "IActivationFactory", 0, NULL, "ActivateInstance", __mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory, 0, NULL, NULL, NULL);
							return mscorlib::System::Object(__result__);
					}


				}
			}
		}
	}
}
