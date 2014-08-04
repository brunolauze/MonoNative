#include <mscorlib/System/Collections/mscorlib_System_Collections_ReadOnlyCollectionBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Collections::IEnumerator* ReadOnlyCollectionBase::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ReadOnlyCollectionBase", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  ReadOnlyCollectionBase::get_Count()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "ReadOnlyCollectionBase", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
