#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTFAILUREKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_CONTRACTS_CONTRACTFAILUREKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{

				class ContractFailureKind
				{
				public:
					enum __ENUM__
					{
						Precondition = 0,
						Postcondition = 1,
						PostconditionOnException = 2,
						Invariant = 3,
						Assert = 4,
						Assume = 5,
					};
				};

			}
		}
	}
}
#endif
