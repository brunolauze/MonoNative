#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ILIST_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ILIST_1_H

#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_ICollection_1.h>
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
				class IList
					: public virtual mscorlib::System::Collections::Generic::ICollection<T>
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					IList(MonoObject *nativeObject)
					: mscorlib::System::Collections::Generic::ICollection<T>(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~IList()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IList_1, put=set___mscorlib_System_Collections_Generic_IList_1)) MonoObject *__mscorlib_System_Collections_Generic_IList_1;
					MonoObject* get___mscorlib_System_Collections_Generic_IList_1() const
					{
						return IList::__mscorlib_System_Collections_Generic_ICollection_1;
					}
					void set___mscorlib_System_Collections_Generic_IList_1(MonoObject *value)
					{
						IList::__mscorlib_System_Collections_Generic_ICollection_1 = value;
					}
					IList & operator=(IList &value) { __mscorlib_System_Collections_Generic_IList_1 = value.__mscorlib_System_Collections_Generic_IList_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IList_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IList_1 = value; return value; };


					virtual mscorlib::System::Int32  IndexOf(T item)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(item).name());
						__parameters__[0] = (MonoObject*)item;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IList`1", 1, __generic_types__, "IndexOf", __mscorlib_System_Collections_Generic_IList_1, 1, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IList`1", 1, __generic_types__, "Insert", __mscorlib_System_Collections_Generic_IList_1, 2, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  RemoveAt(mscorlib::System::Int32 index)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IList`1", 1, __generic_types__, "RemoveAt", __mscorlib_System_Collections_Generic_IList_1, 1, __parameter_types__, __parameters__, NULL);
					};
					


					//Public Properties
					__declspec(property(get=get_Item, put=set_Item)) T  Item[];

					//Get Set Properties Methods
					//	Get/Set:Item
					T  get_Item(mscorlib::System::Int32 index) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IList`1", 1, __generic_types__, "get_Item", __mscorlib_System_Collections_Generic_IList_1, 1, __parameter_types__, __parameters__, NULL);
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
						Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IList`1", 1, __generic_types__, "set_Item", __mscorlib_System_Collections_Generic_IList_1, 2, __parameter_types__, __parameters__, NULL);
					}
				

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
