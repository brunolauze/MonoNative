#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_TYPEDELEGATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_TYPEDELEGATOR_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflectableType.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflect.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_GenericParameterAttributes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Assembly;
			class Module;
			class ConstructorInfo;
			class EventInfo;
			class FieldInfo;
			class InterfaceMapping;
			class MemberInfo;
			class MethodInfo;
			class PropertyInfo;
			class Binder;
			class ParameterModifier;
			class MethodBase;
			class CustomAttributeData;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Guid;
		class RuntimeTypeHandle;
		class Array;
		

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class StructLayoutAttribute;
				

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

			class TypeDelegator
				: public mscorlib::System::Reflection::TypeInfo
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Reflection::IReflectableType
				, public virtual mscorlib::System::Runtime::InteropServices::_Type
				, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
				, public virtual mscorlib::System::Reflection::IReflect
			{
			public:
				TypeDelegator(mscorlib::System::Type delegatingType)
				: mscorlib::System::Reflection::TypeInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.TypeDelegator"))
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Reflection::IReflectableType(NULL)
				, mscorlib::System::Runtime::InteropServices::_Type(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				, mscorlib::System::Reflection::IReflect(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)delegatingType;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "TypeDelegator", 1, __parameter_types__, __parameters__);
				};
			
				TypeDelegator(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Reflection::TypeInfo(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Reflection::IReflectableType(NULL)
				, mscorlib::System::Runtime::InteropServices::_Type(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				, mscorlib::System::Reflection::IReflect(NULL)
				{
				};
			
				TypeDelegator(MonoObject *nativeObject)
				: mscorlib::System::Reflection::TypeInfo(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Reflection::IReflectableType(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Type(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
				, mscorlib::System::Reflection::IReflect(nativeObject)
				{
				};
			
				~TypeDelegator()
				{
				};
			

				TypeDelegator & operator=(TypeDelegator &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(TypeDelegator &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual std::vector<mscorlib::System::Reflection::ConstructorInfo*>  GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
				virtual mscorlib::System::Type  GetElementType() override;
				virtual mscorlib::System::Reflection::EventInfo  GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Reflection::EventInfo  GetEvent(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents() override;
				virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Reflection::FieldInfo  GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Type  GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase) override;
				virtual mscorlib::System::Type  GetInterface(const char *name, mscorlib::System::Boolean ignoreCase) override;
				virtual mscorlib::System::Reflection::InterfaceMapping  GetInterfaceMap(mscorlib::System::Type interfaceType) override;
				virtual std::vector<mscorlib::System::Type*>  GetInterfaces() override;
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(const char *name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Type  GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Type  GetNestedType(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Type*>  GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual std::vector<mscorlib::System::Reflection::PropertyInfo*>  GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
				virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters) override;
				virtual mscorlib::System::Object  InvokeMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters) override;
				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
				virtual mscorlib::System::Boolean  IsAssignableFrom(mscorlib::System::Reflection::TypeInfo typeInfo) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Assembly)) mscorlib::System::Reflection::Assembly  Assembly;
				__declspec(property(get=get_AssemblyQualifiedName)) mscorlib::System::String  AssemblyQualifiedName;
				__declspec(property(get=get_BaseType)) mscorlib::System::Type  BaseType;
				__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
				__declspec(property(get=get_GUID)) mscorlib::System::Guid  GUID;
				__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Namespace)) mscorlib::System::String  Namespace;
				__declspec(property(get=get_TypeHandle)) mscorlib::System::RuntimeTypeHandle  TypeHandle;
				__declspec(property(get=get_UnderlyingSystemType)) mscorlib::System::Type  UnderlyingSystemType;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_IsConstructedGenericType)) mscorlib::System::Boolean  IsConstructedGenericType;
				__declspec(property(get=get_DeclaredConstructors)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  DeclaredConstructors;
				__declspec(property(get=get_DeclaredEvents)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  DeclaredEvents;
				__declspec(property(get=get_DeclaredFields)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  DeclaredFields;
				__declspec(property(get=get_DeclaredMethods)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  DeclaredMethods;
				__declspec(property(get=get_DeclaredProperties)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  DeclaredProperties;
				__declspec(property(get=get_DeclaredMembers)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  DeclaredMembers;
				__declspec(property(get=get_DeclaredNestedTypes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  DeclaredNestedTypes;
				__declspec(property(get=get_GenericTypeParameters)) std::vector<mscorlib::System::Type*>  GenericTypeParameters;
				__declspec(property(get=get_ImplementedInterfaces)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  ImplementedInterfaces;
				__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::TypeAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
				__declspec(property(get=get_HasElementType)) mscorlib::System::Boolean  HasElementType;
				__declspec(property(get=get_IsAbstract)) mscorlib::System::Boolean  IsAbstract;
				__declspec(property(get=get_IsAnsiClass)) mscorlib::System::Boolean  IsAnsiClass;
				__declspec(property(get=get_IsArray)) mscorlib::System::Boolean  IsArray;
				__declspec(property(get=get_IsAutoClass)) mscorlib::System::Boolean  IsAutoClass;
				__declspec(property(get=get_IsAutoLayout)) mscorlib::System::Boolean  IsAutoLayout;
				__declspec(property(get=get_IsByRef)) mscorlib::System::Boolean  IsByRef;
				__declspec(property(get=get_IsClass)) mscorlib::System::Boolean  IsClass;
				__declspec(property(get=get_IsCOMObject)) mscorlib::System::Boolean  IsCOMObject;
				__declspec(property(get=get_IsContextful)) mscorlib::System::Boolean  IsContextful;
				__declspec(property(get=get_IsEnum)) mscorlib::System::Boolean  IsEnum;
				__declspec(property(get=get_IsExplicitLayout)) mscorlib::System::Boolean  IsExplicitLayout;
				__declspec(property(get=get_IsImport)) mscorlib::System::Boolean  IsImport;
				__declspec(property(get=get_IsInterface)) mscorlib::System::Boolean  IsInterface;
				__declspec(property(get=get_IsLayoutSequential)) mscorlib::System::Boolean  IsLayoutSequential;
				__declspec(property(get=get_IsMarshalByRef)) mscorlib::System::Boolean  IsMarshalByRef;
				__declspec(property(get=get_IsNestedAssembly)) mscorlib::System::Boolean  IsNestedAssembly;
				__declspec(property(get=get_IsNestedFamANDAssem)) mscorlib::System::Boolean  IsNestedFamANDAssem;
				__declspec(property(get=get_IsNestedFamily)) mscorlib::System::Boolean  IsNestedFamily;
				__declspec(property(get=get_IsNestedFamORAssem)) mscorlib::System::Boolean  IsNestedFamORAssem;
				__declspec(property(get=get_IsNestedPrivate)) mscorlib::System::Boolean  IsNestedPrivate;
				__declspec(property(get=get_IsNestedPublic)) mscorlib::System::Boolean  IsNestedPublic;
				__declspec(property(get=get_IsNotPublic)) mscorlib::System::Boolean  IsNotPublic;
				__declspec(property(get=get_IsPointer)) mscorlib::System::Boolean  IsPointer;
				__declspec(property(get=get_IsPrimitive)) mscorlib::System::Boolean  IsPrimitive;
				__declspec(property(get=get_IsPublic)) mscorlib::System::Boolean  IsPublic;
				__declspec(property(get=get_IsSealed)) mscorlib::System::Boolean  IsSealed;
				__declspec(property(get=get_IsSerializable)) mscorlib::System::Boolean  IsSerializable;
				__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
				__declspec(property(get=get_IsUnicodeClass)) mscorlib::System::Boolean  IsUnicodeClass;
				__declspec(property(get=get_IsValueType)) mscorlib::System::Boolean  IsValueType;
				__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
				__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
				__declspec(property(get=get_TypeInitializer)) mscorlib::System::Reflection::ConstructorInfo  TypeInitializer;
				__declspec(property(get=get_IsSecurityTransparent)) mscorlib::System::Boolean  IsSecurityTransparent;
				__declspec(property(get=get_IsSecurityCritical)) mscorlib::System::Boolean  IsSecurityCritical;
				__declspec(property(get=get_IsSecuritySafeCritical)) mscorlib::System::Boolean  IsSecuritySafeCritical;
				__declspec(property(get=get_GenericTypeArguments)) std::vector<mscorlib::System::Type*>  GenericTypeArguments;
				__declspec(property(get=get_ContainsGenericParameters)) mscorlib::System::Boolean  ContainsGenericParameters;
				__declspec(property(get=get_IsGenericTypeDefinition)) mscorlib::System::Boolean  IsGenericTypeDefinition;
				__declspec(property(get=get_IsGenericType)) mscorlib::System::Boolean  IsGenericType;
				__declspec(property(get=get_IsGenericParameter)) mscorlib::System::Boolean  IsGenericParameter;
				__declspec(property(get=get_IsNested)) mscorlib::System::Boolean  IsNested;
				__declspec(property(get=get_IsVisible)) mscorlib::System::Boolean  IsVisible;
				__declspec(property(get=get_GenericParameterPosition)) mscorlib::System::Int32  GenericParameterPosition;
				__declspec(property(get=get_GenericParameterAttributes)) mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  GenericParameterAttributes;
				__declspec(property(get=get_DeclaringMethod)) mscorlib::System::Reflection::MethodBase  DeclaringMethod;
				__declspec(property(get=get_StructLayoutAttribute)) mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  StructLayoutAttribute;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  get_Assembly() const;

				//	Get:AssemblyQualifiedName
				mscorlib::System::String  get_AssemblyQualifiedName() const;

				//	Get:BaseType
				mscorlib::System::Type  get_BaseType() const;

				//	Get:FullName
				mscorlib::System::String  get_FullName() const;

				//	Get:GUID
				mscorlib::System::Guid  get_GUID() const;

				//	Get:Module
				mscorlib::System::Reflection::Module  get_Module() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:Namespace
				mscorlib::System::String  get_Namespace() const;

				//	Get:TypeHandle
				mscorlib::System::RuntimeTypeHandle  get_TypeHandle() const;

				//	Get:UnderlyingSystemType
				mscorlib::System::Type  get_UnderlyingSystemType() const;

				//	Get:MetadataToken
				mscorlib::System::Int32  get_MetadataToken() const;

				//	Get:IsConstructedGenericType
				mscorlib::System::Boolean  get_IsConstructedGenericType() const;

				//	Get:DeclaredConstructors
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  get_DeclaredConstructors() const;

				//	Get:DeclaredEvents
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  get_DeclaredEvents() const;

				//	Get:DeclaredFields
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  get_DeclaredFields() const;

				//	Get:DeclaredMethods
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  get_DeclaredMethods() const;

				//	Get:DeclaredProperties
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  get_DeclaredProperties() const;

				//	Get:DeclaredMembers
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  get_DeclaredMembers() const;

				//	Get:DeclaredNestedTypes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  get_DeclaredNestedTypes() const;

				//	Get:GenericTypeParameters
				std::vector<mscorlib::System::Type*>  get_GenericTypeParameters() const;

				//	Get:ImplementedInterfaces
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  get_ImplementedInterfaces() const;

				//	Get:Attributes
				mscorlib::System::Reflection::TypeAttributes::__ENUM__  get_Attributes() const;

				//	Get:DeclaringType
				mscorlib::System::Type  get_DeclaringType() const;

				//	Get:HasElementType
				mscorlib::System::Boolean  get_HasElementType() const;

				//	Get:IsAbstract
				mscorlib::System::Boolean  get_IsAbstract() const;

				//	Get:IsAnsiClass
				mscorlib::System::Boolean  get_IsAnsiClass() const;

				//	Get:IsArray
				mscorlib::System::Boolean  get_IsArray() const;

				//	Get:IsAutoClass
				mscorlib::System::Boolean  get_IsAutoClass() const;

				//	Get:IsAutoLayout
				mscorlib::System::Boolean  get_IsAutoLayout() const;

				//	Get:IsByRef
				mscorlib::System::Boolean  get_IsByRef() const;

				//	Get:IsClass
				mscorlib::System::Boolean  get_IsClass() const;

				//	Get:IsCOMObject
				mscorlib::System::Boolean  get_IsCOMObject() const;

				//	Get:IsContextful
				mscorlib::System::Boolean  get_IsContextful() const;

				//	Get:IsEnum
				mscorlib::System::Boolean  get_IsEnum() const;

				//	Get:IsExplicitLayout
				mscorlib::System::Boolean  get_IsExplicitLayout() const;

				//	Get:IsImport
				mscorlib::System::Boolean  get_IsImport() const;

				//	Get:IsInterface
				mscorlib::System::Boolean  get_IsInterface() const;

				//	Get:IsLayoutSequential
				mscorlib::System::Boolean  get_IsLayoutSequential() const;

				//	Get:IsMarshalByRef
				mscorlib::System::Boolean  get_IsMarshalByRef() const;

				//	Get:IsNestedAssembly
				mscorlib::System::Boolean  get_IsNestedAssembly() const;

				//	Get:IsNestedFamANDAssem
				mscorlib::System::Boolean  get_IsNestedFamANDAssem() const;

				//	Get:IsNestedFamily
				mscorlib::System::Boolean  get_IsNestedFamily() const;

				//	Get:IsNestedFamORAssem
				mscorlib::System::Boolean  get_IsNestedFamORAssem() const;

				//	Get:IsNestedPrivate
				mscorlib::System::Boolean  get_IsNestedPrivate() const;

				//	Get:IsNestedPublic
				mscorlib::System::Boolean  get_IsNestedPublic() const;

				//	Get:IsNotPublic
				mscorlib::System::Boolean  get_IsNotPublic() const;

				//	Get:IsPointer
				mscorlib::System::Boolean  get_IsPointer() const;

				//	Get:IsPrimitive
				mscorlib::System::Boolean  get_IsPrimitive() const;

				//	Get:IsPublic
				mscorlib::System::Boolean  get_IsPublic() const;

				//	Get:IsSealed
				mscorlib::System::Boolean  get_IsSealed() const;

				//	Get:IsSerializable
				mscorlib::System::Boolean  get_IsSerializable() const;

				//	Get:IsSpecialName
				mscorlib::System::Boolean  get_IsSpecialName() const;

				//	Get:IsUnicodeClass
				mscorlib::System::Boolean  get_IsUnicodeClass() const;

				//	Get:IsValueType
				mscorlib::System::Boolean  get_IsValueType() const;

				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

				//	Get:ReflectedType
				mscorlib::System::Type  get_ReflectedType() const;

				//	Get:TypeInitializer
				mscorlib::System::Reflection::ConstructorInfo  get_TypeInitializer() const;

				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  get_IsSecurityTransparent() const;

				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  get_IsSecurityCritical() const;

				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  get_IsSecuritySafeCritical() const;

				//	Get:GenericTypeArguments
				std::vector<mscorlib::System::Type*>  get_GenericTypeArguments() const;

				//	Get:ContainsGenericParameters
				mscorlib::System::Boolean  get_ContainsGenericParameters() const;

				//	Get:IsGenericTypeDefinition
				mscorlib::System::Boolean  get_IsGenericTypeDefinition() const;

				//	Get:IsGenericType
				mscorlib::System::Boolean  get_IsGenericType() const;

				//	Get:IsGenericParameter
				mscorlib::System::Boolean  get_IsGenericParameter() const;

				//	Get:IsNested
				mscorlib::System::Boolean  get_IsNested() const;

				//	Get:IsVisible
				mscorlib::System::Boolean  get_IsVisible() const;

				//	Get:GenericParameterPosition
				mscorlib::System::Int32  get_GenericParameterPosition() const;

				//	Get:GenericParameterAttributes
				mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  get_GenericParameterAttributes() const;

				//	Get:DeclaringMethod
				mscorlib::System::Reflection::MethodBase  get_DeclaringMethod() const;

				//	Get:StructLayoutAttribute
				mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  get_StructLayoutAttribute() const;

				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
