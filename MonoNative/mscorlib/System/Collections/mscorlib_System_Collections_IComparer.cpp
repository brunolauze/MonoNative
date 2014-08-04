#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Int32 IComparer::Compare(mscorlib::System::Object x, mscorlib::System::Object y)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(x).name());
					__parameter_types__[1] = Global::GetType(typeid(y).name());
					__parameters__[0] = (MonoObject*)x;
					__parameters__[1] = (MonoObject*)y;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IComparer", 0, NULL, "Compare", __mscorlib_System_Collections_IComparer, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


		}
	}
}
