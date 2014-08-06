#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_1_H

#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class ICollection
					: public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					ICollection(MonoObject *nativeObject)
					: mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~ICollection()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_ICollection_1, put=set___mscorlib_System_Collections_Generic_ICollection_1)) MonoObject *__mscorlib_System_Collections_Generic_ICollection_1;
					MonoObject* get___mscorlib_System_Collections_Generic_ICollection_1() const
					{
						return ICollection::__mscorlib_System_Collections_Generic_IEnumerable_1;
					}
					void set___mscorlib_System_Collections_Generic_ICollection_1(MonoObject *value)
					{
						ICollection::__mscorlib_System_Collections_Generic_IEnumerable_1 = value;
					}
					ICollection & operator=(ICollection &value) { __mscorlib_System_Collections_Generic_ICollection_1 = value.__mscorlib_System_Collections_Generic_ICollection_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_ICollection_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_ICollection_1 = value; return value; };


					virtual void  Add(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "Add", __mscorlib_System_Collections_Generic_ICollection_1, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  Clear()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "Clear", __mscorlib_System_Collections_Generic_ICollection_1, 0, NULL, NULL, NULL);
					};
					
					virtual mscorlib::System::Boolean  Contains(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "Contains", __mscorlib_System_Collections_Generic_ICollection_1, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual void  CopyTo(std::vector<T*> array, mscorlib::System::Int32 arrayIndex)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Collections.Generic", "T")), 1));
						__parameter_types__[1] = Global::GetType(typeid(arrayIndex).name());
						__parameters__[0] = Global::FromArray<T*>(array, typeid(T).name());
						__parameters__[1] = &arrayIndex;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "CopyTo", __mscorlib_System_Collections_Generic_ICollection_1, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual mscorlib::System::Boolean  Remove(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "Remove", __mscorlib_System_Collections_Generic_ICollection_1, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					


					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
					__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "get_Count", __mscorlib_System_Collections_Generic_ICollection_1, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					//	Get:IsReadOnly
					mscorlib::System::Boolean  get_IsReadOnly() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "ICollection`1", 1, __generic_types__, "get_IsReadOnly", __mscorlib_System_Collections_Generic_ICollection_1, 0, NULL, NULL, NULL);
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
