#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_2_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_2_H

#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_KeyValuePair_2.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename TKey, typename TValue>
				class IDictionary
					: public virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
					, public virtual mscorlib::System::Collections::IEnumerable
					, public virtual mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>
				{
				public:
					IDictionary(MonoObject *nativeObject)
					: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					, mscorlib::System::Collections::Generic::ICollection<mscorlib::System::Collections::Generic::KeyValuePair<TKey,TValue>>(nativeObject)
					{
					};
				
					~IDictionary()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IDictionary_2, put=set___mscorlib_System_Collections_Generic_IDictionary_2)) MonoObject *__mscorlib_System_Collections_Generic_IDictionary_2;
					MonoObject* get___mscorlib_System_Collections_Generic_IDictionary_2()
					{
						return IDictionary::__mscorlib_System_Collections_Generic_ICollection_1;
					}
					void set___mscorlib_System_Collections_Generic_IDictionary_2(MonoObject *value)
					{
						IDictionary::__mscorlib_System_Collections_Generic_ICollection_1 = value;
					}
					IDictionary & operator=(IDictionary &value) { __mscorlib_System_Collections_Generic_IDictionary_2 = value.__mscorlib_System_Collections_Generic_IDictionary_2; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IDictionary_2; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IDictionary_2 = value; return value; };


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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "Add", __mscorlib_System_Collections_Generic_IDictionary_2, 2, __parameter_types__, __parameters__, NULL);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "ContainsKey", __mscorlib_System_Collections_Generic_IDictionary_2, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "Remove", __mscorlib_System_Collections_Generic_IDictionary_2, 1, __parameter_types__, __parameters__, NULL);
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "TryGetValue", __mscorlib_System_Collections_Generic_IDictionary_2, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					


					//Public Properties
					__declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

					//Get Set Properties Methods
					//	Get/Set:Item
					TValue  get_Item(TKey key)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "get_Item", __mscorlib_System_Collections_Generic_IDictionary_2, 1, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "set_Item", __mscorlib_System_Collections_Generic_IDictionary_2, 2, __parameter_types__, __parameters__, NULL);
					}
				

					//	Get:Keys
					mscorlib::System::Collections::Generic::ICollection<TKey>  get_Keys()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "get_Keys", __mscorlib_System_Collections_Generic_IDictionary_2, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::Generic::ICollection<TKey>(__result__);
					}

					//	Get:Values
					mscorlib::System::Collections::Generic::ICollection<TValue>  get_Values()
					{
						MonoType *__generic_types__[2];
						__generic_types__[0] = Global::GetType(typeid(TKey).name());
						__generic_types__[1] = Global::GetType(typeid(TValue).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IDictionary`2", 2, __generic_types__, "get_Values", __mscorlib_System_Collections_Generic_IDictionary_2, 0, NULL, NULL, NULL);
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
