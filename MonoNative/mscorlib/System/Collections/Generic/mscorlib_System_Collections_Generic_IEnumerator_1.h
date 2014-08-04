#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_1_H

#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class IEnumerator
					: public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Collections::IEnumerator
				{
				public:
					IEnumerator(MonoObject *nativeObject)
					: mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Collections::IEnumerator(nativeObject)
					{
					};
				
					~IEnumerator()
					{
					};
				

					__declspec(property(get=get___mscorlib_System_Collections_Generic_IEnumerator_1, put=set___mscorlib_System_Collections_Generic_IEnumerator_1)) MonoObject *__mscorlib_System_Collections_Generic_IEnumerator_1;
					MonoObject* get___mscorlib_System_Collections_Generic_IEnumerator_1()
					{
						return IEnumerator::__mscorlib_System_IDisposable;
					}
					void set___mscorlib_System_Collections_Generic_IEnumerator_1(MonoObject *value)
					{
						IEnumerator::__mscorlib_System_IDisposable = value;
					}
					IEnumerator & operator=(IEnumerator &value) { __mscorlib_System_Collections_Generic_IEnumerator_1 = value.__mscorlib_System_Collections_Generic_IEnumerator_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IEnumerator_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IEnumerator_1 = value; return value; };




					//Public Properties
					__declspec(property(get=get_Current)) T  Current;

					//Get Set Properties Methods
					//	Get:Current
					T  get_Current()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IEnumerator`1", 1, __generic_types__, "get_Current", __mscorlib_System_Collections_Generic_IEnumerator_1, 0, NULL, NULL, NULL);
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
