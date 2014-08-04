#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__TYPE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeAttributes.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Guid;
		class IntPtr;
		class RuntimeTypeHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberInfo;
			class ConstructorInfo;
			class Binder;
			class ParameterModifier;
			class EventInfo;
			class FieldInfo;
			class InterfaceMapping;
			class MethodInfo;
			class PropertyInfo;
			class Assembly;
			class Module;
			

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

				class _Type
				{
				public:
					_Type(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__Type = nativeObject;
					};
				
					~_Type()
					{
					};
				

					_Type & operator=(_Type &value) { __mscorlib_System_Runtime_InteropServices__Type = value.__mscorlib_System_Runtime_InteropServices__Type; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__Type; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__Type = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Type o);
					virtual std::vector<mscorlib::System::Type*>  FindInterfaces(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria);
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  FindMembers(mscorlib::System::Reflection::MemberTypes::__ENUM__ memberType, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria);
					virtual mscorlib::System::Int32  GetArrayRank();
					virtual mscorlib::System::Reflection::ConstructorInfo  GetConstructor(std::vector<mscorlib::System::Type*> types);
					virtual mscorlib::System::Reflection::ConstructorInfo  GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual mscorlib::System::Reflection::ConstructorInfo  GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual std::vector<mscorlib::System::Reflection::ConstructorInfo*>  GetConstructors();
					virtual std::vector<mscorlib::System::Reflection::ConstructorInfo*>  GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetDefaultMembers();
					virtual mscorlib::System::Type  GetElementType();
					virtual mscorlib::System::Reflection::EventInfo  GetEvent(mscorlib::System::String name);
					virtual mscorlib::System::Reflection::EventInfo  GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents();
					virtual std::vector<mscorlib::System::Reflection::EventInfo*>  GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name);
					virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields();
					virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);
					virtual mscorlib::System::Type  GetInterface(mscorlib::System::String name);
					virtual mscorlib::System::Type  GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase);
					virtual mscorlib::System::Reflection::InterfaceMapping  GetInterfaceMap(mscorlib::System::Type interfaceType);
					virtual std::vector<mscorlib::System::Type*>  GetInterfaces();
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name);
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMembers();
					virtual std::vector<mscorlib::System::Reflection::MemberInfo*>  GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual mscorlib::System::Reflection::MethodInfo  GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods();
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Type  GetNestedType(mscorlib::System::String name);
					virtual mscorlib::System::Type  GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Type*>  GetNestedTypes();
					virtual std::vector<mscorlib::System::Type*>  GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual std::vector<mscorlib::System::Reflection::PropertyInfo*>  GetProperties();
					virtual std::vector<mscorlib::System::Reflection::PropertyInfo*>  GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual mscorlib::System::Reflection::PropertyInfo  GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers);
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args);
					virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::Object  InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters);
					virtual mscorlib::System::Boolean  IsAssignableFrom(mscorlib::System::Type c);
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Boolean  IsInstanceOfType(mscorlib::System::Object o);
					virtual mscorlib::System::Boolean  IsSubclassOf(mscorlib::System::Type c);
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_Assembly)) mscorlib::System::Reflection::Assembly  Assembly;
					__declspec(property(get=get_AssemblyQualifiedName)) mscorlib::System::String  AssemblyQualifiedName;
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::TypeAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_BaseType)) mscorlib::System::Type  BaseType;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
					__declspec(property(get=get_GUID)) mscorlib::System::Guid  GUID;
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
					__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Namespace)) mscorlib::System::String  Namespace;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_TypeHandle)) mscorlib::System::RuntimeTypeHandle  TypeHandle;
					__declspec(property(get=get_TypeInitializer)) mscorlib::System::Reflection::ConstructorInfo  TypeInitializer;
					__declspec(property(get=get_UnderlyingSystemType)) mscorlib::System::Type  UnderlyingSystemType;

					//Get Set Properties Methods
					//	Get:Assembly
					mscorlib::System::Reflection::Assembly  get_Assembly();

					//	Get:AssemblyQualifiedName
					mscorlib::System::String  get_AssemblyQualifiedName();

					//	Get:Attributes
					mscorlib::System::Reflection::TypeAttributes::__ENUM__  get_Attributes();

					//	Get:BaseType
					mscorlib::System::Type  get_BaseType();

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType();

					//	Get:FullName
					mscorlib::System::String  get_FullName();

					//	Get:GUID
					mscorlib::System::Guid  get_GUID();

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

					//	Get:TypeInitializer
					mscorlib::System::Reflection::ConstructorInfo  get_TypeInitializer();

					//	Get:UnderlyingSystemType
					mscorlib::System::Type  get_UnderlyingSystemType();

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__Type;
				
				private:
				
				};

			}
		}
	}
}
#endif
