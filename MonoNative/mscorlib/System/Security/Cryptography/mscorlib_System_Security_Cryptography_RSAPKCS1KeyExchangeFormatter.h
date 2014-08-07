#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeFormatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class RandomNumberGenerator;
				

			}
		}
	}
}
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

				class RSAPKCS1KeyExchangeFormatter
					: public mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter
				{
				public:
					RSAPKCS1KeyExchangeFormatter()
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter");
					};
				
					RSAPKCS1KeyExchangeFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter", 1, __parameter_types__, __parameters__);
					};
				
					RSAPKCS1KeyExchangeFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter(nativeTypeInfo)
					{
					};
				
					RSAPKCS1KeyExchangeFormatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeFormatter(nativeObject)
					{
					};
				
					~RSAPKCS1KeyExchangeFormatter()
					{
					};
				

					RSAPKCS1KeyExchangeFormatter & operator=(RSAPKCS1KeyExchangeFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RSAPKCS1KeyExchangeFormatter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  CreateKeyExchange(std::vector<mscorlib::System::Byte*> rgbData) override;
					virtual std::vector<mscorlib::System::Byte*>  CreateKeyExchange(std::vector<mscorlib::System::Byte*> rgbData, mscorlib::System::Type symAlgType) override;
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Rng, put=set_Rng)) mscorlib::System::Security::Cryptography::RandomNumberGenerator  Rng;
					__declspec(property(get=get_Parameters)) mscorlib::System::String  Parameters;

					//Get Set Properties Methods
					//	Get/Set:Rng
					mscorlib::System::Security::Cryptography::RandomNumberGenerator  get_Rng() const;
					void set_Rng(mscorlib::System::Security::Cryptography::RandomNumberGenerator  value);

					//	Get:Parameters
					mscorlib::System::String  get_Parameters() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
