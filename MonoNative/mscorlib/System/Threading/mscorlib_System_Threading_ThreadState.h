#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADSTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREADSTATE_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ThreadState
			{
			public:
				enum __ENUM__
				{
					Running = 0,
					StopRequested = 1,
					SuspendRequested = 2,
					Background = 4,
					Unstarted = 8,
					Stopped = 16,
					WaitSleepJoin = 32,
					Suspended = 64,
					AbortRequested = 128,
					Aborted = 256,
				};
			};

		}
	}
}
#endif
