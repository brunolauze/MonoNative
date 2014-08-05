#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ARRAY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ARRAY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IStructuralComparable.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IStructuralEquatable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IComparer_1.h>
#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Array
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Collections::IStructuralComparable
			, public virtual mscorlib::System::ICloneable
			, public virtual mscorlib::System::Collections::ICollection
			, public virtual mscorlib::System::Collections::IStructuralEquatable
			, public virtual mscorlib::System::Collections::IList
			, public virtual mscorlib::System::Collections::IEnumerable
		{
		public:
			Array(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Collections::IStructuralComparable(NULL)
			, mscorlib::System::ICloneable(NULL)
			, mscorlib::System::Collections::ICollection(NULL)
			, mscorlib::System::Collections::IStructuralEquatable(NULL)
			, mscorlib::System::Collections::IList(NULL)
			, mscorlib::System::Collections::IEnumerable(NULL)
			{
			};
		
			Array(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Collections::IStructuralComparable(nativeObject)
			, mscorlib::System::ICloneable(nativeObject)
			, mscorlib::System::Collections::ICollection(nativeObject)
			, mscorlib::System::Collections::IStructuralEquatable(nativeObject)
			, mscorlib::System::Collections::IList(nativeObject)
			, mscorlib::System::Collections::IEnumerable(nativeObject)
			{
			};
		
			~Array()
			{
			};
		

			Array & operator=(Array &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			mscorlib::System::Int32  GetLength(mscorlib::System::Int32 dimension);
			mscorlib::System::Int64  GetLongLength(mscorlib::System::Int32 dimension);
			mscorlib::System::Int32  GetLowerBound(mscorlib::System::Int32 dimension);
			mscorlib::System::Object  GetValue(std::vector<mscorlib::System::Int32*> indices);
			void  SetValue(mscorlib::System::Object value, std::vector<mscorlib::System::Int32*> indices);
			virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();
			mscorlib::System::Int32  GetUpperBound(mscorlib::System::Int32 dimension);
			mscorlib::System::Object  GetValue(mscorlib::System::Int32 index);
			mscorlib::System::Object  GetValue(mscorlib::System::Int32 index1, mscorlib::System::Int32 index2);
			mscorlib::System::Object  GetValue(mscorlib::System::Int32 index1, mscorlib::System::Int32 index2, mscorlib::System::Int32 index3);
			mscorlib::System::Object  GetValue(mscorlib::System::Int64 index);
			mscorlib::System::Object  GetValue(mscorlib::System::Int64 index1, mscorlib::System::Int64 index2);
			mscorlib::System::Object  GetValue(mscorlib::System::Int64 index1, mscorlib::System::Int64 index2, mscorlib::System::Int64 index3);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index1, mscorlib::System::Int64 index2);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int64 index1, mscorlib::System::Int64 index2, mscorlib::System::Int64 index3);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index1, mscorlib::System::Int32 index2);
			void  SetValue(mscorlib::System::Object value, mscorlib::System::Int32 index1, mscorlib::System::Int32 index2, mscorlib::System::Int32 index3);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length1, mscorlib::System::Int32 length2);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, mscorlib::System::Int32 length1, mscorlib::System::Int32 length2, mscorlib::System::Int32 length3);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int32*> lengths);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int32*> lengths, std::vector<mscorlib::System::Int32*> lowerBounds);
			static mscorlib::System::Array  CreateInstance(mscorlib::System::Type elementType, std::vector<mscorlib::System::Int64*> lengths);
			mscorlib::System::Object  GetValue(std::vector<mscorlib::System::Int64*> indices);
			void  SetValue(mscorlib::System::Object value, std::vector<mscorlib::System::Int64*> indices);
			static mscorlib::System::Int32  BinarySearch(mscorlib::System::Array array, mscorlib::System::Object value);
			static mscorlib::System::Int32  BinarySearch(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer);
			static mscorlib::System::Int32  BinarySearch(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Object value);
			static mscorlib::System::Int32  BinarySearch(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Object value, mscorlib::System::Collections::IComparer comparer);
			static void  Clear(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length);
			virtual mscorlib::System::Object  Clone();
			static void  Copy(mscorlib::System::Array sourceArray, mscorlib::System::Array destinationArray, mscorlib::System::Int32 length);
			static void  Copy(mscorlib::System::Array sourceArray, mscorlib::System::Int32 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 length);
			static void  Copy(mscorlib::System::Array sourceArray, mscorlib::System::Int64 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int64 destinationIndex, mscorlib::System::Int64 length);
			static void  Copy(mscorlib::System::Array sourceArray, mscorlib::System::Array destinationArray, mscorlib::System::Int64 length);
			static mscorlib::System::Int32  IndexOf(mscorlib::System::Array array, mscorlib::System::Object value);
			static mscorlib::System::Int32  IndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Int32  IndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			void  Initialize();
			static mscorlib::System::Int32  LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value);
			static mscorlib::System::Int32  LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex);
			static mscorlib::System::Int32  LastIndexOf(mscorlib::System::Array array, mscorlib::System::Object value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count);
			static void  Reverse(mscorlib::System::Array array);
			static void  Reverse(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length);
			static void  Sort(mscorlib::System::Array array);
			static void  Sort(mscorlib::System::Array keys, mscorlib::System::Array items);
			static void  Sort(mscorlib::System::Array array, mscorlib::System::Collections::IComparer comparer);
			static void  Sort(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length);
			static void  Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Collections::IComparer comparer);
			static void  Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Int32 index, mscorlib::System::Int32 length);
			static void  Sort(mscorlib::System::Array array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::IComparer comparer);
			static void  Sort(mscorlib::System::Array keys, mscorlib::System::Array items, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::IComparer comparer);
			template<typename T>
			static void  Sort(std::vector<T*> array)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename TKey, typename TValue>
			static void  Sort(std::vector<TKey*> keys, std::vector<TValue*> items)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keys).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(items).name()))->eklass);
				__parameters__[0] = Global::FromArray<TKey*>(keys, typeid(TKey).name());
				__parameters__[1] = Global::FromArray<TValue*>(items, typeid(TValue).name());
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename T>
			static void  Sort(std::vector<T*> array, mscorlib::System::Collections::Generic::IComparer<T> comparer)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename TKey, typename TValue>
			static void  Sort(std::vector<TKey*> keys, std::vector<TValue*> items, mscorlib::System::Collections::Generic::IComparer<TKey> comparer)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keys).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(items).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<TKey*>(keys, typeid(TKey).name());
				__parameters__[1] = Global::FromArray<TValue*>(items, typeid(TValue).name());
				__parameters__[2] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename T>
			static void  Sort(std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename TKey, typename TValue>
			static void  Sort(std::vector<TKey*> keys, std::vector<TValue*> items, mscorlib::System::Int32 index, mscorlib::System::Int32 length)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keys).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(items).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(index).name());
				__parameter_types__[3] = Global::GetType(typeid(length).name());
				__parameters__[0] = Global::FromArray<TKey*>(keys, typeid(TKey).name());
				__parameters__[1] = Global::FromArray<TValue*>(items, typeid(TValue).name());
				__parameters__[2] = &index;
				__parameters__[3] = &length;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename T>
			static void  Sort(std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::Generic::IComparer<T> comparer)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename TKey, typename TValue>
			static void  Sort(std::vector<TKey*> keys, std::vector<TValue*> items, mscorlib::System::Int32 index, mscorlib::System::Int32 length, mscorlib::System::Collections::Generic::IComparer<TKey> comparer)
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keys).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(items).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(index).name());
				__parameter_types__[3] = Global::GetType(typeid(length).name());
				__parameter_types__[4] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<TKey*>(keys, typeid(TKey).name());
				__parameters__[1] = Global::FromArray<TValue*>(items, typeid(TValue).name());
				__parameters__[2] = &index;
				__parameters__[3] = &length;
				__parameters__[4] = (MonoObject*)comparer;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename T>
			static void  Sort(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Int32  (T , T )> comparison)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(comparison).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &comparison;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Sort", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			};
			
			virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
			void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int64 index);
			template<typename T>
			static void  Resize(std::vector<T*> array, mscorlib::System::Int32 newSize)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(array).name());
				__parameter_types__[1] = Global::GetType(typeid(newSize).name());
				__parameters__[0] = (MonoObject*)array;
				__parameters__[1] = &newSize;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Resize", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename T>
			static mscorlib::System::Boolean  TrueForAll(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "TrueForAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static void  ForEach(std::vector<T*> array, mscorlib::Callback<void  (T )> action)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(action).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &action;
				Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "ForEach", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			};
			
			template<typename TInput, typename TOutput>
			static std::vector<TOutput*>  ConvertAll(std::vector<TInput*> array, mscorlib::Callback<TOutput  (TInput )> converter)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(converter).name());
				__parameters__[0] = Global::FromArray<TInput*>(array, typeid(TInput).name());
				__parameters__[1] = &converter;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "ConvertAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<TOutput*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new TOutput (__array_item__));
				}
				return __array_result__;
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindLastIndex(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindLastIndex", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindLastIndex(std::vector<T*> array, mscorlib::System::Int32 startIndex, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindLastIndex", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindLastIndex(std::vector<T*> array, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				__parameters__[3] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindLastIndex", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindIndex(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindIndex", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindIndex(std::vector<T*> array, mscorlib::System::Int32 startIndex, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindIndex", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  FindIndex(std::vector<T*> array, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameter_types__[3] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &startIndex;
				__parameters__[2] = &count;
				__parameters__[3] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindIndex", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  BinarySearch(std::vector<T*> array, T value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  BinarySearch(std::vector<T*> array, T value, mscorlib::System::Collections::Generic::IComparer<T> comparer)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = (MonoObject*)comparer;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  BinarySearch(std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, T value)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(value).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  BinarySearch(std::vector<T*> array, mscorlib::System::Int32 index, mscorlib::System::Int32 length, T value, mscorlib::System::Collections::Generic::IComparer<T> comparer)
			{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(length).name());
				__parameter_types__[3] = Global::GetType(typeid(value).name());
				__parameter_types__[4] = Global::GetType(typeid(comparer).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &index;
				__parameters__[2] = &length;
				__parameters__[3] = (MonoObject*)value;
				__parameters__[4] = (MonoObject*)comparer;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "BinarySearch", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  IndexOf(std::vector<T*> array, T value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  IndexOf(std::vector<T*> array, T value, mscorlib::System::Int32 startIndex)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  IndexOf(std::vector<T*> array, T value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "IndexOf", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  LastIndexOf(std::vector<T*> array, T value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  LastIndexOf(std::vector<T*> array, T value, mscorlib::System::Int32 startIndex)
			{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Int32  LastIndexOf(std::vector<T*> array, T value, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
			{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameter_types__[2] = Global::GetType(typeid(startIndex).name());
				__parameter_types__[3] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = (MonoObject*)value;
				__parameters__[2] = &startIndex;
				__parameters__[3] = &count;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "LastIndexOf", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static std::vector<T*>  FindAll(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<T*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new T (__array_item__));
				}
				return __array_result__;
			};
			
			template<typename T>
			static mscorlib::System::Boolean  Exists(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Exists", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			
			template<typename T>
			static mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<T>  AsReadOnly(std::vector<T*> array)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "AsReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<T>(__result__);
			};
			
			template<typename T>
			static T  Find(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "Find", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return T(__result__);
			};
			
			template<typename T>
			static T  FindLast(std::vector<T*> array, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
				__parameter_types__[1] = Global::GetType(typeid(match).name());
				__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
				__parameters__[1] = &match;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Array", 0, NULL, "FindLast", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return T(__result__);
			};
			
			static void  ConstrainedCopy(mscorlib::System::Array sourceArray, mscorlib::System::Int32 sourceIndex, mscorlib::System::Array destinationArray, mscorlib::System::Int32 destinationIndex, mscorlib::System::Int32 length);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_Length)) mscorlib::System::Int32  Length;
			__declspec(property(get=get_LongLength)) mscorlib::System::Int64  LongLength;
			__declspec(property(get=get_Rank)) mscorlib::System::Int32  Rank;
			__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
			__declspec(property(get=get_SyncRoot)) mscorlib::System::Object  SyncRoot;
			__declspec(property(get=get_IsFixedSize)) mscorlib::System::Boolean  IsFixedSize;
			__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;

			//Get Set Properties Methods
			//	Get:Length
			mscorlib::System::Int32  get_Length() const;

			//	Get:LongLength
			mscorlib::System::Int64  get_LongLength() const;

			//	Get:Rank
			mscorlib::System::Int32  get_Rank() const;

			//	Get:IsSynchronized
			mscorlib::System::Boolean  get_IsSynchronized() const;

			//	Get:SyncRoot
			mscorlib::System::Object  get_SyncRoot() const;

			//	Get:IsFixedSize
			mscorlib::System::Boolean  get_IsFixedSize() const;

			//	Get:IsReadOnly
			mscorlib::System::Boolean  get_IsReadOnly() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
