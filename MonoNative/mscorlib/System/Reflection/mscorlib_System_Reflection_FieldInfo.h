#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_FIELDINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_FIELDINFO_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class RuntimeFieldHandle;
		class Type;
		class TypedReference;
		class String;
		class RuntimeTypeHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Binder;
			class Module;
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

			class FieldInfo
				: public mscorlib::System::Reflection::MemberInfo
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
				, public virtual mscorlib::System::Runtime::InteropServices::_FieldInfo
			{
			public:
				FieldInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Reflection::MemberInfo(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				, mscorlib::System::Runtime::InteropServices::_FieldInfo(NULL)
				{
				};
			
				FieldInfo(MonoObject *nativeObject)
				: mscorlib::System::Reflection::MemberInfo(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_FieldInfo(nativeObject)
				{
				};
			
				~FieldInfo()
				{
				};
			

				FieldInfo & operator=(FieldInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(FieldInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj);
				virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Globalization::CultureInfo culture);
				virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value);
				static mscorlib::System::Reflection::FieldInfo  GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle);
				static mscorlib::System::Reflection::FieldInfo  GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle, mscorlib::System::RuntimeTypeHandle declaringType);
				virtual mscorlib::System::Object  GetValueDirect(mscorlib::System::TypedReference obj);
				virtual void  SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object value);
				virtual std::vector<mscorlib::System::Type*>  GetOptionalCustomModifiers();
				virtual std::vector<mscorlib::System::Type*>  GetRequiredCustomModifiers();
				virtual mscorlib::System::Object  GetRawConstantValue();
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::FieldAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_FieldHandle)) mscorlib::System::RuntimeFieldHandle  FieldHandle;
				__declspec(property(get=get_FieldType)) mscorlib::System::Type  FieldType;
				__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
				__declspec(property(get=get_IsLiteral)) mscorlib::System::Boolean  IsLiteral;
				__declspec(property(get=get_IsStatic)) mscorlib::System::Boolean  IsStatic;
				__declspec(property(get=get_IsInitOnly)) mscorlib::System::Boolean  IsInitOnly;
				__declspec(property(get=get_IsPublic)) mscorlib::System::Boolean  IsPublic;
				__declspec(property(get=get_IsPrivate)) mscorlib::System::Boolean  IsPrivate;
				__declspec(property(get=get_IsFamily)) mscorlib::System::Boolean  IsFamily;
				__declspec(property(get=get_IsAssembly)) mscorlib::System::Boolean  IsAssembly;
				__declspec(property(get=get_IsFamilyAndAssembly)) mscorlib::System::Boolean  IsFamilyAndAssembly;
				__declspec(property(get=get_IsFamilyOrAssembly)) mscorlib::System::Boolean  IsFamilyOrAssembly;
				__declspec(property(get=get_IsPinvokeImpl)) mscorlib::System::Boolean  IsPinvokeImpl;
				__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
				__declspec(property(get=get_IsNotSerialized)) mscorlib::System::Boolean  IsNotSerialized;
				__declspec(property(get=get_IsSecurityCritical)) mscorlib::System::Boolean  IsSecurityCritical;
				__declspec(property(get=get_IsSecuritySafeCritical)) mscorlib::System::Boolean  IsSecuritySafeCritical;
				__declspec(property(get=get_IsSecurityTransparent)) mscorlib::System::Boolean  IsSecurityTransparent;
				__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
				__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::FieldAttributes::__ENUM__  get_Attributes() const;

				//	Get:FieldHandle
				mscorlib::System::RuntimeFieldHandle  get_FieldHandle() const;

				//	Get:FieldType
				mscorlib::System::Type  get_FieldType() const;

				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

				//	Get:IsLiteral
				mscorlib::System::Boolean  get_IsLiteral() const;

				//	Get:IsStatic
				mscorlib::System::Boolean  get_IsStatic() const;

				//	Get:IsInitOnly
				mscorlib::System::Boolean  get_IsInitOnly() const;

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

				//	Get:IsPinvokeImpl
				mscorlib::System::Boolean  get_IsPinvokeImpl() const;

				//	Get:IsSpecialName
				mscorlib::System::Boolean  get_IsSpecialName() const;

				//	Get:IsNotSerialized
				mscorlib::System::Boolean  get_IsNotSerialized() const;

				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  get_IsSecurityCritical() const;

				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  get_IsSecuritySafeCritical() const;

				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  get_IsSecurityTransparent() const;

				//	Get:DeclaringType
				mscorlib::System::Type  get_DeclaringType() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:ReflectedType
				mscorlib::System::Type  get_ReflectedType() const;

				//	Get:Module
				mscorlib::System::Reflection::Module  get_Module() const;

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
#endif
