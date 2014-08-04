#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Threading::HostExecutionContext HostExecutionContext::CreateCopy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "HostExecutionContext", 0, NULL, "CreateCopy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::HostExecutionContext(__result__);
			}


		}
	}
}
