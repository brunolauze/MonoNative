#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCLARGEOBJECTHEAPCOMPACTIONMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_GCLARGEOBJECTHEAPCOMPACTIONMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			class GCLargeObjectHeapCompactionMode
			{
			public:
				enum __ENUM__
				{
					Default = 1,
					CompactOnce = 2,
				};
			};

		}
	}
}
#endif
