#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ICOMPARER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ICOMPARER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IComparer
			{
			public:
				IComparer(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IComparer = nativeObject;
				};
			
				~IComparer()
				{
				};
			

				IComparer & operator=(IComparer &value) { __mscorlib_System_Collections_IComparer = value.__mscorlib_System_Collections_IComparer; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IComparer; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IComparer = value; return value; };


				virtual mscorlib::System::Int32  Compare(mscorlib::System::Object x, mscorlib::System::Object y);


			
			protected:
				MonoObject *__mscorlib_System_Collections_IComparer;
			
			private:
			
			};

		}
	}
}
#endif
