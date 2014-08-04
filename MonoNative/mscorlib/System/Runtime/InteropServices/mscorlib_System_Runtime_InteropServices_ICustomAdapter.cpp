#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ICustomAdapter.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Object ICustomAdapter::GetUnderlyingObject()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomAdapter", 0, NULL, "GetUnderlyingObject", __mscorlib_System_Runtime_InteropServices_ICustomAdapter, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
