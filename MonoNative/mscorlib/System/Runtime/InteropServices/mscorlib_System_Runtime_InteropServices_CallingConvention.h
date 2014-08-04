#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CALLINGCONVENTION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CALLINGCONVENTION_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class CallingConvention
				{
				public:
					enum __ENUM__
					{
						Winapi = 1,
						Cdecl = 2,
						StdCall = 3,
						ThisCall = 4,
						FastCall = 5,
					};
				};

			}
		}
	}
}
#endif
