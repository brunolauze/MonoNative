#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CER_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ConstrainedExecution
			{

				class Cer
				{
				public:
					enum __ENUM__
					{
						None = 0,
						MayFail = 1,
						Success = 2,
					};
				};

			}
		}
	}
}
#endif
