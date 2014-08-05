#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_DictionaryEntry.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Get Set Properties Methods
			//	Get:Entry
			mscorlib::System::Collections::DictionaryEntry  IDictionaryEnumerator::get_Entry() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionaryEnumerator", 0, NULL, "get_Entry", __mscorlib_System_Collections_IDictionaryEnumerator, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::DictionaryEntry(__result__);
			}


			//	Get:Key
			mscorlib::System::Object  IDictionaryEnumerator::get_Key() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionaryEnumerator", 0, NULL, "get_Key", __mscorlib_System_Collections_IDictionaryEnumerator, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:Value
			mscorlib::System::Object  IDictionaryEnumerator::get_Value() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "IDictionaryEnumerator", 0, NULL, "get_Value", __mscorlib_System_Collections_IDictionaryEnumerator, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
