#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EnumBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldBuilder.h>
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
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Type EnumBuilder::CreateType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "CreateType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type EnumBuilder::GetEnumUnderlyingType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetEnumUnderlyingType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder EnumBuilder::DefineLiteral(mscorlib::System::String literalName, mscorlib::System::Object literalValue)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(literalName).name());
						__parameter_types__[1] = Global::GetType(typeid(literalValue).name());
						__parameters__[0] = (MonoObject*)literalName;
						__parameters__[1] = (MonoObject*)literalValue;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "DefineLiteral", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				std::vector<mscorlib::System::Reflection::ConstructorInfo*> EnumBuilder::GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetConstructors", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> EnumBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> EnumBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type EnumBuilder::GetElementType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetElementType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::EventInfo EnumBuilder::GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetEvent", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::EventInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::EventInfo*> EnumBuilder::GetEvents()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetEvents", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::EventInfo*> EnumBuilder::GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetEvents", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::FieldInfo EnumBuilder::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::FieldInfo*> EnumBuilder::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type EnumBuilder::GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetInterface", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::InterfaceMapping EnumBuilder::GetInterfaceMap(mscorlib::System::Type interfaceType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
						__parameters__[0] = (MonoObject*)interfaceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetInterfaceMap", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::InterfaceMapping(__result__);
				}

				std::vector<mscorlib::System::Type*> EnumBuilder::GetInterfaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetInterfaces", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> EnumBuilder::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(type);
						__parameters__[2] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> EnumBuilder::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetMembers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MethodInfo*> EnumBuilder::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type EnumBuilder::GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Type*> EnumBuilder::GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetNestedTypes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::PropertyInfo*> EnumBuilder::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "GetProperties", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Object EnumBuilder::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "InvokeMember", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean EnumBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Type EnumBuilder::MakeArrayType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "MakeArrayType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type EnumBuilder::MakeArrayType(mscorlib::System::Int32 rank)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rank).name());
						__parameters__[0] = &rank;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "MakeArrayType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type EnumBuilder::MakeByRefType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "MakeByRefType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type EnumBuilder::MakePointerType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "MakePointerType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				void EnumBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void EnumBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryAttribute).name()))->eklass);
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean EnumBuilder::IsAssignableFrom(mscorlib::System::Reflection::TypeInfo typeInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typeInfo).name());
						__parameters__[0] = (MonoObject*)typeInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "IsAssignableFrom", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  EnumBuilder::get_Assembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
				}


				//	Get:AssemblyQualifiedName
				mscorlib::System::String  EnumBuilder::get_AssemblyQualifiedName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_AssemblyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:BaseType
				mscorlib::System::Type  EnumBuilder::get_BaseType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_BaseType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  EnumBuilder::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:FullName
				mscorlib::System::String  EnumBuilder::get_FullName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:GUID
				mscorlib::System::Guid  EnumBuilder::get_GUID() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_GUID", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  EnumBuilder::get_Module() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:Name
				mscorlib::System::String  EnumBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Namespace
				mscorlib::System::String  EnumBuilder::get_Namespace() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_Namespace", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  EnumBuilder::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeHandle
				mscorlib::System::RuntimeTypeHandle  EnumBuilder::get_TypeHandle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_TypeHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeTypeHandle(__result__);
				}


				//	Get:TypeToken
				mscorlib::System::Reflection::Emit::TypeToken  EnumBuilder::get_TypeToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_TypeToken", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Emit::TypeToken(__result__);
				}


				//	Get:UnderlyingField
				mscorlib::System::Reflection::Emit::FieldBuilder  EnumBuilder::get_UnderlyingField() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_UnderlyingField", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}


				//	Get:UnderlyingSystemType
				mscorlib::System::Type  EnumBuilder::get_UnderlyingSystemType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_UnderlyingSystemType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:IsConstructedGenericType
				mscorlib::System::Boolean  EnumBuilder::get_IsConstructedGenericType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EnumBuilder", 0, NULL, "get_IsConstructedGenericType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:DeclaredConstructors
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  EnumBuilder::get_DeclaredConstructors() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredConstructors", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>(__result__);
				}


				//	Get:DeclaredEvents
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  EnumBuilder::get_DeclaredEvents() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredEvents", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>(__result__);
				}


				//	Get:DeclaredFields
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  EnumBuilder::get_DeclaredFields() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredFields", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>(__result__);
				}


				//	Get:DeclaredMethods
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  EnumBuilder::get_DeclaredMethods() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMethods", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>(__result__);
				}


				//	Get:DeclaredProperties
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  EnumBuilder::get_DeclaredProperties() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredProperties", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>(__result__);
				}


				//	Get:DeclaredMembers
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  EnumBuilder::get_DeclaredMembers() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMembers", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>(__result__);
				}


				//	Get:DeclaredNestedTypes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  EnumBuilder::get_DeclaredNestedTypes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredNestedTypes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>(__result__);
				}


				//	Get:GenericTypeParameters
				std::vector<mscorlib::System::Type*>  EnumBuilder::get_GenericTypeParameters() const
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
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  EnumBuilder::get_ImplementedInterfaces() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_ImplementedInterfaces", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Reflection::TypeAttributes::__ENUM__  EnumBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::TypeAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:HasElementType
				mscorlib::System::Boolean  EnumBuilder::get_HasElementType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_HasElementType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  EnumBuilder::get_IsAbstract() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAnsiClass
				mscorlib::System::Boolean  EnumBuilder::get_IsAnsiClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAnsiClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsArray
				mscorlib::System::Boolean  EnumBuilder::get_IsArray() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsArray", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoClass
				mscorlib::System::Boolean  EnumBuilder::get_IsAutoClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoLayout
				mscorlib::System::Boolean  EnumBuilder::get_IsAutoLayout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoLayout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsByRef
				mscorlib::System::Boolean  EnumBuilder::get_IsByRef() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsByRef", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsClass
				mscorlib::System::Boolean  EnumBuilder::get_IsClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsCOMObject
				mscorlib::System::Boolean  EnumBuilder::get_IsCOMObject() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsCOMObject", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsContextful
				mscorlib::System::Boolean  EnumBuilder::get_IsContextful() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsContextful", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsEnum
				mscorlib::System::Boolean  EnumBuilder::get_IsEnum() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsEnum", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsExplicitLayout
				mscorlib::System::Boolean  EnumBuilder::get_IsExplicitLayout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsExplicitLayout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsImport
				mscorlib::System::Boolean  EnumBuilder::get_IsImport() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsImport", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInterface
				mscorlib::System::Boolean  EnumBuilder::get_IsInterface() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsInterface", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsLayoutSequential
				mscorlib::System::Boolean  EnumBuilder::get_IsLayoutSequential() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsLayoutSequential", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsMarshalByRef
				mscorlib::System::Boolean  EnumBuilder::get_IsMarshalByRef() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsMarshalByRef", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedAssembly
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamANDAssem
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedFamANDAssem() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamANDAssem", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamily
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedFamily() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamORAssem
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedFamORAssem() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamORAssem", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPrivate
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedPrivate() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPublic
				mscorlib::System::Boolean  EnumBuilder::get_IsNestedPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNotPublic
				mscorlib::System::Boolean  EnumBuilder::get_IsNotPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNotPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPointer
				mscorlib::System::Boolean  EnumBuilder::get_IsPointer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPointer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrimitive
				mscorlib::System::Boolean  EnumBuilder::get_IsPrimitive() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPrimitive", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  EnumBuilder::get_IsPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSealed
				mscorlib::System::Boolean  EnumBuilder::get_IsSealed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSealed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSerializable
				mscorlib::System::Boolean  EnumBuilder::get_IsSerializable() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSerializable", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  EnumBuilder::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsUnicodeClass
				mscorlib::System::Boolean  EnumBuilder::get_IsUnicodeClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsUnicodeClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsValueType
				mscorlib::System::Boolean  EnumBuilder::get_IsValueType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsValueType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  EnumBuilder::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:TypeInitializer
				mscorlib::System::Reflection::ConstructorInfo  EnumBuilder::get_TypeInitializer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_TypeInitializer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  EnumBuilder::get_IsSecurityTransparent() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  EnumBuilder::get_IsSecurityCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  EnumBuilder::get_IsSecuritySafeCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:GenericTypeArguments
				std::vector<mscorlib::System::Type*>  EnumBuilder::get_GenericTypeArguments() const
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
				mscorlib::System::Boolean  EnumBuilder::get_ContainsGenericParameters() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericTypeDefinition
				mscorlib::System::Boolean  EnumBuilder::get_IsGenericTypeDefinition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericType
				mscorlib::System::Boolean  EnumBuilder::get_IsGenericType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericParameter
				mscorlib::System::Boolean  EnumBuilder::get_IsGenericParameter() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericParameter", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNested
				mscorlib::System::Boolean  EnumBuilder::get_IsNested() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNested", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVisible
				mscorlib::System::Boolean  EnumBuilder::get_IsVisible() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsVisible", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:GenericParameterPosition
				mscorlib::System::Int32  EnumBuilder::get_GenericParameterPosition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterPosition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:GenericParameterAttributes
				mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  EnumBuilder::get_GenericParameterAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterAttributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringMethod
				mscorlib::System::Reflection::MethodBase  EnumBuilder::get_DeclaringMethod() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DeclaringMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
				}


				//	Get:StructLayoutAttribute
				mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  EnumBuilder::get_StructLayoutAttribute() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_StructLayoutAttribute", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::InteropServices::StructLayoutAttribute(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  EnumBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  EnumBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
