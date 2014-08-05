#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Boolean IEnumerator::MoveNext()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IEnumerator", 0, NULL, "MoveNext", __mscorlib_System_Collections_IEnumerator, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void IEnumerator::Reset()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "IEnumerator", 0, NULL, "Reset", __mscorlib_System_Collections_IEnumerator, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Current
			mscorlib::System::Object  IEnumerator::get_Current() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IEnumerator", 0, NULL, "get_Current", __mscorlib_System_Collections_IEnumerator, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
