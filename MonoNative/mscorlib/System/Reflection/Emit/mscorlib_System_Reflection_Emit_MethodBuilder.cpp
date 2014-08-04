#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ILGenerator.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ParameterBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_UnmanagedMarshal.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBody.h>
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
				mscorlib::System::Reflection::Emit::MethodToken MethodBuilder::GetToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				mscorlib::System::Reflection::MethodInfo MethodBuilder::GetBaseDefinition()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetBaseDefinition", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ MethodBuilder::GetMethodImplementationFlags()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetMethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Reflection::ParameterInfo*> MethodBuilder::GetParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetParameters", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::ParameterInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::ParameterInfo (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Reflection::Module MethodBuilder::GetModule()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetModule", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				void MethodBuilder::CreateMethodBody(std::vector<mscorlib::System::Byte*> il, mscorlib::System::Int32 count)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(il).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(il, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &count;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "CreateMethodBody", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object MethodBuilder::Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameters).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(parameters, typeid(mscorlib::System::Object).name());
						__parameters__[4] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "Invoke", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean MethodBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> MethodBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> MethodBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Emit::ILGenerator MethodBuilder::GetILGenerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetILGenerator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				mscorlib::System::Reflection::Emit::ILGenerator MethodBuilder::GetILGenerator(mscorlib::System::Int32 size)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(size).name());
						__parameters__[0] = &size;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetILGenerator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				mscorlib::System::Reflection::Emit::ParameterBuilder MethodBuilder::DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::String strParamName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(position).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(strParamName).name());
						__parameters__[0] = &position;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)strParamName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "DefineParameter", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ParameterBuilder(__result__);
				}

				void MethodBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryAttribute).name()))->eklass);
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetImplementationFlags(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = reinterpret_cast<void*>(attributes);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetImplementationFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::AddDeclarativeSecurity(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Security::PermissionSet pset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(pset).name());
						__parameters__[0] = reinterpret_cast<void*>(action);
						__parameters__[1] = (MonoObject*)pset;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "AddDeclarativeSecurity", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetMarshal(mscorlib::System::Reflection::Emit::UnmanagedMarshal unmanagedMarshal)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(unmanagedMarshal).name());
						__parameters__[0] = (MonoObject*)unmanagedMarshal;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetMarshal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetSymCustomAttribute(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetSymCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String MethodBuilder::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean MethodBuilder::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 MethodBuilder::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::MethodInfo MethodBuilder::MakeGenericMethod(std::vector<mscorlib::System::Type*> typeArguments)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(typeArguments).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(typeArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "MakeGenericMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo MethodBuilder::GetGenericMethodDefinition()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Type*> MethodBuilder::GetGenericArguments()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "GetGenericArguments", __native_object__, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::Emit::GenericTypeParameterBuilder*> MethodBuilder::DefineGenericParameters(std::vector<mscorlib::System::String*> names)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(names).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::String*>(names, typeid(mscorlib::System::String).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "DefineGenericParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void MethodBuilder::SetReturnType(mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(returnType).name());
						__parameters__[0] = (MonoObject*)returnType;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetReturnType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetParameters(std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void MethodBuilder::SetSignature(mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(returnType).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(returnTypeOptionalCustomModifiers).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeRequiredCustomModifiers).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypeOptionalCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)returnType;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(returnTypeRequiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(returnTypeOptionalCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type**>(parameterTypeRequiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type**>(parameterTypeOptionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "SetSignature", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:ContainsGenericParameters
				mscorlib::System::Boolean  MethodBuilder::get_ContainsGenericParameters()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:InitLocals
				mscorlib::System::Boolean  MethodBuilder::get_InitLocals()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_InitLocals", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void MethodBuilder::set_InitLocals(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "set_InitLocals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:MethodHandle
				mscorlib::System::RuntimeMethodHandle  MethodBuilder::get_MethodHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_MethodHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeMethodHandle(__result__);
				}


				//	Get:ReturnType
				mscorlib::System::Type  MethodBuilder::get_ReturnType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_ReturnType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  MethodBuilder::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  MethodBuilder::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Name
				mscorlib::System::String  MethodBuilder::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Reflection::MethodAttributes::__ENUM__  MethodBuilder::get_Attributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ReturnTypeCustomAttributes
				mscorlib::System::Reflection::ICustomAttributeProvider  MethodBuilder::get_ReturnTypeCustomAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_ReturnTypeCustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ICustomAttributeProvider(__result__);
				}


				//	Get:CallingConvention
				mscorlib::System::Reflection::CallingConventions::__ENUM__  MethodBuilder::get_CallingConvention()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Signature
				mscorlib::System::String  MethodBuilder::get_Signature()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_Signature", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:IsGenericMethodDefinition
				mscorlib::System::Boolean  MethodBuilder::get_IsGenericMethodDefinition()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_IsGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericMethod
				mscorlib::System::Boolean  MethodBuilder::get_IsGenericMethod()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_IsGenericMethod", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  MethodBuilder::get_Module()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:ReturnParameter
				mscorlib::System::Reflection::ParameterInfo  MethodBuilder::get_ReturnParameter()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "MethodBuilder", 0, NULL, "get_ReturnParameter", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ParameterInfo(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  MethodBuilder::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  MethodBuilder::get_IsPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  MethodBuilder::get_IsPrivate()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  MethodBuilder::get_IsFamily()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  MethodBuilder::get_IsAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  MethodBuilder::get_IsFamilyAndAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  MethodBuilder::get_IsFamilyOrAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  MethodBuilder::get_IsStatic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFinal
				mscorlib::System::Boolean  MethodBuilder::get_IsFinal()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFinal", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVirtual
				mscorlib::System::Boolean  MethodBuilder::get_IsVirtual()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsVirtual", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsHideBySig
				mscorlib::System::Boolean  MethodBuilder::get_IsHideBySig()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsHideBySig", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  MethodBuilder::get_IsAbstract()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  MethodBuilder::get_IsSpecialName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsConstructor
				mscorlib::System::Boolean  MethodBuilder::get_IsConstructor()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsConstructor", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  MethodBuilder::get_IsSecurityCritical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  MethodBuilder::get_IsSecuritySafeCritical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  MethodBuilder::get_IsSecurityTransparent()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MethodImplementationFlags
				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  MethodBuilder::get_MethodImplementationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  MethodBuilder::get_MetadataToken()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  MethodBuilder::get_CustomAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
