#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class KeyContainerPermissionFlags
				{
				public:
					enum __ENUM__
					{
						NoFlags = 0,
						Create = 1,
						Open = 2,
						Delete = 4,
						Import = 16,
						Export = 32,
						Sign = 256,
						Decrypt = 512,
						ViewAcl = 4096,
						ChangeAcl = 8192,
						AllFlags = 13111,
					};
				};

			}
		}
	}
}
#endif
