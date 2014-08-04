#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LAZYTHREADSAFETYMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_LAZYTHREADSAFETYMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class LazyThreadSafetyMode
			{
			public:
				enum __ENUM__
				{
					None = 0,
					PublicationOnly = 1,
					ExecutionAndPublication = 2,
				};
			};

		}
	}
}
#endif
