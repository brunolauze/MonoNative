#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION_2_H

#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_Collection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEqualityComparer_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace ObjectModel
			{

				template<typename TKey, typename TItem>
				class KeyedCollection
					: public mscorlib::System::Collections::ObjectModel::Collection<TItem>
					, public virtual mscorlib::System::Collections::Generic::IList<TItem>
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyList<TItem>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<TItem>
					, public virtual mscorlib::System::Collections::Generic::ICollection<TItem>
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<TItem>
					, public virtual mscorlib::System::Collections::IList
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					KeyedCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Collections::ObjectModel::Collection<TItem>(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::IList<TItem>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyList<TItem>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<TItem>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<TItem>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<TItem>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					KeyedCollection(MonoObject *nativeObject)
					: mscorlib::System::Collections::ObjectModel::Collection<TItem>(nativeObject)
					, mscorlib::System::Collections::Generic::IList<TItem>(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyList<TItem>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<TItem>(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<TItem>(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<TItem>(nativeObject)
					, mscorlib::System::Collections::IList(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~KeyedCollection()
					{
					};
				

					KeyedCollection & operator=(KeyedCollection &value) { mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__; };
					MonoObject* operator=(MonoObject* value) { return mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__ = value; };


					mscorlib::System::Boolean  Contains(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "KeyedCollection`2", 2, __generic_types__, "Contains", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  Remove(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "KeyedCollection`2", 2, __generic_types__, "Remove", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__; };


					//Public Properties
					__declspec(property(get=get_Comparer)) mscorlib::System::Collections::Generic::IEqualityComparer<TKey>  Comparer;
					__declspec(property(get=get_Item)) TItem  Item[];

					//Get Set Properties Methods
					//	Get:Comparer
					mscorlib::System::Collections::Generic::IEqualityComparer<TKey>  get_Comparer() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "KeyedCollection`2", 2, __generic_types__, "get_Comparer", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::IEqualityComparer<TKey>(__result__);
					}

					//	Get:Item
					TItem  get_Item(TKey key) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "KeyedCollection`2", 2, __generic_types__, "get_Item", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 1, __parameter_types__, __parameters__, NULL);
						return TItem(__result__);
					}

					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "Collection`1[TItem]", 1, __generic_types__, "get_Count", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get/Set:Item
					TItem  get_Item(mscorlib::System::Int32 index) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TItem).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "Collection`1[TItem]", 1, __generic_types__, "get_Item", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 1, __parameter_types__, __parameters__, NULL);
						return TItem(__result__);
					}
					void set_Item(mscorlib::System::Int32 index, TItem  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TItem).name());
						Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "Collection`1[TItem]", 1, __generic_types__, "set_Item", mscorlib::System::Collections::ObjectModel::Collection<TItem>::__native_object__, 2, __parameter_types__, __parameters__, NULL);
					}
				

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
