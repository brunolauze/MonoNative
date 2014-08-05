#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IREADONLYLIST_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IREADONLYLIST_1_H

#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IReadOnlyCollection_1.h>
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
				class IReadOnlyList
					: public virtual mscorlib::System::Collections::Generic::IReadOnlyCollection<T>
					, public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					IReadOnlyList(MonoObject *nativeObject)
					: mscorlib::System::Collections::Generic::IReadOnlyCollection<T>(nativeObject)
					, mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~IReadOnlyList()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IReadOnlyList_1, put=set___mscorlib_System_Collections_Generic_IReadOnlyList_1)) MonoObject *__mscorlib_System_Collections_Generic_IReadOnlyList_1;
					MonoObject* get___mscorlib_System_Collections_Generic_IReadOnlyList_1() const
					{
						return IReadOnlyList::__mscorlib_System_Collections_Generic_IReadOnlyCollection_1;
					}
					void set___mscorlib_System_Collections_Generic_IReadOnlyList_1(MonoObject *value)
					{
						IReadOnlyList::__mscorlib_System_Collections_Generic_IReadOnlyCollection_1 = value;
					}
					IReadOnlyList & operator=(IReadOnlyList &value) { __mscorlib_System_Collections_Generic_IReadOnlyList_1 = value.__mscorlib_System_Collections_Generic_IReadOnlyList_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IReadOnlyList_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IReadOnlyList_1 = value; return value; };




					//Public Properties
					__declspec(property(get=get_Item)) T  Item[];

					//Get Set Properties Methods
					//	Get:Item
					T  get_Item(mscorlib::System::Int32 index) const
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(index).name());
						__parameters__[0] = &index;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IReadOnlyList`1", 1, __generic_types__, "get_Item", __mscorlib_System_Collections_Generic_IReadOnlyList_1, 1, __parameter_types__, __parameters__, NULL);
						return T(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
