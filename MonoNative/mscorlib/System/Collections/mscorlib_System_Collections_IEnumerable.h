#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IENUMERABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IENUMERABLE_H

#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IEnumerable
			{
			public:
				IEnumerable(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IEnumerable = nativeObject;
				};
			
				~IEnumerable()
				{
				};
			

				IEnumerable & operator=(IEnumerable &value) { __mscorlib_System_Collections_IEnumerable = value.__mscorlib_System_Collections_IEnumerable; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IEnumerable; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IEnumerable = value; return value; };


				virtual mscorlib::System::Collections::IEnumerator * GetEnumerator();


			
			protected:
				MonoObject *__mscorlib_System_Collections_IEnumerable;
			
			private:
			
			};

		}
	}
}
#endif
