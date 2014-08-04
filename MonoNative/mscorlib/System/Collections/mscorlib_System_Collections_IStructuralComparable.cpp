#include <mscorlib/System/Collections/mscorlib_System_Collections_IStructuralComparable.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Int32 IStructuralComparable::CompareTo(mscorlib::System::Object other, mscorlib::System::Collections::IComparer comparer)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameter_types__[1] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = (MonoObject*)other;
					__parameters__[1] = (MonoObject*)comparer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IStructuralComparable", 0, NULL, "CompareTo", __mscorlib_System_Collections_IStructuralComparable, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


		}
	}
}
