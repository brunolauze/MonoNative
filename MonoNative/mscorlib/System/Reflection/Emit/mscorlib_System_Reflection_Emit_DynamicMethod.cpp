#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_DynamicMethod.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ParameterBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_DynamicILInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ILGenerator.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
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
				mscorlib::System::Delegate DynamicMethod::CreateDelegate(mscorlib::System::Type delegateType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(delegateType).name());
						__parameters__[0] = (MonoObject*)delegateType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "CreateDelegate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Delegate(__result__);
				}

				mscorlib::System::Delegate DynamicMethod::CreateDelegate(mscorlib::System::Type delegateType, mscorlib::System::Object target)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(delegateType).name());
						__parameter_types__[1] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)delegateType;
						__parameters__[1] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "CreateDelegate", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Delegate(__result__);
				}

				mscorlib::System::Reflection::Emit::ParameterBuilder DynamicMethod::DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::String parameterName)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(position).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(parameterName).name());
						__parameters__[0] = &position;
						__parameters__[1] = reinterpret_cast<void*>(attributes);
						__parameters__[2] = (MonoObject*)parameterName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "DefineParameter", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ParameterBuilder(__result__);
				}

				mscorlib::System::Reflection::MethodInfo DynamicMethod::GetBaseDefinition()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetBaseDefinition", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Object*> DynamicMethod::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> DynamicMethod::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Emit::DynamicILInfo DynamicMethod::GetDynamicILInfo()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetDynamicILInfo", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::DynamicILInfo(__result__);
				}

				mscorlib::System::Reflection::Emit::ILGenerator DynamicMethod::GetILGenerator()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetILGenerator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				mscorlib::System::Reflection::Emit::ILGenerator DynamicMethod::GetILGenerator(mscorlib::System::Int32 streamSize)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(streamSize).name());
						__parameters__[0] = &streamSize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetILGenerator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::ILGenerator(__result__);
				}

				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ DynamicMethod::GetMethodImplementationFlags()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetMethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Reflection::ParameterInfo*> DynamicMethod::GetParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "GetParameters", __native_object__, 0, NULL, NULL, NULL);
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

				mscorlib::System::Object DynamicMethod::Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "Invoke", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean DynamicMethod::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String DynamicMethod::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::MethodAttributes::__ENUM__  DynamicMethod::get_Attributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:CallingConvention
				mscorlib::System::Reflection::CallingConventions::__ENUM__  DynamicMethod::get_CallingConvention()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  DynamicMethod::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get/Set:InitLocals
				mscorlib::System::Boolean  DynamicMethod::get_InitLocals()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_InitLocals", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void DynamicMethod::set_InitLocals(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "set_InitLocals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:MethodHandle
				mscorlib::System::RuntimeMethodHandle  DynamicMethod::get_MethodHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_MethodHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeMethodHandle(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  DynamicMethod::get_Module()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:Name
				mscorlib::System::String  DynamicMethod::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  DynamicMethod::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReturnParameter
				mscorlib::System::Reflection::ParameterInfo  DynamicMethod::get_ReturnParameter()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_ReturnParameter", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ParameterInfo(__result__);
				}


				//	Get:ReturnType
				mscorlib::System::Type  DynamicMethod::get_ReturnType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_ReturnType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReturnTypeCustomAttributes
				mscorlib::System::Reflection::ICustomAttributeProvider  DynamicMethod::get_ReturnTypeCustomAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicMethod", 0, NULL, "get_ReturnTypeCustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ICustomAttributeProvider(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  DynamicMethod::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  DynamicMethod::get_IsPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  DynamicMethod::get_IsPrivate()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  DynamicMethod::get_IsFamily()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  DynamicMethod::get_IsAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  DynamicMethod::get_IsFamilyAndAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  DynamicMethod::get_IsFamilyOrAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  DynamicMethod::get_IsStatic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFinal
				mscorlib::System::Boolean  DynamicMethod::get_IsFinal()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFinal", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVirtual
				mscorlib::System::Boolean  DynamicMethod::get_IsVirtual()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsVirtual", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsHideBySig
				mscorlib::System::Boolean  DynamicMethod::get_IsHideBySig()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsHideBySig", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  DynamicMethod::get_IsAbstract()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  DynamicMethod::get_IsSpecialName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsConstructor
				mscorlib::System::Boolean  DynamicMethod::get_IsConstructor()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsConstructor", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:ContainsGenericParameters
				mscorlib::System::Boolean  DynamicMethod::get_ContainsGenericParameters()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericMethodDefinition
				mscorlib::System::Boolean  DynamicMethod::get_IsGenericMethodDefinition()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGenericMethod
				mscorlib::System::Boolean  DynamicMethod::get_IsGenericMethod()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethod", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  DynamicMethod::get_IsSecurityCritical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  DynamicMethod::get_IsSecuritySafeCritical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  DynamicMethod::get_IsSecurityTransparent()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MethodImplementationFlags
				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  DynamicMethod::get_MethodImplementationFlags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  DynamicMethod::get_MetadataToken()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  DynamicMethod::get_CustomAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
