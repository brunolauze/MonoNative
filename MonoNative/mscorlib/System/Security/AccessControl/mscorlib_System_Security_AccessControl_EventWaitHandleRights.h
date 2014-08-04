#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLERIGHTS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLERIGHTS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class EventWaitHandleRights
				{
				public:
					enum __ENUM__
					{
						Modify = 2,
						Delete = 65536,
						ReadPermissions = 131072,
						ChangePermissions = 262144,
						TakeOwnership = 524288,
						Synchronize = 1048576,
						FullControl = 2031619,
					};
				};

			}
		}
	}
}
#endif
