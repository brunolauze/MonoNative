#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_IREFLECTABLETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_IREFLECTABLETYPE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class TypeInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class IReflectableType
			{
			public:
				IReflectableType(MonoObject *nativeObject)
				{
					__mscorlib_System_Reflection_IReflectableType = nativeObject;
				};
			
				~IReflectableType()
				{
				};
			

				IReflectableType & operator=(IReflectableType &value) { __mscorlib_System_Reflection_IReflectableType = value.__mscorlib_System_Reflection_IReflectableType; return value; };
				operator MonoObject*() { return __mscorlib_System_Reflection_IReflectableType; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Reflection_IReflectableType = value; return value; };


				virtual mscorlib::System::Reflection::TypeInfo  GetTypeInfo();


			
			protected:
				MonoObject *__mscorlib_System_Reflection_IReflectableType;
			
			private:
			
			};

		}
	}
}
#endif
