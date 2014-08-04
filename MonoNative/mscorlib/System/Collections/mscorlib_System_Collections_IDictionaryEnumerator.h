#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IDICTIONARYENUMERATOR_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class DictionaryEntry;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IDictionaryEnumerator
				: public virtual mscorlib::System::Collections::IEnumerator
			{
			public:
				IDictionaryEnumerator(MonoObject *nativeObject)
				: mscorlib::System::Collections::IEnumerator(nativeObject)
				{
				};
			
				~IDictionaryEnumerator()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Collections_IDictionaryEnumerator, put=set___mscorlib_System_Collections_IDictionaryEnumerator)) MonoObject *__mscorlib_System_Collections_IDictionaryEnumerator;
				MonoObject* get___mscorlib_System_Collections_IDictionaryEnumerator()
				{
					return IDictionaryEnumerator::__mscorlib_System_Collections_IEnumerator;
				}
				void set___mscorlib_System_Collections_IDictionaryEnumerator(MonoObject *value)
				{
					IDictionaryEnumerator::__mscorlib_System_Collections_IEnumerator = value;
				}
				IDictionaryEnumerator & operator=(IDictionaryEnumerator &value) { __mscorlib_System_Collections_IDictionaryEnumerator = value.__mscorlib_System_Collections_IDictionaryEnumerator; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IDictionaryEnumerator; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IDictionaryEnumerator = value; return value; };




				//Public Properties
				__declspec(property(get=get_Entry)) mscorlib::System::Collections::DictionaryEntry  Entry;
				__declspec(property(get=get_Key)) mscorlib::System::Object  Key;
				__declspec(property(get=get_Value)) mscorlib::System::Object  Value;

				//Get Set Properties Methods
				//	Get:Entry
				mscorlib::System::Collections::DictionaryEntry  get_Entry();

				//	Get:Key
				mscorlib::System::Object  get_Key();

				//	Get:Value
				mscorlib::System::Object  get_Value();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
