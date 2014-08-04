#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
			mscorlib::System::Object ConstructorInfo::Invoke(std::vector<mscorlib::System::Object*> parameters)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameters).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(parameters, typeid(mscorlib::System::Object).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "Invoke", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object ConstructorInfo::Invoke(mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
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
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "Invoke", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Boolean ConstructorInfo::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 ConstructorInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:MemberType
			mscorlib::System::Reflection::MemberTypes::__ENUM__  ConstructorInfo::get_MemberType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:MethodHandle
			mscorlib::System::RuntimeMethodHandle  ConstructorInfo::get_MethodHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::RuntimeMethodHandle(__result__);
			}


			//	Get:Attributes
			mscorlib::System::Reflection::MethodAttributes::__ENUM__  ConstructorInfo::get_Attributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:CallingConvention
			mscorlib::System::Reflection::CallingConventions::__ENUM__  ConstructorInfo::get_CallingConvention()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IsPublic
			mscorlib::System::Boolean  ConstructorInfo::get_IsPublic()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPrivate
			mscorlib::System::Boolean  ConstructorInfo::get_IsPrivate()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamily
			mscorlib::System::Boolean  ConstructorInfo::get_IsFamily()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAssembly
			mscorlib::System::Boolean  ConstructorInfo::get_IsAssembly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyAndAssembly
			mscorlib::System::Boolean  ConstructorInfo::get_IsFamilyAndAssembly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyOrAssembly
			mscorlib::System::Boolean  ConstructorInfo::get_IsFamilyOrAssembly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsStatic
			mscorlib::System::Boolean  ConstructorInfo::get_IsStatic()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFinal
			mscorlib::System::Boolean  ConstructorInfo::get_IsFinal()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsFinal", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsVirtual
			mscorlib::System::Boolean  ConstructorInfo::get_IsVirtual()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsVirtual", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsHideBySig
			mscorlib::System::Boolean  ConstructorInfo::get_IsHideBySig()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsHideBySig", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAbstract
			mscorlib::System::Boolean  ConstructorInfo::get_IsAbstract()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSpecialName
			mscorlib::System::Boolean  ConstructorInfo::get_IsSpecialName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsConstructor
			mscorlib::System::Boolean  ConstructorInfo::get_IsConstructor()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsConstructor", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:ContainsGenericParameters
			mscorlib::System::Boolean  ConstructorInfo::get_ContainsGenericParameters()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericMethodDefinition
			mscorlib::System::Boolean  ConstructorInfo::get_IsGenericMethodDefinition()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethodDefinition", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsGenericMethod
			mscorlib::System::Boolean  ConstructorInfo::get_IsGenericMethod()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsGenericMethod", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityCritical
			mscorlib::System::Boolean  ConstructorInfo::get_IsSecurityCritical()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecuritySafeCritical
			mscorlib::System::Boolean  ConstructorInfo::get_IsSecuritySafeCritical()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityTransparent
			mscorlib::System::Boolean  ConstructorInfo::get_IsSecurityTransparent()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:MethodImplementationFlags
			mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  ConstructorInfo::get_MethodImplementationFlags()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MethodBase", 0, NULL, "get_MethodImplementationFlags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:DeclaringType
			mscorlib::System::Type  ConstructorInfo::get_DeclaringType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Name
			mscorlib::System::String  ConstructorInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ReflectedType
			mscorlib::System::Type  ConstructorInfo::get_ReflectedType()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Module
			mscorlib::System::Reflection::Module  ConstructorInfo::get_Module()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  ConstructorInfo::get_MetadataToken()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  ConstructorInfo::get_CustomAttributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}


				//	Get/Set:ConstructorName
			mscorlib::System::String ConstructorInfo::get_ConstructorName()
			{
				return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "ConstructorName"));
			}


				//	Get/Set:TypeConstructorName
			mscorlib::System::String ConstructorInfo::get_TypeConstructorName()
			{
				return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Reflection", "ConstructorInfo", 0, NULL, "TypeConstructorName"));
			}



		}
	}
}
