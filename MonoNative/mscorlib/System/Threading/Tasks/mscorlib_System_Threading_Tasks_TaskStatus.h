#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKSTATUS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_TASKS_TASKSTATUS_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{
			namespace Tasks
			{

				class TaskStatus
				{
				public:
					enum __ENUM__
					{
						Created = 0,
						WaitingForActivation = 1,
						WaitingToRun = 2,
						Running = 3,
						WaitingForChildrenToComplete = 4,
						RanToCompletion = 5,
						Canceled = 6,
						Faulted = 7,
					};
				};

			}
		}
	}
}
#endif
