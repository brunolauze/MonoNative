#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_IHASHCODEPROVIDER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IHashCodeProvider
			{
			public:
				IHashCodeProvider(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IHashCodeProvider = nativeObject;
				};
			
				~IHashCodeProvider()
				{
				};
			

				IHashCodeProvider & operator=(IHashCodeProvider &value) { __mscorlib_System_Collections_IHashCodeProvider = value.__mscorlib_System_Collections_IHashCodeProvider; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IHashCodeProvider; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IHashCodeProvider = value; return value; };


				virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::Object obj);


			
			protected:
				MonoObject *__mscorlib_System_Collections_IHashCodeProvider;
			
			private:
			
			};

		}
	}
}
#endif
