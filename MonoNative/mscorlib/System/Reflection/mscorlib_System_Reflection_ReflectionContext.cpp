#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ReflectionContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::TypeInfo ReflectionContext::GetTypeForObject(mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionContext", 0, NULL, "GetTypeForObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::TypeInfo(__result__);
			}

			mscorlib::System::Reflection::Assembly ReflectionContext::MapAssembly(mscorlib::System::Reflection::Assembly assembly)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assembly).name());
					__parameters__[0] = (MonoObject*)assembly;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionContext", 0, NULL, "MapAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
			}

			mscorlib::System::Reflection::TypeInfo ReflectionContext::MapType(mscorlib::System::Reflection::TypeInfo type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ReflectionContext", 0, NULL, "MapType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::TypeInfo(__result__);
			}


		}
	}
}
