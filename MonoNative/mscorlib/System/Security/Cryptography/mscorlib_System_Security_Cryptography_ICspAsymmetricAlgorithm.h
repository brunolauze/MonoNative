#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		

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

				class CspKeyContainerInfo;
				

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

				class ICspAsymmetricAlgorithm
				{
				public:
					ICspAsymmetricAlgorithm(MonoObject *nativeObject)
					{
						__mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm = nativeObject;
					};
				
					~ICspAsymmetricAlgorithm()
					{
					};
				

					ICspAsymmetricAlgorithm & operator=(ICspAsymmetricAlgorithm &value) { __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm = value.__mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm = value; return value; };


					virtual std::vector<mscorlib::System::Byte*>  ExportCspBlob(mscorlib::System::Boolean includePrivateParameters);
					virtual void  ImportCspBlob(std::vector<mscorlib::System::Byte*> rawData);


					//Public Properties
					__declspec(property(get=get_CspKeyContainerInfo)) mscorlib::System::Security::Cryptography::CspKeyContainerInfo  CspKeyContainerInfo;

					//Get Set Properties Methods
					//	Get:CspKeyContainerInfo
					mscorlib::System::Security::Cryptography::CspKeyContainerInfo  get_CspKeyContainerInfo() const;

				
				protected:
					MonoObject *__mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm;
				
				private:
				
				};

			}
		}
	}
}
#endif
