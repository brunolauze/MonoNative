#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEDIALOGPERMISSIONACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEDIALOGPERMISSIONACCESS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class FileDialogPermissionAccess
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Open = 1,
						Save = 2,
						OpenSave = 3,
					};
				};

			}
		}
	}
}
#endif
