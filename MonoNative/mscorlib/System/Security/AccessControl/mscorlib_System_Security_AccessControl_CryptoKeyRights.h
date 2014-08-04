#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CRYPTOKEYRIGHTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CRYPTOKEYRIGHTS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class CryptoKeyRights
				{
				public:
					enum __ENUM__
					{
						ReadData = 1,
						WriteData = 2,
						ReadExtendedAttributes = 8,
						WriteExtendedAttributes = 16,
						ReadAttributes = 128,
						WriteAttributes = 256,
						Delete = 65536,
						ReadPermissions = 131072,
						ChangePermissions = 262144,
						TakeOwnership = 524288,
						Synchronize = 1048576,
						FullControl = 2032027,
						GenericAll = 268435456,
						GenericExecute = 536870912,
						GenericWrite = 1073741824,
						GenericRead = -2147483648,
					};
				};

			}
		}
	}
}
#endif
