#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYHIVE_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYHIVE_H
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryHive
			{
			public:
				enum __ENUM__
				{
					ClassesRoot = -2147483648,
					CurrentUser = -2147483647,
					LocalMachine = -2147483646,
					Users = -2147483645,
					PerformanceData = -2147483644,
					CurrentConfig = -2147483643,
					DynData = -2147483642,
				};
			};

		}
	}
}
#endif
