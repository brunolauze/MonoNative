#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAMEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAMEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class AssemblyNameFlags
			{
			public:
				enum __ENUM__
				{
					None = 0,
					PublicKey = 1,
					Retargetable = 256,
					EnableJITcompileOptimizer = 16384,
					EnableJITcompileTracking = 32768,
				};
			};

		}
	}
}
#endif
