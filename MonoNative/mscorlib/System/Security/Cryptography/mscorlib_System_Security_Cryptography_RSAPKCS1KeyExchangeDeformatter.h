#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEDEFORMATTER_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeDeformatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
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

				class RandomNumberGenerator;
				

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

				class RSAPKCS1KeyExchangeDeformatter
					: public mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter
				{
				public:
					RSAPKCS1KeyExchangeDeformatter()
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter");
					};
				
					RSAPKCS1KeyExchangeDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 1, __parameter_types__, __parameters__);
					};
				
					RSAPKCS1KeyExchangeDeformatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(nativeTypeInfo)
					{
					};
				
					RSAPKCS1KeyExchangeDeformatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(nativeObject)
					{
					};
				
					~RSAPKCS1KeyExchangeDeformatter()
					{
					};
				

					RSAPKCS1KeyExchangeDeformatter & operator=(RSAPKCS1KeyExchangeDeformatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RSAPKCS1KeyExchangeDeformatter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  DecryptKeyExchange(std::vector<mscorlib::System::Byte*> rgbIn) override;
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Parameters, put=set_Parameters)) mscorlib::System::String  Parameters;
					__declspec(property(get=get_RNG, put=set_RNG)) mscorlib::System::Security::Cryptography::RandomNumberGenerator  RNG;

					//Get Set Properties Methods
					//	Get/Set:Parameters
					mscorlib::System::String  get_Parameters() const;
					void set_Parameters(mscorlib::System::String  value);

					//	Get/Set:RNG
					mscorlib::System::Security::Cryptography::RandomNumberGenerator  get_RNG() const;
					void set_RNG(mscorlib::System::Security::Cryptography::RandomNumberGenerator  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
