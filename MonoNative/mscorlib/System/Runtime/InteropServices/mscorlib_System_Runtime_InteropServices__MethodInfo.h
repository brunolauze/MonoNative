#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodImplAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class ParameterInfo;
			class Binder;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class Guid;
		class String;
		class RuntimeMethodHandle;
		

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

				class _MethodInfo
				{
				public:
					_MethodInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__MethodInfo = nativeObject;
					};
				
					~_MethodInfo()
					{
					};
				

					_MethodInfo & operator=(_MethodInfo &value) { __mscorlib_System_Runtime_InteropServices__MethodInfo = value.__mscorlib_System_Runtime_InteropServices__MethodInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__MethodInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__MethodInfo = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual mscorlib::System::Reflection::MethodInfo  GetBaseDefinition();
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual mscorlib::System::Reflection::MethodImplAttributes::__ENUM__  GetMethodImplementationFlags();
					virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetParameters();
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Object  Invoke(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> parameters);
					virtual mscorlib::System::Object  Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::MethodAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_CallingConvention)) mscorlib::System::Reflection::CallingConventions::__ENUM__  CallingConvention;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_IsAbstract)) mscorlib::System::Boolean  IsAbstract;
					__declspec(property(get=get_IsAssembly)) mscorlib::System::Boolean  IsAssembly;
					__declspec(property(get=get_IsConstructor)) mscorlib::System::Boolean  IsConstructor;
					__declspec(property(get=get_IsFamily)) mscorlib::System::Boolean  IsFamily;
					__declspec(property(get=get_IsFamilyAndAssembly)) mscorlib::System::Boolean  IsFamilyAndAssembly;
					__declspec(property(get=get_IsFamilyOrAssembly)) mscorlib::System::Boolean  IsFamilyOrAssembly;
					__declspec(property(get=get_IsFinal)) mscorlib::System::Boolean  IsFinal;
					__declspec(property(get=get_IsHideBySig)) mscorlib::System::Boolean  IsHideBySig;
					__declspec(property(get=get_IsPrivate)) mscorlib::System::Boolean  IsPrivate;
					__declspec(property(get=get_IsPublic)) mscorlib::System::Boolean  IsPublic;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_IsStatic)) mscorlib::System::Boolean  IsStatic;
					__declspec(property(get=get_IsVirtual)) mscorlib::System::Boolean  IsVirtual;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_MethodHandle)) mscorlib::System::RuntimeMethodHandle  MethodHandle;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_ReturnType)) mscorlib::System::Type  ReturnType;
					__declspec(property(get=get_ReturnTypeCustomAttributes)) mscorlib::System::Reflection::ICustomAttributeProvider  ReturnTypeCustomAttributes;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::MethodAttributes::__ENUM__  get_Attributes() const;

					//	Get:CallingConvention
					mscorlib::System::Reflection::CallingConventions::__ENUM__  get_CallingConvention() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:IsAbstract
					mscorlib::System::Boolean  get_IsAbstract() const;

					//	Get:IsAssembly
					mscorlib::System::Boolean  get_IsAssembly() const;

					//	Get:IsConstructor
					mscorlib::System::Boolean  get_IsConstructor() const;

					//	Get:IsFamily
					mscorlib::System::Boolean  get_IsFamily() const;

					//	Get:IsFamilyAndAssembly
					mscorlib::System::Boolean  get_IsFamilyAndAssembly() const;

					//	Get:IsFamilyOrAssembly
					mscorlib::System::Boolean  get_IsFamilyOrAssembly() const;

					//	Get:IsFinal
					mscorlib::System::Boolean  get_IsFinal() const;

					//	Get:IsHideBySig
					mscorlib::System::Boolean  get_IsHideBySig() const;

					//	Get:IsPrivate
					mscorlib::System::Boolean  get_IsPrivate() const;

					//	Get:IsPublic
					mscorlib::System::Boolean  get_IsPublic() const;

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName() const;

					//	Get:IsStatic
					mscorlib::System::Boolean  get_IsStatic() const;

					//	Get:IsVirtual
					mscorlib::System::Boolean  get_IsVirtual() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

					//	Get:MethodHandle
					mscorlib::System::RuntimeMethodHandle  get_MethodHandle() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

					//	Get:ReturnType
					mscorlib::System::Type  get_ReturnType() const;

					//	Get:ReturnTypeCustomAttributes
					mscorlib::System::Reflection::ICustomAttributeProvider  get_ReturnTypeCustomAttributes() const;

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__MethodInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
