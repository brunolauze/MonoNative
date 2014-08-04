#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCREATIONOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKCREATIONOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskCreationOptions
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
					};
				};

			}
		}
	}
}
#endif
