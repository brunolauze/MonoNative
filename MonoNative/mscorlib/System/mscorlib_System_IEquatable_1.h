#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IEQUATABLE_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IEQUATABLE_1_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		template<typename T>
		class IEquatable
		{
		public:
			IEquatable(MonoObject *nativeObject)
			{
				__mscorlib_System_IEquatable_1 = nativeObject;
			};
		
			~IEquatable()
			{
			};
		

			IEquatable & operator=(IEquatable &value) { __mscorlib_System_IEquatable_1 = value.__mscorlib_System_IEquatable_1; return value; };
			operator MonoObject*() { return __mscorlib_System_IEquatable_1; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IEquatable_1 = value; return value; };


			virtual mscorlib::System::Boolean  Equals(T other)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoType *__generic_types__[1];
				__generic_types__[0] = Global::GetType(typeid(T).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IEquatable`1", 1, __generic_types__, "Equals", __mscorlib_System_IEquatable_1, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			};
			


		
		protected:
			MonoObject *__mscorlib_System_IEquatable_1;
		
		private:
		
		};

	}
}
#endif
