#include <mscorlib/System/Runtime/mscorlib_System_Runtime_MemoryFailPoint.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			//Public Methods
			void MemoryFailPoint::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Runtime", "MemoryFailPoint", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}


		}
	}
}
