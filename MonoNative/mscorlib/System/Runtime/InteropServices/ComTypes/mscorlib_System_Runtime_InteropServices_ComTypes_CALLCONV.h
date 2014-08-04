#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_CALLCONV_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_CALLCONV_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					class CALLCONV
					{
					public:
						enum __ENUM__
						{
							CC_CDECL = 1,
							CC_PASCAL = 2,
							CC_MSCPASCAL = 2,
							CC_MACPASCAL = 3,
							CC_STDCALL = 4,
							CC_RESERVED = 5,
							CC_SYSCALL = 6,
							CC_MPWCDECL = 7,
							CC_MPWPASCAL = 8,
							CC_MAX = 9,
						};
					};

				}
			}
		}
	}
}
#endif
