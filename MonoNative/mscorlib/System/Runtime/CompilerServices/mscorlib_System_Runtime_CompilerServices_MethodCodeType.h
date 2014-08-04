#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODCODETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODCODETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class MethodCodeType
				{
				public:
					enum __ENUM__
					{
						IL = 0,
						Native = 1,
						OPTIL = 2,
						Runtime = 3,
					};
				};

			}
		}
	}
}
#endif
