#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_SECURITYINFOS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_SECURITYINFOS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class SecurityInfos
				{
				public:
					enum __ENUM__
					{
						Owner = 1,
						Group = 2,
						DiscretionaryAcl = 4,
						SystemAcl = 8,
					};
				};

			}
		}
	}
}
#endif
