#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_FILESYSTEMRIGHTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_FILESYSTEMRIGHTS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class FileSystemRights
				{
				public:
					enum __ENUM__
					{
						ListDirectory = 1,
						ReadData = 1,
						CreateFiles = 2,
						WriteData = 2,
						CreateDirectories = 4,
						AppendData = 4,
						ReadExtendedAttributes = 8,
						WriteExtendedAttributes = 16,
						ExecuteFile = 32,
						Traverse = 32,
						DeleteSubdirectoriesAndFiles = 64,
						ReadAttributes = 128,
						WriteAttributes = 256,
						Write = 278,
						Delete = 65536,
						ReadPermissions = 131072,
						Read = 131209,
						ReadAndExecute = 131241,
						Modify = 197055,
						ChangePermissions = 262144,
						TakeOwnership = 524288,
						Synchronize = 1048576,
						FullControl = 2032127,
					};
				};

			}
		}
	}
}
#endif
