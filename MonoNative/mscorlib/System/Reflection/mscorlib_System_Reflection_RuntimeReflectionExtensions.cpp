#include <mscorlib/System/Reflection/mscorlib_System_Reflection_RuntimeReflectionExtensions.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::MethodInfo RuntimeReflectionExtensions::GetMethodInfo(mscorlib::System::Delegate del)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(del).name());
					__parameters__[0] = (MonoObject*)del;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetMethodInfo", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo RuntimeReflectionExtensions::GetRuntimeBaseDefinition(mscorlib::System::Reflection::MethodInfo method)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(method).name());
					__parameters__[0] = (MonoObject*)method;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeBaseDefinition", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::EventInfo RuntimeReflectionExtensions::GetRuntimeEvent(mscorlib::System::Type type, mscorlib::System::String name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeEvent", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::EventInfo(__result__);
			}

			mscorlib::System::Reflection::EventInfo RuntimeReflectionExtensions::GetRuntimeEvent(mscorlib::System::Type type, const char *name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeEvent", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::EventInfo(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo> RuntimeReflectionExtensions::GetRuntimeEvents(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeEvents", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>(__result__);
			}

			mscorlib::System::Reflection::FieldInfo RuntimeReflectionExtensions::GetRuntimeField(mscorlib::System::Type type, mscorlib::System::String name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeField", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::FieldInfo RuntimeReflectionExtensions::GetRuntimeField(mscorlib::System::Type type, const char *name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeField", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo> RuntimeReflectionExtensions::GetRuntimeFields(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeFields", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>(__result__);
			}

			mscorlib::System::Reflection::InterfaceMapping RuntimeReflectionExtensions::GetRuntimeInterfaceMap(mscorlib::System::Reflection::TypeInfo typeInfo, mscorlib::System::Type interfaceType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(typeInfo).name());
					__parameter_types__[1] = Global::GetType(typeid(interfaceType).name());
					__parameters__[0] = (MonoObject*)typeInfo;
					__parameters__[1] = (MonoObject*)interfaceType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeInterfaceMap", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::InterfaceMapping(__result__);
			}

			mscorlib::System::Reflection::MethodInfo RuntimeReflectionExtensions::GetRuntimeMethod(mscorlib::System::Type type, mscorlib::System::String name, std::vector<mscorlib::System::Type*> parameters)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType(typeid(name).name());
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = (MonoObject*)name;
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameters, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeMethod", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo RuntimeReflectionExtensions::GetRuntimeMethod(mscorlib::System::Type type, const char *name, std::vector<mscorlib::System::Type*> parameters)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = mono_string_new(Global::GetDomain(), name);
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameters, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeMethod", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo> RuntimeReflectionExtensions::GetRuntimeMethods(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeMethods", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo> RuntimeReflectionExtensions::GetRuntimeProperties(mscorlib::System::Type type)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)type;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeProperties", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>(__result__);
			}

			mscorlib::System::Reflection::PropertyInfo RuntimeReflectionExtensions::GetRuntimeProperty(mscorlib::System::Type type, mscorlib::System::String name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeProperty", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::PropertyInfo(__result__);
			}

			mscorlib::System::Reflection::PropertyInfo RuntimeReflectionExtensions::GetRuntimeProperty(mscorlib::System::Type type, const char *name)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(type).name());
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)type;
					__parameters__[1] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "RuntimeReflectionExtensions", 0, NULL, "GetRuntimeProperty", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::PropertyInfo(__result__);
			}


		}
	}
}
