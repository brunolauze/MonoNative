#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSIONFLAG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSIONFLAG_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class ReflectionPermissionFlag
				{
				public:
					enum __ENUM__
					{
						NoFlags = 0,
						TypeInformation = 1,
						MemberAccess = 2,
						ReflectionEmit = 4,
						AllFlags = 7,
						RestrictedMemberAccess = 8,
					};
				};

			}
		}
	}
}
#endif
