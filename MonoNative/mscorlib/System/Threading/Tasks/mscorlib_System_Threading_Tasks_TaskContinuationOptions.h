#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCONTINUATIONOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCONTINUATIONOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskContinuationOptions
				{
				public:
					enum __ENUM__
					{
						None = 0,
						PreferFairness = 1,
						LongRunning = 2,
						AttachedToParent = 4,
						DenyChildAttach = 8,
						HideScheduler = 16,
						LazyCancellation = 32,
						NotOnRanToCompletion = 65536,
						NotOnFaulted = 131072,
						OnlyOnCanceled = 196608,
						NotOnCanceled = 262144,
						OnlyOnFaulted = 327680,
						OnlyOnRanToCompletion = 393216,
						ExecuteSynchronously = 524288,
					};
				};

			}
		}
	}
}
#endif
