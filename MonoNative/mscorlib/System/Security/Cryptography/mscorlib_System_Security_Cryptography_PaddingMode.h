#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_PADDINGMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_PADDINGMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class PaddingMode
				{
				public:
					enum __ENUM__
					{
						None = 1,
						PKCS7 = 2,
						Zeros = 3,
						ANSIX923 = 4,
						ISO10126 = 5,
					};
				};

			}
		}
	}
}
#endif
