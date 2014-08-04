#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CONTENTTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CONTENTTYPE_H
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

					class X509ContentType
					{
					public:
						enum __ENUM__
						{
							Unknown = 0,
							Cert = 1,
							SerializedCert = 2,
							Pfx = 3,
							Pkcs12 = 3,
							SerializedStore = 4,
							Pkcs7 = 5,
							Authenticode = 6,
						};
					};

				}
			}
		}
	}
}
#endif
