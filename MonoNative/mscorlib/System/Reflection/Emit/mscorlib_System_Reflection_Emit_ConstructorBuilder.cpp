#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ConstructorBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ParameterBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ILGenerator.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodToken.h>
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
				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ ConstructorBuilder::GetMethodImplementationFlags()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetMethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Reflection::ParameterInfo*> ConstructorBuilder::GetParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetParameters", __native_object__, 0, NULL, NULL, NULL);
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

				mscorlib::System::Object ConstructorBuilder::Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "Invoke", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object ConstructorBuilder::Invoke(mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[1] = Global::GetType(typeid(binder).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameters).name()))->eklass);
						__parameter_types__[3] = Global::GetType(typeid(culture).name());
						__parameters__[0] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[1] = (MonoObject*)binder;
						__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(parameters, typeid(mscorlib::System::Object).name());
						__parameters__[3] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "Invoke", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void ConstructorBuilder::AddDeclarativeSecurity(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Security::PermissionSet pset)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(action).name());
						__parameter_types__[1] = Global::GetType(typeid(pset).name());
						__parameters__[0] = reinterpret_cast<void*>(action);
						__parameters__[1] = (MonoObject*)pset;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "AddDeclarativeSecurity", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::ParameterBuilder ConstructorBuilder::DefineParameter(mscorlib::System::Int32 iSequence, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::String strParamName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iSequence).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(strParamName).name());
						__parameters__[0] = &iSequence;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)strParamName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "DefineParameter", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ParameterBuilder(__result__);
				}

				mscorlib::System::Boolean ConstructorBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> ConstructorBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> ConstructorBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Emit::ILGenerator ConstructorBuilder::GetILGenerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetILGenerator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				mscorlib::System::Reflection::Emit::ILGenerator ConstructorBuilder::GetILGenerator(mscorlib::System::Int32 streamSize)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(streamSize).name());
						__parameters__[0] = &streamSize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetILGenerator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				void ConstructorBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ConstructorBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryAttribute).name()))->eklass);
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ConstructorBuilder::SetImplementationFlags(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = reinterpret_cast<void*>(attributes);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "SetImplementationFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Module ConstructorBuilder::GetModule()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetModule", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Module(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodToken ConstructorBuilder::GetToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "GetToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				void ConstructorBuilder::SetSymCustomAttribute(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "SetSymCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String ConstructorBuilder::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:CallingConvention
				mscorlib::System::Reflection::CallingConventions::__ENUM__  ConstructorBuilder::get_CallingConvention() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get/Set:InitLocals
				mscorlib::System::Boolean  ConstructorBuilder::get_InitLocals() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_InitLocals", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ConstructorBuilder::set_InitLocals(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "set_InitLocals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:MethodHandle
				mscorlib::System::RuntimeMethodHandle  ConstructorBuilder::get_MethodHandle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_MethodHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeMethodHandle(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Reflection::MethodAttributes::__ENUM__  ConstructorBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  ConstructorBuilder::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  ConstructorBuilder::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReturnType
				mscorlib::System::Type  ConstructorBuilder::get_ReturnType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_ReturnType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Name
				mscorlib::System::String  ConstructorBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Signature
				mscorlib::System::String  ConstructorBuilder::get_Signature() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_Signature", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  ConstructorBuilder::get_Module() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ConstructorBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  ConstructorBuilder::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  ConstructorBuilder::get_IsPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  ConstructorBuilder::get_IsPrivate() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  ConstructorBuilder::get_IsFamily() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  ConstructorBuilder::get_IsAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  ConstructorBuilder::get_IsFamilyAndAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  ConstructorBuilder::get_IsFamilyOrAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  ConstructorBuilder::get_IsStatic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFinal
				mscorlib::System::Boolean  ConstructorBuilder::get_IsFinal() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFinal", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVirtual
				mscorlib::System::Boolean  ConstructorBuilder::get_IsVirtual() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsVirtual", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsHideBySig
				mscorlib::System::Boolean  ConstructorBuilder::get_IsHideBySig() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsHideBySig", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  ConstructorBuilder::get_IsAbstract() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  ConstructorBuilder::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsConstructor
				mscorlib::System::Boolean  ConstructorBuilder::get_IsConstructor() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsConstructor", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:ContainsGenericParameters
				mscorlib::System::Boolean  ConstructorBuilder::get_ContainsGenericParameters() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericMethodDefinition
				mscorlib::System::Boolean  ConstructorBuilder::get_IsGenericMethodDefinition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericMethod
				mscorlib::System::Boolean  ConstructorBuilder::get_IsGenericMethod() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethod", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  ConstructorBuilder::get_IsSecurityCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  ConstructorBuilder::get_IsSecuritySafeCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  ConstructorBuilder::get_IsSecurityTransparent() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MethodImplementationFlags
				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  ConstructorBuilder::get_MethodImplementationFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  ConstructorBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  ConstructorBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
