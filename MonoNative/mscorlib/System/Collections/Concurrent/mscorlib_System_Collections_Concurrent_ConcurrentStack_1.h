#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTSTACK_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTSTACK_1_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Concurrent/mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
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

				template<typename T>
				class ConcurrentStack
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Collections::Concurrent::IProducerConsumerCollection<T>
					, public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					ConcurrentStack()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentStack`1"))
					, mscorlib::System::Collections::Concurrent::IProducerConsumerCollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, 0, NULL, NULL);
					};
				
					ConcurrentStack(mscorlib::System::Collections::Generic::IEnumerable<T> collection)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Collections.Concurrent.ConcurrentStack`1"))
					, mscorlib::System::Collections::Concurrent::IProducerConsumerCollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameters__[0] = (MonoObject*)collection;
						__native_object__ = Global::New("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, __parameters__);
					};
				
					ConcurrentStack(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Collections::Concurrent::IProducerConsumerCollection<T>(NULL)
					, mscorlib::System::Collections::ICollection(NULL)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(NULL)
					, mscorlib::System::Collections::IEnumerable(NULL)
					{
					};
				
					ConcurrentStack(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Collections::Concurrent::IProducerConsumerCollection<T>(nativeObject)
					, mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~ConcurrentStack()
					{
					};
				

					ConcurrentStack & operator=(ConcurrentStack &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ConcurrentStack &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  Push(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "Push", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  PushRange(std::vector<T*> items)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Concurrent", "T")), 1));
						__parameters__[0] = Global::FromArray<T*>(items, typeid(T).name());
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "PushRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					void  PushRange(std::vector<T*> items, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Concurrent", "T")), 1));
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<T*>(items, typeid(T).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "PushRange", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					};
					
					mscorlib::System::Boolean  TryPop(T result)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(result).name());
						__parameters__[0] = (MonoObject*)result;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "TryPop", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  TryPopRange(std::vector<T*> items)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Concurrent", "T")), 1));
						__parameters__[0] = Global::FromArray<T*>(items, typeid(T).name());
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "TryPopRange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Int32  TryPopRange(std::vector<T*> items, mscorlib::System::Int32 startIndex, mscorlib::System::Int32 count)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Concurrent", "T")), 1));
						__parameter_types__[1] = Global::GetType(typeid(startIndex).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<T*>(items, typeid(T).name());
						__parameters__[1] = &startIndex;
						__parameters__[2] = &count;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "TryPopRange", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					
					mscorlib::System::Boolean  TryPeek(T result)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(result).name());
						__parameters__[0] = (MonoObject*)result;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "TryPeek", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					void  Clear()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "Clear", __native_object__, 0, NULL, NULL, NULL);
					};
					
					virtual mscorlib::System::Collections::Generic::IEnumerator<T> * GetEnumerator()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<T>(__result__);
					};
					
					virtual void  CopyTo(std::vector<T*> array, mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Concurrent", "T")), 1));
						__parameter_types__[1] = Global::GetType(typeid(index).name());
						__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[1] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual std::vector<T*>  ToArray()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "ToArray", __native_object__, 0, NULL, NULL, NULL);
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
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsEmpty)) mscorlib::System::Boolean  IsEmpty;

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "get_Count", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get:IsEmpty
					mscorlib::System::Boolean  get_IsEmpty() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "ConcurrentStack`1", 1, __generic_types__, "get_IsEmpty", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
