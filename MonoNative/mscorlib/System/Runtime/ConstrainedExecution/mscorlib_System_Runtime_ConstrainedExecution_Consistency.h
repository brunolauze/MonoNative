#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CONSISTENCY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CONSISTENCY_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ConstrainedExecution
			{

				class Consistency
				{
				public:
					enum __ENUM__
					{
						MayCorruptProcess = 0,
						MayCorruptAppDomain = 1,
						MayCorruptInstance = 2,
						WillNotCorruptState = 3,
					};
				};

			}
		}
	}
}
#endif
