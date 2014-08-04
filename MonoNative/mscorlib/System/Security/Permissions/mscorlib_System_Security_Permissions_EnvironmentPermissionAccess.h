#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ENVIRONMENTPERMISSIONACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ENVIRONMENTPERMISSIONACCESS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class EnvironmentPermissionAccess
				{
				public:
					enum __ENUM__
					{
						NoAccess = 0,
						Read = 1,
						Write = 2,
						AllAccess = 3,
					};
				};

			}
		}
	}
}
#endif
