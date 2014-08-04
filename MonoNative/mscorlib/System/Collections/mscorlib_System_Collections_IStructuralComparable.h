#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IComparer.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class IStructuralComparable
			{
			public:
				IStructuralComparable(MonoObject *nativeObject)
				{
					__mscorlib_System_Collections_IStructuralComparable = nativeObject;
				};
			
				~IStructuralComparable()
				{
				};
			

				IStructuralComparable & operator=(IStructuralComparable &value) { __mscorlib_System_Collections_IStructuralComparable = value.__mscorlib_System_Collections_IStructuralComparable; return value; };
				operator MonoObject*() { return __mscorlib_System_Collections_IStructuralComparable; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_IStructuralComparable = value; return value; };


				virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Object other, mscorlib::System::Collections::IComparer comparer);


			
			protected:
				MonoObject *__mscorlib_System_Collections_IStructuralComparable;
			
			private:
			
			};

		}
	}
}
#endif
