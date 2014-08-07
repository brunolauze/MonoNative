#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_SIGNATUREHELPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_SIGNATUREHELPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__SignatureHelper.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CallingConvention.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
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

				class SignatureHelper
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_SignatureHelper
				{
				public:
					SignatureHelper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_SignatureHelper(NULL)
					{
					};
				
					SignatureHelper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_SignatureHelper(nativeObject)
					{
					};
				
					~SignatureHelper()
					{
					};
				

					SignatureHelper & operator=(SignatureHelper &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SignatureHelper &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Reflection::Emit::SignatureHelper  GetFieldSigHelper(mscorlib::System::Reflection::Module mod);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetLocalVarSigHelper(mscorlib::System::Reflection::Module mod);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetLocalVarSigHelper();
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetMethodSigHelper(mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetMethodSigHelper(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallingConvention, mscorlib::System::Type returnType);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallConv, mscorlib::System::Type returnType);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers);
					static mscorlib::System::Reflection::Emit::SignatureHelper  GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers);
					void  AddArguments(std::vector<mscorlib::System::Type*> arguments, std::vector<mscorlib::System::Type**> requiredCustomModifiers, std::vector<mscorlib::System::Type**> optionalCustomModifiers);
					void  AddArgument(mscorlib::System::Type argument, mscorlib::System::Boolean pinned);
					void  AddArgument(mscorlib::System::Type argument, std::vector<mscorlib::System::Type*> requiredCustomModifiers, std::vector<mscorlib::System::Type*> optionalCustomModifiers);
					void  AddArgument(mscorlib::System::Type clsArgument);
					void  AddSentinel();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					std::vector<mscorlib::System::Byte*>  GetSignature();
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
