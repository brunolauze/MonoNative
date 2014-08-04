#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPROVIDERFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPROVIDERFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class CspProviderFlags
				{
				public:
					enum __ENUM__
					{
						NoFlags = 0,
						UseMachineKeyStore = 1,
						UseDefaultKeyContainer = 2,
						UseNonExportableKey = 4,
						UseExistingKey = 8,
						UseArchivableKey = 16,
						UseUserProtectedKey = 32,
						NoPrompt = 64,
						CreateEphemeralKey = 128,
					};
				};

			}
		}
	}
}
#endif
