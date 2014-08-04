#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_1_H

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
				class IEqualityComparer
				{
				public:
					IEqualityComparer(MonoObject *nativeObject)
					{
						__mscorlib_System_Collections_Generic_IEqualityComparer_1 = nativeObject;
					};
				
					~IEqualityComparer()
					{
					};
				

					IEqualityComparer & operator=(IEqualityComparer &value) { __mscorlib_System_Collections_Generic_IEqualityComparer_1 = value.__mscorlib_System_Collections_Generic_IEqualityComparer_1; return value; };
					operator MonoObject*() { return __mscorlib_System_Collections_Generic_IEqualityComparer_1; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Collections_Generic_IEqualityComparer_1 = value; return value; };


					virtual mscorlib::System::Boolean  Equals(T x, T y)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(x).name());
						__parameter_types__[1] = Global::GetType(typeid(y).name());
						__parameters__[0] = (MonoObject*)x;
						__parameters__[1] = (MonoObject*)y;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IEqualityComparer`1", 1, __generic_types__, "Equals", __mscorlib_System_Collections_Generic_IEqualityComparer_1, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					};
					
					virtual mscorlib::System::Int32  GetHashCode(T obj)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(T).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections.Generic", "IEqualityComparer`1", 1, __generic_types__, "GetHashCode", __mscorlib_System_Collections_Generic_IEqualityComparer_1, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					};
					


				
				protected:
					MonoObject *__mscorlib_System_Collections_Generic_IEqualityComparer_1;
				
				private:
				
				};

			}
		}
	}
}
#endif
