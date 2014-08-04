#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYACTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYACTION_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class SecurityAction
				{
				public:
					enum __ENUM__
					{
						Demand = 2,
						Assert = 3,
						Deny = 4,
						PermitOnly = 5,
						LinkDemand = 6,
						InheritanceDemand = 7,
						RequestMinimum = 8,
						RequestOptional = 9,
						RequestRefuse = 10,
					};
				};

			}
		}
	}
}
#endif
