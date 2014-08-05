#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_METHODBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_METHODBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodBuilder.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodBase.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodImplAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterAttributes.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class RuntimeMethodHandle;
		class Type;
		class String;
		class Byte;
		class Delegate;
		

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

				class MethodToken;
				class ILGenerator;
				class ParameterBuilder;
				class CustomAttributeBuilder;
				class UnmanagedMarshal;
				class GenericTypeParameterBuilder;
				

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
			class Module;
			class Binder;
			class ConstructorInfo;
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
		namespace Security
		{

			class PermissionSet;
			

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

				class MethodBuilder
					: public mscorlib::System::Reflection::MethodInfo
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodBuilder
					, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_MethodBase
				{
				public:
					MethodBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::MethodInfo(nativeTypeInfo)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBuilder(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(NULL)
					{
					};
				
					MethodBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::MethodInfo(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodBuilder(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MethodBase(nativeObject)
					{
					};
				
					~MethodBuilder()
					{
					};
				

					MethodBuilder & operator=(MethodBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Reflection::Emit::MethodToken  GetToken();
					virtual mscorlib::System::Reflection::MethodInfo  GetBaseDefinition() override;
					virtual mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  GetMethodImplementationFlags() override;
					virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetParameters() override;
					mscorlib::System::Reflection::Module  GetModule();
					void  CreateMethodBody(std::vector<mscorlib::System::Byte*> il, mscorlib::System::Int32 count);
					virtual mscorlib::System::Object  Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture) override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					mscorlib::System::Reflection::Emit::ILGenerator  GetILGenerator();
					mscorlib::System::Reflection::Emit::ILGenerator  GetILGenerator(mscorlib::System::Int32 size);
					mscorlib::System::Reflection::Emit::ParameterBuilder  DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, mscorlib::System::String strParamName);
					mscorlib::System::Reflection::Emit::ParameterBuilder  DefineParameter(mscorlib::System::Int32 position, mscorlib::System::Reflection::ParameterAttributes::__ENUM__ attributes, const char *strParamName);
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					void  SetImplementationFlags(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ attributes);
					void  AddDeclarativeSecurity(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action, mscorlib::System::Security::PermissionSet pset);
					void  SetMarshal(mscorlib::System::Reflection::Emit::UnmanagedMarshal unmanagedMarshal);
					void  SetSymCustomAttribute(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data);
					void  SetSymCustomAttribute(const char *name, std::vector<mscorlib::System::Byte*> data);
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Reflection::MethodInfo  MakeGenericMethod(std::vector<mscorlib::System::Type*> typeArguments) override;
					virtual mscorlib::System::Reflection::MethodInfo  GetGenericMethodDefinition() override;
					virtual std::vector<mscorlib::System::Type*>  GetGenericArguments() override;
					std::vector<mscorlib::System::Reflection::Emit::GenericTypeParameterBuilder*>  DefineGenericParameters(std::vector<mscorlib::System::String*> names);
					void  SetReturnType(mscorlib::System::Type returnType);
					void  SetParameters(std::vector<mscorlib::System::Type*> parameterTypes);
					void  SetSignature(mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> returnTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type*> returnTypeOptionalCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> parameterTypeRequiredCustomModifiers, std::vector<mscorlib::System::Type**> parameterTypeOptionalCustomModifiers);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ContainsGenericParameters)) mscorlib::System::Boolean  ContainsGenericParameters;
					__declspec(property(get=get_InitLocals, put=set_InitLocals)) mscorlib::System::Boolean  InitLocals;
					__declspec(property(get=get_MethodHandle)) mscorlib::System::RuntimeMethodHandle  MethodHandle;
					__declspec(property(get=get_ReturnType)) mscorlib::System::Type  ReturnType;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::MethodAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_ReturnTypeCustomAttributes)) mscorlib::System::Reflection::ICustomAttributeProvider  ReturnTypeCustomAttributes;
					__declspec(property(get=get_CallingConvention)) mscorlib::System::Reflection::CallingConventions::__ENUM__  CallingConvention;
					__declspec(property(get=get_Signature)) mscorlib::System::String  Signature;
					__declspec(property(get=get_IsGenericMethodDefinition)) mscorlib::System::Boolean  IsGenericMethodDefinition;
					__declspec(property(get=get_IsGenericMethod)) mscorlib::System::Boolean  IsGenericMethod;
					__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
					__declspec(property(get=get_ReturnParameter)) mscorlib::System::Reflection::ParameterInfo  ReturnParameter;
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
					__declspec(property(get=get_IsSecurityCritical)) mscorlib::System::Boolean  IsSecurityCritical;
					__declspec(property(get=get_IsSecuritySafeCritical)) mscorlib::System::Boolean  IsSecuritySafeCritical;
					__declspec(property(get=get_IsSecurityTransparent)) mscorlib::System::Boolean  IsSecurityTransparent;
					__declspec(property(get=get_MethodImplementationFlags)) mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  MethodImplementationFlags;
					__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:ContainsGenericParameters
					mscorlib::System::Boolean  get_ContainsGenericParameters() const;

					//	Get/Set:InitLocals
					mscorlib::System::Boolean  get_InitLocals() const;
					void set_InitLocals(mscorlib::System::Boolean  value);

					//	Get:MethodHandle
					mscorlib::System::RuntimeMethodHandle  get_MethodHandle() const;

					//	Get:ReturnType
					mscorlib::System::Type  get_ReturnType() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:Attributes
					mscorlib::System::Reflection::MethodAttributes::__ENUM__  get_Attributes() const;

					//	Get:ReturnTypeCustomAttributes
					mscorlib::System::Reflection::ICustomAttributeProvider  get_ReturnTypeCustomAttributes() const;

					//	Get:CallingConvention
					mscorlib::System::Reflection::CallingConventions::__ENUM__  get_CallingConvention() const;

					//	Get:Signature
					mscorlib::System::String  get_Signature() const;

					//	Get:IsGenericMethodDefinition
					mscorlib::System::Boolean  get_IsGenericMethodDefinition() const;

					//	Get:IsGenericMethod
					mscorlib::System::Boolean  get_IsGenericMethod() const;

					//	Get:Module
					mscorlib::System::Reflection::Module  get_Module() const;

					//	Get:ReturnParameter
					mscorlib::System::Reflection::ParameterInfo  get_ReturnParameter() const;

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
