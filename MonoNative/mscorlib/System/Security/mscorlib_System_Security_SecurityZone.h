#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYZONE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYZONE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityZone
			{
			public:
				enum __ENUM__
				{
					MyComputer = 0,
					Intranet = 1,
					Trusted = 2,
					Internet = 3,
					Untrusted = 4,
					NoZone = -1,
				};
			};

		}
	}
}
#endif
