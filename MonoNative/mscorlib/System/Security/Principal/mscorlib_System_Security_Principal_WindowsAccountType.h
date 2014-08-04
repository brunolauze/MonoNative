#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSACCOUNTTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSACCOUNTTYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class WindowsAccountType
				{
				public:
					enum __ENUM__
					{
						Normal = 0,
						Guest = 1,
						System = 2,
						Anonymous = 3,
					};
				};

			}
		}
	}
}
#endif
