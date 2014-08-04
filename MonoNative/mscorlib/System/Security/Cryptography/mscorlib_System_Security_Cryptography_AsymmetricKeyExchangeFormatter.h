#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER_H

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

				class AsymmetricKeyExchangeFormatter
					: public mscorlib::System::Object
				{
				public:
					AsymmetricKeyExchangeFormatter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					AsymmetricKeyExchangeFormatter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~AsymmetricKeyExchangeFormatter()
					{
					};
				

					AsymmetricKeyExchangeFormatter & operator=(AsymmetricKeyExchangeFormatter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  CreateKeyExchange(std::vector<mscorlib::System::Byte*> data);
					virtual std::vector<mscorlib::System::Byte*>  CreateKeyExchange(std::vector<mscorlib::System::Byte*> data, mscorlib::System::Type symAlgType);
					virtual void  SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Parameters)) mscorlib::System::String  Parameters;

					//Get Set Properties Methods
					//	Get:Parameters
					mscorlib::System::String  get_Parameters();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
