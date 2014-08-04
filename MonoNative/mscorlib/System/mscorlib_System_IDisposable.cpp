#include <mscorlib/System/mscorlib_System_IDisposable.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void IDisposable::Dispose()
		{
				Global::InvokeMethod("mscorlib", "System", "IDisposable", 0, NULL, "Dispose", __mscorlib_System_IDisposable, 0, NULL, NULL, NULL);
		}


	}
}
