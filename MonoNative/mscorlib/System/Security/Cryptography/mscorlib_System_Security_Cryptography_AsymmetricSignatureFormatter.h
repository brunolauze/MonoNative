#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_H

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

				class AsymmetricSignatureFormatter
					: public mscorlib::System::Object
				{
				public:
					AsymmetricSignatureFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					AsymmetricSignatureFormatter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~AsymmetricSignatureFormatter()
					{
					};
				

					AsymmetricSignatureFormatter & operator=(AsymmetricSignatureFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(AsymmetricSignatureFormatter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  SetHashAlgorithm(mscorlib::System::String strName);
					virtual void  SetHashAlgorithm(const char *strName);
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual std::vector<mscorlib::System::Byte*>  CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash);
					virtual std::vector<mscorlib::System::Byte*>  CreateSignature(mscorlib::System::Security::Cryptography::HashAlgorithm hash);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
