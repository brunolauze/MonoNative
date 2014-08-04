#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IEqualityComparer
			{
			public:
				IEqualityComparer(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IEqualityComparer = nativeObject;
				};
			
				~IEqualityComparer()
				{
				};
			

				IEqualityComparer & operator=(IEqualityComparer &value) { __mscorlib_System_Collections_IEqualityComparer = value.__mscorlib_System_Collections_IEqualityComparer; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IEqualityComparer; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IEqualityComparer = value; return value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object x, mscorlib::System::Object y);
				virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::Object obj);


			
			protected:
				MonoObject *__mscorlib_System_Collections_IEqualityComparer;
			
			private:
			
			};

		}
	}
}
#endif
