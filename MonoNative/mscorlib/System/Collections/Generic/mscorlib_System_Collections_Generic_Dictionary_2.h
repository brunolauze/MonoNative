#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_DICTIONARY_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_DICTIONARY_2_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEqualityComparer_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IDictionary_2.h>
#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_KeyValuePair_2.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyDictionary_2.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename TKey, typename TValue>
				class Dictionary
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>
					, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Collections::IDictionary
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>
					, public virtual mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
				{
				public:
					template<typename TKey, typename TValue>
					class ValueCollection
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Collections::Generic::IEnumerable<TValue>
						, public virtual mscorlib::System::Collections::ICollection
						, public virtual mscorlib::System::Collections::Generic::ICollection<TValue>
						, public virtual mscorlib::System::Collections::IEnumerable
					{
					public:
						template<typename TKey, typename TValue>
						class Enumerator
							: public mscorlib::System::ValueType
							, public virtual mscorlib::System::Collections::IEnumerator
							, public virtual mscorlib::System::Collections::Generic::IEnumerator<TValue>
							, public virtual mscorlib::System::IDisposable
						{
						public:
							Enumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
							: mscorlib::System::ValueType(nativeTypeInfo)
							, mscorlib::System::Collections::IEnumerator(NULL)
							, mscorlib::System::Collections::Generic::IEnumerator<TValue>(NULL)
							, mscorlib::System::IDisposable(NULL)
							{
							};
						
							Enumerator(MonoObject *nativeObject)
							: mscorlib::System::ValueType(nativeObject)
							, mscorlib::System::Collections::IEnumerator(nativeObject)
							, mscorlib::System::Collections::Generic::IEnumerator<TValue>(nativeObject)
							, mscorlib::System::IDisposable(nativeObject)
							{
							};
						
							~Enumerator()
							{
							};
						

							Enumerator & operator=(Enumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
							bool operator==(Enumerator &value) { return mscorlib::System::Object::Equals(value); };
							operator MonoObject*() { return __native_object__; };
							MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


							virtual void  Dispose()
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection+Enumerator", 2, __generic_types__, "Dispose", __native_object__, 0, NULL, NULL, NULL);
							};
							
							virtual mscorlib::System::Boolean  MoveNext()
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection+Enumerator", 2, __generic_types__, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
								return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
							};
							
							virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


							//Public Properties
							__declspec(property(get=get_Current)) TValue  Current;

							//Get Set Properties Methods
							//	Get:Current
							TValue  get_Current() const
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection+Enumerator", 2, __generic_types__, "get_Current", __native_object__, 0, NULL, NULL, NULL);
								return TValue(__result__);
							}

						
						protected:
						
						private:
						
						};
						
						ValueCollection(mscorlib::System::Collections::Generic::Dictionary<TKey,TValue> dictionary)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2+ValueCollection"))
						, mscorlib::System::Collections::Generic::IEnumerable<TValue>(NULL)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::Generic::ICollection<TValue>(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "Dictionary`2");
							__parameters__[0] = (MonoObject*)dictionary;
							__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "ValueCollection", 2, __generic_types__, __parameters__);
						};
					
						ValueCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Collections::Generic::IEnumerable<TValue>(NULL)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::Generic::ICollection<TValue>(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						{
						};
					
						ValueCollection(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerable<TValue>(nativeObject)
						, mscorlib::System::Collections::ICollection(nativeObject)
						, mscorlib::System::Collections::Generic::ICollection<TValue>(nativeObject)
						, mscorlib::System::Collections::IEnumerable(nativeObject)
						{
						};
					
						~ValueCollection()
						{
						};
					

						ValueCollection & operator=(ValueCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(ValueCollection &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  CopyTo(std::vector<TValue*> array, mscorlib::System::Int32 index)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "", "TValue")), 1));
							__parameter_types__[1] = Global::GetType(typeid(index).name());
							__parameters__[0] = Global::FromArray<TValue*>(array, typeid(TValue).name());
							__parameters__[1] = &index;
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection", 2, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						};
						
						Enumerator<TKey,TValue> * GetEnumerator()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection[TKey,TValue]", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
							return new Enumerator<TKey,TValue>(__result__);
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
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+ValueCollection", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					template<typename TKey, typename TValue>
					class KeyCollection
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Collections::ICollection
						, public virtual mscorlib::System::Collections::Generic::ICollection<TKey>
						, public virtual mscorlib::System::Collections::Generic::IEnumerable<TKey>
						, public virtual mscorlib::System::Collections::IEnumerable
					{
					public:
						template<typename TKey, typename TValue>
						class Enumerator
							: public mscorlib::System::ValueType
							, public virtual mscorlib::System::Collections::IEnumerator
							, public virtual mscorlib::System::Collections::Generic::IEnumerator<TKey>
							, public virtual mscorlib::System::IDisposable
						{
						public:
							Enumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
							: mscorlib::System::ValueType(nativeTypeInfo)
							, mscorlib::System::Collections::IEnumerator(NULL)
							, mscorlib::System::Collections::Generic::IEnumerator<TKey>(NULL)
							, mscorlib::System::IDisposable(NULL)
							{
							};
						
							Enumerator(MonoObject *nativeObject)
							: mscorlib::System::ValueType(nativeObject)
							, mscorlib::System::Collections::IEnumerator(nativeObject)
							, mscorlib::System::Collections::Generic::IEnumerator<TKey>(nativeObject)
							, mscorlib::System::IDisposable(nativeObject)
							{
							};
						
							~Enumerator()
							{
							};
						

							Enumerator & operator=(Enumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
							bool operator==(Enumerator &value) { return mscorlib::System::Object::Equals(value); };
							operator MonoObject*() { return __native_object__; };
							MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


							virtual void  Dispose()
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection+Enumerator", 2, __generic_types__, "Dispose", __native_object__, 0, NULL, NULL, NULL);
							};
							
							virtual mscorlib::System::Boolean  MoveNext()
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection+Enumerator", 2, __generic_types__, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
								return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
							};
							
							virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


							//Public Properties
							__declspec(property(get=get_Current)) TKey  Current;

							//Get Set Properties Methods
							//	Get:Current
							TKey  get_Current() const
							{
								MonoType *__generic_types__[2];
								__generic_types__[0] = Global::GetType(typeid(TKey).name());
								__generic_types__[1] = Global::GetType(typeid(TValue).name());
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection+Enumerator", 2, __generic_types__, "get_Current", __native_object__, 0, NULL, NULL, NULL);
								return TKey(__result__);
							}

						
						protected:
						
						private:
						
						};
						
						KeyCollection(mscorlib::System::Collections::Generic::Dictionary<TKey,TValue> dictionary)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2+KeyCollection"))
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::Generic::ICollection<TKey>(NULL)
						, mscorlib::System::Collections::Generic::IEnumerable<TKey>(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "Dictionary`2");
							__parameters__[0] = (MonoObject*)dictionary;
							__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "KeyCollection", 2, __generic_types__, __parameters__);
						};
					
						KeyCollection(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::Generic::ICollection<TKey>(NULL)
						, mscorlib::System::Collections::Generic::IEnumerable<TKey>(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						{
						};
					
						KeyCollection(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Collections::ICollection(nativeObject)
						, mscorlib::System::Collections::Generic::ICollection<TKey>(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerable<TKey>(nativeObject)
						, mscorlib::System::Collections::IEnumerable(nativeObject)
						{
						};
					
						~KeyCollection()
						{
						};
					

						KeyCollection & operator=(KeyCollection &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(KeyCollection &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  CopyTo(std::vector<TKey*> array, mscorlib::System::Int32 index)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "", "TKey")), 1));
							__parameter_types__[1] = Global::GetType(typeid(index).name());
							__parameters__[0] = Global::FromArray<TKey*>(array, typeid(TKey).name());
							__parameters__[1] = &index;
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection", 2, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						};
						
						Enumerator<TKey,TValue> * GetEnumerator()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection[TKey,TValue]", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
							return new Enumerator<TKey,TValue>(__result__);
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
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+KeyCollection", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					template<typename TKey, typename TValue>
					class Enumerator
						: public mscorlib::System::ValueType
						, public virtual mscorlib::System::Collections::IEnumerator
						, public virtual mscorlib::System::Collections::IDictionaryEnumerator
						, public virtual mscorlib::System::IDisposable
						, public virtual mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					{
					public:
						Enumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						, mscorlib::System::Collections::IEnumerator(NULL)
						, mscorlib::System::Collections::IDictionaryEnumerator(NULL)
						, mscorlib::System::IDisposable(NULL)
						, mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
						{
						};
					
						Enumerator(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						, mscorlib::System::Collections::IEnumerator(nativeObject)
						, mscorlib::System::Collections::IDictionaryEnumerator(nativeObject)
						, mscorlib::System::IDisposable(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerator<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
						{
						};
					
						~Enumerator()
						{
						};
					

						Enumerator & operator=(Enumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(Enumerator &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual mscorlib::System::Boolean  MoveNext()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+Enumerator", 2, __generic_types__, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
						};
						
						virtual void  Dispose()
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+Enumerator", 2, __generic_types__, "Dispose", __native_object__, 0, NULL, NULL, NULL);
						};
						
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Current)) mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>  Current;

						//Get Set Properties Methods
						//	Get:Current
						mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>  get_Current() const
						{
							MonoType *__generic_types__[2];
							__generic_types__[0] = Global::GetType(typeid(TKey).name());
							__generic_types__[1] = Global::GetType(typeid(TValue).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2+Enumerator", 2, __generic_types__, "get_Current", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					Dictionary()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, 0, NULL, NULL);
					};
				
					Dictionary(mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, __parameters__);
					};
				
					Dictionary(mscorlib::System::Collections::Generic::IDictionary<TKey,TValue> dictionary)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IDictionary`2");
						__parameters__[0] = (MonoObject*)dictionary;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, __parameters__);
					};
				
					Dictionary(mscorlib::System::Int32 capacity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, __parameters__);
					};
				
					Dictionary(mscorlib::System::Collections::Generic::IDictionary<TKey,TValue> dictionary, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IDictionary`2");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = (MonoObject*)dictionary;
						__parameters__[1] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, __parameters__);
					};
				
					Dictionary(mscorlib::System::Int32 capacity, mscorlib::System::Collections::Generic::IEqualityComparer<TKey> comparer)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.Dictionary`2"))
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEqualityComparer`1");
						__parameters__[0] = &capacity;
						__parameters__[1] = (MonoObject*)comparer;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, __parameters__);
					};
				
					Dictionary(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Collections::IDictionary(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(NULL)
					{
					};
				
					Dictionary(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyDictionary<TKey,TValue>(nativeObject)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Collections::IDictionary(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::IDictionary<TKey,TValue>(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					{
					};
				
					~Dictionary()
					{
					};
				

					Dictionary & operator=(Dictionary &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(Dictionary &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Add(TKey key, TValue value)
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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "Add", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  Clear()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "Clear", __native_object__, 0, NULL, NULL, NULL);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "ContainsKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  ContainsValue(TValue value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "ContainsValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  OnDeserialization(mscorlib::System::Object sender)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sender).name());
						__parameters__[0] = (MonoObject*)sender;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "OnDeserialization", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Boolean  Remove(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "TryGetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::Enumerator<TKey,TValue> * GetEnumerator()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::Enumerator<TKey,TValue>(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:Comparer
					mscorlib::System::Collections::Generic::IEqualityComparer<TKey>  get_Comparer() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "get_Comparer", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::IEqualityComparer<TKey>(__result__);
					}

					//	Get:Keys
					mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::KeyCollection<TKey,TValue>  get_Keys() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "get_Keys", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::KeyCollection<TKey,TValue>(__result__);
					}

					//	Get:Values
					mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::ValueCollection<TKey,TValue>  get_Values() const
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "Dictionary`2", 2, __generic_types__, "get_Values", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::Dictionary<TKey,TValue>::ValueCollection<TKey,TValue>(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
