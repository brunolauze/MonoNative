#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_HOSTSECURITYMANAGEROPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_HOSTSECURITYMANAGEROPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class HostSecurityManagerOptions
			{
			public:
				enum __ENUM__
				{
					None = 0,
					HostAppDomainEvidence = 1,
					HostPolicyLevel = 2,
					HostAssemblyEvidence = 4,
					HostDetermineApplicationTrust = 8,
					HostResolvePolicy = 16,
					AllFlags = 31,
				};
			};

		}
	}
}
#endif
