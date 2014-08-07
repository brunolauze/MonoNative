#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodBase.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodImplAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Delegate;
		class RuntimeMethodHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class ParameterBuilder;
				class DynamicILInfo;
				class ILGenerator;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ParameterInfo;
			class Binder;
			class MethodBody;
			class CustomAttributeData;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class DynamicMethod
					: public mscorlib::System::Reflection::MethodInfo
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodBase
				{
				public:
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Reflection::Module m)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Reflection", "Module");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[3] = (MonoObject*)m;
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 4, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Type owner)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Type");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[3] = (MonoObject*)owner;
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 4, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Reflection::Module m, mscorlib::System::Boolean skipVisibility)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Reflection", "Module");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[3] = (MonoObject*)m;
						__parameters__[4] = reinterpret_cast<void*>(skipVisibility);
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 5, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Type owner, mscorlib::System::Boolean skipVisibility)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[3] = (MonoObject*)owner;
						__parameters__[4] = reinterpret_cast<void*>(skipVisibility);
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 5, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Type owner, mscorlib::System::Boolean skipVisibility)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "MethodAttributes");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Reflection", "CallingConventions");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[5] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[6] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[5] = (MonoObject*)owner;
						__parameters__[6] = reinterpret_cast<void*>(skipVisibility);
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 7, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Reflection::Module m, mscorlib::System::Boolean skipVisibility)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "MethodAttributes");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Reflection", "CallingConventions");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[5] = Global::GetType("mscorlib", "System.Reflection", "Module");
						__parameter_types__[6] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[5] = (MonoObject*)m;
						__parameters__[6] = reinterpret_cast<void*>(skipVisibility);
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 7, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 3, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Boolean restrictedSkipVisibility)
					: mscorlib::System::Reflection::MethodInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.Emit.DynamicMethod"))
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Type");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, "mscorlib", "System", "Type");
						__parameters__[3] = reinterpret_cast<void*>(restrictedSkipVisibility);
						__native_object__ = Global::New("mscorlib", "System.Reflection.Emit", "DynamicMethod", 4, __parameter_types__, __parameters__);
					};
				
					DynamicMethod(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::MethodInfo(nativeTypeInfo)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
					};
				
					DynamicMethod(MonoObject *nativeObject)
					: mscorlib::System::Reflection::MethodInfo(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(nativeObject)
					{
					};
				
					~DynamicMethod()
					{
					};
				

					DynamicMethod & operator=(DynamicMethod &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DynamicMethod &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type delegateType) override;
					virtual mscorlib::System::Delegate  CreateDelegate(mscorlib::System::Type delegateType, mscorlib::System::Object target) override;
					mscorlib::System::Reflection::Emit::ParameterBuilder  DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::String parameterName);
					mscorlib::System::Reflection::Emit::ParameterBuilder  DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, const char *parameterName);
					virtual mscorlib::System::Reflection::MethodInfo  GetBaseDefinition() override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					mscorlib::System::Reflection::Emit::DynamicILInfo  GetDynamicILInfo();
					mscorlib::System::Reflection::Emit::ILGenerator  GetILGenerator();
					mscorlib::System::Reflection::Emit::ILGenerator  GetILGenerator(mscorlib::System::Int32 streamSize);
					virtual mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  GetMethodImplementationFlags() override;
					virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetParameters() override;
					virtual mscorlib::System::Object  Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture) override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::MethodAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_CallingConvention)) mscorlib::System::Reflection::CallingConventions::__ENUM__  CallingConvention;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_InitLocals, put=set_InitLocals)) mscorlib::System::Boolean  InitLocals;
					__declspec(property(get=get_MethodHandle)) mscorlib::System::RuntimeMethodHandle  MethodHandle;
					__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_ReturnParameter)) mscorlib::System::Reflection::ParameterInfo  ReturnParameter;
					__declspec(property(get=get_ReturnType)) mscorlib::System::Type  ReturnType;
					__declspec(property(get=get_ReturnTypeCustomAttributes)) mscorlib::System::Reflection::ICustomAttributeProvider  ReturnTypeCustomAttributes;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_IsPublic)) mscorlib::System::Boolean  IsPublic;
					__declspec(property(get=get_IsPrivate)) mscorlib::System::Boolean  IsPrivate;
					__declspec(property(get=get_IsFamily)) mscorlib::System::Boolean  IsFamily;
					__declspec(property(get=get_IsAssembly)) mscorlib::System::Boolean  IsAssembly;
					__declspec(property(get=get_IsFamilyAndAssembly)) mscorlib::System::Boolean  IsFamilyAndAssembly;
					__declspec(property(get=get_IsFamilyOrAssembly)) mscorlib::System::Boolean  IsFamilyOrAssembly;
					__declspec(property(get=get_IsStatic)) mscorlib::System::Boolean  IsStatic;
					__declspec(property(get=get_IsFinal)) mscorlib::System::Boolean  IsFinal;
					__declspec(property(get=get_IsVirtual)) mscorlib::System::Boolean  IsVirtual;
					__declspec(property(get=get_IsHideBySig)) mscorlib::System::Boolean  IsHideBySig;
					__declspec(property(get=get_IsAbstract)) mscorlib::System::Boolean  IsAbstract;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_IsConstructor)) mscorlib::System::Boolean  IsConstructor;
					__declspec(property(get=get_ContainsGenericParameters)) mscorlib::System::Boolean  ContainsGenericParameters;
					__declspec(property(get=get_IsGenericMethodDefinition)) mscorlib::System::Boolean  IsGenericMethodDefinition;
					__declspec(property(get=get_IsGenericMethod)) mscorlib::System::Boolean  IsGenericMethod;
					__declspec(property(get=get_IsSecurityCritical)) mscorlib::System::Boolean  IsSecurityCritical;
					__declspec(property(get=get_IsSecuritySafeCritical)) mscorlib::System::Boolean  IsSecuritySafeCritical;
					__declspec(property(get=get_IsSecurityTransparent)) mscorlib::System::Boolean  IsSecurityTransparent;
					__declspec(property(get=get_MethodImplementationFlags)) mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  MethodImplementationFlags;
					__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::MethodAttributes::__ENUM__  get_Attributes() const;

					//	Get:CallingConvention
					mscorlib::System::Reflection::CallingConventions::__ENUM__  get_CallingConvention() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get/Set:InitLocals
					mscorlib::System::Boolean  get_InitLocals() const;
					void set_InitLocals(mscorlib::System::Boolean  value);

					//	Get:MethodHandle
					mscorlib::System::RuntimeMethodHandle  get_MethodHandle() const;

					//	Get:Module
					mscorlib::System::Reflection::Module  get_Module() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

					//	Get:ReturnParameter
					mscorlib::System::Reflection::ParameterInfo  get_ReturnParameter() const;

					//	Get:ReturnType
					mscorlib::System::Type  get_ReturnType() const;

					//	Get:ReturnTypeCustomAttributes
					mscorlib::System::Reflection::ICustomAttributeProvider  get_ReturnTypeCustomAttributes() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

					//	Get:IsPublic
					mscorlib::System::Boolean  get_IsPublic() const;

					//	Get:IsPrivate
					mscorlib::System::Boolean  get_IsPrivate() const;

					//	Get:IsFamily
					mscorlib::System::Boolean  get_IsFamily() const;

					//	Get:IsAssembly
					mscorlib::System::Boolean  get_IsAssembly() const;

					//	Get:IsFamilyAndAssembly
					mscorlib::System::Boolean  get_IsFamilyAndAssembly() const;

					//	Get:IsFamilyOrAssembly
					mscorlib::System::Boolean  get_IsFamilyOrAssembly() const;

					//	Get:IsStatic
					mscorlib::System::Boolean  get_IsStatic() const;

					//	Get:IsFinal
					mscorlib::System::Boolean  get_IsFinal() const;

					//	Get:IsVirtual
					mscorlib::System::Boolean  get_IsVirtual() const;

					//	Get:IsHideBySig
					mscorlib::System::Boolean  get_IsHideBySig() const;

					//	Get:IsAbstract
					mscorlib::System::Boolean  get_IsAbstract() const;

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName() const;

					//	Get:IsConstructor
					mscorlib::System::Boolean  get_IsConstructor() const;

					//	Get:ContainsGenericParameters
					mscorlib::System::Boolean  get_ContainsGenericParameters() const;

					//	Get:IsGenericMethodDefinition
					mscorlib::System::Boolean  get_IsGenericMethodDefinition() const;

					//	Get:IsGenericMethod
					mscorlib::System::Boolean  get_IsGenericMethod() const;

					//	Get:IsSecurityCritical
					mscorlib::System::Boolean  get_IsSecurityCritical() const;

					//	Get:IsSecuritySafeCritical
					mscorlib::System::Boolean  get_IsSecuritySafeCritical() const;

					//	Get:IsSecurityTransparent
					mscorlib::System::Boolean  get_IsSecurityTransparent() const;

					//	Get:MethodImplementationFlags
					mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  get_MethodImplementationFlags() const;

					//	Get:MetadataToken
					mscorlib::System::Int32  get_MetadataToken() const;

					//	Get:CustomAttributes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
