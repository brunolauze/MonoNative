#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IDICTIONARY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IDICTIONARY_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IDictionary
				: public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				IDictionary(MonoObject *nativeObject)
				: mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~IDictionary()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Collections_IDictionary, put=set___mscorlib_System_Collections_IDictionary)) MonoObject *__mscorlib_System_Collections_IDictionary;
				MonoObject* get___mscorlib_System_Collections_IDictionary() const
				{
					return IDictionary::__mscorlib_System_Collections_ICollection;
				}
				void set___mscorlib_System_Collections_IDictionary(MonoObject *value)
				{
					IDictionary::__mscorlib_System_Collections_ICollection = value;
				}
				IDictionary & operator=(IDictionary &value) { __mscorlib_System_Collections_IDictionary = value.__mscorlib_System_Collections_IDictionary; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IDictionary; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IDictionary = value; return value; };


				virtual void  Add(mscorlib::System::Object key, mscorlib::System::Object value);
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object key);
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				virtual void  Remove(mscorlib::System::Object key);


				//Public Properties
				__declspec(property(get=get_IsFixedSize)) mscorlib::System::Boolean  IsFixedSize;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

				//Get Set Properties Methods
				//	Get:IsFixedSize
				mscorlib::System::Boolean  get_IsFixedSize() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get/Set:Item
				mscorlib::System::Object  get_Item(mscorlib::System::Object key) const;
				void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

				//	Get:Keys
				mscorlib::System::Collections::ICollection  get_Keys() const;

				//	Get:Values
				mscorlib::System::Collections::ICollection  get_Values() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
