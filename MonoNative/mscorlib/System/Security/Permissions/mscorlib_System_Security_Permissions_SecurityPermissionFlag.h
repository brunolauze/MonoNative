#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONFLAG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONFLAG_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class SecurityPermissionFlag
				{
				public:
					enum __ENUM__
					{
						NoFlags = 0,
						Assertion = 1,
						UnmanagedCode = 2,
						SkipVerification = 4,
						Execution = 8,
						ControlThread = 16,
						ControlEvidence = 32,
						ControlPolicy = 64,
						SerializationFormatter = 128,
						ControlDomainPolicy = 256,
						ControlPrincipal = 512,
						ControlAppDomain = 1024,
						RemotingConfiguration = 2048,
						Infrastructure = 4096,
						BindingRedirects = 8192,
						AllFlags = 16383,
					};
				};

			}
		}
	}
}
#endif
