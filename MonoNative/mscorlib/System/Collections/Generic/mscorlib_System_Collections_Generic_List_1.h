#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_LIST_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_LIST_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/ObjectModel/mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IComparer_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class List
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyList<T>
					, public virtual mscorlib::System::Collections::Generic::ICollection<T>
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<T>
					, public virtual mscorlib::System::Collections::IList
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::IList<T>
				{
				public:
					template<typename T>
					class Enumerator
						: public mscorlib::System::ValueType
						, public virtual mscorlib::System::Collections::IEnumerator
						, public virtual mscorlib::System::Collections::Generic::IEnumerator<T>
						, public virtual mscorlib::System::IDisposable
					{
					public:
						Enumerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						, mscorlib::System::Collections::IEnumerator(NULL)
						, mscorlib::System::Collections::Generic::IEnumerator<T>(NULL)
						, mscorlib::System::IDisposable(NULL)
						{
						};
					
						Enumerator(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						, mscorlib::System::Collections::IEnumerator(nativeObject)
						, mscorlib::System::Collections::Generic::IEnumerator<T>(nativeObject)
						, mscorlib::System::IDisposable(nativeObject)
						{
						};
					
						~Enumerator()
						{
						};
					

						Enumerator & operator=(Enumerator &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  Dispose()
						{
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1+Enumerator", 1, __generic_types__, "Dispose", __native_object__, 0, NULL, NULL, NULL);
						};
						
						virtual mscorlib::System::Boolean  MoveNext()
						{
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1+Enumerator", 1, __generic_types__, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
						};
						
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Current)) T  Current;

						//Get Set Properties Methods
						//	Get:Current
						T  get_Current() const
						{
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1+Enumerator", 1, __generic_types__, "get_Current", __native_object__, 0, NULL, NULL, NULL);
							return T(__result__);
						}

					
					protected:
					
					private:
					
					};
					
					List()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.List`1"))
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, 0, NULL, NULL);
					};
				
					List(mscorlib::System::Collections::Generic::IEnumerable<T> collection)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.List`1"))
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameters__[0] = (MonoObject*)collection;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, __parameters__);
					};
				
					List(mscorlib::System::Int32 capacity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Generic.List`1"))
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &capacity;
						__native_object__ = Global::New("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, __parameters__);
					};
				
					List(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(NULL)
					, mscorlib::System::Collections::Generic::ICollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(NULL)
					, mscorlib::System::Collections::IList(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					, mscorlib::System::Collections::Generic::IList<T>(NULL)
					{
					};
				
					List(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyList<T>(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<T>(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(nativeObject)
					, mscorlib::System::Collections::IList(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::IList<T>(nativeObject)
					{
					};
				
					~List()
					{
					};
				

					List & operator=(List &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Add(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Add", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  AddRange(mscorlib::System::Collections::Generic::IEnumerable<T> collection)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(collection).name());
						__parameters__[0] = (MonoObject*)collection;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "AddRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<T>  AsReadOnly()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "AsReadOnly", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<T>(__result__);
					};
					
					mscorlib::System::Int32  BinarySearch(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "BinarySearch", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  BinarySearch(T item, mscorlib::System::Collections::Generic::IComparer<T> comparer)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameter_types__[1] = Global::GetType(typeid(comparer).name());
						__parameters__[0] = (MonoObject*)item;
						__parameters__[1] = (MonoObject*)comparer;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "BinarySearch", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  BinarySearch(mscorlib::System::Int32 index, mscorlib::System::Int32 count, T item, mscorlib::System::Collections::Generic::IComparer<T> comparer)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameter_types__[2] = Global::GetType(typeid(item).name());
						__parameter_types__[3] = Global::GetType(typeid(comparer).name());
						__parameters__[0] = &index;
						__parameters__[1] = &count;
						__parameters__[2] = (MonoObject*)item;
						__parameters__[3] = (MonoObject*)comparer;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "BinarySearch", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual void  Clear()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Clear", __native_object__, 0, NULL, NULL, NULL);
					};
					
					virtual mscorlib::System::Boolean  Contains(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					template<typename TOutput>
					mscorlib::System::Collections::Generic::List<TOutput>  ConvertAll(mscorlib::Callback<TOutput  (T )> converter)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(converter).name());
						__parameters__[0] = &converter;
						MonoObject* __result__ = NULL;
						return mscorlib::System::Collections::Generic::List<TOutput>(__result__);
					};
					
					void  CopyTo(std::vector<T*> array)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
						__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "CopyTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  CopyTo(std::vector<T*> array, mscorlib::System::Int32 arrayIndex)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
						__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[1] = &arrayIndex;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					void  CopyTo(mscorlib::System::Int32 index, std::vector<T*> array, mscorlib::System::Int32 arrayIndex, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(array).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(arrayIndex).name());
						__parameter_types__[3] = Global::GetType(typeid(count).name());
						__parameters__[0] = &index;
						__parameters__[1] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[2] = &arrayIndex;
						__parameters__[3] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "CopyTo", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Boolean  Exists(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Exists", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					T  Find(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Find", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					mscorlib::System::Collections::Generic::List<T>  FindAll(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::List<T>(__result__);
					};
					
					mscorlib::System::Int32  FindIndex(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindIndex", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  FindIndex(mscorlib::System::Int32 startIndex, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[1] = Global::GetType(typeid(match).name());
						__parameters__[0] = &startIndex;
						__parameters__[1] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindIndex", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  FindIndex(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameter_types__[2] = Global::GetType(typeid(match).name());
						__parameters__[0] = &startIndex;
						__parameters__[1] = &count;
						__parameters__[2] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindIndex", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					T  FindLast(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindLast", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					};
					
					mscorlib::System::Int32  FindLastIndex(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindLastIndex", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  FindLastIndex(mscorlib::System::Int32 startIndex, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[1] = Global::GetType(typeid(match).name());
						__parameters__[0] = &startIndex;
						__parameters__[1] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindLastIndex", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  FindLastIndex(mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count, mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameter_types__[2] = Global::GetType(typeid(match).name());
						__parameters__[0] = &startIndex;
						__parameters__[1] = &count;
						__parameters__[2] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "FindLastIndex", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					void  ForEach(mscorlib::Callback<void  (T )> action)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameters__[0] = &action;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "ForEach", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Collections::Generic::List<T>::Enumerator<T> * GetEnumerator()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::List<T>::Enumerator<T>(__result__);
					};
					
					mscorlib::System::Collections::Generic::List<T>  GetRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameters__[0] = &index;
						__parameters__[1] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "GetRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::List<T>(__result__);
					};
					
					virtual mscorlib::System::Int32  IndexOf(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "IndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  IndexOf(T item, mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = (MonoObject*)item;
						__parameters__[1] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "IndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  IndexOf(T item, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = (MonoObject*)item;
						__parameters__[1] = &index;
						__parameters__[2] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "IndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual void  Insert(mscorlib::System::Int32 index, T item)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(item).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Insert", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					void  InsertRange(mscorlib::System::Int32 index, mscorlib::System::Collections::Generic::IEnumerable<T> collection)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(collection).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)collection;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "InsertRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Int32  LastIndexOf(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "LastIndexOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  LastIndexOf(T item, mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = (MonoObject*)item;
						__parameters__[1] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "LastIndexOf", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  LastIndexOf(T item, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = (MonoObject*)item;
						__parameters__[1] = &index;
						__parameters__[2] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "LastIndexOf", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Boolean  Remove(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Remove", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  RemoveAll(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "RemoveAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					virtual void  RemoveAt(mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "RemoveAt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  RemoveRange(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameters__[0] = &index;
						__parameters__[1] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "RemoveRange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					void  Reverse()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Reverse", __native_object__, 0, NULL, NULL, NULL);
					};
					
					void  Reverse(mscorlib::System::Int32 index, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameters__[0] = &index;
						__parameters__[1] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Reverse", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					void  Sort()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Sort", __native_object__, 0, NULL, NULL, NULL);
					};
					
					void  Sort(mscorlib::System::Collections::Generic::IComparer<T> comparer)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(comparer).name());
						__parameters__[0] = (MonoObject*)comparer;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Sort", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  Sort(mscorlib::Callback<mscorlib::System::Int32  (T , T )> comparison)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(comparison).name());
						__parameters__[0] = &comparison;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Sort", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  Sort(mscorlib::System::Int32 index, mscorlib::System::Int32 count, mscorlib::System::Collections::Generic::IComparer<T> comparer)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameter_types__[2] = Global::GetType(typeid(comparer).name());
						__parameters__[0] = &index;
						__parameters__[1] = &count;
						__parameters__[2] = (MonoObject*)comparer;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "Sort", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					};
					
					std::vector<T*>  ToArray()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "ToArray", __native_object__, 0, NULL, NULL, NULL);
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
					
					void  TrimExcess()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "TrimExcess", __native_object__, 0, NULL, NULL, NULL);
					};
					
					mscorlib::System::Boolean  TrueForAll(mscorlib::Callback<mscorlib::System::Boolean  (T )> match)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "TrueForAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Capacity, put=set_Capacity)) mscorlib::System::Int32  Capacity;
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_Item, put=set_Item)) T  Item[];

					//Get Set Properties Methods
					//	Get/Set:Capacity
					mscorlib::System::Int32  get_Capacity() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "get_Capacity", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}
					void set_Capacity(mscorlib::System::Int32  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = &value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "set_Capacity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get/Set:Item
					T  get_Item(mscorlib::System::Int32 index) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					}
					void set_Item(mscorlib::System::Int32 index, T  value)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = &index;
						__parameters__[1] = (MonoObject*)value;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "List`1", 1, __generic_types__, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}
				

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
