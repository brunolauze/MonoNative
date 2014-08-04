#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__FIELDINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__FIELDINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Guid;
		class IntPtr;
		class TypedReference;
		class String;
		class RuntimeFieldHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

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

				class _FieldInfo
				{
				public:
					_FieldInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__FieldInfo = nativeObject;
					};
				
					~_FieldInfo()
					{
					};
				

					_FieldInfo & operator=(_FieldInfo &value) { __mscorlib_System_Runtime_InteropServices__FieldInfo = value.__mscorlib_System_Runtime_InteropServices__FieldInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__FieldInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__FieldInfo = value; return value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual mscorlib::System::Type  GetType();
					virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
					virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
					virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
					virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);
					virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj);
					virtual mscorlib::System::Object  GetValueDirect(mscorlib::System::TypedReference obj);
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value);
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Globalization::CultureInfo culture);
					virtual void  SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object value);
					virtual mscorlib::System::String  ToString();


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::FieldAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_FieldHandle)) mscorlib::System::RuntimeFieldHandle  FieldHandle;
					__declspec(property(get=get_FieldType)) mscorlib::System::Type  FieldType;
					__declspec(property(get=get_IsAssembly)) mscorlib::System::Boolean  IsAssembly;
					__declspec(property(get=get_IsFamily)) mscorlib::System::Boolean  IsFamily;
					__declspec(property(get=get_IsFamilyAndAssembly)) mscorlib::System::Boolean  IsFamilyAndAssembly;
					__declspec(property(get=get_IsFamilyOrAssembly)) mscorlib::System::Boolean  IsFamilyOrAssembly;
					__declspec(property(get=get_IsInitOnly)) mscorlib::System::Boolean  IsInitOnly;
					__declspec(property(get=get_IsLiteral)) mscorlib::System::Boolean  IsLiteral;
					__declspec(property(get=get_IsNotSerialized)) mscorlib::System::Boolean  IsNotSerialized;
					__declspec(property(get=get_IsPinvokeImpl)) mscorlib::System::Boolean  IsPinvokeImpl;
					__declspec(property(get=get_IsPrivate)) mscorlib::System::Boolean  IsPrivate;
					__declspec(property(get=get_IsPublic)) mscorlib::System::Boolean  IsPublic;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_IsStatic)) mscorlib::System::Boolean  IsStatic;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::FieldAttributes::__ENUM__  get_Attributes();

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType();

					//	Get:FieldHandle
					mscorlib::System::RuntimeFieldHandle  get_FieldHandle();

					//	Get:FieldType
					mscorlib::System::Type  get_FieldType();

					//	Get:IsAssembly
					mscorlib::System::Boolean  get_IsAssembly();

					//	Get:IsFamily
					mscorlib::System::Boolean  get_IsFamily();

					//	Get:IsFamilyAndAssembly
					mscorlib::System::Boolean  get_IsFamilyAndAssembly();

					//	Get:IsFamilyOrAssembly
					mscorlib::System::Boolean  get_IsFamilyOrAssembly();

					//	Get:IsInitOnly
					mscorlib::System::Boolean  get_IsInitOnly();

					//	Get:IsLiteral
					mscorlib::System::Boolean  get_IsLiteral();

					//	Get:IsNotSerialized
					mscorlib::System::Boolean  get_IsNotSerialized();

					//	Get:IsPinvokeImpl
					mscorlib::System::Boolean  get_IsPinvokeImpl();

					//	Get:IsPrivate
					mscorlib::System::Boolean  get_IsPrivate();

					//	Get:IsPublic
					mscorlib::System::Boolean  get_IsPublic();

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName();

					//	Get:IsStatic
					mscorlib::System::Boolean  get_IsStatic();

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType();

					//	Get:Name
					mscorlib::System::String  get_Name();

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType();

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__FieldInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
