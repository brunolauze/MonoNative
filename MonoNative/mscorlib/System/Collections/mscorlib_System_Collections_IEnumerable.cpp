#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Collections::IEnumerator* IEnumerable::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IEnumerable", 0, NULL, "GetEnumerator", __mscorlib_System_Collections_IEnumerable, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}


		}
	}
}
