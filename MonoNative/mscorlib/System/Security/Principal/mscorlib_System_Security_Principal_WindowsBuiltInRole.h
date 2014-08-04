#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSBUILTINROLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSBUILTINROLE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class WindowsBuiltInRole
				{
				public:
					enum __ENUM__
					{
						Administrator = 544,
						User = 545,
						Guest = 546,
						PowerUser = 547,
						AccountOperator = 548,
						SystemOperator = 549,
						PrintOperator = 550,
						BackupOperator = 551,
						Replicator = 552,
					};
				};

			}
		}
	}
}
#endif
