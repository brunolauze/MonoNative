#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_LOADHINT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_LOADHINT_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class LoadHint
				{
				public:
					enum __ENUM__
					{
						Default = 0,
						Always = 1,
						Sometimes = 2,
					};
				};

			}
		}
	}
}
#endif
