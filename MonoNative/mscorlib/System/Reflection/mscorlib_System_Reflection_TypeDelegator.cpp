#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeDelegator.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_StructLayoutAttribute.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			std::vector<mscorlib::System::Reflection::ConstructorInfo*> TypeDelegator::GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetConstructors", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::ConstructorInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::ConstructorInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Object*> TypeDelegator::GetCustomAttributes(mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Object*> TypeDelegator::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Object (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Type TypeDelegator::GetElementType()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetElementType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Reflection::EventInfo TypeDelegator::GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetEvent", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::EventInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::EventInfo*> TypeDelegator::GetEvents()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetEvents", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::EventInfo*> TypeDelegator::GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetEvents", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Reflection::FieldInfo TypeDelegator::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::FieldInfo*> TypeDelegator::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::FieldInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::FieldInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Type TypeDelegator::GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetInterface", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Reflection::InterfaceMapping TypeDelegator::GetInterfaceMap(mscorlib::System::Type interfaceType)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
					__parameters__[0] = (MonoObject*)interfaceType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetInterfaceMap", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::InterfaceMapping(__result__);
			}

			std::vector<mscorlib::System::Type*> TypeDelegator::GetInterfaces()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetInterfaces", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Type (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::MemberInfo*> TypeDelegator::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(type).name());
					__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(type);
					__parameters__[2] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::MemberInfo*> TypeDelegator::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetMembers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::MethodInfo*> TypeDelegator::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Type TypeDelegator::GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			std::vector<mscorlib::System::Type*> TypeDelegator::GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetNestedTypes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Type (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::PropertyInfo*> TypeDelegator::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "GetProperties", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::PropertyInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::PropertyInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Object TypeDelegator::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
			{
					MonoType *__parameter_types__[8];
					void *__parameters__[8];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = Global::GetType(typeid(target).name());
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
					__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					__parameter_types__[6] = Global::GetType(typeid(culture).name());
					__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(namedParameters).name()))->eklass);
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
					__parameters__[2] = (MonoObject*)binder;
					__parameters__[3] = (MonoObject*)target;
					__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
					__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					__parameters__[6] = (MonoObject*)culture;
					__parameters__[7] = Global::FromArray<mscorlib::System::String*>(namedParameters, typeid(mscorlib::System::String).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "InvokeMember", __native_object__, 8, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Boolean TypeDelegator::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean TypeDelegator::IsAssignableFrom(mscorlib::System::Reflection::TypeInfo typeInfo)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(typeInfo).name());
					__parameters__[0] = (MonoObject*)typeInfo;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "IsAssignableFrom", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Assembly
			mscorlib::System::Reflection::Assembly  TypeDelegator::get_Assembly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
			}


			//	Get:AssemblyQualifiedName
			mscorlib::System::String  TypeDelegator::get_AssemblyQualifiedName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_AssemblyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:BaseType
			mscorlib::System::Type  TypeDelegator::get_BaseType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_BaseType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:FullName
			mscorlib::System::String  TypeDelegator::get_FullName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:GUID
			mscorlib::System::Guid  TypeDelegator::get_GUID()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_GUID", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Guid(__result__);
			}


			//	Get:Module
			mscorlib::System::Reflection::Module  TypeDelegator::get_Module()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:Name
			mscorlib::System::String  TypeDelegator::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Namespace
			mscorlib::System::String  TypeDelegator::get_Namespace()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_Namespace", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeHandle
			mscorlib::System::RuntimeTypeHandle  TypeDelegator::get_TypeHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_TypeHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
			}


			//	Get:UnderlyingSystemType
			mscorlib::System::Type  TypeDelegator::get_UnderlyingSystemType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_UnderlyingSystemType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  TypeDelegator::get_MetadataToken()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsConstructedGenericType
			mscorlib::System::Boolean  TypeDelegator::get_IsConstructedGenericType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeDelegator", 0, NULL, "get_IsConstructedGenericType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:DeclaredConstructors
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  TypeDelegator::get_DeclaredConstructors()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredConstructors", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>(__result__);
			}


			//	Get:DeclaredEvents
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  TypeDelegator::get_DeclaredEvents()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredEvents", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>(__result__);
			}


			//	Get:DeclaredFields
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  TypeDelegator::get_DeclaredFields()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredFields", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>(__result__);
			}


			//	Get:DeclaredMethods
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  TypeDelegator::get_DeclaredMethods()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMethods", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>(__result__);
			}


			//	Get:DeclaredProperties
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  TypeDelegator::get_DeclaredProperties()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredProperties", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>(__result__);
			}


			//	Get:DeclaredMembers
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  TypeDelegator::get_DeclaredMembers()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMembers", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>(__result__);
			}


			//	Get:DeclaredNestedTypes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  TypeDelegator::get_DeclaredNestedTypes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredNestedTypes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>(__result__);
			}


			//	Get:GenericTypeParameters
			std::vector<mscorlib::System::Type*>  TypeDelegator::get_GenericTypeParameters()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_GenericTypeParameters", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
			}


			//	Get:ImplementedInterfaces
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  TypeDelegator::get_ImplementedInterfaces()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_ImplementedInterfaces", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>(__result__);
			}


			//	Get:Attributes
			mscorlib::System::Reflection::TypeAttributes::__ENUM__  TypeDelegator::get_Attributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::TypeAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:DeclaringType
			mscorlib::System::Type  TypeDelegator::get_DeclaringType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:HasElementType
			mscorlib::System::Boolean  TypeDelegator::get_HasElementType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_HasElementType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAbstract
			mscorlib::System::Boolean  TypeDelegator::get_IsAbstract()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAnsiClass
			mscorlib::System::Boolean  TypeDelegator::get_IsAnsiClass()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAnsiClass", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsArray
			mscorlib::System::Boolean  TypeDelegator::get_IsArray()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsArray", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAutoClass
			mscorlib::System::Boolean  TypeDelegator::get_IsAutoClass()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoClass", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAutoLayout
			mscorlib::System::Boolean  TypeDelegator::get_IsAutoLayout()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoLayout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsByRef
			mscorlib::System::Boolean  TypeDelegator::get_IsByRef()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsByRef", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsClass
			mscorlib::System::Boolean  TypeDelegator::get_IsClass()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsClass", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsCOMObject
			mscorlib::System::Boolean  TypeDelegator::get_IsCOMObject()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsCOMObject", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsContextful
			mscorlib::System::Boolean  TypeDelegator::get_IsContextful()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsContextful", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsEnum
			mscorlib::System::Boolean  TypeDelegator::get_IsEnum()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsEnum", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsExplicitLayout
			mscorlib::System::Boolean  TypeDelegator::get_IsExplicitLayout()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsExplicitLayout", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsImport
			mscorlib::System::Boolean  TypeDelegator::get_IsImport()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsImport", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsInterface
			mscorlib::System::Boolean  TypeDelegator::get_IsInterface()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsInterface", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsLayoutSequential
			mscorlib::System::Boolean  TypeDelegator::get_IsLayoutSequential()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsLayoutSequential", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsMarshalByRef
			mscorlib::System::Boolean  TypeDelegator::get_IsMarshalByRef()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsMarshalByRef", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedAssembly
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedAssembly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedFamANDAssem
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedFamANDAssem()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamANDAssem", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedFamily
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedFamily()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamily", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedFamORAssem
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedFamORAssem()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamORAssem", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedPrivate
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedPrivate()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPrivate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNestedPublic
			mscorlib::System::Boolean  TypeDelegator::get_IsNestedPublic()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNotPublic
			mscorlib::System::Boolean  TypeDelegator::get_IsNotPublic()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNotPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPointer
			mscorlib::System::Boolean  TypeDelegator::get_IsPointer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPointer", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPrimitive
			mscorlib::System::Boolean  TypeDelegator::get_IsPrimitive()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPrimitive", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPublic
			mscorlib::System::Boolean  TypeDelegator::get_IsPublic()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSealed
			mscorlib::System::Boolean  TypeDelegator::get_IsSealed()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSealed", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSerializable
			mscorlib::System::Boolean  TypeDelegator::get_IsSerializable()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSerializable", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSpecialName
			mscorlib::System::Boolean  TypeDelegator::get_IsSpecialName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsUnicodeClass
			mscorlib::System::Boolean  TypeDelegator::get_IsUnicodeClass()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsUnicodeClass", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsValueType
			mscorlib::System::Boolean  TypeDelegator::get_IsValueType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsValueType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:MemberType
			mscorlib::System::Reflection::MemberTypes::__ENUM__  TypeDelegator::get_MemberType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:ReflectedType
			mscorlib::System::Type  TypeDelegator::get_ReflectedType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:TypeInitializer
			mscorlib::System::Reflection::ConstructorInfo  TypeDelegator::get_TypeInitializer()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_TypeInitializer", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::ConstructorInfo(__result__);
			}


			//	Get:IsSecurityTransparent
			mscorlib::System::Boolean  TypeDelegator::get_IsSecurityTransparent()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityCritical
			mscorlib::System::Boolean  TypeDelegator::get_IsSecurityCritical()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecuritySafeCritical
			mscorlib::System::Boolean  TypeDelegator::get_IsSecuritySafeCritical()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:GenericTypeArguments
			std::vector<mscorlib::System::Type*>  TypeDelegator::get_GenericTypeArguments()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericTypeArguments", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
			}


			//	Get:ContainsGenericParameters
			mscorlib::System::Boolean  TypeDelegator::get_ContainsGenericParameters()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericTypeDefinition
			mscorlib::System::Boolean  TypeDelegator::get_IsGenericTypeDefinition()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericType
			mscorlib::System::Boolean  TypeDelegator::get_IsGenericType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericParameter
			mscorlib::System::Boolean  TypeDelegator::get_IsGenericParameter()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericParameter", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNested
			mscorlib::System::Boolean  TypeDelegator::get_IsNested()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNested", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsVisible
			mscorlib::System::Boolean  TypeDelegator::get_IsVisible()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsVisible", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:GenericParameterPosition
			mscorlib::System::Int32  TypeDelegator::get_GenericParameterPosition()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterPosition", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:GenericParameterAttributes
			mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  TypeDelegator::get_GenericParameterAttributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterAttributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:DeclaringMethod
			mscorlib::System::Reflection::MethodBase  TypeDelegator::get_DeclaringMethod()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DeclaringMethod", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MethodBase(__result__);
			}


			//	Get:StructLayoutAttribute
			mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  TypeDelegator::get_StructLayoutAttribute()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_StructLayoutAttribute", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Runtime::InteropServices::StructLayoutAttribute(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  TypeDelegator::get_CustomAttributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}



		}
	}
}
