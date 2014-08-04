#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Boolean IEqualityComparer::Equals(mscorlib::System::Object x, mscorlib::System::Object y)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(x).name());
					__parameter_types__[1] = Global::GetType(typeid(y).name());
					__parameters__[0] = (MonoObject*)x;
					__parameters__[1] = (MonoObject*)y;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IEqualityComparer", 0, NULL, "Equals", __mscorlib_System_Collections_IEqualityComparer, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 IEqualityComparer::GetHashCode(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IEqualityComparer", 0, NULL, "GetHashCode", __mscorlib_System_Collections_IEqualityComparer, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


		}
	}
}
