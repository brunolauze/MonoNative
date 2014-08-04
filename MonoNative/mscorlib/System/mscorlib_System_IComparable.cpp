#include <mscorlib/System/mscorlib_System_IComparable.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 IObjectComparable::CompareTo(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IComparable", 0, NULL, "CompareTo", __mscorlib_System_IComparable, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


	}
}
