#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROPERTYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROPERTYINFO_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__PropertyInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class ParameterInfo;
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

		class Type;
		class String;
		

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

			class PropertyInfo
				: public mscorlib::System::Reflection::MemberInfo
				, public virtual mscorlib::System::Runtime::InteropServices::_PropertyInfo
				, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
			{
			public:
				PropertyInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Reflection::MemberInfo(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_PropertyInfo(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				{
				};
			
				PropertyInfo(MonoObject *nativeObject)
				: mscorlib::System::Reflection::MemberInfo(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_PropertyInfo(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				{
				};
			
				~PropertyInfo()
				{
				};
			

				PropertyInfo & operator=(PropertyInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetAccessors();
				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetAccessors(mscorlib::System::Boolean nonPublic);
				virtual mscorlib::System::Reflection::MethodInfo  GetGetMethod();
				virtual mscorlib::System::Reflection::MethodInfo  GetGetMethod(mscorlib::System::Boolean nonPublic);
				virtual std::vector<mscorlib::System::Reflection::ParameterInfo*>  GetIndexParameters();
				virtual mscorlib::System::Reflection::MethodInfo  GetSetMethod();
				virtual mscorlib::System::Reflection::MethodInfo  GetSetMethod(mscorlib::System::Boolean nonPublic);
				virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> index);
				mscorlib::System::Object  GetValue(mscorlib::System::Object obj);
				virtual mscorlib::System::Object  GetValue(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture);
				virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, std::vector<mscorlib::System::Object*> index);
				void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value);
				virtual void  SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture);
				virtual std::vector<mscorlib::System::Type*>  GetOptionalCustomModifiers();
				virtual std::vector<mscorlib::System::Type*>  GetRequiredCustomModifiers();
				virtual mscorlib::System::Object  GetConstantValue();
				virtual mscorlib::System::Object  GetRawConstantValue();
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::PropertyAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_CanRead)) mscorlib::System::Boolean  CanRead;
				__declspec(property(get=get_CanWrite)) mscorlib::System::Boolean  CanWrite;
				__declspec(property(get=get_GetMethod)) mscorlib::System::Reflection::MethodInfo  GetMethod;
				__declspec(property(get=get_SetMethod)) mscorlib::System::Reflection::MethodInfo  SetMethod;
				__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
				__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
				__declspec(property(get=get_PropertyType)) mscorlib::System::Type  PropertyType;
				__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
				__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::PropertyAttributes::__ENUM__  get_Attributes();

				//	Get:CanRead
				mscorlib::System::Boolean  get_CanRead();

				//	Get:CanWrite
				mscorlib::System::Boolean  get_CanWrite();

				//	Get:GetMethod
				mscorlib::System::Reflection::MethodInfo  get_GetMethod();

				//	Get:SetMethod
				mscorlib::System::Reflection::MethodInfo  get_SetMethod();

				//	Get:IsSpecialName
				mscorlib::System::Boolean  get_IsSpecialName();

				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType();

				//	Get:PropertyType
				mscorlib::System::Type  get_PropertyType();

				//	Get:DeclaringType
				mscorlib::System::Type  get_DeclaringType();

				//	Get:Name
				mscorlib::System::String  get_Name();

				//	Get:ReflectedType
				mscorlib::System::Type  get_ReflectedType();

				//	Get:Module
				mscorlib::System::Reflection::Module  get_Module();

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
#endif
