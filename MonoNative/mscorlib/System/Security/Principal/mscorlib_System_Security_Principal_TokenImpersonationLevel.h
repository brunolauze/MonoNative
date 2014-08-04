#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_TOKENIMPERSONATIONLEVEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_TOKENIMPERSONATIONLEVEL_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class TokenImpersonationLevel
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Anonymous = 1,
						Identification = 2,
						Impersonation = 3,
						Delegation = 4,
					};
				};

			}
		}
	}
}
#endif
