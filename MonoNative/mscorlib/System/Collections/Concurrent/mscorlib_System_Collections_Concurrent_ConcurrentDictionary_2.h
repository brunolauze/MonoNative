#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTDICTIONARY_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTDICTIONARY_2_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_KeyValuePair_2.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEqualityComparer_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IDictionary_2.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Concurrent
			{

				template<typename TKey, typename TValue>
				class ConcurrentDictionary
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>
					, public virtual mscorlib::System::Collections::IDictionary
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					ConcurrentDictionary()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, 0, NULL, NULL);
					};
				
					ConcurrentDictionary(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameters__[0] = (MonoObject*)collection;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = (MonoObject*)collection;
						__parameters__[1] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Int32 capacity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &concurrencyLevel;
						__parameters__[1] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> collection, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = &concurrencyLevel;
						__parameters__[1] = (MonoObject*)collection;
						__parameters__[2] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::System::Int32 concurrencyLevel, mscorlib::System::Int32 capacity, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentDictionary`2"))
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = &concurrencyLevel;
						__parameters__[1] = &capacity;
						__parameters__[2] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ConcurrentDictionary(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					ConcurrentDictionary(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(nativeObject)
					, mscorlib::System::Collections::IDictionary(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~ConcurrentDictionary()
					{
					};
				

					ConcurrentDictionary & operator=(ConcurrentDictionary &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ConcurrentDictionary &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Boolean  TryAdd(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "TryAdd", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					TValue  AddOrUpdate(TKey key, mscorlib::Callback<TValue  (TKey )> addValueFactory, mscorlib::Callback<TValue  (TKey , TValue )> updateValueFactory)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(addValueFactory).name());
						__parameter_types__[2] = Global::GetType(typeid(updateValueFactory).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = &addValueFactory;
						__parameters__[2] = &updateValueFactory;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "AddOrUpdate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					TValue  AddOrUpdate(TKey key, TValue addValue, mscorlib::Callback<TValue  (TKey , TValue )> updateValueFactory)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(addValue).name());
						__parameter_types__[2] = Global::GetType(typeid(updateValueFactory).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)addValue;
						__parameters__[2] = &updateValueFactory;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "AddOrUpdate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					virtual mscorlib::System::Boolean  TryGetValue(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "TryGetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TryUpdate(TKey key, TValue newValue, TValue comparisonValue)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(newValue).name());
						__parameter_types__[2] = Global::GetType(typeid(comparisonValue).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)newValue;
						__parameters__[2] = (MonoObject*)comparisonValue;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "TryUpdate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					TValue  GetOrAdd(TKey key, mscorlib::Callback<TValue  (TKey )> valueFactory)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(valueFactory).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = &valueFactory;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "GetOrAdd", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					TValue  GetOrAdd(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "GetOrAdd", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					};
					
					mscorlib::System::Boolean  TryRemove(TKey key, TValue value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "TryRemove", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Boolean  ContainsKey(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "ContainsKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					std::vector<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>*>  ToArray()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "ToArray", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue> (__array_item__));
						}
						return __array_result__;
					};
					
					virtual void  Clear()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "Clear", __native_object__, 0, NULL, NULL, NULL);
					};
					
					virtual mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> * GetEnumerator()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

					//Get Set Properties Methods
					//	Get/Set:Item
					TValue  get_Item(TKey key) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					}
					void set_Item(TKey key, TValue  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)key;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get:IsEmpty
					mscorlib::System::Boolean  get_IsEmpty() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "get_IsEmpty", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//	Get:Keys
					mscorlib::System::Collections::Generic::ICollection<TKey>  get_Keys() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::ICollection<TKey>(__result__);
					}

					//	Get:Values
					mscorlib::System::Collections::Generic::ICollection<TValue>  get_Values() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentDictionary`2", 2, __generic_types__, "get_Values", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::ICollection<TValue>(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
