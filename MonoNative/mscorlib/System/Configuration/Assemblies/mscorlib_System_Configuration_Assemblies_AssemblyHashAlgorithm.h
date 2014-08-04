#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYHASHALGORITHM_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYHASHALGORITHM_H
namespace mscorlib
{
	namespace System
	{
		namespace Configuration
		{
			namespace Assemblies
			{

				class AssemblyHashAlgorithm
				{
				public:
					enum __ENUM__
					{
						None = 0,
						MD5 = 32771,
						SHA1 = 32772,
						SHA256 = 32780,
						SHA384 = 32781,
						SHA512 = 32782,
					};
				};

			}
		}
	}
}
#endif
