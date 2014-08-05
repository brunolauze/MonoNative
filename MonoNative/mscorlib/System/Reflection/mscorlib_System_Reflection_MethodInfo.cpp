#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/mscorlib_System_Delegate.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBody.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::MethodInfo MethodInfo::GetBaseDefinition()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "GetBaseDefinition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo MethodInfo::GetGenericMethodDefinition()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "GetGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo MethodInfo::MakeGenericMethod(std::vector<mscorlib::System::Type*> typeArguments)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(typeArguments).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(typeArguments, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "MakeGenericMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			std::vector<mscorlib::System::Type*> MethodInfo::GetGenericArguments()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "GetGenericArguments", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Boolean MethodInfo::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 MethodInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Delegate MethodInfo::CreateDelegate(mscorlib::System::Type delegateType)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(delegateType).name());
					__parameters__[0] = (MonoObject*)delegateType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "CreateDelegate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Delegate(__result__);
			}

			mscorlib::System::Delegate MethodInfo::CreateDelegate(mscorlib::System::Type delegateType, mscorlib::System::Object target)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(delegateType).name());
					__parameter_types__[1] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)delegateType;
					__parameters__[1] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "CreateDelegate", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Delegate(__result__);
			}

			//Get Set Properties Methods
			//	Get:MemberType
			mscorlib::System::Reflection::MemberTypes::__ENUM__  MethodInfo::get_MemberType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:ReturnType
			mscorlib::System::Type  MethodInfo::get_ReturnType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_ReturnType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:ReturnTypeCustomAttributes
			mscorlib::System::Reflection::ICustomAttributeProvider  MethodInfo::get_ReturnTypeCustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_ReturnTypeCustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::ICustomAttributeProvider(__result__);
			}


			//	Get:ReturnParameter
			mscorlib::System::Reflection::ParameterInfo  MethodInfo::get_ReturnParameter() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodInfo", 0, NULL, "get_ReturnParameter", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::ParameterInfo(__result__);
			}


			//	Get:MethodHandle
			mscorlib::System::RuntimeMethodHandle  MethodInfo::get_MethodHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::RuntimeMethodHandle(__result__);
			}


			//	Get:Attributes
			mscorlib::System::Reflection::MethodAttributes::__ENUM__  MethodInfo::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:CallingConvention
			mscorlib::System::Reflection::CallingConventions::__ENUM__  MethodInfo::get_CallingConvention() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IsPublic
			mscorlib::System::Boolean  MethodInfo::get_IsPublic() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPrivate
			mscorlib::System::Boolean  MethodInfo::get_IsPrivate() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamily
			mscorlib::System::Boolean  MethodInfo::get_IsFamily() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAssembly
			mscorlib::System::Boolean  MethodInfo::get_IsAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyAndAssembly
			mscorlib::System::Boolean  MethodInfo::get_IsFamilyAndAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyOrAssembly
			mscorlib::System::Boolean  MethodInfo::get_IsFamilyOrAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsStatic
			mscorlib::System::Boolean  MethodInfo::get_IsStatic() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFinal
			mscorlib::System::Boolean  MethodInfo::get_IsFinal() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFinal", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsVirtual
			mscorlib::System::Boolean  MethodInfo::get_IsVirtual() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsVirtual", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsHideBySig
			mscorlib::System::Boolean  MethodInfo::get_IsHideBySig() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsHideBySig", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAbstract
			mscorlib::System::Boolean  MethodInfo::get_IsAbstract() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSpecialName
			mscorlib::System::Boolean  MethodInfo::get_IsSpecialName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsConstructor
			mscorlib::System::Boolean  MethodInfo::get_IsConstructor() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsConstructor", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:ContainsGenericParameters
			mscorlib::System::Boolean  MethodInfo::get_ContainsGenericParameters() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericMethodDefinition
			mscorlib::System::Boolean  MethodInfo::get_IsGenericMethodDefinition() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericMethod
			mscorlib::System::Boolean  MethodInfo::get_IsGenericMethod() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethod", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityCritical
			mscorlib::System::Boolean  MethodInfo::get_IsSecurityCritical() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecuritySafeCritical
			mscorlib::System::Boolean  MethodInfo::get_IsSecuritySafeCritical() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityTransparent
			mscorlib::System::Boolean  MethodInfo::get_IsSecurityTransparent() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:MethodImplementationFlags
			mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  MethodInfo::get_MethodImplementationFlags() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:DeclaringType
			mscorlib::System::Type  MethodInfo::get_DeclaringType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Name
			mscorlib::System::String  MethodInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ReflectedType
			mscorlib::System::Type  MethodInfo::get_ReflectedType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Module
			mscorlib::System::Reflection::Module  MethodInfo::get_Module() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  MethodInfo::get_MetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  MethodInfo::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}



		}
	}
}
