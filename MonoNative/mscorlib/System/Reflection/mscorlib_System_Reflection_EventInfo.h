#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EVENTINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EVENTINFO_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MemberInfo.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__EventInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberTypes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Delegate;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
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

			class EventInfo
				: public mscorlib::System::Reflection::MemberInfo
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::InteropServices::_MemberInfo
				, public virtual mscorlib::System::Runtime::InteropServices::_EventInfo
			{
			public:
				EventInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Reflection::MemberInfo(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(NULL)
				, mscorlib::System::Runtime::InteropServices::_EventInfo(NULL)
				{
				};
			
				EventInfo(MonoObject *nativeObject)
				: mscorlib::System::Reflection::MemberInfo(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_MemberInfo(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_EventInfo(nativeObject)
				{
				};
			
				~EventInfo()
				{
				};
			

				EventInfo & operator=(EventInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  AddEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler);
				virtual mscorlib::System::Reflection::MethodInfo  GetAddMethod();
				virtual mscorlib::System::Reflection::MethodInfo  GetAddMethod(mscorlib::System::Boolean nonPublic);
				virtual mscorlib::System::Reflection::MethodInfo  GetRaiseMethod();
				virtual mscorlib::System::Reflection::MethodInfo  GetRaiseMethod(mscorlib::System::Boolean nonPublic);
				virtual mscorlib::System::Reflection::MethodInfo  GetRemoveMethod();
				virtual mscorlib::System::Reflection::MethodInfo  GetRemoveMethod(mscorlib::System::Boolean nonPublic);
				virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetOtherMethods(mscorlib::System::Boolean nonPublic);
				std::vector<mscorlib::System::Reflection::MethodInfo*>  GetOtherMethods();
				virtual void  RemoveEventHandler(mscorlib::System::Object target, mscorlib::System::Delegate handler);
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Attributes)) mscorlib::System::Reflection::EventAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_EventHandlerType)) mscorlib::System::Type  EventHandlerType;
				__declspec(property(get=get_IsMulticast)) mscorlib::System::Boolean  IsMulticast;
				__declspec(property(get=get_IsSpecialName)) mscorlib::System::Boolean  IsSpecialName;
				__declspec(property(get=get_MemberType)) mscorlib::System::Reflection::MemberTypes::__ENUM__  MemberType;
				__declspec(property(get=get_AddMethod)) mscorlib::System::Reflection::MethodInfo  AddMethod;
				__declspec(property(get=get_RaiseMethod)) mscorlib::System::Reflection::MethodInfo  RaiseMethod;
				__declspec(property(get=get_RemoveMethod)) mscorlib::System::Reflection::MethodInfo  RemoveMethod;
				__declspec(property(get=get_DeclaringType)) mscorlib::System::Type  DeclaringType;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_ReflectedType)) mscorlib::System::Type  ReflectedType;
				__declspec(property(get=get_Module)) mscorlib::System::Reflection::Module  Module;
				__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::EventAttributes::__ENUM__  get_Attributes() const;

				//	Get:EventHandlerType
				mscorlib::System::Type  get_EventHandlerType() const;

				//	Get:IsMulticast
				mscorlib::System::Boolean  get_IsMulticast() const;

				//	Get:IsSpecialName
				mscorlib::System::Boolean  get_IsSpecialName() const;

				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  get_MemberType() const;

				//	Get:AddMethod
				mscorlib::System::Reflection::MethodInfo  get_AddMethod() const;

				//	Get:RaiseMethod
				mscorlib::System::Reflection::MethodInfo  get_RaiseMethod() const;

				//	Get:RemoveMethod
				mscorlib::System::Reflection::MethodInfo  get_RemoveMethod() const;

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
