#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_PRINCIPALPOLICY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_PRINCIPALPOLICY_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class PrincipalPolicy
				{
				public:
					enum __ENUM__
					{
						UnauthenticatedPrincipal = 0,
						NoPrincipal = 1,
						WindowsPrincipal = 2,
					};
				};

			}
		}
	}
}
#endif
