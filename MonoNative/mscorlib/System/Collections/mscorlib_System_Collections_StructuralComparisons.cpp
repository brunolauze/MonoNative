#include <mscorlib/System/Collections/mscorlib_System_Collections_StructuralComparisons.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			Property<mscorlib::System::Collections::IComparer , mscorlib::System::Collections::StructuralComparisons> mscorlib::System::Collections::StructuralComparisons::StructuralComparer(&mscorlib::System::Collections::StructuralComparisons::get_StructuralComparer, &mscorlib::System::Collections::StructuralComparisons::set_StructuralComparer);
			Property<mscorlib::System::Collections::IEqualityComparer , mscorlib::System::Collections::StructuralComparisons> mscorlib::System::Collections::StructuralComparisons::StructuralEqualityComparer(&mscorlib::System::Collections::StructuralComparisons::get_StructuralEqualityComparer, &mscorlib::System::Collections::StructuralComparisons::set_StructuralEqualityComparer);
			//Public Methods
			//Get Set Static Properties Methods
			//	Get:StructuralComparer
			mscorlib::System::Collections::IComparer  StructuralComparisons::get_StructuralComparer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "StructuralComparisons", 0, NULL, "get_StructuralComparer", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IComparer(__result__);
			}

			void StructuralComparisons::set_StructuralComparer(mscorlib::System::Collections::IComparer  value)
			{
				throw;
			}


			//	Get:StructuralEqualityComparer
			mscorlib::System::Collections::IEqualityComparer  StructuralComparisons::get_StructuralEqualityComparer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "StructuralComparisons", 0, NULL, "get_StructuralEqualityComparer", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::IEqualityComparer(__result__);
			}

			void StructuralComparisons::set_StructuralEqualityComparer(mscorlib::System::Collections::IEqualityComparer  value)
			{
				throw;
			}




		}
	}
}
