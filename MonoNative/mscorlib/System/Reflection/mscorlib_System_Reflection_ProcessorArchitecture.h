#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROCESSORARCHITECTURE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROCESSORARCHITECTURE_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ProcessorArchitecture
			{
			public:
				enum __ENUM__
				{
					None = 0,
					MSIL = 1,
					X86 = 2,
					IA64 = 3,
					Amd64 = 4,
					Arm = 5,
				};
			};

		}
	}
}
#endif
