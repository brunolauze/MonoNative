#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsImpersonationContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				void WindowsImpersonationContext::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsImpersonationContext", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				void WindowsImpersonationContext::Undo()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsImpersonationContext", 0, NULL, "Undo", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
