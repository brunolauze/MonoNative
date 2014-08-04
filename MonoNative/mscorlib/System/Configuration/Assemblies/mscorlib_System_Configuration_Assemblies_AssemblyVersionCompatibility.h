#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYVERSIONCOMPATIBILITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CONFIGURATION_ASSEMBLIES_ASSEMBLYVERSIONCOMPATIBILITY_H
namespace mscorlib
{
	namespace System
	{
		namespace Configuration
		{
			namespace Assemblies
			{

				class AssemblyVersionCompatibility
				{
				public:
					enum __ENUM__
					{
						SameMachine = 1,
						SameProcess = 2,
						SameDomain = 3,
					};
				};

			}
		}
	}
}
#endif
