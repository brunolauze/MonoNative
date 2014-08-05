#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_DYNAMICILINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_DYNAMICILINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class DynamicMethod;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Byte;
		class RuntimeFieldHandle;
		class RuntimeMethodHandle;
		class RuntimeTypeHandle;
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
			namespace Emit
			{

				class DynamicILInfo
					: public mscorlib::System::Object
				{
				public:
					DynamicILInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					DynamicILInfo(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~DynamicILInfo()
					{
					};
				

					DynamicILInfo & operator=(DynamicILInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Int32  GetTokenFor(std::vector<mscorlib::System::Byte*> signature);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::Reflection::Emit::DynamicMethod method);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::RuntimeFieldHandle field);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::RuntimeMethodHandle method);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::RuntimeTypeHandle type);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::String literal);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::RuntimeMethodHandle method, mscorlib::System::RuntimeTypeHandle contextType);
					mscorlib::System::Int32  GetTokenFor(mscorlib::System::RuntimeFieldHandle field, mscorlib::System::RuntimeTypeHandle contextType);
					void  SetCode(std::vector<mscorlib::System::Byte*> code, mscorlib::System::Int32 maxStackSize);
					void  SetCode(mscorlib::System::Byte* code, mscorlib::System::Int32 codeSize, mscorlib::System::Int32 maxStackSize);
					void  SetExceptions(std::vector<mscorlib::System::Byte*> exceptions);
					void  SetExceptions(mscorlib::System::Byte* exceptions, mscorlib::System::Int32 exceptionsSize);
					void  SetLocalSignature(std::vector<mscorlib::System::Byte*> localSignature);
					void  SetLocalSignature(mscorlib::System::Byte* localSignature, mscorlib::System::Int32 signatureSize);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_DynamicMethod)) mscorlib::System::Reflection::Emit::DynamicMethod  DynamicMethod;

					//Get Set Properties Methods
					//	Get:DynamicMethod
					mscorlib::System::Reflection::Emit::DynamicMethod  get_DynamicMethod() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
