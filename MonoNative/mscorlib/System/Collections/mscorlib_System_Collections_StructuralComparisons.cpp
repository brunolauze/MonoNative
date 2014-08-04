#include <mscorlib/System/Collections/mscorlib_System_Collections_StructuralComparisons.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			//Get Set Static Properties Methods
			//	Get:StructuralComparer
			mscorlib::System::Collections::IComparer  StructuralComparisons::get_StructuralComparer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "StructuralComparisons", 0, NULL, "get_StructuralComparer", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IComparer(__result__);
			}


			//	Get:StructuralEqualityComparer
			mscorlib::System::Collections::IEqualityComparer  StructuralComparisons::get_StructuralEqualityComparer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "StructuralComparisons", 0, NULL, "get_StructuralEqualityComparer", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IEqualityComparer(__result__);
			}




		}
	}
}
