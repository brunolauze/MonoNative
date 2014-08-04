#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_HOSTPROTECTIONRESOURCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_HOSTPROTECTIONRESOURCE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class HostProtectionResource
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Synchronization = 1,
						SharedState = 2,
						ExternalProcessMgmt = 4,
						SelfAffectingProcessMgmt = 8,
						ExternalThreading = 16,
						SelfAffectingThreading = 32,
						SecurityInfrastructure = 64,
						UI = 128,
						MayLeakOnAbort = 256,
						All = 511,
					};
				};

			}
		}
	}
}
#endif
