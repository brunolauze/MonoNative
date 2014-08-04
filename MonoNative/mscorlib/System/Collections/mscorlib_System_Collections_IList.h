#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ILIST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ILIST_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IList
				: public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
			{
			public:
				IList(MonoObject *nativeObject)
				: mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				{
				};
			
				~IList()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Collections_IList, put=set___mscorlib_System_Collections_IList)) MonoObject *__mscorlib_System_Collections_IList;
				MonoObject* get___mscorlib_System_Collections_IList()
				{
					return IList::__mscorlib_System_Collections_ICollection;
				}
				void set___mscorlib_System_Collections_IList(MonoObject *value)
				{
					IList::__mscorlib_System_Collections_ICollection = value;
				}
				IList & operator=(IList &value) { __mscorlib_System_Collections_IList = value.__mscorlib_System_Collections_IList; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IList; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IList = value; return value; };


				virtual mscorlib::System::Int32  Add(mscorlib::System::Object value);
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object value);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::Object value);
				virtual void  Insert(mscorlib::System::Int32 index, mscorlib::System::Object value);
				virtual void  Remove(mscorlib::System::Object value);
				virtual void  RemoveAt(mscorlib::System::Int32 index);


				//Public Properties
				__declspec(property(get=get_IsFixedSize)) mscorlib::System::Boolean  IsFixedSize;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

				//Get Set Properties Methods
				//	Get:IsFixedSize
				mscorlib::System::Boolean  get_IsFixedSize();

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//	Get/Set:Item
				mscorlib::System::Object  get_Item(mscorlib::System::Int32 index);
				void set_Item(mscorlib::System::Int32 index, mscorlib::System::Object  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
