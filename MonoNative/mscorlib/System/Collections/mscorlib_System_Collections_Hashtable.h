#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_HASHTABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_HASHTABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IHashCodeProvider.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

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
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class Hashtable
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Collections::ICollection
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Collections::IEnumerable
				, public virtual mscorlib::System::Collections::IDictionary
			{
			public:
				Hashtable()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable");
				};
			
				Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IHashCodeProvider");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = &capacity;
					__parameters__[1] = &loadFactor;
					__parameters__[2] = (MonoObject*)hcp;
					__parameters__[3] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 4, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameters__[0] = &capacity;
					__parameters__[1] = &loadFactor;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 2, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Int32 capacity)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &capacity;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 1, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IHashCodeProvider");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = &capacity;
					__parameters__[1] = (MonoObject*)hcp;
					__parameters__[2] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 3, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IHashCodeProvider");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = &loadFactor;
					__parameters__[2] = (MonoObject*)hcp;
					__parameters__[3] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 4, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = &loadFactor;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 2, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameters__[0] = (MonoObject*)d;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 1, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IHashCodeProvider");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = (MonoObject*)hcp;
					__parameters__[2] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 3, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IHashCodeProvider hcp, mscorlib::System::Collections::IComparer comparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IHashCodeProvider");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IComparer");
					__parameters__[0] = (MonoObject*)hcp;
					__parameters__[1] = (MonoObject*)comparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 2, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Collections::IEqualityComparer equalityComparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IEqualityComparer");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = (MonoObject*)equalityComparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 2, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IDictionary d, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IEqualityComparer equalityComparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IDictionary");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IEqualityComparer");
					__parameters__[0] = (MonoObject*)d;
					__parameters__[1] = &loadFactor;
					__parameters__[2] = (MonoObject*)equalityComparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 3, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Collections::IEqualityComparer equalityComparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections", "IEqualityComparer");
					__parameters__[0] = (MonoObject*)equalityComparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 1, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Collections::IEqualityComparer equalityComparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections", "IEqualityComparer");
					__parameters__[0] = &capacity;
					__parameters__[1] = (MonoObject*)equalityComparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 2, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::System::Int32 capacity, mscorlib::System::Single loadFactor, mscorlib::System::Collections::IEqualityComparer equalityComparer)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Hashtable"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Single");
					__parameter_types__[2] = Global::GetType("mscorlib", "System.Collections", "IEqualityComparer");
					__parameters__[0] = &capacity;
					__parameters__[1] = &loadFactor;
					__parameters__[2] = (MonoObject*)equalityComparer;
					__native_object__ = Global::New("mscorlib", "System.Collections", "Hashtable", 3, __parameter_types__, __parameters__);
				};
			
				Hashtable(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Collections::ICollection(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Collections::IEnumerable(NULL)
				, mscorlib::System::Collections::IDictionary(NULL)
				{
				};
			
				Hashtable(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Collections::ICollection(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Collections::IEnumerable(nativeObject)
				, mscorlib::System::Collections::IDictionary(nativeObject)
				{
				};
			
				~Hashtable()
				{
				};
			

				Hashtable & operator=(Hashtable &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Hashtable &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 arrayIndex);
				virtual void  Add(mscorlib::System::Object key, mscorlib::System::Object value);
				virtual void  Clear();
				virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object key);
				virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
				virtual void  Remove(mscorlib::System::Object key);
				virtual mscorlib::System::Boolean  ContainsKey(mscorlib::System::Object key);
				virtual mscorlib::System::Boolean  ContainsValue(mscorlib::System::Object value);
				virtual mscorlib::System::Object  Clone();
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual void  OnDeserialization(mscorlib::System::Object sender);
				static mscorlib::System::Collections::Hashtable  Synchronized(mscorlib::System::Collections::Hashtable table);
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

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
