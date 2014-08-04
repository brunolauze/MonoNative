#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IREADONLYCOLLECTION_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IREADONLYCOLLECTION_1_H

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
				class IReadOnlyCollection
					: public virtual mscorlib::System::Collections::Generic::IEnumerable<T>
					, public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					IReadOnlyCollection(MonoObject *nativeObject)
					: mscorlib::System::Collections::Generic::IEnumerable<T>(nativeObject)
					, mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~IReadOnlyCollection()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IReadOnlyCollection_1, put=set___mscorlib_System_Collections_Generic_IReadOnlyCollection_1)) MonoObject *__mscorlib_System_Collections_Generic_IReadOnlyCollection_1;
					MonoObject* get___mscorlib_System_Collections_Generic_IReadOnlyCollection_1()
					{
						return IReadOnlyCollection::__mscorlib_System_Collections_Generic_IEnumerable_1;
					}
					void set___mscorlib_System_Collections_Generic_IReadOnlyCollection_1(MonoObject *value)
					{
						IReadOnlyCollection::__mscorlib_System_Collections_Generic_IEnumerable_1 = value;
					}
					IReadOnlyCollection & operator=(IReadOnlyCollection &value) { __mscorlib_System_Collections_Generic_IReadOnlyCollection_1 = value.__mscorlib_System_Collections_Generic_IReadOnlyCollection_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IReadOnlyCollection_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IReadOnlyCollection_1 = value; return value; };




					//Public Properties
					__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;

					//Get Set Properties Methods
					//	Get:Count
					mscorlib::System::Int32  get_Count()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IReadOnlyCollection`1", 1, __generic_types__, "get_Count", __mscorlib_System_Collections_Generic_IReadOnlyCollection_1, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
