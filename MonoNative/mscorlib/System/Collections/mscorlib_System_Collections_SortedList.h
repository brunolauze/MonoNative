#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_SORTEDLIST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_SORTEDLIST_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>

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

			class SortedList
				: public mscorlib::System::Object
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Collections::IDictionary
			{
			public:
				SortedList()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList");
				};
			
				SortedList(mscorlib::System::Int32 initialCapacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &initialCapacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList", 1, __parameter_types__, __parameters__);
				};
			
				SortedList(mscorlib::System::Collections::IComparer comparer, mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = (MonoObject*)comparer;
					__parameters__[1] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList", 2, __parameter_types__, __parameters__);
				};
			
				SortedList(mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList", 1, __parameter_types__, __parameters__);
				};
			
				SortedList(mscorlib::System::Collections::IDictionary d)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameters__[0] = (MonoObject*)d;
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList", 1, __parameter_types__, __parameters__);
				};
			
				SortedList(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.SortedList"))
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "SortedList", 2, __parameter_types__, __parameters__);
				};
			
				SortedList(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
				};
			
				SortedList(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Collections::IDictionary(nativeObject)
				{
				};
			
				~SortedList()
				{
				};
			

				SortedList & operator=(SortedList &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Add(mscorlib::System::Object key, mscorlib::System::Object value);
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object key);
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				virtual void  Remove(mscorlib::System::Object key);
				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex);
				virtual mscorlib::System::Object  Clone();
				virtual mscorlib::System::Collections::IList  GetKeyList();
				virtual mscorlib::System::Collections::IList  GetValueList();
				virtual void  RemoveAt(mscorlib::System::Int32 index);
				virtual mscorlib::System::Int32  IndexOfKey(mscorlib::System::Object key);
				virtual mscorlib::System::Int32  IndexOfValue(mscorlib::System::Object value);
				virtual mscorlib::System::Boolean  ContainsKey(mscorlib::System::Object key);
				virtual mscorlib::System::Boolean  ContainsValue(mscorlib::System::Object value);
				virtual mscorlib::System::Object  GetByIndex(mscorlib::System::Int32 index);
				virtual void  SetByIndex(mscorlib::System::Int32 index, mscorlib::System::Object value);
				virtual mscorlib::System::Object  GetKey(mscorlib::System::Int32 index);
				static mscorlib::System::Collections::SortedList  Synchronized(mscorlib::System::Collections::SortedList list);
				virtual void  TrimToSize();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
				__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
				__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;
				__declspec(property(get=get_IsFixedSize)) mscorlib::System::Boolean  IsFixedSize;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_Keys)) mscorlib::System::Collections::ICollection  Keys;
				__declspec(property(get=get_Values)) mscorlib::System::Collections::ICollection  Values;
				__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

				//Get Set Properties Methods
				//	Get:Count
				mscorlib::System::Int32  get_Count() const;

				//	Get:IsSynchronized
				mscorlib::System::Boolean  get_IsSynchronized() const;

				//	Get:SyncRoot
				mscorlib::System::Object  get_SyncRoot() const;

				//	Get:IsFixedSize
				mscorlib::System::Boolean  get_IsFixedSize() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

				//	Get:Keys
				mscorlib::System::Collections::ICollection  get_Keys() const;

				//	Get:Values
				mscorlib::System::Collections::ICollection  get_Values() const;

				//	Get/Set:Item
				mscorlib::System::Object  get_Item(mscorlib::System::Object key) const;
				void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

				//	Get/Set:Capacity
				mscorlib::System::Int32  get_Capacity() const;
				void set_Capacity(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
