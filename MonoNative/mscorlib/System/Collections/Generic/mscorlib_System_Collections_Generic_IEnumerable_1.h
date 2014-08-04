#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_1_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerator_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class IEnumerable
					: public virtual mscorlib::System::Collections::IEnumerable
				{
				public:
					IEnumerable(MonoObject *nativeObject)
					: mscorlib::System::Collections::IEnumerable(nativeObject)
					{
					};
				
					~IEnumerable()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IEnumerable_1, put=set___mscorlib_System_Collections_Generic_IEnumerable_1)) MonoObject *__mscorlib_System_Collections_Generic_IEnumerable_1;
					MonoObject* get___mscorlib_System_Collections_Generic_IEnumerable_1()
					{
						return IEnumerable::__mscorlib_System_Collections_IEnumerable;
					}
					void set___mscorlib_System_Collections_Generic_IEnumerable_1(MonoObject *value)
					{
						IEnumerable::__mscorlib_System_Collections_IEnumerable = value;
					}
					IEnumerable & operator=(IEnumerable &value) { __mscorlib_System_Collections_Generic_IEnumerable_1 = value.__mscorlib_System_Collections_Generic_IEnumerable_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IEnumerable_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IEnumerable_1 = value; return value; };


					virtual mscorlib::System::Collections::Generic::IEnumerator<T> * GetEnumerator()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1, __generic_types__, "GetEnumerator", __mscorlib_System_Collections_Generic_IEnumerable_1, 0, NULL, NULL, NULL);
						return new mscorlib::System::Collections::Generic::IEnumerator<T>(__result__);
					};
					


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
