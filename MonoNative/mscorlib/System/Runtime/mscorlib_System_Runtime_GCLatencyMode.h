#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCLATENCYMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCLATENCYMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			class GCLatencyMode
			{
			public:
				enum __ENUM__
				{
					Batch = 0,
					Interactive = 1,
					LowLatency = 2,
					SustainedLowLatency = 3,
				};
			};

		}
	}
}
#endif
