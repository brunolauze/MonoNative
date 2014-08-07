#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PARAMETERBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_PARAMETERBUILDER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__ParameterBuilder.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		

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

				class ParameterToken;
				class CustomAttributeBuilder;
				class UnmanagedMarshal;
				

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

			class ConstructorInfo;
			

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

				class ParameterBuilder
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_ParameterBuilder
				{
				public:
					ParameterBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_ParameterBuilder(NULL)
					{
					};
				
					ParameterBuilder(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_ParameterBuilder(nativeObject)
					{
					};
				
					~ParameterBuilder()
					{
					};
				

					ParameterBuilder & operator=(ParameterBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ParameterBuilder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Reflection::Emit::ParameterToken  GetToken();
					virtual void  SetConstant(mscorlib::System::Object defaultValue);
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					virtual void  SetMarshal(mscorlib::System::Reflection::Emit::UnmanagedMarshal unmanagedMarshal);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Attributes)) mscorlib::System::Int32  Attributes;
					__declspec(property(get=get_IsIn)) mscorlib::System::Boolean  IsIn;
					__declspec(property(get=get_IsOut)) mscorlib::System::Boolean  IsOut;
					__declspec(property(get=get_IsOptional)) mscorlib::System::Boolean  IsOptional;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Position)) mscorlib::System::Int32  Position;

					//Get Set Properties Methods
					//	Get:Attributes
					mscorlib::System::Int32  get_Attributes() const;

					//	Get:IsIn
					mscorlib::System::Boolean  get_IsIn() const;

					//	Get:IsOut
					mscorlib::System::Boolean  get_IsOut() const;

					//	Get:IsOptional
					mscorlib::System::Boolean  get_IsOptional() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:Position
					mscorlib::System::Int32  get_Position() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
