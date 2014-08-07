#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeTypedArgument.h>

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

			class CustomAttributeNamedArgument
				: public mscorlib::System::ValueType
			{
			public:
				CustomAttributeNamedArgument(mscorlib::System::Reflection::MemberInfo memberInfo, mscorlib::System::Object value)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.CustomAttributeNamedArgument"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "MemberInfo");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Object");
					__parameters__[0] = (MonoObject*)memberInfo;
					__parameters__[1] = (MonoObject*)value;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 2, __parameter_types__, __parameters__);
				};
			
				CustomAttributeNamedArgument(mscorlib::System::Reflection::MemberInfo memberInfo, mscorlib::System::Reflection::CustomAttributeTypedArgument typedArgument)
				: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.CustomAttributeNamedArgument"))
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Reflection", "MemberInfo");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Reflection", "CustomAttributeTypedArgument");
					__parameters__[0] = (MonoObject*)memberInfo;
					__parameters__[1] = (MonoObject*)typedArgument;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "CustomAttributeNamedArgument", 2, __parameter_types__, __parameters__);
				};
			
				CustomAttributeNamedArgument(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::ValueType(nativeTypeInfo)
				{
				};
			
				CustomAttributeNamedArgument(MonoObject *nativeObject)
				: mscorlib::System::ValueType(nativeObject)
				{
				};
			
				~CustomAttributeNamedArgument()
				{
				};
			

				CustomAttributeNamedArgument & operator=(CustomAttributeNamedArgument &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(CustomAttributeNamedArgument &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_MemberInfo)) mscorlib::System::Reflection::MemberInfo  MemberInfo;
				__declspec(property(get=get_TypedValue)) mscorlib::System::Reflection::CustomAttributeTypedArgument  TypedValue;
				__declspec(property(get=get_IsField)) mscorlib::System::Boolean  IsField;
				__declspec(property(get=get_MemberName)) mscorlib::System::String  MemberName;

				//Get Set Properties Methods
				//	Get:MemberInfo
				mscorlib::System::Reflection::MemberInfo  get_MemberInfo() const;

				//	Get:TypedValue
				mscorlib::System::Reflection::CustomAttributeTypedArgument  get_TypedValue() const;

				//	Get:IsField
				mscorlib::System::Boolean  get_IsField() const;

				//	Get:MemberName
				mscorlib::System::String  get_MemberName() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
