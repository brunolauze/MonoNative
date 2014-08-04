#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IMPLTYPEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IMPLTYPEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class IMPLTYPEFLAGS
				{
				public:
					enum __ENUM__
					{
						IMPLTYPEFLAG_FDEFAULT = 1,
						IMPLTYPEFLAG_FSOURCE = 2,
						IMPLTYPEFLAG_FRESTRICTED = 4,
						IMPLTYPEFLAG_FDEFAULTVTABLE = 8,
					};
				};

			}
		}
	}
}
#endif
