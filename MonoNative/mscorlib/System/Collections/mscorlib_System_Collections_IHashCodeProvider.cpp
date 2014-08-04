#include <mscorlib/System/Collections/mscorlib_System_Collections_IHashCodeProvider.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Int32 IHashCodeProvider::GetHashCode(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IHashCodeProvider", 0, NULL, "GetHashCode", __mscorlib_System_Collections_IHashCodeProvider, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


		}
	}
}
