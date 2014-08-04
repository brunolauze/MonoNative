#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GCCOLLECTIONMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GCCOLLECTIONMODE_H
namespace mscorlib
{
	namespace System
	{

		class GCCollectionMode
		{
		public:
			enum __ENUM__
			{
				Default = 0,
				Forced = 1,
				Optimized = 2,
			};
		};

	}
}
#endif
