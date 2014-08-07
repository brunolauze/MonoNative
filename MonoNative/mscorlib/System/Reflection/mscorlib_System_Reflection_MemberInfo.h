#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MEMBERINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MEMBERINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

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
		namespace Reflection
		{

			class Module;
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

			class MemberInfo
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
			{
			public:
				MemberInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				{
				};
			
				MemberInfo(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
				{
				};
			
				~MemberInfo()
				{
				};
			

				MemberInfo & operator=(MemberInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(MemberInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributesData();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
				__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
				__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:DeclaringType
				mscorlib::System::Type  get_DeclaringType() const;

				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

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
