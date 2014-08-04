#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_TOKENACCESSLEVELS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_TOKENACCESSLEVELS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class TokenAccessLevels
				{
				public:
					enum __ENUM__
					{
						AssignPrimary = 1,
						Duplicate = 2,
						Impersonate = 4,
						Query = 8,
						QuerySource = 16,
						AdjustPrivileges = 32,
						AdjustGroups = 64,
						AdjustDefault = 128,
						AdjustSessionId = 256,
						Read = 131080,
						Write = 131296,
						AllAccess = 983551,
						MaximumAllowed = 33554432,
					};
				};

			}
		}
	}
}
#endif
