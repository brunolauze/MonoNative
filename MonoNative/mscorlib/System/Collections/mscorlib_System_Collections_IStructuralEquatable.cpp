#include <mscorlib/System/Collections/mscorlib_System_Collections_IStructuralEquatable.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Boolean IStructuralEquatable::Equals(mscorlib::System::Object other, mscorlib::System::Collections::IEqualityComparer comparer)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameter_types__[1] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = (MonoObject*)other;
					__parameters__[1] = (MonoObject*)comparer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IStructuralEquatable", 0, NULL, "Equals", __mscorlib_System_Collections_IStructuralEquatable, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 IStructuralEquatable::GetHashCode(mscorlib::System::Collections::IEqualityComparer comparer)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(comparer).name());
					__parameters__[0] = (MonoObject*)comparer;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IStructuralEquatable", 0, NULL, "GetHashCode", __mscorlib_System_Collections_IStructuralEquatable, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


		}
	}
}
