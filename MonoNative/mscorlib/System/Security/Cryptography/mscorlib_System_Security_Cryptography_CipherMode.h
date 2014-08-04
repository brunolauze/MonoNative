#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CIPHERMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CIPHERMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class CipherMode
				{
				public:
					enum __ENUM__
					{
						CBC = 1,
						ECB = 2,
						OFB = 3,
						CFB = 4,
						CTS = 5,
					};
				};

			}
		}
	}
}
#endif
