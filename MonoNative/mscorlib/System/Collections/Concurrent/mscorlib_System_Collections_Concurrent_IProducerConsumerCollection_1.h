#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_CONCURRENT_IPRODUCERCONSUMERCOLLECTION_1_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Concurrent
			{

				template<typename T>
				class IProducerConsumerCollection
					: public virtual mscorlib::System::Collections::ICollection
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
				{
				public:
					IProducerConsumerCollection(MonoObject *nativeObject)
					: mscorlib::System::Collections::ICollection(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					{
					};
				
					~IProducerConsumerCollection()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1, put=set___mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1)) MonoObject *__mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1;
					MonoObject* get___mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1() const
					{
						return IProducerConsumerCollection::__mscorlib_System_Collections_Generic_IEnumerable_1;
					}
					void set___mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1(MonoObject *value)
					{
						IProducerConsumerCollection::__mscorlib_System_Collections_Generic_IEnumerable_1 = value;
					}
					IProducerConsumerCollection & operator=(IProducerConsumerCollection &value) { __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1 = value.__mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1 = value; return value; };


					virtual mscorlib::System::Boolean  TryAdd(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "IProducerConsumerCollection`1", 1, __generic_types__, "TryAdd", __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Boolean  TryTake(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "IProducerConsumerCollection`1", 1, __generic_types__, "TryTake", __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual std::vector<T*>  ToArray()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "IProducerConsumerCollection`1", 1, __generic_types__, "ToArray", __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1, 0, NULL, NULL, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Collections.Concurrent", "IProducerConsumerCollection`1", 1, __generic_types__, "CopyTo", __mscorlib_System_Collections_Concurrent_IProducerConsumerCollection_1, 2, __parameter_types__, __parameters__, NULL);
					};
					


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
