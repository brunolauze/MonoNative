#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__CONSTRUCTORINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__CONSTRUCTORINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodImplAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Guid;
		class IntPtr;
		class String;
		class RuntimeMethodHandle;
		

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

				class _ConstructorInfo
				{
				public:
					_ConstructorInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__ConstructorInfo = nativeObject;
					};
				
					~_ConstructorInfo()
					{
					};
				

					_ConstructorInfo & operator=(_ConstructorInfo &value) { __mscorlib_System_Runtime_InteropServices__ConstructorInfo = value.__mscorlib_System_Runtime_InteropServices__ConstructorInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__ConstructorInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__ConstructorInfo = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
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
					virtual mscorlib::System::Object  Invoke_5(std::vector<mscorlib::System::Object*> parameters);
					virtual mscorlib::System::Object  Invoke_3(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> parameters);
					virtual mscorlib::System::Object  Invoke_4(mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::Object  Invoke_2(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture);
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

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::MethodAttributes::__ENUM__  get_Attributes();

					//	Get:CallingConvention
					mscorlib::System::Reflection::CallingConventions::__ENUM__  get_CallingConvention();

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType();

					//	Get:IsAbstract
					mscorlib::System::Boolean  get_IsAbstract();

					//	Get:IsAssembly
					mscorlib::System::Boolean  get_IsAssembly();

					//	Get:IsConstructor
					mscorlib::System::Boolean  get_IsConstructor();

					//	Get:IsFamily
					mscorlib::System::Boolean  get_IsFamily();

					//	Get:IsFamilyAndAssembly
					mscorlib::System::Boolean  get_IsFamilyAndAssembly();

					//	Get:IsFamilyOrAssembly
					mscorlib::System::Boolean  get_IsFamilyOrAssembly();

					//	Get:IsFinal
					mscorlib::System::Boolean  get_IsFinal();

					//	Get:IsHideBySig
					mscorlib::System::Boolean  get_IsHideBySig();

					//	Get:IsPrivate
					mscorlib::System::Boolean  get_IsPrivate();

					//	Get:IsPublic
					mscorlib::System::Boolean  get_IsPublic();

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName();

					//	Get:IsStatic
					mscorlib::System::Boolean  get_IsStatic();

					//	Get:IsVirtual
					mscorlib::System::Boolean  get_IsVirtual();

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType();

					//	Get:MethodHandle
					mscorlib::System::RuntimeMethodHandle  get_MethodHandle();

					//	Get:Name
					mscorlib::System::String  get_Name();

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType();

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__ConstructorInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
