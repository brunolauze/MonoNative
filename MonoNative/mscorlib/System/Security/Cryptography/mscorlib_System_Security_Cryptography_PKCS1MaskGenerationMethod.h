#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_MaskGenerationMethod.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Security
		{
			namespace Cryptography
			{

				class PKCS1MaskGenerationMethod
					: public mscorlib::System::Security::Cryptography::MaskGenerationMethod
				{
				public:
					PKCS1MaskGenerationMethod()
					: mscorlib::System::Security::Cryptography::MaskGenerationMethod(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.PKCS1MaskGenerationMethod"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "PKCS1MaskGenerationMethod");
					};
				
					PKCS1MaskGenerationMethod(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::MaskGenerationMethod(nativeTypeInfo)
					{
					};
				
					PKCS1MaskGenerationMethod(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::MaskGenerationMethod(nativeObject)
					{
					};
				
					~PKCS1MaskGenerationMethod()
					{
					};
				

					PKCS1MaskGenerationMethod & operator=(PKCS1MaskGenerationMethod &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(PKCS1MaskGenerationMethod &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  GenerateMask(std::vector<mscorlib::System::Byte*> rgbSeed, mscorlib::System::Int32 cbReturn) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_HashName, put=set_HashName)) mscorlib::System::String  HashName;

					//Get Set Properties Methods
					//	Get/Set:HashName
					mscorlib::System::String  get_HashName() const;
					void set_HashName(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
