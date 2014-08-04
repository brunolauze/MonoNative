#include <mscorlib/System/mscorlib_System_ICloneable.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Object ICloneable::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ICloneable", 0, NULL, "Clone", __mscorlib_System_ICloneable, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}


	}
}
