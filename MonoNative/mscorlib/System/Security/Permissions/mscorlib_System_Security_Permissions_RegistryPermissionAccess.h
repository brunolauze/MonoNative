#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSIONACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSIONACCESS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class RegistryPermissionAccess
				{
				public:
					enum __ENUM__
					{
						NoAccess = 0,
						Read = 1,
						Write = 2,
						Create = 4,
						AllAccess = 7,
					};
				};

			}
		}
	}
}
#endif
