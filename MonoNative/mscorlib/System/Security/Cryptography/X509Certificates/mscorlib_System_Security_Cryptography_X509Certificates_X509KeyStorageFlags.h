#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYSTORAGEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYSTORAGEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{
				namespace X509Certificates
				{

					class X509KeyStorageFlags
					{
					public:
						enum __ENUM__
						{
							DefaultKeySet = 0,
							UserKeySet = 1,
							MachineKeySet = 2,
							Exportable = 4,
							UserProtected = 8,
							PersistKeySet = 16,
						};
					};

				}
			}
		}
	}
}
#endif
