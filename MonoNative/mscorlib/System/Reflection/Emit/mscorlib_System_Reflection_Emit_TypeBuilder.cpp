#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ConstructorBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_PropertyBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EventBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h>
#include <mscorlib/System/mscorlib_System_Array.h>
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
				mscorlib::System::Boolean TypeBuilder::IsSubclassOf(mscorlib::System::Type c)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(c).name());
						__parameters__[0] = (MonoObject*)c;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "IsSubclassOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void TypeBuilder::AddDeclarativeSecurity(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Security::PermissionSet pset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(pset).name());
						__parameters__[0] = reinterpret_cast<void*>(action);
						__parameters__[1] = (MonoObject*)pset;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "AddDeclarativeSecurity", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void TypeBuilder::AddInterfaceImplementation(mscorlib::System::Type interfaceType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
						__parameters__[0] = (MonoObject*)interfaceType;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "AddInterfaceImplementation", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean TypeBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> TypeBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> TypeBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attr);
						__parameters__[2] = (MonoObject*)parent;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(interfaces).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attr);
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(interfaces, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typeSize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(typeSize).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attr);
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = &typeSize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder TypeBuilder::DefineNestedType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packSize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(packSize).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attr);
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = reinterpret_cast<void*>(packSize);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineNestedType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ConstructorBuilder TypeBuilder::DefineConstructor(mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(attributes).name());
						__parameter_types__[1] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(attributes);
						__parameters__[1] = reinterpret_cast<void*>(callingConvention);
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineConstructor", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ConstructorBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ConstructorBuilder TypeBuilder::DefineConstructor(mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredCustomModifiers, std::vector<mscorlib::System::Type**> optionalCustomModifiers)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(attributes).name());
						__parameter_types__[1] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredCustomModifiers).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalCustomModifiers).name()))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(attributes);
						__parameters__[1] = reinterpret_cast<void*>(callingConvention);
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Type**>(requiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type**>(optionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineConstructor", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ConstructorBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ConstructorBuilder TypeBuilder::DefineDefaultConstructor(mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineDefaultConstructor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ConstructorBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefineMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethod", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefineMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = reinterpret_cast<void*>(callingConvention);
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefineMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeOptionalCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = reinterpret_cast<void*>(callingConvention);
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(returnTypeRequiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(returnTypeOptionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(parameterTypeRequiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[8] = Global::FromArray<mscorlib::System::Type**>(parameterTypeOptionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::String entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(dllName).name());
						__parameter_types__[2] = Global::GetType(typeid(entryName).name());
						__parameter_types__[3] = Global::GetType(typeid(attributes).name());
						__parameter_types__[4] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[5] = Global::GetType(typeid(returnType).name());
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[7] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[8] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)dllName;
						__parameters__[2] = (MonoObject*)entryName;
						__parameters__[3] = reinterpret_cast<void*>(attributes);
						__parameters__[4] = reinterpret_cast<void*>(callingConvention);
						__parameters__[5] = (MonoObject*)returnType;
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[7] = reinterpret_cast<void*>(nativeCallConv);
						__parameters__[8] = reinterpret_cast<void*>(nativeCharSet);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::String entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[13];
						void *__parameters__[13];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(dllName).name());
						__parameter_types__[2] = Global::GetType(typeid(entryName).name());
						__parameter_types__[3] = Global::GetType(typeid(attributes).name());
						__parameter_types__[4] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[5] = Global::GetType(typeid(returnType).name());
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[9] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[10] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[11] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[12] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)dllName;
						__parameters__[2] = (MonoObject*)entryName;
						__parameters__[3] = reinterpret_cast<void*>(attributes);
						__parameters__[4] = reinterpret_cast<void*>(callingConvention);
						__parameters__[5] = (MonoObject*)returnType;
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(returnTypeRequiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type*>(returnTypeOptionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[8] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[9] = Global::FromArray<mscorlib::System::Type**>(parameterTypeRequiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[10] = Global::FromArray<mscorlib::System::Type**>(parameterTypeOptionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[11] = reinterpret_cast<void*>(nativeCallConv);
						__parameters__[12] = reinterpret_cast<void*>(nativeCharSet);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 13, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(dllName).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameter_types__[3] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[4] = Global::GetType(typeid(returnType).name());
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[6] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[7] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)dllName;
						__parameters__[2] = reinterpret_cast<void*>(attributes);
						__parameters__[3] = reinterpret_cast<void*>(callingConvention);
						__parameters__[4] = (MonoObject*)returnType;
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[6] = reinterpret_cast<void*>(nativeCallConv);
						__parameters__[7] = reinterpret_cast<void*>(nativeCharSet);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefineMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder TypeBuilder::DefineMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = reinterpret_cast<void*>(callingConvention);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethod", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				void TypeBuilder::DefineMethodOverride(mscorlib::System::Reflection::MethodInfo methodInfoBody, mscorlib::System::Reflection::MethodInfo methodInfoDeclaration)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(methodInfoBody).name());
						__parameter_types__[1] = Global::GetType(typeid(methodInfoDeclaration).name());
						__parameters__[0] = (MonoObject*)methodInfoBody;
						__parameters__[1] = (MonoObject*)methodInfoDeclaration;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineMethodOverride", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder TypeBuilder::DefineField(mscorlib::System::String fieldName, mscorlib::System::Type type, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fieldName).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)fieldName;
						__parameters__[1] = (MonoObject*)type;
						__parameters__[2] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineField", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder TypeBuilder::DefineField(mscorlib::System::String fieldName, mscorlib::System::Type type, std::vector<mscorlib::System::Type*> requiredCustomModifiers, std::vector<mscorlib::System::Type*> optionalCustomModifiers, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(fieldName).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredCustomModifiers).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalCustomModifiers).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)fieldName;
						__parameters__[1] = (MonoObject*)type;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(requiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(optionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[4] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineField", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::PropertyBuilder TypeBuilder::DefineProperty(mscorlib::System::String name, mscorlib::System::Reflection::PropertyAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineProperty", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::PropertyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::PropertyBuilder TypeBuilder::DefineProperty(mscorlib::System::String name, mscorlib::System::Reflection::PropertyAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = reinterpret_cast<void*>(callingConvention);
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineProperty", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::PropertyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::PropertyBuilder TypeBuilder::DefineProperty(mscorlib::System::String name, mscorlib::System::Reflection::PropertyAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeOptionalCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(returnTypeRequiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(returnTypeOptionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type**>(parameterTypeRequiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(parameterTypeOptionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineProperty", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::PropertyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::PropertyBuilder TypeBuilder::DefineProperty(mscorlib::System::String name, mscorlib::System::Reflection::PropertyAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeOptionalCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = reinterpret_cast<void*>(callingConvention);
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(returnTypeRequiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(returnTypeOptionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(parameterTypeRequiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[8] = Global::FromArray<mscorlib::System::Type**>(parameterTypeOptionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineProperty", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::PropertyBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::ConstructorBuilder TypeBuilder::DefineTypeInitializer()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineTypeInitializer", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::ConstructorBuilder(__result__);
				}

				mscorlib::System::Type TypeBuilder::CreateType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "CreateType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::TypeInfo TypeBuilder::CreateTypeInfo()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "CreateTypeInfo", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::TypeInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::ConstructorInfo*> TypeBuilder::GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetConstructors", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type TypeBuilder::GetElementType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetElementType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::EventInfo TypeBuilder::GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetEvent", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::EventInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::EventInfo*> TypeBuilder::GetEvents()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetEvents", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::EventInfo*> TypeBuilder::GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetEvents", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::FieldInfo TypeBuilder::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::FieldInfo*> TypeBuilder::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type TypeBuilder::GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetInterface", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Type*> TypeBuilder::GetInterfaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetInterfaces", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> TypeBuilder::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(type);
						__parameters__[2] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> TypeBuilder::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetMembers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MethodInfo*> TypeBuilder::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type TypeBuilder::GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Type*> TypeBuilder::GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetNestedTypes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::PropertyInfo*> TypeBuilder::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetProperties", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Object TypeBuilder::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "InvokeMember", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Type TypeBuilder::MakeArrayType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "MakeArrayType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type TypeBuilder::MakeArrayType(mscorlib::System::Int32 rank)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rank).name());
						__parameters__[0] = &rank;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "MakeArrayType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type TypeBuilder::MakeByRefType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "MakeByRefType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type TypeBuilder::MakeGenericType(std::vector<mscorlib::System::Type*> typeArguments)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(typeArguments).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(typeArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "MakeGenericType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type TypeBuilder::MakePointerType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "MakePointerType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				void TypeBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void TypeBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryAttribute).name()))->eklass);
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::EventBuilder TypeBuilder::DefineEvent(mscorlib::System::String name, mscorlib::System::Reflection::EventAttributes::__ENUM__ attributes, mscorlib::System::Type eventtype)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(eventtype).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)eventtype;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineEvent", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::EventBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder TypeBuilder::DefineInitializedData(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						__parameters__[2] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineInitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder TypeBuilder::DefineUninitializedData(mscorlib::System::String name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(size).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &size;
						__parameters__[2] = reinterpret_cast<void*>(attributes);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineUninitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				void TypeBuilder::SetParent(mscorlib::System::Type parent)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(parent).name());
						__parameters__[0] = (MonoObject*)parent;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "SetParent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::InterfaceMapping TypeBuilder::GetInterfaceMap(mscorlib::System::Type interfaceType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
						__parameters__[0] = (MonoObject*)interfaceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetInterfaceMap", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::InterfaceMapping(__result__);
				}

				mscorlib::System::String TypeBuilder::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean TypeBuilder::IsAssignableFrom(mscorlib::System::Type c)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(c).name());
						__parameters__[0] = (MonoObject*)c;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "IsAssignableFrom", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean TypeBuilder::IsCreated()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "IsCreated", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Type*> TypeBuilder::GetGenericArguments()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetGenericArguments", __native_object__, 0, NULL, NULL, NULL);
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

				mscorlib::System::Type TypeBuilder::GetGenericTypeDefinition()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Reflection::Emit::GenericTypeParameterBuilder*> TypeBuilder::DefineGenericParameters(std::vector<mscorlib::System::String*> names)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(names).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::String*>(names, typeid(mscorlib::System::String).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "DefineGenericParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::Emit::GenericTypeParameterBuilder*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::Emit::GenericTypeParameterBuilder (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Reflection::ConstructorInfo TypeBuilder::GetConstructor(mscorlib::System::Type type, mscorlib::System::Reflection::ConstructorInfo constructor)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(constructor).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)constructor;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetConstructor", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo TypeBuilder::GetMethod(mscorlib::System::Type type, mscorlib::System::Reflection::MethodInfo method)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetMethod", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::FieldInfo TypeBuilder::GetField(mscorlib::System::Type type, mscorlib::System::Reflection::FieldInfo field)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(field).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)field;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "GetField", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				mscorlib::System::Boolean TypeBuilder::IsAssignableFrom(mscorlib::System::Reflection::TypeInfo typeInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typeInfo).name());
						__parameters__[0] = (MonoObject*)typeInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "IsAssignableFrom", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  TypeBuilder::get_Assembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
				}


				//	Get:AssemblyQualifiedName
				mscorlib::System::String  TypeBuilder::get_AssemblyQualifiedName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_AssemblyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:BaseType
				mscorlib::System::Type  TypeBuilder::get_BaseType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_BaseType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  TypeBuilder::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:UnderlyingSystemType
				mscorlib::System::Type  TypeBuilder::get_UnderlyingSystemType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_UnderlyingSystemType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:FullName
				mscorlib::System::String  TypeBuilder::get_FullName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:GUID
				mscorlib::System::Guid  TypeBuilder::get_GUID() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_GUID", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  TypeBuilder::get_Module() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:Name
				mscorlib::System::String  TypeBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Namespace
				mscorlib::System::String  TypeBuilder::get_Namespace() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_Namespace", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PackingSize
				mscorlib::System::Reflection::Emit::PackingSize::__ENUM__  TypeBuilder::get_PackingSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_PackingSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::PackingSize::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Size
				mscorlib::System::Int32  TypeBuilder::get_Size() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_Size", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  TypeBuilder::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeHandle
				mscorlib::System::RuntimeTypeHandle  TypeBuilder::get_TypeHandle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_TypeHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeTypeHandle(__result__);
				}


				//	Get:TypeToken
				mscorlib::System::Reflection::Emit::TypeToken  TypeBuilder::get_TypeToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_TypeToken", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Emit::TypeToken(__result__);
				}


				//	Get:ContainsGenericParameters
				mscorlib::System::Boolean  TypeBuilder::get_ContainsGenericParameters() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericParameter
				mscorlib::System::Boolean  TypeBuilder::get_IsGenericParameter() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_IsGenericParameter", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:GenericParameterAttributes
				mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  TypeBuilder::get_GenericParameterAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_GenericParameterAttributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericTypeDefinition
				mscorlib::System::Boolean  TypeBuilder::get_IsGenericTypeDefinition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_IsGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericType
				mscorlib::System::Boolean  TypeBuilder::get_IsGenericType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_IsGenericType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:GenericParameterPosition
				mscorlib::System::Int32  TypeBuilder::get_GenericParameterPosition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_GenericParameterPosition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringMethod
				mscorlib::System::Reflection::MethodBase  TypeBuilder::get_DeclaringMethod() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_DeclaringMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
				}


				//	Get:IsConstructedGenericType
				mscorlib::System::Boolean  TypeBuilder::get_IsConstructedGenericType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "get_IsConstructedGenericType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:DeclaredConstructors
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  TypeBuilder::get_DeclaredConstructors() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredConstructors", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>(__result__);
				}


				//	Get:DeclaredEvents
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  TypeBuilder::get_DeclaredEvents() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredEvents", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>(__result__);
				}


				//	Get:DeclaredFields
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  TypeBuilder::get_DeclaredFields() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredFields", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>(__result__);
				}


				//	Get:DeclaredMethods
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  TypeBuilder::get_DeclaredMethods() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMethods", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>(__result__);
				}


				//	Get:DeclaredProperties
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  TypeBuilder::get_DeclaredProperties() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredProperties", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>(__result__);
				}


				//	Get:DeclaredMembers
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  TypeBuilder::get_DeclaredMembers() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredMembers", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>(__result__);
				}


				//	Get:DeclaredNestedTypes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  TypeBuilder::get_DeclaredNestedTypes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_DeclaredNestedTypes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>(__result__);
				}


				//	Get:GenericTypeParameters
				std::vector<mscorlib::System::Type*>  TypeBuilder::get_GenericTypeParameters() const
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
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  TypeBuilder::get_ImplementedInterfaces() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "TypeInfo", 0, NULL, "get_ImplementedInterfaces", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Reflection::TypeAttributes::__ENUM__  TypeBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::TypeAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:HasElementType
				mscorlib::System::Boolean  TypeBuilder::get_HasElementType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_HasElementType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  TypeBuilder::get_IsAbstract() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAnsiClass
				mscorlib::System::Boolean  TypeBuilder::get_IsAnsiClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAnsiClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsArray
				mscorlib::System::Boolean  TypeBuilder::get_IsArray() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsArray", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoClass
				mscorlib::System::Boolean  TypeBuilder::get_IsAutoClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoLayout
				mscorlib::System::Boolean  TypeBuilder::get_IsAutoLayout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoLayout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsByRef
				mscorlib::System::Boolean  TypeBuilder::get_IsByRef() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsByRef", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsClass
				mscorlib::System::Boolean  TypeBuilder::get_IsClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsCOMObject
				mscorlib::System::Boolean  TypeBuilder::get_IsCOMObject() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsCOMObject", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsContextful
				mscorlib::System::Boolean  TypeBuilder::get_IsContextful() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsContextful", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsEnum
				mscorlib::System::Boolean  TypeBuilder::get_IsEnum() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsEnum", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsExplicitLayout
				mscorlib::System::Boolean  TypeBuilder::get_IsExplicitLayout() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsExplicitLayout", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsImport
				mscorlib::System::Boolean  TypeBuilder::get_IsImport() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsImport", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInterface
				mscorlib::System::Boolean  TypeBuilder::get_IsInterface() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsInterface", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsLayoutSequential
				mscorlib::System::Boolean  TypeBuilder::get_IsLayoutSequential() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsLayoutSequential", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsMarshalByRef
				mscorlib::System::Boolean  TypeBuilder::get_IsMarshalByRef() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsMarshalByRef", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedAssembly
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamANDAssem
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedFamANDAssem() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamANDAssem", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamily
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedFamily() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamORAssem
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedFamORAssem() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamORAssem", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPrivate
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedPrivate() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPublic
				mscorlib::System::Boolean  TypeBuilder::get_IsNestedPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNotPublic
				mscorlib::System::Boolean  TypeBuilder::get_IsNotPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNotPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPointer
				mscorlib::System::Boolean  TypeBuilder::get_IsPointer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPointer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrimitive
				mscorlib::System::Boolean  TypeBuilder::get_IsPrimitive() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPrimitive", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  TypeBuilder::get_IsPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSealed
				mscorlib::System::Boolean  TypeBuilder::get_IsSealed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSealed", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSerializable
				mscorlib::System::Boolean  TypeBuilder::get_IsSerializable() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSerializable", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  TypeBuilder::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsUnicodeClass
				mscorlib::System::Boolean  TypeBuilder::get_IsUnicodeClass() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsUnicodeClass", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsValueType
				mscorlib::System::Boolean  TypeBuilder::get_IsValueType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsValueType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  TypeBuilder::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:TypeInitializer
				mscorlib::System::Reflection::ConstructorInfo  TypeBuilder::get_TypeInitializer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_TypeInitializer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  TypeBuilder::get_IsSecurityTransparent() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  TypeBuilder::get_IsSecurityCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  TypeBuilder::get_IsSecuritySafeCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:GenericTypeArguments
				std::vector<mscorlib::System::Type*>  TypeBuilder::get_GenericTypeArguments() const
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


				//	Get:IsNested
				mscorlib::System::Boolean  TypeBuilder::get_IsNested() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNested", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVisible
				mscorlib::System::Boolean  TypeBuilder::get_IsVisible() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsVisible", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:StructLayoutAttribute
				mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  TypeBuilder::get_StructLayoutAttribute() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_StructLayoutAttribute", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::InteropServices::StructLayoutAttribute(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  TypeBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  TypeBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}


					//	Get/Set:UnspecifiedTypeSize
				mscorlib::System::Int32 TypeBuilder::get_UnspecifiedTypeSize()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Reflection.Emit", "TypeBuilder", 0, NULL, "UnspecifiedTypeSize");
				}

				void TypeBuilder::set_UnspecifiedTypeSize(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
