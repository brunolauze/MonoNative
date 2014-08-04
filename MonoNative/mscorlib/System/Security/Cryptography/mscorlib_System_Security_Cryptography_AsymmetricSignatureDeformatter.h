#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREDEFORMATTER_H

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

				class AsymmetricAlgorithm;
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

				class AsymmetricSignatureDeformatter
					: public mscorlib::System::Object
				{
				public:
					AsymmetricSignatureDeformatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					AsymmetricSignatureDeformatter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~AsymmetricSignatureDeformatter()
					{
					};
				

					AsymmetricSignatureDeformatter & operator=(AsymmetricSignatureDeformatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  SetHashAlgorithm(mscorlib::System::String strName);
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual mscorlib::System::Boolean  VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature);
					virtual mscorlib::System::Boolean  VerifySignature(mscorlib::System::Security::Cryptography::HashAlgorithm hash, std::vector<mscorlib::System::Byte*> rgbSignature);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
