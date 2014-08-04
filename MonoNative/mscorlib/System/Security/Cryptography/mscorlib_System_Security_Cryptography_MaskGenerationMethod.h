#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class MaskGenerationMethod
					: public mscorlib::System::Object
				{
				public:
					MaskGenerationMethod(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					MaskGenerationMethod(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~MaskGenerationMethod()
					{
					};
				

					MaskGenerationMethod & operator=(MaskGenerationMethod &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  GenerateMask(std::vector<mscorlib::System::Byte*> rgbSeed, mscorlib::System::Int32 cbReturn);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
