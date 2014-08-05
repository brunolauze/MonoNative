#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IENUMERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IENUMERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IEnumerator
			{
			public:
				IEnumerator(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IEnumerator = nativeObject;
				};
			
				~IEnumerator()
				{
				};
			

				IEnumerator & operator=(IEnumerator &value) { __mscorlib_System_Collections_IEnumerator = value.__mscorlib_System_Collections_IEnumerator; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IEnumerator; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IEnumerator = value; return value; };


				virtual mscorlib::System::Boolean  MoveNext();
				virtual void  Reset();


				//Public Properties
				__declspec(property(get=get_Current)) mscorlib::System::Object  Current;

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Object  get_Current() const;

			
			protected:
				MonoObject *__mscorlib_System_Collections_IEnumerator;
			
			private:
			
			};

		}
	}
}
#endif
