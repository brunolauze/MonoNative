#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ICUSTOMATTRIBUTEPROVIDER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ICustomAttributeProvider
			{
			public:
				ICustomAttributeProvider(MonoObject *nativeObject)
				{
					__mscorlib_System_Reflection_ICustomAttributeProvider = nativeObject;
				};
			
				~ICustomAttributeProvider()
				{
				};
			

				ICustomAttributeProvider & operator=(ICustomAttributeProvider &value) { __mscorlib_System_Reflection_ICustomAttributeProvider = value.__mscorlib_System_Reflection_ICustomAttributeProvider; return value; };
				operator MonoObject*() { return __mscorlib_System_Reflection_ICustomAttributeProvider; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Reflection_ICustomAttributeProvider = value; return value; };


				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);


			
			protected:
				MonoObject *__mscorlib_System_Reflection_ICustomAttributeProvider;
			
			private:
			
			};

		}
	}
}
#endif
