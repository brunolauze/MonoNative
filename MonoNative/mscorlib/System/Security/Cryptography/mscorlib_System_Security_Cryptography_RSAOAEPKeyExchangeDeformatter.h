#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_H

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

				class RSAOAEPKeyExchangeDeformatter
					: public mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter
				{
				public:
					RSAOAEPKeyExchangeDeformatter()
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter");
					};
				
					RSAOAEPKeyExchangeDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm");
						__parameters__[0] = (MonoObject*)key;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter", 1, __parameter_types__, __parameters__);
					};
				
					RSAOAEPKeyExchangeDeformatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(nativeTypeInfo)
					{
					};
				
					RSAOAEPKeyExchangeDeformatter(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter(nativeObject)
					{
					};
				
					~RSAOAEPKeyExchangeDeformatter()
					{
					};
				

					RSAOAEPKeyExchangeDeformatter & operator=(RSAOAEPKeyExchangeDeformatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  DecryptKeyExchange(std::vector<mscorlib::System::Byte*> rgbData) override;
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Parameters, put=set_Parameters)) mscorlib::System::String  Parameters;

					//Get Set Properties Methods
					//	Get/Set:Parameters
					mscorlib::System::String  get_Parameters() const;
					void set_Parameters(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
