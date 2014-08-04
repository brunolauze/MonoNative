#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IntrospectionExtensions.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::TypeInfo IntrospectionExtensions::GetTypeInfo(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IntrospectionExtensions", 0, NULL, "GetTypeInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::TypeInfo(__result__);
			}


		}
	}
}
