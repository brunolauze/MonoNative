#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER_H

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

				class AsymmetricKeyExchangeDeformatter
					: public mscorlib::System::Object
				{
				public:
					AsymmetricKeyExchangeDeformatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					AsymmetricKeyExchangeDeformatter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~AsymmetricKeyExchangeDeformatter()
					{
					};
				

					AsymmetricKeyExchangeDeformatter & operator=(AsymmetricKeyExchangeDeformatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  DecryptKeyExchange(std::vector<mscorlib::System::Byte*> rgb);
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Parameters, put=set_Parameters)) mscorlib::System::String  Parameters;

					//Get Set Properties Methods
					//	Get/Set:Parameters
					mscorlib::System::String  get_Parameters();
					void set_Parameters(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
