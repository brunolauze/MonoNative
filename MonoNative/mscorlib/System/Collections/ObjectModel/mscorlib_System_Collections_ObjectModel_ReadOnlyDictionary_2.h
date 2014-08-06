#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYDICTIONARY_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYDICTIONARY_2_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IDictionary_2.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_KeyValuePair_2.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyDictionary_2.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace ObjectModel
			{

				template<typename TKey, typename TValue>
				class ReadOnlyDictionary
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IDictionary
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					template<typename TKey, typename TValue>
					class ValueCollection
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Collections::Generic::IEnumerable<TValue>
						, public virtual mscorlib::System::Collections::ICollection
						, public virtual mscorlib::System::Collections::IEnumerable
						, public virtual mscorlib::System::Collections::Generic::ICollection<TValue>
					{
					public:
						ValueCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Collections::Generic::IEnumerable<TValue>(NULL)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						, mscorlib::System::Collections::Generic::ICollection<TValue>(NULL)
						{
						};
					
						ValueCollection(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerable<TValue>(nativeObject)
						, mscorlib::System::Collections::ICollection(nativeObject)
						, mscorlib::System::Collections::IEnumerable(nativeObject)
						, mscorlib::System::Collections::Generic::ICollection<TValue>(nativeObject)
						{
						};
					
						~ValueCollection()
						{
						};
					

						ValueCollection & operator=(ValueCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  CopyTo(std::vector<TValue*> array, mscorlib::System::Int32 arrayIndex)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "", "TValue")), 1));
							__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
							__parameters__[0] = Global::FromArray<TValue*>(array, typeid(TValue).name());
							__parameters__[1] = &arrayIndex;
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+ValueCollection", 2, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						};
						
						virtual mscorlib::System::Collections::Generic::IEnumerator<TValue> * GetEnumerator()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+ValueCollection", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
							return new mscorlib::System::Collections::Generic::IEnumerator<TValue>(__result__);
						};
						
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

						//Get Set Properties Methods
						//	Get:Count
						mscorlib::System::Int32  get_Count() const
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+ValueCollection", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					template<typename TKey, typename TValue>
					class KeyCollection
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Collections::Generic::ICollection<TKey>
						, public virtual mscorlib::System::Collections::Generic::IEnumerable<TKey>
						, public virtual mscorlib::System::Collections::ICollection
						, public virtual mscorlib::System::Collections::IEnumerable
					{
					public:
						KeyCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Collections::Generic::ICollection<TKey>(NULL)
						, mscorlib::System::Collections::Generic::IEnumerable<TKey>(NULL)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						{
						};
					
						KeyCollection(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Collections::Generic::ICollection<TKey>(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerable<TKey>(nativeObject)
						, mscorlib::System::Collections::ICollection(nativeObject)
						, mscorlib::System::Collections::IEnumerable(nativeObject)
						{
						};
					
						~KeyCollection()
						{
						};
					

						KeyCollection & operator=(KeyCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  CopyTo(std::vector<TKey*> array, mscorlib::System::Int32 arrayIndex)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "", "TKey")), 1));
							__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
							__parameters__[0] = Global::FromArray<TKey*>(array, typeid(TKey).name());
							__parameters__[1] = &arrayIndex;
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+KeyCollection", 2, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						};
						
						virtual mscorlib::System::Collections::Generic::IEnumerator<TKey> * GetEnumerator()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+KeyCollection", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
							return new mscorlib::System::Collections::Generic::IEnumerator<TKey>(__result__);
						};
						
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

						//Get Set Properties Methods
						//	Get:Count
						mscorlib::System::Int32  get_Count() const
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2+KeyCollection", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					ReadOnlyDictionary(mscorlib::System::Collections::Generic::IDictionary<TKey,TValue> dictionary)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.ObjectModel.ReadOnlyDictionary`2"))
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IDictionary`2");
						__parameters__[0] = (MonoObject*)dictionary;
						__native_object__ = Global::New("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, __parameters__);
					};
				
					ReadOnlyDictionary(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					ReadOnlyDictionary(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IDictionary(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~ReadOnlyDictionary()
					{
					};
				

					ReadOnlyDictionary & operator=(ReadOnlyDictionary &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  ContainsKey(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "ContainsKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "TryGetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>> * GetEnumerator()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Item)) TValue  Item[];

					//Get Set Properties Methods
					//	Get:Item
					TValue  get_Item(TKey key) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return TValue(__result__);
					}

					//	Get:Keys
					mscorlib::System::Collections::ObjectModel::ReadOnlyDictionary<TKey,TValue>::KeyCollection<TKey,TValue>  get_Keys() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ObjectModel::ReadOnlyDictionary<TKey,TValue>::KeyCollection<TKey,TValue>(__result__);
					}

					//	Get:Values
					mscorlib::System::Collections::ObjectModel::ReadOnlyDictionary<TKey,TValue>::ValueCollection<TKey,TValue>  get_Values() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "get_Values", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ObjectModel::ReadOnlyDictionary<TKey,TValue>::ValueCollection<TKey,TValue>(__result__);
					}

					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.ObjectModel", "ReadOnlyDictionary`2", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
