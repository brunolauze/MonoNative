#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__PropertyBuilder.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__PropertyInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		

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

				class PropertyToken;
				class MethodBuilder;
				class CustomAttributeBuilder;
				

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

			class MethodInfo;
			class ParameterInfo;
			class Binder;
			class ConstructorInfo;
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
			namespace Emit
			{

				class PropertyBuilder
					: public mscorlib::System::Reflection::PropertyInfo
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
					, public virtual mscorlib::System::Runtime::InteropServices::_PropertyBuilder
					, public virtual mscorlib::System::Runtime::InteropServices::_PropertyInfo
					, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
				{
				public:
					PropertyBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::PropertyInfo(nativeTypeInfo)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_PropertyBuilder(NULL)
					, mscorlib::System::Runtime::InteropServices::_PropertyInfo(NULL)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
					{
					};
				
					PropertyBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::PropertyInfo(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_PropertyBuilder(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_PropertyInfo(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
					{
					};
				
					~PropertyBuilder()
					{
					};
				

					PropertyBuilder & operator=(PropertyBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddOtherMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetAccessors(mscorlib::System::Boolean nonPublic) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual mscorlib::System::Reflection::MethodInfo  GetGetMethod(mscorlib::System::Boolean nonPublic) override;
					virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetIndexParameters() override;
					virtual mscorlib::System::Reflection::MethodInfo  GetSetMethod(mscorlib::System::Boolean nonPublic) override;
					virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> index) override;
					virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture) override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					void  SetConstant(mscorlib::System::Object defaultValue);
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					void  SetGetMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					void  SetSetMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder);
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, std::vector<mscorlib::System::Object*> index) override;
					virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::PropertyAttributes::__ENUM__  Attributes;
					__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
					__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
					__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_PropertyToken)) mscorlib::System::Reflection::Emit::PropertyToken  PropertyToken;
					__declspec(property(get=get_PropertyType)) mscorlib::System::Type  PropertyType;
					__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
					__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
					__declspec(property(get=get_GetMethod)) mscorlib::System::Reflection::MethodInfo  GetMethod;
					__declspec(property(get=get_SetMethod)) mscorlib::System::Reflection::MethodInfo  SetMethod;
					__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
					__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
					__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Reflection::PropertyAttributes::__ENUM__  get_Attributes() const;

					//	Get:CanRead
					mscorlib::System::Boolean  get_CanRead() const;

					//	Get:CanWrite
					mscorlib::System::Boolean  get_CanWrite() const;

					//	Get:DeclaringType
					mscorlib::System::Type  get_DeclaringType() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:PropertyToken
					mscorlib::System::Reflection::Emit::PropertyToken  get_PropertyToken() const;

					//	Get:PropertyType
					mscorlib::System::Type  get_PropertyType() const;

					//	Get:ReflectedType
					mscorlib::System::Type  get_ReflectedType() const;

					//	Get:Module
					mscorlib::System::Reflection::Module  get_Module() const;

					//	Get:GetMethod
					mscorlib::System::Reflection::MethodInfo  get_GetMethod() const;

					//	Get:SetMethod
					mscorlib::System::Reflection::MethodInfo  get_SetMethod() const;

					//	Get:IsSpecialName
					mscorlib::System::Boolean  get_IsSpecialName() const;

					//	Get:MemberType
					mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

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
