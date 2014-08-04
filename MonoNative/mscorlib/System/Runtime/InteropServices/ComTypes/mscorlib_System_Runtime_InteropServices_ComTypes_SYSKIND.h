#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_SYSKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_SYSKIND_H
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

					class SYSKIND
					{
					public:
						enum __ENUM__
						{
							SYS_WIN16 = 0,
							SYS_WIN32 = 1,
							SYS_MAC = 2,
							SYS_WIN64 = 3,
						};
					};

				}
			}
		}
	}
}
#endif
