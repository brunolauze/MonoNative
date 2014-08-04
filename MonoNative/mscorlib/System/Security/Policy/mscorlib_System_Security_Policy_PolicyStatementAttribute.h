#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYSTATEMENTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_POLICYSTATEMENTATTRIBUTE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class PolicyStatementAttribute
				{
				public:
					enum __ENUM__
					{
						Nothing = 0,
						Exclusive = 1,
						LevelFinal = 2,
						All = 3,
					};
				};

			}
		}
	}
}
#endif
