#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREFORMATTER_H

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

				class DSASignatureFormatter
					: public mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter
				{
				public:
					DSASignatureFormatter()
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSASignatureFormatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter");
					};
				
					DSASignatureFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.DSASignatureFormatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter", 1, __parameter_types__, __parameters__);
					};
				
					DSASignatureFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(nativeTypeInfo)
					{
					};
				
					DSASignatureFormatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(nativeObject)
					{
					};
				
					~DSASignatureFormatter()
					{
					};
				

					DSASignatureFormatter & operator=(DSASignatureFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DSASignatureFormatter &value) { return mscorlib::System::Object::Equals(value); };
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
