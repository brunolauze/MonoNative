#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_LOADEROPTIMIZATION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_LOADEROPTIMIZATION_H
namespace mscorlib
{
	namespace System
	{

		class LoaderOptimization
		{
		public:
			enum __ENUM__
			{
				NotSpecified = 0,
				SingleDomain = 1,
				MultiDomain = 2,
				MultiDomainHost = 3,
				DomainMask = 3,
				DisallowBindings = 4,
			};
		};

	}
}
#endif
