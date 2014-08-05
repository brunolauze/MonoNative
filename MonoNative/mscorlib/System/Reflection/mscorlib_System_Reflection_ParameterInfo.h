#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterAttributes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberInfo;
			class CustomAttributeData;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ParameterInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::InteropServices::_ParameterInfo
			{
			public:
				ParameterInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::InteropServices::_ParameterInfo(NULL)
				{
				};
			
				ParameterInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_ParameterInfo(nativeObject)
				{
				};
			
				~ParameterInfo()
				{
				};
			

				ParameterInfo & operator=(ParameterInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Type*>  GetRequiredCustomModifiers();
				virtual std::vector<mscorlib::System::Type*>  GetOptionalCustomModifiers();
				virtual mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributesData();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ParameterType)) mscorlib::System::Type  ParameterType;
				__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::ParameterAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_IsIn)) mscorlib::System::Boolean  IsIn;
				__declspec(property(get=get_IsLcid)) mscorlib::System::Boolean  IsLcid;
				__declspec(property(get=get_IsOptional)) mscorlib::System::Boolean  IsOptional;
				__declspec(property(get=get_IsOut)) mscorlib::System::Boolean  IsOut;
				__declspec(property(get=get_IsRetval)) mscorlib::System::Boolean  IsRetval;
				__declspec(property(get=get_Member)) mscorlib::System::Reflection::MemberInfo  Member;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Position)) mscorlib::System::Int32  Position;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;
				__declspec(property(get=get_HasDefaultValue)) mscorlib::System::Boolean  HasDefaultValue;
				__declspec(property(get=get_DefaultValue)) mscorlib::System::Object  DefaultValue;
				__declspec(property(get=get_RawDefaultValue)) mscorlib::System::Object  RawDefaultValue;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;

				//Get Set Properties Methods
				//	Get:ParameterType
				mscorlib::System::Type  get_ParameterType() const;

				//	Get:Attributes
				mscorlib::System::Reflection::ParameterAttributes::__ENUM__  get_Attributes() const;

				//	Get:IsIn
				mscorlib::System::Boolean  get_IsIn() const;

				//	Get:IsLcid
				mscorlib::System::Boolean  get_IsLcid() const;

				//	Get:IsOptional
				mscorlib::System::Boolean  get_IsOptional() const;

				//	Get:IsOut
				mscorlib::System::Boolean  get_IsOut() const;

				//	Get:IsRetval
				mscorlib::System::Boolean  get_IsRetval() const;

				//	Get:Member
				mscorlib::System::Reflection::MemberInfo  get_Member() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:Position
				mscorlib::System::Int32  get_Position() const;

				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes() const;

				//	Get:HasDefaultValue
				mscorlib::System::Boolean  get_HasDefaultValue() const;

				//	Get:DefaultValue
				mscorlib::System::Object  get_DefaultValue() const;

				//	Get:RawDefaultValue
				mscorlib::System::Object  get_RawDefaultValue() const;

				//	Get:MetadataToken
				mscorlib::System::Int32  get_MetadataToken() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
