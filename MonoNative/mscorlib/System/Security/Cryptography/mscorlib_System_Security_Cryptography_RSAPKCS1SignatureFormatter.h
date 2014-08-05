#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREFORMATTER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureFormatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class String;
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

				class HashAlgorithm;
				

			}
		}
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

				class RSAPKCS1SignatureFormatter
					: public mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter
				{
				public:
					RSAPKCS1SignatureFormatter()
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1SignatureFormatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
					};
				
					RSAPKCS1SignatureFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1SignatureFormatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureFormatter", 1, __parameter_types__, __parameters__);
					};
				
					RSAPKCS1SignatureFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(nativeTypeInfo)
					{
					};
				
					RSAPKCS1SignatureFormatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(nativeObject)
					{
					};
				
					~RSAPKCS1SignatureFormatter()
					{
					};
				

					RSAPKCS1SignatureFormatter & operator=(RSAPKCS1SignatureFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash) override;
					virtual void  SetHashAlgorithm(mscorlib::System::String strName) override;
					virtual void  SetHashAlgorithm(const char *strName) override;
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
