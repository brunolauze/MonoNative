#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ARRAYLIST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ARRAYLIST_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class ArrayList
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Collections::IList
			{
			public:
				ArrayList()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.ArrayList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IList(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "ArrayList");
				};
			
				ArrayList(mscorlib::System::Collections::ICollection c)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.ArrayList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IList(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "ICollection");
					__parameters__[0] = (MonoObject*)c;
					__native_object__ = Global::New("mscorlib", "System.Collections", "ArrayList", 1, __parameter_types__, __parameters__);
				};
			
				ArrayList(mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.ArrayList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IList(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "ArrayList", 1, __parameter_types__, __parameters__);
				};
			
				ArrayList(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IList(NULL)
				{
				};
			
				ArrayList(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Collections::IList(nativeObject)
				{
				};
			
				~ArrayList()
				{
				};
			

				ArrayList & operator=(ArrayList &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(ArrayList &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  Add(mscorlib::System::Object value);
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object item);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::Object value);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  IndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::Object value);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex);
				virtual mscorlib::System::Int32  LastIndexOf(mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
				virtual void  Insert(mscorlib::System::Int32 index, mscorlib::System::Object value);
				virtual void  InsertRange(mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c);
				virtual void  Remove(mscorlib::System::Object obj);
				virtual void  RemoveAt(mscorlib::System::Int32 index);
				virtual void  RemoveRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  Reverse();
				virtual void  Reverse(mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  CopyTo(mscorlib::System::Array array);
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex);
				virtual void  CopyTo(mscorlib::System::Int32 index, mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex, mscorlib::System::Int32 count);
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator(mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  AddRange(mscorlib::System::Collections::ICollection c);
				virtual mscorlib::System::Int32  BinarySearch(mscorlib::System::Object value);
				virtual mscorlib::System::Int32  BinarySearch(mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer);
				virtual mscorlib::System::Int32  BinarySearch(mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer);
				virtual mscorlib::System::Collections::ArrayList  GetRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count);
				virtual void  SetRange(mscorlib::System::Int32 index, mscorlib::System::Collections::ICollection c);
				virtual void  TrimToSize();
				virtual void  Sort();
				virtual void  Sort(mscorlib::System::Collections::IComparer comparer);
				virtual void  Sort(mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Collections::IComparer comparer);
				virtual std::vector<mscorlib::System::Object*>  ToArray();
				virtual mscorlib::System::Array  ToArray(mscorlib::System::Type type);
				virtual mscorlib::System::Object  Clone();
				static mscorlib::System::Collections::ArrayList  Adapter(mscorlib::System::Collections::IList list);
				static mscorlib::System::Collections::ArrayList  Synchronized(mscorlib::System::Collections::ArrayList list);
				static mscorlib::System::Collections::IList  Synchronized(mscorlib::System::Collections::IList list);
				static mscorlib::System::Collections::ArrayList  ReadOnly(mscorlib::System::Collections::ArrayList list);
				static mscorlib::System::Collections::IList  ReadOnly(mscorlib::System::Collections::IList list);
				static mscorlib::System::Collections::ArrayList  FixedSize(mscorlib::System::Collections::ArrayList list);
				static mscorlib::System::Collections::IList  FixedSize(mscorlib::System::Collections::IList list);
				static mscorlib::System::Collections::ArrayList  Repeat(mscorlib::System::Object value, mscorlib::System::Int32 count);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

				//Get Set Properties Methods
				//	Get/Set:Item
				mscorlib::System::Object  get_Item(mscorlib::System::Int32 index) const;
				void set_Item(mscorlib::System::Int32 index, mscorlib::System::Object  value);

				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get/Set:Capacity
				mscorlib::System::Int32  get_Capacity() const;
				void set_Capacity(mscorlib::System::Int32  value);

				//	Get:IsFixedSize
				mscorlib::System::Boolean  get_IsFixedSize() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized() const;

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
