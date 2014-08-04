#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXTSTATES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXTSTATES_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class StreamingContextStates
				{
				public:
					enum __ENUM__
					{
						CrossProcess = 1,
						CrossMachine = 2,
						File = 4,
						Persistence = 8,
						Remoting = 16,
						Other = 32,
						Clone = 64,
						CrossAppDomain = 128,
						All = 255,
					};
				};

			}
		}
	}
}
#endif
