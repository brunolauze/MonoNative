#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ConstructorInfo;
			class CustomAttributeTypedArgument;
			class CustomAttributeNamedArgument;
			class Assembly;
			class MemberInfo;
			class Module;
			class ParameterInfo;
			

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
		namespace Reflection
		{

			class CustomAttributeData
				: public mscorlib::System::Object
			{
			public:
				CustomAttributeData(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				CustomAttributeData(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~CustomAttributeData()
				{
				};
			

				CustomAttributeData & operator=(CustomAttributeData &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributes(mscorlib::System::Reflection::Assembly target);
				static mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributes(mscorlib::System::Reflection::MemberInfo target);
				static mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributes(mscorlib::System::Reflection::Module target);
				static mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo target);
				virtual mscorlib::System::String  ToString() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Constructor)) mscorlib::System::Reflection::ConstructorInfo  Constructor;
				__declspec(property(get=get_ConstructorArguments)) mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeTypedArgument>  ConstructorArguments;
				__declspec(property(get=get_NamedArguments)) mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeNamedArgument>  NamedArguments;
				__declspec(property(get=get_AttributeType)) mscorlib::System::Type  AttributeType;

				//Get Set Properties Methods
				//	Get:Constructor
				mscorlib::System::Reflection::ConstructorInfo  get_Constructor();

				//	Get:ConstructorArguments
				mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeTypedArgument>  get_ConstructorArguments();

				//	Get:NamedArguments
				mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeNamedArgument>  get_NamedArguments();

				//	Get:AttributeType
				mscorlib::System::Type  get_AttributeType();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
