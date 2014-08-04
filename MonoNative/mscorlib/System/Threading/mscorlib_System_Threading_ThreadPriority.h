#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADPRIORITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADPRIORITY_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ThreadPriority
			{
			public:
				enum __ENUM__
				{
					Lowest = 0,
					BelowNormal = 1,
					Normal = 2,
					AboveNormal = 3,
					Highest = 4,
				};
			};

		}
	}
}
#endif
