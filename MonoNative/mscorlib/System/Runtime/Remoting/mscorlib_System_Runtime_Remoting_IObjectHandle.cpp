#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_IObjectHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				mscorlib::System::Object IObjectHandle::Unwrap()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "IObjectHandle", 0, NULL, "Unwrap", __mscorlib_System_Runtime_Remoting_IObjectHandle, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
