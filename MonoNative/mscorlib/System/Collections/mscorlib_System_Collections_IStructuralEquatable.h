#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEqualityComparer.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IStructuralEquatable
			{
			public:
				IStructuralEquatable(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IStructuralEquatable = nativeObject;
				};
			
				~IStructuralEquatable()
				{
				};
			

				IStructuralEquatable & operator=(IStructuralEquatable &value) { __mscorlib_System_Collections_IStructuralEquatable = value.__mscorlib_System_Collections_IStructuralEquatable; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IStructuralEquatable; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IStructuralEquatable = value; return value; };


				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other, mscorlib::System::Collections::IEqualityComparer comparer);
				virtual mscorlib::System::Int32  GetHashCode(mscorlib::System::Collections::IEqualityComparer comparer);


			
			protected:
				MonoObject *__mscorlib_System_Collections_IStructuralEquatable;
			
			private:
			
			};

		}
	}
}
#endif
