#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ICOMPARABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ICOMPARABLE_1_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class IComparable
		{
		public:
			IComparable(MonoObject *nativeObject)
			{
				__mscorlib_System_IComparable_1 = nativeObject;
			};
		
			~IComparable()
			{
			};
		

			IComparable & operator=(IComparable &value) { __mscorlib_System_IComparable_1 = value.__mscorlib_System_IComparable_1; return value; };
			operator MonoObject*() { return __mscorlib_System_IComparable_1; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IComparable_1 = value; return value; };


			virtual mscorlib::System::Int32  CompareTo(T other)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IComparable`1", 1, __generic_types__, "CompareTo", __mscorlib_System_IComparable_1, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			};
			


		
		protected:
			MonoObject *__mscorlib_System_IComparable_1;
		
		private:
		
		};

	}
}
#endif
