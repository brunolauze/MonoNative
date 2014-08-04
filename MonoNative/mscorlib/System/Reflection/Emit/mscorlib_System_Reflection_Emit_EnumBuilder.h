#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ENUMBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ENUMBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflectableType.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflect.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__EnumBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
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
		class Type;
		class Guid;
		class RuntimeTypeHandle;
		class Byte;
		class Array;
		

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

				class TypeToken;
				class FieldBuilder;
				class CustomAttributeBuilder;
				

			}
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
			namespace Emit
			{

				class EnumBuilder
					: public mscorlib::System::Reflection::TypeInfo
					, public virtual mscorlib::System::Reflection::IReflectableType
					, public virtual mscorlib::System::Runtime::InteropServices::_Type
					, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
					, public virtual mscorlib::System::Reflection::IReflect
					, public virtual mscorlib::System::Runtime::InteropServices::_EnumBuilder
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				{
				public:
					EnumBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::TypeInfo(nativeTypeInfo)
					, mscorlib::System::Reflection::IReflectableType(NULL)
					, mscorlib::System::Runtime::InteropServices::_Type(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					, mscorlib::System::Reflection::IReflect(NULL)
					, mscorlib::System::Runtime::InteropServices::_EnumBuilder(NULL)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					{
					};
				
					EnumBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::TypeInfo(nativeObject)
					, mscorlib::System::Reflection::IReflectableType(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Type(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
					, mscorlib::System::Reflection::IReflect(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_EnumBuilder(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					{
					};
				
					~EnumBuilder()
					{
					};
				

					EnumBuilder & operator=(EnumBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Type  CreateType();
					virtual mscorlib::System::Type  GetEnumUnderlyingType() override;
					mscorlib::System::Reflection::Emit::FieldBuilder  DefineLiteral(mscorlib::System::String literalName, mscorlib::System::Object literalValue);
					virtual std::vector<mscorlib::System::Reflection::ConstructorInfo*>  GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual mscorlib::System::Type  GetElementType() override;
					virtual mscorlib::System::Reflection::EventInfo  GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents() override;
					virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual mscorlib::System::Type  GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Reflection::InterfaceMapping  GetInterfaceMap(mscorlib::System::Type interfaceType) override;
					virtual std::vector<mscorlib::System::Type*>  GetInterfaces() override;
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual mscorlib::System::Type  GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Type*>  GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::PropertyInfo*>  GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters) override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual mscorlib::System::Type  MakeArrayType() override;
					virtual mscorlib::System::Type  MakeArrayType(mscorlib::System::Int32 rank) override;
					virtual mscorlib::System::Type  MakeByRefType() override;
					virtual mscorlib::System::Type  MakePointerType() override;
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					virtual mscorlib::System::Boolean  IsAssignableFrom(mscorlib::System::Reflection::TypeInfo typeInfo) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Assembly)) mscorlib::System::Reflection::Assembly  Assembly;
					__declspec(property(get=get_AssemblyQualifiedName)) mscorlib::System::String  AssemblyQualifiedName;
					__declspec(property(get=get_BaseType)) mscorlib::System::Type  BaseType;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
					__declspec(property(get=get_GUID)) mscorlib::System::Guid  GUID;
					__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Namespace)) mscorlib::System::String  Namespace;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_TypeHandle)) mscorlib::System::RuntimeTypeHandle  TypeHandle;
					__declspec(property(get=get_TypeToken)) mscorlib::System::Reflection::Emit::TypeToken  TypeToken;
					__declspec(property(get=get_UnderlyingField)) mscorlib::System::Reflection::Emit::FieldBuilder  UnderlyingField;
					__declspec(property(get=get_UnderlyingSystemType)) mscorlib::System::Type  UnderlyingSystemType;
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
					__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:Assembly
					mscorlib::System::Reflection::Assembly  get_Assembly();

					//	Get:AssemblyQualifiedName
					mscorlib::System::String  get_AssemblyQualifiedName();

					//	Get:BaseType
					mscorlib::System::Type  get_BaseType();

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType();

					//	Get:FullName
					mscorlib::System::String  get_FullName();

					//	Get:GUID
					mscorlib::System::Guid  get_GUID();

					//	Get:Module
					mscorlib::System::Reflection::Module  get_Module();

					//	Get:Name
					mscorlib::System::String  get_Name();

					//	Get:Namespace
					mscorlib::System::String  get_Namespace();

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType();

					//	Get:TypeHandle
					mscorlib::System::RuntimeTypeHandle  get_TypeHandle();

					//	Get:TypeToken
					mscorlib::System::Reflection::Emit::TypeToken  get_TypeToken();

					//	Get:UnderlyingField
					mscorlib::System::Reflection::Emit::FieldBuilder  get_UnderlyingField();

					//	Get:UnderlyingSystemType
					mscorlib::System::Type  get_UnderlyingSystemType();

					//	Get:IsConstructedGenericType
					mscorlib::System::Boolean  get_IsConstructedGenericType();

					//	Get:DeclaredConstructors
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::ConstructorInfo>  get_DeclaredConstructors();

					//	Get:DeclaredEvents
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  get_DeclaredEvents();

					//	Get:DeclaredFields
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  get_DeclaredFields();

					//	Get:DeclaredMethods
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  get_DeclaredMethods();

					//	Get:DeclaredProperties
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  get_DeclaredProperties();

					//	Get:DeclaredMembers
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MemberInfo>  get_DeclaredMembers();

					//	Get:DeclaredNestedTypes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  get_DeclaredNestedTypes();

					//	Get:GenericTypeParameters
					std::vector<mscorlib::System::Type*>  get_GenericTypeParameters();

					//	Get:ImplementedInterfaces
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  get_ImplementedInterfaces();

					//	Get:Attributes
					mscorlib::System::Reflection::TypeAttributes::__ENUM__  get_Attributes();

					//	Get:HasElementType
					mscorlib::System::Boolean  get_HasElementType();

					//	Get:IsAbstract
					mscorlib::System::Boolean  get_IsAbstract();

					//	Get:IsAnsiClass
					mscorlib::System::Boolean  get_IsAnsiClass();

					//	Get:IsArray
					mscorlib::System::Boolean  get_IsArray();

					//	Get:IsAutoClass
					mscorlib::System::Boolean  get_IsAutoClass();

					//	Get:IsAutoLayout
					mscorlib::System::Boolean  get_IsAutoLayout();

					//	Get:IsByRef
					mscorlib::System::Boolean  get_IsByRef();

					//	Get:IsClass
					mscorlib::System::Boolean  get_IsClass();

					//	Get:IsCOMObject
					mscorlib::System::Boolean  get_IsCOMObject();

					//	Get:IsContextful
					mscorlib::System::Boolean  get_IsContextful();

					//	Get:IsEnum
					mscorlib::System::Boolean  get_IsEnum();

					//	Get:IsExplicitLayout
					mscorlib::System::Boolean  get_IsExplicitLayout();

					//	Get:IsImport
					mscorlib::System::Boolean  get_IsImport();

					//	Get:IsInterface
					mscorlib::System::Boolean  get_IsInterface();

					//	Get:IsLayoutSequential
					mscorlib::System::Boolean  get_IsLayoutSequential();

					//	Get:IsMarshalByRef
					mscorlib::System::Boolean  get_IsMarshalByRef();

					//	Get:IsNestedAssembly
					mscorlib::System::Boolean  get_IsNestedAssembly();

					//	Get:IsNestedFamANDAssem
					mscorlib::System::Boolean  get_IsNestedFamANDAssem();

					//	Get:IsNestedFamily
					mscorlib::System::Boolean  get_IsNestedFamily();

					//	Get:IsNestedFamORAssem
					mscorlib::System::Boolean  get_IsNestedFamORAssem();

					//	Get:IsNestedPrivate
					mscorlib::System::Boolean  get_IsNestedPrivate();

					//	Get:IsNestedPublic
					mscorlib::System::Boolean  get_IsNestedPublic();

					//	Get:IsNotPublic
					mscorlib::System::Boolean  get_IsNotPublic();

					//	Get:IsPointer
					mscorlib::System::Boolean  get_IsPointer();

					//	Get:IsPrimitive
					mscorlib::System::Boolean  get_IsPrimitive();

					//	Get:IsPublic
					mscorlib::System::Boolean  get_IsPublic();

					//	Get:IsSealed
					mscorlib::System::Boolean  get_IsSealed();

					//	Get:IsSerializable
					mscorlib::System::Boolean  get_IsSerializable();

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName();

					//	Get:IsUnicodeClass
					mscorlib::System::Boolean  get_IsUnicodeClass();

					//	Get:IsValueType
					mscorlib::System::Boolean  get_IsValueType();

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType();

					//	Get:TypeInitializer
					mscorlib::System::Reflection::ConstructorInfo  get_TypeInitializer();

					//	Get:IsSecurityTransparent
					mscorlib::System::Boolean  get_IsSecurityTransparent();

					//	Get:IsSecurityCritical
					mscorlib::System::Boolean  get_IsSecurityCritical();

					//	Get:IsSecuritySafeCritical
					mscorlib::System::Boolean  get_IsSecuritySafeCritical();

					//	Get:GenericTypeArguments
					std::vector<mscorlib::System::Type*>  get_GenericTypeArguments();

					//	Get:ContainsGenericParameters
					mscorlib::System::Boolean  get_ContainsGenericParameters();

					//	Get:IsGenericTypeDefinition
					mscorlib::System::Boolean  get_IsGenericTypeDefinition();

					//	Get:IsGenericType
					mscorlib::System::Boolean  get_IsGenericType();

					//	Get:IsGenericParameter
					mscorlib::System::Boolean  get_IsGenericParameter();

					//	Get:IsNested
					mscorlib::System::Boolean  get_IsNested();

					//	Get:IsVisible
					mscorlib::System::Boolean  get_IsVisible();

					//	Get:GenericParameterPosition
					mscorlib::System::Int32  get_GenericParameterPosition();

					//	Get:GenericParameterAttributes
					mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  get_GenericParameterAttributes();

					//	Get:DeclaringMethod
					mscorlib::System::Reflection::MethodBase  get_DeclaringMethod();

					//	Get:StructLayoutAttribute
					mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  get_StructLayoutAttribute();

					//	Get:MetadataToken
					mscorlib::System::Int32  get_MetadataToken();

					//	Get:CustomAttributes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
