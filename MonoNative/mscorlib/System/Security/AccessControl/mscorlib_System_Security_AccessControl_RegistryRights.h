#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_REGISTRYRIGHTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_REGISTRYRIGHTS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class RegistryRights
				{
				public:
					enum __ENUM__
					{
						QueryValues = 1,
						SetValue = 2,
						CreateSubKey = 4,
						EnumerateSubKeys = 8,
						Notify = 16,
						CreateLink = 32,
						Delete = 65536,
						ReadPermissions = 131072,
						WriteKey = 131078,
						ExecuteKey = 131097,
						ReadKey = 131097,
						ChangePermissions = 262144,
						TakeOwnership = 524288,
						FullControl = 983103,
					};
				};

			}
		}
	}
}
#endif
