#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSIONACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSIONACCESS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class FileIOPermissionAccess
				{
				public:
					enum __ENUM__
					{
						NoAccess = 0,
						Read = 1,
						Write = 2,
						Append = 4,
						PathDiscovery = 8,
						AllAccess = 15,
					};
				};

			}
		}
	}
}
#endif
