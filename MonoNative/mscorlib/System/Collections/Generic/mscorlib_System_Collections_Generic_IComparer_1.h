#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_ICOMPARER_1_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{
			namespace Generic
			{

				template<typename T>
				class IComparer
				{
				public:
					IComparer(MonoObject *nativeObject)
					{
						__mscorlib_System_Collections_Generic_IComparer_1 = nativeObject;
					};
				
					~IComparer()
					{
					};
				

					IComparer & operator=(IComparer &value) { __mscorlib_System_Collections_Generic_IComparer_1 = value.__mscorlib_System_Collections_Generic_IComparer_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IComparer_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IComparer_1 = value; return value; };


					virtual mscorlib::System::Int32  Compare(T x, T y)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(x).name());
						__parameter_types__[1] = Global::GetType(typeid(y).name());
						__parameters__[0] = (MonoObject*)x;
						__parameters__[1] = (MonoObject*)y;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IComparer`1", 1, __generic_types__, "Compare", __mscorlib_System_Collections_Generic_IComparer_1, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					


				
				protected:
					MonoObject *__mscorlib_System_Collections_Generic_IComparer_1;
				
				private:
				
				};

			}
		}
	}
}
#endif
